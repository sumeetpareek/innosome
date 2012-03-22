<?php
/**
 * Implements hook_preprocess_block().
 */
function innosome_alpha_preprocess_block(&$vars) {
	$vars['content_attributes_array']['class'][] = 'block-content';
}