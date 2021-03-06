<?php
/**
 * @file
 * ca_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_staff_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_staff_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ca_staff_node_info() {
  $items = array(
    'ca_staff' => array(
      'name' => t('Staff'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ca_staff_weight_features_default_settings() {
  $settings = array();

  $settings['ca_staff'] = array(
    'enabled' => 1,
    'range' => 50,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
