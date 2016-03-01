/* Modernizr 2.8.3 (Custom Build) | MIT & BSD
 * Build: http://modernizr.com/download/#-cssanimations-csstransforms-csstransforms3d-csstransitions-applicationcache-history-video-inlinesvg-svg-shiv-cssclasses-teststyles-testprop-testallprops-prefixes-domprefixes-load
 */
;window.Modernizr=function(a,b,c){function A(a){j.cssText=a}function B(a,b){return A(m.join(a+";")+(b||""))}function C(a,b){return typeof a===b}function D(a,b){return!!~(""+a).indexOf(b)}function E(a,b){for(var d in a){var e=a[d];if(!D(e,"-")&&j[e]!==c)return b=="pfx"?e:!0}return!1}function F(a,b,d){for(var e in a){var f=b[a[e]];if(f!==c)return d===!1?a[e]:C(f,"function")?f.bind(d||b):f}return!1}function G(a,b,c){var d=a.charAt(0).toUpperCase()+a.slice(1),e=(a+" "+o.join(d+" ")+d).split(" ");return C(b,"string")||C(b,"undefined")?E(e,b):(e=(a+" "+p.join(d+" ")+d).split(" "),F(e,b,c))}var d="2.8.3",e={},f=!0,g=b.documentElement,h="modernizr",i=b.createElement(h),j=i.style,k,l={}.toString,m=" -webkit- -moz- -o- -ms- ".split(" "),n="Webkit Moz O ms",o=n.split(" "),p=n.toLowerCase().split(" "),q={svg:"http://www.w3.org/2000/svg"},r={},s={},t={},u=[],v=u.slice,w,x=function(a,c,d,e){var f,i,j,k,l=b.createElement("div"),m=b.body,n=m||b.createElement("body");if(parseInt(d,10))while(d--)j=b.createElement("div"),j.id=e?e[d]:h+(d+1),l.appendChild(j);return f=["&#173;",'<style id="s',h,'">',a,"</style>"].join(""),l.id=h,(m?l:n).innerHTML+=f,n.appendChild(l),m||(n.style.background="",n.style.overflow="hidden",k=g.style.overflow,g.style.overflow="hidden",g.appendChild(n)),i=c(l,a),m?l.parentNode.removeChild(l):(n.parentNode.removeChild(n),g.style.overflow=k),!!i},y={}.hasOwnProperty,z;!C(y,"undefined")&&!C(y.call,"undefined")?z=function(a,b){return y.call(a,b)}:z=function(a,b){return b in a&&C(a.constructor.prototype[b],"undefined")},Function.prototype.bind||(Function.prototype.bind=function(b){var c=this;if(typeof c!="function")throw new TypeError;var d=v.call(arguments,1),e=function(){if(this instanceof e){var a=function(){};a.prototype=c.prototype;var f=new a,g=c.apply(f,d.concat(v.call(arguments)));return Object(g)===g?g:f}return c.apply(b,d.concat(v.call(arguments)))};return e}),r.history=function(){return!!a.history&&!!history.pushState},r.cssanimations=function(){return G("animationName")},r.csstransforms=function(){return!!G("transform")},r.csstransforms3d=function(){var a=!!G("perspective");return a&&"webkitPerspective"in g.style&&x("@media (transform-3d),(-webkit-transform-3d){#modernizr{left:9px;position:absolute;height:3px;}}",function(b,c){a=b.offsetLeft===9&&b.offsetHeight===3}),a},r.csstransitions=function(){return G("transition")},r.video=function(){var a=b.createElement("video"),c=!1;try{if(c=!!a.canPlayType)c=new Boolean(c),c.ogg=a.canPlayType('video/ogg; codecs="theora"').replace(/^no$/,""),c.h264=a.canPlayType('video/mp4; codecs="avc1.42E01E"').replace(/^no$/,""),c.webm=a.canPlayType('video/webm; codecs="vp8, vorbis"').replace(/^no$/,"")}catch(d){}return c},r.applicationcache=function(){return!!a.applicationCache},r.svg=function(){return!!b.createElementNS&&!!b.createElementNS(q.svg,"svg").createSVGRect},r.inlinesvg=function(){var a=b.createElement("div");return a.innerHTML="<svg/>",(a.firstChild&&a.firstChild.namespaceURI)==q.svg};for(var H in r)z(r,H)&&(w=H.toLowerCase(),e[w]=r[H](),u.push((e[w]?"":"no-")+w));return e.addTest=function(a,b){if(typeof a=="object")for(var d in a)z(a,d)&&e.addTest(d,a[d]);else{a=a.toLowerCase();if(e[a]!==c)return e;b=typeof b=="function"?b():b,typeof f!="undefined"&&f&&(g.className+=" "+(b?"":"no-")+a),e[a]=b}return e},A(""),i=k=null,function(a,b){function l(a,b){var c=a.createElement("p"),d=a.getElementsByTagName("head")[0]||a.documentElement;return c.innerHTML="x<style>"+b+"</style>",d.insertBefore(c.lastChild,d.firstChild)}function m(){var a=s.elements;return typeof a=="string"?a.split(" "):a}function n(a){var b=j[a[h]];return b||(b={},i++,a[h]=i,j[i]=b),b}function o(a,c,d){c||(c=b);if(k)return c.createElement(a);d||(d=n(c));var g;return d.cache[a]?g=d.cache[a].cloneNode():f.test(a)?g=(d.cache[a]=d.createElem(a)).cloneNode():g=d.createElem(a),g.canHaveChildren&&!e.test(a)&&!g.tagUrn?d.frag.appendChild(g):g}function p(a,c){a||(a=b);if(k)return a.createDocumentFragment();c=c||n(a);var d=c.frag.cloneNode(),e=0,f=m(),g=f.length;for(;e<g;e++)d.createElement(f[e]);return d}function q(a,b){b.cache||(b.cache={},b.createElem=a.createElement,b.createFrag=a.createDocumentFragment,b.frag=b.createFrag()),a.createElement=function(c){return s.shivMethods?o(c,a,b):b.createElem(c)},a.createDocumentFragment=Function("h,f","return function(){var n=f.cloneNode(),c=n.createElement;h.shivMethods&&("+m().join().replace(/[\w\-]+/g,function(a){return b.createElem(a),b.frag.createElement(a),'c("'+a+'")'})+");return n}")(s,b.frag)}function r(a){a||(a=b);var c=n(a);return s.shivCSS&&!g&&!c.hasCSS&&(c.hasCSS=!!l(a,"article,aside,dialog,figcaption,figure,footer,header,hgroup,main,nav,section{display:block}mark{background:#FF0;color:#000}template{display:none}")),k||q(a,c),a}var c="3.7.0",d=a.html5||{},e=/^<|^(?:button|map|select|textarea|object|iframe|option|optgroup)$/i,f=/^(?:a|b|code|div|fieldset|h1|h2|h3|h4|h5|h6|i|label|li|ol|p|q|span|strong|style|table|tbody|td|th|tr|ul)$/i,g,h="_html5shiv",i=0,j={},k;(function(){try{var a=b.createElement("a");a.innerHTML="<xyz></xyz>",g="hidden"in a,k=a.childNodes.length==1||function(){b.createElement("a");var a=b.createDocumentFragment();return typeof a.cloneNode=="undefined"||typeof a.createDocumentFragment=="undefined"||typeof a.createElement=="undefined"}()}catch(c){g=!0,k=!0}})();var s={elements:d.elements||"abbr article aside audio bdi canvas data datalist details dialog figcaption figure footer header hgroup main mark meter nav output progress section summary template time video",version:c,shivCSS:d.shivCSS!==!1,supportsUnknownElements:k,shivMethods:d.shivMethods!==!1,type:"default",shivDocument:r,createElement:o,createDocumentFragment:p};a.html5=s,r(b)}(this,b),e._version=d,e._prefixes=m,e._domPrefixes=p,e._cssomPrefixes=o,e.testProp=function(a){return E([a])},e.testAllProps=G,e.testStyles=x,g.className=g.className.replace(/(^|\s)no-js(\s|$)/,"$1$2")+(f?" js "+u.join(" "):""),e}(this,this.document),function(a,b,c){function d(a){return"[object Function]"==o.call(a)}function e(a){return"string"==typeof a}function f(){}function g(a){return!a||"loaded"==a||"complete"==a||"uninitialized"==a}function h(){var a=p.shift();q=1,a?a.t?m(function(){("c"==a.t?B.injectCss:B.injectJs)(a.s,0,a.a,a.x,a.e,1)},0):(a(),h()):q=0}function i(a,c,d,e,f,i,j){function k(b){if(!o&&g(l.readyState)&&(u.r=o=1,!q&&h(),l.onload=l.onreadystatechange=null,b)){"img"!=a&&m(function(){t.removeChild(l)},50);for(var d in y[c])y[c].hasOwnProperty(d)&&y[c][d].onload()}}var j=j||B.errorTimeout,l=b.createElement(a),o=0,r=0,u={t:d,s:c,e:f,a:i,x:j};1===y[c]&&(r=1,y[c]=[]),"object"==a?l.data=c:(l.src=c,l.type=a),l.width=l.height="0",l.onerror=l.onload=l.onreadystatechange=function(){k.call(this,r)},p.splice(e,0,u),"img"!=a&&(r||2===y[c]?(t.insertBefore(l,s?null:n),m(k,j)):y[c].push(l))}function j(a,b,c,d,f){return q=0,b=b||"j",e(a)?i("c"==b?v:u,a,b,this.i++,c,d,f):(p.splice(this.i++,0,a),1==p.length&&h()),this}function k(){var a=B;return a.loader={load:j,i:0},a}var l=b.documentElement,m=a.setTimeout,n=b.getElementsByTagName("script")[0],o={}.toString,p=[],q=0,r="MozAppearance"in l.style,s=r&&!!b.createRange().compareNode,t=s?l:n.parentNode,l=a.opera&&"[object Opera]"==o.call(a.opera),l=!!b.attachEvent&&!l,u=r?"object":l?"script":"img",v=l?"script":u,w=Array.isArray||function(a){return"[object Array]"==o.call(a)},x=[],y={},z={timeout:function(a,b){return b.length&&(a.timeout=b[0]),a}},A,B;B=function(a){function b(a){var a=a.split("!"),b=x.length,c=a.pop(),d=a.length,c={url:c,origUrl:c,prefixes:a},e,f,g;for(f=0;f<d;f++)g=a[f].split("="),(e=z[g.shift()])&&(c=e(c,g));for(f=0;f<b;f++)c=x[f](c);return c}function g(a,e,f,g,h){var i=b(a),j=i.autoCallback;i.url.split(".").pop().split("?").shift(),i.bypass||(e&&(e=d(e)?e:e[a]||e[g]||e[a.split("/").pop().split("?")[0]]),i.instead?i.instead(a,e,f,g,h):(y[i.url]?i.noexec=!0:y[i.url]=1,f.load(i.url,i.forceCSS||!i.forceJS&&"css"==i.url.split(".").pop().split("?").shift()?"c":c,i.noexec,i.attrs,i.timeout),(d(e)||d(j))&&f.load(function(){k(),e&&e(i.origUrl,h,g),j&&j(i.origUrl,h,g),y[i.url]=2})))}function h(a,b){function c(a,c){if(a){if(e(a))c||(j=function(){var a=[].slice.call(arguments);k.apply(this,a),l()}),g(a,j,b,0,h);else if(Object(a)===a)for(n in m=function(){var b=0,c;for(c in a)a.hasOwnProperty(c)&&b++;return b}(),a)a.hasOwnProperty(n)&&(!c&&!--m&&(d(j)?j=function(){var a=[].slice.call(arguments);k.apply(this,a),l()}:j[n]=function(a){return function(){var b=[].slice.call(arguments);a&&a.apply(this,b),l()}}(k[n])),g(a[n],j,b,n,h))}else!c&&l()}var h=!!a.test,i=a.load||a.both,j=a.callback||f,k=j,l=a.complete||f,m,n;c(h?a.yep:a.nope,!!i),i&&c(i)}var i,j,l=this.yepnope.loader;if(e(a))g(a,0,l,0);else if(w(a))for(i=0;i<a.length;i++)j=a[i],e(j)?g(j,0,l,0):w(j)?B(j):Object(j)===j&&h(j,l);else Object(a)===a&&h(a,l)},B.addPrefix=function(a,b){z[a]=b},B.addFilter=function(a){x.push(a)},B.errorTimeout=1e4,null==b.readyState&&b.addEventListener&&(b.readyState="loading",b.addEventListener("DOMContentLoaded",A=function(){b.removeEventListener("DOMContentLoaded",A,0),b.readyState="complete"},0)),a.yepnope=k(),a.yepnope.executeStack=h,a.yepnope.injectJs=function(a,c,d,e,i,j){var k=b.createElement("script"),l,o,e=e||B.errorTimeout;k.src=a;for(o in d)k.setAttribute(o,d[o]);c=j?h:c||f,k.onreadystatechange=k.onload=function(){!l&&g(k.readyState)&&(l=1,c(),k.onload=k.onreadystatechange=null)},m(function(){l||(l=1,c(1))},e),i?k.onload():n.parentNode.insertBefore(k,n)},a.yepnope.injectCss=function(a,c,d,e,g,i){var e=b.createElement("link"),j,c=i?h:c||f;e.href=a,e.rel="stylesheet",e.type="text/css";for(j in d)e.setAttribute(j,d[j]);g||(n.parentNode.insertBefore(e,n),m(c,0))}}(this,document),Modernizr.load=function(){yepnope.apply(window,[].slice.call(arguments,0))};


