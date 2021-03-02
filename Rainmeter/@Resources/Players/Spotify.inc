[Player]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =Playing

[Cover]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =AlbumArt
CoverPath=#@#Images\Cover.png

[Track]
Measure   =Plugin
Plugin    =SpotifyPlugin
Type      =TrackName
Substitute="0":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Album]
Measure   =Plugin
Plugin    =SpotifyPlugin
Type      =AlbumName
Substitute="0":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Artist]
Measure   =Plugin
Plugin    =SpotifyPlugin
Type      =ArtistName
Substitute="0":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Progress]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =Progress

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Duration]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =Duration

[Position]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =Position

[PlayerState]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =Playing
IfCondition  =(PlayerState=1)
IfTrueAction =[!SetOption PlayPause "Text" "pause"]     [!UpdateMeter PlayPause][!Redraw]
IfFalseAction=[!SetOption PlayPause "Text" "play_arrow"][!UpdateMeter PlayPause][!Redraw]

DynamicVariables=1