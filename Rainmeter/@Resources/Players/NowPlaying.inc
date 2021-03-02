[Player]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=#Player#
PlayerType=FILE

OnChangeAction=[!UpdateMeasureGroup FileLocation][!UpdateMeter CoverOverArea]

[Cover]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Cover

[Track]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Title
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Artist]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Artist
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Album]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Album
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Progress]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Progress

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Duration]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Duration
Disabled  =1

[Position]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Position
Disabled  =1

[PlayerState]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=State
IfCondition  =(#CurrentSection#=1)
IfTrueAction =[!SetOption PlayPause "Text" "pause"]     [!UpdateMeter PlayPause][!Redraw]
IfFalseAction=[!SetOption PlayPause "Text" "play_arrow"][!UpdateMeter PlayPause][!Redraw]