/*
* FitVids 1.1
*
*/

(function(e){"use strict";e.fn.fitVids=function(t){var n={customSelector:null};if(!document.getElementById("fit-vids-style")){var r=document.head||document.getElementsByTagName("head")[0];var i=".fluid-width-video-wrapper{width:100%;position:relative;padding:0;}.fluid-width-video-wrapper iframe,.fluid-width-video-wrapper object,.fluid-width-video-wrapper embed {position:absolute;top:0;left:0;width:100%;height:100%;}";var s=document.createElement("div");s.innerHTML='<p>x</p><style id="fit-vids-style">'+i+"</style>";r.appendChild(s.childNodes[1])}if(t){e.extend(n,t)}return this.each(function(){var t=["iframe[src*='player.vimeo.com']","iframe[src*='youtube.com']","iframe[src*='youtube-nocookie.com']","iframe[src*='kickstarter.com'][src*='video.html']","object","embed"];if(n.customSelector){t.push(n.customSelector)}var r=e(this).find(t.join(","));r=r.not("object object");r.each(function(){var t=e(this);if(this.tagName.toLowerCase()==="embed"&&t.parent("object").length||t.parent(".fluid-width-video-wrapper").length){return}var n=this.tagName.toLowerCase()==="object"||t.attr("height")&&!isNaN(parseInt(t.attr("height"),10))?parseInt(t.attr("height"),10):t.height(),r=!isNaN(parseInt(t.attr("width"),10))?parseInt(t.attr("width"),10):t.width(),i=n/r;if(!t.attr("id")){var s="fitvid"+Math.floor(Math.random()*999999);t.attr("id",s)}t.wrap('<div class="fluid-width-video-wrapper"></div>').parent(".fluid-width-video-wrapper").css("padding-top",i*100+"%");t.removeAttr("height").removeAttr("width")})})}})(window.jQuery||window.Zepto)


/*
* ScrollTo
*
*/
;(function(a){if(typeof define==='function'&&define.amd){define(['jquery'],a)}else{a(jQuery)}}(function($){var j=$.scrollTo=function(a,b,c){return $(window).scrollTo(a,b,c)};j.defaults={axis:'xy',duration:parseFloat($.fn.jquery)>=1.3?0:1,limit:true};j.window=function(a){return $(window)._scrollable()};$.fn._scrollable=function(){return this.map(function(){var a=this,isWin=!a.nodeName||$.inArray(a.nodeName.toLowerCase(),['iframe','#document','html','body'])!=-1;if(!isWin)return a;var b=(a.contentWindow||a).document||a.ownerDocument||a;return/webkit/i.test(navigator.userAgent)||b.compatMode=='BackCompat'?b.body:b.documentElement})};$.fn.scrollTo=function(f,g,h){if(typeof g=='object'){h=g;g=0}if(typeof h=='function')h={onAfter:h};if(f=='max')f=9e9;h=$.extend({},j.defaults,h);g=g||h.duration;h.queue=h.queue&&h.axis.length>1;if(h.queue)g/=2;h.offset=both(h.offset);h.over=both(h.over);return this._scrollable().each(function(){if(f==null)return;var d=this,$elem=$(d),targ=f,toff,attr={},win=$elem.is('html,body');switch(typeof targ){case'number':case'string':if(/^([+-]=?)?\d+(\.\d+)?(px|%)?$/.test(targ)){targ=both(targ);break}targ=win?$(targ):$(targ,this);if(!targ.length)return;case'object':if(targ.is||targ.style)toff=(targ=$(targ)).offset()}var e=$.isFunction(h.offset)&&h.offset(d,targ)||h.offset;$.each(h.axis.split(''),function(i,a){var b=a=='x'?'Left':'Top',pos=b.toLowerCase(),key='scroll'+b,old=d[key],max=j.max(d,a);if(toff){attr[key]=toff[pos]+(win?0:old-$elem.offset()[pos]);if(h.margin){attr[key]-=parseInt(targ.css('margin'+b))||0;attr[key]-=parseInt(targ.css('border'+b+'Width'))||0}attr[key]+=e[pos]||0;if(h.over[pos])attr[key]+=targ[a=='x'?'width':'height']()*h.over[pos]}else{var c=targ[pos];attr[key]=c.slice&&c.slice(-1)=='%'?parseFloat(c)/100*max:c}if(h.limit&&/^\d+$/.test(attr[key]))attr[key]=attr[key]<=0?0:Math.min(attr[key],max);if(!i&&h.queue){if(old!=attr[key])animate(h.onAfterFirst);delete attr[key]}});animate(h.onAfter);function animate(a){$elem.animate(attr,g,h.easing,a&&function(){a.call(this,targ,h)})}}).end()};j.max=function(a,b){var c=b=='x'?'Width':'Height',scroll='scroll'+c;if(!$(a).is('html,body'))return a[scroll]-$(a)[c.toLowerCase()]();var d='client'+c,html=a.ownerDocument.documentElement,body=a.ownerDocument.body;return Math.max(html[scroll],body[scroll])-Math.min(html[d],body[d])};function both(a){return $.isFunction(a)||typeof a=='object'?a:{top:a,left:a}};return j}));


