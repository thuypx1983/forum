<?php

/**
 * @file
 * Contains plugin type registration information for the context tool.
 *
 * Don't actually need to declare anything for these plugin types right now,
 * apart from the fact that they exist. So, an empty array.
 */

function ctools_context_plugin_type(&$items) {
  $items['contexts'] = array(
    'child plugins' => TRUE,
  );
  $items['arguments'] = array(
    'child plugins' => TRUE,
  );
  $items['relationships'] = array(
    'child plugins' => TRUE,
  );
  $items['access'] = array(
    'child plugins' => TRUE,
  );
}
