/*jslint browser: true, sloppy: true, white: true */
/*global jQuery*/
var $ = jQuery.noConflict();

var $body = $('body'),
    $mobileHeader = $('#mobile-header'),
    $drawer = $('#drawer'),
    $siteWrapper = $('#site-wrapper'),
    $main = $('#main'),
	$header = $('#header'),
    $scroller;
        
        
var drawerPanelWidth,
    fromFeed = 0,
    $currentSlider,
    didScroll = false,
    shareFired,
    loadDirection,
    breadcrumbShowing;
        
if ($(window).width() < 600) {
  drawerPanelWidth = 0;
} else if (($(window).width() >= 600) && (($(window).width() < 1024))) {
  drawerPanelWidth = 45;
} else {
  drawerPanelWidth = 60;
}




// Variables for slider setup
var slidesWidth = 0,
    sliderDrag = 0,
    sliderOffset,
    mainOffset = 0;

// Variables for mobile menu
var lastPosition, // previous scroll position
    littleBitOfGive = 6, // point after which we hide the menu
    menuHeight = 50, // height of the menu
    detachPoint = 400; // after you've scrolled past this, the menu gets detached

// Variables for drawer breadcrumb
var littleMouse;


// Stops events from firing multiple times during resize
var fireLater = (function () {
  var timers = {};
  return function (callback, ms, uniqueId) {
    if (!uniqueId) {
      uniqueId = "Give this callback a unique name!";
    }
    if (timers[uniqueId]) {
      clearTimeout(timers[uniqueId]);
    }
    timers[uniqueId] = setTimeout(callback, ms);
  };
})();














  
  








// // Used to track the enabling of hover effects
// var enableTimer = 0;
//
// /*
//  * Listen for a scroll and use that to remove
//  * the possibility of hover effects
//  */
// document.getElementById('site-wrapper').addEventListener('scroll', function() {
//   clearTimeout(enableTimer);
//   removeHoverClass();
//   console.log('scroll')
//   // enable after 1 second, choose your own value here!
//   enableTimer = setTimeout(addHoverClass, 1000);
// }, false);
//
// /**
//  * Removes the hover class from the body. Hover styles
//  * are reliant on this class being present
//  */
// function removeHoverClass() {
//   document.body.classList.remove('hover');
// }
//
// /**
//  * Adds the hover class to the body. Hover styles
//  * are reliant on this class being present
//  */
// function addHoverClass() {
//   document.body.classList.add('hover');
// }
//






   
//
//
//
//
//
//
//
// /////////////////////////////////////////////////////
// //!Sharing Stuff
// /////////////////////////////////////////////////////
function toggleVisiblityOfShareLinks() {
	$(body).toggleClass('sharing-open');
	return false;
}





/////////////////////////////////////////////////////
//!Homepage Stuff
/////////////////////////////////////////////////////
// Fades between men and women's magazine subscription CTAs
// in the header ribbon
function ribbonSubscribeFade() {
	var $active = $('.subscribe-active'),
      $next = ($active.next().length > 0) ? $active.next() : $('#slide-subscribe .ribbon-subscribe-publication:first');
  //reset the z-index and unhide the image
	$active.css('z-index',1).fadeIn().removeClass('subscribe-active');
  //make the next image the top one
  $next.css('z-index',3).fadeOut().addClass('subscribe-active');
}


// Makes sure that Daily images are the same height as the captions, within the feed
function theDaily(){
  if ($(window).width() >= 1024) {
    
    $('.the-daily').each(function(){
      var $dailyImage = $(this).find('.daily-image'),
          $dailyHeight = $(this).outerHeight();

      if ($dailyImage.height() < $dailyHeight) {
        $dailyImage.css('height', $dailyHeight + 28);
      
      }
    });
  }
}

// Removes animation after it has completed since it breaks background-attachement: fixed on chrome.
function featureBackgroundFixed(){
	$("#main").bind("transitionend webkittransitionend otransitionend MStransitionend", function(){ 
		$("#main, #nav, #feature-header, #footer, #lander-header, .translating-out-landing-page-to-homepage h1, .latest-title, .daily-ribbon, .center, .translate-out, .footer-out, .daily-title, .daily-calendar, .next-up, .category-title, .sub-categories, .daily-node-image, #cover-scroller, .feature-story-commitment, .feature-share-buttons, .feature-from-feed-translate-in, #feature-header, #cover-scroller, .footer-bottom, #cover").css({"-webkit-animation" :"none", "-moz-animation": "none", "-o-animation": "none", "animation": "none", "-webkit-transition" :"none", "-moz-transition": "none", "-o-transition": "none", "transition": "none", "opacity": "1"}); // Removes transition and animation
		$(".slide-slide").css({"-webkit-transition" :"none", "-moz-transition": "none", "-o-transition": "none", "transition": "none", "opacity": "1"}); // Removes transition only
	});
}



/////////////////////////////////////////////////////
//!Lazy Load all front page images
/////////////////////////////////////////////////////

$('#main img').addClass('lazyload');


