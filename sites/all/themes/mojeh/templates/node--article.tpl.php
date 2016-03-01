<?php

  $lpimageurl = '';
  $page_link = $_SERVER['HTTP_HOST'] . request_uri(); 
  $blurb = field_get_items('node', $node, 'field_blurb');

  if ($blurb) {
    $summary = strip_tags(render($content['field_blurb']));
  } else {
    $summary = 'MOJEH - A celebration of fashion for the woman of today.';
  }
  
  $share_this = 'st_title="'. $title .'" st_url="'. $page_link .'" st_summary="'. $summary .'" st_via="MOJEH_Magazine"';

  if(isset($node->field_landing_page_image[$node->language][0]['uri']))
    $lpimageurl = file_create_url($node->field_landing_page_image[$node->language][0]['uri']);

?>

<header class="node-header">
<!-- these fields in the content type need to be rendered between these tags, need help with date -->

  <h1 class="node-title"><?php print $title; ?></h1>
  <h4 class="byline"><?php print date("F jS Y",$node->created); ?></h4>
  <!-- commitment variable needs to be rendered here where it says "30 Photos" -->
  <p class="commitment"><i class="article-commitment"></i> <?php print strip_tags(render($content['field_commitment'])); ?> </p>
  <div id="share-reveal-hide-button">Share<span class="sharing-expand-arrow"></span></div>

       <ul class="share-buttons">
          <li class="share-button share-visible pinterest">
             <a class="share-button-a st_pinterest_custom share-image" href="#" <?php echo $share_this;?>>
                <img src="/sites/all/themes/mojeh/svg/icon-pinterest.svg" alt="Pinterest" class="">
             </a>
          </li>
          <li class="share-button share-visible google">
             <a class="share-button-a st_googleplus_custom share-image" href="#" <?php echo $share_this;?>>
                <img src="/sites/all/themes/mojeh/svg/icon-googleplus.svg" alt="Google Plus" class="">
             </a>
          </li>
          <li class="share-button share-visible share-initial facebook">
			  
             <a class="share-button-a st_facebook_custom share-image" href="#" <?php echo $share_this;?>>
                <img src="/sites/all/themes/mojeh/svg/icon-facebook.svg" alt="" class="">
             </a>
          </li>
          <li class="share-button share-visible share-initial twitter"> 
        <a class="share-button-a st_twitter_custom share-image" href="#" st_via="MOJEH_Magazine">
                <img src="/sites/all/themes/mojeh/svg/icon-twitter.svg" alt="" class="">
             </a>
          </li>
       </ul>





</header>


