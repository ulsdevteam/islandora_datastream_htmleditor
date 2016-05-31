<?php

/**
 * @file
 * Handles the display/submission of the admin settings form for this module.
 */

/**
 * Defines the admin settings form.
 *
 * @param array $form
 *   The Drupal form definition.
 * @param array $form_state
 *   The Drupal form state.
 *
 * @return array
 *   The Drupal form definition.
 */
function islandora_datastream_htmleditor_admin_settings(array $form, array &$form_state) {
  $form = array(
    'suppress_dsids' => array(
      '#type' => 'textfield',
      '#title' => t('Suppress Datastream ID values'),
      '#description' => t('Prevent editor for being available for specific text/html datastreams by listing these Datastream ID values.  Multiple values must be separated with a semicolon.'),
      '#default_value' => variable_get('islandora_datastream_htmleditor_suppress_dsids', ''),
    ),
    'submit' => array(
      '#type' => 'submit',
      '#value' => t('Save configuration'),
    ),
    'reset' => array(
      '#type' => 'submit',
      '#value' => t('Reset to defaults'),
    ),
  );
  return $form;
}

/**
 * Function that sets the Drupal variables with user's input.
 *
 * @param array $form
 *   The Drupal form definition.
 * @param array $form_state
 *   The Drupal form state.
 */
function islandora_datastream_htmleditor_admin_settings_submit(array $form, array &$form_state) {
  drupal_set_message(t('The settings have been updated!'));
  $id = $form_state['triggering_element']['#id'];
  switch ($id) {
    case 'edit-submit':
      variable_set('islandora_datastream_htmleditor_suppress_dsids', $form_state['values']['suppress_dsids']);
      break;

    case 'edit-reset':
      variable_del('islandora_datastream_htmleditor_suppress_dsids');
      break;
  }
}