/////////////////////////////////////////////////////
//!Feed Stuff
/////////////////////////////////////////////////////
// Set up the waypoints in the Latest In section
function latestWaypoints(){
  var $scroller = $('#latest-scroller');
  console.log('loaded')
 
  $('.latest-container').waypoint(function(direction) {
    if (direction === 'up') {
      console.log('up')
      var $id = this.id.replace('-anchor', ''),
          $anchors = $('a[href="#' + $id + '"]');    
      $scroller.find('a').removeClass('current');
      $anchors.addClass('current', direction === 'up');
    }
  }, {  
    context: '#site-wrapper',
    offset: function() {
      return $.waypoints('viewportHeight') / 2 - $(this).outerHeight();
    }
  });


  $('.latest-container').waypoint(function(direction) {
    if (direction === 'down') {
      console.log('down')
     
      var $id = this.id.replace('-anchor', ''),
          $anchors = $('a[href="#' + $id + '"]');
      $scroller.find('a').removeClass('current');
      $anchors.toggleClass('current', direction === 'down');
    }
  }, {
    context: '#site-wrapper',
    offset: '50%'
  });
} 

// Shows the scroller once the reader has scroller far enough down the page
function scrollerVisible() { 

 if($('.latest').offset().top <= 0){
    $('#latest-scroller').addClass('scroller-visible');
  } else {
    $('#latest-scroller').removeClass('scroller-visible');
  }
}

// Pretty self explanatory... this is what happens when you click a latest-scroller link
$('body').on('click', '#latest-scroller a' ,function(){  
  var $anchor = $('#' + $(this).attr('href').substr(1) +'-anchor');
  $siteWrapper.animate({
    scrollTop: $anchor.offset().top + $siteWrapper.scrollTop()
    }, 500);
});


//Search form submit
$('#search-form').on('submit',function(e){
   e.preventDefault();
   self.location = '/search/' + encodeURI($('#search').val());
   return false;
});


//Promoted Story Hover
$siteWrapper.on({
  mouseenter: function(){
    $(this).prev('.overlay').addClass('hover');
  },
  mouseleave: function(){
    $(this).prev('.overlay').removeClass('hover');
  }
}, ".bigger-promoted-story .story-caption"); 
    
    


/////////////////////////////////////////////////////
// Menu Stuff
/////////////////////////////////////////////////////
// Fires events related to opening/closing the drawer 
function drawerActions() {
  var drawerTop = 0;
  // toggle is clicked  
    
    $('#drawer, #js-drawer-toggle, #js-mobile-drawer-toggle, #scroller').click(function(e) {
      // Act on the event	
  	e.stopPropagation();
    $scroller = $drawer.find('#js-drawer-scroller');

  	// if drawer is closed at time of toggle click
  	if ($body.hasClass('drawer-closed')){
  		// if we're not clicking on main content
  		if ($(this).attr('id')!=='scroller'){

  			// toggle the open/closed indicator on the body tag
  			$body.toggleClass('drawer-closed drawer-open');
							
				//  apply the overscroll scrollbar
				if ($(window).width() >= 600) {
					$scroller.overscroll({
						direction: 'vertical',
					});
          $scroller.scrollTop(0)
				} 
        
        if (drawerTop === 0) {
          drawerTop = 1;
        }
  		}
  	}

	
  	//else, if drawer is open at time of toggle click
  	else {
			// closing the drawer is only possible by clicking the toggle or the main content: 
			// translate the drawer to its pre-translated position
			if ($(this).attr('id')!=='drawer') { 
				
				//if on smallest breakpoint, add closing class to drawer
				if ($(window).width() < 600) {
					$drawer.addClass('closing-menu');
					// $('#site-wrapper').addClass('blurred');
					setTimeout(function(){
						$drawer.removeClass('closing-menu');  
					}, 500);	
				}
	
				// toggle the open/closed indicator on the body tag
				$("body").toggleClass('drawer-closed drawer-open');
				$siteWrapper.removeClass('blurred');
        setTimeout(function(){
  				$scroller.removeOverscroll()
        },300)
  		}
  	}
  });	
}












// Listener for Sub Menu Actions

// takes a main menu item as argument and returns a reference to the next neighbour, or #type-filter, if the argument is the last item in the menu
function nextMainMenuNeighbour(main_menu_menu_item){
	var menuItemTitle = main_menu_menu_item.find('.main-menu-link').html();
   
	if (menuItemTitle != lastMenuItemTitle) {
		return main_menu_menu_item.next('.main-menu-item');
	} 
	else {
		return $('#type-filter');
	}
}




// Listener for Sub Menu Actions

var $submenu, 
    $category, 
    $categoryTitle,
    $nextCategory, 
    subMenuHeight, 
    lastMenuItemTitle = $('#main-menu .main-menu-link').last().html();

$drawer.on('click', '.expand-link' ,function(e){

	e.stopPropagation();

	//get the submenu object
	$submenu = $(this).next('.sub-menu');

	//get its height
	subMenuHeight = $submenu.height();

	//get the parent category object and its title
	$category = $(this).parent();
	$categoryTitle = $category.find('.main-menu-link').html();

	//get the next category object
	$nextCategory =  nextMainMenuNeighbour($category);


	// reveal the submenu
	$submenu.toggleClass('open');

	//move the rest of the menu down/up to reveal/hide submenu
	if ($submenu.hasClass('open')){	

			$nextCategory.css('margin-top',subMenuHeight+42+'px');
	}
	else {
			$nextCategory.css('margin-top',0+'px');
	}

	//toggle the arrow
	$('.expand-link-arrow',this).toggleClass('expanded');
});


