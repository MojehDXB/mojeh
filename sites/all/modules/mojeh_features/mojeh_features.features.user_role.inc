<?php
/**
 * @file
 * mojeh_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mojeh_features_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 3,
  );

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 2,
  );

  return $roles;
}
