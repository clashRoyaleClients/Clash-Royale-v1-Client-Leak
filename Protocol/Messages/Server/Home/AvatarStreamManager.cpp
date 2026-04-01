class AvatarStreamManager
{
public:

    __int64 __fastcall AvatarStreamManager::~AvatarStreamManager(__int64 a1)
    {
      __int64 v2; // x8
      __int64 *v3; // x20
      __int64 v4; // x21
      unsigned int v5; // w22
      __int64 v6; // x0
      __int64 v7; // x8
      __int64 v8; // x0
      void *v9; // x0
    
      v3 = (__int64 *)(a1 + 8);
      v2 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) != v2 )
      {
        v4 = 0;
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(v2 + 8 * v4);
          do
          {
            if ( !v6 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 72LL))(v6);
            v7 = *v3;
            v8 = *(_QWORD *)(*v3 + 8 * v4);
            if ( v8 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
              v7 = *v3;
            }
            *(_QWORD *)(v7 + 8 * v4) = 0;
            v2 = *v3;
            v6 = *(_QWORD *)(*v3 + 8 * v4);
          }
          while ( v6 );
          v4 = ++v5;
        }
        while ( v5 < (unsigned __int64)((*(_QWORD *)(a1 + 16) - v2) >> 3) );
      }
      std::vector<AvatarStreamEntry *>::resize(v3, 0, 0);
      *(_BYTE *)(a1 + 37) = 0;
      *(_BYTE *)(a1 + 36) = 0;
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 32) = 0;
      v9 = *(void **)(a1 + 8);
      if ( v9 )
        operator delete(v9);
      return a1;
    }

    __int64 AvatarStreamManager::constructInstance()
    {
      __int64 result; // x0
    
      result = operator new(40);
      *(_DWORD *)result = 0;
      *(_QWORD *)(result + 30) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 8) = 0;
      AvatarStreamManager::sm_pInstance = result;
      return result;
    }

    void AvatarStreamManager::destructInstance()
    {
      void *v0; // x19
    
      v0 = (void *)AvatarStreamManager::sm_pInstance;
      if ( AvatarStreamManager::sm_pInstance )
      {
        AvatarStreamManager::~AvatarStreamManager(AvatarStreamManager::sm_pInstance);
        operator delete(v0);
      }
      AvatarStreamManager::sm_pInstance = 0;
    }

    __int64 __fastcall AvatarStreamManager::receiveMessage(__int64 a1, #1071 *a2)
    {
      int v4; // w8
      __int64 result; // x0
      int *v6; // x20
      const char *v7; // x1
      int v8; // w2
      __int64 v9; // x21
      __int64 v10; // x8
      unsigned __int64 v11; // x9
      unsigned int v12; // w23
      LogicStartMatchmakeCommand *v13; // x21
      LogicStartMatchmakeCommand *v14; // x0
      const char *v15; // x1
      int v16; // w2
      __int64 v17; // x21
      __int64 StreamEntryId; // x0
      LogicStartMatchmakeCommand *EntryByStreamId; // x0
      const char *v20; // x1
      __siginfo var60; // [xsp+10h] [xbp-60h] BYREF
    
      v4 = (*(__int64 (__fastcall **)(#1071 *))(*(_QWORD *)a2 + 40LL))(a2);
      result = 0;
      switch ( v4 )
      {
        case 24411:
          *(_BYTE *)(a1 + 36) = 1;
          v6 = (int *)AvatarStreamMessage::removeStreamEntries(a2);
          String::getFormatted(
            (__int64 *)&var60.si_addr,
            (String *)"------------> AvatarStreamMessage received - Entry count %d",
            v7,
            (unsigned int)v6[3]);
          Debugger::hudPrint((__siginfo *)&var60.si_addr, (const String *)0xFFFFFFFFLL, v8);
          String::~String((String *)&var60.si_addr);
          if ( v6[3] >= 1 )
          {
            v9 = 0;
            do
              AvatarStreamManager::addEntry(a1, *(LogicStartMatchmakeCommand **)(*(_QWORD *)v6 + 8 * v9++));
            while ( v9 < v6[3] );
          }
          v10 = *(_QWORD *)(a1 + 8);
          if ( *(_QWORD *)(a1 + 16) == v10 )
            goto LABEL_17;
          v11 = 0;
          v12 = 1;
          do
          {
            v13 = *(LogicStartMatchmakeCommand **)(v10 + 8 * v11);
            if ( (unsigned int)AvatarStreamEntry::isNew(v13)
              && (*(unsigned int (__fastcall **)(LogicStartMatchmakeCommand *))(*(_QWORD *)v13 + 32LL))(v13) == 7 )
            {
              *(_BYTE *)(a1 + 37) = 1;
            }
            v11 = v12;
            v10 = *(_QWORD *)(a1 + 8);
            ++v12;
          }
          while ( v11 < (*(_QWORD *)(a1 + 16) - v10) >> 3 );
          if ( v6 )
            goto LABEL_17;
          goto LABEL_23;
        case 24412:
          v14 = (LogicStartMatchmakeCommand *)AvatarStreamEntryMessage::removeStreamEntry(a2);
          AvatarStreamManager::addEntry(a1, v14);
          goto LABEL_23;
        case 24413:
          v6 = (int *)BattleReportStreamMessage::removeStreamEntries(a2);
          String::getFormatted(
            (__int64 *)&var60.si_signo,
            (String *)"------------> BattleReportStreamMessage received - Entry count %d",
            v15,
            (unsigned int)v6[3]);
          Debugger::hudPrint(&var60, (const String *)0xFFFFFFFFLL, v16);
          String::~String((String *)&var60);
          if ( v6[3] >= 1 )
          {
            v17 = 0;
            do
              AvatarStreamManager::addEntry(a1, *(LogicStartMatchmakeCommand **)(*(_QWORD *)v6 + 8 * v17++));
            while ( v17 < v6[3] );
          }
    LABEL_17:
          if ( *(_QWORD *)v6 )
            operator delete[](*(_QWORD *)v6);
          operator delete(v6);
          goto LABEL_23;
        case 24418:
          StreamEntryId = AvatarStreamEntryRemovedMessage::getStreamEntryId(a2);
          EntryByStreamId = (LogicStartMatchmakeCommand *)AvatarStreamManager::getEntryByStreamId(a1, StreamEntryId);
          if ( EntryByStreamId )
            AvatarStreamEntry::setRemoved(EntryByStreamId);
          else
            Debugger::warning((__siginfo *)"AvatarStreamManager::receiveMessage cant find entry with id", v20);
    LABEL_23:
          result = 1;
          break;
        default:
          return result;
      }
      return result;
    }

    __int64 __fastcall AvatarStreamManager::getEntryByStreamId(__int64 a1, __int64 a2)
    {
      __int64 v4; // x8
      unsigned __int64 v5; // x21
      unsigned int i; // w22
      __int64 Id; // x0
    
      v4 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) == v4 )
        return 0;
      v5 = 0;
      for ( i = 1; ; ++i )
      {
        Id = AvatarStreamEntry::getId(*(LogicStartMatchmakeCommand **)(v4 + 8 * v5));
        if ( (unsigned int)LogicLong::equals(Id, a2) )
          break;
        v5 = i;
        v4 = *(_QWORD *)(a1 + 8);
        if ( v5 >= (*(_QWORD *)(a1 + 16) - v4) >> 3 )
          return 0;
      }
      return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5);
    }

    __int64 __fastcall AvatarStreamManager::addEntry(__int64 a1, #1055 *a2)
    {
      __int64 v4; // x8
      _QWORD *v5; // x20
      unsigned __int64 v6; // x23
      unsigned int i; // w24
      __int64 Id; // x22
      __int64 v9; // x0
      __int64 result; // x0
      #1055 *v11; // [xsp+8h] [xbp-38h] BYREF
    
      v11 = a2;
      v5 = (_QWORD *)(a1 + 8);
      v4 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) == v4 )
        return std::vector<AvatarStreamEntry *>::push_back(v5, &v11);
      v6 = 0;
      for ( i = 1; ; ++i )
      {
        Id = AvatarStreamEntry::getId(*(#1055 **)(v4 + 8 * v6));
        v9 = AvatarStreamEntry::getId(a2);
        if ( (unsigned int)LogicLong::equals(Id, v9) )
          break;
        v6 = i;
        v4 = *(_QWORD *)(a1 + 8);
        if ( v6 >= (*(_QWORD *)(a1 + 16) - v4) >> 3 )
          return std::vector<AvatarStreamEntry *>::push_back(v5, &v11);
      }
      result = (*(__int64 (__fastcall **)(_QWORD, #1055 *))(**(_QWORD **)(*v5 + 8 * v6) + 64LL))(
                 *(_QWORD *)(*v5 + 8 * v6),
                 a2);
      if ( a2 )
      {
        (*(void (__fastcall **)(#1055 *))(*(_QWORD *)a2 + 72LL))(a2);
        return (*(__int64 (__fastcall **)(#1055 *))(*(_QWORD *)a2 + 8LL))(a2);
      }
      return result;
    }

    __int64 __fastcall AvatarStreamManager::getEntryCnt(LogicClientGlobals *this)
    {
      return (*((_QWORD *)this + 2) - *((_QWORD *)this + 1)) >> 3;
    }

    __int64 __fastcall AvatarStreamManager::getEntryByIdx(LogicClientGlobals *this, int a2)
    {
      return *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * a2);
    }

    __int64 __fastcall AvatarStreamManager::timeElapsed(__int64 result, float a2)
    {
      __int64 v2; // x19
      float v3; // s0
      int v4; // w21
      __int64 v5; // x8
      unsigned __int64 v6; // x9
      unsigned int v7; // w22
      LogicStartMatchmakeCommand *v8; // x20
      int AgeSeconds; // w0
    
      v2 = result;
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      v3 = *(float *)result + a2;
      *(float *)result = v3;
      v4 = (int)v3;
      if ( (int)v3 >= 60 )
      {
        *(float *)result = v3 - (float)v4;
        v5 = *(_QWORD *)(result + 8);
        if ( *(_QWORD *)(result + 16) != v5 )
        {
          v6 = 0;
          v7 = 1;
          do
          {
            v8 = *(LogicStartMatchmakeCommand **)(v5 + 8 * v6);
            AgeSeconds = AvatarStreamEntry::getAgeSeconds(v8);
            result = AvatarStreamEntry::setAgeSeconds(v8, AgeSeconds + v4);
            v6 = v7;
            v5 = *(_QWORD *)(v2 + 8);
            ++v7;
          }
          while ( v6 < (*(_QWORD *)(v2 + 16) - v5) >> 3 );
        }
      }
      return result;
    }

    __int64 __fastcall AvatarStreamManager::shouldShowReceivedDonations(__int64 a1)
    {
      vm_address_t *Instance; // x0
      __int64 v3; // x0
    
      Instance = (vm_address_t *)GameMode::getInstance((vm_address_t *)a1);
      if ( !Instance )
        return 0;
      v3 = GameMode::getInstance(Instance);
      if ( !LogicGameMode::getHome(*(UnlockAccountPopup **)(v3 + 112)) || *(_BYTE *)(a1 + 37) == 0 )
        return 0;
      *(_BYTE *)(a1 + 37) = 0;
      return 1;
    }

}; // end class AvatarStreamManager
