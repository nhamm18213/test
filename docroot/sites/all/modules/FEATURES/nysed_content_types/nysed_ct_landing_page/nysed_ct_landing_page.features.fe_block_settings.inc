<?php
/**
 * @file
 * nysed_ct_landing_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nysed_ct_landing_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-landing_page_filter_help'] = array(
    'cache' => -1,
    'css_class' => 'selectfilters',
    'custom' => '0',
    'machine_name' => 'landing_page_filter_help',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'ela-math-landing',
    'roles' => array(),
    'themes' => array(
      'engageny' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'engageny',
        'weight' => '-58',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Select Your Filters',
    'visibility' => '1',
  );

  return $export;
}
