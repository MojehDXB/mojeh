<?php
  global $base_path; 
  global $theme_path; 
  $img_path = $base_path . $theme_path;
  $lpimageurl = '';
  $page_link = $_SERVER['HTTP_HOST'] . request_uri();
   
   if(isset($node->field_landing_page_image[$node->language][0]['uri']))
      $lpimageurl = file_create_url($node->field_landing_page_image[$node->language][0]['uri']);

?>

   <div id="cover" class="js-height" style="background-image: url('<?php print $lpimageurl ?>');">
     <!-- <hgroup class="copy js-vert-center"> -->
  	   <hgroup id="feature-header">
       
         <h1><?php print $title; ?></h1>
         <h4>
            <?php 
            $items = field_get_items('node', $node, 'field_contributor');
            $itemscount = 1;
            foreach($items as $item) {
              $fc = field_collection_field_get_entity($item);
            ?>
            <?php print $fc->field_contributor_title[$node->language][0]['safe_value']; ?> 
            <?php print strtoupper($fc->field_contributor_description[$node->language][0]['safe_value']); print ($itemscount < count($items) ? ";" : ""); ?> 
            <?php
              $itemscount++;
            }
            ?>
         </h4>
  			<h5><?php print date("F jS Y",$node->created); ?></h5>
	   </hgroup>
	   
	   <aside class="feature-utilities">
				<div class="feature-story-commitment">
			<i class="feature-commitment"></i>
			2.5 min read
		</div>
				<i id="cover-scroller"></i>
				<ul class="feature-share-buttons"> 
          
       <li class="share-button share-visible pinterest">
          <a class="share-button-a" href="#">
             <img src="/sites/all/themes/mojeh/svg/icon-pinterest-white.svg" 
                  alt="Pinterest" 
                  st_title="<?php echo $title;?>" 
                  st_url="<?php echo $page_link;?>"
                  st_summary="<?php echo strip_tags(render($content['field_blurb']));  ?>" 
                  class="st_pinterest_custom share-image">
          </a>
       </li>
       <li class="share-button share-visible google googleplus">
          <a class="share-button-a" href="#">
             <img src="/sites/all/themes/mojeh/svg/icon-googleplus-white.svg" 
                  alt="Google Plus" 
                  st_title="<?php echo $title;?>" 
                  st_url="<?php echo $page_link;?>"
                  st_summary="<?php echo strip_tags(render($content['field_blurb']));  ?>" 
                  class="st_plusone_custom share-image">
          </a>
       </li>
       <li class="share-button share-visible share-initial facebook">
          <a class="share-button-a" href="#">
             <img src="/sites/all/themes/mojeh/svg/icon-facebook-white.svg" 
                  alt="" 
                  st_title="<?php echo $title;?>" 
                  st_url="<?php echo $page_link;?>"
                  st_summary="<?php echo strip_tags(render($content['field_blurb']));  ?>" 
                  class="st_facebook_custom share-image">
          </a>
       </li>
       <li class="share-button share-visible share-initial twitter"> 
          <a class="share-button-a" href="#">
             <img src="/sites/all/themes/mojeh/svg/icon-twitter-white.svg" 
                  alt=""  
                  st_via="MOJEH_Magazine"  
                  class="st_twitter_custom share-image">
          </a>
       </li>
		
		</ul><!-- /.feature-social -->  
	   </aside>
	   	   
	   <div class="overlay"></div>
	   
   </div>
   
   <div class="intro-copy">
      <p><?php print strip_tags(render($content['field_intro'])); ?></p>
   </div>
   
   <?php
      $items = mojeh_feature_load_layout($node);

      foreach($items as $i)
      {
         switch($i['type'])
         {
            case 'Slideshow':
               ?>
               <div class="caption-slider">
		            <div class="feature-slider js-story-slider">
		               <div class="slide-carousel">
				            <ul class="slides" data-sswidth="<?php print $i['item']->field_commitment[$node->language][0]['value']; ?>">
                        <?php
                           foreach($i['item']->field_image[$node->language] as $img)
                           {
                              ?><li class="slide"><?php print theme_image_style(array('style_name' => 'adaptive_image','path' => $img['uri'],'width' => '','height' => '','attributes' => array('class' => 'no-layzload'))); ?></li><?php
                           }
                        ?>
				            </ul>
		               </div>
                  </div>
                  <?php if(isset($i['item']->field_slideshow_caption[$node->language])): ?>
                     <p class="credits"><?php print $i['item']->field_slideshow_caption[$node->language][0]['value']; ?></p>					  		
                  <?php endif; ?>
               </div>
               <?php
               break;
            case 'Image':
               switch($i['layout'])
               {
                  case 'fw':
                     ?>
                     <figure class="full-width-image">  					  
                        <?php print theme_image_style(array('style_name' => 'adaptive_image','path' => $i['item']['uri'],'width' => '','height' => '')); ?>
                        <figcaption class="credits"><?php print $i['item']['alt']; ?></figcaption>  				  					  
                     </figure>
                     <?php
                     break;
                  case 'fb':
                     ?>
                     <figure class="full-bleed-image">
                        <?php print theme_image_style(array('style_name' => 'adaptive_image','path' => $i['item']['uri'],'width' => '','height' => '')); ?>
                        <?php if(isset($i['item']['alt'])): ?>
                           <figcaption class="credits"><?php print $i['item']['alt']; ?></figcaption>  				  					  
                        <?php endif; ?>
                     </figure>
                     <?php
                     break;
                     
                   case '10':
                      ?>
                      <figure class="standard-image">
                        <?php print theme_image_style(array('style_name' => 'adaptive_image','path' => $i['item']['uri'],'width' => '','height' => '')); ?>
                        <?php if(isset($i['item']['alt'])): ?>
                           <figcaption class="credits"><?php print $i['item']['alt']; ?></figcaption>  				  					  
                        <?php endif; ?>
                      </figure> 
                      <?php
                      break;   
                     
                  case '8c':
                     ?>
                     <figure class="portrait-image">
                       <?php print theme_image_style(array('style_name' => 'adaptive_image','path' => $i['item']['uri'],'width' => '','height' => '')); ?>
                       <?php if(isset($i['item']['alt'])): ?>
                          <figcaption class="credits"><?php print $i['item']['alt']; ?></figcaption>  				  					  
                       <?php endif; ?>
                     </figure> 
                     <?php
                     break;
               }
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
                           <p class="credits"><?php print $i['item']['field_caption'][$node->language][0]['value']; ?></p>					  		
                        <?php endif; ?>
                     </div>
                     <?php
                     break;
                  case 'fb':
                     ?>
                     <div class="full-bleed-video js-fitvid">
                        <?php print theme('media_vimeo_video', array('uri' => $i['item']['uri'], 'options' => $voptions)); ?>
                        <?php if(isset($i['item']['field_caption'][$node->language])): ?>
                           <p class="credits"><?php print $i['item']['field_caption'][$node->language][0]['value']; ?></p>					  		
                        <?php endif; ?>
                     </div>
                     <?php
                     break;
                  case '10':
                     ?>
                     <div class="standard-video js-fitvid">
                        <?php print theme('media_vimeo_video', array('uri' => $i['item']['uri'], 'options' => $voptions)); ?>
                     </div>
                     <?php
                     break;
                     
                 case '8c':
                    ?>
                    <div class="portrait-video js-fitvid">
                       <?php print theme('media_vimeo_video', array('uri' => $i['item']['uri'], 'options' => $voptions)); ?>
                    </div>
                    <?php
                    break;
               }
               break;
            case 'Pullquote':
               $pq = field_collection_item_load($i['item']['value']);
               $pqimageurl = '';
               if(isset($pq->field_pullquote_image[$node->language][0]['uri']))
                  $pqimageurl = file_create_url($pq->field_pullquote_image[$node->language][0]['uri']);
               ?>
               <div class="pullquote <?php print $pqimageurl == '' ? 'no-image' : '' ?>" style="background-image: url('<?php print $pqimageurl ?>');">  
               		<div class="copy">
		                  <p class="quote"><?php print $pq->field_pullquote[$node->language][0]['value']; ?></p>
		                  <p class="author"><?php print $pq->field_pullquote_quotee[$node->language][0]['value']; ?></p>   
               		</div>
                  <div class="overlay"></div>  
               </div>
               <?php
               break;
            case 'Text Block':
               ?>
               <div class="copy-block">  		  				
                  <?php print $i['item']['value'] ?>
               </div>
               <?php
               break;
         }
      }
   ?>

<!--IFRAME Tag // Tag for network 1615: IAS - Mojeh  // Website: Mojeh.com // Page: Feature // Placement: Feature Bottom (5648316) // created at: Aug 28, 2015 4:46:20 AM   -->
<!-- End of IFRAME Tag -->