// Listener for clicking on Share Affordances expansion button


$siteWrapper.on('click', '#share-reveal-hide-button' ,function(e){
	toggleVisiblityOfShareLinks();
});



//Clicking a menu item

$drawer.on('click', 'nav a' ,function(){
	//slide the menu to base position	
	//if on smallest breakpoint, add closing class to drawer (then remove it after 0.5s)
	if ($(window).width() < 600) {
		$drawer.addClass('closing-menu');
		setTimeout(function(){
			$drawer.removeClass('closing-menu');  
		}, 500);	
	}
		
		$("body").toggleClass('drawer-closed drawer-open');

		$siteWrapper.attr('class','left-translate-out');
		loadDirection = 'right';
});
// End of: Listener for Sub Menu Actions


// Sets the location of the breadcrumb,
// since it's length will change where it is positioned...stupid CSS transforms.
function breadcrumb() {
    var $breadCrumb = $('#drawer-breadcrumb');
  littleMouse = $(window).width() < 1024 ? -$('#drawer-breadcrumb').width() + 22 : -$breadCrumb.width() + 30;


  if (!$body.hasClass('page-node')) {
    if (Math.abs($header.offset().top) >= $header.height()) {
      if (breadcrumbShowing == 0) {
        $breadCrumb.addClass('showing').css('right', littleMouse +'px');
        breadcrumbShowing = 1;
      }
    } else {
      $breadCrumb.removeClass('showing');
      breadcrumbShowing = 0;
    }
  } else {
    $breadCrumb.addClass('showing').css('right', littleMouse +'px');
  }
}


// Stop the click event on the drawer breadcrumb from opening the drawer
$drawer.on("mousedown",'#drawer-breadcrumb', function(e) {
  e.stopPropagation();
});



/////////////////////////////////////////////////////
//!Editorial Page Stuff                            
/////////////////////////////////////////////////////
// Setting up the sizing on the video page
function videoSetup() {
  var marginLeft = "-2.65625%",
  	  js_fitvid = $('.js-fitvid'),
	  siteWrapper_width_minus_padding_left = $siteWrapper.outerWidth(true)-parseInt($siteWrapper.css('padding-left'), 10);
	  
  js_fitvid.css({
    'width' : siteWrapper_width_minus_padding_left,
    'margin-left' : marginLeft
  });
  
  
    
  if ($(window).width() > 600) {   
      $('#video-overlay').css({
        'width': siteWrapper_width_minus_padding_left
      });
  }
  
  // pageLoad('video');
}






// Sets up the media kit page links
function mediaKit() {
  $('.js-media-kit-link').css({
    'margin-top': ($('.js-media-kit').find('img').height() - $('.js-media-kit-link').height())/2
  });
}




///////////////////////////////////////////////////////////////
// Feature Stuff
//////////////////////////////////////////////////////////////

function featureSplash() {
  var $featureHeader = $("#feature-header"),
      viewportHeight = $(window).outerHeight(), 
      containerHeight = $featureHeader.outerHeight(),
      containerOffset = (viewportHeight - containerHeight) / 2;
      
      
  // sets min-height of every feature #cover to window height
	$("#cover").css("height", viewportHeight + "px")
             .find('.overlay').css("height", viewportHeight + "px");
  
  // centers the heading in the viewport    
	$featureHeader.css("margin-top", containerOffset + "px");
} 


function featurePullQuote() {
  $(".pullquote").each(function() {
    // 30 accounts for the height of the pullquote ::before
    var pullQuoteCopyHeight = $(this).find(".copy").outerHeight();
    $(this).css("height", pullQuoteCopyHeight + "px")
           .find(".overlay").css("height", pullQuoteCopyHeight + "px");
  });
} 



$siteWrapper.on('click', '#cover-scroller', function() {
	var viewportHeight = $(window).outerHeight();
  
  	if ($(window).width() < 600) {
      $('html, body').animate({
        scrollTop: viewportHeight
      }, 550);
    }  else {
      $('#site-wrapper').animate({
        scrollTop: viewportHeight
      }, 550);
    }
  
    

});
























/////////////////////////////////////////////////////
//=Slider Stuff
/////////////////////////////////////////////////////
// Stop ribbon sliders from following links on drag
function ribbonClick() {
  var $slider = $('.js-ribbon');

  $slider.find('.slide').on('click', function(e) {

    if (sliderDrag === 1){
      e.preventDefault();
    }
  });
}
//
// // Sets up the recent content and daily ribbons
function ribbonSliderSetup() {
  $(".js-ribbon").each(function() {
    slidesWidth = 0;
    sliderOffset = $main.offset().left;

    var $slides = $(this).find(".slides"), // Slide container
        slidesWidth = $slides.data("sliderwidth");

    $(this).css({
      "width" : $(document).width(),
      "margin-left" : -sliderOffset
    });

    $slides.css({
      "width" : slidesWidth + sliderOffset - drawerPanelWidth,
      "padding-left" : sliderOffset
    });
  });

  ribbonClick();
}


