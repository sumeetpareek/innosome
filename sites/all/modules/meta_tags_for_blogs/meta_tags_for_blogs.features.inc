<?php
/**
 * @file
 * meta_tags_for_blogs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function meta_tags_for_blogs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "metatag" && $api == "metatag") {
    return array("version" => "1");
  }
}
