<?php
/**
 * Implementation of hook_pre_provision_install()
 */
function drush_open_pre_provision_install($url = NULL) {
  drush_set_option('client_id', drush_get_option('client_id', ''), 'site');
  drush_set_option('site_package', drush_get_option('site_package', ''), 'site');
}