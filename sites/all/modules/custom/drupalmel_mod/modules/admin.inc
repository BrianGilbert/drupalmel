<?php
// $Id$
/**
 * @file
 * Admin module integration.
 */

/**
 * Implements hook_drupalmel_mod_admin_module().
 */
function admin_drupalmel_mod_admin_module() {
  return array(
    'admin' => t('Admin module'),
  );
}

/**
 * Implements hook_drupalmel_mod_init().
 */
function admin_drupalmel_mod_init() {
  global $user;
  $data = unserialize($user->data);
  if (isset($data['admin_module']) && $data['admin_module'] !== 'admin') {
    admin_suppress();
  }
}
