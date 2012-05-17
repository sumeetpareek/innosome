<?php
/**
 * @file
 * drupal_give_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function drupal_give_content_types_node_info() {
  $items = array(
    'contribution_sites' => array(
      'name' => t('Contribution Sites'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'presentations' => array(
      'name' => t('Presentations'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sponsored_events' => array(
      'name' => t('Sponsored Events'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
