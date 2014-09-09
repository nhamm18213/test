<?php
/**
 * @file
 * nysed_ct_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nysed_ct_video_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nysed_ct_video_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nysed_ct_video_node_info() {
  $items = array(
    'resource_video_ela' => array(
      'name' => t('Resource Video - ELA'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource_video_math' => array(
      'name' => t('Resource Video - Math'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource_videos' => array(
      'name' => t('Resource Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
