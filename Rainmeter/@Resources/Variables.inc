[Variables]

; ----------------------------------------- Media Player

Plugin=NowPlaying
; NowPlaying - Spotify - Web - GPDMP

Player=CAD
; AIMP - iTunes - Spotify - Winamp - WMP - CAD (Foobar & Musicbee)
; Only applicable if using the NowPlaying / Spotify plugins

; ----------------------------------------- Font

Font=Roboto

; ----------------------------------------- Styles

EdgeStyle =2
; 1-Borderless, 2-Round, 3-Border
ColorTheme=2
; 1-Light, 2-Dark

; ----------------------------------------- Colors

ColorBG1=26, 30, 39
ColorBG2=44, 51, 66
ColorFG1=(#ColorTheme#=1 ? 050:200),(#ColorTheme#=1 ? 050:200),(#ColorTheme#=1 ? 050:200)
ColorFG2=(#ColorTheme#=1 ? 000:255),(#ColorTheme#=1 ? 000:255),(#ColorTheme#=1 ? 000:255)

; ----------------------------------------- Weather

Unit    =C
Location=Bedford, England

; ----------------------------------------- Scale

Scale  =1
Padding=15
S=#Scale#
P=#Padding#
