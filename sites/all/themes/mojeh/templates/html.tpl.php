<?php 

// global $base_url;
global $base_path; 
global $theme_path; 
$img_path = $base_path . $theme_path;

	//if (!isset($_SERVER['HTTPS']) || $_SERVER['HTTPS'] !== 'on') {		
	/*
	if (!isset($_SERVER['HTTPS'])) {					
			header("Status: 301 Moved Permanently");
			header("Location: https://".$_SERVER['HTTP_HOST']."/".$_SERVER['REQUEST_URI']);
	} 
	*/

	$trailed = $_SERVER['REQUEST_URI'];
	if (!strpos($trailed,"admin") && !strpos($trailed,"search") && preg_match('/[[:upper:]]/', $trailed)) {
		$trailed = strtolower($trailed);
		header('HTTP/1.1 301 Moved Permanently'); 
		header('Location: https://'. $_SERVER["SERVER_NAME"] . $trailed);
		exit;
	}	
	
if($is_front)
{
   $classes = str_replace(array('page-landing-pages','page-landing-pages-all'),'',$classes);
}

?>
<!DOCTYPE html>
<html<?php print $html_attributes . $rdf_namespaces; ?>>
<head>
  <title><?php if (drupal_is_front_page()){ echo 'Beauty Tips, Fashion Shows & Latest Trends | MOJEH Magazine';} else print $head_title; ?></title>
  <?php	
	if (drupal_is_front_page()){
		echo '<meta name="description" content="The latest news and top trends in the world of fashion. MOJEH is your source for beauty & style, fashion, culture, and society globally & in the Middle East."/>';
	}	
  ?>
  <?php print $head; ?>
  <?php print $styles; ?>
  
  
  <style type="text/css">
  @media print {
    header nav, footer, #drawer {
    display: none;
    }

    .slides .slide {
      opacity: 1!important;
    }
  }
  </style>
  <!-- Adtech DAC Library -->
<script type="text/javascript" src="https://aka-cdn.adtech.de/dt/common/DAC.js"></script>
<!-- Adtech DAC Library -->

  <script>document.cookie='resolution='+Math.max(screen.width,screen.height)+'; path=/';</script>
  <?php print $scripts; ?>
  
  <link rel="alternate" type="application/rss+xml" href="/rss.xml" title="MOJEH Magazine RSS">  
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">
  
  <link rel="icon" type="image/png" href="/misc/favicon.png" />


  
</head>
<body id="body" class="<?php print $classes; ?> drawer-closed" <?php print $attributes; ?>>

	<!-- BEGIN EFFECTIVE MEASURE CODE -->
	<script type="text/javascript">
	        (function() {
	          var em = document.createElement('script'); em.type = 'text/javascript'; em.async = true;
	          em.src = ('https:' == document.location.protocol ? 'https://c-ssl' : 'http://c-cdn') + '.effectivemeasure.net/em.js';
	          var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(em, s);
	        })();
	</script>
	<noscript>
	        <img src="//c.effectivemeasure.net/em_image" alt="" style="position:absolute; left:-5px;" />
	</noscript>
	<!--END EFFECTIVE MEASURE CODE -->

  <div id="skip">
    <a href="#main-menu"><?php print t('Jump to Navigation'); ?></a>
  </div>
  
  
  
  <!--[if lt IE 10]>
          <aside class="browsehappy"><div>
        <strong>A note from MOJEH</strong>
        <p>MOJEH online is designed to be every bit as luxurious as one of our print magazines. Please <a href="http://browsehappy.com/">upgrade your browser</a> to enjoy the true MOJEH experience.</p></div></aside>
 <![endif]-->
  <?php print $page_top; ?>
  
  <?php print $page; ?>
  
  
  <?php print $page_bottom; ?>
 <script type="text/javascript" src="//use.typekit.net/lwb4ewj.js"></script>
  
  <script type="text/javascript">

    (function(d) {
      var config = {
        kitId: 'lwb4ewj',
        scriptTimeout: 3000
      },
      h=d.documentElement,t=setTimeout(function(){h.className=h.className.replace(/\bwf-loading\b/g,"")+" wf-inactive";},config.scriptTimeout),tk=d.createElement("script"),f=false,s=d.getElementsByTagName("script")[0],a;h.className+=" wf-loading";tk.src='//use.typekit.net/'+config.kitId+'.js';tk.async=true;tk.onload=tk.onreadystatechange=function(){a=this.readyState;if(f||a&&a!="complete"&&a!="loaded")return;f=true;clearTimeout(t);try{Typekit.load(config)}catch(e){}};s.parentNode.insertBefore(tk,s)
    })(document);
  </script> 
  
  
   <script type="text/javascript">try{Typekit.load();}catch(e){}</script>
  <link rel="stylesheet" type="text/css" href="//cloud.typography.com/7022432/783424/css/fonts.css" />
  <script type="text/javascript">
      var __st_loadLate=true;
  </script>

  <script type="text/javascript" src="https://ws.sharethis.com/button/buttons.js"></script>
