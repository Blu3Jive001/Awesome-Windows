[Background]
Meter =Shape
Shape =Rectangle (#S#*0),(#S#*0),(#SkinW#-00),(#SkinH#-00) | Scale #S#,#S#,0,0 | StrokeWidth 0 | FillColor #ColorBG1#
UpdateDivider=-1
Hidden=1

[BackgroundRound]
Meter =Shape
Shape =Rectangle (#S#*0),(#S#*0),(#SkinW#-00),(#SkinH#-00),6 | Scale #S#,#S#,0,0 | StrokeWidth 0 | FillColor #ColorBG1#
UpdateDivider=-1
Hidden=1

[BackgroundBorder]
Meter =Shape
Shape =Rectangle (#S#*0),(#S#*0),(#SkinW#-00),(#SkinH#-00) | Scale #S#,#S#,0,0 | StrokeWidth 0 | FillColor #ColorBG1#
Shape2=Rectangle (#S#*3),(#S#*3),(#SkinW#-06),(#SkinH#-06) | Scale #S#,#S#,0,0 | StrokeWidth 0 | FillColor #ColorBG1#
Shape3=Rectangle (#S#*0),(#S#*0),(#SkinW#-00),(#SkinH#-00) | Scale #S#,#S#,0,0 | StrokeWidth 0 | FillColor #ColorBG1#,150
Shape4=Rectangle (#S#*6),(#S#*6),(#SkinW#-12),(#SkinH#-12) | Scale #S#,#S#,0,0 | StrokeWidth 0 | FillColor #ColorBG1#
Shape5=Combine Shape | Exclude Shape2
UpdateDivider=-1
Hidden=1

[EdgeStyleCalc]
Measure=Calc
Formula=#EdgeStyle#

IfCondition =(#CurrentSection#=1)
IfCondition2=(#CurrentSection#=2)
IfCondition3=(#CurrentSection#=3)
IfTrueAction =[!ShowMeter Background]
IfTrueAction2=[!ShowMeter BackgroundRound]
IfTrueAction3=[!ShowMeter BackgroundBorder]

UpdateDivider=-1