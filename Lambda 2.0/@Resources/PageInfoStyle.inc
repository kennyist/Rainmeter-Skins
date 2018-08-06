[rainmeter]
@include=#@#Resources/Variables.inc

; ------- ADVANCED USERS ONLY ----------
; This file contains all the styles for the objects in the Postinfo.ini.
; Editing may cause problems!
; --------------------------------------
 
[background]
solidcolor=#fpBG#
h=480
w=380
x=0
y=0

[BackGround2]
x=5
y=5
h=470
w=370
solidcolor=0,0,0,150

[Postimage]
y=10
X=13
w=354
h=116

[PostText]
y=125
X=15
w=350
h=300
FontSize=8
FontColor=#fWhite#
StringStyle=Bold
ClipString=1
AntiAlias=1

[PostTextBg]
x=13
y=130
h=300
w=354
solidcolor=#PostBG#

[AuthText]
y=440
X=15
FontSize=10
FontColor=#fWhite#
StringStyle=Bold
AntiAlias=1
text=Posted by %1

[CommentsText]
y=455
X=15
FontSize=8
FontColor=#fWhite#
StringStyle=Bold
AntiAlias=1

[DateText]
y=455
X=130
FontSize=8
FontColor=#fWhite#
StringStyle=Bold
AntiAlias=1

[ReadMore]
ImageName=#@#readmore.png
x=265
y=440
LeftMouseUpAction=["#pagelink#"]

[CloseButton]
ImageName=#@#close.png
x=245
y=440
LeftMouseUpAction=!DeactivateConfig "Lambda 2.0\postinfo"



