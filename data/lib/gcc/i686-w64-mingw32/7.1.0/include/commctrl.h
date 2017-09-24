#ifndef _INC_COMMCTRL
#define _INC_COMMCTRL

#define HDS_HORZ 0x0
#define HDS_BUTTONS 0x2
#define HDS_HOTTRACK 0x4
#define HDS_HIDDEN 0x8
#define HDS_DRAGDROP 0x40
#define HDS_FULLDRAG 0x80
#define HDS_FILTERBAR 0x100
#define HDS_FLAT 0x200
#if NTDDI_VERSION >= 0x06000000
#define HDS_CHECKBOXES 0x400
#define HDS_NOSIZING 0x800
#define HDS_OVERFLOW 0x1000
#endif

#define TBSTYLE_BUTTON 0x0
#define TBSTYLE_SEP 0x1
#define TBSTYLE_CHECK 0x2
#define TBSTYLE_GROUP 0x4
#define TBSTYLE_CHECKGROUP (TBSTYLE_GROUP | TBSTYLE_CHECK)
#define TBSTYLE_DROPDOWN 0x8
#define TBSTYLE_AUTOSIZE 0x10
#define TBSTYLE_NOPREFIX 0x20
#define TBSTYLE_TOOLTIPS 0x100
#define TBSTYLE_WRAPABLE 0x200
#define TBSTYLE_ALTDRAG 0x400
#define TBSTYLE_FLAT 0x800
#define TBSTYLE_LIST 0x1000
#define TBSTYLE_CUSTOMERASE 0x2000
#define TBSTYLE_REGISTERDROP 0x4000
#define TBSTYLE_TRANSPARENT 0x8000

#define BTNS_BUTTON TBSTYLE_BUTTON
#define BTNS_SEP TBSTYLE_SEP
#define BTNS_CHECK TBSTYLE_CHECK
#define BTNS_GROUP TBSTYLE_GROUP
#define BTNS_CHECKGROUP TBSTYLE_CHECKGROUP
#define BTNS_DROPDOWN TBSTYLE_DROPDOWN
#define BTNS_AUTOSIZE TBSTYLE_AUTOSIZE
#define BTNS_NOPREFIX TBSTYLE_NOPREFIX
#define BTNS_SHOWTEXT 0x40
#define BTNS_WHOLEDROPDOWN 0x80

#define RBS_TOOLTIPS 0x100
#define RBS_VARHEIGHT 0x200
#define RBS_BANDBORDERS 0x400
#define RBS_FIXEDORDER 0x800
#define RBS_REGISTERDROP 0x1000
#define RBS_AUTOSIZE 0x2000
#define RBS_VERTICALGRIPPER 0x4000
#define RBS_DBLCLKTOGGLE 0x8000

#define TTS_ALWAYSTIP 0x1
#define TTS_NOPREFIX 0x2
#define TTS_NOANIMATE 0x10
#define TTS_NOFADE 0x20
#define TTS_BALLOON 0x40
#define TTS_CLOSE 0x80
#if NTDDI_VERSION >= 0x06000000
#define TTS_USEVISUALSTYLE 0x100
#endif

#define SBARS_SIZEGRIP 0x100
#define SBARS_TOOLTIPS 0x800

#define SBT_TOOLTIPS 0x800

#define TBS_AUTOTICKS 0x1
#define TBS_VERT 0x2
#define TBS_HORZ 0x0
#define TBS_TOP 0x4
#define TBS_BOTTOM 0x0
#define TBS_LEFT 0x4
#define TBS_RIGHT 0x0
#define TBS_BOTH 0x8
#define TBS_NOTICKS 0x10
#define TBS_ENABLESELRANGE 0x20
#define TBS_FIXEDLENGTH 0x40
#define TBS_NOTHUMB 0x80
#define TBS_TOOLTIPS 0x100
#define TBS_REVERSED 0x200
#define TBS_DOWNISLEFT 0x400
#if _WIN32_IE >= 0x0600
#define TBS_NOTIFYBEFOREMOVE 0x800
#endif
#if NTDDI_VERSION >= 0x06000000
#define TBS_TRANSPARENTBKGND 0x1000
#endif

#define UDS_WRAP 0x1
#define UDS_SETBUDDYINT 0x2
#define UDS_ALIGNRIGHT 0x4
#define UDS_ALIGNLEFT 0x8
#define UDS_AUTOBUDDY 0x10
#define UDS_ARROWKEYS 0x20
#define UDS_HORZ 0x0040
#define UDS_NOTHOUSANDS 0x80
#define UDS_HOTTRACK 0x100

#define PBS_SMOOTH 0x1
#define PBS_VERTICAL 0x4
#define PBS_MARQUEE 0x8
#if NTDDI_VERSION >= 0x06000000
#define PBS_SMOOTHREVERSE 0x10
#endif

#define CCS_TOP 0x1L
#define CCS_NOMOVEY 0x2L
#define CCS_BOTTOM 0x3L
#define CCS_NORESIZE 0x4L
#define CCS_NOPARENTALIGN 0x8L
#define CCS_ADJUSTABLE 0x20L
#define CCS_NODIVIDER 0x40L
#define CCS_VERT 0x80L
#define CCS_LEFT (CCS_VERT | CCS_TOP)
#define CCS_RIGHT (CCS_VERT | CCS_BOTTOM)
#define CCS_NOMOVEX (CCS_VERT | CCS_NOMOVEY)

#define LWS_TRANSPARENT 0x1
#define LWS_IGNORERETURN 0x2
#if NTDDI_VERSION >= 0x06000000
#define LWS_NOPREFIX 0x4
#define LWS_USEVISUALSTYLE 0x8
#define LWS_USECUSTOMTEXT 0x10
#define LWS_RIGHT 0x20
#endif

