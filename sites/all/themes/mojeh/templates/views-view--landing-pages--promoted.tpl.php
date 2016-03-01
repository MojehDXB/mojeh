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
?>

<?php if ($rows): ?>
   <section class="promoted-area <?php print arg(1) != 'all' ? $classes : ''; ?>">

		<!-- Async Tag // Tag for network 1615: IAS - Mojeh  // Website: Mojeh-Actual-Test // Page: Home // Placement: Premium (6043930) // created at: Feb 19, 2016 7:37:25 AM -->
<!--<div id="6043930"><noscript><a href="http://adserver.adtech.de/adlink|3.0|1615.1|6043930|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="http://adserver.adtech.de/adserv|3.0|1615.1|6043930|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>-->

<div id="6043930"><noscript><a href="https://secserv.adtech.de/adlink|3.0|1615.1|6043930|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="https://secserv.adtech.de/adserv|3.0|1615.1|6043930|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>
 
		
      <?php print $rows; ?>

		<!-- PREMIUM/FULLBLEED AD -->
<!-- Async Tag // Tag for network 1615: IAS - Mojeh  // Website: Mojeh-Actual-Test // Page: Home // Placement: Full bleed (6043928) // created at: Feb 23, 2016 10:09:10 AM -->
<!--<div id="6043928"><noscript><a href="http://adserver.adtech.de/adlink|3.0|1615.1|6043928|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="http://adserver.adtech.de/adserv|3.0|1615.1|6043928|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>-->

<div id="6043928"><noscript><a href="https://secserv.adtech.de/adlink|3.0|1615.1|6043928|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="https://secserv.adtech.de/adserv|3.0|1615.1|6043928|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>
<!-- PREMIUM/FULLBLEED AD ENDS


<?php endif; ?>



