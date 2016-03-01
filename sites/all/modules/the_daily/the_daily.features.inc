<?php
/**
 * @file
 * the_daily.features.inc
 */

/**
 * Implements hook_node_info().
 */
function the_daily_node_info() {
  $items = array(
    'the_daily' => array(
      'name' => t('The Daily'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
