
; ----------------------------------------- Music 

[SongDisplay]
InlineSetting =Face    | #Font#
InlineSetting2=Size    | (#S#*10)
InlineSetting3=Color   | #ColorFG1#
InlineSetting4=Weight  | 500
InlineSetting5=Stretch | 3
InlineSetting6=Case    | Lower
UpdateDivider =-1
ClipString=1
Antialias =1
X=(#S#*(#SkinH#+10))
W=(#S#*(#SkinW#-#SkinH#-#P#-20))

[Controls]
Group=Controls
DynamicVariables=1
InlineSetting =Face    | Material Icons
InlineSetting2=Size    | (#S#*18)
InlineSetting3=Color   | #ColorFG2#,((Sin([Loop1]/100*PI/2))*255)
UpdateDivider =-1
StringAlign=CenterCenter
Antialias  =1
Y=(#S#*(#SkinH#/2))
H=(#S#*30)
W=(#S#*30)

; ----------------------------------------- Processes

[Process]
MeasureName=Index#CurrentSection#
InlineSetting =Face    | #Font#
InlineSetting2=Size    | (#S#*10)
InlineSetting3=Color   | #ColorFG1#
InlineSetting4=Weight  | 500
InlineSetting5=Stretch | 3
InlineSetting6=Case    | Lower
UpdateDivider =-1
ClipString =1
Antialias  =1
Padding    =(#S#*5),0,0,0
X=(#S#*#P#)
Y=r
W=(#S#*(#SkinW#-(#P#*2)-45))
H=(#S#*15)

[ProcessPercentage]
MeasureName=Index#CurrentSection#
InlineSetting =Face    | #Font#
InlineSetting2=Size    | (#S#*10)
InlineSetting3=Color   | #ColorFG1#
InlineSetting4=Weight  | 500
InlineSetting5=Stretch | 3
InlineSetting6=Case    | Lower
UpdateDivider =-1
StringAlign=RightTop
ClipString =1
Antialias  =1
Padding    =0,0,(#S#*5),0
Text       =%1%
X=(#S#*(#SkinW#-#P#))
Y=r
W=(#S#*30)
H=(#S#*15)

[ProcessBG]
Shape=Rectangle 0,0,(#SkinW#-(#P#*2)),15,4 | Scale #S#,#S#,0,0 | StrokeWidth 0 | FillColor #ColorBG2#
DynamicVariables=1
UpdateDivider   =-1
X=(#S#*#P#)
Y=(#S#*(#SkinH#-(#P#*2)-90)/6)R

; ----------------------------------------- Color Picker

[ColorLabel]
InlineSetting =Face    | #Font#
InlineSetting2=Size    | (#S#*10)
InlineSetting3=Color   | #ColorFG1#
InlineSetting4=Weight  | 500
InlineSetting5=Stretch | 3
InlineSetting6=Case    | Lower
InlineSetting7=Weight  | 700
InlinePattern7=Red|Green|Blue
StringAlign=CenterCenter
ClipString =1
Antialias  =1
X=(#S#*(#SkinW#/2))
Y=(#S#*((#SkinH#*0.7-(#P#*3)-40)/3))R
W=(#S#*(#SkinW#-(#P#*1.5)))
H=(#S#*15)

; ----------------------------------------- Weather

[WeatherString]
InlineSetting =Face    | #Font#
InlineSetting2=Size    | (#S#*10)
InlineSetting3=Color   | #ColorFG1#
InlineSetting4=Weight  | 500
InlineSetting5=Stretch | 3
InlineSetting6=Case    | Lower
ClipString=1
Antialias =1
W=(#S#*(#SkinW#-(#P#*2)-10))

; ----------------------------------------- Power Menu

[PowerString]
InlineSetting =Face    | #Font#
InlineSetting2=Size    | (#S#*10)
InlineSetting3=Color   | #ColorFG1#
InlineSetting4=Weight  | 500
InlineSetting5=Stretch | 3
InlineSetting6=Case    | Lower
Antialias  =1
Text=#CurrentSection#
Y   =(#S#*(#SkinH#/2))

; ----------------------------------------- Settings Menu

[SettingLabel]
InlineSetting =Face    | #Font#
InlineSetting2=Size    | (#S#*12)
InlineSetting3=Color   | #ColorFG1#
InlineSetting4=Weight  | 500
InlineSetting5=Stretch | 3
StringAlign=LeftTop
Antialias  =1
X=(#S#*#P#)
Y=(#S#*10)R

[MusicLabel]
InlineSetting =Face    | #Font#
InlineSetting2=Size    | (#S#*12)
InlineSetting3=Color   | #ColorFG1#
InlineSetting4=Weight  | 500
InlineSetting5=Stretch | 3
StringAlign=LeftTop
Antialias  =1
Padding    =(#S#*3),(#S#*3),(#S#*3),(#S#*3)
Text=#CurrentSection#
X   =(#S#*#P#)R
Y   =(#S#*(#P#+117))

MouseOverAction  =[!SetOption #CurrentSection# "SolidColor" "#ColorFG2#,50"][!UpdateMeter #CurrentSection#][!Redraw]
MouseLeaveAction =[!SetOption #CurrentSection# "SolidColor" "#ColorFG2#,00"][!UpdateMeter #CurrentSection#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables "Player" "#CurrentSection#" "#@#Variables.inc"][!WriteKeyValue Variables "Plugin" "NowPlaying" "#@#Variables.inc"][!WriteKeyValue Variables "Player" "#CurrentSection#"][!Refresh "#RootConfig#\Music"][!Refresh]
