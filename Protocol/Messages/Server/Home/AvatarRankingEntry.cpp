class AvatarRankingEntry
{
public:

    void __fastcall AvatarRankingEntry::AvatarRankingEntry(AvatarRankingEntry *this)
    {
      __int64 v1; // x0
    
      RankingEntry::RankingEntry(this);
      *(_DWORD *)(v1 + 92) = 0;
      *(_QWORD *)(v1 + 84) = 0;
      *(_QWORD *)(v1 + 76) = 0;
      *(_QWORD *)v1 = off_10046EE40;
      *(_QWORD *)(v1 + 68) = 0;
      *(_QWORD *)(v1 + 60) = 0;
      *(_QWORD *)(v1 + 52) = 0;
      *(_QWORD *)(v1 + 44) = 0;
      *(_QWORD *)(v1 + 36) = 0;
    }

    __int64 __fastcall AvatarRankingEntry::encode(__int64 a1, #1226 *a2, const #1236 *a3)
    {
      __int64 (__fastcall *v5)(#1226 *, __int64); // x2
    
      RankingEntry::encode((#1226 **)a1, a2, a3);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 36));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 40));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 44));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 48));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 52));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 56));
      ChecksumEncoder::writeLong(a2, *(_QWORD *)(a1 + 64));
      v5 = *(__int64 (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( !*(_QWORD *)(a1 + 72) )
        return v5(a2, 0);
      v5(a2, 1);
      ChecksumEncoder::writeLong(a2, *(_QWORD *)(a1 + 72));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 80));
      return ByteStreamHelper::writeDataReference((__int64)a2, *(AreaEffectObject **)(a1 + 88));
    }

    __int64 __fastcall AvatarRankingEntry::decode(__int64 a1, #1225 *a2)
    {
      __int64 result; // x0
    
      RankingEntry::decode((HomeLogicStoppedMessage *)a1, a2);
      *(_DWORD *)(a1 + 36) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 44) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 48) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 52) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_QWORD *)(a1 + 64) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      if ( (_DWORD)result )
      {
        *(_QWORD *)(a1 + 72) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
        *(_QWORD *)(a1 + 80) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
        result = ByteStreamHelper::readDataReference((__int64)a2, 16);
        *(_QWORD *)(a1 + 88) = result;
      }
      return result;
    }

    __int64 __fastcall AvatarRankingEntry::getExpLevel(DonationContainer *this)
    {
      return *((unsigned int *)this + 9);
    }

    __int64 __fastcall AvatarRankingEntry::getHomeId(DonationContainer *this)
    {
      return *((_QWORD *)this + 8);
    }

    __int64 __fastcall AvatarRankingEntry::getAllianceName(DonationContainer *this)
    {
      return *((_QWORD *)this + 10);
    }

    __int64 __fastcall AvatarRankingEntry::getAllianceBadgeData(DonationContainer *this)
    {
      return *((_QWORD *)this + 11);
    }

    void __fastcall AvatarRankingEntry::destruct(__int64 a1)
    {
      void *v2; // x0
      void *v3; // x0
      void *v4; // x20
      void *v5; // x20
    
      RankingEntry::destruct((HomeLogicStoppedMessage *)a1);
      v2 = *(void **)(a1 + 64);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 64) = 0;
      v3 = *(void **)(a1 + 72);
      if ( v3 )
        operator delete(v3);
      *(_QWORD *)(a1 + 72) = 0;
      v4 = *(void **)(a1 + 80);
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      *(_QWORD *)(a1 + 80) = 0;
      v5 = *(void **)(a1 + 56);
      if ( v5 )
      {
        String::~String();
        operator delete(v5);
      }
      *(_DWORD *)(a1 + 92) = 0;
      *(_QWORD *)(a1 + 84) = 0;
      *(_QWORD *)(a1 + 76) = 0;
      *(_QWORD *)(a1 + 68) = 0;
      *(_QWORD *)(a1 + 60) = 0;
      *(_QWORD *)(a1 + 52) = 0;
      *(_QWORD *)(a1 + 44) = 0;
      *(_QWORD *)(a1 + 36) = 0;
    }

    void __fastcall AvatarRankingEntry::~AvatarRankingEntry(DonationContainer *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AvatarRankingEntry::~AvatarRankingEntry(void *a1)
    {
      operator delete(a1);
    }

}; // end class AvatarRankingEntry
