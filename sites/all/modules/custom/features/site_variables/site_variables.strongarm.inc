<?php
/**
 * @file
 * site_variables.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function site_variables_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Cameron\'s Coughy';
  $export['site_name'] = $strongarm;

  return $export;
}
