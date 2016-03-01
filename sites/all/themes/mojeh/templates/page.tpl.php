<?php 
  global $base_path; 
  global $theme_path; 
  $img_path = $base_path . $theme_path;

  /*
	//if (!isset($_SERVER['HTTPS']) || $_SERVER['HTTPS'] !== 'on') {		
	if (!isset($_SERVER['HTTPS'])) {		
			
			header("Status: 301 Moved Permanently");
			header("https://".$_SERVER['HTTP_HOST']."/".$_SERVER['REQUEST_URI']);
			/*header(sprintf(
				'Location: https://%s%s',
				$_SERVER['HTTP_HOST'],
				$_SERVER['REQUEST_URI']
			));
			exit();
			*/	
			//echo '...<!-- Location: https://'.$_SERVER['HTTP_HOST'].','.$_SERVER['REQUEST_URI'].' -->...';
			//echo 'https://'.$_SERVER['HTTP_HOST'].'/'.$_SERVER['REQUEST_URI'].'...';
			//header("Location:./content/index.html?". $_SERVER['QUERY_STRING']);
//	} else echo '- -';
  
?>
<div id="scroller">
  


  <header id="mobile-header">
    <div class="wrapper">
      <span class="header-logo"><a href="/">Mojeh</a></span>
      <a class="drawer-toggle" id="js-mobile-drawer-toggle">Toggle Drawer</a>
    </div>
  </header>
  <aside id="drawer">
    <section class="drawer-container" id="js-drawer-scroller">
      <header class="drawer-header">
        <a class="drawer-title" href="/">Mojeh</a>
        <a class="drawer-toggle" id="js-drawer-toggle">Toggle Drawer</a>
      </header>  
      <div class="drawer-contents">
      
        <form id="search-form" class="drawer-search">
          <input class="drawer-search-field" type="text" name="search" value="" id="search" placeholder="Search" required>
          <button type="submit" class="drawer-search-submit"></button>
        </form>
        

        <?php
           $block = module_invoke('mojeh_main_menu', 'block_view', 'mojeh_main_menu');
           print $block['content'];
        ?>


        <nav id="type-filter">
          <ul>
            <li class="tf-features"><a href="/content-by-type/feature">Features</a></li>
            <li class="tf-videos"><a href="/content-by-type/video">Videos</a></li>
            <li class="tf-galleries"><a href="/content-by-type/gallery">Galleries</a></li>
          </ul>
        </nav>


        <ul class="menu-current-issues">
          <li class="current-issue">
            <?php print views_embed_view('issues', 'latest_issue','women'); ?>
          </li>
        </ul>
		
        <ul class="newsletters">
          <li class="newsletter-item">
			   <h3 class="newsletters-description">Exclusive updates, Daily</h3>
			   <p class="newsletters-title">The Daily</p>
			   <a class="overlay-button" href="http://eepurl.com/7z7gD" title="Subscribe to The Daily email from Mojeh.">Subscribe</a>
          </li>
          <li class="newsletter-item">
			   <h3 class="newsletters-description">A monthly newsletter</h3>
			   <p class="newsletters-title">Newsletter</p>
			   <a class="overlay-button" href="http://eepurl.com/5jrOn" title="Subscribe to the monthly Newsletter from Mojeh.">Subscribe</a>
          </li>
        </ul>
    
    
        <section class="drawer-social">
          <h3 class="social-media-title">Connect with MOJEH</h3>
          <ul class="social-medias">
            <li class="facebook">
              <a href="https://www.facebook.com/mojeh.magazine"><img src="<?php echo $img_path . '/svg/icon-facebook-white.svg'; ?>" alt="Facebook"></a>
            </li>
            <li class="twitter">
              <a href="https://twitter.com/MOJEH_Magazine"><img src="<?php echo $img_path . '/svg/icon-twitter-white.svg'; ?>" alt="Twitter"></a>
            </li>
            <li class="instagram">
              <a href="http://instagram.com/mojeh_magazine"> <img src="<?php echo $img_path . '/svg/icon-instagram-white.svg'; ?>" alt="Instagram"></a>
            </li>
            <!--li class="vimeo">
              <a href="#"><img src="<?php echo $img_path .'/svg/icon-vimeo-white.svg'; ?>" alt="Vimeo"></a>
            </li-->
          </ul>
        </section>


        <div class="drawer-ad">
			
        <!-- Async Tag // Tag for network 1615: IAS - Mojeh  // Website: Mojeh-Actual-Test // Page: Home // Placement: Drawer (6043933) // created at: Feb 19, 2016 7:37:25 AM -->
        <!--<div id="6043933"><noscript><a href="http://adserver.adtech.de/adlink|3.0|1615.1|6043933|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="http://adserver.adtech.de/adserv|3.0|1615.1|6043933|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>-->
 
        <div id="6043933"><noscript><a href="https://secserv.adtech.de/adlink|3.0|1615.1|6043933|0|0|ADTECH;loc=300;alias=" target="_blank"><img src="https://secserv.adtech.de/adserv|3.0|1615.1|6043933|0|0|ADTECH;loc=300;alias=" border="0" width="0" height="0"></a></noscript></div>

     	  </div>


      <nav id="other-links">
        <ul>
          <li><a href="/magazine/about">About</a></li>
          <li><a href="/magazine/contacts">Contacts</a></li>
          <li><a href="/magazine/faq">FAQ</a></li>
          <li><a href="/magazine/media">Media Kit</a></li>
		  <li><a href="/magazine/terms">Terms</a></li>
        </ul>
      </nav>
	  <?php
		//Added to have static H1 for home page only
		if(drupal_is_front_page()) { ?>
		  <center><h1 style="color:#666666; font-size:11px; margin-bottom:15px;">MOJEH Fashion Magazine</h1></center>
		<?php } ?>
      </div>
    </section>
    <div id="drawer-breadcrumb"><?php echo $mojeh_category . $mojeh_sub_category; ?></div>
  </aside>
  
  <div id="site-wrapper" class="<?php print $classes; ?>" <?php print $attributes; ?>>
