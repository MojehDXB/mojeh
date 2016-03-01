<?php

?>

<?php if ($attachment_before): ?>
   <?php print $attachment_before; ?>
<?php endif; ?>

<?php if ($rows && !drupal_is_front_page()): ?>
   <section class="story-feed wrapper <?php print arg(1) != 'all' ? $classes : ''; ?>">
      <?php print $rows; ?>
   </section>
<?php endif; ?>

