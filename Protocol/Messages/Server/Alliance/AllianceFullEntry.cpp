class AllianceFullEntry
{
public:

    void __fastcall AllianceFullEntry::AllianceFullEntry(Rect *this)
    {
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      *this = 0;
    }

    __int64 __fastcall AllianceFullEntry::encode(Rect *this, #1225 *a2)
    {
      __int64 v4; // x8
      __int64 v5; // x21
      __int64 result; // x0
      __int64 v7; // x22
    
      AllianceHeaderEntry::encode((__int64)*this, (__int64)a2);
      (*(void (__fastcall **)(#1225 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 2));
      v4 = *((_QWORD *)this + 1);
      if ( !v4 )
        return (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 88LL))(a2, 0xFFFFFFFFLL);
      v5 = *(unsigned int *)(v4 + 12);
      result = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 88LL))(a2, v5);
      if ( (int)v5 >= 1 )
      {
        v7 = 0;
        do
          result = AllianceMemberEntry::encode(*(AllianceJoinRequestOkMessage **)(**((_QWORD **)this + 1) + 8 * v7++), a2);
        while ( (_DWORD)v5 != (_DWORD)v7 );
      }
      return result;
    }

    __int64 __fastcall AllianceFullEntry::decode(Rect *this, #1225 *a2)
    {
      void *v4; // x21
      __int64 result; // x0
      const char *v6; // x2
      int v7; // w21
      _QWORD *v8; // x22
      __int64 v9; // x0
      int i; // w23
      AllianceMemberEntry *v11; // x22
      AllianceMemberEntry *v12; // [xsp+8h] [xbp-38h] BYREF
    
      v4 = (void *)operator new(80);
      AllianceHeaderEntry::AllianceHeaderEntry(v4);
      *this = (Rect)v4;
      AllianceHeaderEntry::decode((__int64)v4, a2);
      *((_QWORD *)this + 2) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      v7 = result;
      if ( (result & 0x80000000) != 0 )
      {
        *((_QWORD *)this + 1) = 0;
      }
      else
      {
        Debugger::doAssert((Debugger *)((int)result < 51), (bool)"Too many members in the alliance", v6);
        v8 = (_QWORD *)operator new(16);
        *v8 = 0;
        v8[1] = 0;
        *((_DWORD *)v8 + 2) = v7;
        if ( is_mul_ok(v7, 8u) )
          v9 = 8LL * v7;
        else
          v9 = -1;
        result = operator new[](v9);
        *v8 = result;
        *((_QWORD *)this + 1) = v8;
        if ( v7 >= 1 )
        {
          for ( i = 0; i < v7; ++i )
          {
            v11 = (AllianceMemberEntry *)operator new(96);
            AllianceMemberEntry::AllianceMemberEntry(v11);
            v12 = v11;
            LogicArrayList<AllianceMemberEntry *>::add(*((_QWORD *)this + 1), &v12);
            result = AllianceMemberEntry::decode(v11, a2);
          }
        }
      }
      return result;
    }

    Rect __fastcall AllianceFullEntry::getAllianceHeaderEntry(Rect *this)
    {
      return *this;
    }

    __int64 __fastcall AllianceFullEntry::getAllianceMembers(Rect *this)
    {
      return *((_QWORD *)this + 1);
    }

    __int64 __fastcall AllianceFullEntry::getAllianceDescription(Rect *this)
    {
      return *((_QWORD *)this + 2);
    }

    void __fastcall AllianceFullEntry::destruct(Rect *this)
    {
      void *v2; // x0
      void *v3; // x20
      int *v4; // x20
      __int64 v5; // x22
      void *v6; // x21
    
      v2 = (void *)*this;
      if ( v2 )
      {
        AllianceHeaderEntry::destruct(v2);
        if ( *this )
          operator delete(*(void **)this);
        *this = 0;
      }
      v3 = (void *)*((_QWORD *)this + 2);
      if ( v3 )
      {
        String::~String(*((String **)this + 2));
        operator delete(v3);
      }
      *((_QWORD *)this + 2) = 0;
      v4 = (int *)*((_QWORD *)this + 1);
      if ( v4 )
      {
        if ( v4[3] < 1 )
          goto LABEL_21;
        v5 = 0;
        do
        {
          v6 = *(void **)(*(_QWORD *)v4 + 8 * v5);
          if ( v6 )
          {
            AllianceMemberEntry::destruct(*(AllianceJoinRequestOkMessage **)(*(_QWORD *)v4 + 8 * v5));
            operator delete(v6);
            v4 = (int *)*((_QWORD *)this + 1);
          }
          ++v5;
        }
        while ( v5 < v4[3] );
        if ( v4 )
        {
    LABEL_21:
          if ( *(_QWORD *)v4 )
            operator delete[](*(_QWORD *)v4);
          operator delete(v4);
        }
        *((_QWORD *)this + 1) = 0;
      }
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      *this = 0;
    }

}; // end class AllianceFullEntry
