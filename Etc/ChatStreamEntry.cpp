class ChatStreamEntry
{
public:

    void __fastcall ChatStreamEntry::ChatStreamEntry(ChatStreamEntry *this)
    {
      StreamEntry *v1; // x0
    
      v1 = StreamEntry::StreamEntry(this);
      *(_QWORD *)v1 = off_1004710B0;
      *((_QWORD *)v1 + 7) = 0;
    }

    __int64 __fastcall ChatStreamEntry::encode(SectorHeartbeatMessage *this, #1226 *a2)
    {
      StreamEntry::encode();
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 7));
    }

    __int64 __fastcall ChatStreamEntry::decode(#1124 *this, #1225 *a2)
    {
      __int64 result; // x0
    
      StreamEntry::decode(this, a2);
      result = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_QWORD *)this + 7) = result;
      return result;
    }

    __int64 __fastcall ChatStreamEntry::getMessage(SectorHeartbeatMessage *this)
    {
      return *((_QWORD *)this + 7);
    }

    void __fastcall ChatStreamEntry::destruct(SectorHeartbeatMessage *this)
    {
      void *v2; // x20
    
      StreamEntry::destruct(this);
      v2 = (void *)*((_QWORD *)this + 7);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *((_QWORD *)this + 7) = 0;
    }

    void __fastcall ChatStreamEntry::~ChatStreamEntry(SectorHeartbeatMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ChatStreamEntry::~ChatStreamEntry(SectorHeartbeatMessage *this)
    {
      operator delete(this);
    }

    __int64 __fastcall ChatStreamEntry::getStreamEntryType(SectorHeartbeatMessage *this)
    {
      return 2;
    }

}; // end class ChatStreamEntry
