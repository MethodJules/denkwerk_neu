<?php
/**
 * @file
 * denkwerk_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function denkwerk_content_node_info() {
  $items = array(
    'denkwerk_basic_page' => array(
      'name' => t('Denkwerk_Basic_Page'),
      'base' => 'node_content',
      'description' => t('Inherited from Basic Page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'denkwerk_type' => array(
      'name' => t('Denkwerk_Type'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
