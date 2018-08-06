[Variables]

; The ammount of time before the feed reloads, In seconds.
Refresh=600

; Your group id from the end of the group link, http://steamcommunity.com/groups/!!this part!! - Case sensitive!
groupID=pixelvisionskin

; Display admin tools ( 0 on, 1 off), They will only work if you are admin of that group still!
admin=0

;---------------------------------------
; --- Advanced users edit only below ---
;---------------------------------------

; ------ Urls -------

FpGet=header_top">.*<img src="(.*)".*grouppage_header_name".*\n.*(\w.*)<.*_group_summary">.*\n.*(.*)</div.*topic_details">.*count" title="(.*)">.*lastpost">.*\n.*(\w.*)<.*_name ">.*discussions/(.*)".*>.*\n.*(\w.*)<.*op">.*\n.*(\w.*)<.*topic_details">.*count" title="(.*)">.*lastpost">.*\n.*(\w.*)<.*_name ">.*discussions/(.*)".*>.*\n.*(\w.*)<.*op">.*\n.*(\w.*)<.*topic_details">.*count" title="(.*)">.*lastpost">.*\n.*(\w.*)<.*_name ">.*discussions/(.*)".*>.*\n.*(\w.*)<.*op">.*\n.*(\w.*)<.*topic_details">.*count" title="(.*)">.*lastpost">.*\n.*(\w.*)<.*_name ">.*discussions/(.*)".*>.*\n.*(\w.*)<.*op">.*\n.*(\w.*)<.*announcement_content">.*announcements/detail/(.*)">(.*)<.*announcement_footer">.*\n.*(\w.*)\n.*(\w.*)\n.*(\w.*)<.*body_links">.*\n.*(\w.*)</p>.*announcement_content">.*announcements/detail/(.*)">(.*)<.*announcement_footer">.*\n.*(\w.*)\n.*(\w.*)\n.*(\w.*)<.*body_links.*>.*\n.*(\w.*)</p.*comment_author.*href=.*>(.*)<.*_timestamp">.*\n.*(.*)<.*comment_content_.*>.*\n(.*)<.*comment_author.*href=.*>(.*)<.*_timestamp">.*\n.*(\w.*)<.*comment_content_.*>.*\n(.*)<.*comment_author.*href=.*>(.*)<.*_timestamp">.*\n.*(\w.*)<.*comment_content_.*>.*\n(.*)<.*comment_author.*href=.*>(.*)<.*_timestamp">.*\n.*(\w.*)<.*comment_content_.*>.*\n(.*)<.*comment_author.*href=.*>(.*)<.*_timestamp">.*\n.*(\w.*)<.*comment_content_.*>.*\n(.*)<.*class="count ">(.*)<.*ingame.*class="count ">(.*)<.*online.*class="count ">(.*)<.*joinchat_bg.*window.location='(.*)'.*joinchat_membercount.*count">(.*)<
announceLink=http://steamcommunity.com/groups/#groupID##announcements/detail/
groupLink=http://steamcommunity.com/groups/#groupID#/
AtGet=(?siU)(?(?=.*member_tile).*src="(.*)")

announsubstit="<b>":"","b>":"","<i>":"","</i>":"","</b>":"","<br>":"","</br>":"",'<a.*="':'',"<ul.*>":" ","</li>":" ","</a>":" ","</":" "
sumsubsti="<br>":"                 ","</br>":" ","</p>":""
comsubsti="<b>":"","b>":"","<i>":"","</i>":"","</b>":"","<br>":"","</br>":"","<ul.*>":" ","</li>":" ","</a>":" ","</":" ",'<a.*href="':''

avoct=80
avsize=35
avx=5
avy=324

; ------ font Colours ------
; To edit you can use Hexidecimal and RGBA colour codes

fBlue=98,167,227,255
fGreen=139,197,63,255
fGrey=135,154,154,255
fDGrey=89,89,89,255
fWhite=255,255,255,255

; ------ Style colours ------

debugbtn=0,0,0,1


; ------ Keep ------

; header_top">.*<img src="(.*)".*grouppage_header_name".*\n.*(\w.*)<.*_group_summary">.*\n.*(\w.*)<.*topic_details">.*count" title="(.*)">.*lastpost">.*\n.*(\w.*)<.*_name ">.*discussions/(.*)".*>.*\n.*(\w.*)<.*op">.*\n.*(\w.*)<.*topic_details">.*count" title="(.*)">.*lastpost">.*\n.*(\w.*)<.*_name ">.*discussions/(.*)".*>.*\n.*(\w.*)<.*op">.*\n.*(\w.*)<.*topic_details">.*count" title="(.*)">.*lastpost">.*\n.*(\w.*)<.*_name ">.*discussions/(.*)".*>.*\n.*(\w.*)<.*op">.*\n.*(\w.*)<.*topic_details">.*count" title="(.*)">.*lastpost">.*\n.*(\w.*)<.*_name ">.*discussions/(.*)".*>.*\n.*(\w.*)<.*op">.*\n.*(\w.*)<.*announcement_content">.*announcements/detail/(.*)">(.*)<.*announcement_footer">.*\n.*(\w.*)\n.*(\w.*)\n.*(\w.*)<.*body_links">.*\n.*(\w.*)</p>.*announcement_content">.*announcements/detail/(.*)">(.*)<.*announcement_footer">.*\n.*(\w.*)\n.*(\w.*)\n.*(\w.*)<.*body_links.*>.*\n.*(\w.*)</p.*comment_author.*href=.*>(.*)<.*_timestamp">.*\n.*(\w.*)<.*comment_content_.*>.*\n.*(\w.*)<.*comment_author.*href=.*>(.*)<.*_timestamp">.*\n.*(\w.*)<.*comment_content_.*>.*\n.*(\w.*)<.*comment_author.*href=.*>(.*)<.*_timestamp">.*\n.*(\w.*)<.*comment_content_.*>.*\n.*(\w.*)<.*comment_author.*href=.*>(.*)<.*_timestamp">.*\n.*(\w.*)<.*comment_content_.*>.*\n.*(\w.*)<.*comment_author.*href=.*>(.*)<.*_timestamp">.*\n.*(\w.*)<.*comment_content_.*>.*\n.*(\w.*)<.*class="count ">(.*)<.*ingame.*class="count ">(.*)<.*online.*class="count ">(.*)<.*joinchat_bg.*window.location='(.*)'.*joinchat_membercount.*count">(.*)<
