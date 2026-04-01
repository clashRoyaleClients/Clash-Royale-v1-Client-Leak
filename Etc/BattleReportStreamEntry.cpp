class BattleReportStreamEntry
{
public:

    void __fastcall BattleReportStreamEntry::BattleReportStreamEntry(AvatarStreamEntry *a1, int a2)
    {
      __int64 v3; // x0
    
      AvatarStreamEntry::AvatarStreamEntry(a1);
      *(_QWORD *)(v3 + 48) = 0;
      *(_BYTE *)(v3 + 56) = 0;
      *(_DWORD *)(v3 + 72) = 0;
      *(_DWORD *)(v3 + 76) = 0;
      *(_DWORD *)(v3 + 80) = 0;
      *(_QWORD *)v3 = off_100468CD8;
      *(_DWORD *)(v3 + 60) = -1;
      *(_QWORD *)(v3 + 64) = 0;
      *(_QWORD *)(v3 + 88) = 0;
      *(_DWORD *)(v3 + 44) = a2;
    }

    __int64 __fastcall BattleReportStreamEntry::encode(__int64 a1, #1226 *a2)
    {
      void (__fastcall *v4)(#1226 *, __int64); // x8
    
      AvatarStreamEntry::encode((LogicStartMatchmakeCommand *)a1, a2);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 48));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 56));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 72));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 76));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 80));
      v4 = *(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( *(_QWORD *)(a1 + 64) )
      {
        v4(a2, 1);
        (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 60));
        ChecksumEncoder::writeLong(a2, *(_QWORD *)(a1 + 64));
      }
      else
      {
        v4(a2, 0);
      }
      return ByteStreamHelper::writeDataReference((int)a2, *(AreaEffectObject **)(a1 + 88));
    }

    __int64 __fastcall BattleReportStreamEntry::decode(__int64 a1, ByteStreamHelper *a2)
    {
      int v4; // w2
      int v5; // w8
      void *v6; // x0
      __int64 v7; // x0
      __int64 result; // x0
    
      AvatarStreamEntry::decode(a1, (__int64)a2);
      *(_QWORD *)(a1 + 48) = (*(__int64 (__fastcall **)(ByteStreamHelper *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_BYTE *)(a1 + 56) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 136LL))(a2);
      *(_DWORD *)(a1 + 72) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 76) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 80) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      v5 = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 136LL))(a2);
      v6 = *(void **)(a1 + 64);
      if ( v5 )
      {
        if ( v6 )
          operator delete(v6);
        *(_QWORD *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 60) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
        v7 = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 168LL))(a2);
      }
      else
      {
        if ( v6 )
          operator delete(v6);
        v7 = 0;
      }
      *(_QWORD *)(a1 + 64) = v7;
      result = ByteStreamHelper::readDataReference(a2, (ByteStream *)0x12, v4);
      *(_QWORD *)(a1 + 88) = result;
      return result;
    }

    __int64 __fastcall BattleReportStreamEntry::getStreamEntryType(__int64 a1)
    {
      return *(unsigned int *)(a1 + 44);
    }

    __int64 __fastcall BattleReportStreamEntry::getBattleLogJSON(__int64 a1)
    {
      return *(_QWORD *)(a1 + 48);
    }

    __int64 __fastcall BattleReportStreamEntry::getMajorVersion(__int64 a1)
    {
      return *(unsigned int *)(a1 + 72);
    }

    __int64 __fastcall BattleReportStreamEntry::getBuild(__int64 a1)
    {
      return *(unsigned int *)(a1 + 76);
    }

    __int64 __fastcall BattleReportStreamEntry::getContentVersion(__int64 a1)
    {
      return *(unsigned int *)(a1 + 80);
    }

    __int64 __fastcall BattleReportStreamEntry::getReplayShardId(__int64 a1)
    {
      return *(unsigned int *)(a1 + 60);
    }

    __int64 __fastcall BattleReportStreamEntry::getReplayId(__int64 a1)
    {
      return *(_QWORD *)(a1 + 64);
    }

    void __fastcall BattleReportStreamEntry::destruct(__int64 a1)
    {
      void *v2; // x20
      void *v3; // x0
    
      AvatarStreamEntry::destruct((LogicStartMatchmakeCommand *)a1);
      v2 = *(void **)(a1 + 48);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 48) = 0;
      v3 = *(void **)(a1 + 64);
      if ( v3 )
        operator delete(v3);
      *(_QWORD *)(a1 + 48) = 0;
      *(_BYTE *)(a1 + 56) = 0;
      *(_DWORD *)(a1 + 72) = 0;
      *(_DWORD *)(a1 + 44) = 2;
      *(_DWORD *)(a1 + 76) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 60) = -1;
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }

    void __fastcall BattleReportStreamEntry::updateStateFrom(__int64 a1, __int64 a2)
    {
      __int64 v4; // x0
      __int64 v5; // x20
      void *v6; // x0
      void *v7; // x0
    
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) == 2 )
      {
        *(_BYTE *)(a1 + 56) = *(_BYTE *)(a2 + 56);
        v4 = *(_QWORD *)(a2 + 64);
        if ( v4 )
        {
          *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
          v5 = LogicLong::clone(v4);
          v6 = *(void **)(a1 + 64);
          if ( v6 )
            operator delete(v6);
          *(_QWORD *)(a1 + 64) = v5;
        }
        else
        {
          *(_DWORD *)(a1 + 60) = -1;
          v7 = *(void **)(a1 + 64);
          if ( v7 )
            operator delete(v7);
          *(_QWORD *)(a1 + 64) = 0;
        }
      }
    }

    void BattleReportStreamEntry::~BattleReportStreamEntry()
    {
      ;
    }

    // attributes: thunk
    void __fastcall BattleReportStreamEntry::~BattleReportStreamEntry(void *a1)
    {
      operator delete(a1);
    }

}; // end class BattleReportStreamEntry