<div ABBR>   




        <?php
          
        if ($node->type == "the_daily") {
          $block = module_invoke('mojeh_main_menu', 'block_view', 'mojeh_daily_header');
          print $block['content'];
          
        } else if ($node->type == "page"){
          $block = module_invoke('mojeh_main_menu', 'block_view', 'mojeh_about_header');
          print $block['content'];          
        } else {
           $block = module_invoke('mojeh_main_menu', 'block_view', 'mojeh_header');
           print $block['content'];
        }   
        ?>
      
          
        <section id="main">
        
        
     
          <?php 
  		      if (drupal_is_front_page()){
  			    echo views_embed_view('homepage_ribbon','homepage_ribbon_block');}?>
        

          <?php if ($tabs = render($tabs)): ?><div class="tabs"><?php print $tabs; ?></div><?php endif; ?>
          
          <?php print render($page['content']); ?>
      
     <?php
       if(drupal_is_front_page()) {
         $block = module_invoke('mojeh_main_menu', 'block_view', 'mojeh_footer');
         print $block['content'];
       }
     ?>

        </section> <!-- main -->



      
  </div>
  

  
</div>



</div>

  <?php if(drupal_is_front_page()): ?>
       <ul id="latest-scroller">
         <li>Latest In:</li>
         <?php 
              $vocabcats = taxonomy_vocabulary_machine_name_load('category');
              $catstree = taxonomy_get_tree($vocabcats->vid);

              foreach($catstree as $catitem)
              {
                 ?><li><a href="#latest-in-<?php print str_replace(" ","-",strtolower($catitem->name)); ?>"><?php print $catitem->name; ?></a></li><?php
              }
         ?>
       </ul>
  <?php endif; ?>
