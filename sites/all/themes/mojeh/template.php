<?php

/**
 * Here we override the default HTML output of drupal.
 * refer to http://drupal.org/node/550722
 */

// Auto-rebuild the theme registry during theme development.
if (theme_get_setting('clear_registry')) {
  // Rebuild .info data.
  system_rebuild_theme_data();
  // Rebuild theme registry.
  drupal_theme_rebuild();
}

// Add Zen Tabs styles
if (theme_get_setting('mojeh_tabs')) {
  drupal_add_css( drupal_get_path('theme', 'mojeh') .'/css/tabs.css');
}

function mojeh_preprocess_html(&$vars) {
  global $user, $language;

  // Add role name classes (to allow css based show for admin/hidden from user)
  foreach ($user->roles as $role){
    $vars['classes_array'][] = 'role-' . mojeh_id_safe($role);
  }

  // HTML Attributes
  // Use a proper attributes array for the html attributes.
  $vars['html_attributes'] = array();
  $vars['html_attributes']['lang'][] = $language->language;
  $vars['html_attributes']['dir'][] = $language->dir;

  // Convert RDF Namespaces into structured data using drupal_attributes.
  $vars['rdf_namespaces'] = array();
  if (function_exists('rdf_get_namespaces')) {
    foreach (rdf_get_namespaces() as $prefix => $uri) {
      $prefixes[] = $prefix . ': ' . $uri;
    }
    $vars['rdf_namespaces']['prefix'] = implode(' ', $prefixes);
  }

  // Flatten the HTML attributes and RDF namespaces arrays.
  $vars['html_attributes'] = drupal_attributes($vars['html_attributes']);
  $vars['rdf_namespaces'] = drupal_attributes($vars['rdf_namespaces']);

  if (!$vars['is_front']) {
    // Add unique classes for each page and website section
    $path = drupal_get_path_alias($_GET['q']);
    list($section, ) = explode('/', $path, 2);
    $vars['classes_array'][] = 'with-subnav';
    $vars['classes_array'][] = mojeh_id_safe('page-'. $path);
    $vars['classes_array'][] = mojeh_id_safe('section-'. $section);

    if (arg(0) == 'node') {
      if (arg(1) == 'add') {
        if ($section == 'node') {
          // Remove 'section-node'
          array_pop( $vars['classes_array'] );
        }
        // Add 'section-node-add'
        $vars['classes_array'][] = 'section-node-add';
      }
      elseif (is_numeric(arg(1)) && (arg(2) == 'edit' || arg(2) == 'delete')) {
        if ($section == 'node') {
          // Remove 'section-node'
          array_pop( $vars['classes_array']);
        }
        // Add 'section-node-edit' or 'section-node-delete'
        $vars['classes_array'][] = 'section-node-'. arg(2);
      }
    }
  }
  //for normal un-themed edit pages
  if ((arg(0) == 'node') && (arg(2) == 'edit')) {
    $vars['template_files'][] =  'page';
  }

  // Add IE classes.
  if (theme_get_setting('mojeh_ie_enabled')) {
    $mojeh_ie_enabled_versions = theme_get_setting('mojeh_ie_enabled_versions');
    if (in_array('ie8', $mojeh_ie_enabled_versions, TRUE)) {
      drupal_add_css(path_to_theme() . '/css/ie8.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
      drupal_add_js(path_to_theme() . '/js/selectivizr-min.js');
    }
    if (in_array('ie9', $mojeh_ie_enabled_versions, TRUE)) {
      drupal_add_css(path_to_theme() . '/css/ie9.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 9', '!IE' => FALSE), 'preprocess' => FALSE));
    }
    if (in_array('ie10', $mojeh_ie_enabled_versions, TRUE)) {
      drupal_add_css(path_to_theme() . '/css/ie10.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 10', '!IE' => FALSE), 'preprocess' => FALSE));
    }
  }

}

