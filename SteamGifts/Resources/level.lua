PROPERTIES =
{

}
function Initialize()

   msXP = SKIN:GetValue('Background')
   
end -- function Initialize
   
function Update()

   valXP = msXP:GetValue()

   if valXP < 50 then
      SKIN:Bang('!SetOption Level1 Text \"Level: 1\"')
	  SKIN:Bang('!SetOption XPmeterBG2 ValueReminder \"50\"')
	  SKIN:Bang('!SetOption XpLeft Formula \"(50 - XpSystem)\"')
   elseif valXP < 100 then
      SKIN:Bang('!SetOption Level1 Text \"Level: 2\"')
	  SKIN:Bang('!SetOption XPmeterBG2 ValueReminder \"100\"')
	  SKIN:Bang('!SetOption XpLeft Formula \"(100 - XpSystem)\"')
   elseif valXP < 200 then
      SKIN:Bang('!SetOption Level1 Text \"Level: 3\"')
	  SKIN:Bang('!SetOption XPmeterBG2 ValueReminder \"200\"')
	  SKIN:Bang('!SetOption XpLeft Formula \"(200 - XpSystem)\"')
   elseif valXP < 400 then
      SKIN:Bang('!SetOption Level1 Text \"Level: 4\"')
	  SKIN:Bang('!SetOption XPmeterBG2 ValueReminder \"400\"')
	  SKIN:Bang('!SetOption XpLeft Formula \"(400 - XpSystem)\"')
   elseif valXP < 600 then
      SKIN:Bang('!SetOption Level1 Text \"Level: 5\"')
	  SKIN:Bang('!SetOption XPmeterBG2 ValueReminder \"600\"')
	  SKIN:Bang('!SetOption XpLeft Formula \"(600 - XpSystem)\"')
   elseif valXP < 800 then
      SKIN:Bang('!SetOption Level1 Text \"Level: 6\"')
	  SKIN:Bang('!SetOption XPmeterBG2 ValueReminder \"800\"')
	  SKIN:Bang('!SetOption XpLeft Formula \"(800 - XpSystem)\"')
   elseif valXP < 1000 then
      SKIN:Bang('!SetOption Level1 Text \"Level: 7\"')
	  SKIN:Bang('!SetOption XPmeterBG2 ValueReminder \"1000\"')
	  SKIN:Bang('!SetOption XpLeft Formula \"(1000 - XpSystem)\"')
   elseif valXP < 1500 then
      SKIN:Bang('!SetOption Level1 Text \"Level: 8\"')
	  SKIN:Bang('!SetOption XPmeterBG2 ValueReminder \"1500\"')
	  SKIN:Bang('!SetOption XpLeft Formula \"(1500 - XpSystem)\"')
   elseif valXP < 2000 then
      SKIN:Bang('!SetOption Level1 Text \"Level: 9\"')
	  SKIN:Bang('!SetOption XPmeterBG2 ValueReminder \"2000\"')
	  SKIN:Bang('!SetOption XpLeft Formula \"(2000 - XpSystem)\"')
   elseif valXP < 3000 then
      SKIN:Bang('!SetOption Level1 Text \"Level: 10\"')
	  SKIN:Bang('!SetOption XPmeterBG2 ValueReminder \"3000\"')
	  SKIN:Bang('!SetOption XpLeft Formula \"(3000 - XpSystem)\"')
   elseif valXP < 5000 then
      SKIN:Bang('!SetOption Level1 Text \"Level: 11\"')
	  SKIN:Bang('!SetOption XPmeterBG2 ValueReminder \"5000\"')
	  SKIN:Bang('!SetOption XpLeft Formula \"(5000 - XpSystem)\"')
   elseif valXP < 50000 then
      SKIN:Bang('!SetOption Level1 Text \"OverLord!\"')
	  SKIN:Bang('!SetOption XPmeterBG2 ValueReminder \"50000\"')
	  SKIN:Bang('!SetOption XpLeft Formula \"(50000 - XpSystem)\"')
   else
      SKIN:Bang('!SetOption Level1 Text \"NA\"')
   end
         
end -- function Update