class JoinRequestAllianceStreamEntry
{
public:

    void __fastcall JoinRequestAllianceStreamEntry::JoinRequestAllianceStreamEntry(JoinRequestAllianceStreamEntry *this)
    {
      StreamEntry *v1; // x0
    
      v1 = StreamEntry::StreamEntry(this);
      *(_QWORD *)v1 = off_100460690;
      *((_QWORD *)v1 + 7) = 0;
      *((_QWORD *)v1 + 9) = 0;
      *((_DWORD *)v1 + 16) = 1;
    }

    __int64 __fastcall JoinRequestAllianceStreamEntry::encode(LogicCharacterBuffData *this, #1226 *a2)
    {
      StreamEntry::encode();
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 7));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 9));
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 16));
    }

    __int64 __fastcall JoinRequestAllianceStreamEntry::decode(LogicCharacterBuffData *this, #1225 *a2)
    {
      __int64 result; // x0
    
      StreamEntry::decode(this, a2);
      *((_QWORD *)this + 7) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_QWORD *)this + 9) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 16) = result;
      return result;
    }

    __int64 __fastcall JoinRequestAllianceStreamEntry::getMessage(LogicCharacterBuffData *this)
    {
      return *((_QWORD *)this + 7);
    }

    __int64 __fastcall JoinRequestAllianceStreamEntry::getResponderName(LogicCharacterBuffData *this)
    {
      return *((_QWORD *)this + 9);
    }

    __int64 __fastcall JoinRequestAllianceStreamEntry::getState(LogicCharacterBuffData *this)
    {
      return *((unsigned int *)this + 16);
    }

    void __fastcall JoinRequestAllianceStreamEntry::destruct(String **this)
    {
      void *v2; // x20
      void *v3; // x20
    
      StreamEntry::destruct((StreamEntry *)this);
      v2 = *(this + 7);
      if ( v2 )
      {
        String::~String(*(this + 7));
        operator delete(v2);
      }
      *(this + 7) = 0;
      v3 = *(this + 9);
      if ( v3 )
      {
        String::~String(*(this + 9));
        operator delete(v3);
      }
      *(this + 7) = 0;
      *(this + 9) = 0;
      *((_DWORD *)this + 16) = 1;
    }

    void __fastcall JoinRequestAllianceStreamEntry::~JoinRequestAllianceStreamEntry(LogicCharacterBuffData *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall JoinRequestAllianceStreamEntry::~JoinRequestAllianceStreamEntry(LogicCharacterBuffData *this)
    {
      operator delete(this);
    }

    __int64 __fastcall JoinRequestAllianceStreamEntry::getStreamEntryType(LogicCharacterBuffData *this)
    {
      return 3;
    }

}; // end class JoinRequestAllianceStreamEntry
