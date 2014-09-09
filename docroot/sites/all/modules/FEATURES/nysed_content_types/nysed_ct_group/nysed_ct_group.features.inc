<?php
/**
 * @file
 * nysed_ct_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nysed_ct_group_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nysed_ct_group_node_info() {
  $items = array(
    'groups' => array(
      'name' => t('Community'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Community Name'),
      'help' => '',
    ),
  );
  return $items;
}
