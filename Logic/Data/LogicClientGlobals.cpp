class LogicClientGlobals
{
public:

    void __fastcall LogicClientGlobals::LogicClientGlobals(LogicClientGlobals *this, const #1224 *a2, int a3)
    {
      LogicDataTable::LogicDataTable(this, a2, a3);
      *(_QWORD *)this = off_100460728;
      String::String((String *)this + 9);
      String::String((String *)this + 10);
      String::String((String *)this + 11);
      String::String((String *)this + 12);
      String::String((String *)((char *)this + 400));
      String::String((String *)((char *)this + 424));
      String::String((String *)((char *)this + 448));
      LogicClientGlobals::initializeMembers(this);
    }

    // attributes: thunk
    void __fastcall LogicClientGlobals::LogicClientGlobals(LogicClientGlobals *this, const #1224 *a2, int a3)
    {
      __ZN18LogicClientGlobalsC2EPK8CSVTablei(this, a2, a3);
    }

    __int64 __fastcall LogicClientGlobals::destruct(#1343 *this)
    {
      LogicDataTable::destruct(this);
      return LogicClientGlobals::initializeMembers(this);
    }

    void __fastcall LogicClientGlobals::createReferences(#1343 *this)
    {
      #1224 *CSVTable; // x0
      __int64 FileName; // x0
      const String *v4; // x1
      #1224 *v5; // x0
      __int64 v6; // x0
      const String *v7; // x1
      #1224 *v8; // x0
      __int64 v9; // x0
      const String *v10; // x1
      const char *v11; // x2
      __int64 v12; // x0
      const String *v13; // x1
      __int64 v14; // x0
      const String *v15; // x1
      String v16; // [xsp+0h] [xbp-840h] BYREF
      String v17; // [xsp+18h] [xbp-828h] BYREF
      String v18; // [xsp+30h] [xbp-810h] BYREF
      String v19; // [xsp+48h] [xbp-7F8h] BYREF
      String v20; // [xsp+60h] [xbp-7E0h] BYREF
      String v21; // [xsp+78h] [xbp-7C8h] BYREF
      String v22; // [xsp+90h] [xbp-7B0h] BYREF
      String v23; // [xsp+A8h] [xbp-798h] BYREF
      String v24; // [xsp+C0h] [xbp-780h] BYREF
      String v25; // [xsp+D8h] [xbp-768h] BYREF
      String v26; // [xsp+F0h] [xbp-750h] BYREF
      String v27; // [xsp+108h] [xbp-738h] BYREF
      String v28; // [xsp+120h] [xbp-720h] BYREF
      String v29; // [xsp+138h] [xbp-708h] BYREF
      String v30; // [xsp+150h] [xbp-6F0h] BYREF
      String v31; // [xsp+168h] [xbp-6D8h] BYREF
      String v32; // [xsp+180h] [xbp-6C0h] BYREF
      String v33; // [xsp+198h] [xbp-6A8h] BYREF
      String v34; // [xsp+1B0h] [xbp-690h] BYREF
      String v35; // [xsp+1C8h] [xbp-678h] BYREF
      String v36; // [xsp+1E0h] [xbp-660h] BYREF
      String v37; // [xsp+1F8h] [xbp-648h] BYREF
      String v38; // [xsp+210h] [xbp-630h] BYREF
      String v39; // [xsp+228h] [xbp-618h] BYREF
      String v40; // [xsp+240h] [xbp-600h] BYREF
      String v41; // [xsp+258h] [xbp-5E8h] BYREF
      String v42; // [xsp+270h] [xbp-5D0h] BYREF
      String v43; // [xsp+288h] [xbp-5B8h] BYREF
      String v44; // [xsp+2A0h] [xbp-5A0h] BYREF
      String v45; // [xsp+2B8h] [xbp-588h] BYREF
      String v46; // [xsp+2D0h] [xbp-570h] BYREF
      String v47; // [xsp+2E8h] [xbp-558h] BYREF
      String v48; // [xsp+300h] [xbp-540h] BYREF
      String v49; // [xsp+318h] [xbp-528h] BYREF
      String v50; // [xsp+330h] [xbp-510h] BYREF
      String v51; // [xsp+348h] [xbp-4F8h] BYREF
      String v52; // [xsp+360h] [xbp-4E0h] BYREF
      String v53; // [xsp+378h] [xbp-4C8h] BYREF
      String v54; // [xsp+390h] [xbp-4B0h] BYREF
      String v55; // [xsp+3A8h] [xbp-498h] BYREF
      String v56; // [xsp+3C0h] [xbp-480h] BYREF
      String v57; // [xsp+3D8h] [xbp-468h] BYREF
      String v58; // [xsp+3F0h] [xbp-450h] BYREF
      String v59; // [xsp+408h] [xbp-438h] BYREF
      String v60; // [xsp+420h] [xbp-420h] BYREF
      String v61; // [xsp+438h] [xbp-408h] BYREF
      String v62; // [xsp+450h] [xbp-3F0h] BYREF
      String v63; // [xsp+468h] [xbp-3D8h] BYREF
      String v64; // [xsp+480h] [xbp-3C0h] BYREF
      String v65; // [xsp+498h] [xbp-3A8h] BYREF
      String v66; // [xsp+4B0h] [xbp-390h] BYREF
      String v67; // [xsp+4C8h] [xbp-378h] BYREF
      String v68; // [xsp+4E0h] [xbp-360h] BYREF
      String v69; // [xsp+4F8h] [xbp-348h] BYREF
      String v70; // [xsp+510h] [xbp-330h] BYREF
      String v71; // [xsp+528h] [xbp-318h] BYREF
      String v72; // [xsp+540h] [xbp-300h] BYREF
      String v73; // [xsp+558h] [xbp-2E8h] BYREF
      String v74; // [xsp+570h] [xbp-2D0h] BYREF
      String v75; // [xsp+588h] [xbp-2B8h] BYREF
      String v76; // [xsp+5A0h] [xbp-2A0h] BYREF
      String v77; // [xsp+5B8h] [xbp-288h] BYREF
      String v78; // [xsp+5D0h] [xbp-270h] BYREF
      String v79; // [xsp+5E8h] [xbp-258h] BYREF
      String v80; // [xsp+600h] [xbp-240h] BYREF
      String v81; // [xsp+618h] [xbp-228h] BYREF
      String v82; // [xsp+630h] [xbp-210h] BYREF
      String v83; // [xsp+648h] [xbp-1F8h] BYREF
      String v84; // [xsp+660h] [xbp-1E0h] BYREF
      String v85; // [xsp+678h] [xbp-1C8h] BYREF
      String v86; // [xsp+690h] [xbp-1B0h] BYREF
      String v87; // [xsp+6A8h] [xbp-198h] BYREF
      String v88; // [xsp+6C0h] [xbp-180h] BYREF
      String v89; // [xsp+6D8h] [xbp-168h] BYREF
      String v90; // [xsp+6F0h] [xbp-150h] BYREF
      String v91; // [xsp+708h] [xbp-138h] BYREF
      String v92; // [xsp+720h] [xbp-120h] BYREF
      String v93; // [xsp+738h] [xbp-108h] BYREF
      String v94; // [xsp+750h] [xbp-F0h] BYREF
      String v95; // [xsp+768h] [xbp-D8h] BYREF
      String v96; // [xsp+780h] [xbp-C0h] BYREF
      String v97; // [xsp+798h] [xbp-A8h] BYREF
      String v98; // [xsp+7B0h] [xbp-90h] BYREF
      String v99; // [xsp+7C8h] [xbp-78h] BYREF
      String v100; // [xsp+7E0h] [xbp-60h] BYREF
      String v101; // [xsp+7F8h] [xbp-48h] BYREF
    
      LogicDataTable::createReferences(this);
      String::String(&v101, "UDP_HEARTBEAT_MS");
      *((_DWORD *)this + 22) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v101,
                                             0)
                                         + 100);
      String::~String(&v101);
      String::String(&v100, "UDP_DISCONNECTED_SECONDS");
      *((_DWORD *)this + 23) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v100,
                                             0)
                                         + 100);
      String::~String(&v100);
      String::String(&v99, "SHOW_MATCHMAKING_TIME_TOLERANCE");
      *((_DWORD *)this + 28) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v99,
                                             0)
                                         + 100);
      String::~String(&v99);
      String::String(&v98, "LOCAL_NOTIFICATION_FREE_WORKERS_MINUTES");
      *((_DWORD *)this + 24) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v98,
                                             0)
                                         + 100);
      String::~String(&v98);
      String::String(&v97, "SPELL_DRAG_OBJECT_ALPHA");
      *((_DWORD *)this + 25) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v97,
                                             0)
                                         + 100);
      String::~String(&v97);
      String::String(&v96, "MIN_SPELL_COUNT_FOR_SORT_BUTTON");
      *((_DWORD *)this + 26) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v96,
                                             0)
                                         + 100);
      String::~String(&v96);
      String::String(&v95, "SPELL_DRAG_NAME_Y_POS");
      *((float *)this + 27) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v95,
                                                0)
                                            + 100);
      String::~String(&v95);
      String::String(&v94, "SHOW_NOT_ENOUGH_MANA_AFTER_FAILURES");
      *((_DWORD *)this + 33) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v94,
                                             0)
                                         + 100);
      String::~String(&v94);
      String::String(&v93, "SHOW_MANA_FULL_AFTER_SECONDS");
      *((float *)this + 34) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v93,
                                                0)
                                            + 100);
      String::~String(&v93);
      String::String(&v92, "BACKGROUND_Y_SIZE");
      *((float *)this + 35) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v92,
                                                0)
                                            + 100);
      String::~String(&v92);
      String::String(&v91, "BACKGROUND_Y_OFFSET");
      *((float *)this + 36) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v91,
                                                0)
                                            + 100);
      String::~String(&v91);
      String::String(&v90, "REPLAY_BACKGROUND_Y_SIZE");
      *((float *)this + 37) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v90,
                                                0)
                                            + 100);
      String::~String(&v90);
      String::String(&v89, "REPLAY_BACKGROUND_Y_OFFSET");
      *((float *)this + 38) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v89,
                                                0)
                                            + 100);
      String::~String(&v89);
      String::String(&v88, "REPLAY_BATTLE_END_HUD_DELAY_MILLIS");
      *((float *)this + 39) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v88,
                                                0)
                                            + 100)
                            * 0.001;
      String::~String(&v88);
      String::String(&v87, "UNIT_SPEED_1");
      *((_DWORD *)this + 40) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v87,
                                             0)
                                         + 100);
      String::~String(&v87);
      String::String(&v86, "UNIT_SPEED_2");
      *((_DWORD *)this + 41) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v86,
                                             0)
                                         + 100);
      String::~String(&v86);
      String::String(&v85, "UNIT_SPEED_3");
      *((_DWORD *)this + 42) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v85,
                                             0)
                                         + 100);
      String::~String(&v85);
      String::String(&v84, "UNIT_SPEED_4");
      *((_DWORD *)this + 43) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v84,
                                             0)
                                         + 100);
      String::~String(&v84);
      String::String(&v83, "VIBRATE_AFTER_MATCHMAKING_SECONDS");
      *((_DWORD *)this + 30) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v83,
                                             0)
                                         + 100);
      String::~String(&v83);
      String::String(&v82, "NAME_CHANGE_START_LEVEL");
      *((_DWORD *)this + 31) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v82,
                                             0)
                                         + 100);
      String::~String(&v82);
      String::String(&v81, "ENABLE_NAME_CHANGE");
      *((_BYTE *)this + 128) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v81,
                                            0)
                                        + 160);
      String::~String(&v81);
      String::String(&v80, "APP_RATE_XP_LEVEL");
      *((_DWORD *)this + 50) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v80,
                                             0)
                                         + 100);
      String::~String(&v80);
      String::String(&v79, "MAX_SPELL_PENDING_TIME");
      *((float *)this + 29) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v79,
                                                0)
                                            + 100)
                            * 0.001;
      String::~String(&v79);
      String::String(&v78, "TAUNT_LIMIT");
      *((_DWORD *)this + 81) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v78,
                                             0)
                                         + 100);
      String::~String(&v78);
      String::String(&v77, "COME_BACK_NOTIFICATION_DELAY_HOURS_SMALL");
      *((_DWORD *)this + 51) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v77,
                                             0)
                                         + 100);
      String::~String(&v77);
      String::String(&v76, "COME_BACK_NOTIFICATION_DELAY_HOURS_MEDIUM");
      *((_DWORD *)this + 52) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v76,
                                             0)
                                         + 100);
      String::~String(&v76);
      String::String(&v75, "COME_BACK_NOTIFICATION_DELAY_HOURS_LARGE");
      *((_DWORD *)this + 53) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v75,
                                             0)
                                         + 100);
      String::~String(&v75);
      String::String(&v74, "GAME_CENTER_ACHIEVEMENTS_ENABLED");
      *((_BYTE *)this + 321) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v74,
                                            0)
                                        + 160);
      String::~String(&v74);
      String::String(&v73, "GAMECENTER_REAUTHORIZE");
      *((_BYTE *)this + 322) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v73,
                                            0)
                                        + 160);
      String::~String(&v73);
      String::String(&v72, "FEEDBACK_EMAIL");
      (*(void (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(this, &v72, 0);
      String::operator=((String *)this + 9);
      String::~String(&v72);
      if ( !*((_DWORD *)this + 54) )
      {
        CSVTable = (#1224 *)LogicDataTable::getCSVTable(this);
        FileName = CSVTable::getFileName(CSVTable);
        operator+(&v71, "FEEDBACK_EMAIL is not defined in ", FileName);
        Debugger::warning((__siginfo *)&v71, v4);
        String::~String(&v71);
      }
      String::String(&v70, "FAQ_URL");
      (*(void (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(this, &v70, 0);
      String::operator=((String *)this + 10);
      String::~String(&v70);
      if ( !*((_DWORD *)this + 60) )
      {
        v5 = (#1224 *)LogicDataTable::getCSVTable(this);
        v6 = CSVTable::getFileName(v5);
        operator+(&v69, "FAQ_URL is not defined in ", v6);
        Debugger::warning((__siginfo *)&v69, v7);
        String::~String(&v69);
      }
      String::String(&v68, "FORUMS_URL");
      (*(void (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(this, &v68, 0);
      String::operator=((String *)this + 11);
      String::~String(&v68);
      if ( !*((_DWORD *)this + 66) )
      {
        v8 = (#1224 *)LogicDataTable::getCSVTable(this);
        v9 = CSVTable::getFileName(v8);
        operator+(&v67, "FORUMS_URL is not defined in ", v9);
        Debugger::warning((__siginfo *)&v67, v10);
        String::~String(&v67);
      }
      String::String(&v66, "GAME_FACEBOOK_URL");
      (*(void (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(this, &v66, 0);
      String::operator=((String *)this + 12);
      String::~String(&v66);
      String::String(&v65, "PAYING_USER_EMAIL_ID");
      *((_DWORD *)this + 78) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v65,
                                             0)
                                         + 100);
      String::~String(&v65);
      String::String(&v64, "GAME_CENTER_CHALLENGES_ENABLED");
      *((_BYTE *)this + 320) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v64,
                                            0)
                                        + 160);
      String::~String(&v64);
      String::String(&v63, "SECTOR_COMMAND_MESSAGE_INTERVAL_SECONDS");
      *((_DWORD *)this + 79) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v63,
                                             0)
                                         + 100);
      String::~String(&v63);
      Debugger::doAssert((Debugger *)(*((_DWORD *)this + 79) > 0), (bool)"", v11);
      String::String(&v62, "NO_DEPLOY_ZONE_COLOR");
      v12 = (*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(this, &v62, 0);
      *((_DWORD *)this + 82) = LogicStringUtil::strHexToInt((LogicStringUtil *)(v12 + 104), v13);
      String::~String(&v62);
      String::String(&v61, "ENEMY_OUTLINE_COLOR");
      v14 = (*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(this, &v61, 0);
      *((_DWORD *)this + 83) = LogicStringUtil::strHexToInt((LogicStringUtil *)(v14 + 104), v15);
      String::~String(&v61);
      *((_DWORD *)this + 84) = 0;
      String::String(&v60, "OUTLINE_THICKNESS");
      *((float *)this + 85) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v60,
                                                0)
                                            + 100);
      String::~String(&v60);
      String::String(&v59, "OUTLINE_BLUR_PERCENT");
      *((float *)this + 86) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v59,
                                                0)
                                            + 100)
                            * 0.01;
      String::~String(&v59);
      String::String(&v58, "OUTLINE_BLUR_ITERATIONS");
      *((_DWORD *)this + 87) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v58,
                                             0)
                                         + 100);
      String::~String(&v58);
      String::String(&v57, "POPUP_BLUR_PERCENT");
      *((float *)this + 88) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v57,
                                                0)
                                            + 100)
                            * 0.01;
      String::~String(&v57);
      String::String(&v56, "POPUP_BLUR_ITERATIONS");
      *((_DWORD *)this + 89) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v56,
                                             0)
                                         + 100);
      String::~String(&v56);
      String::String(&v55, "MATCH_END_BLUR_PERCENT");
      *((float *)this + 90) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v55,
                                                0)
                                            + 100)
                            * 0.01;
      String::~String(&v55);
      String::String(&v54, "MATCH_END_BLUR_ITERATIONS");
      *((_DWORD *)this + 91) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v54,
                                             0)
                                         + 100);
      String::~String(&v54);
      String::String(&v53, "TAUNT_SOUND_COOLDOWN");
      *((float *)this + 120) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                 this,
                                                 &v53,
                                                 0)
                                             + 100)
                             * 0.001;
      String::~String(&v53);
      String::String(&v52, "LOW_GFX_DEVICES");
      *((_QWORD *)this + 8) = (*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(this, &v52, 0)
                            + 128;
      String::~String(&v52);
      String::String(&v51, "MED_GFX_DEVICES");
      *((_QWORD *)this + 9) = (*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(this, &v51, 0)
                            + 128;
      String::~String(&v51);
      String::String(&v50, "LOW_MEM_DEVICES");
      *((_QWORD *)this + 10) = (*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                 this,
                                 &v50,
                                 0)
                             + 128;
      String::~String(&v50);
      String::String(&v49, "TAUNTS_ENABLED");
      *((_BYTE *)this + 368) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v49,
                                            0)
                                        + 160);
      String::~String(&v49);
      String::String(&v48, "SHOW_TAUNT_TIME_SEC");
      *((_DWORD *)this + 93) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v48,
                                             0)
                                         + 100);
      String::~String(&v48);
      String::String(&v47, "REPLAY_ENABLED");
      *((_BYTE *)this + 376) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v47,
                                            0)
                                        + 160);
      String::~String(&v47);
      String::String(&v46, "NPC_REPLAY_ENABLED");
      *((_BYTE *)this + 377) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v46,
                                            0)
                                        + 160);
      String::~String(&v46);
      String::String(&v45, "REPLAY_SHOW_TOUCH_EVENTS");
      *((_BYTE *)this + 378) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v45,
                                            0)
                                        + 160);
      String::~String(&v45);
      String::String(&v44, "ENABLE_FACEBOOK");
      *((_BYTE *)this + 379) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v44,
                                            0)
                                        + 160);
      String::~String(&v44);
      String::String(&v43, "ENABLE_GAMECENTER_FRIENDS");
      *((_BYTE *)this + 380) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v43,
                                            0)
                                        + 160);
      String::~String(&v43);
      String::String(&v42, "SWITCH_CONFIRMATION_XP_LEVEL");
      *((_DWORD *)this + 96) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v42,
                                             0)
                                         + 100);
      String::~String(&v42);
      String::String(&v41, "PROMPT_GC_SWITCH_MIN_XP_LEVEL");
      *((_DWORD *)this + 97) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v41,
                                             0)
                                         + 100);
      String::~String(&v41);
      String::String(&v40, "MAIN_MENU_PARALLAX");
      *((float *)this + 98) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v40,
                                                0)
                                            + 100)
                            * 0.01;
      String::~String(&v40);
      String::String(&v39, "PAYMENT_LIMIT_CONFIRMATION_ENABLED");
      *((_BYTE *)this + 176) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v39,
                                            0)
                                        + 160);
      String::~String(&v39);
      String::String(&v38, "PAYMENT_LIMIT_CONFIRMATION_USD");
      *((_DWORD *)this + 46) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v38,
                                             0)
                                         + 100);
      String::~String(&v38);
      String::String(&v37, "PAYMENT_LIMIT_CONFIRMATION_TIME");
      *((_DWORD *)this + 45) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v37,
                                             0)
                                         + 100);
      String::~String(&v37);
      String::String(&v36, "CONFIRM_WORD_MAX_LENGTH");
      *((_DWORD *)this + 47) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v36,
                                             0)
                                         + 100);
      String::~String(&v36);
      String::String(&v35, "DISCONNECT_IN_APPS");
      *((_BYTE *)this + 196) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v35,
                                            0)
                                        + 160);
      String::~String(&v35);
      String::String(&v34, "IN_APP_RETRY_LIMIT");
      *((_DWORD *)this + 48) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                             this,
                                             &v34,
                                             0)
                                         + 100);
      String::~String(&v34);
      String::String(&v33, "RETRY_PURCHASES_IN_SHOP");
      *((_BYTE *)this + 197) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v33,
                                            0)
                                        + 160);
      String::~String(&v33);
      String::String(&v32, "PARENTS_GUIDE_URL");
      (*(void (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(this, &v32, 0);
      String::operator=((String *)((char *)this + 400));
      String::~String(&v32);
      String::String(&v31, "TOS_URL");
      (*(void (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(this, &v31, 0);
      String::operator=((String *)((char *)this + 424));
      String::~String(&v31);
      String::String(&v30, "PRIVACY_POLICY_URL");
      (*(void (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(this, &v30, 0);
      String::operator=((String *)((char *)this + 448));
      String::~String(&v30);
      String::String(&v29, "HELPSHIFT_ENABLED");
      *((_BYTE *)this + 472) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v29,
                                            0)
                                        + 160);
      String::~String(&v29);
      String::String(&v28, "SEND_GC_ACHIVEMENT_0_PROGRESS");
      *((_BYTE *)this + 473) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v28,
                                            0)
                                        + 160);
      String::~String(&v28);
      String::String(&v27, "SEND_GC_ACHIVEMENT_PROGRESS_ONCE");
      *((_BYTE *)this + 474) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v27,
                                            0)
                                        + 160);
      String::~String(&v27);
      String::String(&v26, "USE_GC_SEND_ALL_ACHIEVEMENTS");
      *((_BYTE *)this + 475) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v26,
                                            0)
                                        + 160);
      String::~String(&v26);
      String::String(&v25, "SHOW_NOTIFICATION_FOR_DONATE");
      *((_BYTE *)this + 476) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v25,
                                            0)
                                        + 160);
      String::~String(&v25);
      String::String(&v24, "KEEP_ALIVE_WARNING_MS");
      *((_DWORD *)this + 121) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                              this,
                                              &v24,
                                              0)
                                          + 100);
      String::~String(&v24);
      String::String(&v23, "PING_WARNING_MS");
      *((_DWORD *)this + 122) = *(_DWORD *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                              this,
                                              &v23,
                                              0)
                                          + 100);
      String::~String(&v23);
      String::String(&v22, "MATCHMAKING_TIP_INTERVAL_SEC");
      *((float *)this + 99) = (float)*(int *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                                this,
                                                &v22,
                                                0)
                                            + 100);
      String::~String(&v22);
      String::String(&v21, "APP_RATE_DIALOG_ENABLED");
      *((_BYTE *)this + 492) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v21,
                                            0)
                                        + 160);
      String::~String(&v21);
      String::String(&v20, "PURCHASE_DIALOG_ENABLED");
      *((_BYTE *)this + 493) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v20,
                                            0)
                                        + 160);
      String::~String(&v20);
      String::String(&v19, "PLAYER_ID_SHOW_ENABLED");
      *((_BYTE *)this + 494) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v19,
                                            0)
                                        + 160);
      String::~String(&v19);
      String::String(&v18, "ATTRIBUTION_MAT");
      *((_BYTE *)this + 495) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v18,
                                            0)
                                        + 160);
      String::~String(&v18);
      String::String(&v17, "ATTRIBUTION_FB");
      *((_BYTE *)this + 496) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v17,
                                            0)
                                        + 160);
      String::~String(&v17);
      String::String(&v16, "ATTRIBUTION_IAD");
      *((_BYTE *)this + 497) = *(_BYTE *)((*(__int64 (__fastcall **)(#1343 *, String *, _QWORD))(*(_QWORD *)this + 48LL))(
                                            this,
                                            &v16,
                                            0)
                                        + 160);
      String::~String(&v16);
    }

    __int64 __fastcall LogicClientGlobals::initializeMembers(#1343 *this)
    {
      __int64 result; // x0
    
      *((_DWORD *)this + 120) = 0;
      *((_DWORD *)this + 99) = 0;
      *((_DWORD *)this + 98) = 0;
      *((_BYTE *)this + 322) = 0;
      *((_BYTE *)this + 321) = 0;
      *((_DWORD *)this + 50) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 11) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 9) = 0;
      *((_QWORD *)this + 10) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_DWORD *)this + 43) = 0;
      *(_QWORD *)((char *)this + 164) = 0;
      *(_QWORD *)((char *)this + 156) = 0;
      *(_QWORD *)((char *)this + 148) = 0;
      *(_QWORD *)((char *)this + 140) = 0;
      *(_QWORD *)((char *)this + 132) = 0;
      *((_BYTE *)this + 368) = 0;
      *((_QWORD *)this + 44) = 0;
      *((_QWORD *)this + 45) = 0;
      *((_QWORD *)this + 42) = 0;
      *((_QWORD *)this + 43) = 0;
      *((_QWORD *)this + 41) = 0;
      *((_BYTE *)this + 378) = 0;
      *((_WORD *)this + 188) = 0;
      *((_DWORD *)this + 93) = 0;
      String::operator=((char *)this + 216, "");
      String::operator=((char *)this + 240, "");
      String::operator=((char *)this + 264, "");
      *(_QWORD *)((char *)this + 204) = 0;
      *((_DWORD *)this + 53) = 0;
      *((_DWORD *)this + 81) = 0;
      String::operator=((char *)this + 288, "");
      *((_DWORD *)this + 78) = 0;
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 31) = 0;
      *((_BYTE *)this + 128) = 0;
      *((_BYTE *)this + 320) = 0;
      *((_DWORD *)this + 79) = 0;
      *((_BYTE *)this + 379) = 0;
      *((_BYTE *)this + 380) = 0;
      *((_QWORD *)this + 48) = 0;
      String::operator=((char *)this + 400, "");
      String::operator=((char *)this + 424, "");
      result = String::operator=((char *)this + 448, "");
      *((_BYTE *)this + 176) = 0;
      *((_WORD *)this + 98) = 0;
      *(_QWORD *)((char *)this + 188) = 0;
      *(_QWORD *)((char *)this + 180) = 0;
      *((_BYTE *)this + 476) = 0;
      *((_DWORD *)this + 118) = 0;
      *(_QWORD *)((char *)this + 490) = 0;
      *(_QWORD *)((char *)this + 484) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicClientGlobals::~LogicClientGlobals(#1343 *this)
    {
      __ZN18LogicClientGlobalsD2Ev(this);
    }

    void __fastcall LogicClientGlobals::~LogicClientGlobals(#1343 *this)
    {
      LogicClientGlobals::~LogicClientGlobals(this);
      operator delete(this);
    }

    void __fastcall LogicClientGlobals::~LogicClientGlobals(#1343 *this)
    {
      *(_QWORD *)this = off_100460728;
      String::~String((String *)((char *)this + 448));
      String::~String((String *)((char *)this + 424));
      String::~String((String *)((char *)this + 400));
      String::~String((String *)this + 12);
      String::~String((String *)this + 11);
      String::~String((String *)this + 10);
      String::~String((String *)this + 9);
      LogicDataTable::~LogicDataTable(this);
    }

}; // end class LogicClientGlobals
