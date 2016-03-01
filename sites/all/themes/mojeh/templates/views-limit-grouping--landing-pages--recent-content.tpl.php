<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

$ad_zone_id = null;

?>
<?php if($title && drupal_is_front_page()): ?>
<?php $title_class = trim(strtolower(str_replace(' ','-',strip_tags($title)))); ?>
<section class="latest-container" id="latest-in-<?php print $title_class; ?>-anchor">
<h3 class="latest-title"><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
    <?php  print $row; $ad_zone_id = $view->render_field('field_ad_zone_id', $id); ?>
<?php endforeach; ?> 
<?php if($title && drupal_is_front_page()): ?>
   <?php 
      $ad_zone_id = intval($ad_zone_id);
      if($ad_zone_id > 0) 
 { ?>

	<!-- SLIDING WINDOW AD-->
 <!-- Async Tag // Tag for network 1615: IAS - Mojeh  // Website: Mojeh-Actual-Test // Page: Home // Placement: Sliding Window (6043932) // created at: Feb 23, 2016 12:47:05 PM -->
<!--<div id="6043932-<?php echo $ad_zone_id;?>"><noscript><a href="http://adserver.adtech.de/adlink|3.0|1615.1|6043932|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="http://adserver.adtech.de/adserv|3.0|1615.1|6043932|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>-->

<div id="6043932-<?php echo $ad_zone_id;?>"><noscript><a href="https://secserv.adtech.de/adlink|3.0|1615.1|6043932|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="https://secserv.adtech.de/adserv|3.0|1615.1|6043932|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>
<!-- SLIDING WINDOW ENDS-->
		
    <?php }
   ?>
</section>
<?php endif; ?>

