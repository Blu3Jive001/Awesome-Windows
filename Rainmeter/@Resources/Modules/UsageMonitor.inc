
; ----------------------------------------- Measures

[Index1]
Measure=Plugin
Plugin =UsageMonitor
Alias  =#Alias#
Index  =1

Blacklist=#BlackList#
OnChangeAction=[!UpdateMeter 1][!Redraw]

[Index1String]
Measure=String
String =[Index1]
IfMatch="^$"
IfMatchAction   =[!SetOption 1Percent "Text" "--"] [!UpdateMeter 1Percent][!Redraw]
IfNotMatchAction=[!SetOption 1Percent "Text" "%1%"][!UpdateMeter 5Percent][!Redraw]
DynamicVariables=1

[Index1Percent]
Measure=Calc
Formula=Index1

OnChangeAction=[!UpdateMeter 1Percent][!Redraw]

[Index2]
Measure=Plugin
Plugin =UsageMonitor
Alias  =#Alias#
Index  =2

Blacklist=#BlackList#
OnChangeAction=[!UpdateMeter 2][!Redraw]

[Index2String]
Measure=String
String =[Index2]
IfMatch="^$"
IfMatchAction   =[!SetOption 2Percent "Text" "--"] [!UpdateMeter 2Percent][!Redraw]
IfNotMatchAction=[!SetOption 2Percent "Text" "%1%"][!UpdateMeter 5Percent][!Redraw]
DynamicVariables=1

[Index2Percent]
Measure=Calc
Formula=Index2

OnChangeAction=[!UpdateMeter 2Percent][!Redraw]

[Index3]
Measure=Plugin
Plugin =UsageMonitor
Alias  =#Alias#
Index  =3

Blacklist=#BlackList#
OnChangeAction=[!UpdateMeter 3][!Redraw]

[Index3String]
Measure=String
String =[Index3]
IfMatch="^$"
IfMatchAction   =[!SetOption 3Percent "Text" "--"] [!UpdateMeter 3Percent][!Redraw]
IfNotMatchAction=[!SetOption 3Percent "Text" "%1%"][!UpdateMeter 5Percent][!Redraw]
DynamicVariables=1

[Index3Percent]
Measure=Calc
Formula=Index3

OnChangeAction=[!UpdateMeter 3Percent][!Redraw]

[Index4]
Measure=Plugin
Plugin =UsageMonitor
Alias  =#Alias#
Index  =4

Blacklist=#BlackList#
OnChangeAction=[!UpdateMeter 4][!Redraw]

[Index4String]
Measure=String
String =[Index4]
IfMatch="^$"
IfMatchAction   =[!SetOption 4Percent "Text" "--"] [!UpdateMeter 4Percent][!Redraw]
IfNotMatchAction=[!SetOption 4Percent "Text" "%1%"][!UpdateMeter 4Percent][!Redraw]
DynamicVariables=1

[Index4Percent]
Measure=Calc
Formula=Index4

OnChangeAction=[!UpdateMeter 4Percent][!Redraw]

[Index5]
Measure=Plugin
Plugin =UsageMonitor
Alias  =#Alias#
Index  =5

Blacklist=#BlackList#
OnChangeAction=[!UpdateMeter 5][!Redraw]

[Index5String]
Measure=String
String =[Index5]
IfMatch="^$"
IfMatchAction   =[!SetOption 5Percent "Text" "--"] [!UpdateMeter 5Percent][!Redraw]
IfNotMatchAction=[!SetOption 5Percent "Text" "%1%"][!UpdateMeter 5Percent][!Redraw]
DynamicVariables=1

[Index5Percent]
Measure=Calc
Formula=Index5

OnChangeAction=[!UpdateMeter 5Percent][!Redraw]

; ----------------------------------------- Meters

[ProcessLabel]
Meter=String
Text =#Alias#
MeasureName=
MeterStyle =Process
InlineSetting4=Weight |900
InlineSetting5=Stretch|5
InlineSetting7=Underline
X=(#S#*#P#)
Y=(#S#*#P#)

[BG1]
Meter=Shape
MeterStyle=ProcessBG

[1]
Meter=String
MeterStyle=Process

[1Percent]
Meter=String
MeterStyle=ProcessPercentage

[2]
Meter=String
MeterStyle=Process
Y=(#S#*(#SkinH#-(#P#*2)-90)/6)R

[2Percent]
Meter=String
MeterStyle=ProcessPercentage

[BG3]
Meter=Shape
MeterStyle=ProcessBG

[3]
Meter=String
MeterStyle=Process

[3Percent]
Meter=String
MeterStyle=ProcessPercentage

[4]
Meter=String
MeterStyle=Process
Y=(#S#*(#SkinH#-(#P#*2)-90)/6)R

[4Percent]
Meter=String
MeterStyle=ProcessPercentage

[BG5]
Meter=Shape
MeterStyle=ProcessBG

[5]
Meter=String
MeterStyle=Process

[5Percent]
Meter=String
MeterStyle=ProcessPercentage
