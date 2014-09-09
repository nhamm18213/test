<?php
/**
 * @file
 * Install script
 */

/**
 * Enable book_helper module.
 */
function nysed_cache_configuration_update_7008() {
  module_enable(array('book_helper'));
}
