<?php
/**
 * @file
 * ca_staff.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ca_staff_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ca_staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image']['id'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_ca_staff_s_title']['id'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['table'] = 'field_data_field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['field'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['text'] = '<i>[field_ca_staff_s_title]</i>';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['settings'] = array(
    'trim_length' => '25',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_staff' => 'ca_staff',
  );

  /* Display: CA Staff: Grid View Template One */
  $handler = $view->new_display('panel_pane', 'CA Staff: Grid View Template One', 'ca_staff_grid_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Staff: Grid View';

  /* Display: CA Staff: Sort */
  $handler = $view->new_display('panel_pane', 'CA Staff: Sort', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'weight' => 'weight',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'weight' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Weight: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['label'] = '';
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_staff' => 'ca_staff',
  );
  $handler->display->display_options['pane_title'] = 'CA Staff: Sort';

  /* Display: CA Staff: Admin */
  $handler = $view->new_display('panel_pane', 'CA Staff: Admin', 'panel_pane_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ca_staff_s_image' => 'field_ca_staff_s_image',
    'field_ca_staff_s_title' => 'field_ca_staff_s_title',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ca_staff_s_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ca_staff_s_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '25';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_staff' => 'ca_staff',
  );
  $handler->display->display_options['pane_title'] = 'CA Staff: Admin';

  /* Display: CA Staff: Node View Template One */
  $handler = $view->new_display('panel_pane', 'CA Staff: Node View Template One', 'panel_pane_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image']['id'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['settings'] = array(
    'colorbox_node_style' => 'default',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_ca_staff_s_title']['id'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['table'] = 'field_data_field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['field'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['text'] = '<i>[field_ca_staff_s_title]</i>';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['settings'] = array(
    'trim_length' => '25',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['id'] = 'field_ca_staff_s_image_1';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['settings'] = array(
    'colorbox_node_style' => 'default_thumbnail',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Staff: Node View Template One';
  $export['ca_staff'] = $view;

  return $export;
}