// Setting up all sliders in the feed
function feedSliderSetup() {
  $(".js-slider").each(function() {
      slidesWidth = 0;
      
      var $slides = $(this).find(".slides"), // Slide container
          $slide = $slides.find('.slide'), // individual slides
          sliderOffset = $(this).prev('.story-caption').offset().left; // helps determine padding on either side of slider
             
             
      function sliderWidth(resizeRatio){
        // (slide.length - 1) x 2 accounts for the 2px margin on the right of each slide, except for the last one
        // sswidth is determined by the system on slider creation
        // resizeRatio (also determined by the system) allows us to create a heigh and a width for scaled down sliders. 
        slidesWidth = ($slides.data("sswidth")*resizeRatio) + (($slide.length - 1) * 2) + sliderOffset - drawerPanelWidth;
      }       
      
      // Setting width of slider
      if ($(window).width() < 600) { 
        sliderWidth(0.447368421);
      } else {
        
         if($(this).hasClass('promoted-slider')) {
           sliderWidth(0.810526316);
         }
         
         if($(this).hasClass('feed-slider')) {
           if ($(window).width() < 1024) {
             sliderWidth(0.578947368);
           } else {
             // just putting this in an equation so that it doesn't wrap to two lines
             // this equation helps determine the right offset of the end of the slider
             var storyBlock = $(this).parents('.gallery-story'),
                 equation = $(window).width() - storyBlock.offset().left - storyBlock.width() - parseInt(storyBlock.css('paddingLeft'), 10); 
             slidesWidth = ($slides.data("sswidth")*0.578947368) + ($slide.length * 2) + equation;
           } // end window.width() else
         } // end feed-slider else
      } // end window.width() else
      

          
      // setting the width of the actual container
      // we want it to be as wide as the screen, and also to be moved to the left
      // so that the slides don't get cut off
      $(this).css({
        "width" : $(window).outerWidth(true),
        "margin-left" : -sliderOffset
      });      
      
      // setting the width of the slider
      // we want to add padding equal to the margin 
      // so that the slides "start" at their original position
      $slides.css({
        "width" : slidesWidth,
        "padding-left" : sliderOffset
      });  
  });
} 


// Grow sliders on click
function storySliderClick() {
  var $slider = $('.js-story-slider'),
       $slides = $slider.find('.slides'),
       $slide = $slides.find('img'),
       growthHeight = $(window).height()*0.8,
       growthRatio = growthHeight/380
    
   $siteWrapper.on('click', '.js-story-slider .slide', function(e) {
      
     if (sliderDrag == 0){
      
       var slidePadding = ($main.outerWidth(true) - $(this).width())/2;
       if (!$slider.hasClass('grow')) {  
             
         $slider.addClass('grow')
                .add($slide)
                .css('height', growthHeight);
         $slides.css('width', $slides.width()*growthRatio);

         if ($(this).width()*growthRatio > $main.outerWidth(true)) {
           $('.slide-carousel').scrollTo(this, 0, {offset: -drawerPanelWidth });  
         } else {
           $('.slide-carousel').scrollTo(this, 0, {offset: -slidePadding + drawerPanelWidth });  
         }


       } else {
      
         $slider.removeClass('grow')
                .add($slide)
                .css('height', '380px');
         $slides.css('width', $slides.width()/growthRatio);
         $('.slide-carousel').scrollTo(this, 0, {offset: -slidePadding - drawerPanelWidth });  
       }; 
     }
     else return false;
   });
}

// Setting up node page sliders
function storySliderSetup() {  
    $(".js-story-slider").each(function() {
    slidesWidth = 0;
      
    var $slides = $(this).find(".slides"), // Slide container
        slidesWidth = $slides.data('sswidth'),
        sliderOffset = $('.node-title').offset().left;
  
    $(".credits", this).css({
      "width" : $(window).outerWidth(true),
      'margin-left' : sliderOffset +1
    });  
    $(this).css({
      "width" : $(window).outerWidth(true),
      'margin-left' : -sliderOffset +1
    });  

    $slides.css({
      "width" : slidesWidth + sliderOffset - drawerPanelWidth,
      'padding-left' : sliderOffset
    });
  });
  
  storySliderClick();
}


// Allow click and drag of slideshows
function clickDragSlideshows(){  
  var x,left,down;
  $main.on('mousedown','.slide-carousel', function(e){
   
    $(document).mousemove(function(){
       sliderDrag = 1;
     });
    
     e.preventDefault();
     down=true;
     x=e.pageX;
     left=$(this).scrollLeft();
  });
 
  $main.on('mousemove', '.slide-carousel', function(e){
    if(down){
     var newX=e.pageX;      
     $(this).scrollLeft(left-newX+x);  
    }
  });
  
  $main.on('mouseup', '.slide-carousel', function(){down=false;});
  $main.on('mouseleave', '.slide-carousel', function(){down=false;});
}



// Animate all slides in once they are visible
function slideIn(currentSlider) {
  var $currentSlider = $(currentSlider),
      $slide = $currentSlider.find('.slide');        
  
  $currentSlider.addClass('loaded');

  $slide.each(function(i){
    $(this).delay(i*100).queue(function(){
      $(this).addClass('slide-slide').dequeue();
    });
  });

  clickDragSlideshows();
}













////////////////////////////////////////
// Commented out for now to prevent performance issue

