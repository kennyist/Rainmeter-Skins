[rainmeter]
@include=#@#Resources/Variables.inc

; ------- ADVANCED USERS ONLY ----------
; This file contains all the styles for the objects in the menu.ini
; Editing may cause problems!
; --------------------------------------
 
[twit.post]
y=35
X=15
w=250
h=200
FontSize=8
FontColor=#fWhite#
StringStyle=Bold
ClipString=1
AntiAlias=1

[headerImage1]
y=170
X=15
w=304
h=100
LeftMouseUpAction=[!WriteKeyValue Variables pagelink [mFP.link.1] "#@#Variables.inc"][!Refresh "Lambda 2.0\postinfo"][!ActivateConfig "Lambda 2.0\postinfo"]

[headerImage2]
y=280
X=15
w=304
h=100
LeftMouseUpAction=[!WriteKeyValue Variables pagelink [mFP.link.2] "#@#Variables.inc"][!Refresh "Lambda 2.0\postinfo"][!ActivateConfig "Lambda 2.0\postinfo"]