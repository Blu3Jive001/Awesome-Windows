[AIMP]
Meter=String
MeterStyle    =MusicLabel
InlineSetting4=Weight|700
X=(#S#*(#P#-3))

[iTunes]
Meter=String
MeterStyle    =MusicLabel
InlineSetting4=Weight|700

[Spotify]
Meter=String
MeterStyle    =MusicLabel
InlineSetting4=Weight|700

LeftMouseUpAction=[!WriteKeyValue Variables "Player" "#CurrentSection#" "#@#Variables.inc"][!WriteKeyValue Variables "Plugin" "#CurrentSection#" "#@#Variables.inc"][!WriteKeyValue Variables "Player" "#CurrentSection#"][!Refresh "#RootConfig#\Music"][!Refresh]

[Winamp]
Meter=String
MeterStyle    =MusicLabel
InlineSetting4=Weight|700

[WMP]
Meter=String
MeterStyle    =MusicLabel
InlineSetting4=Weight|700

[Foobar/MusicBee]
Meter=String
MeterStyle    =MusicLabel
InlineSetting4=Weight|700
Y   =(#S#*(#P#+147))
X   =(#S#*(#P#-3))

LeftMouseUpAction=[!WriteKeyValue Variables "Player" "CAD" "#@#Variables.inc"][!WriteKeyValue Variables "Plugin" "NowPlaying" "#@#Variables.inc"][!WriteKeyValue Variables "Player" "#CurrentSection#"][!Refresh "#RootConfig#\Music"][!Refresh]

[Web]
Meter=String
MeterStyle    =MusicLabel
InlineSetting4=Weight|700
Y   =(#S#*(#P#+147))

LeftMouseUpAction=[!WriteKeyValue Variables "Plugin" "Web" "#@#Variables.inc"][!WriteKeyValue Variables "Player" "#CurrentSection#"][!Refresh "#RootConfig#\Music"][!Refresh]

[GPDMP]
Meter=String
MeterStyle    =MusicLabel
InlineSetting4=Weight|700
Y   =(#S#*(#P#+147))

LeftMouseUpAction=[!WriteKeyValue Variables "Plugin" "GPDMP" "#@#Variables.inc"][!WriteKeyValue Variables "Player" "#CurrentSection#"][!Refresh "#RootConfig#\Music"][!Refresh]

