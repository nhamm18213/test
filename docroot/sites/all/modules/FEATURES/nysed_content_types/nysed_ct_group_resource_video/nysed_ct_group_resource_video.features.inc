<?php
/**
 * @file
 * nysed_ct_group_resource_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nysed_ct_group_resource_video_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nysed_ct_group_resource_video_node_info() {
  $items = array(
    'group_resource_video' => array(
      'name' => t('Group Resource Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
