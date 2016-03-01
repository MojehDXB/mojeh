<?php if(!empty($rows)): ?>
<section class="daily-ribbon">
   <div class="js-ribbon">
      <div class="slide-carousel">
         <ul class="slides" data-sliderwidth="1700">
            <?php print $rows; ?>
         </ul>
      </div>
   </div>
</section>
<?php endif; ?>
