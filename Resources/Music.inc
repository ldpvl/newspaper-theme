;--------------------------------------------------------------------------------------------
; MUSIC

[Rainmeter]
MiddleMouseUpAction=!Refresh
MouseOverAction=!Execute [!HideMeterGroup Mouseout][!ShowMeterGroup Mouseover][!Redraw]
MouseLeaveAction=!Execute [!ShowMeterGroup Mouseout][!HideMeterGroup Mouseover][!Redraw]

;----------------------------------------------
; NORMAL

[StyleMusicNormalBackground]
SolidColor=#ColorTransparent#
W=#SidebarWidth#
H=76

[StyleMusicNormalBorder]
SolidColor=#ColorBorder4#
X=10
Y=5
W=(#SidebarWidth#-120)
H=1
Hidden=1

[StyleMusicNormalHeader]
X=(#SidebarWidth#-23)
Y=2
FontColor=#Color1#
FontFace=#Font#
FontSize=#Size3#
StringAlign=RIGHT
StringStyle=NORMAL
Text="N o w   P l a y i n g"
AntiAlias=1
Hidden=0

[StyleMusicNormalIconBack]
Hidden=1
W=0
H=0

[StyleMusicNormalIcon]
Hidden=1
W=0
H=0
ToolTipWidth=#SidebarWidth#

[StyleMusicNormalCurtain]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleMusicNormalText]
X=14
Y=16r
H=15
W=(#SidebarWidth#-28)
ClipString=1
FontFace=#Font#
FontSize=#Size3#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=1

[StyleMusicNormalTextFirst]
FontColor=#Color1#
Y=21

[StyleMusicNormalTextSecond]
FontColor=#Color2#

[StyleMusicNormalTextThird]
FontColor=#Color3#
Group=Mouseout

[StyleMusicNormalTime]
X=(#SidebarWidth#-23)
Y=54
StringAlign=RIGHT
StringStyle=BOLD
FontColor=#Color1#
FontFace=#Font#
FontSize=#Size4#
AntiAlias=1

[StyleMusicNormalButton]
X=16r
Y=53
FontColor=#Color1#
StringStyle=BOLD
FontSize=10
StringAlign=LEFT
FontFace=Webdings
AntiAlias=1
Hidden=1
Group=Mouseover
ToolTipWidth=#SidebarWidth#

[StyleMusicNormalButtonFirst]
X=14
Text="7"

[StyleMusicNormalButtonSecond0]
Text="4"

[StyleMusicNormalButtonSecond1]
Text=";"

[StyleMusicNormalButtonSecond2]
Text="4"

[StyleMusicNormalButtonThird]
Text="8"

[StyleMusicNormalProgress]
X=(10+(4*#HideBordersBottom#))
Y=71
W=(#SidebarWidth#-35-(4*#HideBordersBottom#))
H=1
BarColor=#ColorBorder2#
SolidColor=#ColorBorder4#
BarOrientation=HORIZONTAL

;----------------------------------------------
; ART

[StyleMusicArtBackground]
SolidColor=#ColorTransparent#
W=#SidebarWidth#
H=80
ToolTipWidth=#SidebarWidth#

[StyleMusicArtBorder]
SolidColor=#ColorBorder4#
X=10
Y=5
W=(#SidebarWidth#-120)
H=1
Hidden=1

[StyleMusicArtHeader]
X=(#SidebarWidth#-23)
Y=2
FontColor=#Color1#
FontFace=#Font#
FontSize=#Size3#
StringAlign=RIGHT
StringStyle=NORMAL
Text="N o w   P l a y i n g"
AntiAlias=1
Hidden=0

[StyleMusicArtIconBack]
ImageName=#SKINSPATH#Enigma\Resources\Images\MusicAlbum.#ColorImage#.png
X=14
Y=21
W=45
H=45
AntiAlias=1

[StyleMusicArtIcon]
X=15
Y=22
H=43
W=43
AntiAlias=1
ToolTipWidth=#SidebarWidth#

[StyleMusicArtCurtain]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleMusicArtText]
X=64
Y=16r
W=(#SidebarWidth#-78)
H=15
ClipString=1
FontFace=#Font#
FontSize=#Size3#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=1

[StyleMusicArtTextFirst]
FontColor=#Color1#
Y=21

[StyleMusicArtTextSecond]
FontColor=#Color2#

[StyleMusicArtTextThird]
FontColor=#Color3#
Group=Mouseout

[StyleMusicArtTime]
X=(#SidebarWidth#-23)
Y=54
StringAlign=RIGHT
StringStyle=BOLD
FontColor=#Color1#
FontFace=#Font#
FontSize=#Size4#
AntiAlias=1
Hidden=1
Group=Mouseover

[StyleMusicArtButton]
X=16r
Y=53
FontColor=#Color1#
StringStyle=BOLD
FontSize=10
StringAlign=LEFT
FontFace=Webdings
AntiAlias=1
Hidden=1
Group=Mouseover
ToolTipWidth=#SidebarWidth#

[StyleMusicArtButtonFirst]
X=64
Text="7"

[StyleMusicArtButtonSecond0]
Text="4"

[StyleMusicArtButtonSecond1]
Text=";"

[StyleMusicArtButtonSecond2]
Text="4"

[StyleMusicArtButtonThird]
Text="8"

[StyleMusicArtProgress]
X=(10+(4*#HideBordersBottom#))
Y=71
W=(#SidebarWidth#-35-(4*#HideBordersBottom#))
H=1
BarColor=#ColorBorder2#
SolidColor=#ColorBorder4#
BarOrientation=HORIZONTAL

;----------------------------------------------
; FULL

[StyleMusicFullBackground]
SolidColor=#ColorTransparent#
W=#SidebarWidth#
H=(#SidebarWidth#-2)
ToolTipWidth=#SidebarWidth#

[StyleMusicFullBorder]
SolidColor=#ColorBorder4#
X=10
Y=5
W=(#SidebarWidth#-20)
H=1
Hidden=#HideBordersTop#

[StyleMusicFullHeader]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleMusicFullIconBack]
ImageName=#SKINSPATH#Enigma\Resources\Images\MusicAlbum.#ColorImage#.png
X=12
Y=20
W=(#SidebarWidth#-33)
H=(#SidebarWidth#-33)
AntiAlias=1

[StyleMusicFullIcon]
X=1r
Y=1r
W=(#SidebarWidth#-35)
H=(#SidebarWidth#-35)
AntiAlias=1
ToolTipWidth=#SidebarWidth#

[StyleMusicFullCurtain]
SolidColor=#ColorFilter3#
X=r
Y=r
W=(#SidebarWidth#-35)
H=(#SidebarWidth#-35)
Hidden=1
Group=Mouseover

[StyleMusicFullText]
X=16
Y=5R
W=(#SidebarWidth#-78)
H=15
ClipString=1
FontFace=#Font#
FontSize=#Size1#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=1
Hidden=1
Group=Mouseover

[StyleMusicFullTextFirst]
FontColor=#Color1#
Y=23

[StyleMusicFullTextSecond]
FontColor=#Color2#

[StyleMusicFullTextThird]
FontColor=#Color3#

[StyleMusicFullTime]
X=(#SidebarWidth#-23)
Y=(#SidebarWidth#-35)
StringAlign=RIGHT
StringStyle=BOLD
FontColor=#Color1#
FontFace=#Font#
FontSize=#Size1#
AntiAlias=1
Hidden=1
Group=Mouseover

[StyleMusicFullButton]
X=R
Y=(#SidebarWidth#-40)
FontColor=#Color1#
StringStyle=BOLD
FontSize=17
StringAlign=LEFT
FontFace=Webdings
AntiAlias=1
Hidden=1
Group=Mouseover
ToolTipWidth=#SidebarWidth#

[StyleMusicFullButtonFirst]
X=14
Text="7"

[StyleMusicFullButtonSecond0]
Text="4"

[StyleMusicFullButtonSecond1]
Text=";"

[StyleMusicFullButtonSecond2]
Text="4"

[StyleMusicFullButtonThird]
Text="8"

[StyleMusicFullProgress]
X=(10+(4*#HideBordersBottom#))
Y=(#SidebarWidth#-7)
W=(#SidebarWidth#-35-(4*#HideBordersBottom#))
H=1
BarColor=#ColorBorder2#
SolidColor=#ColorBorder4#
BarOrientation=HORIZONTAL