// // AJAX HERE
// $(function(){
// 	// Bind to StateChange Event
// 	History.Adapter.bind(window,'statechange',function(e){
//
// 		var State = History.getState(),
//         currentIndex = History.getCurrentIndex(),
//         internal = (History.getState().data._index == (currentIndex - 1));
//
// 		if(internal) return;
//
// 		// Ajax Load
// 		$.get(State.url,function(data) {
//
//          var doc = $.htmlDoc(data);
//
// 			//comment out the next line to stop load sequence
//          if(State.data.ishome)
//          {
//             switch(State.data.origin)
//             {
//                case 'TOP':
//                   $('#lander-header').html($('#lander-header',doc).html());
//                   $('#nav').html($('#nav',doc).html());
//                   $('#main').html($('#main',doc).html());
//                   break;
//                case 'NAV':
//                   $('#nav').html($('#nav',doc).html());
//                   $('#main').html($('#main',doc).html());
//                   break;
//                case 'MAIN':
//                default:
//                   $('#site-wrapper').html($('#site-wrapper',doc).html());
//                   break;
//             }
//          }
//          else
//          {
//             switch(State.data.origin)
//             {
//                case 'TOP':
//                   $('#nav').html($('#nav',doc).html());
//                   $('#main').html($('#main',doc).html());
//                   break;
//                case 'NAV':
//                   $('#main').html($('#main',doc).html());
//                   break;
//                case 'CATARROW':
//                   $('.category-title-container').html($('.category-title-container',doc).html());
//                   $('.category-arrow-container:eq(0) a:first').attr('href',$('.category-arrow-container:eq(0) a:first',doc).attr('href'));
//                   $('.category-arrow-container:eq(1) a:first').attr('href',$('.category-arrow-container:eq(1) a:first',doc).attr('href'));
//                   $('.sub-categories').html($('.sub-categories',doc).html());
//                   $('#main').html($('#main',doc).html());
//                   break;
//                case 'MAIN':
//                default:
//                   $('#site-wrapper').html($('#site-wrapper',doc).html());
//                   break;
//             }
//          }
//
//          $('title').text($('title',doc).text());
// 			$('#bread-cat:first').html($('#bread-cat:first',doc).html());
// 			$('#bread-subcat:first').html($('#bread-subcat:first',doc).html());
// 			$('#site-wrapper, #drawer').removeClass();
// 			$body.removeClass('drawer-open')
// 			.attr('class',$('body',doc)
// 			.attr('class'));
//
// 			//Active menu items...
// 			$('#main-menu ul > li',doc).each(function(x){
// 				$('#main-menu ul > li:eq(' + x + ')').attr('class',$(this).attr('class'));
// 			});
// 			$('#main-menu ul > li > ul',doc).each(function(x){
// 				$('#main-menu ul > li > ul:eq(' + x + ')').attr('class',$(this).attr('class'));
// 			});
// 			$('#main-menu ul > li',doc).each(function(x){
// 				$('ul > li',this).each(function(y){
// 					$('#main-menu ul > li:eq(' + x + ') > ul > li:eq(' + y + ')').attr('class',$(this).attr('class'));
// 				});
// 			});
//
// 			// Scroll the window to the top if you're loading a node page
//       // otherwise, bring the user back to where they were
//       if ($(window).width() < 600) {
//   			if(State.data.scrollTop)
//   			  $(window).scrollTop(State.data.scrollTop);
//   			else
//   			  $(window).scrollTop(0);
//       } else {
//   			if(State.data.scrollTop)
// 			    $siteWrapper.scrollTop(State.data.scrollTop);
// 			  else
// 			    $siteWrapper.scrollTop(0);
//       }
//
//   		initialize();
//
//
// 			setTimeout(function(){
// 				breadcrumb();
// 			}, 500);
//
//
// 			//Enable lazy loading...
// 			$("#site-wrapper img[data-src]").lazyloader();
// 		}
//   );
// 	});




  // Ajax UNLoad Request
  // This is where we need to fire "unloading" functions
//   if($.isFunction($.fn.on)) {
//     $("#drawer,#site-wrapper").on('click','a:not(.no-prettyload, .stripe_button, .share-button-a)',function(e){
// 			e = e || window.event;
// 			if(e.ctrlKey || e.shiftKey || e.metaKey) //Keyboard modifiers for open in new window, new tab
// 			return true;
//
//
// 			// Do not remove this!!
// 			// It is so that the drawer stops unloading after a link click
// 			// (\/) (°,,°) (\/) SNAP SNAP <-- lol nice
// 			$drawer.removeOverscroll();
//
//
// 			//reset the menu (close all open sub-menus)
// 		    setTimeout(function(){
// 				$('#type-filter, .main-menu-item').css('margin-top','0px');
// 	  		    $('.expand-link-arrow').removeClass('expanded');
// 		    }, 300); // remove once the fadeout is done
//
//
//         //if you're on the homepage, fade out the #latest-scroller
//         if($('#latest-scroller')){
//           $('#latest-scroller').css('opacity', '0')
//         }
//
// 			//Check to see if feature
// 			if($(this).parents().hasClass('js-feature')){
// 				featureUnload($(this));
// 			}
//
// 			// Not a feature, but still in the feed
// 			if ($(this).parents().hasClass('js-story') && !$(this).parents().hasClass('js-feature')) {
// 				feedStoryUnload($(this));
// 			}
//
// 			// Next up link
// 			if ($(this).hasClass('next-up-link')) {
// 				nextUp($(this));
// 			}
//
// 			var stateData = {
// 				scrollTop: $siteWrapper.scrollTop(),
// 				_index: History.getCurrentIndex()
// 			};
//       History.replaceState(stateData, History.getState().title, History.getState().url);
// 			//grabbing the url before the timeout
// 			var temphref = $(this).attr('href');
//
// 			//timeout to allow transitions to execute
//       if (temphref){
//
//               var aorigin = 'MAIN';
//               var aishome = History.getState().url == (location.protocol + '//' + location.host + '/');
//
//               if($(this).parents().is('#lander-header'))
//                  aorigin = 'TOP';
//               if($(this).parents().is('#nav'))
//                  aorigin = 'NAV';
//               if($(this).parent().hasClass('category-arrow-container'))
//                  aorigin = 'CATARROW';
//
//               History.pushState({ origin: aorigin, ishome: aishome },null,temphref);
//       }
//
// 			return false;
// 		});
// 	}
// });




