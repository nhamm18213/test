<?php
/**
 * @file
 * nysed_ct_landing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nysed_ct_landing_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
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
function nysed_ct_landing_page_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nysed_ct_landing_page_node_info() {
  $items = array(
    'subject_landing_page_ela' => array(
      'name' => t('Subject Landing Page - ELA'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'subject_landing_page_math' => array(
      'name' => t('Subject Landing Page - Math'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
