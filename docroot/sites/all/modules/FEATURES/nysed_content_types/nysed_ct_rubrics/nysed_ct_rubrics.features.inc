<?php
/**
 * @file
 * nysed_ct_rubrics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nysed_ct_rubrics_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nysed_ct_rubrics_node_info() {
  $items = array(
    'rubric_associations' => array(
      'name' => t('Rubric Associations'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rubric_domains' => array(
      'name' => t('Rubric Domains'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rubric_header_domain_text' => array(
      'name' => t('Rubric Header - Domain Text'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rubric_headers' => array(
      'name' => t('Rubric Headers'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rubrics' => array(
      'name' => t('Rubrics'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
