<?php

/**
 * @file
 * kada_landing_page_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kada_landing_page_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_page';
  $context->description = 'Liftups per landing page';
  $context->tag = 'sections';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'pori_fi' => 'pori_fi',
      ),
    ),
    'node' => array(
      'values' => array(
        'landing_page' => 'landing_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-kada_top_carousel-block_2' => array(
          'module' => 'views',
          'delta' => 'kada_top_carousel-block_2',
          'region' => 'header',
          'weight' => '-100',
        ),
        'views-kada_recommended-block' => array(
          'module' => 'views',
          'delta' => 'kada_recommended-block',
          'region' => 'header',
          'weight' => '-99',
        ),
        'views-26cc4cf3ee6522528a15e4670acb444e' => array(
          'module' => 'views',
          'delta' => '26cc4cf3ee6522528a15e4670acb444e',
          'region' => 'content',
          'weight' => '-10',
        ),
        'quicktabs-feed_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'feed_tabs',
          'region' => 'content',
          'weight' => '-9',
        ),
        'kada_news_feature-news_archive_link' => array(
          'module' => 'kada_news_feature',
          'delta' => 'news_archive_link',
          'region' => 'content',
          'weight' => '-8',
        ),
        'kada_export_feature-kada_rss_feed_for_landing_page' => array(
          'module' => 'kada_export_feature',
          'delta' => 'kada_rss_feed_for_landing_page',
          'region' => 'content',
          'weight' => '-7',
        ),
        'kada_widget_feature-widget_before_content' => array(
          'module' => 'kada_widget_feature',
          'delta' => 'widget_before_content',
          'region' => 'before_content',
          'weight' => '-10',
        ),
        'views-kada_project_liftups-block' => array(
          'module' => 'views',
          'delta' => 'kada_project_liftups-block',
          'region' => 'before_footer',
          'weight' => '-10',
        ),
        'views-pori_presentation_liftup-block' => array(
          'module' => 'views',
          'delta' => 'pori_presentation_liftup-block',
          'region' => 'before_footer',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'landing-page',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Liftups per landing page');
  t('sections');
  $export['landing_page'] = $context;

  return $export;
}
