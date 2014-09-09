<?php
/**
 * @file
 * Install script
 */

/**
 * Enables the nysed_ct_video module.
 */
function nysed_cache_configuration_update_7003() {
  module_enable(array('nysed_ct_video'));
}
