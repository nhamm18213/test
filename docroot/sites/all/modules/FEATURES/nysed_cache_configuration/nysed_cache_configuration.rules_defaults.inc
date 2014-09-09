<?php
/**
 * @file
 * nysed_cache_configuration.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function nysed_cache_configuration_default_rules_configuration() {
  $items = array();
  $items['rules_purge_cache'] = entity_import('rules_config', '{ "rules_purge_cache" : {
      "LABEL" : "purge cache",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "cache expire purge" ],
      "REQUIRES" : [ "rules", "expire" ],
      "ON" : [ "node_update" ],
      "IF" : [ { "node_is_published" : { "node" : [ "node" ] } } ],
      "DO" : [ { "expire_flush_url" : { "urls" : "node\/[node:nid]\r\n[node:url]" } } ]
    }
  }');
  return $items;
}
