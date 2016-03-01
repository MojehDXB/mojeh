<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */

$current_page = isset($view->query->pager->current_page) ? $view->query->pager->current_page : 0;
$total_pages = $view->query->pager->options['items_per_page'] > 0 ? ceil($view->total_rows/$view->query->pager->options['items_per_page']) : 0;
?>

<?php if ($attachment_before): ?>
   <?php print $attachment_before; ?>
<?php endif; ?>

<?php if ($rows): ?>
   <section class="latest <?php print arg(1) != 'all' ? $classes : ''; ?>">
   <?php if(drupal_is_front_page()): ?>
        <!-- <ul id="latest-scroller">
          <li>Latest In:</li>
          <li><a href="#latest-in-fashion">Fashion</a></li>
          <li><a href="#latest-in-beauty">Beauty</a></li>
          <li><a href="#latest-in-accessories">Accessories</a></li>
          <li><a href="#latest-in-culture">Culture</a></li>
          <li><a href="#latest-in-men">Men</a></li>
        </ul> -->
   <?php endif; ?>

   <?php print $rows; ?>
      
   </section>
<?php endif; ?>