/////////////////////////////////////////////////////
// Page Load/Unload Animation Functions
/////////////////////////////////////////////////////
// All feed and promoted unloads expect for Features
function feedStoryUnload(obj) {

  var $jsStory = $(obj).parents('.js-story');
        
  $siteWrapper.addClass('feed-transition'); 
  $jsStory.addClass('translate-out')
}


function featureUnload(el) {
			var distanceFromTop,
			$featureElement = $(el).parents(".js-feature"),
			viewportHeight = $(window).outerHeight();
								
                	
			// fades out story caption
			$featureElement.find('.story-caption').css({
					"transition" : "all .7s ease",
         	"opacity" : "0"
			});
			
			$featureElement.find(".overlay").css("opacity" , "0.3"); 
									
			distanceFromTop = -($featureElement.offset().top - $(window).scrollTop());
				
			$featureElement.css({
					"transition" : "all .5s ease",
					"height" : viewportHeight + "px",
					"padding-top" : "0",
					"padding-bottom" : "0"
			});

			$("#main").css({
					"transition" : "all .5s ease",
					"margin-top" : distanceFromTop + "px"
			});

      fromFeed = 1;
} 




// Clicking the "next up" link
function nextUp(obj) {
  var $nextUp = $(obj).parents('#footer');
  $siteWrapper.addClass('story-transition-next');

  $('#header,#main').css('transform', 'translateY(-'+$(window).height()/3+'px)');
  
    
   $('#drawer-breadcrumb').addClass('bottom-move-out'); 
   setTimeout(function(){      
     $('#drawer-breadcrumb').removeClass('showing bottom-move-out');
     // $('#drawer-breadcrumb').removeClass('bottom-move-out');  
   }, 300); // remove once the fadeout is done	


  
  $nextUp.add('.footer-overlay')
         .addClass('footer-out')
         .css('height', ($(window).height()/3)+377+'px')
         .find('.footer-bottom')
         .css('bottom', ($(window).height()/3)+40+'px');
}


// Add a class to the top of the page to hook into for CSS transitions
function pageLoad(loadDirection) {
	
	//load direction was passed to function
	if (loadDirection){
		$siteWrapper.attr('class',loadDirection+'-translate-in');
	}
	else {
		//assign a load direction based on the type of page
		
		if ($body.is('.node-type-article, .node-type-gallery,  .node-type-video')) {
			$siteWrapper.attr('class','story-translate-in');
		}
		else if ($body.is('.node-type-the-daily')) {
			$siteWrapper.attr('class','direct-translate-in');
		}
		else if ($body.is('.node-type-feature')) {
			
			featureSplash();
			featurePullQuote();
			
			if(fromFeed == 1) {
				$siteWrapper.attr('class','feature-from-feed-translate-in');
				
			} else {
				$siteWrapper.attr('class','feature-translate-in');
			}
			fromFeed = 0;
		}
		else {
			$siteWrapper.attr('class','direct-translate-in');
		}
		
	}
	if ($('#footer').length) {
		nodeFooter();
	}
}

// keeps the footer at the bottom of the viewport if the content is too short
function nodeFooter(){
  var $footer = $('#footer'),
      $footerBottom = $footer.offset().top + $footer.height();
  
  if ($(window).height() > $footerBottom) {
    $footer.css('margin-top', $(window).height() - $footerBottom)
  }
}







// function landingLoad(loadDirection){
// 	console.log('in landingload');
// 	if (loadDirection){
// 		$siteWrapper.addClass(loadDirection+'-translate-in');
// 	}
// 	else {
// 		$siteWrapper.addClass('direct-translate-in');
// 	}
//
// }



// Adds a transition class when clicking the arrows Landing Pages' Headers
function landerArrowListener() {
	//Arrow Clicked
	$siteWrapper.on('click', '.category-arrow', function(e) {
		//If it's poiting left
	  	// e.stopPropagation();
		
		if($(this).hasClass("rotate-180deg")) 
		{
			//add the translate out classes
			$siteWrapper.attr('class','right-translate-out');
			loadDirection = 'left';
			// return false;
		}
		
		//Else, if it's pointing right
		else {
			$siteWrapper.attr('class','left-translate-out');
			loadDirection = 'right';
			// return false;
		}
	});
	
	//Sub Nav Clicked
  $siteWrapper.on('click', '.sub-section, .category-title a', function(){
	  
	  
	  $('.sub-categories li').each(function(index) {
	  	$(this).removeClass('active');
	  });
	  
	  
	  
	  
	  $(this).parent().addClass('active');
		$siteWrapper.attr('class','translate-out-down');
		loadDirection = 'main-up';
		// return false;
	});
	
	// return false;
}