/*
* Waypoints
*
*/
(function(){var t=[].indexOf||function(t){for(var e=0,n=this.length;e<n;e++){if(e in this&&this[e]===t)return e}return-1},e=[].slice;(function(t,e){if(typeof define==="function"&&define.amd){return define("waypoints",["jquery"],function(n){return e(n,t)})}else{return e(t.jQuery,t)}})(window,function(n,r){var i,o,l,s,f,u,c,a,h,d,p,y,v,w,g,m;i=n(r);a=t.call(r,"ontouchstart")>=0;s={horizontal:{},vertical:{}};f=1;c={};u="waypoints-context-id";p="resize.waypoints";y="scroll.waypoints";v=1;w="waypoints-waypoint-ids";g="waypoint";m="waypoints";o=function(){function t(t){var e=this;this.$element=t;this.element=t[0];this.didResize=false;this.didScroll=false;this.id="context"+f++;this.oldScroll={x:t.scrollLeft(),y:t.scrollTop()};this.waypoints={horizontal:{},vertical:{}};this.element[u]=this.id;c[this.id]=this;t.bind(y,function(){var t;if(!(e.didScroll||a)){e.didScroll=true;t=function(){e.doScroll();return e.didScroll=false};return r.setTimeout(t,n[m].settings.scrollThrottle)}});t.bind(p,function(){var t;if(!e.didResize){e.didResize=true;t=function(){n[m]("refresh");return e.didResize=false};return r.setTimeout(t,n[m].settings.resizeThrottle)}})}t.prototype.doScroll=function(){var t,e=this;t={horizontal:{newScroll:this.$element.scrollLeft(),oldScroll:this.oldScroll.x,forward:"right",backward:"left"},vertical:{newScroll:this.$element.scrollTop(),oldScroll:this.oldScroll.y,forward:"down",backward:"up"}};if(a&&(!t.vertical.oldScroll||!t.vertical.newScroll)){n[m]("refresh")}n.each(t,function(t,r){var i,o,l;l=[];o=r.newScroll>r.oldScroll;i=o?r.forward:r.backward;n.each(e.waypoints[t],function(t,e){var n,i;if(r.oldScroll<(n=e.offset)&&n<=r.newScroll){return l.push(e)}else if(r.newScroll<(i=e.offset)&&i<=r.oldScroll){return l.push(e)}});l.sort(function(t,e){return t.offset-e.offset});if(!o){l.reverse()}return n.each(l,function(t,e){if(e.options.continuous||t===l.length-1){return e.trigger([i])}})});return this.oldScroll={x:t.horizontal.newScroll,y:t.vertical.newScroll}};t.prototype.refresh=function(){var t,e,r,i=this;r=n.isWindow(this.element);e=this.$element.offset();this.doScroll();t={horizontal:{contextOffset:r?0:e.left,contextScroll:r?0:this.oldScroll.x,contextDimension:this.$element.width(),oldScroll:this.oldScroll.x,forward:"right",backward:"left",offsetProp:"left"},vertical:{contextOffset:r?0:e.top,contextScroll:r?0:this.oldScroll.y,contextDimension:r?n[m]("viewportHeight"):this.$element.height(),oldScroll:this.oldScroll.y,forward:"down",backward:"up",offsetProp:"top"}};return n.each(t,function(t,e){return n.each(i.waypoints[t],function(t,r){var i,o,l,s,f;i=r.options.offset;l=r.offset;o=n.isWindow(r.element)?0:r.$element.offset()[e.offsetProp];if(n.isFunction(i)){i=i.apply(r.element)}else if(typeof i==="string"){i=parseFloat(i);if(r.options.offset.indexOf("%")>-1){i=Math.ceil(e.contextDimension*i/100)}}r.offset=o-e.contextOffset+e.contextScroll-i;if(r.options.onlyOnScroll&&l!=null||!r.enabled){return}if(l!==null&&l<(s=e.oldScroll)&&s<=r.offset){return r.trigger([e.backward])}else if(l!==null&&l>(f=e.oldScroll)&&f>=r.offset){return r.trigger([e.forward])}else if(l===null&&e.oldScroll>=r.offset){return r.trigger([e.forward])}})})};t.prototype.checkEmpty=function(){if(n.isEmptyObject(this.waypoints.horizontal)&&n.isEmptyObject(this.waypoints.vertical)){this.$element.unbind([p,y].join(" "));return delete c[this.id]}};return t}();l=function(){function t(t,e,r){var i,o;if(r.offset==="bottom-in-view"){r.offset=function(){var t;t=n[m]("viewportHeight");if(!n.isWindow(e.element)){t=e.$element.height()}return t-n(this).outerHeight()}}this.$element=t;this.element=t[0];this.axis=r.horizontal?"horizontal":"vertical";this.callback=r.handler;this.context=e;this.enabled=r.enabled;this.id="waypoints"+v++;this.offset=null;this.options=r;e.waypoints[this.axis][this.id]=this;s[this.axis][this.id]=this;i=(o=this.element[w])!=null?o:[];i.push(this.id);this.element[w]=i}t.prototype.trigger=function(t){if(!this.enabled){return}if(this.callback!=null){this.callback.apply(this.element,t)}if(this.options.triggerOnce){return this.destroy()}};t.prototype.disable=function(){return this.enabled=false};t.prototype.enable=function(){this.context.refresh();return this.enabled=true};t.prototype.destroy=function(){delete s[this.axis][this.id];delete this.context.waypoints[this.axis][this.id];return this.context.checkEmpty()};t.getWaypointsByElement=function(t){var e,r;r=t[w];if(!r){return[]}e=n.extend({},s.horizontal,s.vertical);return n.map(r,function(t){return e[t]})};return t}();d={init:function(t,e){var r;e=n.extend({},n.fn[g].defaults,e);if((r=e.handler)==null){e.handler=t}this.each(function(){var t,r,i,s;t=n(this);i=(s=e.context)!=null?s:n.fn[g].defaults.context;if(!n.isWindow(i)){i=t.closest(i)}i=n(i);r=c[i[0][u]];if(!r){r=new o(i)}return new l(t,r,e)});n[m]("refresh");return this},disable:function(){return d._invoke.call(this,"disable")},enable:function(){return d._invoke.call(this,"enable")},destroy:function(){return d._invoke.call(this,"destroy")},prev:function(t,e){return d._traverse.call(this,t,e,function(t,e,n){if(e>0){return t.push(n[e-1])}})},next:function(t,e){return d._traverse.call(this,t,e,function(t,e,n){if(e<n.length-1){return t.push(n[e+1])}})},_traverse:function(t,e,i){var o,l;if(t==null){t="vertical"}if(e==null){e=r}l=h.aggregate(e);o=[];this.each(function(){var e;e=n.inArray(this,l[t]);return i(o,e,l[t])});return this.pushStack(o)},_invoke:function(t){this.each(function(){var e;e=l.getWaypointsByElement(this);return n.each(e,function(e,n){n[t]();return true})});return this}};n.fn[g]=function(){var t,r;r=arguments[0],t=2<=arguments.length?e.call(arguments,1):[];if(d[r]){return d[r].apply(this,t)}else if(n.isFunction(r)){return d.init.apply(this,arguments)}else if(n.isPlainObject(r)){return d.init.apply(this,[null,r])}else if(!r){return n.error("jQuery Waypoints needs a callback function or handler option.")}else{return n.error("The "+r+" method does not exist in jQuery Waypoints.")}};n.fn[g].defaults={context:r,continuous:true,enabled:true,horizontal:false,offset:0,triggerOnce:false};h={refresh:function(){return n.each(c,function(t,e){return e.refresh()})},viewportHeight:function(){var t;return(t=r.innerHeight)!=null?t:i.height()},aggregate:function(t){var e,r,i;e=s;if(t){e=(i=c[n(t)[0][u]])!=null?i.waypoints:void 0}if(!e){return[]}r={horizontal:[],vertical:[]};n.each(r,function(t,i){n.each(e[t],function(t,e){return i.push(e)});i.sort(function(t,e){return t.offset-e.offset});r[t]=n.map(i,function(t){return t.element});return r[t]=n.unique(r[t])});return r},above:function(t){if(t==null){t=r}return h._filter(t,"vertical",function(t,e){return e.offset<=t.oldScroll.y})},below:function(t){if(t==null){t=r}return h._filter(t,"vertical",function(t,e){return e.offset>t.oldScroll.y})},left:function(t){if(t==null){t=r}return h._filter(t,"horizontal",function(t,e){return e.offset<=t.oldScroll.x})},right:function(t){if(t==null){t=r}return h._filter(t,"horizontal",function(t,e){return e.offset>t.oldScroll.x})},enable:function(){return h._invoke("enable")},disable:function(){return h._invoke("disable")},destroy:function(){return h._invoke("destroy")},extendFn:function(t,e){return d[t]=e},_invoke:function(t){var e;e=n.extend({},s.vertical,s.horizontal);return n.each(e,function(e,n){n[t]();return true})},_filter:function(t,e,r){var i,o;i=c[n(t)[0][u]];if(!i){return[]}o=[];n.each(i.waypoints[e],function(t,e){if(r(i,e)){return o.push(e)}});o.sort(function(t,e){return t.offset-e.offset});return n.map(o,function(t){return t.element})}};n[m]=function(){var t,n;n=arguments[0],t=2<=arguments.length?e.call(arguments,1):[];if(h[n]){return h[n].apply(null,t)}else{return h.aggregate.call(null,n)}};n[m].settings={resizeThrottle:100,scrollThrottle:30};return i.on("load.waypoints",function(){return n[m]("refresh")})})}).call(this);


