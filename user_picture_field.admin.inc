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
  $form['#config'] = 'user_picture_field.settings';
  $form['source_entity'] = array(
    '#type' => 'select',
    '#title' => t('Machine name of source entity'),
    '#default_value' => $config->get('source_entity'),
    '#options' => array(
      'user' => t('User'),
      'profile' => t('Profile'),
    ),
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
    '#title' => t('Machine name of source field that used as user picture'),
    '#default_value' => $config->get('source_field'),
    '#maxlength' => 255,
    '#required' => TRUE,
  );
  return system_settings_form($form, TRUE);
}
