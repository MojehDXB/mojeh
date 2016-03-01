<?php
/**
 * @file
 * mojeh_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mojeh_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mojeh_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_homebox().
 */
function mojeh_features_homebox() {
  $homeboxes = array();

  $homeboxes['editor_dashboard'] = array (
    'regions' => 3,
    'cache' => 0,
    'color' => 1,
    'colors' => 
    array (
      0 => '#E4F0F8',
      1 => '#E4F0F8',
      2 => '#E4F0F8',
      3 => '#E4F0F8',
      4 => '#E4F0F8',
      5 => '#E4F0F8',
    ),
    'blocks' => 
    array (
      'system_navigation' => 
      array (
        'module' => 'system',
        'delta' => 'navigation',
        'region' => 3,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => '',
        'weight' => -11,
      ),
    ),
    'widths' => 
    array (
    ),
    'title' => 'Editor Dashboard',
    'path' => 'dashboard/editor',
    'menu' => 1,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 1,
    'roles' => 
    array (
      0 => 'Editor',
    ),
  );


  return $homeboxes;
}

/**
 * Implements hook_image_default_styles().
 */
function mojeh_features_image_default_styles() {
  $styles = array();

  // Exported image style: adaptive_image.
  $styles['adaptive_image'] = array(
    'name' => 'adaptive_image',
    'label' => 'Adaptive Image',
    'effects' => array(
      4 => array(
        'label' => 'Adaptive',
        'help' => 'Adaptive image scale according to client resolution.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'adaptive_image_scale_form',
        'summary theme' => 'adaptive_image_scale_summary',
        'module' => 'adaptive_image',
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => 1382,
          'upscale' => '',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: feed_slide.
  $styles['feed_slide'] = array(
    'name' => 'feed_slide',
    'label' => 'Feed Slide',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 220,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_ribbon.
  $styles['homepage_ribbon'] = array(
    'name' => 'homepage_ribbon',
    'label' => 'Homepage Ribbon',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 282,
          'height' => 154,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: promoted_slide.
  $styles['promoted_slide'] = array(
    'name' => 'promoted_slide',
    'label' => 'Promoted Slide',
    'effects' => array(
      5 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 308,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ribbon_subscribe.
  $styles['ribbon_subscribe'] = array(
    'name' => 'ribbon_subscribe',
    'label' => 'Ribbon Subscribe',
    'effects' => array(
      9 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 178,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: the_daily_slideshow.
  $styles['the_daily_slideshow'] = array(
    'name' => 'the_daily_slideshow',
    'label' => 'The Daily Slideshow',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 152,
          'height' => 98,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function mojeh_features_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Create a content article'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'feature' => array(
      'name' => t('Feature'),
      'base' => 'node_content',
      'description' => t('Create a content Feature'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('Create a gallery for the system'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'issue_' => array(
      'name' => t('Issue #'),
      'base' => 'node_content',
      'description' => t('Defines an Issue Number '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Create a content page linked to the main/footer menu'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Create a video for the website'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function mojeh_features_default_search_api_index() {
  $items = array();
  $items['article_content'] = entity_import('search_api_index', '{
    "name" : "Article Content",
    "machine_name" : "article_content",
    "description" : null,
    "server" : "local_database",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "500",
      "fields" : {
        "field_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_description:value" : { "type" : "text" },
        "field_intro:value" : { "type" : "text" },
        "field_pullquote_with_image:field_contributor_description" : { "type" : "list\\u003Ctext\\u003E" },
        "field_pullquote_with_image:field_contributor_title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_pullquote_with_image:field_pullquote" : { "type" : "list\\u003Ctext\\u003E" },
        "field_pullquote_with_image:field_pullquote_quotee" : { "type" : "list\\u003Ctext\\u003E" },
        "field_slideshow_caption" : { "type" : "text" },
        "field_sub_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_text_blocks:value" : { "type" : "list\\u003Ctext\\u003E" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "21.0" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "article" : "article",
              "feature" : "feature",
              "gallery" : "gallery",
              "the_daily" : "the_daily",
              "video" : "video"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_blurb" : true,
              "field_intro" : true,
              "field_text_blocks" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_blurb" : true,
              "field_intro" : true,
              "field_text_blocks" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_blurb" : true,
              "field_intro" : true,
              "field_text_blocks" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_blurb" : true,
              "field_intro" : true,
              "field_text_blocks" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function mojeh_features_default_search_api_server() {
  $items = array();
  $items['local_database'] = entity_import('search_api_server', '{
    "name" : "Local Database",
    "machine_name" : "local_database",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 1,
      "indexes" : { "article_content" : {
          "title" : {
            "table" : "search_api_db_article_content_text",
            "type" : "text",
            "boost" : "21.0"
          },
          "field_category" : {
            "table" : "search_api_db_article_content",
            "column" : "field_category",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_sub_category" : {
            "table" : "search_api_db_article_content",
            "column" : "field_sub_category",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_article_content_field_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_article_content",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_slideshow_caption" : {
            "table" : "search_api_db_article_content_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_description:value" : {
            "table" : "search_api_db_article_content_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_intro:value" : {
            "table" : "search_api_db_article_content_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_text_blocks:value" : {
            "table" : "search_api_db_article_content_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_pullquote_with_image:field_contributor_title" : {
            "table" : "search_api_db_article_content_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_pullquote_with_image:field_contributor_description" : {
            "table" : "search_api_db_article_content_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_pullquote_with_image:field_pullquote" : {
            "table" : "search_api_db_article_content_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_pullquote_with_image:field_pullquote_quotee" : {
            "table" : "search_api_db_article_content_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}

/**
 * Implements hook_workflow_default_workflows().
 */
function mojeh_features_workflow_default_workflows() {
  $workflows = array();

  // Exported workflow: Publishing
  $workflows['Publishing'] = array(
    'name' => 'Publishing',
    'tab_roles' => 'authenticated user',
    'options' => array(
      'name_as_title' => 0,
      'options' => 'radios',
      'schedule' => 1,
      'schedule_timezone' => 1,
      'comment_log_node' => 0,
      'comment_log_tab' => 0,
      'watchdog_log' => 0,
      'history_tab_show' => 1,
    ),
    'states' => array(
      5 => array(
        'weight' => -50,
        '' . "\0" . '*' . "\0" . 'sysid' => 1,
        '' . "\0" . '*' . "\0" . 'state' => '(creation)',
        'status' => 1,
        'name' => '(creation)',
      ),
      6 => array(
        'weight' => -20,
        '' . "\0" . '*' . "\0" . 'sysid' => 0,
        '' . "\0" . '*' . "\0" . 'state' => 'Review',
        'status' => 1,
        'name' => 'Review',
      ),
      7 => array(
        'weight' => -20,
        '' . "\0" . '*' . "\0" . 'sysid' => 0,
        '' . "\0" . '*' . "\0" . 'state' => 'Publish',
        'status' => 1,
        'name' => 'Publish',
      ),
    ),
    'transitions' => array(
      0 => array(
        'state_name' => '(creation)',
        'target_state_name' => 'Review',
        'roles' => 'workflow_features_author_name,Editor',
      ),
      1 => array(
        'state_name' => '(creation)',
        'target_state_name' => 'Publish',
        'roles' => 'Manager',
      ),
      2 => array(
        'state_name' => 'Review',
        'target_state_name' => 'Publish',
        'roles' => 'Manager',
      ),
      3 => array(
        'state_name' => 'Publish',
        'target_state_name' => 'Review',
        'roles' => 'Manager',
      ),
    ),
    'node_types' => array(
      0 => 'article',
      1 => 'feature',
      2 => 'gallery',
      3 => 'page',
      4 => 'video',
    ),
  );

  return $workflows;
}