/*! lazysizes - v1.0.0 - 2015-02-25
 Licensed MIT */
!function(a,b){a.lazySizes=b(a,a.document),"function"==typeof define&&define.amd&&define(a.lazySizes)}(window,function(a,b){"use strict";if(b.getElementsByClassName){var c,d=b.documentElement,e=/^picture$/i,f=["load","error","lazyincluded","_lazyloaded"],g=function(a,b){var c=new RegExp("(\\s|^)"+b+"(\\s|$)");return a.className.match(c)&&c},h=function(a,b){g(a,b)||(a.className+=" "+b)},i=function(a,b){var c;(c=g(a,b))&&(a.className=a.className.replace(c," "))},j=function(a,b,c){var d=c?"addEventListener":"removeEventListener";c&&j(a,b),f.forEach(function(c){a[d](c,b)})},k=function(a,c,d,e,f){var g=b.createEvent("Event");return g.initEvent(c,!e,!f),g.details=d||{},a.dispatchEvent(g),g},l=function(b,d){var e;a.HTMLPictureElement||((e=a.picturefill||a.respimage||c.polyfill)?e({reevaluate:!0,reparse:!0,elements:[b]}):d&&d.src&&(b.src=d.src))},m=function(a,b){return getComputedStyle(a,null)[b]},n=function(a,b){for(var d=a.offsetWidth;d<c.minSize&&b&&!a._lazysizesWidth;)d=b.offsetWidth,b=b.parentNode;return d},o=function(a){var c,d,e=function(){c&&(c=!1,a())},f=function(){clearInterval(d),b.hidden||(e(),d=setInterval(e,51))};return b.addEventListener("visibilitychange",f),f(),function(a){c=!0,a===!0&&e()}},p=function(){var f,n,r,s,t,u,v,w,x,y,z,A=a.HTMLPictureElement&&navigator.userAgent.match(/hrome\/(\d+)/)&&40==RegExp.$1,B=/^img$/i,C=/^iframe$/i,D="onscroll"in a,E=-2,F=E,G=E,H=E,I=0,J=0,K=0,L=function(a){J--,a&&a.target&&j(a.target,L),(!a||0>J||!a.target)&&(J=0)},M=function(a,b){var c,d=a,e="hidden"!=m(a,"visibility");for(w-=b,z+=b,x-=b,y+=b;e&&(d=d.offsetParent);)e=s&&2>J||(m(d,"opacity")||1)>0,e&&"visible"!=m(d,"overflow")&&(c=d.getBoundingClientRect(),e=y>c.left-1&&x<c.right+1&&z>c.top-1&&w<c.bottom+1);return e},N=function(){var a,b,d,e,g,h,i,j,k,l=n.length;if(l&&p.m){for(b=Date.now(),f||S(),a=K;l>a;a++,K++)if(n[a]&&!n[a]._lazyRace)if(D){if((j=n[a].getAttribute("data-expand"))&&(h=1*j)||(h=H),!(J>6&&(!j||"src"in n[a])))if(h>E&&(p.m<2||J>3)&&(h=E),k!==h&&(u=innerWidth+h,v=innerHeight+h,i=-1*h,k=h),d=n[a].getBoundingClientRect(),(z=d.bottom)>=i&&(w=d.top)<=v&&(y=d.right)>=i&&(x=d.left)<=u&&(z||y||x||w)&&(s&&G>H&&3>J&&4>I&&!j||M(n[a],h)))K--,b+=2,R(n[a]),g=!0;else{if(Date.now()-b>3)return K++,void O();!g&&s&&!e&&3>J&&4>I&&(r[0]||c.preloadAfterLoad)&&(r[0]||!j&&(z||y||x||w||"auto"!=n[a].getAttribute(c.sizesAttr)))&&(e=r[0]||n[a])}}else R(n[a]);K=0,I++,G>H&&2>J&&I>5&&p.m>2?(H=G,I=0,O()):H=H!=F&&p.m>1&&I>4?F:E,e&&!g&&R(e)}},O=o(N),P=function(a){h(a.target,c.loadedClass),i(a.target,c.loadingClass),j(a.target,P)},Q=function(a,b){try{a.contentWindow.location.replace(b)}catch(c){a.setAttribute("src",b)}},R=function(a,b){var d,f,m,n,o,p,r,u,v,w,x,y=a.currentSrc||a.src,z=B.test(a.nodeName),D=a.getAttribute(c.sizesAttr)||a.getAttribute("sizes"),E="auto"==D;if(!E&&s||!z||!y||a.complete||g(a,c.errorClass)){if(a._lazyRace=!0,!(v=k(a,"lazybeforeunveil",{force:!!b})).defaultPrevented){if(D&&(E?q.updateElem(a,!0):a.setAttribute("sizes",D)),p=a.getAttribute(c.srcsetAttr),o=a.getAttribute(c.srcAttr),z&&(r=a.parentNode,u=e.test(r.nodeName||"")),w=v.details.firesLoad||"src"in a&&(p||o||u),w&&(J++,j(a,L,!0),clearTimeout(t),t=setTimeout(L,3e3)),u)for(d=r.getElementsByTagName("source"),f=0,m=d.length;m>f;f++)(x=c.customMedia[d[f].getAttribute("data-media")||d[f].getAttribute("media")])&&d[f].setAttribute("media",x),n=d[f].getAttribute(c.srcsetAttr),n&&d[f].setAttribute("srcset",n);p?(a.setAttribute("srcset",p),A&&D&&a.removeAttribute("src")):o&&(C.test(a.nodeName)?Q(a,o):a.setAttribute("src",o)),h(a,c.loadingClass),j(a,P,!0)}setTimeout(function(){a._lazyRace&&delete a._lazyRace,"auto"==D&&h(a,c.autosizesClass),(p||u)&&l(a,{src:o}),i(a,c.lazyClass),(!w||a.complete&&y==(a.currentSrc||a.src))&&(w&&L(v),P(v)),a=null})}},S=function(){f||(F=Math.max(Math.min(c.expand||140,300),9),G=4*F),f=!0},T=function(){p.m=3},U=function(){s=!0,I+=6,T(),O(!0)};return{_i:function(){n=b.getElementsByClassName(c.lazyClass),r=b.getElementsByClassName(c.lazyClass+" "+c.preloadClass),c.scroll&&addEventListener("scroll",O,!0),addEventListener("resize",function(){f=!1,O()},!0),a.MutationObserver?new MutationObserver(O).observe(d,{childList:!0,subtree:!0,attributes:!0}):(d.addEventListener("DOMNodeInserted",O,!0),d.addEventListener("DOMAttrModified",O,!0),setInterval(O,3e3)),addEventListener("hashchange",O,!0),["transitionstart","transitionend","load","focus","mouseover","animationend","click"].forEach(function(a){b.addEventListener(a,O,!0)}),(s=/d$|^c/.test(b.readyState))||(addEventListener("load",U),b.addEventListener("DOMContentLoaded",O)),setTimeout(T,777),O(n.length>0)},m:1,checkElems:O,unveil:R}}(),q=function(){var a,d=function(a,b){var c,d,f,g,h,i=a.parentNode;if(i&&(c=n(a,i),h=k(a,"lazybeforesizes",{width:c,dataAttr:!!b}),!h.defaultPrevented&&(c=h.details.width,c&&c!==a._lazysizesWidth))){if(a._lazysizesWidth=c,c+="px",a.setAttribute("sizes",c),e.test(i.nodeName||""))for(d=i.getElementsByTagName("source"),f=0,g=d.length;g>f;f++)d[f].setAttribute("sizes",c);h.details.dataAttr||l(a,h.details)}},f=function(){var b,c=a.length;if(c)for(b=0;c>b;b++)d(a[b])},g=o(f);return{_i:function(){a=b.getElementsByClassName(c.autosizesClass),addEventListener("resize",g)},checkElems:g,updateElem:d}}(),r=function(){r.i||(r.i=!0,q._i(),p._i())};return function(){var b,d={lazyClass:"lazyload",loadedClass:"lazyloaded",loadingClass:"lazyloading",preloadClass:"lazypreload",errorClass:"lazyerror",scroll:!0,autosizesClass:"lazyautosizes",srcAttr:"data-src",srcsetAttr:"data-srcset",sizesAttr:"data-sizes",minSize:50,customMedia:{},init:!0};c=a.lazySizesConfig||{};for(b in d)b in c||(c[b]=d[b]);a.lazySizesConfig=c,setTimeout(function(){c.init&&r()})}(),{cfg:c,autoSizer:q,loader:p,init:r,uP:l,aC:h,rC:i,hC:g,fire:k,gW:n}}});

