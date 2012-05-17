<?php
/**
 * @file
 * meta_tags_for_blogs.metatag.inc
 */

/**
 * Implements hook_metatag_config_default().
 */
function meta_tags_for_blogs_metatag_config_default() {
  $export = array();

  $config = new stdClass;
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->cid = '2';
  $config->instance = 'node:blog';
  $config->config = array();
  $export['node:blog'] = $config;

  return $export;
}
