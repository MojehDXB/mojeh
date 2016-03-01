<?php $posted = trim(strip_tags($fields['created']->content)); ?>
<li class="slide">
   <figure class="ribbon-story">
      <?php print $fields['field_image']->content; ?>
      <figcaption class="ribbon-story-caption">
         <h5 class="ribbon-breadcrumb"><?php print date("M jS",$posted); ?></h5>
      </figcaption>
   </figure>
</li>
