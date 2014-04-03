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
    return system_settings_form($form);
}