// if ($('body').hasClass('page-landing-pages')) {
//     landerArrowListener();
//
// }
var i=0;
landerArrowListener();

function menuListener() {
		$siteWrapper.on('click', '.home-category a', function() {	
			$siteWrapper.attr('class','translating-out-homepage-to-landing-page');
			loadDirection = 'from-home';
		});

	// toggling transitions from LandingPage to Homepage
		$siteWrapper.on('click', '#lander-header h1 a', function() {
			

			
			$siteWrapper.attr('class','translating-out-landing-page-to-homepage');
			loadDirection = 'home-from-landing-page';
		});
		
		
		
}


menuListener();
/////////////////////////////////////////////////////
// "Initialize" Stuff
/////////////////////////////////////////////////////
// onLoad/AjaxLoad fn
function initialize() {
	featureBackgroundFixed();
	$(".slide img").not(".ad-slider img").attr({width:"150",height:"220"});
	
	if ($body.hasClass('node-type-video')) {
		videoSetup();
	}
  pageLoad(loadDirection);
  loadDirection='';
	// Page Specific Stuff
	if ($body.hasClass('front')){ 
		latestWaypoints();
		scrollerVisible();
	}

	//on any other page but FRONT, we need to enable the correct menu
	else {
	  	
		// check if there are active sub-categories
		var 
		activeMainMenuItem =  $('.main-menu-item.active'),
		activeSubMenuItem,
		activeSubMenu,
		activeMainMenuItem_neighbour,
		active_submenu_category_arrow = activeMainMenuItem.find('.expand-link-arrow');
	
		
		//if there is an active main menu
		if (activeMainMenuItem.length) {
			
			//get reference to the sub-menu <ul>
			activeSubMenu = activeMainMenuItem.find('.sub-menu');
			
			
			//get reference to the neighbour which needs to be 'pushed' to revela the submenu
			activeMainMenuItem_neighbour = nextMainMenuNeighbour(activeMainMenuItem);
			
			//toggle the open class onthe active sub-menu
			// activeSubMenu.addClass('open');
			
			//push it away
			activeMainMenuItem_neighbour.css('margin-top',activeSubMenu.height()+42+'px');
			
			if (!active_submenu_category_arrow.hasClass('expanded')) {
				active_submenu_category_arrow.addClass('expanded');
			}
		}
	
		
		
		//get references to sub-menus / categories involved
	  
		//get the active submenu item, and derive the active sub-menu and category from it
		// var activeSubmenuItem = $('.sub-menu').find('.active'),
		// activeSubmenu = activeSubmenuItem.parent(),
		// activeSubmenuCategory = activeSubmenu.parent(),
		// active_submenu_category_arrow = activeSubmenuCategory.find('.expand-link-arrow'),
		// active_submenu_category_neighbour = nextMainMenuNeighbour(activeSubmenuCategory);
		//
		// console.log('activeSubMenuItem:'+ activeSubmenuItem.html());
		//
		// if (!activeSubmenuCategory.hasClass('open')) {
		// 	activeSubmenu.addClass('open');
		// 	activeSubmenuCategory.addClass('active');
		//
		// 	if (!active_submenu_category_arrow.hasClass('expanded')) {
		// 		active_submenu_category_arrow.addClass('expanded');
		// 	}
		//
		// 	active_submenu_category_neighbour.css('margin-top',activeSubmenu.height()+42+'px');
		// }
	}
  
	breadcrumbShowing = 0;
  
	if ($('.js-ribbon').length) {
		ribbonSliderSetup();
	}
  
	if($(".js-slider").length) {
		feedSliderSetup();
	} 
  
	if($('.js-story-slider').length){ 
		storySliderSetup();
	}

	$('.js-slider, .js-ribbon, .js-story-slider').appear(); 
	$.force_appear();
  
	// Global Stuff
	stButtons.locateElements(); 
//	toggleVisiblityOfShareLinks();

	if ($(".js-fitvid").length) {
    $(".js-fitvid").fitVids();
	}


	// end of else



  
  
	// if ($body.is('.node-type-article, .node-type-gallery,  .node-type-video')) {
	// 	pageLoad('story');
	// }
	// if ($body.is('.node-type-the-daily')) {
	// 	pageLoad('direct');
	// }
	//

  
	if ($('.the-daily').length) {
		theDaily();
	}
  

	// if ($body.hasClass('node-type-feature')) {
// 		featureSplash();
// 		featurePullQuote();
// 	}
	// 	fromFeed = 0;
	// }
	//
	if ($('.js-media-kit-link').length){ 
		mediaKit(); 
	}    
	
  
// if ($body.hasClass('page-content-by-type')) {
// 		pageLoad(loadDirection);
// }
//
// if ($body.hasClass('section-magazine')) {
// 		pageLoad(loadDirection);
// }
//
	setTimeout(function(){
		breadcrumb();
	}, 300);   
}



