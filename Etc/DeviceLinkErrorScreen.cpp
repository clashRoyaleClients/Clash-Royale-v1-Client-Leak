class DeviceLinkErrorScreen
{
public:

    __int64 __fastcall DeviceLinkErrorScreen::DeviceLinkErrorScreen(__int64 a1, __int64 a2, char a3)
    {
      const char *v6; // x1
      _BYTE *v7; // x22
      void (__fastcall *v8)(_BYTE *, void *, _QWORD); // x21
      const char *v9; // x1
      void *String; // x0
      __int64 v11; // x0
      const char *v12; // x1
      MovieClip *v13; // x20
      const String *v14; // x0
      MovieClip *v15; // x20
      const char *v16; // x1
      const String *v17; // x0
      MovieClip *v18; // x20
      const String *v19; // x0
      MovieClip *v20; // x20
      const char *v21; // x1
      const String *v22; // x0
      MovieClip *v23; // x20
      const String *v24; // x0
      MovieClip *v25; // x20
      const char *v26; // x1
      const String *v27; // x0
      MovieClip *v28; // x20
      const String *v29; // x0
      MovieClip *v30; // x20
      const char *v31; // x1
      const String *v32; // x0
      const String *v33; // x1
      MovieClip *v35; // x20
      const String *v36; // x0
      MovieClip *v37; // x20
      const char *v38; // x1
      const String *v39; // x0
      MovieClip *v40; // x20
      const String *v41; // x0
      LogicDataTables *v42; // x0
      TimeUtil *v43; // x21
      const char *v44; // x1
      void *v45; // x20
      bool v46; // w2
      MovieClip *v47; // x20
      const String *v48; // x0
      LogicDataTables *v49; // x0
      TimeUtil *v50; // x21
      const char *v51; // x1
      void *v52; // x20
      bool v53; // w2
      MovieClip *v54; // x20
      const String *v55; // x0
      MovieClip *v56; // x20
      const char *v57; // x1
      const String *v58; // x0
      _BYTE *v59; // x20
      void (__fastcall *v60)(_BYTE *, void *, _QWORD); // x21
      void *v61; // x0
      MovieClip *v62; // x20
      const char *v63; // x1
      const String *v64; // x0
      MovieClip *v65; // x20
      const char *v66; // x1
      const String *v67; // x0
      MovieClip *v68; // x20
      const String *v69; // x0
      MovieClip *v70; // x20
      const char *v71; // x1
      const String *v72; // x0
      MovieClip *v73; // x20
      const String *v74; // x0
      const char *v75; // x1
      void *v76; // x20
      const char *v77; // x1
      MovieClip *v78; // x20
      const String *v79; // x0
      MovieClip *v80; // x20
      const char *v81; // x1
      const String *v82; // x0
      String v83; // [xsp+10h] [xbp-180h] BYREF
      String v84; // [xsp+28h] [xbp-168h] BYREF
      String v85; // [xsp+40h] [xbp-150h] BYREF
      String v86; // [xsp+58h] [xbp-138h] BYREF
      String v87; // [xsp+70h] [xbp-120h] BYREF
      String v88; // [xsp+88h] [xbp-108h] BYREF
      String v89; // [xsp+A0h] [xbp-F0h] BYREF
      String v90; // [xsp+B8h] [xbp-D8h] BYREF
      String v91; // [xsp+D0h] [xbp-C0h] BYREF
      String v92; // [xsp+E8h] [xbp-A8h] BYREF
      String v93; // [xsp+100h] [xbp-90h] BYREF
      String v94; // [xsp+118h] [xbp-78h] BYREF
      String v95; // [xsp+130h] [xbp-60h] BYREF
      String v96; // [xsp+148h] [xbp-48h] BYREF
    
      String::String(&v96, "sc/ui.sc");
      String::String(&v95, "link_device_generic");
      String::String(&v94, "TID_LINK_NEW_DEVICE_TITLE");
      String::getFormatted((__int64 *)&v93.m_length, (String *)"errorCode_%i", v6, a2);
      DeviceLinkSubScreen::DeviceLinkSubScreen((DeviceLinkSubScreen *)a1, &v96, &v95, &v94, a3, &v93);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_1004674D8;
      *(_QWORD *)(a1 + 96) = &off_100467660;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 261) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      v7 = (_BYTE *)DropGUIContainer::addGameButton((DropGUIContainer *)a1, "button", 1);
      *(_QWORD *)(a1 + 248) = v7;
      v7[8] = a3 ^ 1;
      v8 = *(void (__fastcall **)(_BYTE *, void *, _QWORD))(*(_QWORD *)v7 + 352LL);
      String = StringTable::getString((#1308 *)"TID_BUTTON_OK", v9);
      v8(v7, String, 0);
      v11 = DropGUIContainer::addGameButton((DropGUIContainer *)a1, "connect_button", 1);
      *(_QWORD *)(a1 + 256) = v11;
      *(_BYTE *)(v11 + 8) = 0;
      *(_DWORD *)(a1 + 264) = a2;
      if ( (int)a2 > 99 )
      {
        switch ( (_DWORD)a2 )
        {
          case 'd':
            v23 = *(MovieClip **)(a1 + 112);
            v24 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_CODE_ERROR_0_TITLE", v12);
            MovieClip::setText(v23, "title", v24);
            v25 = *(MovieClip **)(a1 + 112);
            v27 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_CODE_ERROR_0", v26);
            MovieClip::setText(v25, "text", v27);
            break;
          case 'e':
            v18 = *(MovieClip **)(a1 + 112);
            v19 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_CODE_ERROR_1_TITLE", v12);
            MovieClip::setText(v18, "title", v19);
            v20 = *(MovieClip **)(a1 + 112);
            v22 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_CODE_ERROR_1", v21);
            MovieClip::setText(v20, "text", v22);
            break;
          case 'f':
            v28 = *(MovieClip **)(a1 + 112);
            v29 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_CODE_ERROR_2_TITLE", v12);
            MovieClip::setText(v28, "title", v29);
            v30 = *(MovieClip **)(a1 + 112);
            v32 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_CODE_ERROR_2", v31);
            MovieClip::setText(v30, "text", v32);
            break;
          default:
    LABEL_10:
            String::format((String *)"DeviceLinkErrorScreen invalid error code %d", v12, a2);
            Debugger::warning((__siginfo *)&v83, v33);
            String::~String();
            break;
        }
      }
      else
      {
        switch ( (int)a2 )
        {
          case 1:
            v13 = *(MovieClip **)(a1 + 112);
            v14 = (const String *)StringTable::getString(
                                    (#1308 *)"TID_DEVICE_LINK_ERROR_ALREADY_BOUND_TO_ALL_PLATFORMS_TITLE",
                                    v12);
            MovieClip::setText(v13, "title", v14);
            v15 = *(MovieClip **)(a1 + 112);
            v17 = (const String *)StringTable::getString(
                                    (#1308 *)"TID_DEVICE_LINK_ERROR_ALREADY_BOUND_TO_ALL_PLATFORMS",
                                    v16);
            MovieClip::setText(v15, "text", v17);
            break;
          case 2:
            v35 = *(MovieClip **)(a1 + 112);
            v36 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_NOT_ATTACHED_TITLE", v12);
            MovieClip::setText(v35, "title", v36);
            v37 = *(MovieClip **)(a1 + 112);
            v39 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_NOT_ATTACHED", v38);
            MovieClip::setText(v37, "text", v39);
            break;
          case 3:
            v40 = *(MovieClip **)(a1 + 112);
            v41 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_TIMEOUT", v12);
            v42 = (LogicDataTables *)MovieClip::setText(v40, "title", v41);
            v43 = (TimeUtil *)*(unsigned int *)(LogicDataTables::getGlobals(v42) + 492LL);
            v45 = StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_TIMEOUT_TEXT", v44);
            String::String(&v91, "<time>");
            TimeUtil::getTimeString(v43, 0, v46);
            String::replace(&v92, v45, &v91, &v90);
            String::~String();
            String::~String();
            MovieClip::setText(*(MovieClip **)(a1 + 112), "text", &v92);
            String::~String();
            break;
          case 4:
            v47 = *(MovieClip **)(a1 + 112);
            v48 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_INVALID_LINK_CODE", v12);
            v49 = (LogicDataTables *)MovieClip::setText(v47, "title", v48);
            v50 = (TimeUtil *)*(unsigned int *)(LogicDataTables::getGlobals(v49) + 492LL);
            v52 = StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_INVALID_LINK_CODE_TEXT", v51);
            String::String(&v88, "<time>");
            TimeUtil::getTimeString(v50, 0, v53);
            String::replace(&v89, v52, &v88, &v87);
            String::~String();
            String::~String();
            MovieClip::setText(*(MovieClip **)(a1 + 112), "text", &v89);
            String::~String();
            break;
          case 5:
            v54 = *(MovieClip **)(a1 + 112);
            v55 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_OLD_DEVICE_NOT_ACTIVE", v12);
            MovieClip::setText(v54, "title", v55);
            v56 = *(MovieClip **)(a1 + 112);
            v58 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_OLD_DEVICE_NOT_ACTIVE_TEXT", v57);
            MovieClip::setText(v56, "text", v58);
            break;
          case 6:
            v59 = *(_BYTE **)(a1 + 248);
            v59[8] = 1;
            v60 = *(void (__fastcall **)(_BYTE *, void *, _QWORD))(*(_QWORD *)v59 + 352LL);
            v61 = StringTable::getString((#1308 *)"TID_OPEN_GAMECENTER_BUTTON", v12);
            v60(v59, v61, 0);
            v62 = *(MovieClip **)(a1 + 112);
            v64 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_GAME_CENTER", v63);
            MovieClip::setText(v62, "title", v64);
            v65 = *(MovieClip **)(a1 + 112);
            v67 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_GAME_CENTER_TEXT", v66);
            MovieClip::setText(v65, "text", v67);
            break;
          case 7:
            v68 = *(MovieClip **)(a1 + 112);
            v69 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_WRONG_ACCOUNT_TITLE", v12);
            MovieClip::setText(v68, "title", v69);
            v70 = *(MovieClip **)(a1 + 112);
            v72 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_WRONG_ACCOUNT", v71);
            MovieClip::setText(v70, "text", v72);
            break;
          case 8:
            v73 = *(MovieClip **)(a1 + 112);
            v74 = (const String *)StringTable::getString(
                                    (#1308 *)"TID_DEVICE_LINK_ERROR_CODE_CURRENT_VILLAGE_TOO_HIGH",
                                    v12);
            MovieClip::setText(v73, "title", v74);
            v76 = StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_CODE_CURRENT_VILLAGE_TOO_HIGH_TEXT", v75);
            String::String(&v85, "<level>");
            String::getFormatted((__int64 *)&v84.m_length, (String *)"%i", v77, 9999);
            String::replace(&v86, v76, &v85, &v84);
            String::~String();
            String::~String();
            MovieClip::setText(*(MovieClip **)(a1 + 112), "text", &v86);
            String::~String();
            break;
          case 9:
            v78 = *(MovieClip **)(a1 + 112);
            v79 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_CODE_SAME_PLATFORM", v12);
            MovieClip::setText(v78, "title", v79);
            v80 = *(MovieClip **)(a1 + 112);
            v82 = (const String *)StringTable::getString((#1308 *)"TID_DEVICE_LINK_ERROR_CODE_SAME_PLATFORM_TEXT", v81);
            MovieClip::setText(v80, "text", v82);
            break;
          default:
            goto LABEL_10;
        }
      }
      return a1;
    }

    // attributes: thunk
    void __fastcall DeviceLinkErrorScreen::DeviceLinkErrorScreen(DeviceLinkErrorScreen *this, __int64 a2, char a3)
    {
      __ZN21DeviceLinkErrorScreenC2Eib((__int64)this, a2, a3);
    }

    void __fastcall DeviceLinkErrorScreen::~DeviceLinkErrorScreen(_QWORD *a1)
    {
      *a1 = off_1004674D8;
      a1[12] = &off_100467660;
      *(_QWORD *)((char *)a1 + 261) = 0;
      a1[31] = 0;
      a1[32] = 0;
      DeviceLinkSubScreen::~DeviceLinkSubScreen((UnlockAccountOkMessage *)a1);
    }

    void __fastcall DeviceLinkErrorScreen::~DeviceLinkErrorScreen(_QWORD *a1)
    {
      *a1 = off_1004674D8;
      a1[12] = &off_100467660;
      *(_QWORD *)((char *)a1 + 261) = 0;
      a1[31] = 0;
      a1[32] = 0;
      DeviceLinkSubScreen::~DeviceLinkSubScreen((UnlockAccountOkMessage *)a1);
      operator delete(a1);
    }

    void __fastcall DeviceLinkErrorScreen::update(SetDeviceTokenMessage *this, float a2)
    {
      ;
    }

    // attributes: thunk
    void __fastcall DeviceLinkErrorScreen::poppedBack(UnlockAccountOkMessage *this)
    {
      DeviceLinkSubScreen::poppedBack(this);
    }

    __int64 __fastcall DeviceLinkErrorScreen::buttonClicked(__int64 result, __int64 a2)
    {
      __int64 v3; // x20
      GameCenter *v4; // x21
      __int64 Instance; // x0
      __int64 DeviceLinkWindow; // x0
      __int64 v7; // x0
      __int64 v8; // x0
      String v9; // [xsp+8h] [xbp-38h] BYREF
    
      v3 = result;
      if ( *(_QWORD *)(result + 248) == a2 )
      {
        if ( *(_DWORD *)(result + 264) == 6 )
        {
          v4 = *(GameCenter **)(GameCenterManager::sm_pInstance + 8);
          if ( v4 )
          {
            String::String(&v9, "/me");
            GameCenter::openGameCenterApplication(v4, &v9);
            String::~String();
          }
        }
        Instance = GUI::getInstance((BadgePopup *)result);
        DeviceLinkWindow = GUI::getDeviceLinkWindow(Instance);
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)DeviceLinkWindow + 352LL))(DeviceLinkWindow);
      }
      if ( *(_QWORD *)(v3 + 256) == a2 )
      {
        v7 = GUI::getInstance((BadgePopup *)result);
        v8 = GUI::getDeviceLinkWindow(v7);
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 352LL))(v8);
      }
      return result;
    }

    __int64 DeviceLinkErrorScreen::getSubScreenType()
    {
      return 9;
    }

}; // end class DeviceLinkErrorScreen
