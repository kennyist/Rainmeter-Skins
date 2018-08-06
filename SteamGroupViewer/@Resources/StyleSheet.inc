[rainmeter]
@include=#@#Variables.inc

; ------- ADVANCED USERS ONLY ----------
; This file contains all the styles for the objects in the menu.ini
; Editing may cause problems!
; --------------------------------------

[backGround]
ImageName=#@#BackGround.png

[overview.bg]
ImageName=#@#overview.png
group=overview

[announ.bg]
ImageName=#@#announ.png
hidden=1
group=announ

[disc.bg]
ImageName=#@#discu.png
hidden=1
group=disc

[admin.bg]
ImageName=#@#admin/admin.png
hidden=#admin#

[chat.bg]
ImageName=#@#chatbg.png

[setting.btn]
ImageName=#@#settingsbtn.png
y=10
x=117
W=25
h=25
LeftMouseUpAction=[!ShowMeterGroup "settings"]

[settings.bg]
ImageName=#@#Settings.png
hidden=1
x=140
y=100
group=settings

[settings.title]
y=7r
x=10r
w=145
h=20
FontSize=12
FontColor=#fBlue#
StringStyle=Bold
ClipString=1
AntiAlias=1
hidden=1
text=Settings:
group=settings

[Settings.refresh.text]
y=28r
x=110r
FontSize=10
FontColor=#fGrey#
AntiAlias=1
hidden=1
StringAlign=center
text=Feed refresh time, In seconds:
group=settings

[settings.refresh.edit]
X=r
Y=20r
FontSize=15
FontColor=255,255,255,255
AntiAlias=1
StringAlign=center
Text=#Refresh#
LeftMouseUpAction=!CommandMeasure "MeasureInput" "ExecuteBatch 1"
hidden=1
group=settings

[Settings.groupid.text]
y=30r
x=r
FontSize=10
FontColor=#fGrey#
AntiAlias=1
hidden=1
StringAlign=center
text=Group ID/Name (Case sensitive):
group=settings

[settings.groupid.edit]
X=r
Y=20r
FontSize=15
FontColor=255,255,255,255
AntiAlias=1
StringAlign=center
Text=#groupID#
LeftMouseUpAction=!CommandMeasure "MeasureInput" "ExecuteBatch 2"
hidden=1
group=settings

[Settings.admin.text]
y=30r
x=r
FontSize=10
FontColor=#fGrey#
AntiAlias=1
hidden=1
StringAlign=center
text=Are you an admin of this group?
group=settings

[Settings.admin.yes]
y=20r
x=-40r
FontSize=14
FontColor=#fWhite#
AntiAlias=1
StringAlign=center
text=yes
hidden=1
group=settings
LeftMouseUpAction=[!WriteKeyValue Variables admin "0" "#@#Variables.inc"][!Refresh *]

[Settings.admin.no]
y=r
x=80r
FontSize=14
FontColor=#fWhite#
AntiAlias=1
hidden=1
StringAlign=center
text=No
group=settings
LeftMouseUpAction=[!WriteKeyValue Variables admin "1" "#@#Variables.inc"][!Refresh *]

[settings.close]
y=27r
x=-60r
FontSize=12
FontColor=#fBlue#
StringStyle=Bold
AntiAlias=1
hidden=1
text=Close
group=settings
LeftMouseUpaction=[!HideMeterGroup "settings"]
 
[Avatar]
y=6
x=13
h=56
w=56
 
[Title]
y=70
x=10
w=145
h=20
FontSize=12
FontColor=#fWhite#
StringStyle=Bold
ClipString=1
AntiAlias=1

[members]
y=100
x=10
FontSize=10
FontColor=#fGrey#
StringStyle=Bold
text=Members:
AntiAlias=1

[members.count]
y=r
x=80
FontSize=10
w=75
h=15
FontColor=#fGrey#
StringStyle=Bold
ClipString=1
AntiAlias=1

[members.online]
y=20r
x=10
FontSize=10
FontColor=#fBlue#
StringStyle=Bold
text=online:
AntiAlias=1

[members.online.count]
y=r
x=80
FontSize=10
w=75
h=15
FontColor=#fBlue#
StringStyle=Bold
ClipString=1
AntiAlias=1

