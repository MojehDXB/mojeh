<?php
/**
 * @file
 * mojeh_features.features.workflow_access.inc
 */

/**
 * Implements hook_workflow_access_features_default_settings().
 */
function mojeh_features_workflow_access_features_default_settings() {
  $workflows = array();

  $workflows['Publishing'] = array();

  return $workflows;
}
