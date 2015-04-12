<?php
/**
 * @file
 * ads_devel.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ads_devel_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_use_uncompressed_jquery';
  $strongarm->value = 1;
  $export['devel_use_uncompressed_jquery'] = $strongarm;

  return $export;
}
