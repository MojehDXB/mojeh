<?php
/**
 * @file
 * mojeh_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mojeh_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_ribbon';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Ribbon';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage Ribbon';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'feature' => 'feature',
    'gallery' => 'gallery',
    'video' => 'video',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'homepage_ribbon_block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Landing Page Image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'homepage_ribbon',
    'image_link' => 'content',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: Content: Column */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['label'] = '';
  $handler->display->display_options['fields']['field_sub_category']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sub_category']['alter']['path'] = 'landing-pages/[field_category]/[field_sub_category]';
  $handler->display->display_options['fields']['field_sub_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_category']['type'] = 'taxonomy_term_reference_plain';

  /* Display: Latest Issue */
  $handler = $view->new_display('attachment', 'Latest Issue', 'homepage_ribbon_lastest_issue');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Cover Image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['label'] = '';
  $handler->display->display_options['fields']['field_cover_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'image_style' => 'homepage_ribbon',
    'image_link' => '',
  );
  /* Field: Content: Issue # */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'field_data_field_issue';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['label'] = '';
  $handler->display->display_options['fields']['field_issue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue']['type'] = 'text_plain';
  /* Field: Content: Cover Image */
  $handler->display->display_options['fields']['field_cover_image_1']['id'] = 'field_cover_image_1';
  $handler->display->display_options['fields']['field_cover_image_1']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image_1']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_cover_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_cover_image_1']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'issue_' => 'issue_',
  );
  /* Filter criterion: Content: Men/Women (field_men_women) */
  $handler->display->display_options['filters']['field_men_women_value']['id'] = 'field_men_women_value';
  $handler->display->display_options['filters']['field_men_women_value']['table'] = 'field_data_field_men_women';
  $handler->display->display_options['filters']['field_men_women_value']['field'] = 'field_men_women_value';
  $handler->display->display_options['filters']['field_men_women_value']['value'] = array(
    'women' => 'women',
  );
  $handler->display->display_options['displays'] = array(
    'homepage_ribbon_block' => 'homepage_ribbon_block',
    'default' => 0,
  );
  $export['homepage_ribbon'] = $view;

  $view = new view();
  $view->name = 'issues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Issues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Cover Image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['label'] = '';
  $handler->display->display_options['fields']['field_cover_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Issue # */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'field_data_field_issue';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['label'] = '';
  $handler->display->display_options['fields']['field_issue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue']['type'] = 'text_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Men/Women (field_men_women) */
  $handler->display->display_options['arguments']['field_men_women_value']['id'] = 'field_men_women_value';
  $handler->display->display_options['arguments']['field_men_women_value']['table'] = 'field_data_field_men_women';
  $handler->display->display_options['arguments']['field_men_women_value']['field'] = 'field_men_women_value';
  $handler->display->display_options['arguments']['field_men_women_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_men_women_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_men_women_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_men_women_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_men_women_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_men_women_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'issue_' => 'issue_',
  );

  /* Display: Latest Issue */
  $handler = $view->new_display('block', 'Latest Issue', 'latest_issue');

  /* Display: Past Five Issues */
  $handler = $view->new_display('block', 'Past Five Issues', 'past_five_issues');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Cover Image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['label'] = '';
  $handler->display->display_options['fields']['field_cover_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Issue # */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'field_data_field_issue';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['label'] = '';
  $handler->display->display_options['fields']['field_issue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue']['type'] = 'text_plain';
  /* Field: Content: Issuu URL */
  $handler->display->display_options['fields']['field_issuu_url']['id'] = 'field_issuu_url';
  $handler->display->display_options['fields']['field_issuu_url']['table'] = 'field_data_field_issuu_url';
  $handler->display->display_options['fields']['field_issuu_url']['field'] = 'field_issuu_url';
  $handler->display->display_options['fields']['field_issuu_url']['label'] = '';
  $handler->display->display_options['fields']['field_issuu_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issuu_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_issuu_url']['type'] = 'link_plain';
  /* Field: Content: Issue Date */
  $handler->display->display_options['fields']['field_issue_date']['id'] = 'field_issue_date';
  $handler->display->display_options['fields']['field_issue_date']['table'] = 'field_data_field_issue_date';
  $handler->display->display_options['fields']['field_issue_date']['field'] = 'field_issue_date';
  $handler->display->display_options['fields']['field_issue_date']['label'] = '';
  $handler->display->display_options['fields']['field_issue_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_date']['settings'] = array(
    'format_type' => 'month_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Issue Date */
  $handler->display->display_options['fields']['field_issue_date_1']['id'] = 'field_issue_date_1';
  $handler->display->display_options['fields']['field_issue_date_1']['table'] = 'field_data_field_issue_date';
  $handler->display->display_options['fields']['field_issue_date_1']['field'] = 'field_issue_date';
  $handler->display->display_options['fields']['field_issue_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_issue_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_date_1']['settings'] = array(
    'format_type' => 'month_only',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'issue_' => 'issue_',
  );
  /* Filter criterion: Content: Men/Women (field_men_women) */
  $handler->display->display_options['filters']['field_men_women_value']['id'] = 'field_men_women_value';
  $handler->display->display_options['filters']['field_men_women_value']['table'] = 'field_data_field_men_women';
  $handler->display->display_options['filters']['field_men_women_value']['field'] = 'field_men_women_value';
  $handler->display->display_options['filters']['field_men_women_value']['value'] = array(
    'women' => 'women',
  );
  $export['issues'] = $view;

  $view = new view();
  $view->name = 'landing_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Landing Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Landing Pages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['style_plugin'] = 'grouping_limit';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_category',
      'rendered' => 0,
      'rendered_strip' => 0,
      'grouping-limit' => array(
        'grouping-limit' => '10',
        'grouping-offset' => '0',
      ),
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Commitment */
  $handler->display->display_options['fields']['field_commitment']['id'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['table'] = 'field_data_field_commitment';
  $handler->display->display_options['fields']['field_commitment']['field'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['label'] = '';
  $handler->display->display_options['fields']['field_commitment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commitment']['type'] = 'field_hidden_text_plain';
  /* Field: Content: Column */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['label'] = '';
  $handler->display->display_options['fields']['field_sub_category']['element_label_colon'] = FALSE;
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_blurb']['id'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['table'] = 'field_data_field_blurb';
  $handler->display->display_options['fields']['field_blurb']['field'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_blurb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blurb']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_blurb']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Videos */
  $handler->display->display_options['fields']['field_vimeo_video']['id'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['table'] = 'field_data_field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['field'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['label'] = '';
  $handler->display->display_options['fields']['field_vimeo_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vimeo_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vimeo_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_vimeo_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_vimeo_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_vimeo_video']['delta_offset'] = '0';
  /* Field: Content: Slideshow */
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['id'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['table'] = 'field_data_field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['field'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['settings'] = array(
    'view_mode' => 'landing_recent',
    'links' => 0,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Category (field_category) */
  $handler->display->display_options['arguments']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['arguments']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_category_tid']['exception']['title'] = 'MOJEH Magazine';
  $handler->display->display_options['arguments']['field_category_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_category_tid']['title'] = '%1';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_category_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_category_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_category_tid']['validate_options']['vocabularies'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['arguments']['field_category_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_category_tid']['validate_options']['transform'] = TRUE;
  /* Contextual filter: Content: Column (field_sub_category) */
  $handler->display->display_options['arguments']['field_sub_category_tid']['id'] = 'field_sub_category_tid';
  $handler->display->display_options['arguments']['field_sub_category_tid']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['arguments']['field_sub_category_tid']['field'] = 'field_sub_category_tid';
  $handler->display->display_options['arguments']['field_sub_category_tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_sub_category_tid']['exception']['title'] = ' ';
  $handler->display->display_options['arguments']['field_sub_category_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_sub_category_tid']['title'] = '%1 %2';
  $handler->display->display_options['arguments']['field_sub_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sub_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sub_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sub_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_sub_category_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_sub_category_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_sub_category_tid']['validate_options']['vocabularies'] = array(
    'sub_category' => 'sub_category',
  );
  $handler->display->display_options['arguments']['field_sub_category_tid']['validate_options']['type'] = 'convert';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'feature' => 'feature',
    'gallery' => 'gallery',
    'video' => 'video',
  );

  /* Display: Old Content */
  $handler = $view->new_display('page', 'Old Content', 'old_content');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '50';
  $handler->display->display_options['path'] = 'landing-pages/%';

  /* Display: Recent */
  $handler = $view->new_display('page', 'Recent', 'recent_content');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'category' => 'category',
    'sub_category' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Commitment */
  $handler->display->display_options['fields']['field_commitment']['id'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['table'] = 'field_data_field_commitment';
  $handler->display->display_options['fields']['field_commitment']['field'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['label'] = '';
  $handler->display->display_options['fields']['field_commitment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commitment']['type'] = 'field_hidden_text_plain';
  /* Field: Content: Latest Layout */
  $handler->display->display_options['fields']['field_latest_layout']['id'] = 'field_latest_layout';
  $handler->display->display_options['fields']['field_latest_layout']['table'] = 'field_data_field_latest_layout';
  $handler->display->display_options['fields']['field_latest_layout']['field'] = 'field_latest_layout';
  $handler->display->display_options['fields']['field_latest_layout']['label'] = '';
  $handler->display->display_options['fields']['field_latest_layout']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_latest_layout']['type'] = 'list_key';
  /* Field: Content: Column */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['label'] = '';
  $handler->display->display_options['fields']['field_sub_category']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sub_category']['alter']['path'] = 'landing-pages/[field_category]/[field_sub_category]';
  $handler->display->display_options['fields']['field_sub_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_blurb']['id'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['table'] = 'field_data_field_blurb';
  $handler->display->display_options['fields']['field_blurb']['field'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_blurb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blurb']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_blurb']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Promoted Image Alignment */
  $handler->display->display_options['fields']['field_promoted_image_alignment']['id'] = 'field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['table'] = 'field_data_field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['field'] = 'field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['label'] = '';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promoted_image_alignment']['type'] = 'list_key';
  /* Field: Content: Slideshow */
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['id'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['table'] = 'field_data_field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['field'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['settings'] = array(
    'view_mode' => 'landing_recent',
    'links' => 0,
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Videos */
  $handler->display->display_options['fields']['field_vimeo_video']['id'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['table'] = 'field_data_field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['field'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['label'] = '';
  $handler->display->display_options['fields']['field_vimeo_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vimeo_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vimeo_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_vimeo_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_vimeo_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_vimeo_video']['delta_offset'] = '0';
  /* Field: Content: Landing Page Image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Landing Page Image */
  $handler->display->display_options['fields']['field_landing_page_image_1']['id'] = 'field_landing_page_image_1';
  $handler->display->display_options['fields']['field_landing_page_image_1']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image_1']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image_1']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => 'content',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Image URL Only */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['ui_name'] = 'Image URL Only';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_1']['delta_offset'] = '0';
  /* Field: Taxonomy term: Homepage Ad Zone Id */
  $handler->display->display_options['fields']['field_ad_zone_id']['id'] = 'field_ad_zone_id';
  $handler->display->display_options['fields']['field_ad_zone_id']['table'] = 'field_data_field_ad_zone_id';
  $handler->display->display_options['fields']['field_ad_zone_id']['field'] = 'field_ad_zone_id';
  $handler->display->display_options['fields']['field_ad_zone_id']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_ad_zone_id']['label'] = '';
  $handler->display->display_options['fields']['field_ad_zone_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_zone_id']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'feature' => 'feature',
    'gallery' => 'gallery',
    'video' => 'video',
  );
  /* Filter criterion: Content: Promoted (field_promoted) */
  $handler->display->display_options['filters']['field_promoted_value']['id'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['table'] = 'field_data_field_promoted';
  $handler->display->display_options['filters']['field_promoted_value']['field'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_promoted_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'landing-pages/%/%';

  /* Display: The Daily First */
  $handler = $view->new_display('attachment', 'The Daily First', 'the_daily_first');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Commitment */
  $handler->display->display_options['fields']['field_commitment']['id'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['table'] = 'field_data_field_commitment';
  $handler->display->display_options['fields']['field_commitment']['field'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['label'] = '';
  $handler->display->display_options['fields']['field_commitment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commitment']['type'] = 'field_hidden_text_plain';
  /* Field: Content: Column */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['label'] = '';
  $handler->display->display_options['fields']['field_sub_category']['alter']['path'] = 'landing-pages/[field_category]/[field_sub_category]';
  $handler->display->display_options['fields']['field_sub_category']['element_label_colon'] = FALSE;
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_blurb']['id'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['table'] = 'field_data_field_blurb';
  $handler->display->display_options['fields']['field_blurb']['field'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_blurb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blurb']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_blurb']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Videos */
  $handler->display->display_options['fields']['field_vimeo_video']['id'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['table'] = 'field_data_field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['field'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['label'] = '';
  $handler->display->display_options['fields']['field_vimeo_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vimeo_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vimeo_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_vimeo_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_vimeo_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_vimeo_video']['delta_offset'] = '0';
  /* Field: Content: Slideshow */
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['id'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['table'] = 'field_data_field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['field'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['settings'] = array(
    'view_mode' => 'landing_recent',
    'links' => 0,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_1']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'the_daily' => 'the_daily',
  );
  $handler->display->display_options['displays'] = array(
    'recent_content' => 'recent_content',
    'default' => 0,
    'old_content' => 0,
  );

  /* Display: The Daily All */
  $handler = $view->new_display('attachment', 'The Daily All', 'the_daily_all');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Commitment */
  $handler->display->display_options['fields']['field_commitment']['id'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['table'] = 'field_data_field_commitment';
  $handler->display->display_options['fields']['field_commitment']['field'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['label'] = '';
  $handler->display->display_options['fields']['field_commitment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commitment']['type'] = 'field_hidden_text_plain';
  /* Field: Content: Column */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['label'] = '';
  $handler->display->display_options['fields']['field_sub_category']['alter']['path'] = 'landing-pages/[field_category]/[field_sub_category]';
  $handler->display->display_options['fields']['field_sub_category']['element_label_colon'] = FALSE;
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_blurb']['id'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['table'] = 'field_data_field_blurb';
  $handler->display->display_options['fields']['field_blurb']['field'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_blurb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blurb']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_blurb']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'the_daily_slideshow',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Videos */
  $handler->display->display_options['fields']['field_vimeo_video']['id'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['table'] = 'field_data_field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['field'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['label'] = '';
  $handler->display->display_options['fields']['field_vimeo_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vimeo_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vimeo_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_vimeo_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_vimeo_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_vimeo_video']['delta_offset'] = '0';
  /* Field: Content: Slideshow */
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['id'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['table'] = 'field_data_field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['field'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['settings'] = array(
    'view_mode' => 'landing_recent',
    'links' => 0,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_1']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'the_daily' => 'the_daily',
  );
  $handler->display->display_options['displays'] = array(
    'recent_content' => 'recent_content',
    'default' => 0,
    'old_content' => 0,
  );

  /* Display: Promoted */
  $handler = $view->new_display('attachment', 'Promoted', 'promoted');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Commitment */
  $handler->display->display_options['fields']['field_commitment']['id'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['table'] = 'field_data_field_commitment';
  $handler->display->display_options['fields']['field_commitment']['field'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['label'] = '';
  $handler->display->display_options['fields']['field_commitment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commitment']['type'] = 'field_hidden_text_plain';
  /* Field: Content: Promoted Image Alignment */
  $handler->display->display_options['fields']['field_promoted_image_alignment']['id'] = 'field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['table'] = 'field_data_field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['field'] = 'field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['label'] = '';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_promoted_image_alignment']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_promoted_image_alignment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promoted_image_alignment']['type'] = 'list_key';
  /* Field: Content: Promoted Image Layout */
  $handler->display->display_options['fields']['field_promoted_image_layout']['id'] = 'field_promoted_image_layout';
  $handler->display->display_options['fields']['field_promoted_image_layout']['table'] = 'field_data_field_promoted_image_layout';
  $handler->display->display_options['fields']['field_promoted_image_layout']['field'] = 'field_promoted_image_layout';
  $handler->display->display_options['fields']['field_promoted_image_layout']['label'] = '';
  $handler->display->display_options['fields']['field_promoted_image_layout']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promoted_image_layout']['type'] = 'list_key';
  /* Field: Content: Column */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['label'] = '';
  $handler->display->display_options['fields']['field_sub_category']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sub_category']['alter']['path'] = 'landing-pages/[field_category]/[field_sub_category]';
  $handler->display->display_options['fields']['field_sub_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Slideshow */
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['id'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['table'] = 'field_data_field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['field'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['settings'] = array(
    'view_mode' => 'landing_promoted',
    'links' => 0,
  );
  /* Field: Content: Videos */
  $handler->display->display_options['fields']['field_vimeo_video']['id'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['table'] = 'field_data_field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['field'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['label'] = '';
  $handler->display->display_options['fields']['field_vimeo_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vimeo_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vimeo_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_vimeo_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_vimeo_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_vimeo_video']['delta_offset'] = '0';
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_blurb']['id'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['table'] = 'field_data_field_blurb';
  $handler->display->display_options['fields']['field_blurb']['field'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_blurb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blurb']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_blurb']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Landing Page Image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Landing Page Image */
  $handler->display->display_options['fields']['field_landing_page_image_1']['id'] = 'field_landing_page_image_1';
  $handler->display->display_options['fields']['field_landing_page_image_1']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image_1']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image_1']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Promoted Weight (field_promoted_weight) */
  $handler->display->display_options['sorts']['field_promoted_weight_value']['id'] = 'field_promoted_weight_value';
  $handler->display->display_options['sorts']['field_promoted_weight_value']['table'] = 'field_data_field_promoted_weight';
  $handler->display->display_options['sorts']['field_promoted_weight_value']['field'] = 'field_promoted_weight_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted (field_promoted) */
  $handler->display->display_options['filters']['field_promoted_value']['id'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['table'] = 'field_data_field_promoted';
  $handler->display->display_options['filters']['field_promoted_value']['field'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'feature' => 'feature',
    'gallery' => 'gallery',
    'video' => 'video',
  );
  $handler->display->display_options['displays'] = array(
    'recent_content' => 'recent_content',
    'default' => 0,
    'old_content' => 0,
  );

  /* Display: Content Type */
  $handler = $view->new_display('page', 'Content Type', 'content_by_type');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'category' => 'category',
    'sub_category' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Commitment */
  $handler->display->display_options['fields']['field_commitment']['id'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['table'] = 'field_data_field_commitment';
  $handler->display->display_options['fields']['field_commitment']['field'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['label'] = '';
  $handler->display->display_options['fields']['field_commitment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commitment']['type'] = 'field_hidden_text_plain';
  /* Field: Content: Latest Layout */
  $handler->display->display_options['fields']['field_latest_layout']['id'] = 'field_latest_layout';
  $handler->display->display_options['fields']['field_latest_layout']['table'] = 'field_data_field_latest_layout';
  $handler->display->display_options['fields']['field_latest_layout']['field'] = 'field_latest_layout';
  $handler->display->display_options['fields']['field_latest_layout']['label'] = '';
  $handler->display->display_options['fields']['field_latest_layout']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_latest_layout']['type'] = 'list_key';
  /* Field: Content: Column */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['label'] = '';
  $handler->display->display_options['fields']['field_sub_category']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sub_category']['alter']['path'] = 'landing-pages/[field_category]/[field_sub_category]';
  $handler->display->display_options['fields']['field_sub_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_blurb']['id'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['table'] = 'field_data_field_blurb';
  $handler->display->display_options['fields']['field_blurb']['field'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_blurb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blurb']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_blurb']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Promoted Image Alignment */
  $handler->display->display_options['fields']['field_promoted_image_alignment']['id'] = 'field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['table'] = 'field_data_field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['field'] = 'field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['label'] = '';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promoted_image_alignment']['type'] = 'list_key';
  /* Field: Content: Slideshow */
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['id'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['table'] = 'field_data_field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['field'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['settings'] = array(
    'view_mode' => 'landing_recent',
    'links' => 0,
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Videos */
  $handler->display->display_options['fields']['field_vimeo_video']['id'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['table'] = 'field_data_field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['field'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['label'] = '';
  $handler->display->display_options['fields']['field_vimeo_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vimeo_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vimeo_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_vimeo_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_vimeo_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_vimeo_video']['delta_offset'] = '0';
  /* Field: Content: Landing Page Image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Landing Page Image */
  $handler->display->display_options['fields']['field_landing_page_image_1']['id'] = 'field_landing_page_image_1';
  $handler->display->display_options['fields']['field_landing_page_image_1']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image_1']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image_1']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => 'content',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Image URL Only */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['ui_name'] = 'Image URL Only';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_1']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['type']['title'] = '%1';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'feature' => 'feature',
    'gallery' => 'gallery',
    'video' => 'video',
  );
  /* Filter criterion: Content: Promoted (field_promoted) */
  $handler->display->display_options['filters']['field_promoted_value']['id'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['table'] = 'field_data_field_promoted';
  $handler->display->display_options['filters']['field_promoted_value']['field'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_promoted_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'content-by-type/%';

  /* Display: Promoted Content Type */
  $handler = $view->new_display('attachment', 'Promoted Content Type', 'content_by_type_promoted');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Commitment */
  $handler->display->display_options['fields']['field_commitment']['id'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['table'] = 'field_data_field_commitment';
  $handler->display->display_options['fields']['field_commitment']['field'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['label'] = '';
  $handler->display->display_options['fields']['field_commitment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commitment']['type'] = 'field_hidden_text_plain';
  /* Field: Content: Promoted Image Alignment */
  $handler->display->display_options['fields']['field_promoted_image_alignment']['id'] = 'field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['table'] = 'field_data_field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['field'] = 'field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['label'] = '';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_promoted_image_alignment']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_promoted_image_alignment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promoted_image_alignment']['type'] = 'list_key';
  /* Field: Content: Promoted Image Layout */
  $handler->display->display_options['fields']['field_promoted_image_layout']['id'] = 'field_promoted_image_layout';
  $handler->display->display_options['fields']['field_promoted_image_layout']['table'] = 'field_data_field_promoted_image_layout';
  $handler->display->display_options['fields']['field_promoted_image_layout']['field'] = 'field_promoted_image_layout';
  $handler->display->display_options['fields']['field_promoted_image_layout']['label'] = '';
  $handler->display->display_options['fields']['field_promoted_image_layout']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promoted_image_layout']['type'] = 'list_key';
  /* Field: Content: Column */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'field_data_field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['label'] = '';
  $handler->display->display_options['fields']['field_sub_category']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sub_category']['alter']['path'] = 'landing-pages/[field_category]/[field_sub_category]';
  $handler->display->display_options['fields']['field_sub_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Slideshow */
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['id'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['table'] = 'field_data_field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['field'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['settings'] = array(
    'view_mode' => 'landing_promoted',
    'links' => 0,
  );
  /* Field: Content: Videos */
  $handler->display->display_options['fields']['field_vimeo_video']['id'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['table'] = 'field_data_field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['field'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['label'] = '';
  $handler->display->display_options['fields']['field_vimeo_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vimeo_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vimeo_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_vimeo_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_vimeo_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_vimeo_video']['delta_offset'] = '0';
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_blurb']['id'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['table'] = 'field_data_field_blurb';
  $handler->display->display_options['fields']['field_blurb']['field'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_blurb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blurb']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_blurb']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Landing Page Image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Landing Page Image */
  $handler->display->display_options['fields']['field_landing_page_image_1']['id'] = 'field_landing_page_image_1';
  $handler->display->display_options['fields']['field_landing_page_image_1']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image_1']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image_1']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Promoted Weight (field_promoted_weight) */
  $handler->display->display_options['sorts']['field_promoted_weight_value']['id'] = 'field_promoted_weight_value';
  $handler->display->display_options['sorts']['field_promoted_weight_value']['table'] = 'field_data_field_promoted_weight';
  $handler->display->display_options['sorts']['field_promoted_weight_value']['field'] = 'field_promoted_weight_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted (field_promoted) */
  $handler->display->display_options['filters']['field_promoted_value']['id'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['table'] = 'field_data_field_promoted';
  $handler->display->display_options['filters']['field_promoted_value']['field'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'feature' => 'feature',
    'gallery' => 'gallery',
    'video' => 'video',
  );
  $handler->display->display_options['displays'] = array(
    'content_by_type' => 'content_by_type',
    'default' => 0,
    'old_content' => 0,
    'recent_content' => 0,
  );
  $export['landing_pages'] = $view;

  $view = new view();
  $view->name = 'search_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_article_content';
  $view->human_name = 'Search Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results matched your search.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Blurb */
  $handler->display->display_options['fields']['field_blurb']['id'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['field_blurb']['field'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_blurb']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category']['bypass_access'] = 0;
  /* Field: Indexed Node: Column */
  $handler->display->display_options['fields']['field_sub_category']['id'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['field_sub_category']['field'] = 'field_sub_category';
  $handler->display->display_options['fields']['field_sub_category']['label'] = '';
  $handler->display->display_options['fields']['field_sub_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_sub_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_sub_category']['bypass_access'] = 0;
  /* Field: Indexed Node: Commitment */
  $handler->display->display_options['fields']['field_commitment']['id'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['field_commitment']['field'] = 'field_commitment';
  $handler->display->display_options['fields']['field_commitment']['label'] = '';
  $handler->display->display_options['fields']['field_commitment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commitment']['type'] = 'field_hidden_text_plain';
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Images */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Indexed Node: Landing Page Image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Indexed Node: Latest Layout */
  $handler->display->display_options['fields']['field_latest_layout']['id'] = 'field_latest_layout';
  $handler->display->display_options['fields']['field_latest_layout']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['field_latest_layout']['field'] = 'field_latest_layout';
  $handler->display->display_options['fields']['field_latest_layout']['label'] = '';
  $handler->display->display_options['fields']['field_latest_layout']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_latest_layout']['type'] = 'list_key';
  /* Field: Indexed Node: Slideshows */
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['id'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['field'] = 'field_inline_gallery_slideshow';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['display'] = 'view';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_inline_gallery_slideshow']['bypass_access'] = 0;
  /* Field: Indexed Node: Vimeo Video */
  $handler->display->display_options['fields']['field_vimeo_video']['id'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['field_vimeo_video']['field'] = 'field_vimeo_video';
  $handler->display->display_options['fields']['field_vimeo_video']['label'] = '';
  $handler->display->display_options['fields']['field_vimeo_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vimeo_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vimeo_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_vimeo_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_vimeo_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_vimeo_video']['delta_offset'] = '0';
  /* Field: Indexed Node: Landing Page Image */
  $handler->display->display_options['fields']['field_landing_page_image_1']['id'] = 'field_landing_page_image_1';
  $handler->display->display_options['fields']['field_landing_page_image_1']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['field_landing_page_image_1']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image_1']['settings'] = array(
    'image_style' => 'adaptive_image',
    'image_link' => '',
  );
  /* Field: Indexed Node: Promoted Image Alignment */
  $handler->display->display_options['fields']['field_promoted_image_alignment']['id'] = 'field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['field'] = 'field_promoted_image_alignment';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['label'] = '';
  $handler->display->display_options['fields']['field_promoted_image_alignment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promoted_image_alignment']['type'] = 'list_key';
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 0;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_article_content';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['title'] = '%1';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['conjunction'] = 'OR';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'search/%';
  $export['search_page'] = $view;

  return $export;
}
