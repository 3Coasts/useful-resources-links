<?php
/**
 * @file
 * useful_resources_links.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function useful_resources_links_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function useful_resources_links_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function useful_resources_links_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('Resources are displayed in the "Useful Resources" links at the bottom of every page.'),
      'has_title' => '1',
      'title_label' => t('Resource Name'),
      'help' => '',
    ),
  );
  return $items;
}
