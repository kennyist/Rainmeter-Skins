[Rainmeter]
// Click sound, Add // to dissable
LeftMouseUpAction=PLAY #@#click.wav

// Mouse action to open this file of any Alan wake skin - add // to dissable any or all, remove // to enable.
MiddleMouseDownAction=["#@#Veriables.inc"]
//LeftMouseDoubleClickAction=["#@#Veriables.inc"]
//MiddleMouseDoubleClickAction=["#@#Veriables.inc"]

[Variables]

// ---- Weather ----
// 1 = Dissable --- 0 = Enabled
// Weather ID - To get this go here http://www.weather.com/ - Select your country and find your town or closest location E.G 
// http://uk.weather.com/weather/today-Saint-Austell-UKXX0126?fromSearch=true And copy the code bit after the location name E.G
// UKXX0126                                         ^- This -^

weatherID=UKXX0126

// Measure Unit Celsius = M / farenheit = F

weather.Unit=M

// Enable/Dissable weather on minimap

MWDissable=0


//	---- Time ------
// Disable Time showing By dissabling both 24 hour and 12 hour!
// 1 = Dissable --- 0 = Enabled

// Enable/Disable 24 hour clock

24Dissable=1

// Enable/Disable 12 hour clock

12Dissable=0

// Enable/Disable Moving target (Moves with seconds)

SecHandDissable=0

// ---- CPU/RAM/POW meter (health Bar) ------
// WARNING, ONLY 1 CAN BE ENABLED AT ANY TIME!
// 1 = Dissable --- 0 = Enabled

// Enable/Dissable RAM stats bar

RAMDissable=0

// Enable/Dissable CPU Stats bar

CPUDIssable=1

// Enable/Dissable Power Stats bar

POWDissable=1

// ---- Note -----
// 1 = Dissable --- 0 = Enabled

// Enable/Dissable Note

NOTEDissable=0

// To edit the note, Click the target next to it

// ---- FlashLight -----
// WARNING, ONLY 1 CAN BE ENABLED AT ANY TIME!
// 1 = Dissable --- 0 = Enabled

// Enable/Dissable Battery tracking (Laptop only)

BATDissable=0

// Enable/Dissable CPU Tracking

CPUTRKDissable=1

// Enable/Dissable RAM Tracking

RAMTRKDissable=1

// Enable/Dissable Hard Drive space tracking

HDDTRKDissable=1
Drive=g

// ---- GMAIL ------
// This is only stored localy, No one else can see it apart from you!

// Your Gmail name *******@gmail.com (DO NOT INCLUDE @gmail.com)

GmailName=

// Your Gmail Password

GmailPass=


// ---- Media Player ----

// Enter your media player from: http://rainmeter.net/cms/Plugins-NowPlaying#playerlist

MediaPlayer=iTunes

// YOU MUST USE A VALUE FROM THAT PAGE!

// ----- Hard Drive Hud ----
// Removeable and USB drives can be put here too!
// HDD.Drive* = Letter of the harddrive you want on here
// HideDrive* = Hides everything to do with the drive (1 Hides / 0 Shows)
// HideDLabel* = Hides the Drives lable (1 Hides / 0 Shows)

// Drive 1

HDD.Drive1=C
HIDEDRIVE1=0
HIDEDLABEL1=0

// Drive 2

HDD.Drive2=D
HIDEDRIVE2=0
HIDEDLABEL2=0

// Drive 3

HDD.Drive3=E
HIDEDRIVE3=0
HIDEDLABEL3=0


// ---- Server Monitor -----
// Ip and port of the server you wish to monitor - MUST HAVE A PAGE ON www.GAMETRACKER.com
// You can add servers yourself, You will not be added as owner!

IP=68.232.181.41:27015

// WARNING - Join button only work with any Source / Steam works game (Planning to fix this in future updates)

// ---- App launcher ----
// **-ICON= This is where you put the file path to an icon you want (Must have file type E.G icon.PNG)
// **-EXE= This is where you put the file path to the .EXE of the program.
// **-EXE is not only limited to EXE's you can use links on them and system commands
// **-NAME= Name that will show up of the .exe
// There are loads of icons packed with this theme here "Documents\Rainmeter\Skins\AlanWake\@resources\Icons\Token"
// For Firefox or chrome you can make it open to a specific page by adding ( " "www.Example.com ) Directly after, Example of this is L2
// ICONS WILL BE SET TO 32x32px, Large icons will look bad once set to this size! Shrink large ones with a editing tool to stop this happening!
// WARNING .ico FILES do not work well with rainmeter!

