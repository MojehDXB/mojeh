<li class="slide slide-hover">

   <figure class="ribbon-story">
      <a href="<?php print $fields['path']->content; ?>">
	  <?php 
         print theme_image_style(array(
            'style_name' => 'homepage_ribbon',
            'path' => $fields['field_landing_page_image']->content,
            'width' => 150,
            'height' => 220,
            'attributes' => array('class' => 'no-lazyload')
         )); 
      ?>
	  </a>
      <figcaption class="ribbon-story-caption">
         <a href="<?php print $fields['path']->content; ?>"><p class="overlay-commitment"><i class="<?php print strtolower ($fields['type']->content); ?>-commitment"></i></p></a>
		 <h5 class="ribbon-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h5>
         <h2 class="ribbon-story-title"><?php print $fields['title']->content; ?></h2>
         
      </figcaption>
   </figure>
</li>

