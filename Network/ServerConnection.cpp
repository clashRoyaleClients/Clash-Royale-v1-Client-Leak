class ServerConnection
{
public:

    void __fastcall ServerConnection::ServerConnection(ServerConnection *this, const String *a2)
    {
      String *v3; // x20
      Messaging *v4; // x23
      __darwin_natural_t *v5; // x24
      Messaging *v6; // x23
      Messaging *v7; // x23
      Messaging *v8; // x23
      Messaging *v9; // x23
      Messaging *v10; // x23
      Messaging *v11; // x1
      String v12; // [xsp+8h] [xbp-B8h] BYREF
      String v13; // [xsp+20h] [xbp-A0h] BYREF
      String v14; // [xsp+38h] [xbp-88h] BYREF
      String v15; // [xsp+50h] [xbp-70h] BYREF
      String v16; // [xsp+68h] [xbp-58h] BYREF
    
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      v3 = (String *)((char *)this + 48);
      String::String((String *)this + 2);
      String::String((String *)this + 3);
      *(_DWORD *)this = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      String::operator=((char *)this + 72, "");
      *((_DWORD *)this + 28) = 0;
      String::operator=(v3);
      v4 = (Messaging *)operator new(608);
      Messaging::Messaging(v4, 80);
      *((_QWORD *)this + 1) = v4;
      v5 = (__darwin_natural_t *)operator new(16);
      LogicScrollMessageFactory::LogicScrollMessageFactory(v5, 0);
      *((_QWORD *)v4 + 1) = v5;
      v6 = (Messaging *)*((_QWORD *)this + 1);
      String::String(&v16, "9339");
      Messaging::addPort(v6, &v16);
      String::~String(&v16);
      v7 = (Messaging *)*((_QWORD *)this + 1);
      String::String(&v15, "1863");
      Messaging::addPort(v7, &v15);
      String::~String(&v15);
      v8 = (Messaging *)*((_QWORD *)this + 1);
      String::String(&v14, "3724");
      Messaging::addPort(v8, &v14);
      String::~String(&v14);
      v9 = (Messaging *)*((_QWORD *)this + 1);
      String::String(&v13, "30000");
      Messaging::addPort(v9, &v13);
      String::~String(&v13);
      v10 = (Messaging *)*((_QWORD *)this + 1);
      String::String(&v12, "843");
      Messaging::addPort(v10, &v12);
      String::~String(&v12);
      MessageManager::constructInstance(*((MessageManager **)this + 1), v11);
      ServerConnection::loadAccounts(this);
    }

    void __fastcall ServerConnection::loadAccounts(LogicBattle *this)
    {
      __int64 *v1; // x19
      __int64 v2; // x25
      __int64 v3; // x26
      String *v4; // x20
      __int64 v5; // x28
      const String *v6; // x1
      int exists; // w24
      const String *v8; // x1
      const String *v9; // x1
      const String *v10; // x1
      const String *v11; // x1
      const String *v12; // x1
      String v13; // [xsp+10h] [xbp-120h] BYREF
      String v14; // [xsp+28h] [xbp-108h] BYREF
      String v15; // [xsp+40h] [xbp-F0h] BYREF
      String v16; // [xsp+58h] [xbp-D8h] BYREF
      String v17; // [xsp+70h] [xbp-C0h] BYREF
      String v18; // [xsp+88h] [xbp-A8h] BYREF
      String v19; // [xsp+A0h] [xbp-90h] BYREF
      _BYTE v20[16]; // [xsp+B8h] [xbp-78h] BYREF
      String v21; // [xsp+C8h] [xbp-68h] BYREF
    
      v1 = (__int64 *)((char *)this + 24);
      ServerConnection::Account::Account((#1347 *)v20);
      std::vector<ServerConnection::Account>::resize(v1, 5, v20);
      String::~String(&v21);
      v2 = 0;
      v3 = 0;
      v4 = (String *)&ACCOUNT_POSTFIX;
      do
      {
        v5 = *v1;
        operator+((__int64 *)&v19.m_length, &ACCOUNT_PASSWORD, v4);
        exists = Application::existsKeyValue((Application *)&v19, v6);
        String::~String(&v19);
        if ( exists )
        {
          *(_BYTE *)(v5 + v2) = 1;
          operator+((__int64 *)&v17.m_length, &ACCOUNT_PASSWORD, v4);
          Application::getKeyValue((Application *)&v17, v8);
          String::operator=((String *)(v5 + v2 + 16));
          String::~String(&v18);
          String::~String(&v17);
          operator+((__int64 *)&v15.m_length, &ACCOUNT_HIGH, v4);
          Application::getKeyValue((Application *)&v15, v9);
          *(_DWORD *)(v5 + v2 + 4) = LogicStringUtil::convertToInt((LogicStringUtil *)&v16, v10);
          String::~String(&v16);
          String::~String(&v15);
          operator+((__int64 *)&v13.m_length, &ACCOUNT_LOW, v4);
          Application::getKeyValue((Application *)&v13, v11);
          *(_DWORD *)(v5 + v2 + 8) = LogicStringUtil::convertToInt((LogicStringUtil *)&v14, v12);
          String::~String(&v14);
          String::~String(&v13);
        }
        else
        {
          *(_BYTE *)(v5 + v2) = 0;
        }
        ++v3;
        ++v4;
        v2 += 40;
      }
      while ( v3 < 5 );
    }

    void __fastcall ServerConnection::~ServerConnection(String *this)
    {
      MessageManager *pHeap; // x0
      internal_t *p_internal; // x23
      int v4; // w8
      __int64 v5; // x21
      MessageManager *v6; // x22
      int v7; // w8
      __int64 v8; // x0
    
      p_internal = &this->internal;
      pHeap = (MessageManager *)this->internal.pHeap;
      if ( pHeap )
        pHeap = (MessageManager *)(*(__int64 (__fastcall **)(MessageManager *))(*(_QWORD *)pHeap + 8LL))(pHeap);
      this->internal.pHeap = 0;
      v4 = *((_DWORD *)this + 27);
      v5 = (unsigned int)(v4 - 1);
      if ( v4 >= 1 )
      {
        do
        {
          pHeap = (MessageManager *)LogicArrayList<PiranhaMessage *>::remove(this + 4, v5);
          v6 = pHeap;
          if ( pHeap )
          {
            (*(void (__fastcall **)(MessageManager *))(*(_QWORD *)pHeap + 48LL))(pHeap);
            pHeap = (MessageManager *)(*(__int64 (__fastcall **)(MessageManager *))(*(_QWORD *)v6 + 8LL))(v6);
          }
          v7 = v5 + 1;
          v5 = (unsigned int)(v5 - 1);
        }
        while ( v7 > 1 );
      }
      MessageManager::destructInstance(pHeap);
      *((_DWORD *)this + 27) = 0;
      this->m_length = 0;
      p_internal->pHeap = 0;
      p_internal[1].pHeap = 0;
      String::operator=(this + 3, "");
      *((_DWORD *)this + 28) = 0;
      v8 = *((_QWORD *)this + 12);
      if ( v8 )
        operator delete[](v8);
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      String::~String(this + 3);
      String::~String(this + 2);
      std::vector<ServerConnection::Account>::~vector(this + 1);
    }

    __int64 __fastcall ServerConnection::disconnect(__int64 a1)
    {
      *(_DWORD *)a1 = 7;
      Messaging::disconnect(*(Messaging **)(a1 + 8));
      return MessageManager::disconnected((MessageManager *)MessageManager::sm_pInstance);
    }

    _DWORD *__fastcall ServerConnection::reconnect(_DWORD *this)
    {
      *this = 8;
      return this;
    }

    __int64 __fastcall ServerConnection::initializeEncryption(__int64 a1, const String *a2)
    {
      RC4Encrypter *v4; // x19
      RC4Encrypter *v5; // x22
    
      v4 = (RC4Encrypter *)operator new(272);
      RC4Encrypter::RC4Encrypter(v4, &LogicScrollMessageFactory::RC4_KEY, a2);
      v5 = (RC4Encrypter *)operator new(272);
      RC4Encrypter::RC4Encrypter(v5, &LogicScrollMessageFactory::RC4_KEY, a2);
      return Messaging::setEncrypters(*(_QWORD *)(a1 + 8), v4, v5, 0);
    }

    void __fastcall ServerConnection::connect(__int64 a1)
    {
      String v2; // [xsp+0h] [xbp-40h] BYREF
      String v3; // [xsp+18h] [xbp-28h] BYREF
    
      String::String(&v3, "game.clashroyaleapp.com");
      String::String(&v2, "9339");
      ServerConnection::connectTo(a1, 1, &v3, &v2);
      String::~String(&v2);
      String::~String(&v3);
    }

    __int64 __fastcall ServerConnection::connectTo(__int64 a1, int a2, const String *a3, const String *a4)
    {
      __int64 result; // x0
      String v9; // [xsp+8h] [xbp-38h] BYREF
    
      String::String(&v9, "nonce");
      ServerConnection::initializeEncryption(a1, &v9);
      String::~String(&v9);
      *(_DWORD *)a1 = 1;
      Messaging::connect(*(Messaging **)(a1 + 8), a3, a4);
      result = String::operator=((String *)(a1 + 72));
      *(_DWORD *)(a1 + 20) = a2;
      return result;
    }

    __int64 __fastcall ServerConnection::connectTo(__int64 a1, String *a2, const String *a3)
    {
      int v6; // w1
    
      if ( (String::startsWith(a2, "stage") & 1) != 0 )
      {
        v6 = 0;
      }
      else if ( (String::startsWith(a2, "content-stage") & 1) != 0 )
      {
        v6 = 3;
      }
      else if ( (unsigned int)String::startsWith(a2, "integration") )
      {
        v6 = 2;
      }
      else
      {
        v6 = 4;
      }
      return ServerConnection::connectTo(a1, v6, a2, a3);
    }

    void __fastcall ServerConnection::update(Messaging **this, float a2)
    {
      int v4; // w8
      __int64 Instance; // x0
      __int64 v6; // x0
      #1080 *v7; // x0
      __int64 v8; // x19
      LogicDataTables *isConnected; // x0
      #1285 *isLoaded; // x0
      OfferChestPopup *v11; // x20
      #1179 *v12; // x21
      const String *CurrentResourceDescriptorHash; // x0
      Application *v14; // x21
      Application *v15; // x21
      Application *v16; // x21
      __uint64_t *v17; // x21
      Application *v18; // x0
      Application *v19; // x21
      FacebookConnection *v20; // x0
      Application *v21; // x0
      char AdvertiserTrackingEnabled; // w0
      Application *v23; // x21
      Application *v24; // x0
      String *v25; // x21
      #1080 *hasConnectFailed; // x0
      __int64 v27; // x19
      LogicProgressSimulator *v28; // x0
      __int64 isChangingMode; // x0
      __int64 v30; // x21
      LogicProgressSimulator *v31; // x0
      const char *v32; // x1
      int v33; // w8
      float v34; // s0
      __int64 *v35; // x9
      __int64 v36; // x20
      _QWORD *v37; // x9
      int v38; // w0
      int v39; // w1
      float v40; // s0
      const String *v42; // x1
      #1080 *v43; // x0
      __int64 v44; // x19
      #1080 *v45; // x0
      __int64 v46; // x19
      __int64 v47; // x22
      __int64 v48; // x23
      LogicLong *v49; // x21
      String *v50; // x21
      LogicLong *v51; // x21
      String v52; // [xsp+10h] [xbp-120h] BYREF
      __siginfo v53; // [xsp+28h] [xbp-108h] BYREF
      String v54; // [xsp+90h] [xbp-A0h] BYREF
      String v55; // [xsp+A8h] [xbp-88h] BYREF
      String v56; // [xsp+C0h] [xbp-70h] BYREF
      String v57; // [xsp+D8h] [xbp-58h] BYREF
    
      v4 = *(_DWORD *)this;
      if ( *(_DWORD *)this )
      {
        if ( v4 == 8 )
        {
          if ( GameStateManager::getInstance() )
          {
            Instance = GameStateManager::getInstance();
            if ( (unsigned int)GameStateManager::isInitialLoadingDone(Instance) )
            {
              *(_DWORD *)this = 7;
              Messaging::disconnect(*(this + 1));
              MessageManager::disconnected((MessageManager *)MessageManager::sm_pInstance);
    LABEL_8:
              ServerConnection::connect((__int64)this);
            }
          }
        }
        else if ( v4 == 7 )
        {
          v7 = (#1080 *)MessageManager::disconnected((MessageManager *)MessageManager::sm_pInstance);
          v8 = GameMain::getInstance(v7);
          String::String(&v57);
          GameMain::showNativeDialog(v8, 2, 0, &v57);
          String::~String(&v57);
        }
        else
        {
          isConnected = (LogicDataTables *)Messaging::isConnected(*(this + 1));
          if ( ((unsigned __int8)isConnected & 1) != 0 )
          {
            if ( *(_DWORD *)this == 1 && (isLoaded = (#1285 *)LogicDataTables::isLoaded(isConnected), (_DWORD)isLoaded) )
            {
              *(_DWORD *)this = 2;
              *((_DWORD *)this + 4) = 0;
              Application::getPreferredLanguage((__int64 *)&v54.m_length, isLoaded);
              v11 = (OfferChestPopup *)operator new(296);
              LoginMessage::LoginMessage(v11);
              v12 = (#1179 *)operator new(24);
              CurrentResourceDescriptorHash = (const String *)ResourceManager::getCurrentResourceDescriptorHash(v12);
              String::String((String *)v12, CurrentResourceDescriptorHash);
              LoginMessage::setResourceSha(v11, (String *)v12);
              LoginMessage::setClientMajorVersion(v11, 2);
              LoginMessage::setClientMinorVersion(v11, 0);
              LoginMessage::setClientBuild(v11, 1306);
              v14 = (Application *)operator new(24);
              Application::getUDID(v14);
              LoginMessage::setUDID(v11, (String *)v14);
              v15 = (Application *)operator new(24);
              Application::getOpenUDID(v15);
              LoginMessage::setOpenUDID(v11, (String *)v15);
              LoginMessage::setPreferredDeviceLanguage(v11, &v54);
              LoginMessage::setPreferredLanguage(v11, 0);
              v16 = (Application *)operator new(24);
              Application::getAdvertiserID(v16);
              LoginMessage::setADID(v11, (String *)v16);
              v17 = (__uint64_t *)operator new(24);
              Application::getDeviceType(v17);
              LoginMessage::setDevice(v11, (String *)v17);
              v18 = (Application *)LoginMessage::setAndroid(v11, 0);
              Application::getAndroidID(v18);
              LoginMessage::setAndroidID(v11, (const String *)&v53.__pad[4]);
              String::~String((String *)&v53.__pad[4]);
              v19 = (Application *)operator new(24);
              Application::getSystemVersion(v19);
              v20 = (FacebookConnection *)LoginMessage::setOSVersion(v11, (String *)v19);
              FacebookConnection::getAttributionID(v20);
              LoginMessage::setFacebookAttributionID(v11, (const String *)&v53.__pad[1]);
              String::~String((String *)&v53.__pad[1]);
              AdvertiserTrackingEnabled = Application::getAdvertiserTrackingEnabled(v21);
              LoginMessage::setAdvertisingEnabled(v11, AdvertiserTrackingEnabled);
              v23 = (Application *)operator new(24);
              Application::getIdentifierForVendor(v23);
              v24 = (Application *)LoginMessage::setAppleIFV(v11, (String *)v23);
              Application::getPrimaryMAC(v24);
              if ( v53.si_value.sival_int )
              {
                v25 = (String *)operator new(24);
                String::String(v25, (const String *)&v53.si_value);
                LoginMessage::setMacAddress(v11, v25);
              }
              if ( Assert::g_false )
              {
                while ( 1 )
                  ;
              }
              v47 = *((unsigned int *)this + 5);
              v48 = (__int64)*(this + 3);
              if ( *(_BYTE *)(v48 + 40 * v47) )
              {
                v49 = (LogicLong *)operator new(8);
                LogicLong::LogicLong(v49, *(_DWORD *)(v48 + 40 * v47 + 4), *(_DWORD *)(v48 + 40 * v47 + 8));
                LoginMessage::setAccountId(v11, v49);
                v50 = (String *)operator new(24);
                String::String(v50, (const String *)(v48 + 40 * v47 + 16));
                LoginMessage::setPassToken(v11, v50);
              }
              else
              {
                v51 = (LogicLong *)operator new(8);
                LogicLong::LogicLong(v51, 0, 0);
                LoginMessage::setAccountId(v11, v51);
                LoginMessage::setPassToken(v11, 0);
              }
              Messaging::send(*(this + 1), v11);
              String::~String((String *)&v53.si_value);
              String::~String(&v54);
            }
            else
            {
              v28 = (LogicProgressSimulator *)GameStateManager::getInstance();
              isChangingMode = GameStateManager::isChangingMode(v28);
              if ( (isChangingMode & 1) == 0 )
              {
                isChangingMode = LogicDataTables::isLoaded((LogicDataTables *)isChangingMode);
                if ( (_DWORD)isChangingMode )
                {
                  isChangingMode = Messaging::nextMessage(*(this + 1));
                  v30 = isChangingMode;
                  for ( v53.si_addr = (void *)isChangingMode; isChangingMode; v53.si_addr = (void *)isChangingMode )
                  {
                    if ( (unsigned int)LogicVersion::isDev((#1122 *)isChangingMode) )
                    {
                      LogicArrayList<PiranhaMessage *>::add(this + 12, &v53.si_addr);
                    }
                    else
                    {
                      if ( (unsigned int)MessageManager::receiveMessage(MessageManager::sm_pInstance, v30) )
                      {
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 48LL))(v30);
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
                        v53.si_addr = 0;
                      }
                      v31 = (LogicProgressSimulator *)GameStateManager::getInstance();
                      isChangingMode = GameStateManager::isChangingMode(v31);
                      if ( (isChangingMode & 1) != 0 )
                        break;
                    }
                    isChangingMode = Messaging::nextMessage(*(this + 1));
                    v30 = isChangingMode;
                  }
                }
              }
              if ( (unsigned int)LogicVersion::isDev((#1122 *)isChangingMode) )
              {
                v33 = *((_DWORD *)this + 27);
                if ( v33 )
                {
                  v34 = *((float *)this + 28) - a2;
                  *((float *)this + 28) = v34;
                  if ( v34 <= 0.0 )
                  {
                    v35 = (__int64 *)*(this + 12);
                    v36 = *v35;
                    *((_DWORD *)this + 27) = v33 - 1;
                    if ( v33 >= 2 )
                    {
                      v37 = v35 + 1;
                      do
                      {
                        *(v37 - 1) = *v37;
                        --v33;
                        ++v37;
                      }
                      while ( v33 > 1 );
                    }
                    v38 = MessageManager::receiveMessage(MessageManager::sm_pInstance, v36);
                    if ( v36 && ((v38 ^ 1) & 1) == 0 )
                    {
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 48LL))(v36);
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
                    }
                    *((float *)this + 28) = (float)(int)ParticleEmitter::getRand(0, v39) / 1000.0;
                  }
                }
              }
              if ( *(_DWORD *)this == 2 )
              {
                v40 = *((float *)this + 4) + a2;
                *((float *)this + 4) = v40;
                if ( v40 > 30.0 && (float)(v40 - a2) <= 30.0 )
                {
                  String::format((String *)"Server didn't reply to to the LoginMessage in %d seconds!", v32, 30);
                  Debugger::warning(&v53, v42);
                  String::~String((String *)&v53);
                  v44 = GameMain::getInstance(v43);
                  String::String(&v52);
                  GameMain::showNativeDialog(v44, 8, 0, &v52);
                  String::~String(&v52);
                }
              }
              else
              {
                *((_DWORD *)this + 4) = 0;
              }
              MessageManager::update((MessageManager *)MessageManager::sm_pInstance, a2);
            }
          }
          else
          {
            hasConnectFailed = (#1080 *)Messaging::hasConnectFailed(*(this + 1));
            if ( ((unsigned __int8)hasConnectFailed & 1) != 0 )
            {
              *(_DWORD *)this = 4;
              v27 = GameMain::getInstance(hasConnectFailed);
              String::String(&v56);
              GameMain::showNativeDialog(v27, 3, 0, &v56);
              String::~String(&v56);
            }
            else if ( *(_DWORD *)this != 1 )
            {
              *(_DWORD *)this = 7;
              Messaging::disconnect(*(this + 1));
              v45 = (#1080 *)MessageManager::disconnected((MessageManager *)MessageManager::sm_pInstance);
              v46 = GameMain::getInstance(v45);
              String::String(&v55);
              GameMain::showNativeDialog(v46, 4, 0, &v55);
              String::~String(&v55);
            }
          }
        }
      }
      else if ( GameStateManager::getInstance() )
      {
        v6 = GameStateManager::getInstance();
        if ( (unsigned int)GameStateManager::isInitialLoadingDone(v6) )
          goto LABEL_8;
      }
    }

    __int64 __fastcall ServerConnection::getAccount(__int64 a1, unsigned int a2)
    {
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      return *(_QWORD *)(a1 + 24) + 40LL * a2;
    }

    void __fastcall ServerConnection::constructInstance(const String *a1)
    {
      ServerConnection *v2; // x19
    
      v2 = (ServerConnection *)operator new(120);
      ServerConnection::ServerConnection(v2, a1);
      ServerConnection::sm_pInstance = (__int64)v2;
    }

    void ServerConnection::destructInstance()
    {
      void *v0; // x19
    
      v0 = (void *)ServerConnection::sm_pInstance;
      if ( ServerConnection::sm_pInstance )
      {
        ServerConnection::~ServerConnection((String *)ServerConnection::sm_pInstance);
        operator delete(v0);
      }
      ServerConnection::sm_pInstance = 0;
    }

    __int64 __fastcall ServerConnection::getMessaging(LogicBattle *this)
    {
      return *((_QWORD *)this + 1);
    }

    void __fastcall ServerConnection::saveAccount(__int64 a1, unsigned int a2, const String *a3, String *a4, String *a5)
    {
      __int64 v8; // x20
      __int64 v9; // x23
      String *v10; // x20
      const String *v11; // x2
      int v12; // w1
      const String *v13; // x2
      int v14; // w1
      const String *v15; // x2
      String v16; // [xsp+8h] [xbp-A8h] BYREF
      String v17; // [xsp+20h] [xbp-90h] BYREF
      String v18; // [xsp+38h] [xbp-78h] BYREF
      String v19; // [xsp+50h] [xbp-60h] BYREF
      String v20; // [xsp+68h] [xbp-48h] BYREF
    
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      v8 = a2;
      v9 = *(_QWORD *)(a1 + 24) + 40LL * a2;
      String::operator=((String *)(v9 + 16));
      *(_DWORD *)(v9 + 4) = (_DWORD)a4;
      *(_DWORD *)(v9 + 8) = (_DWORD)a5;
      *(_BYTE *)v9 = 1;
      v10 = (String *)((char *)&ACCOUNT_POSTFIX + 24 * v8);
      operator+((__int64 *)&v20.m_length, &ACCOUNT_PASSWORD, v10);
      Application::storeKeyValue((Application *)&v20, a3, v11);
      String::~String(&v20);
      operator+((__int64 *)&v19.m_length, &ACCOUNT_HIGH, v10);
      String::valueOf(&v18, a4, v12);
      Application::storeKeyValue((Application *)&v19, &v18, v13);
      String::~String(&v18);
      String::~String(&v19);
      operator+((__int64 *)&v17.m_length, &ACCOUNT_LOW, v10);
      String::valueOf(&v16, a5, v14);
      Application::storeKeyValue((Application *)&v17, &v16, v15);
      String::~String(&v16);
      String::~String(&v17);
    }

    void __fastcall ServerConnection::resetAccount(__int64 a1, unsigned int a2)
    {
      __int64 v2; // x19
      __int64 v3; // x20
      String *v4; // x19
      const String *v5; // x1
      const String *v6; // x1
      const String *v7; // x1
      String v8; // [xsp+8h] [xbp-58h] BYREF
      String v9; // [xsp+20h] [xbp-40h] BYREF
      String v10; // [xsp+38h] [xbp-28h] BYREF
    
      v2 = a2;
      v3 = *(_QWORD *)(a1 + 24) + 40LL * a2;
      *(_BYTE *)v3 = 0;
      String::operator=(v3 + 16, "");
      *(_QWORD *)(v3 + 4) = 0;
      v4 = (String *)((char *)&ACCOUNT_POSTFIX + 24 * v2);
      operator+((__int64 *)&v10.m_length, &ACCOUNT_PASSWORD, v4);
      Application::removeKeyValue((Application *)&v10, v5);
      String::~String(&v10);
      operator+((__int64 *)&v9.m_length, &ACCOUNT_HIGH, v4);
      Application::removeKeyValue((Application *)&v9, v6);
      String::~String(&v9);
      operator+((__int64 *)&v8.m_length, &ACCOUNT_LOW, v4);
      Application::removeKeyValue((Application *)&v8, v7);
      String::~String(&v8);
    }

}; // end class ServerConnection
