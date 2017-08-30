#ifndef RESOURCE_H_
#define RESOURCE_H_

#define CMDID_NEW              100
#define CMDID_OPEN             101
#define CMDID_SAVEAS           102
#define CMDID_EXIT             103
#define CMDID_ADDICON          104
#define CMDID_ADDCURSOR        105
#define CMDID_ADDBITMAP        106
#define CMDID_ADDRES           108
#define CMDID_REPLACEICON      109
#define CMDID_REPLACECURSOR    110
#define CMDID_REPLACEBITMAP    111
#define CMDID_REPLACEBIN       112
#define CMDID_DELETERES        113
#define CMDID_EDIT             114
#define CMDID_EXTRACTICON      115
#define CMDID_EXTRACTCURSOR    116
#define CMDID_EXTRACTBITMAP    117
#define CMDID_EXTRACTBIN       118
#define CMDID_ABOUT            119
#define CMDID_TEST             120
#define CMDID_IMPORT           121
#define CMDID_COMPILE          122
#define CMDID_CANCELEDIT       123
#define CMDID_SHOWDIALOG       124
#define CMDID_GUIEDIT          125
#define CMDID_ADDCTRL          126
#define CMDID_DELCTRL          127
#define CMDID_CTRLPROP         128
#define CMDID_DLGPROP          129
#define CMDID_DESTROYRAD       130
#define CMDID_UPDATERES        131
#define CMDID_CTRLINDEXTOP     132
#define CMDID_CTRLINDEXBOTTOM  133
#define CMDID_CTRLINDEXMINUS   134
#define CMDID_CTRLINDEXPLUS    135
#define CMDID_SHOWHIDEINDEX    136
#define CMDID_TOPALIGN         137
#define CMDID_BOTTOMALIGN      138
#define CMDID_LEFTALIGN        139
#define CMDID_RIGHTALIGN       140
#define CMDID_TEXTEDIT         141
#define CMDID_READY            142
#define CMDID_STATUSBAR        143
#define CMDID_BINARYPANE       144
#define CMDID_ALWAYSCONTROL    145
#define CMDID_MRUFILE0         146
#define CMDID_MRUFILE1         147
#define CMDID_MRUFILE2         148
#define CMDID_MRUFILE3         149
#define CMDID_MRUFILE4         150
#define CMDID_MRUFILE5         151
#define CMDID_MRUFILE6         152
#define CMDID_MRUFILE7         153
#define CMDID_MRUFILE8         154
#define CMDID_MRUFILE9         155
#define CMDID_MRUFILE10        156
#define CMDID_MRUFILE11        157
#define CMDID_MRUFILE12        158
#define CMDID_MRUFILE13        159
#define CMDID_MRUFILE14        160
#define CMDID_MRUFILE15        161
#define CMDID_PLAY             162
#define CMDID_IDASSOC          163
#define CMDID_LOADRESH         164

#define IDD_REPLACERES      100
#define IDD_ADDICON         101
#define IDD_REPLACEICON     102
#define IDD_ADDBITMAP       103
#define IDD_REPLACEBMP      104
#define IDD_ADDRES          105
#define IDD_ADDCURSOR       106
#define IDD_REPLACECUR      107
#define IDD_MENUTEST        108
#define IDD_ADDKEY          109
#define IDD_MODIFYKEY       110
#define IDD_EDITACCEL       111
#define IDD_ADDSTR          112
#define IDD_MODIFYSTR       113
#define IDD_STRINGS         114
#define IDD_ADDMITEM        115
#define IDD_MODIFYMITEM     116
#define IDD_EDITMENU        117
#define IDD_DLGPROP         118
#define IDD_CTRLPROP        119
#define IDD_ADDCTRL         120
#define IDD_IDASSOC         121
#define IDD_MODIFYASSOC     122
#define IDD_IDLIST          123

#define IDS_APPNAME         1
#define IDS_TITLEWITHFILE   2
#define IDS_EXTRACTRES      3
#define IDS_RESBINFILTER    4
#define IDS_CANNOTSAVE      5
#define IDS_REPLACERES      6
#define IDS_ALLFILES        7
#define IDS_ENTERTYPE       8
#define IDS_ENTERNAME       9
#define IDS_ENTERLANG       10
#define IDS_FILENOTFOUND    11
#define IDS_CANNOTREPLACE   12
#define IDS_EXEFILTER       13
#define IDS_SAVEAS          14
#define IDS_CANNOTADDICON   15
#define IDS_ADDICON         16
#define IDS_ICOFILTER       17
#define IDS_REPLACEICO      18
#define IDS_CANTREPLACEICO  19
#define IDS_EXISTSOVERWRITE 20
#define IDS_OPEN            21
#define IDS_CANNOTOPEN      22
#define IDS_ADDBMP          23
#define IDS_BMPFILTER       24
#define IDS_CANTREPLACEBMP  25
#define IDS_REPLACEBMP      26
#define IDS_ERRORCODE       27
#define IDS_VERSIONINFO     28
#define IDS_ADDRES          29
#define IDS_CANNOTADDRES    30
#define IDS_CANTADDBMP      31
#define IDS_EXTRACTBMP      32
#define IDS_CANTEXTRACTBMP  33
#define IDS_CANTREPLACECUR  34
#define IDS_CANNOTADDCUR    35
#define IDS_CURFILTER       36
#define IDS_ADDCUR          37
#define IDS_REPLACECUR      38
#define IDS_EXTRACTICO      39
#define IDS_CANTEXTRACTICO  40
#define IDS_EXTRACTCUR      41
#define IDS_CANTEXTRACTCUR  42
#define IDS_RESFILTER       43
#define IDS_NEUTRAL         44
#define IDS_IMPORTRES       45
#define IDS_CANNOTIMPORT    46
#define IDS_COMPILE         47
#define IDS_CANCELEDIT      48
#define IDS_GUIEDIT         49
#define IDS_CANNOTSTARTUP   51
#define IDS_RESMISMATCH     52
#define IDS_SAMPLETEXT      53
#define IDS_ALREADYEXISTS   54
#define IDS_KEY             55
#define IDS_FLAGS           56
#define IDS_COMMANDID       57
#define IDS_INVALIDKEY      58
#define IDS_COMPILEERROR    59
#define IDS_STRINGID        60
#define IDS_STRINGVALUE     61
#define IDS_CAPTION         62
#define IDS_HELPID          63
#define IDS_INDENT          64
#define IDS_DATAISEMPTY     65
#define IDS_TEST            66
#define IDS_SEPARATOR       67
#define IDS_COMPILENOW      68
#define IDS_RADWINDOW       69
#define IDS_ENTERCLASS      70
#define IDS_TEXTEDIT        71
#define IDS_CURSORINFO      72
#define IDS_IMAGECOUNT      73
#define IDS_ICONINFO        74
#define IDS_READY           75
#define IDS_EXECUTINGCMD    76
#define IDS_EDITINGBYGUI    77
#define IDS_COORD           78
#define IDS_STARTING        79
#define IDS_COMPILING       80
#define IDS_CANNOTLOAD      81
#define IDS_NONE            82
#define IDS_WAVESOUND       83
#define IDS_IDTYPE          84
#define IDS_IDPREFIX        85
#define IDS_EMPTYSTR        86
#define IDS_ANICURSOR       87
#define IDS_ANIICON         88
#define IDS_HEADFILTER      89
#define IDS_LOADRESH        90

#endif  // ndef RESOURCE_H_
