<?php
/**
 * @file
 * Install script
 */

/**
 * Remove lessons block.
 */
function nysed_cache_configuration_update_7007() {
  $sql =<<<SQL
    UPDATE {block} SET status = 0
    WHERE delta = 'book_children_ela_lessons-block' AND theme IN ('humble', 'engageny')
SQL;
  db_query($sql);
}
