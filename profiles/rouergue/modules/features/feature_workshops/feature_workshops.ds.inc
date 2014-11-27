<?php
/**
 * @file
 * feature_workshops.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_workshops_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|workshops|list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'workshops';
  $ds_fieldsetting->view_mode = 'list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Lire la suite',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|workshops|list'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_workshops_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|workshops|block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'workshops';
  $ds_layout->view_mode = 'block';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_video',
        1 => 'field_sound',
      ),
    ),
    'fields' => array(
      'field_video' => 'central',
      'field_sound' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|workshops|block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|workshops|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'workshops';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'body',
        1 => 'field_planned_release_date',
        2 => 'field_gallery',
        3 => 'field_event_author',
      ),
    ),
    'fields' => array(
      'body' => 'central',
      'field_planned_release_date' => 'central',
      'field_gallery' => 'central',
      'field_event_author' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|workshops|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|workshops|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'workshops';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_planned_release_date',
        1 => 'body',
        2 => 'field_gallery',
        3 => 'field_event_author',
        4 => 'field_inner_pages',
      ),
    ),
    'fields' => array(
      'field_planned_release_date' => 'central',
      'body' => 'central',
      'field_gallery' => 'central',
      'field_event_author' => 'central',
      'field_inner_pages' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|workshops|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|workshops|list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'workshops';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_gallery',
        1 => 'title',
        2 => 'body',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_gallery' => 'central',
      'title' => 'central',
      'body' => 'central',
      'node_link' => 'central',
    ),
    'limit' => array(
      'field_gallery' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|workshops|list'] = $ds_layout;

  return $export;
}