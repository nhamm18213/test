<?php
/**
 * @file
 * Install script
 */

/**
 * Update active sorts for grade.
 */
function nysed_cache_configuration_update_7009() {
  $settings = array();
  $sql =<<<SQL
    SELECT name, settings FROM {facetapi} WHERE name LIKE '%im_field_grade%'
SQL;
  $update_query =<<<SQL
    UPDATE {facetapi} SET settings = :settings WHERE name = :name
SQL;
  $result = db_query($sql);
  foreach ($result as $key => $record) {
    $settings = unserialize($record->settings);
    $settings['active_sorts'] = array(
      'taxonomy_weight' => 'taxonomy_weight',
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    );
    $settings['sort_weight'] = array(
      'taxonomy_weight' => -50,
      'active' => -49,
      'count' => -48,
      'display' => -47,
      'indexed' => -46,
    );
    $settings['sort_order'] = array(
      'taxonomy_weight' => 4,
      'active' => 3,
      'count' => 3,
      'display' => 4,
      'indexed' => 4,
    );
    $settings = serialize($settings);
    db_query($update_query, array(':settings' => $settings, ':name' => $settings->name));
  }
}
