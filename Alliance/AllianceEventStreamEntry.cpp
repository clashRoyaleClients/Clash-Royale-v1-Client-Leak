class AllianceEventStreamEntry
{
public:

    StreamEntry *__fastcall AllianceEventStreamEntry::AllianceEventStreamEntry(StreamEntry *a1)
    {
      StreamEntry *result; // x0
    
      result = StreamEntry::StreamEntry(a1);
      *(_QWORD *)result = off_1004718C0;
      *((_DWORD *)result + 18) = 0;
      *((_QWORD *)result + 7) = 0;
      *((_QWORD *)result + 8) = 0;
      return result;
    }

    __int64 __fastcall AllianceEventStreamEntry::encode(__int64 a1, #1317 *a2)
    {
      const #1236 *v4; // x2
    
      StreamEntry::encode();
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 72));
      ByteStreamHelper::encodeLogicLong(a2, *(ExpBar **)(a1 + 56), v4);
      return (*(__int64 (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 64));
    }

    __int64 __fastcall AllianceEventStreamEntry::decode(__int64 a1, ByteStream *a2)
    {
      LogicLong *v4; // x21
      __int64 result; // x0
    
      StreamEntry::decode((StreamEntry *)a1, a2);
      *(_DWORD *)(a1 + 72) = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
      v4 = (LogicLong *)operator new(8);
      LogicLong::LogicLong(v4);
      *(_QWORD *)(a1 + 56) = v4;
      ByteStreamHelper::decodeLogicLong((__int64)a2, v4);
      result = (*(__int64 (__fastcall **)(ByteStream *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_QWORD *)(a1 + 64) = result;
      return result;
    }

    void __fastcall AllianceEventStreamEntry::destruct(StreamEntry *a1)
    {
      void *v2; // x0
      _QWORD *v3; // x20
      void *v4; // x19
    
      StreamEntry::destruct(a1);
      v3 = (_QWORD *)((char *)a1 + 56);
      v2 = (void *)*((_QWORD *)a1 + 7);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)a1 + 7) = 0;
      v4 = (void *)*((_QWORD *)a1 + 8);
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      *((_DWORD *)v3 + 4) = 0;
      *v3 = 0;
      v3[1] = 0;
    }

    void __fastcall AllianceEventStreamEntry::~AllianceEventStreamEntry(LogicDebugChecksumEncoder *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceEventStreamEntry::~AllianceEventStreamEntry(void *a1)
    {
      operator delete(a1);
    }

    __int64 __fastcall AllianceEventStreamEntry::getStreamEntryType(LogicDebugChecksumEncoder *this)
    {
      return 4;
    }

}; // end class AllianceEventStreamEntry
