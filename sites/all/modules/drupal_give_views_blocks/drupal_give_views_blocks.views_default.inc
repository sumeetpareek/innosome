<?php
/**
 * @file
 * drupal_give_views_blocks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupal_give_views_blocks_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'contribution_sites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contribution Sites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sites we\'ve built to help Drupalers';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Contribution Site Image */
  $handler->display->display_options['fields']['field_contribution_site_image']['id'] = 'field_contribution_site_image';
  $handler->display->display_options['fields']['field_contribution_site_image']['table'] = 'field_data_field_contribution_site_image';
  $handler->display->display_options['fields']['field_contribution_site_image']['field'] = 'field_contribution_site_image';
  $handler->display->display_options['fields']['field_contribution_site_image']['label'] = '';
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contribution_site_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contribution_site_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contribution_site_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_contribution_site_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_contribution_site_image']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'contribution-site-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Contribution Site Link */
  $handler->display->display_options['fields']['field_contribution_site_link']['id'] = 'field_contribution_site_link';
  $handler->display->display_options['fields']['field_contribution_site_link']['table'] = 'field_data_field_contribution_site_link';
  $handler->display->display_options['fields']['field_contribution_site_link']['field'] = 'field_contribution_site_link';
  $handler->display->display_options['fields']['field_contribution_site_link']['label'] = '';
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contribution_site_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contribution_site_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contribution_site_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contribution_site_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_contribution_site_link']['field_api_classes'] = 0;
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
    'contribution_sites' => 'contribution_sites',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['contribution_sites'] = $view;

  $view = new view;
  $view->name = 'drupal_blog_posts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Drupal Blog Posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent blog posts on Drupal';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Submitted by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'submitted';
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
    'blog' => 'blog',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['drupal_blog_posts'] = $view;

  $view = new view;
  $view->name = 'presentations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Presentations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Presentations we have given';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_presentation_speaker' => 'field_presentation_speaker',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_presentation_speaker_target_id']['id'] = 'field_presentation_speaker_target_id';
  $handler->display->display_options['relationships']['field_presentation_speaker_target_id']['table'] = 'field_data_field_presentation_speaker';
  $handler->display->display_options['relationships']['field_presentation_speaker_target_id']['field'] = 'field_presentation_speaker_target_id';
  $handler->display->display_options['relationships']['field_presentation_speaker_target_id']['required'] = 1;
  /* Field: Content: Presentation Link */
  $handler->display->display_options['fields']['field_presentation_link']['id'] = 'field_presentation_link';
  $handler->display->display_options['fields']['field_presentation_link']['table'] = 'field_data_field_presentation_link';
  $handler->display->display_options['fields']['field_presentation_link']['field'] = 'field_presentation_link';
  $handler->display->display_options['fields']['field_presentation_link']['label'] = '';
  $handler->display->display_options['fields']['field_presentation_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_presentation_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_presentation_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_presentation_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_presentation_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_presentation_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_presentation_link']['field_api_classes'] = 0;
  /* Field: User: Rendered User */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_presentation_speaker_target_id';
  $handler->display->display_options['fields']['rendered_entity']['label'] = 'Speaker';
  $handler->display->display_options['fields']['rendered_entity']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['external'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['html'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['hide_empty'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['empty_zero'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
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
    'presentations' => 'presentations',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['presentations'] = $view;

  $view = new view;
  $view->name = 'sponsored_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsored Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsored Events';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_event_image']['field_api_classes'] = 0;
  /* Field: Content: Event Link */
  $handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
  $handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
  $handler->display->display_options['fields']['field_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_link']['field_api_classes'] = 0;
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
    'sponsored_events' => 'sponsored_events',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['sponsored_events'] = $view;

  return $export;
}
