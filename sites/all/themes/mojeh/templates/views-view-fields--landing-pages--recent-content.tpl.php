<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<?php 

   $ct = trim(strip_tags($fields['type']->content));
   $alignment = trim(strip_tags($fields['field_promoted_image_alignment']->content));

   switch($ct)
   {
      case "the_daily":
         $posted = trim(strip_tags($fields['created']->content));
         if(($fields['counter']->content%2) == 0)
         {
            ?>
            <article class="the-daily">
              
               <div class="daily-image" style="background-image: url('<?php print $fields['field_image_1']->content; ?>')"></div>

               <section class="daily-caption">
                  <h5 class="story-breadcrumb">The Daily</h5>
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
            <?php
         }
         else
         {
            ?>
            <article class="the-daily">                      
               <section class="daily-caption">
                  <h5 class="story-breadcrumb">The Daily</h5>
                  <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                  <h4 class="story-blurb"><?php print $fields['field_blurb']->content; ?></h4>

                  <div class="daily-calendar">
                     <p class="daily-day"><?php print date("l",$posted); ?></p>
                     <p class="daily-date"><?php print date("j",$posted); ?></p>
                     <hr class="daily-notch">
                     <p class="daily-month"><?php print date("F Y",$posted); ?></p>
                  </div>
               </section>
              
               <div class="daily-image" style="background-image: url('<?php print $fields['field_image_1']->content; ?>')"></div>

               
            </article>
            <?php
         }
         break;
      case "article":
         if(isset($fields['field_latest_layout']) && $fields['field_latest_layout']->content == 1)
         {
            ?>
               <article class="bigger-story js-story">
                  <?php print $fields['field_landing_page_image_1']->content; ?> 

                  <div class="story-caption">
                     <h3 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h3>
                     <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                     <div class="story-blurb"><?php print $fields['field_blurb']->content; ?></div>

                     <p class="commitment"><i class="article-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                  </div>
               </article>
            <?php
         }
         else
         {
            //if($alignment == 'r')
            if(($fields['counter']->content%2) == 0)
            {               
               ?>
                  <article class="ls-right js-story">
                     <?php print $fields['field_landing_page_image_1']->content; ?> 

                     <div class="story-caption">
                        <h3 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h3>
                        <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                  <div class="story-blurb"><?php print $fields['field_blurb']->content; ?></div>
                        <p class="commitment"><i class="article-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                     </div>
                  </article>
               <?php
            }
            else
            {
               ?>
                  <article class="ls-left js-story">
                     <?php print $fields['field_landing_page_image_1']->content; ?> 

                     <div class="story-caption">
                        <h3 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h3>
                        <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                  <div class="story-blurb"><?php print $fields['field_blurb']->content; ?></div>
                        <p class="commitment"><i class="article-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                     </div>
                  </article>
               <?php
            }
         }
         break;
      case "feature":
         ?>
            <article class="latest-feature js-feature js-story" style="background-image: url(<?php print $fields['field_landing_page_image']->content; ?>);">
               <div class="story-caption">
                  <h3 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h3>
                  <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                  <div class="story-blurb"><?php print $fields['field_blurb']->content; ?></div>
                  <p class="overlay-story-commitment"><i class="feature-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
               </div>
               <div class="overlay"></div>
            </article>
         <?php
         break;
      case "gallery":
         ?>
            <article class="gallery-story js-story">
               <div class="story-caption">
                  <h3 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h3>
                  <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                  <div class="story-blurb"><?php print $fields['field_blurb']->content; ?></div>
                  <p class="commitment"><i class="gallery-commitment"></i><?php print $fields['field_commitment']->content ?></p>
               </div>            

               <?php print $fields['field_inline_gallery_slideshow']->content; ?>
            </article> 
         <?php
         break;
      case "video":
            //if($alignment == 'r')
            if(($fields['counter']->content%2) == 0)
            {
               ?>
                  <article class="ls-right js-story">
                     <?php print $fields['field_vimeo_video']->content; ?>

                     <div class="story-caption">
                        <h3 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h3>
                        <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                  <div class="story-blurb"><?php print $fields['field_blurb']->content; ?></div>
                        <p class="commitment"><i class="video-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                     </div>
                  </article>
               <?php
            }
            else
            {
               ?>
                  <article class="ls-left js-story">
                     <?php print $fields['field_vimeo_video']->content; ?> 

                     <div class="story-caption">
                        <h3 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h3>
                        <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                  <div class="story-blurb"><?php print $fields['field_blurb']->content; ?></div>
                        <p class="commitment"><i class="video-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                     </div>
                  </article>
               <?php
            }
         break;
   }
?>

