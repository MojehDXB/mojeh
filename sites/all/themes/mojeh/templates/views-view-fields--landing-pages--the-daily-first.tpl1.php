<?php $posted = trim(strip_tags($fields['created']->content)); ?>
<article class="the-daily">
   <a href="<?php print $fields['path']->content; ?>"><div class="daily-image" style="background-image: url('<?php print $fields['field_image_1']->content; ?>')"></div></a>

   <section class="daily-caption">
   <h5 class="story-breadcrumb"><?php print l('The Daily','landing-pages/Culture/The Daily'); ?></h5>
      <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
      <h4 class="story-blurb"><?php print $fields['field_blurb']->content; ?></h4>

      <div class="daily-calendar">
         <p class="daily-day"><?php print date("l",$posted); ?></p>
         <p class="daily-date"><?php print date("j",$posted); ?></p>
         <hr class="daily-notch">
         <p class="daily-month"><?php print date("F Y",$posted); ?></p>
      </div>
   </section>
</article>

