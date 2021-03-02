[Player]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Cover

[Cover]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Cover
CoverPath =#@#Images\Cover.png

[Track]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Title
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Artist]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Artist
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Album]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Album
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Progress]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Progress

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Duration]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Duration

[Position]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Position

[PlayerState]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=State
IfCondition  =(#CurrentSection#=1)
IfTrueAction =[!SetOption PlayPause "Text" "pause"]     [!UpdateMeter PlayPause][!Redraw]
IfFalseAction=[!SetOption PlayPause "Text" "play_arrow"][!UpdateMeter PlayPause][!Redraw]

DynamicVariables=1