[members.ingame]
y=20r
x=10
FontSize=10
FontColor=#fGreen#
StringStyle=Bold
text=In game:
AntiAlias=1

[members.ingame.count]
y=r
x=80
FontSize=10
w=75
h=15
FontColor=#fGreen#
StringStyle=Bold
ClipString=1
AntiAlias=1

[chat.count]
y=174
x=10
FontSize=10
w=25
h=15
FontColor=#fDGrey#
StringStyle=Bold
ClipString=1
AntiAlias=1

[chat]
y=2r
x=35
FontSize=8
w=75
h=15
FontColor=#fDGrey#
StringStyle=Bold
ClipString=1
text=in chat
AntiAlias=1

[chat.link]
y=-7r
x=80
h=25
w=65
SolidColor=#debugbtn#
LeftMouseUpAction=["[mSC.users.chatlink]"]

[admin.title]
y=205
x=10
FontSize=10
FontColor=#fBlue#
StringStyle=Bold
text=Admin Tools:
AntiAlias=1
hidden=#admin#

[admin.edit]
y=225
x=10
ImageName=#@#/admin/edit.png
hidden=#admin#
LeftMouseUpAction=["http://steamcommunity.com/groups/#groupID#/edit"]

[admin.announ]
y=2r
x=25r
ImageName=#@#/admin/announ.png
hidden=#admin#
LeftMouseUpAction=["http://steamcommunity.com/groups/#groupID#/announcements/create"]

[admin.event]
y=-2r
x=25r
ImageName=#@#/admin/event.png
hidden=#admin#
LeftMouseUpAction=["http://steamcommunity.com/groups/#groupID#/eventEdit"]

[admin.groupp]
y=r
x=25r
ImageName=#@#/admin/groupp.png
hidden=#admin#
LeftMouseUpAction=["http://steamcommunity.com/groups/#groupID#/permissionsEdit"]

[admin.hist]
y=r
x=25r
ImageName=#@#/admin/history.png
hidden=#admin#
LeftMouseUpAction=["http://steamcommunity.com/groups/#groupID#/history"]

[admin.bans]
y=20r
x=10
FontSize=10
FontColor=#fGrey#
StringStyle=Bold
text=Manage Bans:
AntiAlias=1
hidden=#admin#

[admin.bans.chat]
y=14r
x=20
FontSize=9
FontColor=#fGrey#
text=Chat
AntiAlias=1
hidden=#admin#
LeftMouseUpAction=["http://steamcommunity.com/groups/#groupID#/chatBanManage"]

[admin.bans.forum]
y=r
x=35r
FontSize=9
FontColor=#fGrey#
text=-  Forum
AntiAlias=1
hidden=#admin#
LeftMouseUpAction=["http://steamcommunity.com/groups/#groupID#/forumBanManage"]

[Avatar.1]
y=#avy#
x=#avx#
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.2]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.3]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.4]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.5]
y=-35r
x=#avx#
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.6]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.7]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.8]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.9]
y=-35r
x=#avx#
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.10]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.11]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.12]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.13]
y=-35r
x=#avx#
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.14]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.15]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.16]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.17]
y=-35r
x=#avx#
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.18]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.19]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[Avatar.20]
y=r
x=#avsize#r
h=#avsize#
w=#avsize#
ImageAlpha=#avoct#

[overview.btn]
ImageName=#@#btnoverview
y=14
x=155
LeftMouseUpAction=[!HideMeter "announ.btn.s"][!showMeter "overview.btn.s"][!HideMeter "disc.btn.s"][!showMeterGroup "overview"][!HideMeterGroup "announ"][!HideMeterGroup "disc"]

[overview.btn.s]
ImageName=#@#btnoverviewS
y=-7r
x=r

[announ.btn]
ImageName=#@#btnannoun
y=14
x=80r
LeftMouseUpAction=[!HideMeter "overview.btn.s"][!HideMeter "disc.btn.s"][!showMeter "announ.btn.s"][!HideMeterGroup "overview"][!showMeterGroup "announ"][!HideMeterGroup "disc"]

[announ.btn.s]
ImageName=#@#btnannounS
y=-7r
x=r
hidden=1

[disc.btn]
ImageName=#@#btndisc
y=14
x=114r
LeftMouseUpAction=[!HideMeter "overview.btn.s"][!HideMeter "announ.btn.s"][!showMeter "disc.btn.s"][!HideMeterGroup "overview"][!HideMeterGroup "announ"][!ShowMeterGroup "disc"]

