<?php
/**
 * @file
 * Install script
 */

/**
 * Enables the nysed_ct_resource_page module.
 */
function nysed_cache_configuration_update_7002() {
  module_enable(array('nysed_ct_resource_page', 'fieldblock'));
  $query = <<<SQL
    UPDATE {block} SET pages = :pages, status = 1 WHERE module = :module
    AND delta = :delta
SQL;

  // Disable the apachesolr sort block
  db_query($query, array(':pages' => "video-library\nela-math-landing", ':module' => 'apachesolr_search', ':delta' => 'sort'));
  // Enable the fieldblock block
  db_query($query, array(':pages' => "", ':module' => 'fieldblock', ':delta' => md5('fieldblock-node-resource_page-default-field_attachments')));

  // Remove subscriptions from resource* pages
  $query = <<<SQL
    DELETE FROM {block_node_type} WHERE module = 'notifications_ui' AND delta = 'subscriptions'
    AND type IN ('resource_page', 'resource_page_ela', 'resource_page_math')
SQL;
  db_query($query);

  // Remove latest updates from resource* pages
  $query = <<<SQL
    DELETE FROM {block_node_type} WHERE module = 'views' AND delta = 'latest_updates-block'
    AND type IN ('resource_page', 'resource_page_ela', 'resource_page_math')
SQL;
  db_query($query);
}
