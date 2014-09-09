<?php
/**
 * @file
 * nysed_cache_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nysed_cache_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 1;
  $export['preprocess_js'] = $strongarm;

  return $export;
}
