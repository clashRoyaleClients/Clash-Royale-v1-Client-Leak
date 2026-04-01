class ReplayStreamEntry
{
public:

    void __fastcall ReplayStreamEntry::ReplayStreamEntry(ReplayStreamEntry *this)
    {
      StreamEntry::StreamEntry(this);
      *(_QWORD *)this = off_10045EF90;
      String::String((String *)this + 4);
      *((_QWORD *)this + 8) = 0;
      *((_DWORD *)this + 14) = 0;
      *((_BYTE *)this + 72) = 0;
      *((_QWORD *)this + 11) = 0;
      String::operator=((char *)this + 96, "");
      *((_QWORD *)this + 10) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 16) = 0;
    }

    // attributes: thunk
    void __fastcall ReplayStreamEntry::ReplayStreamEntry(ReplayStreamEntry *this)
    {
      __ZN17ReplayStreamEntryC2Ev(this);
    }

    __int64 __fastcall ReplayStreamEntry::encode(ClientCapabilitiesMessage *this, #1226 *a2)
    {
      StreamEntry::encode();
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 14));
      ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 8));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 72));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 11));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 10));
      (*(void (__fastcall **)(#1226 *, char *))(*(_QWORD *)a2 + 32LL))(a2, (char *)this + 96);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 30));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 31));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 32));
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 33));
    }

    __int64 __fastcall ReplayStreamEntry::decode(String *this, #1225 *a2)
    {
      __int64 result; // x0
      String v5; // [xsp+8h] [xbp-38h] BYREF
    
      StreamEntry::decode((StreamEntry *)this, a2);
      *((_DWORD *)this + 14) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_QWORD *)this + 8) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      *((_BYTE *)this + 72) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_QWORD *)this + 11) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_QWORD *)this + 10) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      (*(void (__fastcall **)(String *__return_ptr, #1225 *, __int64))(*(_QWORD *)a2 + 112LL))(&v5, a2, 900000);
      String::operator=(this + 4);
      String::~String(&v5);
      *((_DWORD *)this + 30) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 31) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 32) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 33) = result;
      return result;
    }

    __int64 __fastcall ReplayStreamEntry::getReplayShardId(ClientCapabilitiesMessage *this)
    {
      return *((unsigned int *)this + 14);
    }

    __int64 __fastcall ReplayStreamEntry::getReplayId(ClientCapabilitiesMessage *this)
    {
      return *((_QWORD *)this + 8);
    }

    __int64 __fastcall ReplayStreamEntry::getMajorVersion(ClientCapabilitiesMessage *this)
    {
      return *((unsigned int *)this + 30);
    }

    __int64 __fastcall ReplayStreamEntry::getBuild(ClientCapabilitiesMessage *this)
    {
      return *((unsigned int *)this + 31);
    }

    __int64 __fastcall ReplayStreamEntry::getContentVersion(ClientCapabilitiesMessage *this)
    {
      return *((unsigned int *)this + 32);
    }

    __int64 __fastcall ReplayStreamEntry::getMessage(ClientCapabilitiesMessage *this)
    {
      return *((_QWORD *)this + 11);
    }

    __int64 __fastcall ReplayStreamEntry::getBattleJSON(ClientCapabilitiesMessage *this)
    {
      return (__int64)this + 96;
    }

    __int64 __fastcall ReplayStreamEntry::getViewCount(ClientCapabilitiesMessage *this)
    {
      return *((unsigned int *)this + 33);
    }

    __int64 __fastcall ReplayStreamEntry::destruct(String **this)
    {
      void *v2; // x0
      void *v3; // x20
      void *v4; // x20
      __int64 result; // x0
    
      StreamEntry::destruct((StreamEntry *)this);
      v2 = *(this + 8);
      if ( v2 )
        operator delete(v2);
      *(this + 8) = 0;
      v3 = *(this + 10);
      if ( v3 )
      {
        String::~String(*(this + 10));
        operator delete(v3);
      }
      *(this + 10) = 0;
      v4 = *(this + 11);
      if ( v4 )
      {
        String::~String(*(this + 11));
        operator delete(v4);
      }
      *(this + 11) = 0;
      String::operator=(this + 12, "");
      *(this + 8) = 0;
      *((_DWORD *)this + 14) = 0;
      *((_BYTE *)this + 72) = 0;
      *(this + 11) = 0;
      result = String::operator=(this + 12, "");
      *(this + 10) = 0;
      *(this + 15) = 0;
      *(this + 16) = 0;
      return result;
    }

    void __fastcall ReplayStreamEntry::~ReplayStreamEntry(String *this)
    {
      *(_QWORD *)&this->m_length = off_10045EF90;
      String::~String(this + 4);
    }

    void __fastcall ReplayStreamEntry::~ReplayStreamEntry(String *this)
    {
      *(_QWORD *)&this->m_length = off_10045EF90;
      String::~String(this + 4);
      operator delete(this);
    }

    __int64 __fastcall ReplayStreamEntry::getStreamEntryType(ClientCapabilitiesMessage *this)
    {
      return 5;
    }

}; // end class ReplayStreamEntry