function mojeh_preprocess_page(&$vars, $hook) {
  if (isset($vars['node_title'])) {
    $vars['title'] = $vars['node_title'];
  }
  // Adding classes whether #navigation is here or not
  if (!empty($vars['main_menu']) or !empty($vars['sub_menu'])) {
    $vars['classes_array'][] = 'with-navigation';
  }
  if (!empty($vars['secondary_menu'])) {
    $vars['classes_array'][] = 'with-subnav';
  }

  // Add first/last classes to node listings about to be rendered.
  if (isset($vars['page']['content']['system_main']['nodes'])) {
    // All nids about to be loaded (without the #sorted attribute).
    $nids = element_children($vars['page']['content']['system_main']['nodes']);
    // Only add first/last classes if there is more than 1 node being rendered.
    if (count($nids) > 1) {
      $first_nid = reset($nids);
      $last_nid = end($nids);
      $first_node = $vars['page']['content']['system_main']['nodes'][$first_nid]['#node'];
      $first_node->classes_array = array('first');
      $last_node = $vars['page']['content']['system_main']['nodes'][$last_nid]['#node'];
      $last_node->classes_array = array('last');
    }
  }

  // Allow page override template suggestions based on node content type.
  if (isset($vars['node']->type) && isset($vars['node']->nid)) {
    $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
    $vars['theme_hook_suggestions'][] = "page__node__" . $vars['node']->nid;
  }

  //Provide variables if we are in the proper category pages
  $vars['mojeh_category'] = '';
  $vars['mojeh_sub_category'] = '';

  //Case 1: User is in a landing page...
  if(arg(0) == 'landing-pages')
  {
     if(arg(1) != null && arg(1) != 'all')
        $vars['mojeh_category'] = '<span id="bread-cat">' . l(arg(1),'landing-pages/' . arg(1)) . '</span>';
     if(arg(2) != null && arg(2) != 'all')
        $vars['mojeh_sub_category'] = '<span id="bread-subcat">' . l(arg(2),'landing-pages/' . arg(1) . '/' . arg(2)) . '</span>';
  }
  
  if(drupal_is_front_page())
  {
    $vars['mojeh_category'] = '<span id="bread-cat"><a href="/">Cover Page</a></span>';
    $vars['mojeh_sub_category'] = '<span id="bread-subcat"></span>';
    
  }

  //Case 3: User is in a node page...
  if(isset($vars['node']->type) && isset($vars['node']->nid)) 
  {
     if(isset($vars['node']->field_category[$vars['node']->language][0]['tid']))
     {
        $term = taxonomy_term_load($vars['node']->field_category[$vars['node']->language][0]['tid']);
        $vars['mojeh_category'] = '<span id="bread-cat">' . l($term->name,'landing-pages/' . $term->name) . '</span>';
     }
     if(isset($vars['node']->field_sub_category[$vars['node']->language][0]['tid']))
     {
        $termc = taxonomy_term_load($vars['node']->field_category[$vars['node']->language][0]['tid']);
        $term = taxonomy_term_load($vars['node']->field_sub_category[$vars['node']->language][0]['tid']);
        $vars['mojeh_sub_category'] = '<span id="bread-subcat">' . l($term->name,'landing-pages/' . $termc->name . '/' . $term->name) . '</span>';
     }
  }
}

function mojeh_preprocess_node(&$vars) {
  // Add a striping class.
  $vars['classes_array'][] = 'node-' . $vars['zebra'];

  // Add $unpublished variable.
  $vars['unpublished'] = (!$vars['status']) ? TRUE : FALSE;

  // Merge first/last class (from mojeh_preprocess_page) into classes array of current node object.
  $node = $vars['node'];
  if (!empty($node->classes_array)) {
    $vars['classes_array'] = array_merge($vars['classes_array'], $node->classes_array);
  }
}

function mojeh_preprocess_block(&$vars, $hook) {
  // Add a striping class.
  $vars['classes_array'][] = 'block-' . $vars['block_zebra'];

  // Add first/last block classes
  $first_last = "";
  // If block id (count) is 1, it's first in region.
  if ($vars['block_id'] == '1') {
    $first_last = "first";
    $vars['classes_array'][] = $first_last;
  }
  // Count amount of blocks about to be rendered in that region.
  $block_count = count(block_list($vars['elements']['#block']->region));
  if ($vars['block_id'] == $block_count) {
    $first_last = "last";
    $vars['classes_array'][] = $first_last;
  }
}

/**
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return
 *   A string containing the breadcrumb output.
 */
function mojeh_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  // Determine if we are to display the breadcrumb.
  $show_breadcrumb = theme_get_setting('mojeh_breadcrumb');
  if ($show_breadcrumb == 'yes' || $show_breadcrumb == 'admin' && arg(0) == 'admin') {

    // Optionally get rid of the homepage link.
    $show_breadcrumb_home = theme_get_setting('mojeh_breadcrumb_home');
    if (!$show_breadcrumb_home) {
      array_shift($breadcrumb);
    }

    // Return the breadcrumb with separators.
    if (!empty($breadcrumb)) {
      $breadcrumb_separator = theme_get_setting('mojeh_breadcrumb_separator');
      $trailing_separator = $title = '';
      if (theme_get_setting('mojeh_breadcrumb_title')) {
        $item = menu_get_item();
        if (!empty($item['tab_parent'])) {
          // If we are on a non-default tab, use the tab's title.
          $title = check_plain($item['title']);
        }
        else {
          $title = drupal_get_title();
        }
        if ($title) {
          $trailing_separator = $breadcrumb_separator;
        }
      }
      elseif (theme_get_setting('mojeh_breadcrumb_trailing')) {
        $trailing_separator = $breadcrumb_separator;
      }

      // Provide a navigational heading to give context for breadcrumb links to
      // screen-reader users. Make the heading invisible with .element-invisible.
      $heading = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

      return $heading . '<div class="breadcrumb">' . implode($breadcrumb_separator, $breadcrumb) . $trailing_separator . $title . '</div>';
    }
  }
  // Otherwise, return an empty string.
  return '';
}

