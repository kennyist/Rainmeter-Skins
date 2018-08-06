[Variables]

; The ammount of time before the twitter feed reloads, In seconds.
twitRefresh=600

; The ammount of time before the front page feed reloads, In seconds.
fpupdate=12000



;---------------------------------------
; --- Advanced users edit only below ---
;---------------------------------------

; ------ Urls -------

pagelink=http://lambdageneration.com/posts/in-under-two-days-9-of-team-fortress-2s-oldest-hats-will-be-permanently-retired/
fpget=<div class="postfeatureuimage">.*<img src="(.*)" width="578" height="190" alt="(.*)" /></a></div>.*<h1><a href="(.*)" rel="bookmark" title=".*">.*<span class="post-meta-info">(.*)&middot; By <a href=".*" title=".*">(.*)</a> &middot; <strong><a href=".*" title=".*">(.*)</a></strong>.*
twitGet=<item>.*<description>(.*)</description>.*<pubDate>(.*),(.*)[0-9]{4}</pubDate>.*<link>(.*)</link>
twitUrl=https://api.twitter.com/1/statuses/user_timeline.rss?screen_name=LambdaGen
lambSearch=http://lambdageneration.com/?s=
pageGet=<div class="postfeatureuimage">.*<img src="(.*)".*<span class="post-meta-info">(.*)<a href=".*" title=".*">(.*)</a> &middot; <strong><a href=".*" title=".*">(.*)</a>.*<div class="post-entry">(.*)<span

; ------ font Colours ------
; To edit you can use Hexidecimal and RGBA colour codes

fWhite=255,255,255,255
fBlack=0,0,0,255
fLGrey=187,187,187,255
fDGrey=51,51,51,255

; ----- Style Colours -------
; Menu Syles
mainBG=0,0,0,120
SearchC=0,0,0,200

; Page Info styles
fpBG=0,0,0,120
PostBG=0,0,0,200
