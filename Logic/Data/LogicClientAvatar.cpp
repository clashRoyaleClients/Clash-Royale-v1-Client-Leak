class LogicClientAvatar
{
public:

    void __fastcall LogicClientAvatar::LogicClientAvatar(LogicClientAvatar *this)
    {
      LogicAvatarChangeListener *v2; // x22
      __int64 v3; // x23
      _QWORD *v4; // x22
    
      LogicAvatar::LogicAvatar(this);
      *(_QWORD *)this = off_100468C88;
      LogicLong::LogicLong((LogicClientAvatar *)((char *)this + 16));
      LogicLong::LogicLong((LogicClientAvatar *)((char *)this + 24));
      LogicLong::LogicLong((LogicClientAvatar *)((char *)this + 32));
      String::String((String *)((char *)this + 40));
      String::String((String *)((char *)this + 176));
      LogicClientAvatar::initializeMembers(this);
      v2 = (LogicAvatarChangeListener *)operator new(8);
      LogicAvatarChangeListener::LogicAvatarChangeListener(v2);
      v3 = 0;
      *((_QWORD *)this + 18) = v2;
      do
      {
        v4 = (_QWORD *)operator new(16);
        *v4 = 0;
        v4[1] = 0;
        *((_DWORD *)v4 + 2) = 8;
        *v4 = operator new[](64);
        *((_QWORD *)this + v3++ + 9) = v4;
      }
      while ( v3 < 6 );
    }

    // attributes: thunk
    void __fastcall LogicClientAvatar::LogicClientAvatar(LogicClientAvatar *this)
    {
      __ZN17LogicClientAvatarC2Ev(this);
    }

    __int64 __fastcall LogicClientAvatar::destruct(tween::Bounce *this)
    {
      tween::Bounce *v1; // x19
      __int64 i; // x21
      _QWORD *v3; // x20
      __int64 v4; // x0
      __int64 v5; // x0
      void *v6; // x0
    
      v1 = this;
      for ( i = 72; i != 120; i += 8 )
      {
        this = (tween::Bounce *)LogicClientAvatar::clearDataSlotArray(this, *(_QWORD *)((char *)v1 + i));
        v3 = *(_QWORD **)((char *)v1 + i);
        if ( v3 )
        {
          if ( *v3 )
            operator delete[](*v3);
          operator delete(v3);
        }
        *(_QWORD *)((char *)v1 + i) = 0;
      }
      v4 = *((_QWORD *)v1 + 18);
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        v5 = *((_QWORD *)v1 + 18);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        *((_QWORD *)v1 + 18) = 0;
      }
      v6 = (void *)*((_QWORD *)v1 + 19);
      if ( v6 )
        operator delete(v6);
      *((_QWORD *)v1 + 19) = 0;
      LogicAvatar::destruct(v1);
      return LogicClientAvatar::initializeMembers(v1);
    }

    void __fastcall LogicClientAvatar::clearDataSlotArray(__int64 a1, __int64 a2)
    {
      __int64 v3; // x8
      __int64 v4; // x21
      void *v5; // x20
      __int64 v6; // x8
    
      v3 = *(int *)(a2 + 12);
      if ( (int)v3 >= 1 )
      {
        v4 = v3 - 1;
        do
        {
          v5 = *(void **)(*(_QWORD *)a2 + 8 * v4);
          if ( v5 )
          {
            LogicDataSlot::destruct(*(_QWORD *)(*(_QWORD *)a2 + 8 * v4));
            operator delete(v5);
          }
          v6 = v4-- + 1;
        }
        while ( v6 > 1 );
      }
      *(_DWORD *)(a2 + 12) = 0;
    }

    __int64 __fastcall LogicClientAvatar::getId(tween::Bounce *this)
    {
      return (__int64)this + 16;
    }

    __int64 __fastcall LogicClientAvatar::getAccountId(tween::Bounce *this)
    {
      return (__int64)this + 24;
    }

    __int64 __fastcall LogicClientAvatar::setAccountId(__int64 result, _DWORD *a2)
    {
      *(_DWORD *)(result + 24) = *a2;
      *(_DWORD *)(result + 28) = a2[1];
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getHomeId(tween::Bounce *this)
    {
      return (__int64)this + 32;
    }

    __int64 __fastcall LogicClientAvatar::getName(tween::Bounce *this)
    {
      return (__int64)this + 40;
    }

    __int64 __fastcall LogicClientAvatar::setName(tween::Bounce *this, const String *a2)
    {
      return String::operator=((String *)((char *)this + 40));
    }

    __int64 __fastcall LogicClientAvatar::encode(__int64 a1, #1317 *a2, const #1236 *a3)
    {
      const #1236 *v5; // x2
      const #1236 *v6; // x2
      __int64 i; // x22
      __int64 v8; // x23
      int v9; // w21
      __int64 v10; // x24
      void (__fastcall *v11)(#1317 *, __int64); // x8
      const #1236 *v12; // x2
    
      ByteStreamHelper::encodeLogicLong(a2, (#1226 *)(a1 + 16), a3);
      ByteStreamHelper::encodeLogicLong(a2, (#1226 *)(a1 + 24), v5);
      ByteStreamHelper::encodeLogicLong(a2, (#1226 *)(a1 + 32), v6);
      (*(void (__fastcall **)(#1317 *, __int64))(*(_QWORD *)a2 + 32LL))(a2, a1 + 40);
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 224));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 228));
      ByteStreamHelper::writeDataReference((int)a2, *(AreaEffectObject **)(a1 + 232));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 64));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 68));
      (*(void (__fastcall **)(#1317 *, __int64))(*(_QWORD *)a2 + 88LL))(a2, 6);
      for ( i = 0; i != 6; ++i )
      {
        v8 = *(_QWORD *)(a1 + 8 * i + 72);
        v9 = *(_DWORD *)(v8 + 12);
        (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, (unsigned int)v9);
        if ( v9 >= 1 )
        {
          v10 = 0;
          do
            LogicDataSlot::encode(*(AreaEffectObject ***)(*(_QWORD *)v8 + 8 * v10++), a2);
          while ( v9 != (_DWORD)v10 );
        }
      }
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 128));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 132));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 124));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 120));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 136));
      v11 = *(void (__fastcall **)(#1317 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( *(_QWORD *)(a1 + 152) )
      {
        v11(a2, 1);
        ByteStreamHelper::encodeLogicLong(a2, *(#1226 **)(a1 + 152), v12);
        (*(void (__fastcall **)(#1317 *, __int64))(*(_QWORD *)a2 + 32LL))(a2, a1 + 176);
        ByteStreamHelper::writeDataReference((int)a2, *(AreaEffectObject **)(a1 + 160));
        (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 168));
      }
      else
      {
        v11(a2, 0);
      }
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 200));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 204));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 208));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 212));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 216));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 220));
      return (*(__int64 (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 240));
    }

    __int64 __fastcall LogicClientAvatar::decode(__int64 a1, ByteStreamHelper *a2, LogicLong *a3)
    {
      LogicLong *v5; // x2
      LogicLong *v6; // x2
      int v7; // w2
      __int64 v8; // x0
      const char *v9; // x1
      const String *v10; // x1
      __int64 i; // x24
      __int64 v12; // x21
      int v13; // w22
      int v14; // w25
      LogicDataSlot *v15; // x23
      LogicLong *v16; // x21
      LogicLong *v17; // x2
      #1225 *v18; // x1
      __int64 result; // x0
      String v20; // [xsp+10h] [xbp-90h] BYREF
      LogicDataSlot *v21; // [xsp+28h] [xbp-78h] BYREF
      String v22; // [xsp+30h] [xbp-70h] BYREF
      String v23; // [xsp+48h] [xbp-58h] BYREF
    
      ByteStreamHelper::decodeLogicLong(a2, (ByteStream *)(a1 + 16), a3);
      ByteStreamHelper::decodeLogicLong(a2, (ByteStream *)(a1 + 24), v5);
      ByteStreamHelper::decodeLogicLong(a2, (ByteStream *)(a1 + 32), v6);
      (*(void (__fastcall **)(String *__return_ptr, ByteStreamHelper *, __int64))(*(_QWORD *)a2 + 112LL))(&v23, a2, 200);
      String::operator=((String *)(a1 + 40));
      String::~String();
      *(_BYTE *)(a1 + 224) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 136LL))(a2);
      *(_DWORD *)(a1 + 228) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_QWORD *)(a1 + 232) = ByteStreamHelper::readDataReference(a2, (ByteStream *)0x36, v7);
      *(_DWORD *)(a1 + 64) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_BYTE *)(a1 + 68) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 136LL))(a2);
      v8 = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      if ( (_DWORD)v8 != 6 )
      {
        String::format((String *)"received commodity count:%d, client commodity count:%d", v9, v8, 6);
        Debugger::error((Debugger *)&v22, v10);
      }
      for ( i = 0; i < 6; ++i )
      {
        v12 = *(_QWORD *)(a1 + 8 * i + 72);
        LogicClientAvatar::clearDataSlotArray(v8, v12);
        v8 = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
        v13 = v8;
        if ( (int)v8 >= 1 )
        {
          v14 = 0;
          do
          {
            v15 = (LogicDataSlot *)operator new(16);
            LogicDataSlot::LogicDataSlot(v15, 0, 0);
            v21 = v15;
            LogicDataSlot::decode(v15, a2);
            v8 = LogicArrayList<LogicDataSlot *>::add(v12, (__int64 *)&v21);
            ++v14;
          }
          while ( v14 < v13 );
        }
      }
      *(_DWORD *)(a1 + 128) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 132) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 124) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 120) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 136) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      if ( (*(unsigned int (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 136LL))(a2) )
      {
        v16 = (LogicLong *)operator new(8);
        LogicLong::LogicLong(v16);
        *(_QWORD *)(a1 + 152) = v16;
        ByteStreamHelper::decodeLogicLong(a2, v16, v17);
        (*(void (__fastcall **)(String *__return_ptr, ByteStreamHelper *, __int64))(*(_QWORD *)a2 + 112LL))(
          &v20,
          a2,
          900000);
        String::operator=((String *)(a1 + 176));
        String::~String();
        *(_QWORD *)(a1 + 160) = ByteStreamHelper::readDataReference(a2, v18);
        *(_DWORD *)(a1 + 168) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      }
      *(_DWORD *)(a1 + 200) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 204) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 208) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 212) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 216) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 220) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 136LL))(a2);
      *(_BYTE *)(a1 + 240) = result;
      return result;
    }

    bool __fastcall LogicClientAvatar::hasEnoughResources(
            tween::Bounce *this,
            const #1355 *a2,
            __int64 a3,
            int a4,
            PvpMatchmakeNotificationMessage *a5,
            __int64 a6)
    {
      int ResourceCount; // w0
      bool v13; // cc
      _BOOL8 result; // x0
      UnlockAccountPopup *v15; // x0
      __int64 GameListener; // x0
    
      ResourceCount = LogicClientAvatar::getResourceCount((int)this, a2);
      v13 = ResourceCount < (int)a3;
      result = ResourceCount >= (int)a3;
      if ( v13 && ((a4 ^ 1) & 1) == 0 )
      {
        v15 = (UnlockAccountPopup *)*((_QWORD *)this + 1);
        if ( v15 )
        {
          GameListener = LogicGameMode::getGameListener(v15);
          (*(void (__fastcall **)(__int64, const #1355 *, __int64, PvpMatchmakeNotificationMessage *, __int64))(*(_QWORD *)GameListener + 120LL))(
            GameListener,
            a2,
            a3,
            a5,
            a6);
        }
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getResourceCount(__int64 a1, AreaEffectObject *a2)
    {
      _QWORD *v2; // x19
      int DataIndex; // w0
    
      v2 = *(_QWORD **)(a1 + 72);
      DataIndex = LogicClientAvatar::getDataIndex(a1, (int)v2, a2);
      if ( DataIndex == -1 )
        return 0;
      else
        return *(unsigned int *)(*(_QWORD *)(*v2 + 8LL * DataIndex) + 8LL);
    }

    bool __fastcall LogicClientAvatar::hasEnoughDiamonds(tween::Bounce *this, int a2, int a3)
    {
      int v4; // w9
      _BOOL8 result; // x0
      UnlockAccountPopup *v6; // x0
      __int64 GameListener; // x0
    
      v4 = *((_DWORD *)this + 32);
      result = v4 >= a2;
      if ( v4 < a2 && ((a3 ^ 1) & 1) == 0 )
      {
        v6 = (UnlockAccountPopup *)*((_QWORD *)this + 1);
        if ( v6 )
        {
          GameListener = LogicGameMode::getGameListener(v6);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)GameListener + 128LL))(GameListener);
        }
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getDiamonds(tween::Bounce *this)
    {
      return *((unsigned int *)this + 32);
    }

    __int64 __fastcall LogicClientAvatar::getDefaultAvatar(tween::Bounce *this)
    {
      __int64 v1; // x19
      LogicDataTables *v2; // x0
      int MaxExpLevel; // w0
      int v4; // w3
      LogicDataTables *v5; // x0
      __int64 Globals; // x20
      LogicDataTables *v7; // x0
      HomeScreen *v8; // x0
    
      v1 = operator new(248);
      LogicClientAvatar::LogicClientAvatar((LogicClientAvatar *)v1);
      MaxExpLevel = LogicDataTables::getMaxExpLevel(v2);
      v5 = (LogicDataTables *)LogicMath::clamp((#1237 *)1, 1, MaxExpLevel, v4);
      *(_DWORD *)(v1 + 120) = (_DWORD)v5;
      Globals = LogicDataTables::getGlobals(v5);
      LogicClientAvatar::addFreeDiamonds((tween::Bounce *)v1, *(_DWORD *)(Globals + 268), 0);
      v7 = (LogicDataTables *)LogicClientAvatar::addFreeGold((tween::Bounce *)v1, *(_DWORD *)(Globals + 272), 0);
      v8 = (HomeScreen *)LogicDataTables::getGlobals(v7);
      *(_QWORD *)(v1 + 232) = LogicGlobals::getStartingArena(v8);
      return v1;
    }

    __int64 __fastcall LogicClientAvatar::setExpLevel(tween::Bounce *this, #1237 *a2)
    {
      int MaxExpLevel; // w0
      int v5; // w3
      __int64 result; // x0
    
      MaxExpLevel = LogicDataTables::getMaxExpLevel(this);
      result = LogicMath::clamp(a2, 1, MaxExpLevel, v5);
      *((_DWORD *)this + 30) = result;
      return result;
    }

    __n128 __fastcall LogicClientAvatar::addFreeDiamonds(tween::Bounce *this, int a2, const char *a3)
    {
      int v3; // w9
      __int64 v4; // x0
      __n128 result; // q0
    
      if ( a2 <= 0 )
        return Debugger::doAssert((Debugger *)(a2 >= 0), (bool)"", a3);
      v3 = *((_DWORD *)this + 33);
      *((_DWORD *)this + 32) += a2;
      *((_DWORD *)this + 33) = v3 + a2;
      v4 = *((_QWORD *)this + 18);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
      return result;
    }

    __n128 __fastcall LogicClientAvatar::addFreeGold(tween::Bounce *this, int a2, const char *a3)
    {
      int v3; // w19
      const AreaEffectObject *GoldData; // x0
      LogicKickAllianceMemberCommand *v7; // x0
      __n128 result; // q0
      int v9; // w21
      const AreaEffectObject *FreeGoldData; // x2
    
      v3 = (int)a3;
      if ( a2 <= 0 )
        return Debugger::doAssert((Debugger *)(a2 >= 0), (bool)"", a3);
      GoldData = (const AreaEffectObject *)LogicDataTables::getGoldData(this);
      v7 = (LogicKickAllianceMemberCommand *)LogicClientAvatar::commodityCountChangeHelper(this, 0, GoldData, a2, v3);
      v9 = (int)v7;
      if ( (int)v7 >= 1 )
      {
        FreeGoldData = (const AreaEffectObject *)LogicDataTables::getFreeGoldData(v7);
        LogicClientAvatar::commodityCountChangeHelper(this, 0, FreeGoldData, v9, v3);
      }
      return result;
    }

    __int64 __fastcall LogicClientAvatar::setArena(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 232) = a2;
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getNameSetByUser(tween::Bounce *this)
    {
      return *((unsigned __int8 *)this + 224);
    }

    __int64 __fastcall LogicClientAvatar::setNameSetByUser(__int64 this, char a2)
    {
      *(_BYTE *)(this + 224) = a2;
      return this;
    }

    __int64 __fastcall LogicClientAvatar::getNameChangeState(tween::Bounce *this)
    {
      return *((unsigned int *)this + 57);
    }

    __int64 __fastcall LogicClientAvatar::setNameChangeState(__int64 this, int a2)
    {
      *(_DWORD *)(this + 228) = a2;
      return this;
    }

    __int64 __fastcall LogicClientAvatar::commodityCountChangeHelper(
            tween::Bounce *this,
            const char *a2,
            const AreaEffectObject *a3,
            __int64 a4,
            __int64 a5)
    {
      __int64 v6; // x21
      _QWORD *v10; // x25
      __int64 DataIndex; // x0
      __int64 v12; // x24
      int v13; // w25
      LogicKickAllianceMemberCommand *GoldData; // x0
      AreaEffectObject *FreeGoldData; // x0
      LogicKickAllianceMemberCommand *ResourceCount; // x0
      const LogicData *v17; // x0
      LogicMath *v18; // x21
      int ResourceCap; // w0
      int v20; // w2
      int v21; // w0
      bool v22; // cc
      __int64 v24; // [xsp+8h] [xbp-48h] BYREF
    
      v6 = a4;
      if ( (unsigned int)a2 > 5 )
        Debugger::error((__siginfo *)"LogicClientAvatar::commodityCountChangeHelper: illegal commodity type", a2);
      if ( !(_DWORD)a4 )
        return 0;
      v10 = (_QWORD *)*((_QWORD *)this + (int)a2 + 9);
      DataIndex = LogicClientAvatar::getDataIndex((int)this, (int)v10, a3);
      v24 = 0;
      if ( (DataIndex & 0x80000000) != 0 )
      {
        v12 = operator new(16);
        LogicDataSlot::LogicDataSlot((LogicDataSlot *)v12, a3, 0);
        v24 = v12;
        DataIndex = LogicArrayList<LogicDataSlot *>::add((__int64)v10, &v24);
      }
      else
      {
        v12 = *(_QWORD *)(*v10 + 8LL * (int)DataIndex);
        v24 = v12;
      }
      v13 = *(_DWORD *)(v12 + 8);
      *(_DWORD *)(v12 + 8) = v13 + v6;
      GoldData = (LogicKickAllianceMemberCommand *)LogicDataTables::getGoldData((LogicKickAllianceMemberCommand *)DataIndex);
      if ( GoldData == a3 )
      {
        FreeGoldData = (AreaEffectObject *)LogicDataTables::getFreeGoldData(GoldData);
        ResourceCount = (LogicKickAllianceMemberCommand *)LogicClientAvatar::getResourceCount((__int64)this, FreeGoldData);
        if ( *(_DWORD *)(v12 + 8) < (int)ResourceCount )
        {
          v17 = (const LogicData *)LogicDataTables::getFreeGoldData(ResourceCount);
          LogicClientAvatar::setCommodityCount(this, 0, v17, *(_DWORD *)(v12 + 8));
        }
      }
      if ( (int)v6 >= 1 )
      {
        if ( (unsigned int)LogicData::getDataType((ResetAccountMessage **)a3) == 5
          && (int)LogicResourceData::getResourceCap((__int64)a3) >= 1 )
        {
          v18 = (LogicMath *)*(unsigned int *)(v12 + 8);
          ResourceCap = LogicResourceData::getResourceCap((__int64)a3);
          v21 = LogicMath::min(v18, ResourceCap, v20);
          *(_DWORD *)(v12 + 8) = v21;
          v6 = (unsigned int)(v21 - v13);
        }
        v22 = v13 < 1 || (int)v6 < 1;
        if ( !v22 && (*(_DWORD *)(v12 + 8) & 0x80000000) != 0 )
          *(_DWORD *)(v12 + 8) = 0x7FFFFFFF;
      }
      (*(void (__fastcall **)(_QWORD, const char *, const AreaEffectObject *, _QWORD, __int64))(**((_QWORD **)this + 18)
                                                                                              + 48LL))(
        *((_QWORD *)this + 18),
        a2,
        a3,
        *(unsigned int *)(v12 + 8),
        a5);
      return v6;
    }

    __int64 __fastcall LogicClientAvatar::getDataIndex(int a1, __int64 a2, AreaEffectObject *a3)
    {
      __int64 v5; // x22
      __int64 v6; // x19
    
      v5 = *(int *)(a2 + 12);
      if ( (int)v5 < 1 )
        return 0xFFFFFFFFLL;
      v6 = 0;
      while ( !LogicData::equals(**(_QWORD **)(*(_QWORD *)a2 + 8 * v6), (__int64)a3) )
      {
        if ( ++v6 >= v5 )
          return 0xFFFFFFFFLL;
      }
      return v6;
    }

    __int64 __fastcall LogicClientAvatar::setCommodityCount(
            tween::Bounce *a1,
            const char *a2,
            const AreaEffectObject *a3,
            int a4)
    {
      int CommodityCount; // w22
      _QWORD *v9; // x24
      int DataIndex; // w0
      LogicDataSlot *v11; // x25
      __int64 result; // x0
      LogicDataSlot *v13; // [xsp+8h] [xbp-48h] BYREF
    
      if ( (unsigned int)a2 >= 6 )
        Debugger::error((__siginfo *)"LogicClientAvatar::validateCommodityType.", a2);
      CommodityCount = LogicClientAvatar::getCommodityCount(a1, (int)a2, a3);
      v9 = (_QWORD *)*((_QWORD *)a1 + (int)a2 + 9);
      DataIndex = LogicClientAvatar::getDataIndex(CommodityCount, (__int64)v9, a3);
      if ( DataIndex == -1 )
      {
        v11 = (LogicDataSlot *)operator new(16);
        LogicDataSlot::LogicDataSlot(v11, a3, a4);
        v13 = v11;
        LogicArrayList<LogicDataSlot *>::add((__int64)v9, (__int64 *)&v13);
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(*v9 + 8LL * DataIndex) + 8LL) = a4;
      }
      result = LogicClientAvatar::getCommodityCount(a1, (int)a2, a3);
      if ( (_DWORD)result != CommodityCount )
        return (*(__int64 (__fastcall **)(_QWORD *, const char *, const AreaEffectObject *, __int64, _QWORD))(**((_QWORD **)a1 + 18) + 48LL))(
                 *((_QWORD **)a1 + 18),
                 a2,
                 a3,
                 result,
                 0);
      return result;
    }

    __int64 __fastcall LogicClientAvatar::loadForReplay(__int64 a1, #1396 *a2)
    {
      const String *v4; // x3
      const String *v5; // x3
      const String *v6; // x2
      const String *v7; // x2
      __int64 result; // x0
      String v9; // [xsp+0h] [xbp-50h] BYREF
      String v10; // [xsp+18h] [xbp-38h] BYREF
    
      *(_DWORD *)(a1 + 24) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_ACC_H, 0);
      *(_DWORD *)(a1 + 28) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_ACC_L, 0);
      *(_DWORD *)(a1 + 120) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_EXP_LEVEL, 0);
      *(_DWORD *)(a1 + 124) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_EXP_POINTS, 0);
      LogicJSONHelper::getString(a2, (const #1234 *)&JSON_ATTRIB_NAME, &LogicJSONHelper::DEFAULT_STRING, v4, &v10);
      String::operator=((String *)(a1 + 40));
      String::~String();
      LogicJSONHelper::getString(a2, (const #1234 *)&JSON_ATTRIB_CLAN_NAME, &LogicJSONHelper::DEFAULT_STRING, v5, &v9);
      String::operator=((String *)(a1 + 176));
      String::~String();
      *(_QWORD *)(a1 + 232) = LogicJSONHelper::getLogicData(a2, (const #1234 *)&JSON_ATTRIB_ARENA, v6);
      result = LogicJSONHelper::getLogicData(a2, (const #1234 *)&JSON_ATTRIB_BADGE, v7);
      *(_QWORD *)(a1 + 160) = result;
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getGold(tween::Bounce *this)
    {
      AreaEffectObject *GoldData; // x1
    
      GoldData = (AreaEffectObject *)LogicDataTables::getGoldData(this);
      return LogicClientAvatar::getResourceCount((__int64)this, GoldData);
    }

    __int64 __fastcall LogicClientAvatar::getFreeGold(tween::Bounce *this)
    {
      AreaEffectObject *FreeGoldData; // x1
    
      FreeGoldData = (AreaEffectObject *)LogicDataTables::getFreeGoldData(this);
      return LogicClientAvatar::getResourceCount((__int64)this, FreeGoldData);
    }

    __int64 __fastcall LogicClientAvatar::getMaxExpPoints(__int64 a1)
    {
      #1364 *ExpLevel; // x0
    
      ExpLevel = (#1364 *)LogicDataTables::getExpLevel(*(unsigned int *)(a1 + 120), 0);
      return LogicExpLevelData::getExpToNextLevel(ExpLevel);
    }

    __int64 __fastcall LogicClientAvatar::getExpLevelData(tween::Bounce *this)
    {
      return LogicDataTables::getExpLevel(*((unsigned int *)this + 30), 0);
    }

    // attributes: thunk
    __int64 __fastcall LogicClientAvatar::getMaxExpLevel(tween::Bounce *this)
    {
      return LogicDataTables::getMaxExpLevel(this);
    }

    __int64 __fastcall LogicClientAvatar::getExpPoints(tween::Bounce *this)
    {
      return *((unsigned int *)this + 31);
    }

    __int64 __fastcall LogicClientAvatar::setExpPoints(__int64 this, int a2)
    {
      *(_DWORD *)(this + 124) = a2;
      return this;
    }

    __int64 __fastcall LogicClientAvatar::getExpLevel(tween::Bounce *this)
    {
      return *((unsigned int *)this + 30);
    }

    unsigned int *__fastcall LogicClientAvatar::xpGainHelper(unsigned int *this, int a2, #1146 *a3)
    {
      int v4; // w23
      unsigned int *v5; // x19
      #1237 *v6; // x25
      int v7; // w22
      int v8; // w24
      int v9; // w27
      int v10; // w28
      unsigned __int64 v11; // x21
      int v12; // w26
      __int64 ExpToNextLevel; // x0
      #1364 *ExpLevel; // x0
      int MaxExpLevel; // w0
      int v16; // w3
    
      v4 = a2;
      v5 = this;
      if ( a2 )
      {
        v6 = (#1237 *)*(this + 30);
        this = (unsigned int *)LogicDataTables::getMaxExpLevel((LogicDataTables *)this);
        v7 = (int)this;
        if ( (int)v6 < (int)this )
        {
          v8 = v5[31];
          if ( (int)this < 1 || v4 < 1 )
          {
            v5[31] = v8;
            v12 = v8;
          }
          else
          {
            v9 = 0;
            v10 = (_DWORD)v6 + 1 - (_DWORD)this;
            v11 = (unsigned __int64)v6;
            v12 = v5[31];
            do
            {
              ExpToNextLevel = (unsigned int)((_DWORD)v6 + v9);
              v12 += v4;
              if ( (int)ExpToNextLevel >= v7 )
                break;
              ExpLevel = (#1364 *)LogicDataTables::getExpLevel(ExpToNextLevel, 0);
              ExpToNextLevel = LogicExpLevelData::getExpToNextLevel(ExpLevel);
              v4 = v12 - ExpToNextLevel;
              if ( v12 < (int)ExpToNextLevel )
              {
                v11 = (unsigned int)((_DWORD)v6 + v9);
                break;
              }
              v11 = (unsigned int)(v11 + 1);
              ExpToNextLevel = LogicClientAvatar::levelUp(
                                 (tween::Bounce *)v5,
                                 (LogicKickAllianceMemberCommand *)(unsigned int)((_DWORD)v6 + v9 + 1),
                                 a3);
              v12 = 0;
              if ( !(v10 + v9) )
                v4 = 0;
              ++v9;
            }
            while ( v9 < v7 && v4 > 0 );
            v5[31] = v12;
            if ( (int)v11 > (int)v6 )
            {
              MaxExpLevel = LogicDataTables::getMaxExpLevel((LogicDataTables *)ExpToNextLevel);
              v5[30] = LogicMath::clamp((#1237 *)v11, 1, MaxExpLevel, v16);
              this = (unsigned int *)*((_QWORD *)v5 + 18);
              if ( this )
                return (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(
                                         this,
                                         (unsigned int)(v12 - v8),
                                         (unsigned int)(v11 - (_DWORD)v6),
                                         0);
              return this;
            }
          }
          this = (unsigned int *)*((_QWORD *)v5 + 18);
          if ( this )
            return (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)this + 64LL))(
                                     this,
                                     (unsigned int)(v12 - v8));
        }
      }
      return this;
    }

    __int64 __fastcall LogicClientAvatar::levelUp(tween::Bounce *this, LogicKickAllianceMemberCommand *a2, #1146 *a3)
    {
      __int64 ExpLevel; // x21
      int Decks; // w22
      int DeckCount; // w0
      int v8; // w22
      int DiamondReward; // w8
      UnlockAccountPopup *GameMode; // x0
      __int64 result; // x0
    
      ExpLevel = LogicDataTables::getExpLevel(a2, 0);
      Decks = LogicExpLevelData::getDecks();
      DeckCount = LogicClientHome::getDeckCount(a3);
      if ( DeckCount < Decks )
      {
        v8 = Decks - DeckCount;
        do
        {
          LogicClientHome::addEmptyDeck(a3);
          --v8;
        }
        while ( v8 );
      }
      DiamondReward = LogicExpLevelData::getDiamondReward(ExpLevel);
      if ( DiamondReward >= 1 )
        LogicClientAvatar::addFreeDiamonds(this, DiamondReward, (const char *)9);
      GameMode = (UnlockAccountPopup *)LogicClientHome::getGameMode(a3);
      result = LogicGameMode::getGameListener(GameMode);
      if ( result )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 32LL))(result);
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getChangeListener(tween::Bounce *this)
    {
      return *((_QWORD *)this + 18);
    }

    __n128 __fastcall LogicClientAvatar::useDiamonds(tween::Bounce *this, int a2, #1146 *a3)
    {
      const char *v5; // x2
      int v6; // w9
      int v7; // w8
    
      Debugger::doAssert((Debugger *)(a2 >= 0), (bool)"", (const char *)a3);
      v6 = *((_DWORD *)this + 33);
      v7 = *((_DWORD *)this + 32) - a2;
      *((_DWORD *)this + 32) = v7;
      if ( v6 > v7 )
        *((_DWORD *)this + 33) = v7;
      return Debugger::doAssert((Debugger *)(v7 >= 0), (bool)"", v5);
    }

    __int64 __fastcall LogicClientAvatar::setDiamonds(__int64 this, int a2)
    {
      *(_DWORD *)(this + 128) = a2;
      return this;
    }

    __int64 __fastcall LogicClientAvatar::setFreeDiamonds(__int64 this, int a2)
    {
      *(_DWORD *)(this + 132) = a2;
      return this;
    }

    __int64 __fastcall LogicClientAvatar::getFreeDiamonds(tween::Bounce *this)
    {
      return *((unsigned int *)this + 33);
    }

    __int64 __fastcall LogicClientAvatar::addCumulativePurchasedDiamonds(__int64 this, int a2)
    {
      *(_DWORD *)(this + 136) += a2;
      return this;
    }

    __int64 __fastcall LogicClientAvatar::getCommodityCount(
            tween::Bounce *this,
            const char *a2,
            const AreaEffectObject *a3)
    {
      _QWORD *v3; // x20
      int DataIndex; // w0
    
      if ( (unsigned int)a2 >= 6 )
        Debugger::error((__siginfo *)"LogicClientAvatar::validateCommodityType.", a2);
      v3 = (_QWORD *)*((_QWORD *)this + (int)a2 + 9);
      DataIndex = LogicClientAvatar::getDataIndex((int)this, (__int64)v3, a3);
      if ( DataIndex == -1 )
        return 0;
      else
        return *(unsigned int *)(*(_QWORD *)(*v3 + 8LL * DataIndex) + 8LL);
    }

    __int64 __fastcall LogicClientAvatar::getSummonerTowerLevelIndex(tween::Bounce *this)
    {
      #1364 *ExpLevel; // x0
    
      ExpLevel = (#1364 *)LogicDataTables::getExpLevel(*((unsigned int *)this + 30), 0);
      return (unsigned int)LogicExpLevelData::getTowerLevel(ExpLevel) - 1;
    }

    __int64 __fastcall LogicClientAvatar::getMaxGold(tween::Bounce *this)
    {
      __int64 GoldData; // x0
    
      GoldData = LogicDataTables::getGoldData(this);
      return LogicResourceData::getResourceCap(GoldData);
    }

    bool __fastcall LogicClientAvatar::hasName(tween::Bounce *this)
    {
      return *((_DWORD *)this + 10) != 0;
    }

    __int64 __fastcall LogicClientAvatar::getAllianceId(tween::Bounce *this)
    {
      return *((_QWORD *)this + 19);
    }

    void __fastcall LogicClientAvatar::setAllianceId(tween::Bounce *this, #1236 *a2)
    {
      void *v4; // x0
    
      v4 = (void *)*((_QWORD *)this + 19);
      if ( v4 )
        operator delete(v4);
      *((_QWORD *)this + 19) = a2;
    }

    bool __fastcall LogicClientAvatar::isInAlliance(tween::Bounce *this)
    {
      return *((_QWORD *)this + 19) != 0;
    }

    __int64 __fastcall LogicClientAvatar::setAllianceName(tween::Bounce *this, const String *a2)
    {
      return String::operator=((String *)((char *)this + 176));
    }

    __int64 __fastcall LogicClientAvatar::getAllianceName(tween::Bounce *this)
    {
      return (__int64)this + 176;
    }

    __int64 __fastcall LogicClientAvatar::setAllianceBadge(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 160) = a2;
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getAllianceBadge(tween::Bounce *this)
    {
      return *((_QWORD *)this + 20);
    }

    __int64 __fastcall LogicClientAvatar::setAllianceRole(__int64 result, int a2)
    {
      *(_DWORD *)(result + 168) = a2;
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getAllianceRole(__int64 a1)
    {
      return *(unsigned int *)(a1 + 168);
    }

    __int64 __fastcall LogicClientAvatar::getAllianceRoleData(__int64 a1, int a2)
    {
      __int64 Table; // x0
    
      Table = LogicDataTables::getTable((LogicDataTables *)0x3B, a2);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Table + 40LL))(Table, *(unsigned int *)(a1 + 168));
    }

    __int64 __fastcall LogicClientAvatar::getBattleCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 200);
    }

    __int64 __fastcall LogicClientAvatar::setBattleCount(__int64 result, int a2)
    {
      *(_DWORD *)(result + 200) = a2;
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getWinCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 204);
    }

    __int64 __fastcall LogicClientAvatar::setWinCount(__int64 result, int a2)
    {
      *(_DWORD *)(result + 204) = a2;
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getLoseCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 208);
    }

    __int64 __fastcall LogicClientAvatar::setLoseCount(__int64 result, int a2)
    {
      *(_DWORD *)(result + 208) = a2;
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getNpcWinCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 216);
    }

    __int64 __fastcall LogicClientAvatar::setNpcWinCount(__int64 result, int a2)
    {
      *(_DWORD *)(result + 216) = a2;
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getNpcLoseCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 220);
    }

    __int64 __fastcall LogicClientAvatar::setNpcLoseCount(__int64 result, int a2)
    {
      *(_DWORD *)(result + 220) = a2;
      return result;
    }

    __int64 __fastcall LogicClientAvatar::setWinLooseStreak(__int64 result, int a2)
    {
      *(_DWORD *)(result + 212) = a2;
      return result;
    }

    __int64 __fastcall LogicClientAvatar::updateWinnerChestIndex(LogicDataTables *a1)
    {
      const AreaEffectObject *ChestOrderIndexData; // x2
    
      ChestOrderIndexData = (const AreaEffectObject *)LogicDataTables::getChestOrderIndexData(a1);
      return LogicClientAvatar::commodityCountChangeHelper(a1, 0, ChestOrderIndexData, 1, 10);
    }

    __int64 __fastcall LogicClientAvatar::resetWinnerChestIndexDebug(LogicDataTables *a1)
    {
      AreaEffectObject *ChestOrderIndexData; // x20
      __int64 v3; // x3
    
      ChestOrderIndexData = (AreaEffectObject *)LogicDataTables::getChestOrderIndexData(a1);
      v3 = (unsigned int)-LogicClientAvatar::getResourceCount((__int64)a1, ChestOrderIndexData);
      return LogicClientAvatar::commodityCountChangeHelper(a1, 0, ChestOrderIndexData, v3, 11);
    }

    __int64 __fastcall LogicClientAvatar::setChestCount(LogicDataTables *a1, String *a2)
    {
      LogicDataTables *Globals; // x0
      int v5; // w21
      unsigned __int8 *v6; // x0
      int v7; // w1
      const String *v8; // x1
      const AreaEffectObject *ChestCountData; // x0
      _QWORD v11[3]; // [xsp+0h] [xbp-50h] BYREF
      _QWORD v12[3]; // [xsp+18h] [xbp-38h] BYREF
    
      Globals = (LogicDataTables *)LogicDataTables::getGlobals(a1);
      v5 = *((_DWORD *)Globals + 98);
      v6 = (unsigned __int8 *)LogicDataTables::getGlobals(Globals);
      if ( ((unsigned int)a2 & 0x80000000) != 0 || v6[397] + v5 < (int)a2 )
      {
        String::valueOf(v11, a2, v7);
        operator+(v12, "avatar: set chest count out of bounds: ", v11);
        Debugger::warning((__siginfo *)v12, v8);
        String::~String();
        String::~String();
      }
      ChestCountData = (const AreaEffectObject *)LogicDataTables::getChestCountData((LogicDataTables *)v6);
      return LogicClientAvatar::setCommodityCount(a1, 0, ChestCountData, (int)a2);
    }

    __int64 __fastcall LogicClientAvatar::getStarCount(LogicDataTables *a1)
    {
      AreaEffectObject *StarCountData; // x1
    
      StarCountData = (AreaEffectObject *)LogicDataTables::getStarCountData(a1);
      return LogicClientAvatar::getResourceCount((__int64)a1, StarCountData);
    }

    LogicDataTables *__fastcall LogicClientAvatar::setStarCount(tween::Bounce *this, String *a2)
    {
      LogicDataTables *v4; // x21
      HomeScreen *Globals; // x0
      LogicDataTables *result; // x0
      int v7; // w1
      const String *v8; // x1
      const AreaEffectObject *StarCountData; // x0
      int ThreeCrownWins; // w0
      _QWORD v11[3]; // [xsp+0h] [xbp-50h] BYREF
      String v12; // [xsp+18h] [xbp-38h] BYREF
    
      v4 = (LogicDataTables *)*((_QWORD *)this + 29);
      Globals = (HomeScreen *)LogicDataTables::getGlobals(this);
      result = (LogicDataTables *)LogicGlobals::getStartingArena(Globals);
      if ( v4 != result )
      {
        if ( (unsigned int)a2 >= 4 )
        {
          String::valueOf(v11, a2, v7);
          operator+(&v12, "avatar: set star count out of bounds: ", v11);
          Debugger::warning((__siginfo *)&v12, v8);
          String::~String();
          String::~String();
        }
        StarCountData = (const AreaEffectObject *)LogicDataTables::getStarCountData(result);
        result = (LogicDataTables *)LogicClientAvatar::setCommodityCount(this, 0, StarCountData, (int)a2);
        if ( (_DWORD)a2 == 3 )
        {
          ThreeCrownWins = LogicClientAvatar::getThreeCrownWins(this);
          return (LogicDataTables *)LogicClientAvatar::setThreeCrownWins(this, ThreeCrownWins + 1);
        }
      }
      return result;
    }

    __int64 __fastcall LogicClientAvatar::setThreeCrownWins(tween::Bounce *this, int a2)
    {
      const LogicData *v4; // x2
      const AreaEffectObject *ResourceByName; // x21
      String v7; // [xsp+8h] [xbp-38h] BYREF
    
      String::String(&v7, "ThreeCrownWins");
      ResourceByName = (const AreaEffectObject *)LogicDataTables::getResourceByName((LogicDataTables *)&v7, 0, v4);
      String::~String();
      return LogicClientAvatar::setCommodityCount(this, (const char *)4, ResourceByName, a2);
    }

    __int64 __fastcall LogicClientAvatar::getThreeCrownWins(tween::Bounce *this)
    {
      const LogicData *v2; // x2
      AreaEffectObject *ResourceByName; // x20
      _QWORD *v4; // x19
      int v5; // w0
      int DataIndex; // w0
      String v8; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v8, "ThreeCrownWins");
      ResourceByName = (AreaEffectObject *)LogicDataTables::getResourceByName((LogicDataTables *)&v8, 0, v2);
      String::~String();
      v4 = (_QWORD *)*((_QWORD *)this + 13);
      DataIndex = LogicClientAvatar::getDataIndex(v5, (__int64)v4, ResourceByName);
      if ( DataIndex == -1 )
        return 0;
      else
        return *(unsigned int *)(*(_QWORD *)(*v4 + 8LL * DataIndex) + 8LL);
    }

    __int64 __fastcall LogicClientAvatar::getNextWinnerChest(tween::Bounce *this, const #1143 *a2)
    {
      unsigned __int8 *Globals; // x0
      int v5; // w22
      AreaEffectObject *ChestCountData; // x0
      LogicDataTables *ResourceCount; // x0
      int v8; // w21
      const #1143 *StartingArena; // x0
      const char *v10; // x1
      int v11; // w23
      HomeScreen *v12; // x0
      bool v14; // cc
      AreaEffectObject *ChestOrderIndexData; // x0
      __int64 v16; // x20
      int v17; // w1
      __int64 Table; // x21
      const char *v19; // x1
      LogicDataTables *v20; // x22
      LogicSpeedUpExploringCommand *ChestOrderData; // x23
    
      Globals = (unsigned __int8 *)LogicDataTables::getGlobals(this);
      v5 = Globals[397];
      ChestCountData = (AreaEffectObject *)LogicDataTables::getChestCountData((LogicDataTables *)Globals);
      ResourceCount = (LogicDataTables *)LogicClientAvatar::getResourceCount((__int64)this, ChestCountData);
      v8 = (int)ResourceCount;
      StartingArena = (const #1143 *)LogicDataTables::getGlobals(ResourceCount);
      if ( !a2 )
      {
        Debugger::warning((__siginfo *)"getNextWinnerChest called with NULL arena", v10);
        return 0;
      }
      v11 = *((_DWORD *)StartingArena + 98);
      if ( !*((_BYTE *)this + 240) )
      {
        if ( v5 )
          v14 = 1;
        else
          v14 = v8 < v11;
        if ( v14 )
          goto LABEL_15;
        return 0;
      }
      v12 = (HomeScreen *)LogicDataTables::getGlobals(StartingArena);
      StartingArena = (const #1143 *)LogicGlobals::getStartingArena(v12);
      if ( v5 == 0 && v8 >= v11 || StartingArena == a2 )
        return 0;
    LABEL_15:
      ChestOrderIndexData = (AreaEffectObject *)LogicDataTables::getChestOrderIndexData(StartingArena);
      v16 = LogicClientAvatar::getResourceCount((__int64)this, ChestOrderIndexData);
      Table = LogicDataTables::getTable((LogicDataTables *)0x34, v17);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) < 1 )
    LABEL_22:
        Debugger::error((__siginfo *)"LogicClientAvatar::getNextOrderedTreasureChest - No chest found", v19);
      v20 = 0;
      while ( 1 )
      {
        ChestOrderData = (LogicSpeedUpExploringCommand *)LogicDataTables::getChestOrderData(v20, (int)v19);
        if ( (_DWORD)v20 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) - 1 )
          v16 = (unsigned int)((int)v16 % (int)LogicChestOrderData::getChestCount(ChestOrderData));
        if ( (v16 & 0x80000000) == 0 && (int)v16 < (int)LogicChestOrderData::getChestCount(ChestOrderData) )
          return LogicChestOrderData::getChest(ChestOrderData, (const char *)v16, a2);
        v16 = (unsigned int)v16 - (unsigned int)LogicChestOrderData::getChestCount(ChestOrderData);
        v20 = (LogicDataTables *)(unsigned int)((_DWORD)v20 + 1);
        if ( (int)v20 >= (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) )
          goto LABEL_22;
      }
    }

    __int64 __fastcall LogicClientAvatar::getArena(tween::Bounce *this)
    {
      return *((_QWORD *)this + 29);
    }

    bool __fastcall LogicClientAvatar::shouldGoToFirstTutorialBattle(__int64 a1)
    {
      return !*(_DWORD *)(a1 + 220) && *(_DWORD *)(a1 + 216) == 0;
    }

    __int64 __fastcall LogicClientAvatar::setArenaBeforeLastNPCMatch(__int64 a1)
    {
      __int64 v2; // x20
      HomeScreen *Globals; // x0
      __int64 result; // x0
    
      v2 = *(_QWORD *)(a1 + 232);
      Globals = (HomeScreen *)LogicDataTables::getGlobals((LogicDataTables *)a1);
      result = LogicGlobals::getStartingArena(Globals);
      *(_BYTE *)(a1 + 240) = v2 != result;
      return result;
    }

    __int64 __fastcall LogicClientAvatar::scoreChanged(int *a1, int a2, int a3)
    {
      int v4; // w20
    
      v4 = LogicMath::max((LogicMath *)(unsigned int)(a1[16] + a2), 0, a3);
      a1[16] = v4;
      if ( v4 > (int)LogicClientAvatar::getMaxScore(a1) )
        LogicClientAvatar::setMaxScore((LogicClientAvatar *)a1, a1[16]);
      return LogicClientAvatar::refreshArena((LogicClientAvatar *)a1);
    }

    __int64 __fastcall LogicClientAvatar::getMaxScore(__int64 a1)
    {
      const LogicData *v2; // x2
      AreaEffectObject *ResourceByName; // x20
      _QWORD *v4; // x19
      int v5; // w0
      int DataIndex; // w0
      String v8; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v8, "MaxScore");
      ResourceByName = (AreaEffectObject *)LogicDataTables::getResourceByName((LogicDataTables *)&v8, 0, v2);
      String::~String();
      v4 = *(_QWORD **)(a1 + 104);
      DataIndex = LogicClientAvatar::getDataIndex(v5, (__int64)v4, ResourceByName);
      if ( DataIndex == -1 )
        return 0;
      else
        return *(unsigned int *)(*(_QWORD *)(*v4 + 8LL * DataIndex) + 8LL);
    }

    __int64 __fastcall LogicClientAvatar::setMaxScore(tween::Bounce *a1, int a2)
    {
      const LogicData *v4; // x2
      const AreaEffectObject *ResourceByName; // x21
      String v7; // [xsp+8h] [xbp-38h] BYREF
    
      String::String(&v7, "MaxScore");
      ResourceByName = (const AreaEffectObject *)LogicDataTables::getResourceByName((LogicDataTables *)&v7, 0, v4);
      String::~String();
      return LogicClientAvatar::setCommodityCount(a1, (const char *)4, ResourceByName, a2);
    }

    __int64 __fastcall LogicClientAvatar::refreshArena(__int64 a1)
    {
      int v2; // w26
      int DemoteTrophyLimit; // w20
      int v4; // w1
      __int64 Table; // x21
      __int64 result; // x0
      __int64 v7; // x27
      __int64 v8; // x22
      int TrophyLimit; // w25
      int v10; // w0
      int v11; // w25
      __int64 v12; // x23
      __int64 v13; // x24
      LogicDataTables *isTrainingCamp; // x0
      _BOOL4 v15; // w25
      int v16; // w25
      int v17; // w27
    
      v2 = *(_DWORD *)(a1 + 64);
      DemoteTrophyLimit = LogicArenaData::getDemoteTrophyLimit(*(_QWORD *)(a1 + 232));
      Table = LogicDataTables::getTable((LogicDataTables *)0x36, v4);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
      if ( (int)result >= 1 )
      {
        v7 = 0;
        v8 = 0;
        while ( 1 )
        {
          v12 = v7;
          v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v8);
          isTrainingCamp = (LogicDataTables *)LogicArenaData::isTrainingCamp(v13);
          if ( ((unsigned __int8)isTrainingCamp & 1) != 0 )
          {
            v15 = 1;
          }
          else
          {
            v16 = *(_DWORD *)(a1 + 216);
            v15 = v16 >= *(_DWORD *)(LogicDataTables::getGlobals(isTrainingCamp) + 404LL);
          }
          v17 = *(_DWORD *)(a1 + 64);
          if ( v17 < (int)LogicArenaData::getTrophyLimit(v13) || !v15 || (LogicArenaData::isTrainingCamp(v13) & 1) != 0 )
          {
            v7 = v12;
          }
          else
          {
            v7 = v13;
            if ( (LogicArenaData::isTrainingCamp(*(_QWORD *)(a1 + 232)) & 1) == 0 )
            {
              if ( v12 )
              {
                TrophyLimit = LogicArenaData::getTrophyLimit(v13);
                v10 = LogicArenaData::getTrophyLimit(v12);
                if ( TrophyLimit > v10 )
                  v7 = v13;
                else
                  v7 = v12;
                if ( v2 < DemoteTrophyLimit || TrophyLimit <= v10 )
                  goto LABEL_22;
    LABEL_12:
                v11 = LogicArenaData::getTrophyLimit(v13);
                if ( v11 <= (int)LogicArenaData::getTrophyLimit(*(_QWORD *)(a1 + 232)) )
                  v7 = v12;
                else
                  v7 = v13;
                goto LABEL_22;
              }
              v7 = v13;
              if ( v2 >= DemoteTrophyLimit )
                goto LABEL_12;
            }
          }
    LABEL_22:
          v8 = (unsigned int)(v8 + 1);
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
          if ( (int)v8 >= (int)result )
          {
            if ( v7 )
              *(_QWORD *)(a1 + 232) = v7;
            return result;
          }
        }
      }
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getCardsFound(LogicDataTables *a1)
    {
      AreaEffectObject *CardCountData; // x0
      _QWORD *v3; // x19
      int DataIndex; // w0
    
      CardCountData = (AreaEffectObject *)LogicDataTables::getCardCountData(a1);
      v3 = (_QWORD *)*((_QWORD *)a1 + 13);
      DataIndex = LogicClientAvatar::getDataIndex((int)CardCountData, (__int64)v3, CardCountData);
      if ( DataIndex == -1 )
        return 0;
      else
        return *(unsigned int *)(*(_QWORD *)(*v3 + 8LL * DataIndex) + 8LL);
    }

    __int64 __fastcall LogicClientAvatar::setCardsFound(LogicDataTables *a1, int a2)
    {
      const AreaEffectObject *CardCountData; // x2
    
      CardCountData = (const AreaEffectObject *)LogicDataTables::getCardCountData(a1);
      return LogicClientAvatar::setCommodityCount(a1, (const char *)4, CardCountData, a2);
    }

    __int64 __fastcall LogicClientAvatar::getTotalDonations(__int64 a1)
    {
      const LogicData *v2; // x2
      AreaEffectObject *ResourceByName; // x20
      _QWORD *v4; // x19
      int v5; // w0
      int DataIndex; // w0
      String v8; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v8, "DonationsTotal");
      ResourceByName = (AreaEffectObject *)LogicDataTables::getResourceByName((LogicDataTables *)&v8, 0, v2);
      String::~String();
      v4 = *(_QWORD **)(a1 + 104);
      DataIndex = LogicClientAvatar::getDataIndex(v5, (__int64)v4, ResourceByName);
      if ( DataIndex == -1 )
        return 0;
      else
        return *(unsigned int *)(*(_QWORD *)(*v4 + 8LL * DataIndex) + 8LL);
    }

    __int64 __fastcall LogicClientAvatar::setTotalDonations(tween::Bounce *a1, int a2)
    {
      const LogicData *v4; // x2
      const AreaEffectObject *ResourceByName; // x21
      String v7; // [xsp+8h] [xbp-38h] BYREF
    
      String::String(&v7, "DonationsTotal");
      ResourceByName = (const AreaEffectObject *)LogicDataTables::getResourceByName((LogicDataTables *)&v7, 0, v4);
      String::~String();
      return LogicClientAvatar::setCommodityCount(a1, (const char *)4, ResourceByName, a2);
    }

    __int64 __fastcall LogicClientAvatar::getFavouriteSpell(__int64 a1)
    {
      const LogicData *v2; // x2
      AreaEffectObject *ResourceByName; // x20
      _QWORD *v4; // x19
      int v5; // w0
      LogicDataTables *DataIndex; // x0
      LogicDataTables *v7; // x19
      Debugger *isLoaded; // x0
      const char *v9; // x2
      int v10; // w1
      String v12; // [xsp+8h] [xbp-28h] BYREF
    
      String::String(&v12, "FavouriteSpell");
      ResourceByName = (AreaEffectObject *)LogicDataTables::getResourceByName((LogicDataTables *)&v12, 0, v2);
      String::~String();
      v4 = *(_QWORD **)(a1 + 104);
      DataIndex = (LogicDataTables *)LogicClientAvatar::getDataIndex(v5, (__int64)v4, ResourceByName);
      if ( (_DWORD)DataIndex == -1 )
        v7 = 0;
      else
        v7 = (LogicDataTables *)*(unsigned int *)(*(_QWORD *)(*v4 + 8LL * (int)DataIndex) + 8LL);
      isLoaded = (Debugger *)LogicDataTables::isLoaded(DataIndex);
      Debugger::doAssert(isLoaded, (bool)"", v9);
      return LogicDataTables::getSpellById(v7, v10);
    }

    __int64 __fastcall LogicClientAvatar::setFavouriteSpell(tween::Bounce *a1, AreaEffectObject *a2)
    {
      int GlobalID; // w20
      const LogicData *v4; // x2
      const AreaEffectObject *ResourceByName; // x21
      String v7; // [xsp+8h] [xbp-38h] BYREF
    
      if ( a2 )
        GlobalID = LogicData::getGlobalID(a2);
      else
        GlobalID = 0;
      String::String(&v7, "FavouriteSpell");
      ResourceByName = (const AreaEffectObject *)LogicDataTables::getResourceByName((LogicDataTables *)&v7, 0, v4);
      String::~String();
      return LogicClientAvatar::setCommodityCount(a1, (const char *)4, ResourceByName, GlobalID);
    }

    __int64 __fastcall LogicClientAvatar::getSpellUsageStat(tween::Bounce *this, const InitState *a2)
    {
      _QWORD *v2; // x19
      int DataIndex; // w0
    
      v2 = (_QWORD *)*((_QWORD *)this + 14);
      DataIndex = LogicClientAvatar::getDataIndex((int)this, (__int64)v2, a2);
      if ( DataIndex == -1 )
        return 0;
      else
        return *(unsigned int *)(*(_QWORD *)(*v2 + 8LL * DataIndex) + 8LL);
    }

    __int64 __fastcall LogicClientAvatar::setSpellUsageStat(tween::Bounce *a1, const AreaEffectObject *a2, int a3)
    {
      return LogicClientAvatar::setCommodityCount(a1, (const char *)5, a2, a3);
    }

    bool __fastcall LogicClientAvatar::isNpcAvatar(tween::Bounce *this)
    {
      return *((_DWORD *)this + 6) == -1 && *((_DWORD *)this + 7) == -1;
    }

    bool __fastcall LogicClientAvatar::isTrainingCompleted(LogicDataTables *a1)
    {
      __int64 v1; // x19
      HomeScreen *Globals; // x0
    
      v1 = *((_QWORD *)a1 + 29);
      Globals = (HomeScreen *)LogicDataTables::getGlobals(a1);
      return v1 != LogicGlobals::getStartingArena(Globals);
    }

    __int64 __fastcall LogicClientAvatar::getAvatarUserLevelTier(LogicDataTables *a1)
    {
      int v2; // w20
      LogicDataTables *Globals; // x0
      int v5; // w20
    
      v2 = *((_DWORD *)a1 + 34);
      Globals = (LogicDataTables *)LogicDataTables::getGlobals(a1);
      if ( v2 > *((_DWORD *)Globals + 116) )
        return 3;
      v5 = *((_DWORD *)a1 + 34);
      if ( v5 <= *(_DWORD *)(LogicDataTables::getGlobals(Globals) + 460LL) )
        return *((_DWORD *)a1 + 34) > 0;
      else
        return 2;
    }

    bool __fastcall LogicClientAvatar::isAchievementCompleted(__int64 a1, AreaEffectObject *a2)
    {
      _QWORD *v3; // x20
      int DataIndex; // w0
      int v5; // w8
    
      v3 = *(_QWORD **)(a1 + 88);
      DataIndex = LogicClientAvatar::getDataIndex(a1, (__int64)v3, a2);
      if ( DataIndex == -1 )
        v5 = 0;
      else
        v5 = *(_DWORD *)(*(_QWORD *)(*v3 + 8LL * DataIndex) + 8LL);
      return v5 >= *((_DWORD *)a2 + 26);
    }

    __int64 __fastcall LogicClientAvatar::setAchievementProgress(tween::Bounce *a1, const AreaEffectObject *a2, int a3)
    {
      __int64 result; // x0
    
      result = LogicClientAvatar::getAchievementProgress(a1, a2);
      if ( (_DWORD)result != a3 )
        return LogicClientAvatar::commodityCountChangeHelper(a1, (const char *)2, a2, (unsigned int)(a3 - result), 0);
      return result;
    }

    __int64 __fastcall LogicClientAvatar::getAchievementProgress(__int64 a1, AreaEffectObject *a2)
    {
      _QWORD *v2; // x19
      int DataIndex; // w0
    
      v2 = *(_QWORD **)(a1 + 88);
      DataIndex = LogicClientAvatar::getDataIndex(a1, (__int64)v2, a2);
      if ( DataIndex == -1 )
        return 0;
      else
        return *(unsigned int *)(*(_QWORD *)(*v2 + 8LL * DataIndex) + 8LL);
    }

    __int64 __fastcall LogicClientAvatar::setAchievementRewardClaimed(
            tween::Bounce *a1,
            const AreaEffectObject *a2,
            int a3)
    {
      __int64 result; // x0
    
      result = LogicClientAvatar::getIsAchievementRewardClaimed(a1, a2);
      if ( ((unsigned int)result ^ a3) == 1 )
        return LogicClientAvatar::commodityCountChangeHelper(a1, (const char *)3, a2, (unsigned int)(a3 - result), 0);
      return result;
    }

    bool __fastcall LogicClientAvatar::getIsAchievementRewardClaimed(__int64 a1, AreaEffectObject *a2)
    {
      _QWORD *v2; // x19
      int DataIndex; // w0
    
      v2 = *(_QWORD **)(a1 + 96);
      DataIndex = LogicClientAvatar::getDataIndex(a1, (__int64)v2, a2);
      return DataIndex != -1 && *(_DWORD *)(*(_QWORD *)(*v2 + 8LL * DataIndex) + 8LL) > 0;
    }

    int8x16_t __fastcall LogicClientAvatar::initializeMembers(__int64 a1)
    {
      int8x16_t result; // q0
    
      *(_BYTE *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 88) = 0;
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      String::operator=(a1 + 40, "");
      *(_BYTE *)(a1 + 224) = 0;
      *(_DWORD *)(a1 + 64) = 0;
      *(_BYTE *)(a1 + 68) = 0;
      *(_DWORD *)(a1 + 228) = -1;
      *(_DWORD *)(a1 + 120) = 1;
      *(_QWORD *)(a1 + 124) = 0;
      result = vextq_s8((int8x16_t)0, (int8x16_t)0, 8u);
      *(_QWORD *)(a1 + 132) = result.i64[0];
      *(_DWORD *)(a1 + 168) = 0;
      *(_QWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 160) = 0;
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      return result;
    }

    _QWORD *__fastcall LogicClientAvatar::~LogicClientAvatar(_QWORD *a1)
    {
      *a1 = off_100468C88;
      String::~String();
      String::~String();
      a1[3] = 0;
      a1[4] = 0;
      a1[2] = 0;
      return a1;
    }

    void __fastcall LogicClientAvatar::~LogicClientAvatar(_QWORD *a1)
    {
      *a1 = off_100468C88;
      String::~String();
      String::~String();
      operator delete(a1);
    }

}; // end class LogicClientAvatar