[disc.btn.s]
ImageName=#@#btndiscS
y=-7r
x=r
hidden=1

[overview.title]
y=60
x=155
FontSize=8
FontColor=#fDGrey#
StringStyle=Bold
text=About %1
AntiAlias=1
Group=overview

[overview.summary]
y=15r
x=r
FontSize=8
w=335
h=197
FontColor=#fGrey#
StringStyle=Bold
ClipString=1
AntiAlias=1
Group=overview

[announ.1.title]
y=60
x=155
FontSize=10
w=330
h=15
FontColor=#fBlue#
StringStyle=Bold
ClipString=1
AntiAlias=1
Group=announ
LeftMouseUpAction=["[mSC.announc1.Link]"]
hidden=1

[announ.1.date]
y=15r
x=r
FontSize=8
w=330
h=12
FontColor=#fGrey#
ClipString=1
AntiAlias=1
text=%1 %2 - %3
Group=announ
hidden=1

[announ.1.devider]
LineColor=#fDGrey#
LineWidth=0.1
X=30r
Y=13r
W=250
H=2
Group=announ
hidden=1

[announ.1.info]
y=4r
x=155
FontSize=9
w=330
h=70
FontColor=#fGrey#
ClipString=1
AntiAlias=1
Group=announ
hidden=1

[announ.2.title]
y=170
x=155
FontSize=10
w=330
h=15
FontColor=#fBlue#
StringStyle=Bold
ClipString=1
AntiAlias=1
Group=announ
hidden=1
LeftMouseUpAction=["[mSC.announc2.Link]"]

[announ.2.date]
y=15r
x=r
FontSize=8
w=330
h=12
FontColor=#fGrey#
ClipString=1
AntiAlias=1
text=%1 %2 - %3
Group=announ
hidden=1

[announ.2.devider]
LineColor=#fDGrey#
LineWidth=0.1
X=30r
Y=13r
W=250
H=2
Group=announ
hidden=1

[announ.2.info]
y=4r
x=155
FontSize=9
w=330
h=70
FontColor=#fGrey#
ClipString=1
AntiAlias=1
Group=announ
hidden=1

[disc.1.title]
y=59
x=190
FontSize=10
w=255
h=20
FontColor=#fBlue#
ClipString=1
AntiAlias=1
Group=disc
LeftMouseUpAction=["[mSC.Disc1.Link]"]
hidden=1

[disc.1.Comments]
y=12r
x=265r
FontSize=10
FontColor=#fGrey#
StringAlign=right
StringStyle=Bold
AntiAlias=1
text=%1
Group=disc
hidden=1

[disc.1.OP]
y=13r
x=190
FontSize=9
w=255
h=15
FontColor=#fGrey#
ClipString=1
AntiAlias=1
text=%1 - %2
Group=disc
hidden=1

[disc.2.title]
y=113
x=190
FontSize=10
w=255
h=15
FontColor=#fBlue#
ClipString=1
AntiAlias=1
Group=disc
LeftMouseUpAction=["[mSC.Disc2.Link]"]
hidden=1

[disc.2.Comments]
y=12r
x=265r
FontSize=10
FontColor=#fGrey#
StringAlign=right
StringStyle=Bold
AntiAlias=1
text=%1
Group=disc
hidden=1

[disc.2.OP]
y=13r
x=190
FontSize=9
w=255
h=15
FontColor=#fGrey#
ClipString=1
AntiAlias=1
text=%1 - %2
Group=disc
hidden=1

[disc.3.title]
y=168
x=190
FontSize=10
w=255
h=15
FontColor=#fBlue#
ClipString=1
AntiAlias=1
Group=disc
LeftMouseUpAction=["[mSC.Disc3.Link]"]
hidden=1

[disc.3.Comments]
y=12r
x=265r
FontSize=10
FontColor=#fGrey#
StringAlign=right
StringStyle=Bold
AntiAlias=1
text=%1
Group=disc
hidden=1

[disc.3.OP]
y=13r
x=190
FontSize=9
w=255
h=15
FontColor=#fGrey#
ClipString=1
AntiAlias=1
text=%1 - %2
Group=disc
hidden=1

