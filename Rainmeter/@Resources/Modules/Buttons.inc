[Close]
Meter=Shape
Shape=Ellipse -2.25,0,4.5 | Scale #S#,#S#,0,0 | StrokeWidth 1 | StrokeColor 255,40,80 | Extend Fill
Fill =FillColor 250,190,240
X=(#S#*(#SkinW#-20))
Y=(#S#*(20))

MouseOverAction  =[!SetOption Close "Fill" "FillColor 255,040,080"][!UpdateMeter Close][!Redraw]
MouseLeaveAction =[!SetOption Close "Fill" "FillColor 250,190,240"][!UpdateMeter Close][!Redraw]
LeftMouseUpAction=[!DeactivateConfig]

[Manage]
Meter=Shape
Shape=Ellipse -2.25,0,4.5 | Scale #S#,#S#,0,0 | StrokeWidth 1 | StrokeColor 60,205,140 | Extend Fill
Fill =FillColor 200,255,225
X=(#S#*(#SkinW#-50))
Y=(#S#*(20))

MouseOverAction  =[!SetOption Manage "Fill" "FillColor 060,205,140"][!UpdateMeter Manage][!Redraw]
MouseLeaveAction =[!SetOption Manage "Fill" "FillColor 200,255,225"][!UpdateMeter Manage][!Redraw]
LeftMouseUpAction=[!Manage]

[CurrentPath]
Meter=Shape
Shape=Ellipse -2.25,0,4.5 | Scale #S#,#S#,0,0 | StrokeWidth 1 | StrokeColor 250,165,35 | Extend Fill
Fill =FillColor 255,245,210
X=(#S#*(#SkinW#-80))
Y=(#S#*(20))

MouseOverAction  =[!SetOption CurrentPath "Fill" "FillColor 250,165,035"][!UpdateMeter CurrentPath][!Redraw]
MouseLeaveAction =[!SetOption CurrentPath "Fill" "FillColor 255,245,210"][!UpdateMeter CurrentPath][!Redraw]
LeftMouseUpAction=["#CurrentPath#"]
