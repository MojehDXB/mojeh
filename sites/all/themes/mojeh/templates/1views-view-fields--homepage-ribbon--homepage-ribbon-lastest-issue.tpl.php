<?php

$issue_title = strip_tags($fields['title']->content);
?>
<li id="slide-subscribe" class="slide">
    <aside id="slide-subscribe-men" class="subscribe-active ribbon-subscribe-publication">
			  <img src="<?php print $fields['field_cover_image_1']->content; ?>" class="slide-subscribe-image">
			  <h5 class="ribbon-breadcrumb ribbon-subscribe-breadcrumb">Men's Issue N&deg; <?php print $fields['field_issue']->content; ?></h5>
			  <h2 class="ribbon-story-title ribbon-subscribe-title">
           <a href="/subscribe" alt="Subscribe to MOJEH Magazine" title="Subscribe to MOJEH Magazine"><?php echo $issue_title ?></a>
        </h2>
			  <section id="subscription-cost">
				  <figure id="number-of-issues">2 Issues</figure>
			  	  <figure id="yearly-price">$80.00<span id="little-label">/ year</span></figure></section>
            <?php echo l('Subscribe', 'subscribe', array(
                      'attributes' => array(
                        'class' => array(
                          'button-border-grey',
                          'slide-subscribe-button',
                          'stripe_button'
                        ),
                        'data-amount' => '8000',
                        'data-name' => 'Mojeh Magazine',
                        'data-description' => 'Men',
						'data-plan' => 'men1yr80',  
                        'title' => 'Subscribe to MOJEH Magazine', 
                        'alt' => 'Subscribe to MOJEH Magazine'
                      )
                    )
                  );?>
 	</aside>
	<aside id="slide-subscribe-women" class="ribbon-subscribe-publication">
		  <img src="<?php print $fields['field_cover_image_1']->content; ?>" class="slide-subscribe-image">
		  <h5 class="ribbon-breadcrumb ribbon-subscribe-breadcrumb">Women's Issue N&deg; <?php print $fields['field_issue']->content; ?></h5>
		  <h2 class="ribbon-story-title ribbon-subscribe-title">
           <a href="/subscribe" alt="Subscribe to MOJEH Magazine" title="Subscribe to MOJEH Magazine"><?php echo $issue_title ?></a>
		  </h2>
		  <section id="subscription-cost">
			  <figure id="number-of-issues">10 Issues</figure>
		  	  <figure id="yearly-price">$450.00<span id="little-label">/ year</span></figure></section>
            <?php echo l('Subscribe', 'subscribe', array(
                      'attributes' => array(
                        'class' => array(
                          'button-border-grey',
                          'slide-subscribe-button',
                          'stripe_button'
                        ),
                        'data-amount' => '45000',
                        'data-name' => 'Mojeh Magazine',
                        'data-description' => 'Women',  
						'data-plan' => 'women1yr450',  
                        'title' => 'Subscribe to MOJEH Magazine', 
                        'alt' => 'Subscribe to MOJEH Magazine'
                      )
                    )
                  );?>
	</aside>
</li>
