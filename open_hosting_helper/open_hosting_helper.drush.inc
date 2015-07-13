<?php
/**
 * Implementation of drush_hook_pre_hosting_task()
 * Send the site's client id & attributes to the backend for processing.
 */
function drush_open_hosting_helper_pre_hosting_task() {
  $task =& drush_get_context('HOSTING_TASK');
  if ($task->ref->type == 'site' && ($task->task_type == 'install' || $task->task_type == 'verify')) {
    $task->options['client_id'] = $task->ref->client_id;
    $task->options['site_package'] = $task->ref->site_package;
  }
}