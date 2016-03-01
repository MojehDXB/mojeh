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

<article class="daily">
  
<h1 class="daily-title"><?php echo $title; ?></h1>
<div class="daily-calendar">
  <p class="daily-day"><?php echo date("l", $node->created);?></p>
  <p class="daily-date"><?php echo date("j", $node->created);?></p>
  <hr class="daily-notch">
  <p class="daily-month"><?php echo date("F Y", $node->created);?></p>
</div>

<figure class="daily-node-image">
  <?php echo render($content['field_image']) ?>
  <figcaption class="credits"> <?php echo $node->field_image['und'][0]['alt']; ?></figcaption>
</figure>


<div class="daily-body">
  <?php echo strip_tags(render($content['body']), '<p>, <a>'); ?>
</div>  


	<ul class="share-buttons">
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
       <li class="share-button share-visible google">
          <a class="share-button-a st_googleplus_custom share-image" href="#" <?php echo $share_this;?>>
             <img src="/sites/all/themes/mojeh/svg/icon-googleplus.svg" alt="Google Plus" class="">
          </a>
       </li>
       <li class="share-button share-visible pinterest">
          <a class="share-button-a st_pinterest_custom share-image" href="#" <?php echo $share_this;?>>
             <img src="/sites/all/themes/mojeh/svg/icon-pinterest.svg" alt="Pinterest" class="">
          </a>
       </li>
	</ul>	
  
  <section class="daily-archive">
    <?php echo views_embed_view('landing_pages','the_daily_all'); ?>
  </section>
  
  	
		
</article>