/*
* Overscroll
*
*/
/**
 * Overscroll 1.7.7
 *  Touch scrolling for the browser
 *  http://azoff.github.io/overscroll/
 *
 * Intended for use with the latest jQuery
 *  http://code.jquery.com/jquery-latest.js
 *  
 * Copyright 2014, Jonathan Azoff
 * Licensed under the MIT license.
 *  https://github.com/azoff/overscroll/blob/master/mit.license
 *
 * For API documentation, see the README file
 *  http://azof.fr/pYCzuM
 *
 * Date: Wednesday, February 11th 2014
 */
/*! Overscroll 1.7.7 | (c) 2014 Jon Azoff | http://azof.fr/pYCzuM */
(function(global, dom, browser, math, wait, cancel, namespace, $, none){

	// We want to run overscroll in strict-mode
	// so that we may benefit from its optimizations
	'use strict';

	// The key used to bind-instance specific data to an object
	var datakey = 'overscroll';

	// These are all the events that could possibly
	// be used by the plug-in
	var events = {
		drag:       'mousemove touchmove',
		end:        'mouseup mouseleave click touchend touchcancel',
		hover:      'mouseenter mouseleave',
		ignored:    'select dragstart drag',
		scroll:     'scroll',
		start:      'mousedown touchstart',
		wheel:      'mousewheel DOMMouseScroll'
	};

	// These settings are used to tweak drift settings
	// for the plug-in
	var settings = {
		captureThreshold: 3,
		driftDecay:       1.1,
		driftSequences:   22,
		driftTimeout:     100,
		scrollDelta:      15,
		thumbOpacity:     0.7,
		thumbThickness:   6,
		thumbTimeout:     400,
		wheelDelta:       20,
		wheelTicks:       120
	};

	// These defaults are used to complement any options
	// passed into the plug-in entry point
	var defaults = {
		cancelOn:       'select,input,textarea',
		direction:      'multi',
		dragHold:       false,
		hoverThumbs:    false,
		scrollDelta:    settings.scrollDelta,
		showThumbs:     true,
		persistThumbs:  false,
		captureWheel:   true,
		wheelDelta:     settings.wheelDelta,
		wheelDirection: 'multi',
		zIndex:         999,
		ignoreSizing:   false,
		thumbColor:     'black'
	};

	// runs feature detection for overscroll
	function compat() {

		// memoize for lazy-loading
		if (compat.memo) { return compat.memo; }

		// find an animator function
		var animator = global.requestAnimationFrame    ||
			global.webkitRequestAnimationFrame         ||
			global.mozRequestAnimationFrame            ||
			global.oRequestAnimationFrame              ||
			global.msRequestAnimationFrame             ||
			function(callback) { wait(callback, 1000/60); };

		var nobody = dom.body === null;
		if (nobody) {
			dom.documentElement.appendChild(dom.createElement('body'));
		}

		// find the name of the overflow scrolling style
		var overflowScrollingStyle = '';
		(function(){
			var div = dom.createElement('div');
			var prefixes = ['webkit', 'moz', 'o', 'ms'];

			dom.body.appendChild(div);
			$.each(prefixes, function(i, prefix){
				div.style[prefix + 'OverflowScrolling'] = 'touch';
			});

			div.style.overflowScrolling = 'touch';
			var computedStyle = global.getComputedStyle(div);
			if (!!computedStyle.overflowScrolling) {
				overflowScrollingStyle = 'overflow-scrolling';
			} else {
				$.each(prefixes, function(i, prefix){
					if (!!computedStyle[prefix + 'OverflowScrolling']) {
						overflowScrollingStyle = '-' + prefix + '-overflow-scrolling';
					}
					return !overflowScrollingStyle;
				});
			}
			div.parentNode.removeChild(div);
		})();

		// find the cursor styles
		var cursorStyles = {};
		(function() {
			var div = dom.createElement('div');
			var prefixes = ['webkit', 'moz'];
			var gmail = 'https://mail.google.com/mail/images/2/';
			cursorStyles = {
				grab:     'url('+gmail+'openhand.cur), move',
				grabbing: 'url('+gmail+'closedhand.cur), move'
			};
			dom.body.appendChild(div);
			$.each(prefixes, function(i, prefix){
				var found, cursor = '-' + prefix + '-grab';
				div.style.cursor = cursor;
				var computedStyle = global.getComputedStyle(div);
				found = computedStyle.cursor === cursor;
				if (found) {
					cursorStyles = {
						grab:     '-' + prefix + '-grab',
						grabbing: '-' + prefix + '-grabbing'
					};
				}
				return !found;
			});
			div.parentNode.removeChild(div);
			return cursorStyles;
		})();

		compat.memo = {
			animate: function(cb) { return animator.call(global, cb); },
			overflowScrolling: overflowScrollingStyle,
			cursor: cursorStyles
		};

		// remove generated body
		if (nobody) {
			dom.documentElement.removeChild(dom.body);
		}

		return compat.memo;

	}

	// Triggers a DOM event on the overscrolled element.
	// All events are namespaced under the overscroll name
	function triggerEvent(event, target) {
		target.trigger('overscroll:' + event);
	}

	// Utility function to return a timestamp
	function time() {
		return (new Date()).getTime();
	}

	// Captures the position from an event, modifies the properties
	// of the second argument to persist the position, and then
	// returns the modified object
	function capturePosition(event, position, index) {
		position.x = event.pageX;
		position.y = event.pageY;
		position.time = time();
		position.index = index;
		return position;
	}

	// Used to move the thumbs around an overscrolled element
	function moveThumbs(thumbs, sizing, left, top) {

		var ml, mt;

		if (thumbs && thumbs.added) {
			if (thumbs.horizontal) {
				ml = left * (1 + sizing.container.width / sizing.container.scrollWidth);
				mt = top + sizing.thumbs.horizontal.top;
				thumbs.horizontal.css('margin', mt + 'px 0 0 ' + ml + 'px');
			}
			if (thumbs.vertical) {
				ml = left + sizing.thumbs.vertical.left;
				mt = top * (1 + sizing.container.height / sizing.container.scrollHeight);
				thumbs.vertical.css('margin', mt + 'px 0 0 ' + ml + 'px');
			}
		}
	}

	// Used to toggle the thumbs on and off
	// of an overscrolled element
	function toggleThumbs(thumbs, options, dragging) {
		if (thumbs && thumbs.added && !options.persistThumbs) {
			if (dragging) {
				if (thumbs.vertical) {
					thumbs.vertical.stop(true, true).fadeTo('fast', settings.thumbOpacity);
				}
				if (thumbs.horizontal) {
					thumbs.horizontal.stop(true, true).fadeTo('fast', settings.thumbOpacity);
				}
			} else {
				if (thumbs.vertical) {
					thumbs.vertical.fadeTo('fast', 0);
				}
				if (thumbs.horizontal) {
					thumbs.horizontal.fadeTo('fast', 0);
				}
			}
		}
	}

	// Defers click event listeners to after a mouseup event.
	// Used to avoid unintentional clicks
	function deferClick(target) {
		var clicks, key = 'events';
		var events = $._data ? $._data(target[0], key) : target.data(key);
		if (events && events.click) {
			clicks = events.click.slice();
			target.off('click').one('click', function(){
				$.each(clicks, function(i, click){
					target.click(click);
				}); return false;
			});
		}
	}

	// Toggles thumbs on hover. This event is only triggered
	// if the hoverThumbs option is set
	function hover(event) {
		var data = event.data,
		thumbs   = data.thumbs,
		options  = data.options,
		dragging = event.type === 'mouseenter';
		toggleThumbs(thumbs, options, dragging);
	}

	// This function is only ever used when the overscrolled element
	// scrolled outside of the scope of this plugin.
	function scroll(event) {
		var data = event.data;
		if (!data.flags.dragged) {
			/*jshint validthis:true */
			moveThumbs(data.thumbs, data.sizing, this.scrollLeft, this.scrollTop);
		}
	}

	// handles mouse wheel scroll events
	function wheel(event) {

		// prevent any default wheel behavior
		event.preventDefault();

		var data = event.data,
		options = data.options,
		sizing = data.sizing,
		thumbs = data.thumbs,
		dwheel = data.wheel,
		flags = data.flags,
		original = event.originalEvent,
		delta = 0, deltaX = 0, deltaY = 0;

		// stop any drifts
		flags.drifting = false;

		// normalize the wheel ticks
		if (original.detail) {
			delta = -original.detail;
			if (original.detailX) {
				deltaX = -original.detailX;
			}
			if (original.detailY) {
				deltaY = -original.detailY;
			}
		} else if (original.wheelDelta) {
			delta = original.wheelDelta / settings.wheelTicks;
			if (original.wheelDeltaX) {
				deltaX = original.wheelDeltaX / settings.wheelTicks;
			}
			if (original.wheelDeltaY) {
				deltaY = original.wheelDeltaY / settings.wheelTicks;
			}
		}

		// apply a pixel delta to each tick
		delta  *= options.wheelDelta;
		deltaX *= options.wheelDelta;
		deltaY *= options.wheelDelta;

		// initialize flags if this is the first tick
		if (!dwheel) {
			data.target.data(datakey).dragging = flags.dragging = true;
			data.wheel = dwheel = { timeout: null };
			toggleThumbs(thumbs, options, true);
		}

		// actually modify scroll offsets
		if (options.wheelDirection === 'vertical'){
			/*jshint validthis:true */
			this.scrollTop -= delta;
		} else if ( options.wheelDirection === 'horizontal') {
			this.scrollLeft -= delta;
		} else {
			this.scrollLeft -= deltaX;
			this.scrollTop  -= deltaY || delta;
		}

		if (dwheel.timeout) { cancel(dwheel.timeout); }

		moveThumbs(thumbs, sizing, this.scrollLeft, this.scrollTop);

		dwheel.timeout = wait(function() {
			data.target.data(datakey).dragging = flags.dragging = false;
			toggleThumbs(thumbs, options, data.wheel = null);
		}, settings.thumbTimeout);

	}

	// updates the current scroll offset during a mouse move
	function drag(event) {

		event.preventDefault();

		var data = event.data,
		touches  = event.originalEvent.touches,
		options  = data.options,
		sizing   = data.sizing,
		thumbs   = data.thumbs,
		position = data.position,
		flags    = data.flags,
		target   = data.target.get(0);


		// correct page coordinates for touch devices
		if (touches && touches.length) {
			event = touches[0];
		}

		if (!flags.dragged) {
			toggleThumbs(thumbs, options, true);
		}

		flags.dragged = true;

		if (options.direction !== 'vertical') {
			target.scrollLeft -= (event.pageX - position.x);
		}

		if (data.options.direction !== 'horizontal') {
			target.scrollTop -= (event.pageY - position.y);
		}

		capturePosition(event, data.position);

		if (--data.capture.index <= 0) {
			data.target.data(datakey).dragging = flags.dragging = true;
			capturePosition(event, data.capture, settings.captureThreshold);
		}

		moveThumbs(thumbs, sizing, target.scrollLeft, target.scrollTop);

	}

	// sends the overscrolled element into a drift
	function drift(target, event, callback) {

		var data   = event.data, dx, dy, xMod, yMod,
		capture    = data.capture,
		options    = data.options,
		sizing     = data.sizing,
		thumbs     = data.thumbs,
		elapsed    = time() - capture.time,
		scrollLeft = target.scrollLeft,
		scrollTop  = target.scrollTop,
		decay      = settings.driftDecay;

		// only drift if enough time has passed since
		// the last capture event
		if (elapsed > settings.driftTimeout) {
			callback(data); return;
		}

		// determine offset between last capture and current time
		dx = options.scrollDelta * (event.pageX - capture.x);
		dy = options.scrollDelta * (event.pageY - capture.y);

		// update target scroll offsets
		if (options.direction !== 'vertical') {
			scrollLeft -= dx;
		} if (options.direction !== 'horizontal') {
			scrollTop -= dy;
		}

		// split the distance to travel into a set of sequences
		xMod = dx / settings.driftSequences;
		yMod = dy / settings.driftSequences;

		triggerEvent('driftstart', data.target);

		data.drifting = true;

		// animate the drift sequence
		compat().animate(function render() {
			if (data.drifting) {
				var min = 1, max = -1;
				data.drifting = false;
				if (yMod > min && target.scrollTop > scrollTop || yMod < max && target.scrollTop < scrollTop) {
					data.drifting = true;
					target.scrollTop -= yMod;
					yMod /= decay;
				}
				if (xMod > min && target.scrollLeft > scrollLeft || xMod < max && target.scrollLeft < scrollLeft) {
					data.drifting = true;
					target.scrollLeft -= xMod;
					xMod /= decay;
				}
				moveThumbs(thumbs, sizing, target.scrollLeft, target.scrollTop);
				compat().animate(render);
			} else {
				triggerEvent('driftend', data.target);
				callback(data);
			}
		});

	}

	// starts the drag operation and binds the mouse move handler
	function start(event) {

		var data = event.data,
		touches  = event.originalEvent.touches,
		target   = data.target,
		dstart   = data.start = $(event.target),
		flags    = data.flags;

		// stop any drifts
		flags.drifting = false;

		// only start drag if the user has not explictly banned it.
		if (dstart.size() && !dstart.is(data.options.cancelOn)) {

			// without this the simple "click" event won't be recognized on touch clients
			if (!touches) { event.preventDefault(); }

			if (!compat().overflowScrolling) {
				target.css('cursor', compat().cursor.grabbing);
				target.data(datakey).dragging = flags.dragging = flags.dragged = false;

				// apply the drag listeners to the doc or target
				if(data.options.dragHold) {
					$(document).on(events.drag, data, drag);
				} else {
					target.on(events.drag, data, drag);
				}
			}

			data.position = capturePosition(event, {});
			data.capture = capturePosition(event, {}, settings.captureThreshold);
			triggerEvent('dragstart', target);

		}

	}

	// ends the drag operation and unbinds the mouse move handler
	function stop(event) {

		var data = event.data,
		target = data.target,
		options = data.options,
		flags = data.flags,
		thumbs = data.thumbs,

		// hides the thumbs after the animation is done
		done = function () {
			if (thumbs && !options.hoverThumbs) {
				toggleThumbs(thumbs, options, false);
			}
		};

		// remove drag listeners from doc or target
		if(options.dragHold) {
			$(document).unbind(events.drag, drag);
		} else {
			target.unbind(events.drag, drag);
		}

		// only fire events and drift if we started with a
		// valid position
		if (data.position) {

			triggerEvent('dragend', target);

			// only drift if a drag passed our threshold
			if (flags.dragging && !compat().overflowScrolling) {
				drift(target.get(0), event, done);
			} else {
				done();
			}

		}

		// only if we moved, and the mouse down is the same as
		// the mouse up target do we defer the event
		if (flags.dragging && !compat().overflowScrolling && data.start && data.start.is(event.target)) {
			deferClick(data.start);
		}

		// clear all internal flags and settings
		target.data(datakey).dragging =
			data.start     =
			data.capture   =
			data.position  =
			flags.dragged  =
			flags.dragging = false;

		// set the cursor back to normal
		target.css('cursor', compat().cursor.grab);

	}

	// Ensures that a full set of options are provided
	// for the plug-in. Also does some validation
	function getOptions(options) {

		// fill in missing values with defaults
		options = $.extend({}, defaults, options);

		// check for inconsistent directional restrictions
		if (options.direction !== 'multi' && options.direction !== options.wheelDirection) {
			options.wheelDirection = options.direction;
		}

		// ensure positive values for deltas
		options.scrollDelta = math.abs(parseFloat(options.scrollDelta));
		options.wheelDelta  = math.abs(parseFloat(options.wheelDelta));

		// fix values for scroll offset
		options.scrollLeft = options.scrollLeft === none ? null : math.abs(parseFloat(options.scrollLeft));
		options.scrollTop  = options.scrollTop  === none ? null : math.abs(parseFloat(options.scrollTop));

		return options;

	}

	// Returns the sizing information (bounding box) for the
	// target DOM element
	function getSizing(target) {

		var $target  = $(target),
		width        = $target.width(),
		height       = $target.height(),
		scrollWidth  = width >= target.scrollWidth ? width : target.scrollWidth,
		scrollHeight = height >= target.scrollHeight ? height : target.scrollHeight,
		hasScroll    = scrollWidth > width || scrollHeight > height;

		return {
			valid: hasScroll,
			container: {
				width: width,
				height: height,
				scrollWidth: scrollWidth,
				scrollHeight: scrollHeight
			},
			thumbs: {
				horizontal: {
					width: width * width / scrollWidth,
					height: settings.thumbThickness,
					corner: settings.thumbThickness / 2,
					left: 0,
					top: height - settings.thumbThickness
				},
				vertical: {
					width: settings.thumbThickness,
					height: height * height / scrollHeight,
					corner: settings.thumbThickness / 2,
					left: width - settings.thumbThickness,
					top: 0
				}
			}
		};

	}

	// Attempts to get (or implicitly creates) the
	// remover function for the target passed
	// in as an argument
	function getRemover(target, orCreate) {

		var $target = $(target), thumbs,
		data        = $target.data(datakey) || {},
		style       = $target.attr('style'),
		fallback    = orCreate ? function () {

			data = $target.data(datakey);
			thumbs = data.thumbs;

			// restore original styles (if any)
			if (style) {
				$target.attr('style', style);
			} else {
				$target.removeAttr('style');
			}

			// remove any created thumbs
			if (thumbs) {
				if (thumbs.horizontal) { thumbs.horizontal.remove(); }
				if (thumbs.vertical)   { thumbs.vertical.remove();   }
			}

			// remove any bound overscroll events and data
			$target
				.removeData(datakey)
				.off(events.wheel,      wheel)
				.off(events.start,      start)
				.off(events.end,        stop)
				.off(events.ignored,    ignore);

		} : $.noop;

		return $.isFunction(data.remover) ? data.remover : fallback;

	}

	// Genterates CSS specific to a particular thumb.
	// It requires sizing data and options
	function getThumbCss(size, options) {
		return {
			position: 'absolute',
      right: 0,
			opacity: options.persistThumbs ? settings.thumbOpacity : 0,
			'background-color': options.thumbColor,
			width: size.width + 'px',
			height: size.height + 'px',
			'border-radius': size.corner + 'px',
			'margin': size.top + 'px 0 0 ' + size.left + 'px',
			'z-index': options.zIndex
		};
	}

	// Creates the DOM elements used as "thumbs" within
	// the target container.
	function createThumbs(target, sizing, options) {

		var div = '<div/>',
		thumbs  = {},
		css     = false;

		if (sizing.container.scrollWidth > 0 && options.direction !== 'vertical') {
			css = getThumbCss(sizing.thumbs.horizontal, options);
			thumbs.horizontal = $(div).css(css).prependTo(target);
		}

		if (sizing.container.scrollHeight > 0 && options.direction !== 'horizontal') {
			css = getThumbCss(sizing.thumbs.vertical, options);
			thumbs.vertical = $(div).css(css).prependTo(target);
		}

		thumbs.added = !!css;

		return thumbs;

	}

	// ignores events on the overscroll element
	function ignore(event) {
		event.preventDefault();
	}

	// This function takes a jQuery element, some
	// (optional) options, and sets up event metadata
	// for each instance the plug-in affects
	function setup(target, options) {

		// create initial data properties for this instance
		options = getOptions(options);
		var sizing = getSizing(target),
		thumbs, data = {
			options: options, sizing: sizing,
			flags: { dragging: false },
			remover: getRemover(target, true)
		};

		// only apply handlers if the overscrolled element
		// actually has an area to scroll
		if (sizing.valid || options.ignoreSizing) {
			// provide a circular-reference, enable events, and
			// apply any required CSS
			data.target = target = $(target).css({
				// position: 'absolute',
				cursor: compat().cursor.grab
			}).on(events.start, data, start)
				.on(events.end, data, stop)
				.on(events.ignored, data, ignore);

			// apply the stop listeners for drag end
			if(options.dragHold) {
				$(document).on(events.end, data, stop);
			} else {
				data.target.on(events.end, data, stop);
			}

			// apply any user-provided scroll offsets
			if (options.scrollLeft !== null) {
				target.scrollLeft(options.scrollLeft);
			} if (options.scrollTop !== null) {
				target.scrollTop(options.scrollTop);
			}

			// use native oversroll, if it exists
			if (compat().overflowScrolling) {
				target.css(compat().overflowScrolling, 'touch');
			} else {
				target.on(events.scroll, data, scroll);
			}

			// check to see if the user would like mousewheel support
			if (options.captureWheel) {
				target.on(events.wheel, data, wheel);
			}

			// add thumbs and listeners (if we're showing them)
			if (options.showThumbs) {
				if (compat().overflowScrolling) {
					target.css('overflow', 'scroll');
				} else {
					target.css('overflow', 'hidden');
					data.thumbs = thumbs = createThumbs(target, sizing, options);
					if (thumbs.added) {
						moveThumbs(thumbs, sizing, target.scrollLeft(), target.scrollTop());
						if (options.hoverThumbs) {
							target.on(events.hover, data, hover);
						}
					}
				}
			} else {
				target.css('overflow', 'hidden');
			}

			target.data(datakey, data);
		}

	}

	// Removes any event listeners and other instance-specific
	// data from the target. It attempts to leave the target
	// at the state it found it.
	function teardown(target) {
		getRemover(target)();
	}

	// This is the entry-point for enabling the plug-in;
	// You can find it's exposure point at the end
	// of this closure
	function overscroll(options) {
		/*jshint validthis:true */
		return this.removeOverscroll().each(function() {
			setup(this, options);
		});
	}

	// This is the entry-point for disabling the plug-in;
	// You can find it's exposure point at the end
	// of this closure
	function removeOverscroll() {
		/*jshint validthis:true */
		return this.each(function () {
			teardown(this);
		});
	}

	// Extend overscroll to expose settings to the user
	overscroll.settings = settings;

	// Extend jQuery's prototype to expose the plug-in.
	// If the supports native overflowScrolling, overscroll will not
	// attempt to override the browser's built in support
	$.extend(namespace, {
		overscroll:         overscroll,
		removeOverscroll:   removeOverscroll
	});

})(window, document, navigator, Math, setTimeout, clearTimeout, jQuery.fn, jQuery);

