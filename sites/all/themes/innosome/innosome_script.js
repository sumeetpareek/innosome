(function ($) {


	function slide_tweets() {
		var item = $('.view-innoraft-tweets li:last').hide().detach();
		$('.view-innoraft-tweets li:first').before(item);
		item.slideDown('slow');
	}



$(document).ready(function(){
 if ($.browser.msie  && parseInt($.browser.version, 10) <= 8) {
  $('#ting-tong').css('display','none');
         }

	$("#ting-tong").fancybox({
		'overlayOpacity':1,
		'overlayColor':'#000',
		'hideOnOverlayClick':false,
		'hideOnContentClick':false,
		'scrolling':'no',
		'autoScale':false,
		'centerOnScroll':true,
		'width':700,
		'height':580,
		'autoDimensions':false,
		'onStart':function(){
		    if ($.browser.msie  && parseInt($.browser.version, 10) <= 8) {
         } else {
            document.getElementById('tingtongaudio').play();
        }
		},
		'onClosed':function(){
			$('#region-footer-second').parent().css('width',0).css('height','0');
		}
	});

        $(".drupalcon-fact-img").fancybox({
                'overlayOpacity':1,
                'overlayColor':'#000',
                'hideOnOverlayClick':false,
                'hideOnContentClick':false,
                'scrolling':'no',
                'autoScale':true,
                'centerOnScroll':true,
                'autoDimensions':false,
		'transitionIn':'elastic',
		'transitionOut':'elastic'
        });



	$(".drupalcon-fact-img").fancybox({
		'overlayOpacity':0.4,
		'overlayColor':'#000',
		'hideOnOverlayClick':false,
		'hideOnContentClick':false,
		'scrolling':'no',
		'autoScale':true,
		'centerOnScroll':true,
		'autoDimensions':false
	});

	// Slide tweets
	setInterval(function(){slide_tweets();}, 2000);

	// Create the slider content TODO just home
	$('#home-banner-slider').anythingSlider({
		autoPlay: true,
		autoPlayLocked: true,
		delay: 5000,
		resumeDelay: 2000,
		pauseOnHover: true,
	    buildNavigation: false,
	    theme: 'minimalist-square',
	    buildArrows: false,
	    buildStartStop: false,
	    hashTags: false,
	    onSlideBegin: function(e, slider) {
			$('#home-banner-nav ul.links li a[href="#'+slider.currentPage+'"]').removeClass('active');
		},
	    onSlideComplete: function(slider) {
			$('#home-banner-nav ul.links li a[href="#'+slider.currentPage+'"]').addClass('active');
		}
	});

	// set up external links
	$('#home-banner-nav a').click(function(){
	    $('#home-banner-nav a').removeClass('active');
	    $(this).addClass('active');
		var slide = $(this).attr('href').substring(1);
	    $('#home-banner-slider').anythingSlider(slide);
	    return false;
	});

	// CSS changes for FB plugin that is displayed in an iframe
	$('.fb-iframe iframe').contents().find('.fbConnectWidgetTopmost').css({
	    border: 'none'
	});

	// Create vertical slider for the twitter block
//	$('#block-views-innoraft-tweets-block ul').anythingSlider({
//		  // Appearance
//		  theme               : "minimalist-square", // Theme name
//		  expand              : false,     // If true, the entire slider will expand to fit the parent element
//		  resizeContents      : false,      // If true, solitary images/objects in the panel will expand to fit the viewport
//		  vertical            : true,     // If true, all panels will slide vertically; they slide horizontally otherwise
//		  showMultiple        : 3,     // Set this value to a number and it will show that many slides at once
//		  easing              : "swing",   // Anything other than "linear" or "swing" requires the easing plugin or jQuery UI
//
//		  buildArrows         : false,      // If true, builds the forwards and backwards buttons
//		  buildNavigation     : false,      // If true, builds a list of anchor links to link to each panel
//		  buildStartStop      : false,      // If true, builds the start/stop button
//
//		  appendForwardTo     : null,      // Append forward arrow to a HTML element (jQuery Object, selector or HTMLNode), if not null
//		  appendBackTo        : null,      // Append back arrow to a HTML element (jQuery Object, selector or HTMLNode), if not null
//		  appendControlsTo    : null,      // Append controls (navigation + start-stop) to a HTML element (jQuery Object, selector or HTMLNode), if not null
//		  appendNavigationTo  : null,      // Append navigation buttons to a HTML element (jQuery Object, selector or HTMLNode), if not null
//		  appendStartStopTo   : null,      // Append start-stop button to a HTML element (jQuery Object, selector or HTMLNode), if not null
//
//		  toggleArrows        : false,     // If true, side navigation arrows will slide out on hovering & hide @ other times
//		  toggleControls      : false,     // if true, slide in controls (navigation + play/stop button) on hover and slide change, hide @ other times
//
//		  startText           : "Start",   // Start button text
//		  stopText            : "Stop",    // Stop button text
//		  forwardText         : "&raquo;", // Link text used to move the slider forward (hidden by CSS, replaced with arrow image)
//		  backText            : "&laquo;", // Link text used to move the slider back (hidden by CSS, replace with arrow image)
//		  tooltipClass        : "tooltip", // Class added to navigation & start/stop button (text copied to title if it is hidden by a negative text indent)
//
//		  // Function
//		  enableArrows        : false,      // if false, arrows will be visible, but not clickable.
//		  enableNavigation    : false,      // if false, navigation links will still be visible, but not clickable.
//		  enableStartStop     : false,      // if false, the play/stop button will still be visible, but not clickable. Previously "enablePlay"
//		  enableKeyboard      : false,      // if false, keyboard arrow keys will not work for this slider.
//
//		  // Navigation
//		  startPanel          : 1,         // This sets the initial panel
//		  changeBy            : 1,         // Amount to go forward or back when changing panels.
//		  hashTags            : false,      // Should links change the hashtag in the URL?
//		  infiniteSlides      : true,      // if false, the slider will not wrap & not clone any panels
//		  navigationFormatter : null,      // Details at the top of the file on this use (advanced use)
//		  navigationSize      : false,     // Set this to the maximum number of visible navigation tabs; false to disable
//
//		  // Slideshow options
//		  autoPlay            : true,     // If true, the slideshow will start running; replaces "startStopped" option
//		  autoPlayLocked      : true,     // If true, user changing slides will not stop the slideshow
//		  autoPlayDelayed     : false,     // If true, starting a slideshow will delay advancing slides; if false, the slider will immediately advance to the next slide when slideshow starts
//		  pauseOnHover        : false,      // If true & the slideshow is active, the slideshow will pause on hover
//		  stopAtEnd           : false,     // If true & the slideshow is active, the slideshow will stop on the last page. This also stops the rewind effect when infiniteSlides is false.
//		  playRtl             : false,     // If true, the slideshow will move right-to-left
//
//		  // Times
//		  delay               : 1500,      // How long between slideshow transitions in AutoPlay mode (in milliseconds)
//		  resumeDelay         : 1500,     // Resume slideshow after user interaction, only if autoplayLocked is true (in milliseconds).
//		  animationTime       : 600,       // How long the slideshow transition takes (in milliseconds)
//		  delayBeforeAnimate  : 0,         // How long to pause slide animation before going to the desired slide (used if you want your "out" FX to show).
//
//		});
});

//On window load. This waits until images have loaded which is essential
//$(window).load(function(){
//
//	// Fade in images so there isn't a color "pop" document load and then on window load
//	$(".list-of-services img").fadeIn(500);
//
//	// clone image
//	$('.list-of-services img').each(function(){
//		var el = $(this);
//		el.css({"position":"absolute"}).wrap("<div class='img_wrapper' style='display: inline-block'>").clone().addClass('img_grayscale').css({"position":"absolute","z-index":"998","opacity":"0"}).insertBefore(el).queue(function(){
//			var el = $(this);
//			el.parent().css({"width":this.width,"height":this.height});
//			el.dequeue();
//		});
//		this.src = grayscale(this.src);
//	});
//
//	// Fade image
//	$('.list-of-services').mouseover(function(){
//		$(this).parent().find('img:first').stop().animate({opacity:1}, 1000);
//	})
//	$('.list-of-services').mouseout(function(){
//		$(this).parent().find('.img_grayscale').stop().animate({opacity:0}, 1000);
//	});
//});

})(jQuery);
