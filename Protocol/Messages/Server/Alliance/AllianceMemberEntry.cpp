class AllianceMemberEntry
{
public:

    void __fastcall AllianceMemberEntry::AllianceMemberEntry(AllianceMemberEntry *this)
    {
      *((_QWORD *)this + 11) = 0;
      memset(this, 0, 0x56u);
    }

    __int64 __fastcall AllianceMemberEntry::encode(AllianceJoinRequestOkMessage *this, #1225 *a2)
    {
      __int64 (__fastcall *v4)(#1225 *, __int64); // x2
    
      ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 2));
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 4));
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 5));
      ByteStreamHelper::writeDataReference((int)a2, *((AreaEffectObject **)this + 11));
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 12));
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 13));
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 14));
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 15));
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 16));
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 17));
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 18));
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 84));
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 85));
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 20));
      v4 = *(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( !*((_QWORD *)this + 3) )
        return v4(a2, 0);
      v4(a2, 1);
      return ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 3));
    }

    __int64 __fastcall AllianceMemberEntry::decode(AllianceJoinRequestOkMessage *this, #1225 *a2)
    {
      int v4; // w2
      __int64 result; // x0
    
      *((_QWORD *)this + 2) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      *((_QWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_QWORD *)this + 5) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_QWORD *)this + 11) = ByteStreamHelper::readDataReference(a2, (ByteStream *)0x36, v4);
      *((_DWORD *)this + 12) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 13) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 14) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 15) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 17) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 18) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_BYTE *)this + 84) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 85) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_DWORD *)this + 20) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      if ( (_DWORD)result )
      {
        result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
        *((_QWORD *)this + 3) = result;
      }
      return result;
    }

    __int64 __fastcall AllianceMemberEntry::getAvatarId(AllianceJoinRequestOkMessage *this)
    {
      return *((_QWORD *)this + 2);
    }

    __int64 __fastcall AllianceMemberEntry::getName(AllianceJoinRequestOkMessage *this)
    {
      return *((_QWORD *)this + 5);
    }

    __int64 __fastcall AllianceMemberEntry::getRole(AllianceJoinRequestOkMessage *this)
    {
      return *((unsigned int *)this + 12);
    }

    __int64 __fastcall AllianceMemberEntry::getExpLevel(AllianceJoinRequestOkMessage *this)
    {
      return *((unsigned int *)this + 13);
    }

    __int64 __fastcall AllianceMemberEntry::getScore(AllianceJoinRequestOkMessage *this)
    {
      return *((unsigned int *)this + 14);
    }

    __int64 __fastcall AllianceMemberEntry::getDonations(AllianceJoinRequestOkMessage *this)
    {
      return *((unsigned int *)this + 15);
    }

    void *__fastcall AllianceMemberEntry::destruct(AllianceJoinRequestOkMessage *this)
    {
      void *v2; // x0
      void *v3; // x20
      void *v4; // x20
      void *v5; // x0
    
      v2 = (void *)*((_QWORD *)this + 2);
      if ( v2 )
        operator delete(v2);
      v3 = (void *)*((_QWORD *)this + 4);
      if ( v3 )
      {
        String::~String(*((String **)this + 4));
        operator delete(v3);
      }
      v4 = (void *)*((_QWORD *)this + 5);
      if ( v4 )
      {
        String::~String(*((String **)this + 5));
        operator delete(v4);
      }
      v5 = (void *)*((_QWORD *)this + 3);
      if ( v5 )
        operator delete(v5);
      *((_QWORD *)this + 11) = 0;
      return memset(this, 0, 0x56u);
    }

    bool __fastcall AllianceMemberEntry::hasLowerRole(AllianceJoinRequestOkMessage *this, int a2)
    {
      _BOOL4 v2; // w9
      _BOOL4 v3; // w10
    
      v2 = (_DWORD)this == 1;
      v3 = (_DWORD)this != 2;
      if ( a2 != 2 )
        v3 = 0;
      if ( a2 != 3 )
        v2 = v3;
      if ( a2 == 4 )
        return (_DWORD)this != 4 && (_DWORD)this != 2;
      else
        return v2;
    }

    __int64 __fastcall AllianceMemberEntry::getHomeId(AllianceJoinRequestOkMessage *this)
    {
      return *((_QWORD *)this + 3);
    }

    _QWORD *__fastcall AllianceMemberEntry::clone(AllianceJoinRequestOkMessage *this)
    {
      _QWORD *v2; // x20
      _BYTE v4[48]; // [xsp+0h] [xbp-40h] BYREF
    
      ByteStream::ByteStream((ByteStream *)v4, 1000);
      v2 = (_QWORD *)operator new(96);
      v2[11] = 0;
      memset(v2, 0, 0x56u);
      AllianceMemberEntry::encode(this, (#1225 *)v4);
      ByteStream::setOffset((ByteStream *)v4, 0);
      AllianceMemberEntry::decode((AllianceJoinRequestOkMessage *)v2, (#1225 *)v4);
      ByteStream::destruct((#1225 *)v4);
      return v2;
    }

}; // end class AllianceMemberEntry
