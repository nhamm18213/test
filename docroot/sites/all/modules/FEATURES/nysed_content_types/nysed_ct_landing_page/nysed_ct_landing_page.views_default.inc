<?php
/**
 * @file
 * nysed_ct_landing_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nysed_ct_landing_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'curriculum_modules';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__acquia_search_server_1';
  $view->human_name = 'Curriculum Modules';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Curriculum Modules';
  $handler->display->display_options['css_class'] = 'video_library';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'ela_math_row';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_vid_Subject */
  $handler->display->display_options['fields']['sm_vid_Subject']['id'] = 'sm_vid_Subject';
  $handler->display->display_options['fields']['sm_vid_Subject']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_vid_Subject']['field'] = 'sm_vid_Subject';
  $handler->display->display_options['fields']['sm_vid_Subject']['label'] = '';
  $handler->display->display_options['fields']['sm_vid_Subject']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_vid_Grades */
  $handler->display->display_options['fields']['sm_vid_Grades']['id'] = 'sm_vid_Grades';
  $handler->display->display_options['fields']['sm_vid_Grades']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_vid_Grades']['field'] = 'sm_vid_Grades';
  $handler->display->display_options['fields']['sm_vid_Grades']['label'] = '';
  $handler->display->display_options['fields']['sm_vid_Grades']['element_label_colon'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Apache Solr: Search */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['group'] = 1;
  $handler->display->display_options['filters']['keyword']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keyword']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['keyword']['expose']['label'] = 'Search All Curriculum Materials';
  $handler->display->display_options['filters']['keyword']['expose']['operator'] = 'keyword_op';
  $handler->display->display_options['filters']['keyword']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['keyword']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
  );
  /* Filter criterion: Apache Solr: sm_vid_Tags */
  $handler->display->display_options['filters']['sm_vid_Tags']['id'] = 'sm_vid_Tags';
  $handler->display->display_options['filters']['sm_vid_Tags']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['filters']['sm_vid_Tags']['field'] = 'sm_vid_Tags';
  $handler->display->display_options['filters']['sm_vid_Tags']['operator'] = 'word';
  $handler->display->display_options['filters']['sm_vid_Tags']['value'] = 'Common Core';
  $handler->display->display_options['filters']['sm_vid_Tags']['group'] = 2;
  /* Filter criterion: Apache Solr: sm_vid_Tags */
  $handler->display->display_options['filters']['sm_vid_Tags_1']['id'] = 'sm_vid_Tags_1';
  $handler->display->display_options['filters']['sm_vid_Tags_1']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['filters']['sm_vid_Tags_1']['field'] = 'sm_vid_Tags';
  $handler->display->display_options['filters']['sm_vid_Tags_1']['operator'] = 'word';
  $handler->display->display_options['filters']['sm_vid_Tags_1']['value'] = 'curriculum';
  $handler->display->display_options['filters']['sm_vid_Tags_1']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ela-math-landing';
  $export['curriculum_modules'] = $view;

  return $export;
}
