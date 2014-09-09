<?php
/**
 * @file
 * Install script
 */

/**
 * Add field block modules for all resource pages.
 */
function nysed_cache_configuration_update_7005() {
  module_enable(array('nysed_ct_resource_page', 'fieldblock', 'fe_block', 'collapsiblock'));
  $node_types = array(
    'resource_page_ela',
    'resource_page_math',
  );
  $query = <<<SQL
    UPDATE {block} SET pages = :pages, status = 1 WHERE module = :module
    AND delta = :delta
SQL;
  foreach ($node_types as $node_type) {
    // Enable the fieldblock block
    db_query($query, array(':pages' => "", ':module' => 'fieldblock', ':delta' => md5('fieldblock-node-' . $node_type . '-default-field_attachments')));
  }
}
