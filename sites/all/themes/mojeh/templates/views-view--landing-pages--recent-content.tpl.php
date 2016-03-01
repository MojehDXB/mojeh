<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */

$current_page = isset($view->query->pager->current_page) ? $view->query->pager->current_page : 0;
$total_pages = $view->query->pager->options['items_per_page'] > 0 ? ceil($view->total_rows/$view->query->pager->options['items_per_page']) : 0;
?>

<?php if ($attachment_before): ?>
   <?php print $attachment_before; ?>
<?php endif; ?>

<?php if ($rows): ?>
   <section class="latest <?php print arg(1) != 'all' ? $classes : ''; ?>">
   
   <?php print $rows; ?>

		 <!-- SLIDESHOW AD-->
 <!-- Async Tag // Tag for network 1615: IAS - Mojeh  // Website: Mojeh-Actual-Test // Page: Home // Placement: Slideshow (6043934) // created at: Feb 22, 2016 12:34:12 PM -->
<!--<div id="6043934"><noscript><a href="http://adserver.adtech.de/adlink|3.0|1615.1|6043934|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="http://adserver.adtech.de/adserv|3.0|1615.1|6043934|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>-->
 
<div id="6043934"><noscript><a href="https://secserv.adtech.de/adlink|3.0|1615.1|6043934|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="https://secserv.adtech.de/adserv|3.0|1615.1|6043934|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>

 <!-- SLIDESHOW AD ENDS-->
      
   </section>
  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>
<?php endif; ?>

