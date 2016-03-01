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

//We start on the basis there is no promoted graphic/media element
$pmedia = '';

//Depending on which type of node we are showing we do select a 
//proper media element to attach to it
switch($fields['type']->content)
{
   case 'article':
   case 'feature': 
      $pmedia = $fields['field_landing_page_image_1']->content;
      $commitment = $fields['type']->content;
      break;
   case 'gallery':
      $pmedia = $fields['field_inline_gallery_slideshow']->content;
      break;
   case 'video':
      $pmedia = $fields['field_vimeo_video']->content;
      break;
}

?>

<?php
   if(isset($fields['field_promoted_image_alignment']) && isset($fields['field_promoted_image_layout']))
   {
      $alignment = trim(strip_tags($fields['field_promoted_image_alignment']->content),"\t\n\r ");
      $layout = trim(strip_tags($fields['field_promoted_image_layout']->content),"\t\n\r ");
      switch($alignment)
      {
         case "l":
            switch($layout)
            {
               case 4:
                  ?>
                     <figure class="ps-left-4 js-story">      
                        <?php print $pmedia; ?>
      
                        <figcaption class="story-caption">
                           <h5 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h5>
                           <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                           <h4 class="story-blurb"><?php print $fields['field_blurb']->content; ?></h4>
                           <p class="commitment"><i class="<?php echo $commitment; ?>-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                        </figcaption>
                     </figure>
                  <?php
                  break;
               case '5':
                  ?>
                     <figure class="ps-left-5 js-story">      
                        <?php print $pmedia; ?>
      
                        <figcaption class="story-caption">
                           <h5 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h5>
                           <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                           <h4 class="story-blurb"><?php print $fields['field_blurb']->content; ?></h4>
                           <p class="commitment"><i class="<?php echo $commitment; ?>-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                        </figcaption>
                     </figure>
                  <?php         
                  break;
               case 6:
                  ?>
                     <figure class="ps-left-6 js-story">
                        <?php print $pmedia; ?>

                        <figcaption class="story-caption">
                           <h5 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h5>
                           <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                           <h4 class="story-blurb"><?php print $fields['field_blurb']->content; ?></h4>
                           <p class="commitment"><i class="<?php echo $commitment; ?>-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                        </figcaption>
                     </figure>
                  <?php         
                  break;
            } 
            break;
         case 'r':
            switch($layout)
            {
               case 4:
                  ?>
                     <figure class="ps-right-4 js-story">
                        <?php print $pmedia; ?>
                        <figcaption class="story-caption">
                           <h5 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h5>
                           <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                           <h4 class="story-blurb"><?php print $fields['field_blurb']->content; ?></h4>
                           <p class="commitment"><i class="<?php echo $commitment; ?>-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                        </figcaption>
                     </figure>
                  <?php
                  break;
               case 5:
                  ?>
                     <figure class="ps-right-5 js-story">
                        <?php print $pmedia; ?>

                        <figcaption class="story-caption">
                           <h5 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h5>
                           <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                           <h4 class="story-blurb"><?php print $fields['field_blurb']->content; ?></h4>
                           <p class="commitment"><i class="<?php echo $commitment; ?>-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                        </figcaption>
                     </figure>
                  <?php         
                  break;
               case 6:
                  ?>
                     <figure class="ps-right-6 js-story">
                        <?php print $pmedia; ?>

                        <figcaption class="story-caption">
                           <h5 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h5>
                           <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                           <h4 class="story-blurb"><?php print $fields['field_blurb']->content; ?></h4>
                           <p class="commitment"><i class="<?php echo $commitment; ?>-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                        </figcaption>
                     </figure>
                  <?php         
                  break;
            } 
            break;
         case '12':
            ?>
               <figure class="bigger-promoted-story js-story" style="background-image: url(<?php print $fields['field_landing_page_image']->content ?>);">
                 <div class="overlay"></div>
                  <figcaption class="story-caption">
                     <h5 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h5>
                     <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                     <h4 class="story-blurb"><?php print $fields['field_blurb']->content; ?></h4>
                     <p class="overlay-story-commitment"><i class="<?php echo $commitment; ?>-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                  </figcaption>
               </figure>
            <?php
            break;
         case 'fs':
            ?>
               <article class="gallery-promoted js-story">
                  <div class="story-caption">
                     <h3 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h3>
                     <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                     <h4 class="story-blurb"><?php print $fields['field_blurb']->content; ?></h4>
                     <p class="commitment"><i class="gallery-commitment"></i><?php print $fields['field_commitment']->content ?></p>
                  </div>            

                  <?php print $fields['field_inline_gallery_slideshow']->content; ?>
               </article>
            <?php
            break;
         default:
            //This is a feature...      
            ?>
               <figure class="promoted-feature js-feature js-story" style="background-image: url(<?php print $fields['field_landing_page_image']->content ?>);">
                  <figcaption class="story-caption">
                     <h5 class="story-breadcrumb"><?php print $fields['field_sub_category']->content; ?></h5>
                     <h2 class="story-title"><?php print $fields['title']->content; ?></h2>
                     <h4 class="story-blurb"><?php print $fields['field_blurb']->content; ?></h4>
                     <p class="overlay-story-commitment"><i class="<?php echo $commitment; ?>-commitment"></i><?php print strip_tags(render($fields['field_commitment']->content)); ?></p>
                  </figcaption>
                  <div class="overlay"></div>           
               </figure>
            <?php
            break;
      }
   }

?>



