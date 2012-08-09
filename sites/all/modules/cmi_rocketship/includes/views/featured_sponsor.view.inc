<?php

$view = new view;
$view->name = 'featured_sponsor';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Featured Sponsor';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Sponsors';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: URL */
$handler->display->display_options['fields']['field_url']['id'] = 'field_url';
$handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
$handler->display->display_options['fields']['field_url']['field'] = 'field_url';
$handler->display->display_options['fields']['field_url']['label'] = '';
$handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_url']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_url']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_url']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['external'] = 0;
$handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
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
/* Field: Content: Logo */
$handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
$handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
$handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
$handler->display->display_options['fields']['field_logo']['label'] = '';
$handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_logo']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['field_logo']['alter']['path'] = '[field_url]';
$handler->display->display_options['fields']['field_logo']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_logo']['alter']['external'] = 1;
$handler->display->display_options['fields']['field_logo']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_logo']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_logo']['alter']['alt'] = '[title]';
$handler->display->display_options['fields']['field_logo']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_logo']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_logo']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_logo']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_logo']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_logo']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_logo']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_logo']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_logo']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_logo']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_logo']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_logo']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_logo']['field_api_classes'] = 0;
/* Sort criterion: Global: Random */
$handler->display->display_options['sorts']['random']['id'] = 'random';
$handler->display->display_options['sorts']['random']['table'] = 'views';
$handler->display->display_options['sorts']['random']['field'] = 'random';
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
  'sponsor' => 'sponsor',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
