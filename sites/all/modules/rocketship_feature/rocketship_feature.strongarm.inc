<?php
/**
 * @file
 * rocketship_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rocketship_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_issue';
  $strongarm->value = 0;
  $export['comment_anonymous_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_issue';
  $strongarm->value = 1;
  $export['comment_default_mode_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_issue';
  $strongarm->value = '50';
  $export['comment_default_per_page_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_issue';
  $strongarm->value = 1;
  $export['comment_form_location_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_issue';
  $strongarm->value = '2';
  $export['comment_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_issue';
  $strongarm->value = '1';
  $export['comment_preview_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_issue';
  $strongarm->value = 1;
  $export['comment_subject_field_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__issue';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_issue';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_issue';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_issue';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_issue';
  $strongarm->value = '1';
  $export['node_preview_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_issue';
  $strongarm->value = 1;
  $export['node_submitted_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'front';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'CMI Rocketship';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_sky_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bigscreen_layout' => 'three-col-grail',
    'bigscreen_sidebar_unit' => 'px',
    'bigscreen_sidebar_first' => '180',
    'bigscreen_sidebar_second' => '180',
    'bigscreen_page_unit' => 'px',
    'bigscreen_page_width' => '960',
    'bigscreen_set_max_width' => 0,
    'bigscreen_max_width_unit' => 'px',
    'bigscreen_max_width' => '1260',
    'bigscreen_media_query' => 'only screen and (min-width:1025px)',
    'tablet_landscape_layout' => 'three-col-grail',
    'tablet_landscape_sidebar_unit' => 'px',
    'tablet_landscape_sidebar_first' => '180',
    'tablet_landscape_sidebar_second' => '180',
    'tablet_landscape_page_unit' => 'px',
    'tablet_landscape_page_width' => '960',
    'tablet_landscape_set_max_width' => 0,
    'tablet_landscape_max_width_unit' => 'px',
    'tablet_landscape_max_width' => '960',
    'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:1024px)',
    'tablet_portrait_layout' => 'one-col-vert',
    'tablet_portrait_sidebar_unit' => '%',
    'tablet_portrait_sidebar_first' => '50',
    'tablet_portrait_sidebar_second' => '50',
    'tablet_portrait_page_unit' => '%',
    'tablet_portrait_page_width' => '100',
    'tablet_portrait_set_max_width' => 0,
    'tablet_portrait_max_width_unit' => 'px',
    'tablet_portrait_max_width' => '780',
    'tablet_portrait_media_query' => 'only screen and (min-width:481px) and (max-width:768px)',
    'smartphone_landscape_layout' => 'one-col-vert',
    'smartphone_landscape_sidebar_unit' => '%',
    'smartphone_landscape_sidebar_first' => '50',
    'smartphone_landscape_sidebar_second' => '50',
    'smartphone_landscape_page_unit' => '%',
    'smartphone_landscape_page_width' => '100',
    'smartphone_landscape_set_max_width' => 0,
    'smartphone_landscape_max_width_unit' => 'px',
    'smartphone_landscape_max_width' => '520',
    'smartphone_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:480px)',
    'smartphone_portrait_media_query' => 'only screen and (max-width:320px)',
    'breadcrumb_display' => 'yes',
    'breadcrumb_separator' => ' &#187; ',
    'breadcrumb_home' => 0,
    'search_snippet' => 1,
    'search_info_type' => 1,
    'search_info_user' => 1,
    'search_info_date' => 1,
    'search_info_comment' => 1,
    'search_info_upload' => 1,
    'search_info_separator' => ' - ',
    'horizontal_login_block' => 0,
    'comments_hide_title' => 0,
    'extra_page_classes' => 1,
    'extra_article_classes' => 1,
    'extra_comment_classes' => 1,
    'extra_block_classes' => 1,
    'extra_menu_classes' => 1,
    'extra_item_list_classes' => 1,
    'menu_item_span_elements' => 0,
    'frontpage_remove_title' => 0,
    'base_font_type' => '',
    'base_font' => 'bf-ssl',
    'base_font_gwf' => 'Abel',
    'site_name_font_type' => '',
    'site_name_font' => 'snf-ssl',
    'site_name_font_gwf' => 'Abel',
    'site_slogan_font_type' => '',
    'site_slogan_font' => 'ssf-ssl',
    'site_slogan_font_gwf' => 'Abel',
    'page_title_font_type' => '',
    'page_title_font' => 'ptf-ssl',
    'page_title_font_gwf' => 'Abel',
    'node_title_font_type' => '',
    'node_title_font' => 'ntf-ssl',
    'node_title_font_gwf' => 'Abel',
    'comment_title_font_type' => '',
    'comment_title_font' => 'ctf-ssl',
    'comment_title_font_gwf' => 'Abel',
    'block_title_font_type' => '',
    'block_title_font' => 'btf-ssl',
    'block_title_font_gwf' => 'Abel',
    'font_size' => 'fs-medium',
    'headings_styles_caps' => 0,
    'headings_styles_weight' => 0,
    'headings_styles_shadow' => 0,
    'content_corner_radius' => 'rc-8',
    'tabs_corner_radius' => 'rct-8',
    'body_background' => 'bb-h',
    'image_alignment' => 'ia-r',
    'image_caption_teaser' => 0,
    'image_caption_full' => 0,
    'menu_bullets' => 'mb-dd',
    'at__active_tab' => 'edit-corners',
    'scheme' => 'default',
    'palette' => array(
      'base' => '#efedea',
      'text' => '#000000',
      'tab_bg' => '#fffffe',
      'tab_fg' => '#101010',
      'tab_bg_active' => '#efedeb',
      'tab_fg_active' => '#111111',
      'site_name' => '#4c4742',
      'site_slogan' => '#837b72',
      'navigation_bg' => '#e1dfdc',
      'navigation_fg' => '#4d453e',
      'title_page' => '#100001',
      'title_block' => '#5e5247',
      'title_linked' => '#100011',
      'link' => '#1c6ea0',
      'link_hover' => '#42a9be',
      'node_links_bg' => '#e7e5e3',
      'node_links_fg' => '#100100',
      'node_links_bg_hover' => '#d7d5d3',
      'node_links_fg_hover' => '#100101',
      'footer_bg' => '#e3e1df',
      'footer_fg' => '#010101',
      'footer_links' => '#126598',
      'footer_links_hover' => '#127ba5',
      'header_fg' => '#101000',
      'header_links' => '#0679be',
      'header_links_hover' => '#42a9ba',
    ),
    'theme' => 'sky',
    'info' => array(
      'fields' => array(
        'base' => 'Page background',
        'text' => 'Text',
        'site_name' => 'Site name',
        'site_slogan' => 'Site slogan',
        'navigation_bg' => 'Nav background',
        'navigation_fg' => 'Nav foreground',
        'title_page' => 'Page title',
        'title_block' => 'Block title',
        'title_linked' => 'Linked titles',
        'link' => 'Links',
        'link_hover' => 'Links hover',
        'tab_bg' => 'Tabs background',
        'tab_fg' => 'Tabs foreground',
        'tab_bg_active' => 'Tabs background hover',
        'tab_fg_active' => 'Tabs foreground hover',
        'node_links_bg' => 'Node links background',
        'node_links_fg' => 'Node links foreground',
        'node_links_bg_hover' => 'Node links background hover',
        'node_links_fg_hover' => 'Node links foreground hover',
        'footer_bg' => 'Footer background',
        'footer_fg' => 'Footer foreground',
        'footer_links' => 'Footer links',
        'footer_links_hover' => 'Footer links hover',
        'header_fg' => 'Header foreground',
        'header_links' => 'Header links',
        'header_links_hover' => 'Header links hover',
      ),
      'schemes' => array(
        'default' => array(
          'title' => 'Vanilla Sky (default)',
          'colors' => array(
            'base' => '#efedea',
            'text' => '#000000',
            'tab_bg' => '#fffffe',
            'tab_fg' => '#101010',
            'tab_bg_active' => '#efedeb',
            'tab_fg_active' => '#111111',
            'site_name' => '#4c4742',
            'site_slogan' => '#837b72',
            'navigation_bg' => '#e1dfdc',
            'navigation_fg' => '#4d453e',
            'title_page' => '#100001',
            'title_block' => '#5e5247',
            'title_linked' => '#100011',
            'link' => '#1c6ea0',
            'link_hover' => '#42a9be',
            'node_links_bg' => '#e7e5e3',
            'node_links_fg' => '#100100',
            'node_links_bg_hover' => '#d7d5d3',
            'node_links_fg_hover' => '#100101',
            'footer_bg' => '#e3e1df',
            'footer_fg' => '#010101',
            'footer_links' => '#126598',
            'footer_links_hover' => '#127ba5',
            'header_fg' => '#101000',
            'header_links' => '#0679be',
            'header_links_hover' => '#42a9ba',
          ),
        ),
        'sky_blue' => array(
          'title' => 'Blue Sky',
          'colors' => array(
            'base' => '#195594',
            'text' => '#000000',
            'tab_bg' => '#eeeeee',
            'tab_fg' => '#000000',
            'tab_bg_active' => '#ededed',
            'tab_fg_active' => '#000000',
            'site_name' => '#ffffff',
            'site_slogan' => '#ffffff',
            'navigation_bg' => '#5d9dd0',
            'navigation_fg' => '#ffffff',
            'title_page' => '#100001',
            'title_block' => '#888888',
            'title_linked' => '#000000',
            'link' => '#2897d7',
            'link_hover' => '#1473d7',
            'node_links_bg' => '#eeeeee',
            'node_links_fg' => '#000002',
            'node_links_bg_hover' => '#aaaaaa',
            'node_links_fg_hover' => '#000003',
            'footer_bg' => '#eeeeee',
            'footer_fg' => '#000000',
            'footer_links' => '#2897d7',
            'footer_links_hover' => '#1473d7',
            'header_fg' => '#ffffff',
            'header_links' => '#78bbe2',
            'header_links_hover' => '#42a9be',
          ),
        ),
        'sky_purple' => array(
          'title' => 'Purple',
          'colors' => array(
            'base' => '#382d49',
            'text' => '#000000',
            'tab_bg' => '#efedea',
            'tab_fg' => '#000000',
            'tab_bg_active' => '#382d48',
            'tab_fg_active' => '#ffffff',
            'site_name' => '#ffffff',
            'site_slogan' => '#ccbcd2',
            'navigation_bg' => '#ada2b4',
            'navigation_fg' => '#000000',
            'title_page' => '#5f3276',
            'title_block' => '#666666',
            'title_linked' => '#482762',
            'link' => '#4f1b88',
            'link_hover' => '#8e45d3',
            'node_links_bg' => '#ddd6e0',
            'node_links_fg' => '#000000',
            'node_links_bg_hover' => '#d7d5d3',
            'node_links_fg_hover' => '#000000',
            'footer_bg' => '#4a3f5a',
            'footer_fg' => '#f8f2f2',
            'footer_links' => '#b195b0',
            'footer_links_hover' => '#42a9be',
            'header_fg' => '#cccccc',
            'header_links' => '#997da6',
            'header_links_hover' => '#42a9be',
          ),
        ),
        'sky_red' => array(
          'title' => 'Red',
          'colors' => array(
            'base' => '#a21a2e',
            'text' => '#000000',
            'tab_bg' => '#fffffe',
            'tab_fg' => '#101010',
            'tab_bg_active' => '#efedeb',
            'tab_fg_active' => '#111111',
            'site_name' => '#ffffff',
            'site_slogan' => '#ffffff',
            'navigation_bg' => '#8a0509',
            'navigation_fg' => '#ffffff',
            'title_page' => '#000000',
            'title_block' => '#999999',
            'title_linked' => '#000000',
            'link' => '#cf3f54',
            'link_hover' => '#42a9be',
            'node_links_bg' => '#e7e5e3',
            'node_links_fg' => '#54493e',
            'node_links_bg_hover' => '#d7d5d3',
            'node_links_fg_hover' => '#42382e',
            'footer_bg' => '#8a0509',
            'footer_fg' => '#ffffff',
            'footer_links' => '#aaaaaa',
            'footer_links_hover' => '#42a9be',
            'header_fg' => '#ffffff',
            'header_links' => '#aaaaaa',
            'header_links_hover' => '#42a9be',
          ),
        ),
        '' => array(
          'title' => 'Custom',
          'colors' => array(),
        ),
      ),
      'css' => array(
        0 => 'color/colors.css',
      ),
      'copy' => array(
        0 => 'logo.png',
      ),
      'gradients' => array(
        0 => array(
          'dimension' => array(
            0 => 0,
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'direction' => 'vertical',
          'colors' => array(
            0 => 'link',
            1 => 'text',
          ),
        ),
      ),
      'fill' => array(),
      'slices' => array(),
      'blend_target' => '#ffffff',
      'preview_image' => 'color/color-preview.png',
      'preview_css' => 'color/preview.css',
      'base_image' => 'color/base.png',
    ),
  );
  $export['theme_sky_settings'] = $strongarm;

  return $export;
}
