<?php

/**
 * Callback function for admin settings form
 */
function veff_settings_form() {
    $enabled_views = array_keys(views_get_enabled_views());
    $form['veff_enabled_views'] = array(
        '#type' => 'select',
        '#multiple' => TRUE,
        '#options' => drupal_map_assoc($enabled_views),
        '#title' => 'Views',
        '#description' => 'Select on which views to enable VEFF',
        '#default_value' => variable_get('veff_enabled_views', array()),
    );
    $form['veff_fieldset_name'] = array(
        '#type' => 'textfield',
        '#title' => t('Fieldset name'),
        '#description' => t('The name of the fieldset surrounding the exposed filter'),
        '#default_value' => variable_get('veff_fieldset_name', 'Refine your search'),
        '#required' => TRUE,
    );
    return system_settings_form($form);
}