<script type="text/javascript">
      stLight.options({
        publisher: "5212abe0-355e-41d9-8a99-efa52017e7ad",
        doNotHash: true, doNotCopy: true, hashAddressBar: false });
    </script>
  
  <script>
    (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
    (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
    m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
    })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

    ga('create', 'UA-28132109-1', 'auto');
    ga('send', 'pageview');

  </script>
  <script>
  //ADTECH.config.page = { protocol: 'https', server: 'secserv.adtech.de', network: '1615.1', pageid: 831360, params: { loc: '100' }};
 
  //alert('config');
  ADTECH.config.page = {protocol: 'http',server: "adserver.adtech.de",network: "1615.1",pageid: "831361",params: { loc: '100' }};
  ADTECH.config.placements[6043933] = { sizeid: 0, params: { alias: '', target: '_blank' }};
  ADTECH.enqueueAd(6043933); //Drawer
  ADTECH.config.placements[6043929] = { sizeid: 0, params: { alias: '', target: '_blank' }};
  ADTECH.enqueueAd(6043929); //Ribbon
  ADTECH.config.placements[6043930] = { sizeid: 0, params: { alias: '', target: '_blank' }};
  ADTECH.enqueueAd(6043930); //Premium
  ADTECH.config.placements[6043934] = { sizeid: 0, params: { alias: '', target: '_blank' }};
  ADTECH.enqueueAd(6043934); //slideshow
  ADTECH.config.placements[6043928] = { sizeid: 0, params: { alias: '', target: '_blank' }};
  ADTECH.enqueueAd(6043928); //Fullbleed
  ADTECH.config.placements[6043931] = { sizeid: 0, params: { alias: '', target: '_blank' }};
  ADTECH.enqueueAd(6043931); //Non custom format
  

  var footerCount = 1;
  for (var i = 0; i <= footerCount; i++) {
    //ADTECH.config.placements[6043890+"-"+i] = { sizeid: 0, params: { alias: '', target: '_blank' }};
    //ADTECH.enqueueAd(6043890); 
    ADTECH.config.placements[6043890] = { sizeid: 0, adContainerId: "6043890-"+i, params: { alias: '', target: '_blank' }};
    ADTECH.loadAd(6043890); //Margin P
  }

  ADTECH.config.placements[6043889] = { sizeid: 0, params: { alias: '', target: '_blank' }};
  ADTECH.enqueueAd(6043889); //Article footer

  //ADTECH.config.placements[6043932] = { sizeid: 0, params: { alias: '', target: '_blank' }};
  //ADTECH.enqueueAd(6043932); //Sliding window
  
  ADTECH.config.placements[6043932] = { sizeid: 0, adContainerId: "6043932-8", params: { alias: '', target: '_blank' }};
  ADTECH.loadAd(6043932); //sliding window 1
  ADTECH.config.placements[6043932] = { sizeid: 0, adContainerId: "6043932-9", params: { alias: '', target: '_blank' }};
  ADTECH.loadAd(6043932); //sliding window 2
  ADTECH.config.placements[6043932] = { sizeid: 0, adContainerId: "6043932-10", params: { alias: '', target: '_blank' }};
  ADTECH.loadAd(6043932); //sliding window 3
  ADTECH.config.placements[6043932] = { sizeid: 0, adContainerId: "6043932-11", params: { alias: '', target: '_blank' }};
  ADTECH.loadAd(6043932); //sliding window 4
  ADTECH.config.placements[6043932] = { sizeid: 0, adContainerId: "6043932-12", params: { alias: '', target: '_blank' }};
  ADTECH.loadAd(6043932); //sliding window 4
  
  ADTECH.executeQueue();
</script>
</body>
</html>