L1-ICON=#@#\Icons\Token\Communication+Internet\steam.png
L1-EXE=E:\steam\Steam.exe
L1-NAME=Steam
// --------------------------------
L2-ICON=#@#\Icons\Token\Communication+Internet\Firefox.png
L2-EXE=C:\Program Files (x86)\Mozilla Firefox\Firefox.exe" "www.example.com
L2-NAME=FireFox
// --------------------------------
L3-ICON=#@#\Icons\Token\Communication+Internet\Chrome.png
L3-EXE=C:\Program Files (x86)\Google\Chrome\Application\chrome.exe
L3-NAME=Chrome
// --------------------------------
L4-ICON=#@#\Icons\Token\Adobe\Photoshop.png
L4-EXE=C:\Program Files\Adobe\Adobe Photoshop CS5.1 (64 Bit)\Photoshop.exe
L4-NAME=Photoshop
// --------------------------------
L5-ICON=#@#\Icons\Token\Office\Notepad.png
L5-EXE=C:\Program Files (x86)\Notepad++\notepad++.exe
L5-NAME=NotePad++
// --------------------------------
L6-ICON=#@#\Icons\Token\System+Settings\Wrench.png
L6-EXE=Control.exe
L6-NAME=Control Panel
// --------------------------------
L7-ICON=#@#\Icons\Token\Communication+Internet\Twitter.png
L7-EXE=www.twitter.com
L7-NAME=Twitter
// --------------------------------
L8-ICON=#@#\Icons\Token\Miscellaneous\lock.png
L8-EXE=%windir%\System32\tsdiscon.exe
L8-NAME=Switch User
// --------------------------------

// ---- Steam launcher ----
// **-ICON= This is where you put the file path to an icon you want (Must have file type E.G icon.PNG) 
// **-APPID= This is where you put a games steam APPID, Get this by visiting its store page and copying the number after "app/" on its link.
// **-NAME= Name of the game.
// ICONS WILL BE SET TO 32x32px, Large icons will look bad once set to this size! Shrink large ones with a editing tool to stop this happening!
// WARNING .ico FILES do not work well with rainmeter!

SL1-ICON=#@#\Icons\Steam\AlanWake.jpg
SL1-APPID=108710
SL1-NAME=Alan Wake
// --------------------------------
SL2-ICON=#@#\Icons\Steam\AWAN.jpg
SL2-APPID=202750
SL2-NAME=American Nightmare
// --------------------------------
SL3-ICON=#@#\Icons\Steam\HL2.jpg
SL3-APPID=220
SL3-NAME=Half-Life 2
// --------------------------------
SL4-ICON=#@#\Icons\Steam\TF2.jpg
SL4-APPID=440
SL4-NAME=Team Fortres 2
// --------------------------------
SL5-ICON=#@#\Icons\Steam\P2.Jpg
SL5-APPID=620
SL5-NAME=Portal 2
// --------------------------------
SL6-ICON=#@#\Icons\Steam\OA.jpg
SL6-APPID=33930
SL6-NAME=Arma 2: OA
// --------------------------------
SL7-ICON=#@#\Icons\Steam\DearE.jpg
SL7-APPID=203810
SL7-NAME=Dear Esther
// --------------------------------
SL8-ICON=#@#\Icons\Steam\ME2.jpg
SL8-APPID=24980
SL8-NAME=Mass Effect 2
// --------------------------------

// ---- FONTS ----
// You can change these fonts how you like, You add them like you would to website CSS.

Font=Impact
Font2=Trebuchet MS

// ---- Colours ------

// White Text

CL=FFFFFFFF

// Dark text

CD=FFFFFF99

// Red Text/Bars. Light/Dark

CRL=233,0,0,255
CRD=233,0,0,120

// yellow Text/bars. LIGHT/DARK

CYL=232,215,28,255
CYD=232,215,28,50


// -------------------
// Do Not Edit Below!
// -------------------

LT-DEFAULT=--------