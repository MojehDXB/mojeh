<section class="<?php echo strtolower($title); ?>-page">

<?php print render($content['body']); ?>

<?php print views_embed_view('issues', 'past_five_issues'); ?>


<?php if ($title == "Magazine") {

  echo '<section class="magazine-contact">
        <h2 class="magazine-title">Contact Information</h2>
        <p>Burj Khalifa, 129rd Floor, Downtown Dubai<br />
        P.O. Box 888777, Dubai, United Arab Emirates<br />
        office@mojeh.com.</p>
        <a class="overlay-button" href="">Full Contact List</a>
      </section>
    ';

}




?>
 
</section>
      
