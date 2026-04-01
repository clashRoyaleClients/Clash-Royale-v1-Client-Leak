class JoinAllianceResponseAvatarStreamEntry
{
public:

    void __fastcall JoinAllianceResponseAvatarStreamEntry::JoinAllianceResponseAvatarStreamEntry(
            JoinAllianceResponseAvatarStreamEntry *this)
    {
      __int64 v1; // x0
    
      AvatarStreamEntry::AvatarStreamEntry(this);
      *(_BYTE *)(v1 + 72) = 0;
      *(_QWORD *)v1 = off_10045F4C0;
      *(_QWORD *)(v1 + 56) = 0;
      *(_QWORD *)(v1 + 64) = 0;
      *(_QWORD *)(v1 + 48) = 0;
      *(_QWORD *)(v1 + 80) = 0;
      *(_QWORD *)(v1 + 88) = 0;
    }

    __int64 __fastcall JoinAllianceResponseAvatarStreamEntry::encode(CSVRow *this, #1226 *a2)
    {
      __int64 (__fastcall *v4)(#1226 *, __int64); // x2
    
      AvatarStreamEntry::encode(this, a2);
      ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 6));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 7));
      ByteStreamHelper::writeDataReference((int)a2, *((#916 **)this + 8));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 11));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 72));
      v4 = *(__int64 (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( !*((_QWORD *)this + 10) )
        return v4(a2, 0);
      v4(a2, 1);
      return ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 10));
    }

    __int64 __fastcall JoinAllianceResponseAvatarStreamEntry::decode(CSVRow *this, #1225 *a2)
    {
      #1225 *v4; // x1
      __int64 result; // x0
    
      AvatarStreamEntry::decode((__int64)this, (__int64)a2);
      *((_QWORD *)this + 6) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      *((_QWORD *)this + 7) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_QWORD *)this + 8) = ByteStreamHelper::readDataReference(a2, v4);
      *((_QWORD *)this + 11) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_BYTE *)this + 72) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      if ( (_DWORD)result )
      {
        result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
        *((_QWORD *)this + 10) = result;
      }
      return result;
    }

    __int64 __fastcall JoinAllianceResponseAvatarStreamEntry::getAllianceName(CSVRow *this)
    {
      return *((_QWORD *)this + 7);
    }

    __int64 __fastcall JoinAllianceResponseAvatarStreamEntry::getAllianceBadgeData(CSVRow *this)
    {
      return *((_QWORD *)this + 8);
    }

    __int64 __fastcall JoinAllianceResponseAvatarStreamEntry::getAccepted(CSVRow *this)
    {
      return *((unsigned __int8 *)this + 72);
    }

    void __fastcall JoinAllianceResponseAvatarStreamEntry::destruct(CSVRow *this)
    {
      void *v2; // x0
      char *v3; // x21
      void *v4; // x20
      void *v5; // x20
      void *v6; // x0
      _QWORD *v7; // x19
      void *v8; // t1
    
      AvatarStreamEntry::destruct(this);
      v3 = (char *)this + 48;
      v2 = (void *)*((_QWORD *)this + 6);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 6) = 0;
      v4 = (void *)*((_QWORD *)this + 7);
      if ( v4 )
      {
        String::~String(*((String **)this + 7));
        operator delete(v4);
      }
      *((_QWORD *)this + 7) = 0;
      v5 = (void *)*((_QWORD *)this + 11);
      if ( v5 )
      {
        String::~String(*((String **)this + 11));
        operator delete(v5);
      }
      *((_QWORD *)this + 11) = 0;
      v8 = (void *)*((_QWORD *)this + 10);
      v7 = (_QWORD *)((char *)this + 80);
      v6 = v8;
      if ( v8 )
        operator delete(v6);
      v3[24] = 0;
      *((_QWORD *)v3 + 1) = 0;
      *((_QWORD *)v3 + 2) = 0;
      *(_QWORD *)v3 = 0;
      *v7 = 0;
      v7[1] = 0;
    }

    void __fastcall JoinAllianceResponseAvatarStreamEntry::~JoinAllianceResponseAvatarStreamEntry(CSVRow *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall JoinAllianceResponseAvatarStreamEntry::~JoinAllianceResponseAvatarStreamEntry(CSVRow *this)
    {
      operator delete(this);
    }

    __int64 __fastcall JoinAllianceResponseAvatarStreamEntry::getStreamEntryType(CSVRow *this)
    {
      return 3;
    }

}; // end class JoinAllianceResponseAvatarStreamEntry
