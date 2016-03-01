<?php
/**
 * @file
 * mojeh_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mojeh_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'article_nodes';
  $context->description = 'Blocks for articles';
  $context->tag = 'Node Types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'feature' => 'feature',
        'gallery' => 'gallery',
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-search_page-page' => array(
          'module' => 'views',
          'delta' => '-exp-search_page-page',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'mojeh_prevnext-mojeh_prevnext' => array(
          'module' => 'mojeh_prevnext',
          'delta' => 'mojeh_prevnext',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for articles');
  t('Node Types');
  $export['article_nodes'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = 'Global, should show in all sections';
  $context->tag = 'Global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global');
  t('Global, should show in all sections');
  $export['global'] = $context;

  return $export;
}
