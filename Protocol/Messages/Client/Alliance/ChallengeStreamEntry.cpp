class ChallengeStreamEntry
{
public:

    StreamEntry *__fastcall ChallengeStreamEntry::ChallengeStreamEntry(StreamEntry *a1)
    {
      StreamEntry *result; // x0
    
      result = StreamEntry::StreamEntry(a1);
      *(_QWORD *)result = off_100471F28;
      *((_QWORD *)result + 7) = 0;
      *((_BYTE *)result + 64) = 0;
      *((_QWORD *)result + 9) = 0;
      return result;
    }

    __int64 __fastcall ChallengeStreamEntry::encode(__int64 a1, __int64 a2)
    {
      __int64 (__fastcall *v4)(__int64, __int64); // x2
    
      StreamEntry::encode();
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 56));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 64));
      v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL);
      if ( !*(_QWORD *)(a1 + 72) )
        return v4(a2, 0);
      v4(a2, 1);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 72));
    }

    __int64 __fastcall ChallengeStreamEntry::decode(__int64 a1, ByteStream *a2)
    {
      __int64 result; // x0
    
      StreamEntry::decode((StreamEntry *)a1, a2);
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(ByteStream *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_BYTE *)(a1 + 64) = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 136LL))(a2);
      result = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 136LL))(a2);
      if ( (_DWORD)result )
      {
        result = (*(__int64 (__fastcall **)(ByteStream *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
        *(_QWORD *)(a1 + 72) = result;
      }
      return result;
    }

    void __fastcall ChallengeStreamEntry::destruct(__int64 a1)
    {
      void *v2; // x20
      void *v3; // x20
    
      StreamEntry::destruct((StreamEntry *)a1);
      v2 = *(void **)(a1 + 56);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 56) = 0;
      v3 = *(void **)(a1 + 72);
      if ( v3 )
      {
        String::~String();
        operator delete(v3);
      }
      *(_QWORD *)(a1 + 56) = 0;
      *(_BYTE *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = 0;
    }

    __int64 __fastcall ChallengeStreamEntry::getMessage(__int64 a1)
    {
      return *(_QWORD *)(a1 + 56);
    }

    __int64 __fastcall ChallengeStreamEntry::getClosed(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 64);
    }

    __int64 __fastcall ChallengeStreamEntry::setClosed(__int64 result, char a2)
    {
      *(_BYTE *)(result + 64) = a2;
      return result;
    }

    void ChallengeStreamEntry::~ChallengeStreamEntry()
    {
      ;
    }

    // attributes: thunk
    void __fastcall ChallengeStreamEntry::~ChallengeStreamEntry(void *a1)
    {
      operator delete(a1);
    }

    __int64 ChallengeStreamEntry::getStreamEntryType()
    {
      return 10;
    }

}; // end class ChallengeStreamEntry
