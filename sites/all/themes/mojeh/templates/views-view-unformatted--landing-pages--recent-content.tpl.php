<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if($title): ?>
<?php $title_class = trim(strtolower(str_replace(' ','-',strip_tags($title)))); ?>
<section class="latest-container" id="latest-in-<?php print $title_class; ?>-anchor">
<h3 class="latest-title"><?php print strip_tags($title); ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
    <?php print $row; ?>
<?php endforeach; ?> 
<?php if($title): ?>
</section>
<?php endif; ?>