/**
 * Converts a string to a suitable html ID attribute.
 *
 * http://www.w3.org/TR/html4/struct/global.html#h-7.5.2 specifies what makes a
 * valid ID attribute in HTML. This function:
 *
 * - Ensure an ID starts with an alpha character by optionally adding an 'n'.
 * - Replaces any character except A-Z, numbers, and underscores with dashes.
 * - Converts entire string to lowercase.
 *
 * @param $string
 *  The string
 * @return
 *  The converted string
 */
function mojeh_id_safe($string) {
  // Replace with dashes anything that isn't A-Z, numbers, dashes, or underscores.
  $string = strtolower(preg_replace('/[^a-zA-Z0-9_-]+/', '-', $string));
  // If the first character is not a-z, add 'n' in front.
  if (!ctype_lower($string{0})) { // Don't use ctype_alpha since its locale aware.
    $string = 'id'. $string;
  }
  return $string;
}

/**
 * Generate the HTML output for a menu link and submenu.
 *
 * @param $variables
 *  An associative array containing:
 *   - element: Structured array data for a menu link.
 *
 * @return
 *  A themed HTML string.
 *
 * @ingroup themeable
 *
 */
function mojeh_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  // Adding a class depending on the TITLE of the link (not constant)
  $element['#attributes']['class'][] = mojeh_id_safe($element['#title']);
  // Adding a class depending on the ID of the link (constant)
  if (isset($element['#original_link']['mlid']) && !empty($element['#original_link']['mlid'])) {
    $element['#attributes']['class'][] = 'mid-' . $element['#original_link']['mlid'];
  }
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Override or insert variables into theme_menu_local_task().
 */
function mojeh_preprocess_menu_local_task(&$variables) {
  $link =& $variables['element']['#link'];

  // If the link does not contain HTML already, check_plain() it now.
  // After we set 'html'=TRUE the link will not be sanitized by l().
  if (empty($link['localized_options']['html'])) {
    $link['title'] = check_plain($link['title']);
  }
  $link['localized_options']['html'] = TRUE;
  $link['title'] = '<span class="tab">' . $link['title'] . '</span>';
}

/**
 * Duplicate of theme_menu_local_tasks() but adds clearfix to tabs.
 */
function mojeh_menu_local_tasks(&$variables) {
  $output = '';
   
if(isset($variables['primary']))   
   //Prevent tabs from using pretty load
   foreach($variables['primary'] as $menu_item_key => $menu_attributes) {
      $variables['primary'][$menu_item_key]['#link']['localized_options']['attributes']['class'][] = 'no-prettyload';
   }


  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}


/**
 * Implements hook_js_alter()
 */

function mojeh_js_alter(&$javascript) {
  // Collect the scripts we want in to remain in the header scope.
  $footer_scripts = array(
    'sites/all/themes/mojeh/js/plugins.js',
    'sites/all/themes/mojeh/js/main.js'
  );

  // Change the default scope of all other scripts to footer.
  // We assume if the script is scoped to header it was done so by default.
  foreach ($javascript as $key => &$script) {
    if (in_array($script['data'], $footer_scripts)) {
      $script['scope'] = 'footer'; 
  }
}
}


function mojeh_item_list($variables) {
  $items = $variables['items'];
    $title = $variables['title'];
    $type = $variables['type'];
    $attributes = $variables['attributes'];

    // Only output the list container and title, if there are any list items.
    // Check to see whether the block title exists before adding a header.
    // Empty headers are not semantic and present accessibility challenges.
    if (!empty($items)) {
      $output .= "<$type" . drupal_attributes($attributes) . '>';
      $num_items = count($items);
      $i = 0;
      foreach ($items as $item) {
        $attributes = array();
        $children = array();
        $data = '';
        $i++;
        if (is_array($item)) {
          foreach ($item as $key => $value) {
            if ($key == 'data') {
              $data = $value;
            }
            elseif ($key == 'children') {
              $children = $value;
            }
            else {
              $attributes[$key] = $value;
            }
          }
        }
        else {
          $data = $item;
        }
        if (count($children) > 0) {
          // Render nested list.
          $data .= theme_item_list(array('items' => $children, 'title' => NULL, 'type' => $type, 'attributes' => $attributes));
        }
        if ($i == 1) {
          $attributes['class'][] = 'first control-pager';
        }
        if ($i == $num_items) {
          $attributes['class'][] = 'last control-pager';
        }
        $output .= '<li' . drupal_attributes($attributes) . '>' . $data . "</li>\n";
      }
      $output .= "</$type>";
    }
    return $output;
}

