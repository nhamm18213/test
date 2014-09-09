<?php
/**
 * @file
 * nysed_ct_basic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nysed_ct_basic_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
