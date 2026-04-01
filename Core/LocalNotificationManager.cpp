class LocalNotificationManager
{
public:

    LocalNotificationManager *__fastcall LocalNotificationManager::LocalNotificationManager(LocalNotificationManager *a1)
    {
      *((_QWORD *)a1 + 4) = 0;
      *((_QWORD *)a1 + 5) = 0;
      *((_QWORD *)a1 + 2) = 0;
      *((_QWORD *)a1 + 3) = 0;
      *(_QWORD *)a1 = 0;
      *((_QWORD *)a1 + 1) = 0;
      LocalNotificationManager::initializeMembers(a1);
      return a1;
    }

    __int64 __fastcall LocalNotificationManager::~LocalNotificationManager(LocalNotificationManager *a1)
    {
      LocalNotificationManager::initializeMembers(a1);
      std::vector<LocalNotificationManager::NotifData>::~vector((char *)a1 + 24);
      return std::vector<LocalNotificationManager::NotifData>::~vector(a1);
    }

    LocalNotificationManager *LocalNotificationManager::createInstance()
    {
      LocalNotificationManager *v0; // x19
      LocalNotificationManager *result; // x0
    
      v0 = (LocalNotificationManager *)operator new(48);
      result = LocalNotificationManager::LocalNotificationManager(v0);
      LocalNotificationManager::sm_pInstance = (__int64)v0;
      return result;
    }

    void __fastcall LocalNotificationManager::destructInstance(Renderer *this)
    {
      void *v1; // x19
    
      v1 = (void *)LocalNotificationManager::sm_pInstance;
      if ( LocalNotificationManager::sm_pInstance )
      {
        LocalNotificationManager::~LocalNotificationManager((LocalNotificationManager *)LocalNotificationManager::sm_pInstance);
        operator delete(v1);
      }
      LocalNotificationManager::sm_pInstance = 0;
    }

    __int64 __fastcall LocalNotificationManager::update(__int64 this, float a2)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      unsigned __int64 v4; // x11
      unsigned __int64 v5; // x9
      unsigned int v6; // w10
      __int64 v7; // x11
      float v8; // s1
    
      v2 = *(_QWORD *)(this + 24);
      v3 = *(_QWORD *)(this + 32) - v2;
      if ( v3 )
      {
        v4 = 0;
        v5 = v3 >> 5;
        v6 = 1;
        do
        {
          v7 = v2 + 32 * v4;
          v8 = *(float *)(v7 + 24) - a2;
          *(float *)(v7 + 24) = v8;
          if ( v8 < 0.0 )
          {
            *(_DWORD *)(v7 + 24) = 0;
            *(_DWORD *)(v7 + 28) = 0;
          }
          v4 = v6++;
        }
        while ( v4 < v5 );
      }
      return this;
    }

    void __fastcall LocalNotificationManager::refreshNotifications(__int64 a1)
    {
      pthread_attr_t *Instance; // x0
      UnlockAccountPopup **v3; // x19
      _DWORD *ClientGlobals; // x22
      tween::Bounce *PlayerAvatar; // x20
      #1146 *Home; // x19
      const char *v7; // x1
      const char *v8; // x1
      const char *v9; // x1
      LogicDataTables *Arena; // x22
      HomeScreen *Globals; // x0
      LogicDataTables *v12; // x22
      int v13; // w23
      int v14; // w22
      const char *v15; // x1
      const char *v16; // x1
      const char *v17; // x1
      __int64 v18; // x21
      int MaxChestCount; // w22
      int v20; // w28
      int v21; // w23
      LogicSpawnPointData *Chest; // x0
      LogicSpawnPointData *v23; // x24
      __int64 TreasureChestData; // x25
      #1308 *NotificationTID; // x0
      const String *v26; // x1
      #1308 *v27; // x0
      const String *v28; // x1
      #1308 *v29; // x0
      const String *v30; // x1
      int SecondsToNextFreeChest; // w22
      LogicDataTables *v32; // x20
      HomeScreen *v33; // x0
      const char *v34; // x1
      const char *v35; // x1
      const char *v36; // x1
      const char *v37; // x1
      const char *v38; // x1
      const char *v39; // x1
      int ShopWeekdayIndex; // w20
      int ShopSecondsToCycle; // w19
      const char *v42; // x1
      String v43; // [xsp+10h] [xbp-290h] BYREF
      float v44; // [xsp+28h] [xbp-278h]
      int v45; // [xsp+2Ch] [xbp-274h]
      String v46; // [xsp+30h] [xbp-270h] BYREF
      int v47; // [xsp+48h] [xbp-258h]
      int v48; // [xsp+4Ch] [xbp-254h]
      String v49; // [xsp+50h] [xbp-250h] BYREF
      int v50; // [xsp+68h] [xbp-238h]
      int v51; // [xsp+6Ch] [xbp-234h]
      String v52; // [xsp+70h] [xbp-230h] BYREF
      int v53; // [xsp+88h] [xbp-218h]
      int v54; // [xsp+8Ch] [xbp-214h]
      String v55; // [xsp+90h] [xbp-210h] BYREF
      float v56; // [xsp+A8h] [xbp-1F8h]
      int v57; // [xsp+ACh] [xbp-1F4h]
      String v58; // [xsp+B0h] [xbp-1F0h] BYREF
      float v59; // [xsp+C8h] [xbp-1D8h]
      int v60; // [xsp+CCh] [xbp-1D4h]
      String v61; // [xsp+D0h] [xbp-1D0h] BYREF
      float v62; // [xsp+E8h] [xbp-1B8h]
      int v63; // [xsp+ECh] [xbp-1B4h]
      String v64; // [xsp+F0h] [xbp-1B0h] BYREF
      float v65; // [xsp+108h] [xbp-198h]
      int v66; // [xsp+10Ch] [xbp-194h]
      String v67; // [xsp+110h] [xbp-190h] BYREF
      float v68; // [xsp+128h] [xbp-178h]
      int v69; // [xsp+12Ch] [xbp-174h]
      String v70; // [xsp+130h] [xbp-170h] BYREF
      float v71; // [xsp+148h] [xbp-158h]
      int UnlockingSecondsLeft; // [xsp+14Ch] [xbp-154h]
      String v73; // [xsp+150h] [xbp-150h] BYREF
      __int64 v74; // [xsp+168h] [xbp-138h]
      String v75; // [xsp+170h] [xbp-130h] BYREF
      int v76; // [xsp+188h] [xbp-118h]
      int v77; // [xsp+18Ch] [xbp-114h]
      String v78; // [xsp+190h] [xbp-110h] BYREF
      int v79; // [xsp+1A8h] [xbp-F8h]
      int v80; // [xsp+1ACh] [xbp-F4h]
      String v81; // [xsp+1B0h] [xbp-F0h] BYREF
      int v82; // [xsp+1C8h] [xbp-D8h]
      int v83; // [xsp+1CCh] [xbp-D4h]
      String v84; // [xsp+1D0h] [xbp-D0h] BYREF
      int v85; // [xsp+1ECh] [xbp-B4h]
      String v86; // [xsp+1F0h] [xbp-B0h] BYREF
      int v87; // [xsp+20Ch] [xbp-94h]
      String v88; // [xsp+210h] [xbp-90h] BYREF
      int v89; // [xsp+22Ch] [xbp-74h]
      String v90; // [xsp+230h] [xbp-70h] BYREF
      __int64 v91; // [xsp+248h] [xbp-58h]
    
      Instance = (pthread_attr_t *)GameMode::getInstance();
      v3 = (UnlockAccountPopup **)Instance;
      if ( Instance )
      {
        ClientGlobals = (_DWORD *)LogicDataTables::getClientGlobals(Instance);
        if ( ClientGlobals )
        {
          if ( (*((unsigned int (__fastcall **)(UnlockAccountPopup **))*v3 + 8))(v3) )
          {
            PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
            if ( PlayerAvatar )
            {
              v91 = 0;
              memset(&v90, 0, sizeof(v90));
              String::String(&v90);
              std::vector<LocalNotificationManager::NotifData>::resize(a1, 0, &v90);
              String::~String();
              Home = (#1146 *)LogicGameMode::getHome(v3[14]);
              String::String(&v88);
              StringTable::getString((#1308 *)"TID_COME_BACK_NOTIFICATION_SMALL", v7);
              String::operator=(&v88);
              v89 = 3600 * ClientGlobals[51];
              std::vector<LocalNotificationManager::NotifData>::push_back(a1, &v88);
              String::~String();
              String::String(&v86);
              StringTable::getString((#1308 *)"TID_COME_BACK_NOTIFICATION_MEDIUM", v8);
              String::operator=(&v86);
              v87 = 3600 * ClientGlobals[52];
              std::vector<LocalNotificationManager::NotifData>::push_back(a1, &v86);
              String::~String();
              String::String(&v84);
              StringTable::getString((#1308 *)"TID_COME_BACK_NOTIFICATION_LARGE", v9);
              String::operator=(&v84);
              v85 = 3600 * ClientGlobals[53];
              std::vector<LocalNotificationManager::NotifData>::push_back(a1, &v84);
              String::~String();
              Arena = (LogicDataTables *)LogicClientAvatar::getArena(PlayerAvatar);
              Globals = (HomeScreen *)LogicDataTables::getGlobals(Arena);
              if ( Arena == (LogicDataTables *)LogicGlobals::getStartingArena(Globals) )
              {
                GameMode::getInstance();
                v12 = (LogicDataTables *)GameMode::getPlayerAvatar();
                v13 = *(_DWORD *)(LogicDataTables::getGlobals(v12) + 404LL);
                v14 = v13 - LogicClientAvatar::getNpcWinCount((__int64)v12);
                if ( v14 >= 1 )
                {
                  String::String(&v81);
                  if ( v14 < 2 )
                    StringTable::getString((#1308 *)"TID_TRAINING_NOTIFICATION_MULTIPLE", v15);
                  else
                    StringTable::getString((#1308 *)"TID_TRAINING_NOTIFICATION_ONE", v15);
                  String::operator=(&v81);
                  v83 = 7200;
                  v82 = 1172373504;
                  std::vector<LocalNotificationManager::NotifData>::push_back(a1, &v81);
                  String::String(&v78);
                  if ( v14 < 2 )
                    StringTable::getString((#1308 *)"TID_TRAINING_2ND_NOTIFICATION_MULTIPLE", v16);
                  else
                    StringTable::getString((#1308 *)"TID_TRAINING_2ND_NOTIFICATION_ONE", v16);
                  String::operator=(&v78);
                  v80 = 86400;
                  v79 = 1202241536;
                  std::vector<LocalNotificationManager::NotifData>::push_back(a1, &v78);
                  String::String(&v75);
                  if ( v14 < 2 )
                    StringTable::getString((#1308 *)"TID_TRAINING_2ND_NOTIFICATION_MULTIPLE", v17);
                  else
                    StringTable::getString((#1308 *)"TID_TRAINING_2ND_NOTIFICATION_ONE", v17);
                  String::operator=(&v75);
                  v77 = 259200;
                  v76 = 1216159744;
                  std::vector<LocalNotificationManager::NotifData>::push_back(a1, &v75);
                  String::~String();
                  String::~String();
                  String::~String();
                }
              }
              if ( Home )
              {
                v74 = 0;
                v18 = a1 + 24;
                memset(&v73, 0, sizeof(v73));
                String::String(&v73);
                std::vector<LocalNotificationManager::NotifData>::resize(v18, 0, &v73);
                String::~String();
                MaxChestCount = LogicClientHome::getMaxChestCount(Home);
                if ( MaxChestCount < 1 )
                {
                  v20 = 0;
                }
                else
                {
                  v20 = 0;
                  v21 = 0;
                  do
                  {
                    Chest = (LogicSpawnPointData *)LogicClientHome::getChest(Home, v21);
                    v23 = Chest;
                    if ( Chest )
                    {
                      TreasureChestData = LogicChest::getTreasureChestData(Chest);
                      if ( (unsigned int)LogicChest::isUnlocking(v23) )
                      {
                        String::String(&v70);
                        NotificationTID = (#1308 *)LogicTreasureChestData::getNotificationTID(TreasureChestData);
                        StringTable::getString(NotificationTID, v26);
                        String::operator=(&v70);
                        UnlockingSecondsLeft = LogicChest::getUnlockingSecondsLeft(v23);
                        v71 = (float)UnlockingSecondsLeft;
                        std::vector<LocalNotificationManager::NotifData>::push_back(v18, &v70);
                        String::String(&v67);
                        v27 = (#1308 *)LogicTreasureChestData::getNotificationTID(TreasureChestData);
                        StringTable::getString(v27, v28);
                        String::operator=(&v67);
                        v69 = LogicChest::getUnlockingSecondsLeft(v23) + 21600;
                        v68 = (float)v69;
                        std::vector<LocalNotificationManager::NotifData>::push_back(v18, &v67);
                        String::String(&v64);
                        v29 = (#1308 *)LogicTreasureChestData::getNotificationTID(TreasureChestData);
                        StringTable::getString(v29, v30);
                        String::operator=(&v64);
                        v66 = LogicChest::getUnlockingSecondsLeft(v23) + 129600;
                        v65 = (float)v66;
                        std::vector<LocalNotificationManager::NotifData>::push_back(v18, &v64);
                        String::~String();
                        String::~String();
                        String::~String();
                      }
                      else if ( (LogicChest::isUnlocked(v23) & 1) == 0 )
                      {
                        v20 += *((_BYTE *)v23 + 40) ^ 1;
                      }
                    }
                    ++v21;
                  }
                  while ( v21 < MaxChestCount );
                }
                SecondsToNextFreeChest = LogicClientHome::getSecondsToNextFreeChest(Home);
                if ( SecondsToNextFreeChest >= 1 )
                {
                  v32 = (LogicDataTables *)LogicClientAvatar::getArena(PlayerAvatar);
                  v33 = (HomeScreen *)LogicDataTables::getGlobals(v32);
                  if ( v32 != (LogicDataTables *)LogicGlobals::getStartingArena(v33) )
                  {
                    String::String(&v61);
                    StringTable::getString((#1308 *)"TID_FREE_CHEST_NOTIFICATION", v34);
                    String::operator=(&v61);
                    v63 = SecondsToNextFreeChest;
                    v62 = (float)SecondsToNextFreeChest;
                    std::vector<LocalNotificationManager::NotifData>::push_back(v18, &v61);
                    String::String(&v58);
                    StringTable::getString((#1308 *)"TID_FREE_CHEST_2ND_NOTIFICATION", v35);
                    String::operator=(&v58);
                    v60 = SecondsToNextFreeChest + 86400;
                    v59 = (float)(SecondsToNextFreeChest + 86400);
                    std::vector<LocalNotificationManager::NotifData>::push_back(v18, &v58);
                    String::String(&v55);
                    StringTable::getString((#1308 *)"TID_FREE_CHEST_2ND_NOTIFICATION", v36);
                    String::operator=(&v55);
                    v57 = SecondsToNextFreeChest + 259200;
                    v56 = (float)(SecondsToNextFreeChest + 259200);
                    std::vector<LocalNotificationManager::NotifData>::push_back(v18, &v55);
                    String::~String();
                    String::~String();
                    String::~String();
                  }
                }
                if ( v20 >= 1 && !(unsigned int)LogicClientHome::getAssignedWorkers(Home) )
                {
                  String::String(&v52);
                  StringTable::getString((#1308 *)"TID_FORGOT_TO_OPEN_CHEST_NOTIFICATION", v37);
                  String::operator=(&v52);
                  v54 = 300;
                  v53 = 1133903872;
                  std::vector<LocalNotificationManager::NotifData>::push_back(v18, &v52);
                  String::String(&v49);
                  StringTable::getString((#1308 *)"TID_FORGOT_TO_OPEN_CHEST_2ND_NOTIFICATION", v38);
                  String::operator=(&v49);
                  v51 = 21600;
                  v50 = 1185464320;
                  std::vector<LocalNotificationManager::NotifData>::push_back(v18, &v49);
                  String::String(&v46);
                  StringTable::getString((#1308 *)"TID_FORGOT_TO_OPEN_CHEST_2ND_NOTIFICATION", v39);
                  String::operator=(&v46);
                  v48 = 345600;
                  v47 = 1219018752;
                  std::vector<LocalNotificationManager::NotifData>::push_back(v18, &v46);
                  String::~String();
                  String::~String();
                  String::~String();
                }
                ShopWeekdayIndex = LogicClientHome::getShopWeekdayIndex(Home);
                ShopSecondsToCycle = LogicClientHome::getShopSecondsToCycle(Home);
                String::String(&v43);
                StringTable::getString((#1308 *)"TID_SUNDAY_NOTIFICATION", v42);
                String::operator=(&v43);
                v45 = ShopSecondsToCycle + 86400 * (7 - ShopWeekdayIndex) + 32400;
                v44 = (float)v45;
                std::vector<LocalNotificationManager::NotifData>::push_back(v18, &v43);
                String::~String();
              }
            }
          }
        }
      }
    }

    __int64 __fastcall LocalNotificationManager::resetNotifications(__int64 *a1)
    {
      LocalNotification *v2; // x0
      __int64 result; // x0
      __int64 v4; // x8
      unsigned __int64 v5; // x9
      unsigned int v6; // w20
      __int64 v7; // x8
      unsigned __int64 v8; // x9
      unsigned int v9; // w20
    
      LocalNotificationManager::refreshNotifications((__int64)a1);
      result = LocalNotification::cancelAllNotifications(v2);
      v4 = *a1;
      if ( a1[1] != *a1 )
      {
        v5 = 0;
        v6 = 1;
        do
        {
          result = LocalNotificationManager::addNotification(result, v4 + 32 * v5);
          v5 = v6;
          v4 = *a1;
          ++v6;
        }
        while ( v5 < (a1[1] - *a1) >> 5 );
      }
      v7 = a1[3];
      if ( a1[4] != v7 )
      {
        v8 = 0;
        v9 = 1;
        do
        {
          result = LocalNotificationManager::addNotification(result, v7 + 32 * v8);
          v8 = v9;
          v7 = a1[3];
          ++v9;
        }
        while ( v8 < (a1[4] - v7) >> 5 );
      }
      return result;
    }

    void __fastcall LocalNotificationManager::addNotification(__int64 a1, unsigned int *a2)
    {
      const String *v3; // x20
      const String *v4; // x3
      LocalNotification *v5; // x19
      String v6; // [xsp+8h] [xbp-28h] BYREF
    
      v3 = (const String *)a2[7];
      if ( (int)v3 >= 1 )
      {
        String::String(&v6);
        v5 = (LocalNotification *)LocalNotification::addNotification((LocalNotification *)a2, v3, (int)&v6, v4);
        String::~String();
        if ( v5 )
        {
          LocalNotification::~LocalNotification(v5);
          operator delete(v5);
        }
      }
    }

    _QWORD *__fastcall LocalNotificationManager::initializeMembers(_QWORD *result)
    {
      _QWORD *v1; // x19
      __int64 v2; // x20
      _QWORD *v3; // x21
      __int64 v4; // x0
      _QWORD *v5; // x20
      _QWORD *v6; // x21
      __int64 v7; // x0
    
      v1 = result;
      v2 = *result;
      v3 = (_QWORD *)result[1];
      if ( v3 != (_QWORD *)*result )
      {
        do
        {
          String::~String();
          result = (_QWORD *)(v4 + 32);
        }
        while ( v3 != result );
      }
      v1[1] = v2;
      v5 = (_QWORD *)v1[3];
      v6 = (_QWORD *)v1[4];
      if ( v6 != v5 )
      {
        do
        {
          String::~String();
          result = (_QWORD *)(v7 + 32);
        }
        while ( v6 != result );
      }
      v1[4] = v5;
      return result;
    }

}; // end class LocalNotificationManager