$('.js-slider, .js-ribbon, .js-story-slider, .slide, .slide img').appear();
$(document).ready(function() {
  $('.js-slider, .js-ribbon, .js-story-slider').appear();
  $.force_appear();
  drawerActions();
  featureBackgroundFixed();
  initialize();
  jQuery('.commitment,.overlay-story-commitment').not('.footer-bottom .overlay-story-commitment').each(function(){
    console.log(jQuery(this).siblings('h2').find('a:first').attr('href')); 
    jQuery(this).wrap('<a href="' + jQuery(this).siblings('h2').find('a:first').attr('href') + '"></a>');
  });
});


$(window).on("load", function(){
  
  clickDragSlideshows();
  $('.js-slider, .js-ribbon, .js-story-slider, .slide, .slide img').appear();
});


$(window).load(function(){
   //Lazy load by a lazy m.f.....
   $('#landing-page-page').waypoint(function(direction){
    
      if (direction == 'down') 
      {
         var tp = $(this).data('total-pages');
         var cp = $(this).data('current-page');

         if((cp+1) < tp)
         {
            $.get(self.location + '?page=' + (cp+1), function(data){

               //This applies to the homepage...
               $('section.latest-container',data).each(function(){
                 
                  //If the group container was not there...
                  if($('#' + $(this).attr('id')).length === 0)
                  {
                     $('section.latest').append('<section id="' + $(this).attr('id') + '" class="latest-container"></section>');
                     $('#' + $(this).attr('id')).append($('h3',this));
                  }

                  $('#' + $(this).attr('id')).append($('article',this));

                  latestWaypoints();

               });

               //This applies when not in the homepage
               if($body.hasClass('not-front'))
                  $('section.latest').append($('section.latest',data));
                 
               //Next page ?
               $('#landing-page-page').data('current-page',cp+1);

               //Additional page setup ?
               if ($(".js-fitvid").length) {
                 $('.js-fitvid').fitVids();
               }  
  
  
               if($(".js-slider").length) {
                 feedSliderSetup();
               } 

               //Reset the waypoint...
               $.waypoints('refresh');

            });
         }
         else
           $('#landing-page-page').remove();
      }
   }, 
   { 
      offset: function() {
         return $.waypoints('viewportHeight') - $(this).outerHeight();
      }, 
   });   
});



$(window).resize(function(){	
  //  Drawer Variables
  if ($(window).width() < 600) {
    drawerPanelWidth = 0;
  } else if (($(window).width() >= 600) && (( $(window).width() < 1024) )) {
    drawerPanelWidth = 45;
  } else {
    drawerPanelWidth = 60;
  }
 
  
	if ($body.hasClass('node-type-feature')) { featureSplash(); featurePullQuote(); }
	if ($body.hasClass('node-type-video')) { videoSetup(); }
  if ($('.the-daily').length) { theDaily(); } 
     

	// after user has stopped resizing
	fireLater(function(){
    var mainOffset = 0;
    
		if ($('.js-ribbon').length) { ribbonSliderSetup(); }
		if ($('.js-slider').length) { feedSliderSetup(); }
    if ($('.js-story-slider').length) { storySliderSetup(); } //change to node-slider
    if ($('#footer').length) { nodeFooter(); }
    
		breadcrumb();         
	}, 100, "afterResize");
});





$(window).on('scroll', function(){
  if ($(window).width() < 600) {
    
    // Mobile Menu Positioning    
    var currentPosition = $(this).scrollTop(),
        scrolledDifference = Math.abs(currentPosition - lastPosition);

                
    // if you've scrolled past the menu-start the function
    if (currentPosition > menuHeight) {

      // if you've scrolled past the detach point, then fix the menu
      if(currentPosition > detachPoint) {
        if(!$mobileHeader.hasClass('detached')) {
          $mobileHeader.addClass('detached');
        }
      }

      // if we're scrolling faster than our wiggle room
      if(scrolledDifference >= littleBitOfGive) {
    
        if(currentPosition > lastPosition) {
          // if we're scrolling down, hide the menu by adding a hidden class
          // but make sure not to add it twice ;)
          if(!$mobileHeader.hasClass('header-hiding')) {
            $mobileHeader.addClass('header-hiding');
          } 
    
        } else {
          // if we're scrolling up, show the menu
          $mobileHeader.removeClass('header-hiding');
        }    
      }
    } else {
      // if we're at the top of the page, remove the "detached" class so the menu
      // doesn't jump around
      if(currentPosition <= 0){
        $mobileHeader.removeClass();
      }
    }
    // log our current position for the next time the user scrolls
    lastPosition = currentPosition;
  } // end of mobile js
});


$siteWrapper.on('scroll', function(){
  if ($(window).width() >= 600) {
    didScroll = true;
  }
})


// Keep track of whether a slide has appeared or not
$siteWrapper.on('appear', '.js-slider, .js-ribbon, .js-story-slider', function(e, $affected) { //add node-slider
  if (!$(this).hasClass('loaded')) {
    slideIn($(this));
  }
});


    
    
// Stop click and drag from registering as a click on gallery page
$(document).mouseup(function(){
  setTimeout(function(){        
    sliderDrag = 0;
    $(document).unbind('mousemove');
  }, 200);
}); 


// Set up a scroll interval so we don't fire a check every scroll
setInterval(function () {
	if (didScroll) {
		didScroll = false;    
        
  
    if($body.hasClass('front')){
      scrollerVisible();
    }    
        
    if(!$body.hasClass('page-node')){
      breadcrumb();
    }
	}
}, 1);
