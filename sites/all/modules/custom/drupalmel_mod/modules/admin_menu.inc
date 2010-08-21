<?php
// $Id$
/**
 * @file
 * Admin Menu module integration.
 */

/**
 * Implements hook_drupalmel_mod_admin_module().
 */
function admin_menu_drupalmel_mod_admin_module() {
  return array(
    'admin_menu' => t('Admin Menu module'),
  );
}

/**
 * Implements hook_drupalmel_mod_init().
 */
function admin_menu_drupalmel_mod_init() {
  global $user;
  $data = unserialize($user->data);
  if (!isset($data['admin_module']) || $data['admin_module'] !== 'admin_menu') {
    admin_menu_suppress();
  }
}
