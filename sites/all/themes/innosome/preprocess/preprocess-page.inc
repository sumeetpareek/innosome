<?php
/**
 * Implements hook_preprocess_page().
 */
function innosome_alpha_preprocess_page(&$vars) {
	// Hide the node title on the front page
	if($vars['is_front']) {
		$vars['title'] = '';
		$vars['page']['content']['content']['content']['system_main']['default_message'] = '';
	}
}