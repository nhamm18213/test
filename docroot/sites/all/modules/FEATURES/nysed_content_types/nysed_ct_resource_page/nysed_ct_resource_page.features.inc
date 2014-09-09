<?php
/**
 * @file
 * nysed_ct_resource_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nysed_ct_resource_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nysed_ct_resource_page_node_info() {
  $items = array(
    'resource_page' => array(
      'name' => t('Resource Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource_page_ela' => array(
      'name' => t('Resource Page - ELA'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource_page_math' => array(
      'name' => t('Resource Page - Math'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
