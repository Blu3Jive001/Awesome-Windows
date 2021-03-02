[Player]
Measure=Plugin
Plugin =GPMDPPlugin

[Cover]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Cover
CoverPath=#@#Images\Cover.png

[Track]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Title
Substitute="0":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Artist]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Artist
Substitute="0":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Album]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Album
Substitute="0":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display]

[Progress]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Progress

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Duration]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Duration
Substitute="0":"00:00"

[Position]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Position
Substitute="0":"00:00"

[PlayerState]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=State
IfCondition  =(#CurrentSection#=1)
IfTrueAction =[!SetOption PlayPause "Text" "pause"]     [!UpdateMeter PlayPause][!Redraw]
IfFalseAction=[!SetOption PlayPause "Text" "play_arrow"][!UpdateMeter PlayPause][!Redraw]

DynamicVariables=1