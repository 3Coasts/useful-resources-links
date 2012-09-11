<?php
/**
 * @file
 * useful_resources_links.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function useful_resources_links_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'useful_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Useful Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Useful Resources';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Open in Shadowbox? */
  $handler->display->display_options['fields']['field_shadowbox']['id'] = 'field_shadowbox';
  $handler->display->display_options['fields']['field_shadowbox']['table'] = 'field_data_field_shadowbox';
  $handler->display->display_options['fields']['field_shadowbox']['field'] = 'field_shadowbox';
  $handler->display->display_options['fields']['field_shadowbox']['label'] = '';
  $handler->display->display_options['fields']['field_shadowbox']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['alter']['text'] = ' rel="shadowbox" ';
  $handler->display->display_options['fields']['field_shadowbox']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shadowbox']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shadowbox']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shadowbox']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shadowbox']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shadowbox']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shadowbox']['field_api_classes'] = 0;
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['text'] = '<a href="[field_external_link-url]" [field_shadowbox] [field_external_link-attributes]>[field_external_link-title]</a>';
  $handler->display->display_options['fields']['field_external_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_external_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_external_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_external_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_external_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_external_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['field_api_classes'] = 0;
  /* Field: Content: Internal Link */
  $handler->display->display_options['fields']['field_internal_link']['id'] = 'field_internal_link';
  $handler->display->display_options['fields']['field_internal_link']['table'] = 'field_data_field_internal_link';
  $handler->display->display_options['fields']['field_internal_link']['field'] = 'field_internal_link';
  $handler->display->display_options['fields']['field_internal_link']['label'] = '';
  $handler->display->display_options['fields']['field_internal_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_internal_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_internal_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_internal_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_internal_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_internal_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_internal_link']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_internal_link']['field_api_classes'] = 0;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
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
    'resource' => 'resource',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Useful Resources';
  $export['useful_resources'] = $view;

  return $export;
}
