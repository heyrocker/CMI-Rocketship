<?php

$view = new view;
$view->name = 'critical_issues';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Critical Issues';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Critical Issues';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
/* Field: Content: Issue Node ID */
$handler->display->display_options['fields']['field_nid']['id'] = 'field_nid';
$handler->display->display_options['fields']['field_nid']['table'] = 'field_data_field_nid';
$handler->display->display_options['fields']['field_nid']['field'] = 'field_nid';
$handler->display->display_options['fields']['field_nid']['label'] = '';
$handler->display->display_options['fields']['field_nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_nid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_nid']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_nid']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_nid']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_nid']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_nid']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_nid']['field_api_classes'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['title']['alter']['path'] = 'http://drupal.org/node/[field_nid]';
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['external'] = 1;
$handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['element_label_colon'] = 1;
$handler->display->display_options['fields']['title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['title']['link_to_node'] = 0;
/* Field: Content: Status */
$handler->display->display_options['fields']['field_status']['id'] = 'field_status';
$handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
$handler->display->display_options['fields']['field_status']['field'] = 'field_status';
$handler->display->display_options['fields']['field_status']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_status']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_status']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_status']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_status']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_status']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_status']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_status']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_status']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_status']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_status']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_status']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_status']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_status']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_status']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_status']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_status']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_status']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_status']['field_api_classes'] = 0;
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
/* Filter criterion: Content: Tag Vocab (field_issue_tags) */
$handler->display->display_options['filters']['field_issue_tags_tid']['id'] = 'field_issue_tags_tid';
$handler->display->display_options['filters']['field_issue_tags_tid']['table'] = 'field_data_field_issue_tags';
$handler->display->display_options['filters']['field_issue_tags_tid']['field'] = 'field_issue_tags_tid';
$handler->display->display_options['filters']['field_issue_tags_tid']['value'] = array(
  15 => '15',
);
$handler->display->display_options['filters']['field_issue_tags_tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['field_issue_tags_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_issue_tags_tid']['vocabulary'] = 'tags';
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['operator'] = 'not_starts';
$handler->display->display_options['filters']['field_status_value']['value'] = 'closed';
$handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
$handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['expose']['required'] = 0;
$handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = FALSE;
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value_1']['id'] = 'field_status_value_1';
$handler->display->display_options['filters']['field_status_value_1']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value_1']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value_1']['operator'] = '!=';
$handler->display->display_options['filters']['field_status_value_1']['value'] = 'postponed';
$handler->display->display_options['filters']['field_status_value_1']['expose']['operator_id'] = 'field_status_value_1_op';
$handler->display->display_options['filters']['field_status_value_1']['expose']['label'] = 'Status (field_status)';
$handler->display->display_options['filters']['field_status_value_1']['expose']['operator'] = 'field_status_value_1_op';
$handler->display->display_options['filters']['field_status_value_1']['expose']['identifier'] = 'field_status_value_1';
$handler->display->display_options['filters']['field_status_value_1']['expose']['required'] = 0;
$handler->display->display_options['filters']['field_status_value_1']['expose']['multiple'] = FALSE;
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value_2']['id'] = 'field_status_value_2';
$handler->display->display_options['filters']['field_status_value_2']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value_2']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value_2']['operator'] = '!=';
$handler->display->display_options['filters']['field_status_value_2']['value'] = 'fixed';

/* Display: Critical Issues */
$handler = $view->new_display('block', 'Critical Issues', 'block');

/* Display: Major Issues */
$handler = $view->new_display('block', 'Major Issues', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Major Issues';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Tag Vocab (field_issue_tags) */
$handler->display->display_options['filters']['field_issue_tags_tid']['id'] = 'field_issue_tags_tid';
$handler->display->display_options['filters']['field_issue_tags_tid']['table'] = 'field_data_field_issue_tags';
$handler->display->display_options['filters']['field_issue_tags_tid']['field'] = 'field_issue_tags_tid';
$handler->display->display_options['filters']['field_issue_tags_tid']['value'] = array(
  23 => '23',
);
$handler->display->display_options['filters']['field_issue_tags_tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['field_issue_tags_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_issue_tags_tid']['vocabulary'] = 'tags';
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['operator'] = 'not_starts';
$handler->display->display_options['filters']['field_status_value']['value'] = 'closed';
$handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
$handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['expose']['required'] = 0;
$handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = FALSE;
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value_1']['id'] = 'field_status_value_1';
$handler->display->display_options['filters']['field_status_value_1']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value_1']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value_1']['operator'] = '!=';
$handler->display->display_options['filters']['field_status_value_1']['value'] = 'postponed';
$handler->display->display_options['filters']['field_status_value_1']['expose']['operator_id'] = 'field_status_value_1_op';
$handler->display->display_options['filters']['field_status_value_1']['expose']['label'] = 'Status (field_status)';
$handler->display->display_options['filters']['field_status_value_1']['expose']['operator'] = 'field_status_value_1_op';
$handler->display->display_options['filters']['field_status_value_1']['expose']['identifier'] = 'field_status_value_1';
$handler->display->display_options['filters']['field_status_value_1']['expose']['required'] = 0;
$handler->display->display_options['filters']['field_status_value_1']['expose']['multiple'] = FALSE;
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value_2']['id'] = 'field_status_value_2';
$handler->display->display_options['filters']['field_status_value_2']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value_2']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value_2']['operator'] = '!=';
$handler->display->display_options['filters']['field_status_value_2']['value'] = 'fixed';

/* Display: Novice Issues */
$handler = $view->new_display('block', 'Novice Issues', 'block_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Novice Issues';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Tag Vocab (field_issue_tags) */
$handler->display->display_options['filters']['field_issue_tags_tid']['id'] = 'field_issue_tags_tid';
$handler->display->display_options['filters']['field_issue_tags_tid']['table'] = 'field_data_field_issue_tags';
$handler->display->display_options['filters']['field_issue_tags_tid']['field'] = 'field_issue_tags_tid';
$handler->display->display_options['filters']['field_issue_tags_tid']['value'] = array(
  27 => '27',
);
$handler->display->display_options['filters']['field_issue_tags_tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['field_issue_tags_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_issue_tags_tid']['vocabulary'] = 'tags';
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['operator'] = 'not_starts';
$handler->display->display_options['filters']['field_status_value']['value'] = 'closed';
$handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
$handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
$handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value']['expose']['required'] = 0;
$handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = FALSE;
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value_1']['id'] = 'field_status_value_1';
$handler->display->display_options['filters']['field_status_value_1']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value_1']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value_1']['operator'] = '!=';
$handler->display->display_options['filters']['field_status_value_1']['value'] = 'postponed';
$handler->display->display_options['filters']['field_status_value_1']['expose']['operator_id'] = 'field_status_value_1_op';
$handler->display->display_options['filters']['field_status_value_1']['expose']['label'] = 'Status (field_status)';
$handler->display->display_options['filters']['field_status_value_1']['expose']['operator'] = 'field_status_value_1_op';
$handler->display->display_options['filters']['field_status_value_1']['expose']['identifier'] = 'field_status_value_1';
$handler->display->display_options['filters']['field_status_value_1']['expose']['required'] = 0;
$handler->display->display_options['filters']['field_status_value_1']['expose']['multiple'] = FALSE;
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_value_2']['id'] = 'field_status_value_2';
$handler->display->display_options['filters']['field_status_value_2']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_value_2']['field'] = 'field_status_value';
$handler->display->display_options['filters']['field_status_value_2']['operator'] = '!=';
$handler->display->display_options['filters']['field_status_value_2']['value'] = 'fixed';
