<?php
// $Id$
/**
 * @file
 * User module integration.
 */

function drupalmel_mod_user($op, &$edit, &$account, $category = NUL) {
  switch ($op) {
    case 'categories':
      return array(
        array(
          'name' => 'drupalmel',
          'title' => t('Drupal Melbourne preferences'),
          'weight' => 10,
        )
      );

    case 'form':
      $form = array();

      if ($category == 'drupalmel') {
        $data = unserialize($edit['data']);

        $form['admin_module'] = array(
          '#type' => 'select',
          '#title' => t('Administration module'),
          '#options' => module_invoke_all('drupalmel_mod_admin_module'),
          '#default_value' => $data['admin_module'],
        );
      }

      return $form;
  }
}