[disc.4.title]
y=230
x=190
FontSize=10
w=255
h=15
FontColor=#fBlue#
ClipString=1
AntiAlias=1
Group=disc
LeftMouseUpAction=["[mSC.Disc4.Link]"]
hidden=1

[disc.4.Comments]
y=12r
x=265r
FontSize=10
FontColor=#fGrey#
StringAlign=right
StringStyle=Bold
AntiAlias=1
text=%1
Group=disc
hidden=1

[disc.4.OP]
y=13r
x=190
FontSize=9
w=255
h=15
FontColor=#fGrey#
ClipString=1
AntiAlias=1
text=%1 - %2
Group=disc
hidden=1

; comments

[comment.namedate.1]
y=293
x=155
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
AntiAlias=1
text=%1 - %2
group=com1

[comment.info.1]
y=12r
x=155
w=330
h=40
ClipString=1
FontSize=8
FontColor=#fGrey#
AntiAlias=1
group=com1

[comments.prev.1]
y=345
x=155
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
text=< prev
leftMouseUpAction=[!HideMeterGroup "com1"][!ShowMeterGroup "com2"]
AntiAlias=1
group=com1

[comments.next.1]
y=345
x=450
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
text=next >
leftMouseUpAction=[!HideMeterGroup "com1"][!showMetergroup "com5"]
AntiAlias=1
group=com1

[comment.namedate.2]
y=293
x=155
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
AntiAlias=1
text=%1 - %2
group=com2
hidden=1

[comment.info.2]
y=12r
x=155
w=330
h=40
ClipString=1
FontSize=8
FontColor=#fGrey#
AntiAlias=1
group=com2
hidden=1

[comments.prev.2]
y=345
x=155
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
text=< prev
leftMouseUpAction=[!HideMeterGroup "com2"][!showMetergroup "com3"]
AntiAlias=1
group=com2
hidden=1

[comments.next.2]
y=345
x=450
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
text=next >
leftMouseUpAction=[!HideMeterGroup "com2"][!showMetergroup "com1"]
AntiAlias=1
group=com2
hidden=1

[comment.namedate.3]
y=293
x=155
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
AntiAlias=1
text=%1 - %2
group=com3
hidden=1

[comment.info.3]
y=12r
x=155
w=330
h=40
ClipString=1
FontSize=8
FontColor=#fGrey#
AntiAlias=1
group=com3
hidden=1

[comments.prev.3]
y=345
x=155
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
text=< prev
leftMouseUpAction=[!HideMeterGroup "com3"][!showMetergroup "com4"]
AntiAlias=1
group=com3
hidden=1

[comments.next.3]
y=345
x=450
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
text=next >
leftMouseUpAction=[!HideMeterGroup "com3"][!showMetergroup "com2"]
AntiAlias=1
group=com3
hidden=1

[comment.namedate.4]
y=293
x=155
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
AntiAlias=1
text=%1 - %2
group=com4
hidden=1

[comment.info.4]
y=12r
x=155
w=330
h=40
ClipString=1
FontSize=8
FontColor=#fGrey#
AntiAlias=1
group=com4
hidden=1

[comments.prev.4]
y=345
x=155
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
text=< prev
leftMouseUpAction=[!HideMeterGroup "com4"][!showMetergroup "com5"]
AntiAlias=1
group=com4
hidden=1

[comments.next.4]
y=345
x=450
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
text=next >
leftMouseUpAction=[!HideMeterGroup "com4"][!showMetergroup "com3"]
AntiAlias=1
group=com4
hidden=1

[comment.namedate.5]
y=293
x=155
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
AntiAlias=1
text=%1 - %2
group=com5
hidden=1

[comment.info.5]
y=12r
x=155
w=330
h=40
ClipString=1
FontSize=8
FontColor=#fGrey#
AntiAlias=1
group=com5
hidden=1

[comments.prev.5]
y=345
x=155
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
text=< prev
leftMouseUpAction=[!HideMeterGroup "com5"][!showMetergroup "com1"]
AntiAlias=1
group=com5
hidden=1

[comments.next.5]
y=345
x=450
FontSize=8
FontColor=#fBlue#
StringStyle=Bold
text=next >
leftMouseUpAction=[!HideMeterGroup "com5"][!showMetergroup "com4"]
AntiAlias=1
group=com5
hidden=1