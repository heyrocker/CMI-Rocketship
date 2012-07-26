<?php

$view = new view;
$view->name = 'on_fire_issues';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'On fire issues';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'On fire issues';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Flags: highest_priority */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'highest_priority';
$handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
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
/* Field: Content: Issue Node ID */
$handler->display->display_options['fields']['field_nid']['id'] = 'field_nid';
$handler->display->display_options['fields']['field_nid']['table'] = 'field_data_field_nid';
$handler->display->display_options['fields']['field_nid']['field'] = 'field_nid';
$handler->display->display_options['fields']['field_nid']['label'] = 'Issue Link';
$handler->display->display_options['fields']['field_nid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['field_nid']['alter']['path'] = 'http://drupal.org/node/[field_nid]';
$handler->display->display_options['fields']['field_nid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['external'] = 1;
$handler->display->display_options['fields']['field_nid']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['alt'] = 'Issue link';
$handler->display->display_options['fields']['field_nid']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_nid']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_nid']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_nid']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_nid']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_nid']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_nid']['field_api_classes'] = 0;
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
  'issue' => 'issue',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