/*!
 * imagesLoaded PACKAGED v3.1.7
 * JavaScript is all like "You images are done yet or what?"
 * MIT License
 */

(function(){function e(){}function t(e,t){for(var n=e.length;n--;)if(e[n].listener===t)return n;return-1}function n(e){return function(){return this[e].apply(this,arguments)}}var i=e.prototype,r=this,o=r.EventEmitter;i.getListeners=function(e){var t,n,i=this._getEvents();if("object"==typeof e){t={};for(n in i)i.hasOwnProperty(n)&&e.test(n)&&(t[n]=i[n])}else t=i[e]||(i[e]=[]);return t},i.flattenListeners=function(e){var t,n=[];for(t=0;e.length>t;t+=1)n.push(e[t].listener);return n},i.getListenersAsObject=function(e){var t,n=this.getListeners(e);return n instanceof Array&&(t={},t[e]=n),t||n},i.addListener=function(e,n){var i,r=this.getListenersAsObject(e),o="object"==typeof n;for(i in r)r.hasOwnProperty(i)&&-1===t(r[i],n)&&r[i].push(o?n:{listener:n,once:!1});return this},i.on=n("addListener"),i.addOnceListener=function(e,t){return this.addListener(e,{listener:t,once:!0})},i.once=n("addOnceListener"),i.defineEvent=function(e){return this.getListeners(e),this},i.defineEvents=function(e){for(var t=0;e.length>t;t+=1)this.defineEvent(e[t]);return this},i.removeListener=function(e,n){var i,r,o=this.getListenersAsObject(e);for(r in o)o.hasOwnProperty(r)&&(i=t(o[r],n),-1!==i&&o[r].splice(i,1));return this},i.off=n("removeListener"),i.addListeners=function(e,t){return this.manipulateListeners(!1,e,t)},i.removeListeners=function(e,t){return this.manipulateListeners(!0,e,t)},i.manipulateListeners=function(e,t,n){var i,r,o=e?this.removeListener:this.addListener,s=e?this.removeListeners:this.addListeners;if("object"!=typeof t||t instanceof RegExp)for(i=n.length;i--;)o.call(this,t,n[i]);else for(i in t)t.hasOwnProperty(i)&&(r=t[i])&&("function"==typeof r?o.call(this,i,r):s.call(this,i,r));return this},i.removeEvent=function(e){var t,n=typeof e,i=this._getEvents();if("string"===n)delete i[e];else if("object"===n)for(t in i)i.hasOwnProperty(t)&&e.test(t)&&delete i[t];else delete this._events;return this},i.removeAllListeners=n("removeEvent"),i.emitEvent=function(e,t){var n,i,r,o,s=this.getListenersAsObject(e);for(r in s)if(s.hasOwnProperty(r))for(i=s[r].length;i--;)n=s[r][i],n.once===!0&&this.removeListener(e,n.listener),o=n.listener.apply(this,t||[]),o===this._getOnceReturnValue()&&this.removeListener(e,n.listener);return this},i.trigger=n("emitEvent"),i.emit=function(e){var t=Array.prototype.slice.call(arguments,1);return this.emitEvent(e,t)},i.setOnceReturnValue=function(e){return this._onceReturnValue=e,this},i._getOnceReturnValue=function(){return this.hasOwnProperty("_onceReturnValue")?this._onceReturnValue:!0},i._getEvents=function(){return this._events||(this._events={})},e.noConflict=function(){return r.EventEmitter=o,e},"function"==typeof define&&define.amd?define("eventEmitter/EventEmitter",[],function(){return e}):"object"==typeof module&&module.exports?module.exports=e:this.EventEmitter=e}).call(this),function(e){function t(t){var n=e.event;return n.target=n.target||n.srcElement||t,n}var n=document.documentElement,i=function(){};n.addEventListener?i=function(e,t,n){e.addEventListener(t,n,!1)}:n.attachEvent&&(i=function(e,n,i){e[n+i]=i.handleEvent?function(){var n=t(e);i.handleEvent.call(i,n)}:function(){var n=t(e);i.call(e,n)},e.attachEvent("on"+n,e[n+i])});var r=function(){};n.removeEventListener?r=function(e,t,n){e.removeEventListener(t,n,!1)}:n.detachEvent&&(r=function(e,t,n){e.detachEvent("on"+t,e[t+n]);try{delete e[t+n]}catch(i){e[t+n]=void 0}});var o={bind:i,unbind:r};"function"==typeof define&&define.amd?define("eventie/eventie",o):e.eventie=o}(this),function(e,t){"function"==typeof define&&define.amd?define(["eventEmitter/EventEmitter","eventie/eventie"],function(n,i){return t(e,n,i)}):"object"==typeof exports?module.exports=t(e,require("eventEmitter"),require("eventie")):e.imagesLoaded=t(e,e.EventEmitter,e.eventie)}(window,function(e,t,n){function i(e,t){for(var n in t)e[n]=t[n];return e}function r(e){return"[object Array]"===d.call(e)}function o(e){var t=[];if(r(e))t=e;else if("number"==typeof e.length)for(var n=0,i=e.length;i>n;n++)t.push(e[n]);else t.push(e);return t}function s(e,t,n){if(!(this instanceof s))return new s(e,t);"string"==typeof e&&(e=document.querySelectorAll(e)),this.elements=o(e),this.options=i({},this.options),"function"==typeof t?n=t:i(this.options,t),n&&this.on("always",n),this.getImages(),a&&(this.jqDeferred=new a.Deferred);var r=this;setTimeout(function(){r.check()})}function c(e){this.img=e}function f(e){this.src=e,v[e]=this}var a=e.jQuery,u=e.console,h=u!==void 0,d=Object.prototype.toString;s.prototype=new t,s.prototype.options={},s.prototype.getImages=function(){this.images=[];for(var e=0,t=this.elements.length;t>e;e++){var n=this.elements[e];"IMG"===n.nodeName&&this.addImage(n);var i=n.nodeType;if(i&&(1===i||9===i||11===i))for(var r=n.querySelectorAll("img"),o=0,s=r.length;s>o;o++){var c=r[o];this.addImage(c)}}},s.prototype.addImage=function(e){var t=new c(e);this.images.push(t)},s.prototype.check=function(){function e(e,r){return t.options.debug&&h&&u.log("confirm",e,r),t.progress(e),n++,n===i&&t.complete(),!0}var t=this,n=0,i=this.images.length;if(this.hasAnyBroken=!1,!i)return this.complete(),void 0;for(var r=0;i>r;r++){var o=this.images[r];o.on("confirm",e),o.check()}},s.prototype.progress=function(e){this.hasAnyBroken=this.hasAnyBroken||!e.isLoaded;var t=this;setTimeout(function(){t.emit("progress",t,e),t.jqDeferred&&t.jqDeferred.notify&&t.jqDeferred.notify(t,e)})},s.prototype.complete=function(){var e=this.hasAnyBroken?"fail":"done";this.isComplete=!0;var t=this;setTimeout(function(){if(t.emit(e,t),t.emit("always",t),t.jqDeferred){var n=t.hasAnyBroken?"reject":"resolve";t.jqDeferred[n](t)}})},a&&(a.fn.imagesLoaded=function(e,t){var n=new s(this,e,t);return n.jqDeferred.promise(a(this))}),c.prototype=new t,c.prototype.check=function(){var e=v[this.img.src]||new f(this.img.src);if(e.isConfirmed)return this.confirm(e.isLoaded,"cached was confirmed"),void 0;if(this.img.complete&&void 0!==this.img.naturalWidth)return this.confirm(0!==this.img.naturalWidth,"naturalWidth"),void 0;var t=this;e.on("confirm",function(e,n){return t.confirm(e.isLoaded,n),!0}),e.check()},c.prototype.confirm=function(e,t){this.isLoaded=e,this.emit("confirm",this,t)};var v={};return f.prototype=new t,f.prototype.check=function(){if(!this.isChecked){var e=new Image;n.bind(e,"load",this),n.bind(e,"error",this),e.src=this.src,this.isChecked=!0}},f.prototype.handleEvent=function(e){var t="on"+e.type;this[t]&&this[t](e)},f.prototype.onload=function(e){this.confirm(!0,"onload"),this.unbindProxyEvents(e)},f.prototype.onerror=function(e){this.confirm(!1,"onerror"),this.unbindProxyEvents(e)},f.prototype.confirm=function(e,t){this.isConfirmed=!0,this.isLoaded=e,this.emit("confirm",this,t)},f.prototype.unbindProxyEvents=function(e){n.unbind(e.target,"load",this),n.unbind(e.target,"error",this)},s});

