<?php

/**
 * @file
 * Plugin to handle the 'page' content type which allows the standard page
 * template variables to be embedded into a panel.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Secondary navigation links'),
  'single' => TRUE,
  'icon' => 'icon_page.png',
  'description' => t('Add the secondary_links (local tasks) as content.'),
  'category' => t('Page elements'),
  'render last' => TRUE,
);

/**
 * Output function for the 'page_secondary_links' content type.
 *
 * Outputs the secondary_links (local tasks) of the current page.
 */
function ctools_page_secondary_links_content_type_render($subtype, $conf, $panel_args) {
  $block = new stdClass();
  $block->content = theme('links', array('links' => menu_secondary_menu(), 'attributes' => array('class' => 'links secondary-links')));

  return $block;
}

/**
 * Returns an edit form for custom type settings.
 */
function ctools_page_secondary_links_content_type_edit_form($form, &$form_state) {
  // Empty so that we can have title override.
  return $form;
}
