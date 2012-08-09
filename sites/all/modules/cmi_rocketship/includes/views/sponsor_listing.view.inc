<?php

$view = new view;
$view->name = 'sponsor_listing';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Sponsor Listing';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = 0;
$handler->display->display_options['row_options']['default_field_elements'] = 1;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['empty'] = FALSE;
$handler->display->display_options['header']['area']['content'] = 'I am currently looking for sponsors to allow me to work on this project full time. If you are interested in funding this project, please contact me through the \'Contact\' form above! I will send you my formal funding proposal including information on special benefits for sponsorships over $5,000. The following companies have provided sponsorship of various types through the life of the initiative. The CMI team thanks them profusely.';
$handler->display->display_options['header']['area']['format'] = 'full_html';
$handler->display->display_options['header']['area']['tokenize'] = 0;
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
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
  'image_style' => 'medium',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_logo']['field_api_classes'] = 0;
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
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_default_classes'] = 1;
$handler->display->display_options['fields']['body']['hide_empty'] = 0;
$handler->display->display_options['fields']['body']['empty_zero'] = 0;
$handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['body']['field_api_classes'] = 0;
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
  'sponsor' => 'sponsor',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'sponsors';
