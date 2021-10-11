<?php

/**
 * @file
 * user_picture_field callback
 */

/**
 * @todo Please document this function.
 * @see http://drupal.org/node/1354
 */
function user_picture_field_config_form() {
  $config = config('user_picture_field.settings');

  if (config_get('system.core', 'user_pictures')) {
    $form['#config'] = 'user_picture_field.settings';
    $options = array('user' =>  t('User fields'));
    if (module_exists('profile')) {
      $options['profile'] = t('Profile');
    }
    $form['source_entity'] = array(
      '#type' => 'select',
      '#title' => t('Source'),
      '#default_value' => $config->get('source_entity'),
      '#options' => $options,
      '#required' => TRUE,
    );
    $form['source_bundle'] = array(
      '#type' => 'textfield',
      '#title' => t('Machine name of source bundle'),
      '#default_value' => $config->get('source_bundle'),
      '#maxlength' => 255,
      '#states' => array(
        'visible' => array(
          ':input[name="source_entity"]' => array('value' => 'profile'),
        ),
      ),
    );
    $form['source_field'] = array(
      '#type' => 'textfield',
      '#title' => t('Machine name of source field to be used as user picture'),
      '#default_value' => $config->get('source_field'),
      '#maxlength' => 255,
      '#required' => TRUE,
    );
    return system_settings_form($form, TRUE);
  }
  else {
    $warning = t('User pictures are not enabled in <a href="@account-settings?destination=admin/config/people/user_picture_field">Account Settings</a>.', array('@account-settings' => url('admin/config/people/settings')));
    backdrop_set_message($warning, 'warning');
  }

}
