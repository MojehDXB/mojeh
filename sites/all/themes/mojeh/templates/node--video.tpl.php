<?php  
$page_link = $_SERVER['HTTP_HOST'] . request_uri(); 
$blurb = field_get_items('node', $node, 'field_blurb');

if ($blurb) {
  $summary = strip_tags(render($content['field_blurb']));
} else {
  $summary = 'MOJEH - A celebration of fashion for the woman of today.';
}

$share_this = 'st_title="'. $title .'" st_url="'. $page_link .'" st_summary="'. $summary .'" st_via="MOJEH_Magazine"';

 ?>

 <header class="node-header">
 <!-- these fields in the content type need to be rendered between these tags, need help with date -->
         <h1 class="node-title"><?php echo $title; ?></h1>
        <h4 class="byline"><?php print date("F jS Y",$node->created); ?></h4>
         <!-- commitment variable needs to be rendered here where it says "30 Photos" -->
	     <!-- Ilia removing this HR to do the line through border-bottom -->    
		 <!-- <hr> -->
         <p class="overlay-commitment"><i class="video-commitment"></i> <?php print strip_tags(render($content['field_commitment'])); ?></p>
		 <div id="share-reveal-hide-button">Share<span class="sharing-expand-arrow"></span></div>
     <ul class="share-buttons">
        <li class="share-button share-visible pinterest">
           <a class="share-button-a st_pinterest_custom share-image" href="#" <?php echo $share_this;?>>
              <img src="/sites/all/themes/mojeh/svg/icon-pinterest-white.svg" alt="Pinterest" class="">
           </a>
        </li>
        <li class="share-button share-visible google">
           <a class="share-button-a st_googleplus_custom share-image" href="#" <?php echo $share_this;?>>
              <img src="/sites/all/themes/mojeh/svg/icon-googleplus-white.svg" alt="Google Plus" class="">
           </a>
        </li>
        <li class="share-button share-visible share-initial facebook">
           <a class="share-button-a st_facebook_custom share-image" href="#" <?php echo $share_this;?>>
              <img src="/sites/all/themes/mojeh/svg/icon-facebook-white.svg" alt="" class="">
           </a>
        </li>
        <li class="share-button share-visible share-initial twitter"> 
           <a class="share-button-a st_twitter_custom share-image" href="#" st_via="MOJEH_Magazine">
              <img src="/sites/all/themes/mojeh/svg/icon-twitter-white.svg" alt="" class="">
           </a>
        </li>
     </ul>
      </header>

<section id="editorial-body">
  

<div class="video-piece js-fitvid">
<?php print render($content['field_vimeo_video']); ?>
  <div id="video-overlay"></div>
  
</div>

<div class="editorial-copy">
  <?php print render($content['field_description']); ?>
</div>

<dl class="editorial-info">

 <?php 
   $items = field_get_items('node', $node, 'field_contributor');
   foreach($items as $item) {
      $fc = field_collection_field_get_entity($item);
      ?>
         <dt><?php print $fc->field_contributor_title[$node->language][0]['safe_value']; ?>:</dt>
         <dd><?php print $fc->field_contributor_description[$node->language][0]['safe_value']; ?></dd>
      <?php
   }
 ?>
</dl>

</section>



