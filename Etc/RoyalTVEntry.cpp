class RoyalTVEntry
{
public:

    int8x16_t __fastcall RoyalTVEntry::RoyalTVEntry(__int64 a1)
    {
      int8x16_t result; // q0
    
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 20) = 1;
      *(_QWORD *)a1 = off_100464EA0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_BYTE *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 36) = -1;
      *(_QWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 12) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      result = vextq_s8((int8x16_t)0, (int8x16_t)0, 8u);
      *(_QWORD *)(a1 + 56) = result.i64[0];
      return result;
    }

    __int64 __fastcall RoyalTVEntry::encode(__int64 a1, __int64 a2)
    {
      __int64 (__fastcall *v4)(__int64, __int64); // x2
    
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 24));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 32));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 48));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 52));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 56));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 12));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 16));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 20));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 60));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 8));
      v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL);
      if ( !*(_QWORD *)(a1 + 40) )
        return v4(a2, 0);
      v4(a2, 1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 36));
      return ChecksumEncoder::writeLong(a2, *(_QWORD *)(a1 + 40));
    }

    __int64 __fastcall RoyalTVEntry::decode(__int64 a1, __int64 a2)
    {
      int v4; // w8
      void *v5; // x0
      __int64 result; // x0
    
      *(_QWORD *)(a1 + 24) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_BYTE *)(a1 + 32) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2);
      *(_DWORD *)(a1 + 48) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 52) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 12) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 16) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 20) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 60) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2);
      v5 = *(void **)(a1 + 40);
      if ( v4 )
      {
        if ( v5 )
          operator delete(v5);
        *(_QWORD *)(a1 + 40) = 0;
        *(_DWORD *)(a1 + 36) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 168LL))(a2);
      }
      else
      {
        if ( v5 )
          operator delete(v5);
        result = 0;
      }
      *(_QWORD *)(a1 + 40) = result;
      return result;
    }

    __int64 __fastcall RoyalTVEntry::getViewCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 12);
    }

    __int64 __fastcall RoyalTVEntry::getShareCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 16);
    }

    __int64 __fastcall RoyalTVEntry::getBattleLogJSON(__int64 a1)
    {
      return *(_QWORD *)(a1 + 24);
    }

    __int64 __fastcall RoyalTVEntry::getReplayShardId(__int64 a1)
    {
      return *(unsigned int *)(a1 + 36);
    }

    __int64 __fastcall RoyalTVEntry::getReplayId(__int64 a1)
    {
      return *(_QWORD *)(a1 + 40);
    }

    int8x16_t __fastcall RoyalTVEntry::destruct(__int64 a1)
    {
      void *v2; // x20
      void *v3; // x0
      int8x16_t result; // q0
    
      v2 = *(void **)(a1 + 24);
      if ( v2 )
      {
        String::~String(*(String **)(a1 + 24));
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 24) = 0;
      v3 = *(void **)(a1 + 40);
      if ( v3 )
        operator delete(v3);
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 20) = 1;
      *(_QWORD *)(a1 + 24) = 0;
      *(_BYTE *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 36) = -1;
      *(_QWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 12) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      result = vextq_s8((int8x16_t)0, (int8x16_t)0, 8u);
      *(_QWORD *)(a1 + 56) = result.i64[0];
      return result;
    }

    void __fastcall RoyalTVEntry::updateStateFrom(__int64 a1, __int64 a2)
    {
      __int64 v3; // x0
      __int64 v4; // x20
      void *v5; // x0
      void *v6; // x0
    
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
      v3 = *(_QWORD *)(a2 + 40);
      if ( v3 )
      {
        *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
        v4 = LogicLong::clone(v3);
        v5 = *(void **)(a1 + 40);
        if ( v5 )
          operator delete(v5);
        *(_QWORD *)(a1 + 40) = v4;
      }
      else
      {
        *(_DWORD *)(a1 + 36) = -1;
        v6 = *(void **)(a1 + 40);
        if ( v6 )
          operator delete(v6);
        *(_QWORD *)(a1 + 40) = 0;
      }
    }

    __int64 __fastcall RoyalTVEntry::getRunningId(__int64 a1)
    {
      return *(unsigned int *)(a1 + 8);
    }

    __int64 __fastcall RoyalTVEntry::getAgeSeconds(__int64 a1)
    {
      return *(unsigned int *)(a1 + 60);
    }

    void RoyalTVEntry::~RoyalTVEntry()
    {
      ;
    }

    // attributes: thunk
    void __fastcall RoyalTVEntry::~RoyalTVEntry(void *a1)
    {
      operator delete(a1);
    }

}; // end class RoyalTVEntry