#define LVS_ICON 0x0
#define LVS_REPORT 0x1
#define LVS_SMALLICON 0x2
#define LVS_LIST 0x3
#define LVS_TYPEMASK 0x3
#define LVS_SINGLESEL 0x4
#define LVS_SHOWSELALWAYS 0x8
#define LVS_SORTASCENDING 0x10
#define LVS_SORTDESCENDING 0x20
#define LVS_SHAREIMAGELISTS 0x40
#define LVS_NOLABELWRAP 0x80
#define LVS_AUTOARRANGE 0x100
#define LVS_EDITLABELS 0x200
#define LVS_OWNERDATA 0x1000
#define LVS_NOSCROLL 0x2000

#define LVS_TYPESTYLEMASK 0xfc00

#define LVS_ALIGNTOP 0x0
#define LVS_ALIGNLEFT 0x800
#define LVS_ALIGNMASK 0xc00

#define LVS_OWNERDRAWFIXED 0x400
#define LVS_NOCOLUMNHEADER 0x4000
#define LVS_NOSORTHEADER 0x8000

#define TVS_HASBUTTONS 0x1
#define TVS_HASLINES 0x2
#define TVS_LINESATROOT 0x4
#define TVS_EDITLABELS 0x8
#define TVS_DISABLEDRAGDROP 0x10
#define TVS_SHOWSELALWAYS 0x20
#define TVS_RTLREADING 0x40
#define TVS_NOTOOLTIPS 0x80
#define TVS_CHECKBOXES 0x100
#define TVS_TRACKSELECT 0x200
#define TVS_SINGLEEXPAND 0x400
#define TVS_INFOTIP 0x800
#define TVS_FULLROWSELECT 0x1000
#define TVS_NOSCROLL 0x2000
#define TVS_NONEVENHEIGHT 0x4000
#define TVS_NOHSCROLL 0x8000

#define TVS_EX_NOSINGLECOLLAPSE 0x1
#if NTDDI_VERSION >= 0x06000000
#define TVS_EX_MULTISELECT 0x2
#define TVS_EX_DOUBLEBUFFER 0x4
#define TVS_EX_NOINDENTSTATE 0x8
#define TVS_EX_RICHTOOLTIP 0x10
#define TVS_EX_AUTOHSCROLL 0x20
#define TVS_EX_FADEINOUTEXPANDOS 0x40
#define TVS_EX_PARTIALCHECKBOXES 0x80
#define TVS_EX_EXCLUSIONCHECKBOXES 0x100
#define TVS_EX_DIMMEDCHECKBOXES 0x200
#define TVS_EX_DRAWIMAGEASYNC 0x400
#endif

#define TCS_SCROLLOPPOSITE 0x1
#define TCS_BOTTOM 0x2
#define TCS_RIGHT 0x2
#define TCS_MULTISELECT 0x4
#define TCS_FLATBUTTONS 0x8
#define TCS_FORCEICONLEFT 0x10
#define TCS_FORCELABELLEFT 0x20
#define TCS_HOTTRACK 0x40
#define TCS_VERTICAL 0x80
#define TCS_TABS 0x0
#define TCS_BUTTONS 0x100
#define TCS_SINGLELINE 0x0
#define TCS_MULTILINE 0x200
#define TCS_RIGHTJUSTIFY 0x0
#define TCS_FIXEDWIDTH 0x400
#define TCS_RAGGEDRIGHT 0x800
#define TCS_FOCUSONBUTTONDOWN 0x1000
#define TCS_OWNERDRAWFIXED 0x2000
#define TCS_TOOLTIPS 0x4000
#define TCS_FOCUSNEVER 0x8000

#define ACS_CENTER 0x1
#define ACS_TRANSPARENT 0x2
#define ACS_AUTOPLAY 0x4
#define ACS_TIMER 0x8

#define MCS_DAYSTATE 0x1
#define MCS_MULTISELECT 0x2
#define MCS_WEEKNUMBERS 0x4
#define MCS_NOTODAYCIRCLE 0x8
#define MCS_NOTODAY 0x10
#if NTDDI_VERSION >= 0x06000000
#define MCS_NOTRAILINGDATES 0x40
#define MCS_SHORTDAYSOFWEEK 0x80
#define MCS_NOSELCHANGEONNAV 0x100
#endif

#define DTS_UPDOWN 0x1
#define DTS_SHOWNONE 0x2
#define DTS_SHORTDATEFORMAT 0x0
#define DTS_LONGDATEFORMAT 0x4
#define DTS_SHORTDATECENTURYFORMAT 0xc
#define DTS_TIMEFORMAT 0x9
#define DTS_APPCANPARSE 0x10
#define DTS_RIGHTALIGN 0x20

#define PGS_VERT 0x0
#define PGS_HORZ 0x1
#define PGS_AUTOSCROLL 0x2
#define PGS_DRAGNDROP 0x4

#define NFS_EDIT 0x1
#define NFS_STATIC 0x2
#define NFS_LISTCOMBO 0x4
#define NFS_BUTTON 0x8
#define NFS_ALL 0x10
#define NFS_USEFONTASSOC 0x20

#define BS_SPLITBUTTON 0xcL
#define BS_DEFSPLITBUTTON 0xdL
#define BS_COMMANDLINK 0xeL
#define BS_DEFCOMMANDLINK 0xfL

#define BCSIF_GLYPH 0x1
#define BCSIF_IMAGE 0x2
#define BCSIF_STYLE 0x4
#define BCSIF_SIZE 0x8

#define BCSS_NOSPLIT 0x1
#define BCSS_STRETCH 0x2
#define BCSS_ALIGNLEFT 0x4
#define BCSS_IMAGE 0x8

#endif  /* ndef _INC_COMMCTRL */
