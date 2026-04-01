class CoOpenStreamEntry
{
public:

    void __fastcall CoOpenStreamEntry::CoOpenStreamEntry(CoOpenStreamEntry *this)
    {
      StreamEntry *v1; // x0
    
      v1 = StreamEntry::StreamEntry(this);
      *((_QWORD *)v1 + 12) = 0;
      *(_QWORD *)v1 = off_10046AF50;
      *((_QWORD *)v1 + 10) = 0;
      *((_QWORD *)v1 + 11) = 0;
      *((_QWORD *)v1 + 8) = 0;
      *((_QWORD *)v1 + 9) = 0;
      *((_QWORD *)v1 + 7) = 0;
    }

    __int64 __fastcall CoOpenStreamEntry::encode(CancelMatchmakeDoneMessage *this, #1226 *a2)
    {
      __int64 v4; // x21
      const #1236 *v5; // x2
      __int64 v6; // x21
      int v7; // w21
      __int64 result; // x0
      __int64 v9; // x22
    
      StreamEntry::encode();
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 9));
      v4 = *((_QWORD *)this + 12);
      (*(void (__fastcall **)(#1226 *, bool))(*(_QWORD *)a2 + 48LL))(a2, v4 != 0);
      if ( v4 )
        ByteStreamHelper::encodeLogicLong(a2, *((#1226 **)this + 12), v5);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 17));
      if ( *((int *)this + 17) >= 1 )
      {
        v6 = 0;
        do
          DonatorEntry::encode(*(_QWORD *)(*((_QWORD *)this + 7) + 8 * v6++), a2);
        while ( v6 < *((int *)this + 17) );
      }
      v7 = *((_DWORD *)this + 23);
      result = (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, (unsigned int)v7);
      if ( v7 >= 1 )
      {
        v9 = 0;
        do
          result = LogicSpell::encode(*(AreaEffectObject ***)(*((_QWORD *)this + 10) + 8 * v9++), a2);
        while ( v7 != (_DWORD)v9 );
      }
      return result;
    }

    __int64 __fastcall CoOpenStreamEntry::decode(CancelMatchmakeDoneMessage *this, #1225 *a2, const char *a3)
    {
      const char *v5; // x2
      LogicLong *v6; // x21
      LogicLong *v7; // x2
      int v8; // w21
      int v9; // w24
      ReplayStreamItem *v10; // x23
      __int64 result; // x0
      int v12; // w21
      int v13; // w23
      char *v14; // x20
      LogicSpell *v15; // x22
      int v16; // w2
      LogicSpell *v17; // [xsp+0h] [xbp-40h] BYREF
      ReplayStreamItem *v18; // [xsp+8h] [xbp-38h] BYREF
    
      Debugger::doAssert((Debugger *)(*((_DWORD *)this + 17) == 0), (bool)"", a3);
      Debugger::doAssert((Debugger *)(*((_DWORD *)this + 23) == 0), (bool)"", v5);
      StreamEntry::decode(this, a2);
      *((_QWORD *)this + 9) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      if ( (*(unsigned int (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2) )
      {
        v6 = (LogicLong *)operator new(8);
        LogicLong::LogicLong(v6);
        *((_QWORD *)this + 12) = v6;
        ByteStreamHelper::decodeLogicLong(a2, v6, v7);
      }
      v8 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      if ( v8 >= 1 )
      {
        v9 = 0;
        do
        {
          v10 = (ReplayStreamItem *)operator new(48);
          DonatorEntry::DonatorEntry(v10);
          v18 = v10;
          DonatorEntry::decode(v10, a2);
          LogicArrayList<DonatorEntry *>::add((char *)this + 56, &v18);
          ++v9;
        }
        while ( v9 < v8 );
      }
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      v12 = result;
      if ( (int)result >= 1 )
      {
        v13 = 0;
        v14 = (char *)this + 80;
        do
        {
          v15 = (LogicSpell *)operator new(48);
          LogicSpell::LogicSpell(v15);
          v17 = v15;
          LogicSpell::decode(v15, a2, v16);
          result = LogicArrayList<LogicSpell *>::add((__int64)v14, (__int64 *)&v17);
          ++v13;
        }
        while ( v13 < v12 );
      }
      return result;
    }

    void __fastcall CoOpenStreamEntry::destruct(CancelMatchmakeDoneMessage *this)
    {
      int v2; // w8
      __int64 i; // x21
      __int64 v4; // x9
      _QWORD *v5; // x20
      __int64 v6; // x0
      int v7; // w8
      __int64 j; // x21
      __int64 v9; // x9
      void *v10; // x20
      void *v11; // x20
      void *v12; // x0
    
      StreamEntry::destruct(this);
      v2 = *((_DWORD *)this + 17);
      if ( v2 >= 1 )
      {
        for ( i = 0; i < v2; ++i )
        {
          v4 = *((_QWORD *)this + 7);
          v5 = *(_QWORD **)(v4 + 8 * i);
          if ( v5 )
          {
            DonatorEntry::destruct(*(DonatorEntry **)(v4 + 8 * i));
            v6 = v5[3];
            if ( v6 )
              operator delete[](v6);
            operator delete(v5);
            v2 = *((_DWORD *)this + 17);
          }
        }
      }
      v7 = *((_DWORD *)this + 23);
      if ( v7 >= 1 )
      {
        for ( j = 0; j < v7; ++j )
        {
          v9 = *((_QWORD *)this + 10);
          v10 = *(void **)(v9 + 8 * j);
          if ( v10 )
          {
            LogicSpell::destruct(*(TextField **)(v9 + 8 * j));
            operator delete(v10);
            v7 = *((_DWORD *)this + 23);
          }
        }
      }
      v11 = (void *)*((_QWORD *)this + 9);
      if ( v11 )
      {
        String::~String();
        operator delete(v11);
      }
      *((_QWORD *)this + 9) = 0;
      v12 = (void *)*((_QWORD *)this + 12);
      if ( v12 )
        operator delete(v12);
      *((_DWORD *)this + 23) = 0;
      *((_DWORD *)this + 17) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 9) = 0;
    }

    _QWORD *__fastcall CoOpenStreamEntry::~CoOpenStreamEntry(_QWORD *a1)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
    
      *a1 = off_10046AF50;
      v3 = a1 + 10;
      v2 = a1[10];
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      v4 = a1[7];
      if ( v4 )
        operator delete[](v4);
      a1[7] = 0;
      a1[8] = 0;
      return a1;
    }

    void __fastcall CoOpenStreamEntry::~CoOpenStreamEntry(_QWORD *a1)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
    
      *a1 = off_10046AF50;
      v3 = a1 + 10;
      v2 = a1[10];
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      v4 = a1[7];
      if ( v4 )
        operator delete[](v4);
      operator delete(a1);
    }

    __int64 CoOpenStreamEntry::getStreamEntryType()
    {
      return 6;
    }

}; // end class CoOpenStreamEntry
