[Variables]
updateSO=150
updateS=3600

// EDIT THIS PART FOR YOUR PLAYER -
PLAYER=Winamp
//Edit PLAYER= above. A list of valid values is available from: http://rainmeter.net/cms/Plugins-NowPlaying_beta#playerlist

logo=#SKINSPATH#\EpicRadio\Resources\ERlogo.png
Play=#SKINSPATH#\EpicRadio\Resources\Plays.png
cbg=#SKINSPATH#\EpicRadio\Resources\cbg.png
bg=#SKINSPATH#\EpicRadio\Resources\bg.png
Playm=#SKINSPATH#\EpicRadio\Resources\Play.png
Pausem=#SKINSPATH#\EpicRadio\Resources\Pause.png
Next=#SKINSPATH#\EpicRadio\Resources\Next.png
Prev=#SKINSPATH#\EpicRadio\Resources\Prev.png
up=#SKINSPATH#\EpicRadio\Resources\up.png
down=#SKINSPATH#\EpicRadio\Resources\Down.png
NextB=#SKINSPATH#\EpicRadio\Resources\NextB.png
PrevB=#SKINSPATH#\EpicRadio\Resources\PrevB.png
OptionsBG=#SKINSPATH#\EpicRadio\Resources\optionsBG.png
Def=#SKINSPATH#\EpicRadio\Resources\defualt.png
itunes=#SKINSPATH#\EpicRadio\Resources\ITunes.png
winamp=#SKINSPATH#\EpicRadio\Resources\Winamp.png
AMP=#SKINSPATH#\EpicRadio\Resources\AIMP.png
WMP=#SKINSPATH#\EpicRadio\Resources\wmp.png
VLC=#SKINSPATH#\EpicRadio\Resources\vlc.png
Spotify=#SKINSPATH#\EpicRadio\Resources\Spotify.png
file=#SKINSPATH#\EpicRadio\Resources\file.png
close=#SKINSPATH#\EpicRadio\Resources\close.png
settings=#SKINSPATH#\EpicRadio\Resources\settings.png
Rating=#SKINSPATH#\EpicRadio\Resources\Rating.png
MMP=#SKINSPATH#\EpicRadio\Resources\MMP.png
Zune=#SKINSPATH#\EpicRadio\Resources\Zune.png

cBlack=0,0,0,120
cWhite=255,2555,255,255
cText=25,25,25,255
cOrange=228,76,15,255

SERVERGET=.*<tr class="odd">.*<a href="(.*)" title="(.*)">.*<td class="center">(.*)</td>.*<td class="center">(.*)</td>.*<td class="center">(.*)</td>
SERVERGET2=.*<tr class="even">.*<a href="(.*)" title="(.*)">.*<td class="center">(.*)</td>.*<td class="center">(.*)</td>.*<td class="center">(.*)</td>
TTGET=.*<div class="timetable">.*<div class="time">(.*)</div>.*<dd>.*\n.*(\w.*)\n.*</dd>.*<dd>.*\n.*(\w.*)\n.*</dd>.*<p>.*\n.*(\w.*)\n.*</p>
NPGET=<dt>Now Playing:</dt>.*<a href="/listen" id="currenttrack" title="(.*)">.*</a>.*<dd id="currentshow">.*\n.*(\w.*)\n.*</dd>
TTDN=<div id="content">.*<h1>Timetable ::(.*)</h1>.*<div class="timetablenav">.*<a class="next" href="(.*)">Next</a>.*
TTP=<a class="prev" href="(.*)">Previous</a>
