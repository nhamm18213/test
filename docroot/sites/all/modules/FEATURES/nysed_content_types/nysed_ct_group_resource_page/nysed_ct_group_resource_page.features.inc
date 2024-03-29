<?php
/**
 * @file
 * nysed_ct_group_resource_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nysed_ct_group_resource_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nysed_ct_group_resource_page_node_info() {
  $items = array(
    'group_resource_page' => array(
      'name' => t('Group Resource Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
