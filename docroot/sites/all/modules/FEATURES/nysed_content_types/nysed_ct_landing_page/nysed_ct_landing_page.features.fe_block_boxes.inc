<?php
/**
 * @file
 * nysed_ct_landing_page.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function nysed_ct_landing_page_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Instructions for using curriculum module filters';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'landing_page_filter_help';
  $fe_block_boxes->body = '<p><span>Select filters from the categories below to find the modules you are looking for.</span></p>';

  $export['landing_page_filter_help'] = $fe_block_boxes;

  return $export;
}
