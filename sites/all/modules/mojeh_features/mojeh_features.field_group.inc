<?php
/**
 * @file
 * mojeh_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mojeh_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_base_information|node|article|form';
  $field_group->group_name = 'group_base_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_container';
  $field_group->data = array(
    'label' => 'Base Information',
    'weight' => '24',
    'children' => array(
      0 => 'field_blurb',
      1 => 'field_issue_',
      2 => 'field_landing_page_image',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-base-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_base_information|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_base_information|node|feature|form';
  $field_group->group_name = 'group_base_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feature';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_container';
  $field_group->data = array(
    'label' => 'Base Information',
    'weight' => '27',
    'children' => array(
      0 => 'field_issue_',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-base-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_base_information|node|feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categorization|node|article|form';
  $field_group->group_name = 'group_categorization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_container';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '25',
    'children' => array(
      0 => 'field_category',
      1 => 'field_sub_category',
      2 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-categorization field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_categorization|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categorization|node|feature|form';
  $field_group->group_name = 'group_categorization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feature';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_container';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '28',
    'children' => array(
      0 => 'field_category',
      1 => 'field_sub_category',
      2 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_categorization|node|feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|article|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_container';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '26',
    'children' => array(
      0 => 'field_text_blocks',
      1 => 'field_vimeo_video',
      2 => 'field_image',
      3 => 'field_inline_gallery_slideshow',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|feature|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feature';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_container';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '29',
    'children' => array(
      0 => 'field_blurb',
      1 => 'field_intro',
      2 => 'field_contributor',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display_fields|node|feature|form';
  $field_group->group_name = 'group_display_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feature';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_container';
  $field_group->data = array(
    'label' => 'Display Fields',
    'weight' => '30',
    'children' => array(
      0 => 'field_image',
      1 => 'field_inline_gallery_slideshow',
      2 => 'field_vimeo_video',
      3 => 'field_text_blocks',
      4 => 'field_pullquote_with_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_display_fields|node|feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_container|node|article|form';
  $field_group->group_name = 'group_main_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Container',
    'weight' => '20',
    'children' => array(
      0 => 'group_base_information',
      1 => 'group_categorization',
      2 => 'group_content',
      3 => 'group_mojeh_system',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main-container field-group-tabs',
      ),
    ),
  );
  $export['group_main_container|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_container|node|feature|form';
  $field_group->group_name = 'group_main_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feature';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Container',
    'weight' => '27',
    'children' => array(
      0 => 'group_base_information',
      1 => 'group_categorization',
      2 => 'group_content',
      3 => 'group_media',
      4 => 'group_mojeh_system',
      5 => 'group_display_fields',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main-container field-group-tabs',
      ),
    ),
  );
  $export['group_main_container|node|feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|feature|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feature';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_container';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '31',
    'children' => array(
      0 => 'field_landing_page_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mojeh_system|node|article|form';
  $field_group->group_name = 'group_mojeh_system';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_container';
  $field_group->data = array(
    'label' => 'Mojeh System',
    'weight' => '28',
    'children' => array(
      0 => 'field_commitment',
      1 => 'field_latest_layout',
      2 => 'field_promoted',
      3 => 'field_promoted_image_alignment',
      4 => 'field_promoted_image_layout',
      5 => 'field_promoted_weight',
      6 => 'path',
      7 => 'workflow',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mojeh-system field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mojeh_system|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mojeh_system|node|feature|form';
  $field_group->group_name = 'group_mojeh_system';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feature';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_container';
  $field_group->data = array(
    'label' => 'Mojeh System',
    'weight' => '32',
    'children' => array(
      0 => 'field_commitment',
      1 => 'field_promoted',
      2 => 'field_promoted_weight',
      3 => 'path',
      4 => 'workflow',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mojeh_system|node|feature|form'] = $field_group;

  return $export;
}
