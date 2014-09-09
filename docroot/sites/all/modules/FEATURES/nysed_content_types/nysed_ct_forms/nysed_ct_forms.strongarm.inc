<?php
/**
 * @file
 * nysed_ct_forms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nysed_ct_forms_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_forms';
  $strongarm->value = array();
  $export['menu_options_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_forms';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_forms';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_forms';
  $strongarm->value = '1';
  $export['node_preview_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_forms';
  $strongarm->value = 0;
  $export['node_submitted_forms'] = $strongarm;

  return $export;
}
