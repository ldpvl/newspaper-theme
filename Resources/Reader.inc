;--------------------------------------------------------------------------------------------
; READER

[Rainmeter]
MiddleMouseUpAction=!Refresh

[Variables]
WebParserSubstitute="<![CDATA[":"","]]>":"","/PRE&gt;":"","PRE&gt;":"","&nbsp;":" ","'s Facebook Notifications":"","Top Stories - Google ":""
FeedTitle=Loading...
ItemTitle1=
ItemTitle2=
ItemTitle3=
ItemTitle4=
ItemTitle5=
ItemTitle6=
ItemTitle7=
ItemTitle8=
ItemTitle9=
ItemTitle10=
ItemTitle11=
ItemTitle12=
ItemTitle13=
ItemDate1=
ItemDate2=
ItemDate3=
ItemDate4=
ItemDate5=
ItemDate6=
ItemDate7=
ItemDate8=
ItemDate9=
ItemDate10=
ItemDate11=
ItemDate12=
ItemDate13=

;---------------------------------------------------------------------
; READER

[StyleReaderBorder]
SolidColor=#ColorBorder4#
X=10
Y=5
W=(#SidebarWidth#-20)
H=1
Hidden=#HideBordersTop#

[StyleReaderBackground]
SolidColor=#ColorTransparent#
W=#SidebarWidth#
H=175

[StyleReaderIcon]
ImageName=#SKINSPATH#Enigma\Resources\Images\Reader.#ColorImage#.png
X=10
Y=15
W=25
H=25

[StyleReaderTitle]
X=37
Y=18
H=20
W=(#SidebarWidth#-49)
ClipString=1
StringStyle=BOLD
FontColor=#Color1#
FontSize=#Size3#
FontFace=#Font#
AntiAlias=1
ToolTipWidth=#SidebarWidth#
DynamicVariables=1

[StyleReaderText]
X=12
Y=21.5r
H=15
W=(#SidebarWidth#-24)
ClipString=1
StringStyle=NORMAL
FontColor=#Color1#
FontSize=#Size4#
FontFace=#Font#
AntiAlias=1
ToolTipWidth=#SidebarWidth#
DynamicVariables=1
MouseOverAction=!Execute [!SetOption "#CURRENTSECTION#" "FontColor" "#ColorLink#"][!Update]
MouseLeaveAction=!Execute [!SetOption "#CURRENTSECTION#" "FontColor" "#Color1#"][!Update]

[StyleReaderTextSubheading]
Y=16r
StringStyle=BOLD

[StyleReaderTextFirst]
Y=45

[StyleReaderSubtext]
X=22
Y=14r
H=10
W=(#SidebarWidth#-34)
ClipString=1
StringStyle=NORMAL
FontColor=#Color2#
FontSize=#Size4#
FontFace=#Font#
AntiAlias=1
ToolTipWidth=#SidebarWidth#
DynamicVariables=1

;-----------------------
; BORDER

[StyleReaderBorderBottom]
SolidColor=#ColorBorder4#
X=10
Y=25r
W=(#SidebarWidth#-26)
H=1
Hidden=#HideBordersBottom#

;-----------------------
; GRABBERS

[StyleReaderGrabber]
X=15r
Y=r
H=15
W=15
DynamicVariables=1

[StyleReaderGrabberFirst]
X=(#SidebarWidth#-(#NumberOfFeeds#*15)-10)
Y=-7r

[StyleReaderGrabber0]
ImageName=#SKINSPATH#Enigma\Resources\Images\Grabber.#ColorImage#.png
ImageAlpha=128
ToolTipWidth=#SidebarWidth#
ToolTipText=Click to switch to this page.

[StyleReaderGrabber1]
ImageName=#SKINSPATH#Enigma\Resources\Images\GrabberActive.#ColorImage#.png

;---------------------------------------------------------------------
; FACEBOOK

[StyleReaderIconFacebook]
ImageName=#SKINSPATH#Enigma\Resources\Images\Facebook.#ColorImage#.png

;---------------------------------------------------------------------
; GCAL

[StyleReaderIconGcal]
ImageName=#SKINSPATH#Enigma\Resources\Images\Gcal.#ColorImage#.png

;---------------------------------------------------------------------
; GMAIL

[StyleReaderIconGmail]
ImageName=#SKINSPATH#Enigma\Resources\Images\Gmail.0.#ColorImage#.png

;---------------------------------------------------------------------
; REMEMBER THE MILK

[StyleReaderIconRTM]
ImageName=#SKINSPATH#Enigma\Resources\Images\RememberTheMilk.#ColorImage#.png

;---------------------------------------------------------------------
; TWITTER

[StyleReaderIconTwitter]
ImageName=#SKINSPATH#Enigma\Resources\Images\Twitter.#ColorImage#.png