/*!
* jQuery htmlDoc "fixer" - v0.2pre - 8/8/2011
* http://benalman.com/projects/jquery-misc-plugins/
*
* Copyright (c) 2010 "Cowboy" Ben Alman
* Dual licensed under the MIT and GPL licenses.
* http://benalman.com/about/license/
*/
 
(function($) {
  // RegExp that matches opening and closing browser-stripped tags.
  // $1 = slash, $2 = tag name, $3 = attributes
  var matchTag = /<(\/?)(html|head|body|title|base|meta)(\s+[^>]*)?>/ig;
  // Unique id prefix for selecting placeholder elements.
  var prefix = 'hd' + +new Date;
  // A node under which a temporary DOM tree can be constructed.
  var parent;
 
  $.htmlDoc = function(html) {
  // A collection of "intended" elements that can't be rendered cross-browser
  // with .innerHTML, for which placeholders must be swapped.
  var elems = $();
  // Input HTML string, parsed to include placeholder DIVs. Replace HTML,
  // HEAD, BODY tags with DIV placeholders.
  var htmlParsed = html.replace(matchTag, function(tag, slash, name, attrs) {
  // Temporary object in which to hold attributes.
  var obj = {};
  // If this is an opening tag...
  if ( !slash ) {
  // Add an element of this name into the collection of elements. Note
  // that if a string of attributes is added at this point, it fails.
  elems = elems.add('<' + name + '/>');
  // If the original tag had attributes, create a temporary div with
  // those attributes. Then, copy each attribute from the temporary div
  // over to the temporary object.
  if ( attrs ) {
  $.each($('<div' + attrs + '/>')[0].attributes, function(i, attr) {
  obj[attr.name] = attr.value;
  });
  }
  // Set the attributes of the intended object based on the attributes
  // copied in the previous step.
  elems.eq(-1).attr(obj);
  }
  // A placeholder div with a unique id replaces the intended element's
  // tag in the parsed HTML string.
  return '<' + slash + 'div'
  + (slash ? '' : ' id="' + prefix + (elems.length - 1) + '"') + '>';
  });
 
  // If no placeholder elements were necessary, just return normal
  // jQuery-parsed HTML.
  if ( !elems.length ) {
  return $(html);
  }
  // Create parent node if it hasn't been created yet.
  if ( !parent ) {
  parent = $('<div/>');
  }
  // Create the parent node and append the parsed, place-held HTML.
  parent.html(htmlParsed);
  // Replace each placeholder element with its intended element.
  $.each(elems, function(i) {
  var elem = parent.find('#' + prefix + i).before(elems[i]);
  elems.eq(i).html(elem.contents());
  elem.remove();
  });
  // Return the topmost intended element(s), sans text nodes, while removing
  // them from the parent element with unwrap.
  return parent.children().unwrap();
  };
}(jQuery));


