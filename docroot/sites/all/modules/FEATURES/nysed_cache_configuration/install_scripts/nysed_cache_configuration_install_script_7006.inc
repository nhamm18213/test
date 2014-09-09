<?php
/**
 * @file
 * Install script
 */

/**
 * Disable the collapsiblocks module.
 */
function nysed_cache_configuration_update_7006() {
  module_disable(array('collapsiblock'));
}
