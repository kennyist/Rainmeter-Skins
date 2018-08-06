// EDIT THESE BELOW!

[Rainmeter]
// Click sound, Add // to dissable
LeftMouseUpAction=PLAY #@#click.wav

[Variables]
subforum=2
// The available inputs for this section are:
// 2 = Alan wake forum
// 4 = General Discussion
// 6 = Other Gaming
// 7 = Media Discussion
// 9 = Information Desk
// 23 = Max Payne Forum
// 28 = Death Rally Forum
// 29 = Alan wake gameplay discussion
// 30 = Alan wake Help and issues
// 31 = Alan Wake's American nightmare forum
// WARNING - REMEDYS RSS FEEDS ARNT ALL UP TO DATE OR WORKING PROPERLY (maybe set to do that on purpose) SOME MAY NOT WORK YET - I Have asked about it!

// ---- Fonts --------
// Change to fonts you want to use, Some fonts may cause problems so keep that in mind!
// I Could not distribute the font used in Alan wake that i use for the images in here as its a pay for one, If you happen to have it, it can be used on here!

Font=Impact
// You add fonts like you would in CSS for websites!
Font2=Trebuchet MS

// ------------
// DO NOT EDIT Below, Unless you know what you are doing!
// ------------

// ---- RegExp -------

url=http://community.remedygames.com/external.php?type=RSS2&forumids=
get=<item>.*<title>(.*)</title>.*<link>(.*)</link>.*<pubDate>(.*)</pubDate>.*<description>(.*)</description>.*<dc:creator>(.*)</dc:creator>.*

// ---- Colours ------

BG=0,0,0,120
CL=FFFFFFFF
CD=FFFFFF99



