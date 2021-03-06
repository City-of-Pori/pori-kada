<?php

/**
 * @file
 * kada_media_feature.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function kada_media_feature_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive carousel';
  $picture_mapping->machine_name = 'responsive_carousel';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.mbl_prtrt' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'top_carousel_breakpoints_theme_kada_mobile_1x',
      ),
    ),
    'breakpoints.theme.kada.mbl' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'top_carousel_breakpoints_theme_kada_mbl_nrw_1x',
      ),
    ),
    'breakpoints.theme.kada.mbl_nrw' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'top_carousel_breakpoints_theme_kada_mbl_wide_1x',
      ),
    ),
    'breakpoints.theme.kada.mbl_wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'top_carousel_breakpoints_theme_kada_tbl_1x',
      ),
    ),
    'breakpoints.theme.kada.tbl' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'top_carousel_breakpoints_theme_kada_dsktp_nrw_1x',
      ),
    ),
    'breakpoints.theme.kada.dsktp_nrw' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'top_carousel_breakpoints_theme_kada_dsktp_wide_1x',
      ),
    ),
    'breakpoints.theme.kada.dsktp_wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'top_carousel',
      ),
    ),
  );
  $export['responsive_carousel'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive content full';
  $picture_mapping->machine_name = 'responsive_content_full';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_full_breakpoints_theme_kada_desktop_1x',
      ),
    ),
    'breakpoints.theme.kada.smalldesktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_full_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_full_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_full_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_full_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_content_full'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive content full 16:9';
  $picture_mapping->machine_name = 'responsive_content_full_16_9';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_full_16_9_breakpoints_theme_kada_desktop_1x',
      ),
    ),
    'breakpoints.theme.kada.smalldesktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_full_16_9_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_full_16_9_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_full_16_9_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_full_16_9_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_content_full_16_9'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive content half';
  $picture_mapping->machine_name = 'responsive_content_half';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_half_breakpoints_theme_kada_desktop_1x',
      ),
    ),
    'breakpoints.theme.kada.smalldesktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_half_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_half_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_half_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_half_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_content_half'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive content half 16:9';
  $picture_mapping->machine_name = 'responsive_content_half_16_9';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_half_16_9_breakpoints_theme_kada_desktop_1x',
      ),
    ),
    'breakpoints.theme.kada.smalldesktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_half_16_9_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_half_16_9_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_half_16_9_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'content_half_16_9_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_content_half_16_9'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive event list image';
  $picture_mapping->machine_name = 'responsive_event_list_image';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'event_list_image_breakpoints_theme_kada_desktop_1x',
      ),
    ),
    'breakpoints.theme.kada.smalldesktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'event_list_image_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'event_list_image_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'event_list_image_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'event_list_image_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_event_list_image'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive event node';
  $picture_mapping->machine_name = 'responsive_event_node';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'event_node_breakpoints_theme_kada_desktop_1x',
      ),
    ),
    'breakpoints.theme.kada.smalldesktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'event_node_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'event_node_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'event_node_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'event_node_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_event_node'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive full modal';
  $picture_mapping->machine_name = 'responsive_full_modal';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'full_modal_breakpoints_theme_kada_desktop_1x',
      ),
    ),
    'breakpoints.theme.kada.smalldesktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'full_modal_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'full_modal_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'full_modal_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'full_modal_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_full_modal'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive grid item';
  $picture_mapping->machine_name = 'responsive_grid_item';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid_item_breakpoints_theme_kada_desktop_1x',
      ),
    ),
    'breakpoints.theme.kada.smalldesktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid_item_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid_item_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid_item_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'grid_item_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_grid_item'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive main content';
  $picture_mapping->machine_name = 'responsive_main_content';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_content_breakpoints_theme_kada_desktop_1x',
      ),
    ),
    'breakpoints.theme.kada.smalldesktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_content_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_content_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_content_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_content_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_main_content'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive main liftup, narrow';
  $picture_mapping->machine_name = 'responsive_main_liftup_narrow';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_liftup_narrow_breakpoints_theme_kada_desktop_1x',
      ),
    ),
    'breakpoints.theme.kada.smalldesktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_liftup_narrow_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_liftup_narrow_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_liftup_narrow_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_liftup_narrow_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_main_liftup_narrow'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive main liftup, wide';
  $picture_mapping->machine_name = 'responsive_main_liftup_wide';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_liftup_wide_breakpoints_theme_kada_desktop_1x',
      ),
    ),
    'breakpoints.theme.kada.smalldesktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_liftup_wide_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_liftup_wide_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_liftup_wide_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'main_liftup_wide_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_main_liftup_wide'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive person';
  $picture_mapping->machine_name = 'responsive_person';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.mbl_prtrt' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'person_breakpoints_theme_kada_mobile_1x',
      ),
    ),
    'breakpoints.theme.kada.mbl' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'person_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mbl_nrw' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.kada.mbl_wide' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.kada.tbl' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.kada.dsktp_nrw' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'person_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.dsktp_wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'person_breakpoints_theme_kada_desktopwide_1x',
      ),
    ),
  );
  $export['responsive_person'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive project';
  $picture_mapping->machine_name = 'responsive_project';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'project_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'project_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'project_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'project_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_project'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive top carousel';
  $picture_mapping->machine_name = 'responsive_top_carousel';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'top_carousel_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'top_carousel_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'top_carousel_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'top_carousel_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_top_carousel'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive topics';
  $picture_mapping->machine_name = 'responsive_topics';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'topics_breakpoints_theme_kada_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'topics_breakpoints_theme_kada_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.phablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'topics_breakpoints_theme_kada_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'topics_breakpoints_theme_kada_mobile_1x',
      ),
    ),
  );
  $export['responsive_topics'] = $picture_mapping;

  return $export;
}
