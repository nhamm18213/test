<?php
/**
 * @file
 * Install script
 */

/**
 * Removes the fieldblocks on resource-page.
 */
function nysed_cache_configuration_update_7010() {
  $query = <<<SQL
    DELETE FROM {block} WHERE module = :module
    AND delta = :delta
SQL;
  // Enable the fieldblock block
  db_query($query, array(':module' => 'fieldblock', ':delta' => md5('fieldblock-node-resource_page-default-field_attachments')));
  db_query($query, array(':module' => 'fieldblock', ':delta' => md5('fieldblock-node-resource_page-default-field_overview_resources')));
  variable_del('fieldblock-node-resource_page-default');
}
