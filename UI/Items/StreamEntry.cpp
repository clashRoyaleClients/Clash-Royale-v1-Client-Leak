class StreamEntry
{
public:

    _QWORD *__fastcall StreamEntry::StreamEntry(_QWORD *result)
    {
      *(_QWORD *)((char *)result + 45) = 0;
      *result = off_100472BB0;
      result[4] = 0;
      result[5] = 0;
      result[2] = 0;
      result[3] = 0;
      result[1] = 0;
      return result;
    }

    __int64 __fastcall StreamEntry::encode(__int64 a1, #1317 *a2, const LogicCommandManagerListener *a3)
    {
      const LogicCommandManagerListener *v5; // x2
      const LogicCommandManagerListener *v6; // x2
    
      ByteStreamHelper::encodeLogicLong(a2, *(ExpBar **)(a1 + 8), a3);
      ByteStreamHelper::encodeLogicLong(a2, *(ExpBar **)(a1 + 16), v5);
      ByteStreamHelper::encodeLogicLong(a2, *(ExpBar **)(a1 + 24), v6);
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 32));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 40));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 44));
      (*(void (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 48));
      return (*(__int64 (__fastcall **)(#1317 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 52));
    }

    __int64 __fastcall StreamEntry::decode(__int64 a1, __int64 a2)
    {
      LogicLong *v4; // x21
      LogicLong *v5; // x21
      LogicLong *v6; // x21
      __int64 result; // x0
    
      v4 = (LogicLong *)operator new(8);
      LogicLong::LogicLong(v4);
      *(_QWORD *)(a1 + 8) = v4;
      ByteStreamHelper::decodeLogicLong(a2, v4);
      v5 = (LogicLong *)operator new(8);
      LogicLong::LogicLong(v5);
      *(_QWORD *)(a1 + 16) = v5;
      ByteStreamHelper::decodeLogicLong(a2, v5);
      v6 = (LogicLong *)operator new(8);
      LogicLong::LogicLong(v6);
      *(_QWORD *)(a1 + 24) = v6;
      ByteStreamHelper::decodeLogicLong(a2, v6);
      *(_QWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_DWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 44) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 48) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2);
      *(_BYTE *)(a1 + 52) = result;
      return result;
    }

    __int64 __fastcall StreamEntry::getSenderAvatarId(__int64 a1)
    {
      return *(_QWORD *)(a1 + 16);
    }

    __int64 __fastcall StreamEntry::getHomeId(__int64 a1)
    {
      return *(_QWORD *)(a1 + 24);
    }

    __int64 __fastcall StreamEntry::getId(__int64 a1)
    {
      return *(_QWORD *)(a1 + 8);
    }

    __int64 __fastcall StreamEntry::getSenderName(__int64 a1)
    {
      return *(_QWORD *)(a1 + 32);
    }

    __int64 __fastcall StreamEntry::getSenderRole(__int64 a1)
    {
      return *(unsigned int *)(a1 + 44);
    }

    __int64 __fastcall StreamEntry::getSenderAllianceRole(__int64 a1)
    {
      __int64 Table; // x0
    
      Table = LogicDataTables::getTable(59);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Table + 40LL))(Table, *(unsigned int *)(a1 + 44));
    }

    __int64 __fastcall StreamEntry::getAgeSeconds(__int64 a1)
    {
      return *(unsigned int *)(a1 + 48);
    }

    void __fastcall StreamEntry::destruct(_QWORD *a1)
    {
      void *v2; // x0
      void *v3; // x0
      void *v4; // x20
      void *v5; // x0
      _QWORD *v6; // x19
      void *v7; // t1
    
      v2 = (void *)a1[3];
      if ( v2 )
        operator delete(v2);
      v3 = (void *)a1[2];
      if ( v3 )
        operator delete(v3);
      v4 = (void *)a1[4];
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      v7 = (void *)a1[1];
      v6 = a1 + 1;
      v5 = v7;
      if ( v7 )
        operator delete(v5);
      *(_QWORD *)((char *)v6 + 37) = 0;
      v6[3] = 0;
      v6[4] = 0;
      v6[1] = 0;
      v6[2] = 0;
      *v6 = 0;
    }

    __int64 __fastcall StreamEntry::setRemoved(__int64 result)
    {
      *(_BYTE *)(result + 52) = 1;
      return result;
    }

    __int64 __fastcall StreamEntry::isRemoved(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 52);
    }

    void StreamEntry::~StreamEntry()
    {
      ;
    }

    // attributes: thunk
    void __fastcall StreamEntry::~StreamEntry(void *a1)
    {
      operator delete(a1);
    }

}; // end class StreamEntry
