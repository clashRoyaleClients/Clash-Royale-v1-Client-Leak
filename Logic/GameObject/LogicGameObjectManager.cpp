class LogicGameObjectManager
{
public:

    void __fastcall LogicGameObjectManager::LogicGameObjectManager(LogicGameObjectManager *this, #1028 *a2)
    {
      LogicGameObjectManagerListener *v4; // x20
      __int64 v5; // x0
      __int64 v6; // x0
    
      memset(this, 0, 0x50u);
      *((_QWORD *)this + 7) = a2;
      v4 = (LogicGameObjectManagerListener *)operator new(8);
      LogicGameObjectManagerListener::LogicGameObjectManagerListener(v4);
      v5 = *((_QWORD *)this + 5);
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        v6 = *((_QWORD *)this + 5);
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        *((_QWORD *)this + 5) = 0;
      }
      *((_QWORD *)this + 5) = v4;
    }

    __int64 __fastcall LogicGameObjectManager::setListener(__int64 a1, __int64 a2)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 40);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *(_QWORD *)(a1 + 40);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *(_QWORD *)(a1 + 40) = 0;
      }
      *(_QWORD *)(a1 + 40) = a2;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicGameObjectManager::LogicGameObjectManager(LogicGameObjectManager *this, #1028 *a2)
    {
      __ZN22LogicGameObjectManagerC2EP13LogicGameMode(this, a2);
    }

    void *__fastcall LogicGameObjectManager::destruct(LogicSpacePartition **this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      LogicSpacePartition *v4; // x0
      void *v5; // x0
      LogicSpacePartition *v6; // x0
      void *v7; // x0
    
      LogicGameObjectManager::destructGameObjects((LogicSpellListener *)this, 0, 1);
      v2 = (__int64)*(this + 5);
      if ( v2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
        v3 = (__int64)*(this + 5);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        *(this + 5) = 0;
      }
      v4 = *(this + 8);
      if ( v4 )
      {
        LogicSpacePartition::destruct(v4);
        v5 = *(this + 8);
        if ( v5 )
          operator delete(v5);
        *(this + 8) = 0;
      }
      v6 = *(this + 9);
      if ( v6 )
      {
        LogicSpacePartition::destruct(v6);
        v7 = *(this + 9);
        if ( v7 )
          operator delete(v7);
        *(this + 9) = 0;
      }
      return memset((char *)this + 12, 0, 0x44u);
    }

    _DWORD *__fastcall LogicGameObjectManager::destructGameObjects(_DWORD *this, int a2, _BOOL8 a3)
    {
      #1028 ***v5; // x21
      int v6; // w8
      __int64 v7; // x22
      GameMode *v8; // x23
      __int64 GlobalID; // x24
      __int64 GameListener; // x0
      int v11; // w8
    
      v5 = (#1028 ***)this;
      v6 = *(this + 3);
      v7 = (unsigned int)(v6 - 1);
      if ( v6 >= 1 )
      {
        while ( 1 )
        {
          this = (_DWORD *)LogicArrayList<LogicGameObject *>::remove(v5, v7);
          v8 = (GameMode *)this;
          if ( a2 )
            break;
          if ( this )
            goto LABEL_5;
    LABEL_6:
          v11 = v7 + 1;
          v7 = (unsigned int)(v7 - 1);
          if ( v11 <= 1 )
            return this;
        }
        (*(void (__fastcall **)(_DWORD *, _BOOL8))(*(_QWORD *)this + 104LL))(this, a3);
        GlobalID = LogicGameObject::getGlobalID(v8);
        LogicGameObjectManager::removeGameObjectReferences((LogicSpellListener *)v5, v8, GlobalID, a3, 0);
        GameListener = LogicBattle::getGameListener(v5[6]);
        (*(void (__fastcall **)(__int64, GameMode *, __int64))(*(_QWORD *)GameListener + 64LL))(GameListener, v8, GlobalID);
    LABEL_5:
        (*(void (__fastcall **)(GameMode *))(*(_QWORD *)v8 + 24LL))(v8);
        this = (_DWORD *)(*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v8 + 8LL))(v8);
        goto LABEL_6;
      }
      return this;
    }

    void __fastcall LogicGameObjectManager::getGameObjects(LogicSpellListener *this)
    {
      ;
    }

    __int64 __fastcall LogicGameObjectManager::tick(LogicSpacePartition **this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x21
      __int64 v5; // x20
      int v6; // w20
      __int64 v7; // x22
      __int64 Component; // x0
      __int64 v9; // x22
      __int64 v10; // x8
      __int64 v11; // x20
      bool v12; // cc
      __int64 v13; // x20
      _QWORD *OriginSpell; // x0
      LogicSpacePartition *v15; // x0
    
      LogicGameObjectManager::doDestructing((LogicSpellListener *)this, 0);
      v2 = (__int64)*(this + 8);
      if ( v2 )
        LogicSpacePartition::update(v2, this, 1);
      v3 = (__int64)*(this + 9);
      if ( v3 )
        LogicSpacePartition::update(v3, this, 0);
      LODWORD(v4) = *((_DWORD *)this + 3);
      if ( (int)v4 < 1 )
      {
        v6 = 0;
      }
      else
      {
        v5 = 0;
        do
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)*this + v5) + 192LL))(*((_QWORD *)*this + v5));
          ++v5;
        }
        while ( (_DWORD)v4 != (_DWORD)v5 );
        v6 = 0;
        LODWORD(v4) = *((_DWORD *)this + 3);
      }
      do
      {
        if ( (int)v4 > 0 )
        {
          v7 = 0;
          do
          {
            Component = LogicGameObject::getComponent(*((GameMode **)*this + v7), v6);
            if ( Component )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)Component + 24LL))(Component);
            ++v7;
            v4 = *((int *)this + 3);
          }
          while ( v7 < v4 );
        }
        ++v6;
      }
      while ( v6 != 4 );
      if ( (int)v4 > 0 )
      {
        v9 = 0;
        v10 = 0;
        do
        {
          v11 = *((_QWORD *)*this + v9);
          if ( v11 != v10 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 32LL))(*((_QWORD *)*this + v9));
            LODWORD(v4) = *((_DWORD *)this + 3);
            v10 = v11;
          }
          ++v9;
        }
        while ( v9 < (int)v4 );
      }
      if ( LogicServerEventCollector::ENABLED )
        v12 = (int)v4 < 1;
      else
        v12 = 1;
      if ( !v12 )
      {
        v13 = 0;
        do
        {
          OriginSpell = (_QWORD *)LogicGameObject::getOriginSpell(*((GameMode **)*this + v13));
          if ( OriginSpell )
            LogicSpell::increaseServerEvent(OriginSpell);
          ++v13;
        }
        while ( (_DWORD)v4 != (_DWORD)v13 );
      }
      v15 = *(this + 8);
      if ( v15 )
        LogicSpacePartition::clear(v15);
      return LogicGameObjectManager::doDestructing((LogicSpellListener *)this, 0);
    }

    LogicSpellListener *__fastcall LogicGameObjectManager::doDestructing(LogicSpellListener *this, bool a2)
    {
      LogicSpellListener *v3; // x20
      __int64 v4; // x21
      __int64 v5; // x8
      __int64 v6; // x22
      __int64 v7; // x0
      GameMode *v8; // x22
      int GlobalID; // w0
    
      v3 = this;
    LABEL_2:
      v4 = 0;
      v5 = 1;
      do
      {
        while ( 1 )
        {
          v6 = v5;
          if ( (int)v4 >= *((_DWORD *)v3 + 3) )
            break;
          while ( 1 )
          {
            v7 = *(_QWORD *)(*(_QWORD *)v3 + 8LL * (int)v4);
            this = (LogicSpellListener *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
            if ( !(_DWORD)this )
              break;
            v8 = (GameMode *)LogicArrayList<LogicGameObject *>::remove(v3, v4);
            GlobalID = LogicGameObject::getGlobalID(v8);
            this = (LogicSpellListener *)LogicGameObjectManager::removeGameObjectReferences(v3, v8, GlobalID, a2, 0);
            if ( v8 )
            {
              (*(void (__fastcall **)(GameMode *))(*(_QWORD *)v8 + 24LL))(v8);
              this = (LogicSpellListener *)(*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v8 + 8LL))(v8);
            }
            v6 = 0;
            if ( (int)v4 >= *((_DWORD *)v3 + 3) )
              goto LABEL_2;
          }
          v4 = (unsigned int)(v4 + 1);
          v5 = v6;
        }
        v4 = 0;
        v5 = 1;
      }
      while ( (v6 & 1) == 0 );
      return this;
    }

    __int64 __fastcall LogicGameObjectManager::removeGameObjectReferences(
            LogicSpellListener *this,
            const GameMode *a2,
            __int64 a3,
            _BOOL8 a4,
            GameMode *a5)
    {
      int v10; // w24
      __int64 v11; // x25
    
      v10 = *((_DWORD *)this + 3);
      if ( v10 >= 1 )
      {
        v11 = 0;
        do
        {
          (*(void (__fastcall **)(_QWORD, const GameMode *, __int64, _BOOL8, GameMode *))(**(_QWORD **)(*(_QWORD *)this
                                                                                                      + 8 * v11)
                                                                                        + 96LL))(
            *(_QWORD *)(*(_QWORD *)this + 8 * v11),
            a2,
            a3,
            a4,
            a5);
          ++v11;
        }
        while ( v10 != (_DWORD)v11 );
      }
      LogicBattle::removeGameObjectReferences(*((UnbindFacebookAccountMessage **)this + 6), a2, a3, a4, a5);
      return (*(__int64 (__fastcall **)(_QWORD, const GameMode *, __int64, _BOOL8, GameMode *))(**((_QWORD **)this + 5)
                                                                                              + 40LL))(
               *((_QWORD *)this + 5),
               a2,
               a3,
               a4,
               a5);
    }

    __int64 __fastcall LogicGameObjectManager::addLogicGameObject(LogicSpellListener *this, GameMode *a2, int a3)
    {
      UnbindFacebookAccountMessage *v6; // x22
      __int64 Data; // x0
      void (*v8)(void); // x8
      AreaEffectObject *v9; // x0
      AreaEffectObject *v10; // x0
      const char *v11; // x1
      internal_t *pHeap; // x8
      const String *v13; // x1
      int v14; // w23
      int v15; // w22
      int GlobalID; // w0
      __int64 GameObjectStartIndex; // x22
      int v18; // w23
      __int64 v19; // x0
      const char *v20; // x1
      const String *v21; // x1
      LogicSpellListener *LogicGameObjectManager; // x0
      __int64 result; // x0
      String v24; // [xsp+10h] [xbp-80h] BYREF
      String v25; // [xsp+28h] [xbp-68h] BYREF
      String v26; // [xsp+40h] [xbp-50h] BYREF
      GameMode *v27; // [xsp+58h] [xbp-38h] BYREF
    
      v27 = a2;
      if ( !a2 )
        Debugger::error((__siginfo *)"LogicGameObjectManager::addGameObject(null)", 0);
      v6 = (UnbindFacebookAccountMessage *)*((_QWORD *)this + 6);
      Data = LogicGameObject::getData(a2);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)Data + 56LL))(Data) )
      {
        v8 = *(void (**)(void))(*(_QWORD *)LogicBattle::getGameListener(*((#1028 ***)this + 6)) + 320LL);
      }
      else
      {
        v9 = (AreaEffectObject *)LogicGameObject::getData(a2);
        if ( (unsigned int)LogicData::getDataType(v9) != 10 )
          goto LABEL_8;
        v8 = *(void (**)(void))(*(_QWORD *)LogicBattle::getGameListener(*((#1028 ***)this + 6)) + 328LL);
      }
      v8();
    LABEL_8:
      if ( (LogicBattle::isRunningLogic(v6) & 1) == 0 )
      {
        v10 = (AreaEffectObject *)LogicGameObject::getData(a2);
        LogicData::getDebuggerName((__int64 *)&v25.m_length, v10);
        if ( v25.m_bytes + 1 > 8 )
          pHeap = (internal_t *)v25.internal.pHeap;
        else
          pHeap = &v25.internal;
        String::format((String *)"Calling LogicGameObjectManager::addLogicGameObject outside of logic. Type %s", v11, pHeap);
        Debugger::error((Debugger *)&v26, v13);
      }
      if ( !(unsigned int)LogicGameObject::getGlobalID(a2) )
        *((_DWORD *)a2 + 4) = LogicGameObjectManager::generateGameObjectGlobalID(this, a2);
      v14 = *((_DWORD *)this + 3);
      if ( v14
        && (v15 = LogicGameObject::getGlobalID(a2),
            v15 <= (int)LogicGameObject::getGlobalID(*(GameMode **)(*(_QWORD *)this + 8LL * (v14 - 1)))) )
      {
        GlobalID = LogicGameObject::getGlobalID(a2);
        GameObjectStartIndex = LogicGameObjectManager::getGameObjectStartIndex(this, GlobalID);
        v18 = LogicGameObject::getGlobalID(*(GameMode **)(*(_QWORD *)this + 8LL * (int)GameObjectStartIndex));
        if ( v18 == (unsigned int)LogicGameObject::getGlobalID(a2) )
        {
          v19 = LogicGameObject::getGlobalID(a2);
          String::format((String *)"LogicGameObjectManager::addGameObject() Object with ID %d already added ", v20, v19);
          Debugger::error((Debugger *)&v24, v21);
        }
        LogicArrayList<LogicGameObject *>::add(this, GameObjectStartIndex, &v27);
      }
      else
      {
        LogicArrayList<LogicGameObject *>::add(this, &v27);
      }
      LogicGameObjectManager = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager(a2);
      if ( !LogicGameObjectManager )
        LogicGameObjectManager = (LogicSpellListener *)(*(__int64 (__fastcall **)(GameMode *, LogicSpellListener *))(*(_QWORD *)a2 + 16LL))(
                                                         a2,
                                                         this);
      if ( a3 )
        LogicGameObjectManager::updateComponentsOfNewObject(LogicGameObjectManager, a2);
      result = *((_QWORD *)this + 5);
      if ( result )
        return (*(__int64 (__fastcall **)(__int64, GameMode *))(*(_QWORD *)result + 24LL))(result, a2);
      return result;
    }

    __int64 __fastcall LogicGameObjectManager::getLogicBattle(LogicSpellListener *this)
    {
      return *((_QWORD *)this + 6);
    }

    __int64 __fastcall LogicGameObjectManager::generateGameObjectGlobalID(LogicSpellListener *this, GameMode *a2)
    {
      unsigned int v3; // w0
      const char *v4; // x1
      int v5; // w2
      char *v6; // x8
      int v7; // w1
    
      v3 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)a2 + 88LL))(a2);
      if ( v3 >= 6 )
        Debugger::error((__siginfo *)"LogicGameObjectManager::generateGameObjectGlobalID(). Index is out of bounds.", v4);
      v6 = (char *)this + 4 * (int)v3;
      v7 = *((_DWORD *)v6 + 4);
      *((_DWORD *)v6 + 4) = v7 + 1;
      return GlobalID::createGlobalID((SectorCommandMessage *)(v3 + 1), v7, v5);
    }

    __int64 __fastcall LogicGameObjectManager::getGameObjectStartIndex(LogicSpellListener *this, int a2)
    {
      int v4; // w8
      __int64 v5; // x21
      int v6; // w22
      int v7; // w23
    
      v4 = *((_DWORD *)this + 3);
      if ( v4 < 2 )
        return 0;
      LODWORD(v5) = 0;
      v6 = v4 - 1;
      do
      {
        v7 = ((int)v5 + v6) >> 1;
        if ( (int)LogicGameObject::getGlobalID(*(GameMode **)(*(_QWORD *)this + 8LL * v7)) < a2 )
        {
          v5 = (unsigned int)(v7 + 1);
        }
        else
        {
          v6 = ((int)v5 + v6) >> 1;
          v5 = (unsigned int)v5;
        }
      }
      while ( v6 > (int)v5 );
      return v5;
    }

    __int64 __fastcall LogicGameObjectManager::updateComponentsOfNewObject(LogicSpellListener *this, GameMode *a2)
    {
      int i; // w20
      __int64 result; // x0
    
      for ( i = 0; i != 4; ++i )
      {
        result = LogicGameObject::getComponent(a2, i);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
      }
      return result;
    }

    __int64 __fastcall LogicGameObjectManager::getGameObjectIndex(LogicSpellListener *this, int a2)
    {
      int v4; // w8
      int v5; // w21
      int v6; // w22
      int v7; // w23
    
      if ( !a2 )
        return 0xFFFFFFFFLL;
      v4 = *((_DWORD *)this + 3);
      if ( !v4 )
        return 0xFFFFFFFFLL;
      v5 = 0;
      v6 = v4 - 1;
      if ( v4 > 1 )
      {
        do
        {
          v7 = (v6 + v5) >> 1;
          if ( (int)LogicGameObject::getGlobalID(*(GameMode **)(*(_QWORD *)this + 8LL * v7)) >= a2 )
            v6 = (v6 + v5) >> 1;
          else
            v5 = v7 + 1;
        }
        while ( v6 > v5 );
      }
      if ( (unsigned int)LogicGameObject::getGlobalID(*(GameMode **)(*(_QWORD *)this + 8LL * v5)) == a2 )
        return (unsigned int)v5;
      else
        return 0xFFFFFFFFLL;
    }

    __int64 __fastcall LogicGameObjectManager::getGameObjectByID(LogicSpellListener *this, int a2, int a3)
    {
      int GameObjectIndex; // w0
      __int64 v6; // x20
    
      GameObjectIndex = LogicGameObjectManager::getGameObjectIndex(this, a2);
      if ( GameObjectIndex == -1 )
        return 0;
      v6 = *(_QWORD *)(*(_QWORD *)this + 8LL * GameObjectIndex);
      if ( !v6 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 88LL))(v6) != a3 )
        return 0;
      return v6;
    }

    __int64 __fastcall LogicGameObjectManager::getSearchStartIndex(LogicSpellListener *this, int a2, int a3)
    {
      int GlobalID; // w1
    
      GlobalID = GlobalID::createGlobalID((SectorCommandMessage *)(unsigned int)(a2 + 1), 0, a3);
      return LogicGameObjectManager::getGameObjectStartIndex(this, GlobalID);
    }

    __int64 __fastcall LogicGameObjectManager::encode(LogicSpellListener *this, #1226 *a2, __int64 a3, int a4)
    {
      int v6; // w21
      __int64 result; // x0
      __int64 i; // x25
      GameMode *v9; // x23
      __int64 v10; // x0
      const char *v11; // x1
      const String *v12; // x1
      AreaEffectObject *Data; // x0
      __int64 v14; // x22
      ChecksumEncoder *GlobalID; // x0
      int v16; // w2
      __int64 v17; // x22
      int v18; // w23
      int v19; // w22
      int v20; // w23
      __int64 v21; // x24
      String v22; // [xsp+8h] [xbp-58h] BYREF
    
      ByteStreamHelper::writeConstantSizeIntArray(a2, (LogicSpellListener *)((char *)this + 16), (const int *)6, a4);
      v6 = *((_DWORD *)this + 3);
      result = (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, (unsigned int)v6);
      if ( v6 < 1 )
      {
        v18 = v6 - 1;
      }
      else
      {
        for ( i = 0; i < v6; ++i )
        {
          v9 = *(GameMode **)(*(_QWORD *)this + 8 * i);
          if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)v9 + 40LL))(v9) )
          {
            v10 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v9 + 88LL))(v9);
            String::format(
              (String *)"LogicGameObjectManager::encode called when there are objects to be destroyed, type %d",
              v11,
              v10);
            Debugger::error((Debugger *)&v22, v12);
          }
          Data = (AreaEffectObject *)LogicGameObject::getData(v9);
          ByteStreamHelper::writeDataReference((int)a2, Data);
        }
        v14 = 0;
        do
        {
          GlobalID = (ChecksumEncoder *)LogicGameObject::getGlobalID(*(GameMode **)(*(_QWORD *)this + 8 * v14));
          ByteStreamHelper::writeGlobalID(a2, GlobalID, v16);
          ++v14;
        }
        while ( v6 != (_DWORD)v14 );
        v17 = 0;
        v18 = v6 - 1;
        do
        {
          result = (*(__int64 (__fastcall **)(_QWORD, #1226 *))(**(_QWORD **)(*(_QWORD *)this + 8 * v17) + 64LL))(
                     *(_QWORD *)(*(_QWORD *)this + 8 * v17),
                     a2);
          ++v17;
        }
        while ( v6 != (_DWORD)v17 );
      }
      v19 = 0;
      v20 = v18 + 1;
      do
      {
        if ( v6 >= 1 )
        {
          v21 = 0;
          do
            result = LogicGameObject::encodeComponent(*(_QWORD *)(*(_QWORD *)this + 8 * v21++), (__int64)a2, v19);
          while ( v20 != (_DWORD)v21 );
        }
        ++v19;
      }
      while ( v19 != 4 );
      return result;
    }

    __n128 __fastcall LogicGameObjectManager::decode(LogicSpellListener *this, #1225 *a2, __int64 a3, int a4)
    {
      int v7; // w0
      __int64 v8; // x27
      __int64 v9; // x22
      #1225 *v10; // x1
      __int64 v11; // x22
      __int64 i; // x23
      __int64 j; // x28
      #1401 *v14; // x24
      SectorCommandMessage *GlobalID; // x0
      int v16; // w23
      int v17; // w1
      int ClassID; // w26
      __int64 GameObjectIndex; // x0
      __int64 v20; // x25
      GameMode *v21; // x0
      __int64 Data; // x0
      __int64 GameObjectByClassID; // x0
      long double v24; // q0
      int v25; // w8
      __int64 v26; // x22
      GameMode *v27; // x23
      __int64 v28; // x0
      int v29; // w8
      __int64 k; // x22
      _BYTE *v31; // x21
      __int64 m; // x21
      int n; // w21
      __int64 ii; // x22
      __int64 jj; // x21
      _BYTE *v36; // x20
      __n128 result; // q0
      __int64 v38; // [xsp+0h] [xbp-70h] BYREF
      __int64 v39; // [xsp+8h] [xbp-68h] BYREF
      void *v40; // [xsp+10h] [xbp-60h] BYREF
      int v41; // [xsp+18h] [xbp-58h]
      int v42; // [xsp+1Ch] [xbp-54h]
    
      ByteStreamHelper::readConstantSizeIntArray(a2, (LogicSpellListener *)((char *)this + 16), (int *)6, a4);
      v7 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      v40 = 0;
      v42 = 0;
      v41 = v7;
      v8 = v7;
      if ( is_mul_ok(v7, 8u) )
        v9 = 8LL * v7;
      else
        v9 = -1;
      v40 = (void *)operator new[](v9);
      v11 = operator new[](v9);
      if ( (int)v8 > 0 )
      {
        for ( i = 0; i < v8; ++i )
          *(_QWORD *)(v11 + 8 * i) = ByteStreamHelper::readDataReference(a2, v10);
        for ( j = 0; j < v8; ++j )
        {
          v14 = *(#1401 **)(v11 + 8 * j);
          GlobalID = (SectorCommandMessage *)ByteStreamHelper::readGlobalID(a2, v10);
          v16 = (int)GlobalID;
          ClassID = GlobalID::getClassID(GlobalID, v17);
          GameObjectIndex = LogicGameObjectManager::getGameObjectIndex(this, v16);
          v20 = GameObjectIndex;
          if ( (_DWORD)GameObjectIndex == -1
            || (v21 = *(GameMode **)(*(_QWORD *)this + 8LL * (int)GameObjectIndex),
                v39 = *(_QWORD *)(*(_QWORD *)this + 8LL * (int)v20),
                Data = LogicGameObject::getData(v21),
                !(unsigned int)LogicData::equals(Data, v14)) )
          {
            GameObjectByClassID = LogicGameObjectFactory::createGameObjectByClassID(
                                    v14,
                                    (const AreaEffectObject *)(unsigned int)(ClassID - 1));
            v38 = GameObjectByClassID;
            *(_DWORD *)(GameObjectByClassID + 16) = v16;
            *(_BYTE *)(GameObjectByClassID + 20) = 1;
            LogicArrayList<LogicGameObject *>::add(&v40, &v38);
          }
          else
          {
            LogicArrayList<LogicGameObject *>::add(&v40, &v39);
            LogicArrayList<LogicGameObject *>::remove(this, v20);
          }
        }
      }
      *(__n128 *)&v24 = operator delete[](v11);
      v25 = *((_DWORD *)this + 3);
      v26 = (unsigned int)(v25 - 1);
      if ( v25 >= 1 )
      {
        do
        {
          v27 = (GameMode *)LogicArrayList<LogicGameObject *>::remove(this, v26);
          v28 = LogicGameObject::getGlobalID(v27);
          (*(void (__fastcall **)(_QWORD, GameMode *, __int64, __int64, _QWORD))(**((_QWORD **)this + 5) + 40LL))(
            *((_QWORD *)this + 5),
            v27,
            v28,
            a3,
            0);
          if ( v27 )
          {
            (*(void (__fastcall **)(GameMode *))(*(_QWORD *)v27 + 24LL))(v27);
            (*(void (__fastcall **)(GameMode *))(*(_QWORD *)v27 + 8LL))(v27);
          }
          v29 = v26 + 1;
          v26 = (unsigned int)(v26 - 1);
        }
        while ( v29 > 1 );
      }
      LogicArrayList<LogicGameObject *>::addAll(this, &v40, v24);
      v42 = 0;
      if ( (int)v8 >= 1 )
      {
        for ( k = 0; k < v8; ++k )
        {
          v31 = *(_BYTE **)(*(_QWORD *)this + 8 * k);
          if ( v31[20] )
          {
            (*(void (__fastcall **)(_QWORD, LogicSpellListener *))(*(_QWORD *)v31 + 16LL))(
              *(_QWORD *)(*(_QWORD *)this + 8 * k),
              this);
            (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5), v31);
          }
        }
        for ( m = 0; m < v8; ++m )
          (*(void (__fastcall **)(_QWORD, #1225 *))(**(_QWORD **)(*(_QWORD *)this + 8 * m) + 72LL))(
            *(_QWORD *)(*(_QWORD *)this + 8 * m),
            a2);
      }
      for ( n = 0; n < 4; ++n )
      {
        if ( (int)v8 > 0 )
        {
          for ( ii = 0; ii < v8; ++ii )
            LogicGameObject::decodeComponent(*(_QWORD *)(*(_QWORD *)this + 8 * ii), (__int64)a2, n);
        }
      }
      if ( (int)v8 > 0 )
      {
        for ( jj = 0; jj < v8; ++jj )
        {
          v36 = *(_BYTE **)(*(_QWORD *)this + 8 * jj);
          if ( v36[20] )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v36 + 192LL))(*(_QWORD *)(*(_QWORD *)this + 8 * jj));
            v36[20] = 0;
            (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), v36);
          }
        }
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
      if ( v40 )
        return operator delete[](v40);
      return result;
    }

    __int64 __fastcall LogicGameObjectManager::getGameObjectCountByData(
            LogicSpellListener *this,
            const AreaEffectObject *a2)
    {
      int v4; // w22
      __int64 v5; // x23
      __int64 v6; // x21
      __int64 Data; // x0
    
      if ( !a2 )
        return 0;
      v4 = *((_DWORD *)this + 3);
      if ( v4 < 1 )
        return 0;
      v5 = 0;
      LODWORD(v6) = 0;
      do
      {
        Data = LogicGameObject::getData(*(GameMode **)(*(_QWORD *)this + 8 * v5));
        v6 = (unsigned int)LogicData::equals(a2, Data) + (unsigned int)v6;
        ++v5;
      }
      while ( v4 != (_DWORD)v5 );
      return v6;
    }

    LogicSpacePartition *__fastcall LogicGameObjectManager::setLogicBattle(
            LogicSpellListener *this,
            UnbindFacebookAccountMessage *a2)
    {
      LogicSpacePartition *v4; // x21
      int TilemapWidth; // w22
      int TilemapHeight; // w0
      LogicSpacePartition *v7; // x21
      int v8; // w22
      int v9; // w0
      LogicSpacePartition *result; // x0
    
      *((_QWORD *)this + 6) = a2;
      v4 = (LogicSpacePartition *)operator new(24);
      TilemapWidth = LogicBattle::getTilemapWidth(a2);
      TilemapHeight = LogicBattle::getTilemapHeight(a2);
      LogicSpacePartition::LogicSpacePartition(v4, TilemapWidth, TilemapHeight);
      *((_QWORD *)this + 8) = v4;
      v7 = (LogicSpacePartition *)operator new(24);
      v8 = LogicBattle::getTilemapWidth(a2);
      v9 = LogicBattle::getTilemapHeight(a2);
      result = LogicSpacePartition::LogicSpacePartition(v7, v8, v9);
      *((_QWORD *)this + 9) = v7;
      return result;
    }

    __int64 __fastcall LogicGameObjectManager::writeGameObjectReference(
            LogicSpellListener *this,
            #1226 *a2,
            const GameMode *a3)
    {
      ChecksumEncoder *GlobalID; // x1
    
      if ( a3 )
        GlobalID = (ChecksumEncoder *)LogicGameObject::getGlobalID(a3);
      else
        GlobalID = 0;
      return ByteStreamHelper::writeGlobalID(a2, GlobalID, (int)a3);
    }

    __int64 __fastcall LogicGameObjectManager::readGameObjectReference(LogicSpellListener *this, #1225 *a2)
    {
      int GlobalID; // w0
      int GameObjectIndex; // w0
    
      GlobalID = ByteStreamHelper::readGlobalID(a2, a2);
      GameObjectIndex = LogicGameObjectManager::getGameObjectIndex(this, GlobalID);
      if ( GameObjectIndex == -1 )
        return 0;
      else
        return *(_QWORD *)(*(_QWORD *)this + 8LL * GameObjectIndex);
    }

    __int64 __fastcall LogicGameObjectManager::readGameObjectReference(LogicSpellListener *this, #1225 *a2, int a3)
    {
      int GlobalID; // w1
    
      GlobalID = ByteStreamHelper::readGlobalID(a2, a2);
      return LogicGameObjectManager::getGameObjectByID(this, GlobalID, a3);
    }

    GameMode *__fastcall LogicGameObjectManager::getGameObjectByDataIndex(
            LogicSpellListener *this,
            const AreaEffectObject *a2,
            int a3)
    {
      __int64 v6; // x23
      __int64 v7; // x24
      int v8; // w25
      GameMode *v9; // x22
      __int64 Data; // x0
    
      v6 = *((int *)this + 3);
      if ( (int)v6 >= 1 )
      {
        v7 = 0;
        v8 = 0;
        do
        {
          v9 = *(GameMode **)(*(_QWORD *)this + 8 * v7);
          Data = LogicGameObject::getData(v9);
          if ( (unsigned int)LogicData::equals(Data, a2) )
          {
            if ( v8 == a3 )
              return v9;
            ++v8;
          }
          ++v7;
        }
        while ( v7 < v6 );
      }
      return 0;
    }

    __int64 __fastcall LogicGameObjectManager::giveDamageToObjectsInArea(
            #1028 **this,
            #1237 *a2,
            __int64 a3,
            __int64 a4,
            int a5,
            const LogicData *a6,
            GameMode *a7,
            int a8,
            int a9,
            int a10,
            int a11,
            char a12,
            bool a13,
            bool a14,
            bool a15)
    {
      #1237 *v18; // x21
      __int64 v20; // x28
      __int64 GameListener; // x0
      __int64 v22; // x2
      int v23; // w24
      __int64 v24; // x23
      #1060 *v25; // x27
      #1025 *CharacterData; // x0
      #1025 *v28; // x0
      __int64 v30; // x0
      char IgnorePushback; // w19
      __int64 v32; // x21
      __int64 v33; // x0
      HomeScreen *Globals; // x0
      int ReducedCrownTowerDamage; // w1
      LogicArenaData *v36; // x0
      LogicMovementComponent *MovementComponentEvenIfDisabled; // x0
      AskForTVContentMessage *DamageEffect; // [xsp+10h] [xbp-80h]
      unsigned int v40; // [xsp+18h] [xbp-78h]
      unsigned int v44; // [xsp+30h] [xbp-60h]
      int v45; // [xsp+34h] [xbp-5Ch]
      _BYTE v46[8]; // [xsp+38h] [xbp-58h] BYREF
    
      v44 = a3;
      v18 = a2;
      v40 = (unsigned int)a2;
      DamageEffect = (AskForTVContentMessage *)LogicDamageTypeData::getDamageEffect(a6);
      v20 = *((int *)this + 3);
      LogicVector2::LogicVector2((LogicVector2 *)v46, (int)v18, a3);
      GameListener = LogicGameMode::getGameListener(*(this + 7));
      v22 = a3;
      v23 = a4;
      (*(void (__fastcall **)(__int64, #1237 *, __int64, __int64, bool, bool))(*(_QWORD *)GameListener + 384LL))(
        GameListener,
        v18,
        v22,
        a4,
        a13,
        a14);
      if ( (int)v20 >= 1 )
      {
        v24 = 0;
        v45 = 0;
        do
        {
          v25 = (#1060 *)*((_QWORD *)*this + v24);
          if ( LogicGameObject::isValidTarget(a7, v25, a12, 0) )
          {
            if ( (*(unsigned int (__fastcall **)(#1060 *))(*(_QWORD *)v25 + 88LL))(v25) == 5 )
            {
              CharacterData = (#1025 *)LogicCharacter::getCharacterData(v25);
              if ( (int)LogicCharacterData::getFlyingHeight(CharacterData) >= 1 && !a13 )
                goto LABEL_27;
              v28 = (#1025 *)LogicCharacter::getCharacterData(v25);
              if ( !(unsigned int)LogicCharacterData::getFlyingHeight(v28) && !a14 )
                goto LABEL_27;
              v30 = LogicCharacter::getCharacterData(v25);
              IgnorePushback = LogicCharacterData::getIgnorePushback(v30);
            }
            else
            {
              IgnorePushback = 0;
            }
            if ( LogicGameObject::intersects(v25, v18, (#1237 *)v44, v23) )
            {
              v32 = (*(__int64 (__fastcall **)(#1060 *))(*(_QWORD *)v25 + 136LL))(v25);
              if ( a15
                && ((v33 = (*(__int64 (__fastcall **)(#1060 *))(*(_QWORD *)v25 + 200LL))(v25), (v33 & 1) != 0)
                 || (v33 = (*(__int64 (__fastcall **)(#1060 *))(*(_QWORD *)v25 + 208LL))(v25), (_DWORD)v33)) )
              {
                Globals = (HomeScreen *)LogicDataTables::getGlobals((LogicDataTables *)v33);
                ReducedCrownTowerDamage = LogicGlobals::getReducedCrownTowerDamage(Globals, a5);
                v36 = (LogicArenaData *)v32;
              }
              else
              {
                v36 = (LogicArenaData *)v32;
                ReducedCrownTowerDamage = a5;
              }
              LogicHitpointComponent::takeDamage(v36, ReducedCrownTowerDamage, a6, a7, DamageEffect, 0);
              v18 = (#1237 *)v40;
              ++v45;
              if ( !((a8 < 1) | IgnorePushback & 1)
                && (*(unsigned int (__fastcall **)(#1060 *))(*(_QWORD *)v25 + 152LL))(v25)
                && LogicGameObject::getMovementComponentEvenIfDisabled(v25) )
              {
                LogicGameObject::enableComponent((__int64)v25, 1, 1);
                MovementComponentEvenIfDisabled = (LogicMovementComponent *)LogicGameObject::getMovementComponentEvenIfDisabled(v25);
                LogicMovementComponent::doPushback(MovementComponentEvenIfDisabled, a9, a10, a8);
              }
            }
            if ( a11 >= 1 && v45 >= a11 )
              return LogicVector2::destruct((LogicVector2 *)v46);
          }
    LABEL_27:
          ++v24;
        }
        while ( v24 < v20 );
      }
      return LogicVector2::destruct((LogicVector2 *)v46);
    }

    __int64 __fastcall LogicGameObjectManager::isValidBuffTarget(
            LogicSpellListener *this,
            const GameMode *a2,
            const GameMode *a3,
            char a4,
            char a5)
    {
      _BOOL4 isOwnerTop; // w22
    
      if ( !LogicGameObject::getCharacterBuffComponent(a2) )
        return 0;
      isOwnerTop = LogicGameObject::isOwnerTop(a3);
      if ( isOwnerTop != LogicGameObject::isOwnerTop(a2) )
      {
        if ( (a4 & 1) == 0 )
          return (*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 152LL))(a2);
        return 0;
      }
      if ( (a5 & 1) != 0 )
        return 0;
      return (*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 152LL))(a2);
    }

    __int64 __fastcall LogicGameObjectManager::giveBuffToObjectInArea(
            LogicSpellListener *this,
            GameMode *a2,
            const GameMode *a3,
            const BattleResultMessage *a4,
            int a5,
            char a6,
            char a7,
            const TextField *a8)
    {
      __int64 LevelIndex; // x23
      FriendListMessage *CharacterBuffComponent; // x0
    
      if ( !(unsigned int)LogicGameObjectManager::isValidBuffTarget(this, a2, a3, a6, a7) )
        return 0;
      if ( (*(unsigned int (__fastcall **)(const GameMode *))(*(_QWORD *)a3 + 88LL))(a3) == 5 )
      {
        LevelIndex = LogicCharacter::getLevelIndex(a3);
      }
      else if ( (*(unsigned int (__fastcall **)(const GameMode *))(*(_QWORD *)a3 + 88LL))(a3) == 3 )
      {
        LevelIndex = *((unsigned int *)a3 + 52);
      }
      else
      {
        LevelIndex = 0;
      }
      CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(a2);
      LogicCharacterBuffComponent::addCharacterBuff(CharacterBuffComponent, 0, a4, a5, LevelIndex, 0xFFFFFFFF, a8);
      return 1;
    }

    __int64 __fastcall LogicGameObjectManager::giveBuffToObjectsInArea(
            __int64 result,
            #1237 *a2,
            #1237 *a3,
            int a4,
            const GameMode *a5,
            const BattleResultMessage *a6,
            int a7,
            int a8,
            char a9,
            char a10,
            __int64 a11,
            const TextField *a12)
    {
      int *v18; // x25
      int v19; // w8
      __int64 v20; // x27
      __int64 v21; // x28
      GameMode *GameObjectByID; // x0
      GameMode *v23; // x21
      int v24; // w26
      _BOOL8 v25; // x0
      __int64 v26; // x20
      bool v27; // cc
      __int64 v28; // x21
      GameMode *v29; // x19
      BattleResultMessage *v30; // [xsp+8h] [xbp-78h]
      int v31; // [xsp+10h] [xbp-70h]
      int v32; // [xsp+14h] [xbp-6Ch]
    
      v18 = (int *)result;
      if ( a11 && (result = LogicDataTables::getGlobals((LogicDataTables *)result), v19 = *(_DWORD *)(a11 + 12), v19 >= 1) )
      {
        v32 = *(_DWORD *)(result + 380) + a4;
        do
        {
          v30 = a6;
          v31 = a7;
          v20 = v19;
          v21 = 4LL * (v19 - 1);
          while ( 1 )
          {
            GameObjectByID = (GameMode *)LogicGameObjectManager::getGameObjectByID(
                                           (LogicSpellListener *)v18,
                                           *(_DWORD *)(*(_QWORD *)a11 + v21),
                                           5);
            v23 = GameObjectByID;
            v24 = a8 - 1;
            if ( a8 >= 1 )
            {
              if ( GameObjectByID )
              {
                v25 = LogicGameObject::intersects(GameObjectByID, a2, a3, v32);
                if ( v25 )
                {
                  result = LogicGameObjectManager::giveBuffToObjectInArea(
                             (LogicSpellListener *)v25,
                             v23,
                             a5,
                             v30,
                             v31,
                             a9,
                             a10,
                             a12);
                  if ( (_DWORD)result )
                    break;
                }
              }
            }
            result = LogicArrayList<int>::remove((__int64 *)a11, (int)v20 - 1);
            v21 -= 4;
            v27 = v20-- <= 1;
            if ( v27 )
            {
              v24 = a8;
              a7 = v31;
              a6 = v30;
              goto LABEL_16;
            }
          }
          --a8;
          v19 = v20 - 1;
          v27 = (int)v20 <= 1;
          a7 = v31;
          a6 = v30;
        }
        while ( !v27 );
      }
      else
      {
        v24 = a8;
      }
    LABEL_16:
      v26 = v18[3];
      v27 = (int)v26 < 1 || v24 < 1;
      if ( !v27 )
      {
        v28 = 0;
        do
        {
          v29 = *(GameMode **)(*(_QWORD *)v18 + 8 * v28);
          result = LogicGameObject::intersects(v29, a2, a3, a4);
          if ( (_DWORD)result )
          {
            result = LogicGameObjectManager::giveBuffToObjectInArea(
                       (LogicSpellListener *)result,
                       v29,
                       a5,
                       a6,
                       a7,
                       a9,
                       a10,
                       a12);
            v24 -= result;
          }
          ++v28;
        }
        while ( v28 < v26 && v24 > 0 );
      }
      return result;
    }

    Sprite *__fastcall LogicGameObjectManager::healObjectsInArea(
            Sprite *this,
            #1237 *a2,
            #1237 *a3,
            int a4,
            int a5,
            const GameMode *a6)
    {
      _QWORD *v11; // x24
      int v12; // w26
      __int64 v13; // x27
      const GameMode *v14; // x25
      Sprite *v15; // x0
    
      v11 = this;
      v12 = *((_DWORD *)this + 3);
      if ( v12 >= 1 )
      {
        v13 = 0;
        do
        {
          v14 = *(const GameMode **)(*v11 + 8 * v13);
          this = (Sprite *)LogicGameObject::isValidHealingTarget(a6, v14, 1);
          if ( (_DWORD)this )
          {
            this = (Sprite *)LogicGameObject::intersects(v14, a2, a3, a4);
            if ( (_DWORD)this )
            {
              v15 = (Sprite *)(*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)v14 + 136LL))(v14);
              this = LogicHitpointComponent::heal(v15, a5, a6);
            }
          }
          ++v13;
        }
        while ( v12 != (_DWORD)v13 );
      }
      return this;
    }

    __int64 __fastcall LogicGameObjectManager::updatePrevCoordinates(__int64 this)
    {
      _QWORD *v1; // x19
      int v2; // w20
      __int64 v3; // x21
    
      v1 = (_QWORD *)this;
      v2 = *(_DWORD *)(this + 12);
      if ( v2 >= 1 )
      {
        v3 = 0;
        do
        {
          this = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v1 + 8 * v3) + 192LL))(*(_QWORD *)(*v1 + 8 * v3));
          ++v3;
        }
        while ( v2 != (_DWORD)v3 );
      }
      return this;
    }

}; // end class LogicGameObjectManager
