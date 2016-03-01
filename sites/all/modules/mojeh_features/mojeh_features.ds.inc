<?php
/**
 * @file
 * mojeh_features.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function mojeh_features_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'landing_promoted';
  $ds_view_mode->label = 'Landing Promoted';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['landing_promoted'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'landing_recent';
  $ds_view_mode->label = 'Landing Recent';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['landing_recent'] = $ds_view_mode;

  return $export;
}