<section id="editorial-body">
	
   <?php
      $items = mojeh_article_load_layout($node);
      $articleidx = 0;
      foreach($items as $idx=>$i)
      {
         switch($i['type'])
         {
            case 'Text Block':
               ?>
              <div class="editorial-copy">
                <?php print $i['item']['value']; //print_r($idx); ?>
              </div>
               <?php if(($articleidx == 0) && ($idx == 0)): ?>

                  <div class="ad-2col">

					         <!-- Async Tag // Tag for network 1615: IAS - Mojeh  // Website: Mojeh-Actual-Test // Page: Article // Placement: Margin P (6043890) // created at: Feb 28, 2016 8:32:09 AM-->
                    <!--<div id="6043890-<?php echo $idx;?>"><noscript><a href="http://adserver.adtech.de/adlink|3.0|1615.1|6043890|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="http://adserver.adtech.de/adserv|3.0|1615.1|6043890|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>-->

                    <div id="6043890-<?php echo $idx;?>"><noscript><a href="https://secserv.adtech.de/adlink|3.0|1615.1|6043890|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="https://secserv.adtech.de/adserv|3.0|1615.1|6043890|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>

                  </div>
               <?php endif; ?>
               <?php
               break;
            case 'Image':
               switch($i['layout'])
               {
                  case 'fw':
                     ?>
                     <figure class="full-width-image">  					  
                        <?php print theme_image_style(array('style_name' => 'adaptive_image','path' => $i['item']['uri'],'width' => '','height' => '')); ?>
                        <?php if($i['item']['alt']!=""): ?>
                           <figcaption class="credits"><?php print $i['item']['alt']; ?></figcaption>  				  					  
                        <?php endif; ?>
                     </figure>
                     <?php
                     break;
                  case 'fb':
                     ?>
                     <figure class="full-bleed-image">
                        <?php print theme_image_style(array('style_name' => 'adaptive_image','path' => $i['item']['uri'],'width' => '','height' => '')); ?>
                        <?php if($i['item']['alt']!=""): ?>
                           <figcaption class="credits"><?php print $i['item']['alt']; ?></figcaption>  				  					  
                        <?php endif; ?>
                     </figure>
                     <?php
                     break;
                  case '8c':
                     ?>
                     <figure class="standard-image">
                        <?php print theme_image_style(array('style_name' => 'adaptive_image','path' => $i['item']['uri'],'width' => '','height' => '')); ?>
                        <?php if($i['item']['alt']!=""): ?>
                           <figcaption class="credits"><?php print $i['item']['alt']; ?></figcaption>  				  					  
                        <?php endif; ?>
                     </figure>
                     <?php
                     break;
                   case '6c':
                      ?>
                      <figure class="portrait-image">
                         <?php print theme_image_style(array('style_name' => 'adaptive_image','path' => $i['item']['uri'],'width' => '','height' => '')); ?>
                        <?php if($i['item']['alt']!=""): ?>
                           <figcaption class="credits"><?php print $i['item']['alt']; ?></figcaption>  				  					  
                        <?php endif; ?>
                      </figure>
                      <?php
                      break;
               }
               break;
            case 'Slideshow':
               ?>
                 <div class="story-slider-container">
  		            <div class="story-slider js-story-slider">
  		               <div class="slide-carousel">
  				            <ul class="slides" data-sswidth="<?php print $i['item']->field_commitment[$node->language][0]['value']; ?>">
                          <?php
                             foreach($i['item']->field_image[$node->language] as $img)
                             {
                                ?><li class="slide"><?php print theme_image_style(array('style_name' => 'adaptive_image','path' => $img['uri'],'width' => '100px','height' => '','attributes' => array('class' => 'no-layzload'))); ?></li><?php
                             }
                          ?>
  				            </ul>
  		               </div>
                 </div>
                 <?php if(isset($i['item']->field_slideshow_caption[$node->language])): ?>
                    <p class="credits"><?php print $i['item']->field_slideshow_caption[$node->language][0]['safe_value']; ?></p>					  		
                 <?php endif; ?>
                </div> 
               <?php
               break;
            case 'Video':
               $voptions = array(
                  'width' => '',
                  'height' => '',
                  'api' => 0,
                  'autoplay' => 0,
                  'loop' => 0,
                  'portrait' => 0,
                  'title' => '',
                  'byline' => '',
                  'protocol_specify' => '',
               );
               switch($i['layout'])
               {
                  case 'fw':
                     ?>
                     <div class="full-width-video js-fitvid">
                        <?php print theme('media_vimeo_video', array('uri' => $i['item']['uri'], 'options' => $voptions)); ?>
                        <?php if(isset($i['item']['field_caption'][$node->language])): ?>
                           <p class="credits"><?php print $i['item']['field_caption'][$node->language][0]['safe_value']; ?></p>					  		
                        <?php endif; ?>
                     </div>
                     <?php
                     break;
                  case 'fb':
                     ?>
                     <div class="full-bleed-video js-fitvid">
                        <?php print theme('media_vimeo_video', array('uri' => $i['item']['uri'], 'options' => $voptions)); ?>
                        <?php if(isset($i['item']['field_caption'][$node->language])): ?>
                           <p class="credits"><?php print $i['item']['field_caption'][$node->language][0]['safe_value']; ?></p>					  		
                        <?php endif; ?>
                     </div>
                     <?php
                     break;
                  case '8c':
                     ?>
                     <div class="standard-video js-fitvid">
                        <?php print theme('media_vimeo_video', array('uri' => $i['item']['uri'], 'options' => $voptions)); ?>
                     </div>
                     <?php
                     break;
               }
               break;
         }
      }
   ?>
   

<!-- Async Tag // Tag for network 1615: IAS - Mojeh  // Website: Mojeh-Actual-Test // Page: Article // Placement: Footer (6043889) // created at: Feb 28, 2016 9:36:43 AM -->
<!--<div id="6043889"><noscript><a href="http://adserver.adtech.de/adlink|3.0|1615.1|6043889|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="http://adserver.adtech.de/adserv|3.0|1615.1|6043889|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div> local-->

<div id="6043889"><noscript><a href="https://secserv.adtech.de/adlink|3.0|1615.1|6043889|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="https://secserv.adtech.de/adserv|3.0|1615.1|6043889|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>

</section>



