<?php
/**
 * @file
 * Install script
 */

/**
 * Enables the nysed_subject_landing_page module.
 */
function nysed_cache_configuration_update_7001() {
  module_enable(array('nysed_ct_landing_page'));
}
