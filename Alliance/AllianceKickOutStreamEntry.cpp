class AllianceKickOutStreamEntry
{
public:

    void __fastcall AllianceKickOutStreamEntry::AllianceKickOutStreamEntry(AvatarStreamEntry *a1)
    {
      _QWORD *v1; // x0
    
      AvatarStreamEntry::AvatarStreamEntry(a1);
      *v1 = off_100470280;
      v1[9] = 0;
      v1[10] = 0;
      v1[7] = 0;
      v1[8] = 0;
      v1[6] = 0;
    }

    __int64 __fastcall AllianceKickOutStreamEntry::encode(__int64 a1, #1226 *a2)
    {
      __int64 (__fastcall *v4)(#1226 *, __int64); // x2
    
      AvatarStreamEntry::encode((LogicStartMatchmakeCommand *)a1, a2);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 48));
      ChecksumEncoder::writeLong(a2, *(_QWORD *)(a1 + 56));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 64));
      ByteStreamHelper::writeDataReference((__int64)a2, *(AreaEffectObject **)(a1 + 72));
      v4 = *(__int64 (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( !*(_QWORD *)(a1 + 80) )
        return v4(a2, 0);
      v4(a2, 1);
      return ChecksumEncoder::writeLong(a2, *(_QWORD *)(a1 + 80));
    }

    __int64 __fastcall AllianceKickOutStreamEntry::decode(_QWORD *a1, #1317 *a2)
    {
      #1225 *v4; // x1
      __int64 result; // x0
    
      AvatarStreamEntry::decode((__int64)a1, (__int64)a2);
      a1[6] = (*(__int64 (__fastcall **)(#1317 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      a1[7] = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 168LL))(a2);
      a1[8] = (*(__int64 (__fastcall **)(#1317 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      a1[9] = ByteStreamHelper::readDataReference(a2, v4);
      result = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 136LL))(a2);
      if ( (_DWORD)result )
      {
        result = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 168LL))(a2);
        a1[10] = result;
      }
      return result;
    }

    __int64 __fastcall AllianceKickOutStreamEntry::getMessage(__int64 a1)
    {
      return *(_QWORD *)(a1 + 48);
    }

    __int64 __fastcall AllianceKickOutStreamEntry::getAllianceName(__int64 a1)
    {
      return *(_QWORD *)(a1 + 64);
    }

    __int64 __fastcall AllianceKickOutStreamEntry::getAllianceBadgeData(__int64 a1)
    {
      return *(_QWORD *)(a1 + 72);
    }

    void __fastcall AllianceKickOutStreamEntry::destruct(LogicStartMatchmakeCommand *a1)
    {
      void *v2; // x20
      void *v3; // x0
      void *v4; // x20
      void *v5; // x0
    
      AvatarStreamEntry::destruct(a1);
      v2 = (void *)*((_QWORD *)a1 + 6);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *((_QWORD *)a1 + 6) = 0;
      v3 = (void *)*((_QWORD *)a1 + 7);
      if ( v3 )
        operator delete(v3);
      *((_QWORD *)a1 + 7) = 0;
      v4 = (void *)*((_QWORD *)a1 + 8);
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      *((_QWORD *)a1 + 8) = 0;
      v5 = (void *)*((_QWORD *)a1 + 10);
      if ( v5 )
        operator delete(v5);
      *((_QWORD *)a1 + 9) = 0;
      *((_QWORD *)a1 + 10) = 0;
      *((_QWORD *)a1 + 7) = 0;
      *((_QWORD *)a1 + 8) = 0;
      *((_QWORD *)a1 + 6) = 0;
    }

    void AllianceKickOutStreamEntry::~AllianceKickOutStreamEntry()
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceKickOutStreamEntry::~AllianceKickOutStreamEntry(void *a1)
    {
      operator delete(a1);
    }

    __int64 AllianceKickOutStreamEntry::getStreamEntryType()
    {
      return 5;
    }

}; // end class AllianceKickOutStreamEntry
