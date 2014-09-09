<?php
/**
 * @file
 * nysed_ct_landing_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nysed_ct_landing_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'collapsiblock_settings';
  $strongarm->value = array(
    'block-facetapi-nrsgxavatpxore97ghs2r1esnwswbncm' => '3',
    'block-facetapi-sokxesgxyz4desbjcugymkqrkea7pxxh' => '3',
    'block-facetapi-fkpwnw0mgfwyq0bmcm4qcdfrurwxl9sc' => '3',
    'block-facetapi-eudr4ekkxblmbwbmjoyaxdkceiepukxc' => '3',
    'block-facetapi-jwfl3kkhn06rvl2jjcvqe3uf4zgwhm0d' => '3',
    'block-facetapi-cvolpqnnkyxaoisyz02rptr4ariaxv1f' => '3',
    'block-facetapi-xapznc8lqfcge9oahattmvxvbok7txvv' => '3',
    'block-facetapi-uf1toeslczea0mtmcultnzp4fwdepay5' => '3',
    'block-facetapi-p3fubrie0j3kxs8j2aewwxks2gqtkmih' => '3',
    'block-facetapi-ok1svgrykpl1tmglx0wr4ccumdysi7t8' => '3',
  );
  $export['collapsiblock_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__subject_landing_page_ela';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'notifications' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__subject_landing_page_ela'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__subject_landing_page_math';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'notifications' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__subject_landing_page_math'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_subject_landing_page_ela';
  $strongarm->value = array();
  $export['menu_options_subject_landing_page_ela'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_subject_landing_page_math';
  $strongarm->value = array();
  $export['menu_options_subject_landing_page_math'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_subject_landing_page_ela';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_subject_landing_page_ela'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_subject_landing_page_math';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_subject_landing_page_math'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_subject_landing_page_ela';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_subject_landing_page_ela'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_subject_landing_page_math';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_subject_landing_page_math'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_subject_landing_page_ela';
  $strongarm->value = '1';
  $export['node_preview_subject_landing_page_ela'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_subject_landing_page_math';
  $strongarm->value = '1';
  $export['node_preview_subject_landing_page_math'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_subject_landing_page_ela';
  $strongarm->value = 1;
  $export['node_submitted_subject_landing_page_ela'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_subject_landing_page_math';
  $strongarm->value = 0;
  $export['node_submitted_subject_landing_page_math'] = $strongarm;

  return $export;
}
