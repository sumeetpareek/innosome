<?php
/**
 * @files
 * Implements hook_views_default_views().
 */
function do_feeds_views_default_views() {
  $views = array();

  $view = new view;
  $view->name = 'user_commit_log';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User commit log';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User commit log';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'do_commit' => 'do_commit',
    'do_commit_author' => 'do_commit_author',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: DO Project Name */
  $handler->display->display_options['fields']['do_project_name']['id'] = 'do_project_name';
  $handler->display->display_options['fields']['do_project_name']['table'] = 'field_data_do_project_name';
  $handler->display->display_options['fields']['do_project_name']['field'] = 'do_project_name';
  $handler->display->display_options['fields']['do_project_name']['label'] = '';
  $handler->display->display_options['fields']['do_project_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['do_project_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['do_project_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['do_project_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['do_project_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['do_project_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['do_project_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['do_project_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['do_project_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['do_project_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['do_project_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['do_project_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['do_project_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['do_project_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['do_project_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['do_project_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['do_project_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['do_project_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['do_project_name']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['do_project_name']['field_api_classes'] = 0;
  /* Field: Content: Commit */
  $handler->display->display_options['fields']['do_commit']['id'] = 'do_commit';
  $handler->display->display_options['fields']['do_commit']['table'] = 'field_data_do_commit';
  $handler->display->display_options['fields']['do_commit']['field'] = 'do_commit';
  $handler->display->display_options['fields']['do_commit']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['do_commit']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['do_commit']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['do_commit']['alter']['external'] = 0;
  $handler->display->display_options['fields']['do_commit']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['do_commit']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['do_commit']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['do_commit']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['do_commit']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['do_commit']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['do_commit']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['do_commit']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['do_commit']['alter']['html'] = 0;
  $handler->display->display_options['fields']['do_commit']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['do_commit']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['do_commit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['do_commit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['do_commit']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['do_commit']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['do_commit']['field_api_classes'] = 0;
  /* Field: Content: Commit Message */
  $handler->display->display_options['fields']['do_commit_info']['id'] = 'do_commit_info';
  $handler->display->display_options['fields']['do_commit_info']['table'] = 'field_data_do_commit_info';
  $handler->display->display_options['fields']['do_commit_info']['field'] = 'do_commit_info';
  $handler->display->display_options['fields']['do_commit_info']['label'] = '';
  $handler->display->display_options['fields']['do_commit_info']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['alter']['external'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['do_commit_info']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['do_commit_info']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['alter']['html'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['do_commit_info']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['do_commit_info']['hide_empty'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['empty_zero'] = 0;
  $handler->display->display_options['fields']['do_commit_info']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['do_commit_info']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['do_commit_info']['settings'] = array(
    'trim_length' => '150',
  );
  $handler->display->display_options['fields']['do_commit_info']['field_api_classes'] = 0;
  /* Field: Content: Commit Author */
  $handler->display->display_options['fields']['do_commit_author']['id'] = 'do_commit_author';
  $handler->display->display_options['fields']['do_commit_author']['table'] = 'field_data_do_commit_author';
  $handler->display->display_options['fields']['do_commit_author']['field'] = 'do_commit_author';
  $handler->display->display_options['fields']['do_commit_author']['label'] = 'Authored by';
  $handler->display->display_options['fields']['do_commit_author']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['alter']['external'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['do_commit_author']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['do_commit_author']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['alter']['html'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['do_commit_author']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['do_commit_author']['hide_empty'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['empty_zero'] = 0;
  $handler->display->display_options['fields']['do_commit_author']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['do_commit_author']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['do_commit_author']['field_api_classes'] = 0;
  /* Field: Content: Commit Date */
  $handler->display->display_options['fields']['do_commit_date']['id'] = 'do_commit_date';
  $handler->display->display_options['fields']['do_commit_date']['table'] = 'field_data_do_commit_date';
  $handler->display->display_options['fields']['do_commit_date']['field'] = 'do_commit_date';
  $handler->display->display_options['fields']['do_commit_date']['label'] = '';
  $handler->display->display_options['fields']['do_commit_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['do_commit_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['do_commit_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['do_commit_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['do_commit_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['do_commit_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['do_commit_date']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'user_commit_history' => 'user_commit_history',
  );
  
  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_caching'] = '-1';

  $views[$view->name] = $view;

  return $views;
}