/*
 * jQuery appear plugin
 *
 * Copyright (c) 2012 Andrey Sidorov
 * licensed under MIT license.
 *
 * https://github.com/morr/jquery.appear/
 *
 * Version: 0.3.3
 */
(function($) {
  var selectors = [];

  var check_lock = false;
  var defaults = {
    interval: 250,
    force_process: false,
    scroll_selector: $(window).width() < 600 ? window : '#site-wrapper'
  }
  var $window = $(window);

  var $prior_appeared;

  function process() {
    check_lock = false;
    for (var index = 0; index < selectors.length; index++) {
      var $appeared = $(selectors[index]).filter(function() {
        return $(this).is(':appeared');
      });

      $appeared.trigger('appear', [$appeared]);

      if ($prior_appeared) {
        var $disappeared = $prior_appeared.not($appeared);
        $disappeared.trigger('disappear', [$disappeared]);
      }
      $prior_appeared = $appeared;
    }
  }

  // "appeared" custom filter
  $.expr[':']['appeared'] = function(element) {
    var $element = $(element);
    if (!$element.is(':visible')) {
      return false;
    }

    var window_left = $window.scrollLeft();
    var window_top = $window.scrollTop();
    var offset = $element.offset();
    var left = offset.left;
    var top = offset.top;

    if (top + $element.height() >= window_top &&
        top - ($element.data('appear-top-offset') || 0) <= window_top + $window.height() &&
        left + $element.width() >= window_left &&
        left - ($element.data('appear-left-offset') || 0) <= window_left + $window.width()) {
      return true;
    } else {
      return false;
    }
  }

  $.fn.extend({
    // watching for element's appearance in browser viewport
    appear: function(options) {

      var opts = $.extend({}, defaults, options || {});
      var selector = this.selector || this;

      if( typeof $(opts.scroll_selector).data('appear_binded') === 'undefined' ) {
        var on_check = function() {
          if (check_lock) {
            return;
          }
          check_lock = true;

          setTimeout(process, opts.interval);
        };

        $(opts.scroll_selector).on('scroll',on_check);
        $(window).resize(on_check);

        $(opts.scroll_selector).data('appear_binded',true);
      }

      if (opts.force_process) {
        setTimeout(process, opts.interval);
      }
      selectors.push(selector);
      return $(selector);
    }
  });

  $.extend({
    // force elements's appearance check
    force_appear: function(options) {
      var opts = $.extend({}, defaults, options || {});
      
      if( typeof $(opts.scroll_selector).data('appear_binded') !== 'undefined' ) {
        process();
        return true;
      };
      return false;
    }
  });
})(jQuery);