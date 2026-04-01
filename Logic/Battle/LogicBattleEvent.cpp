class LogicBattleEvent
{
public:

    void __fastcall LogicBattleEvent::LogicBattleEvent(LogicBattleEvent *this, const #1236 *a2)
    {
      _QWORD *v4; // x21
      _QWORD *v5; // x21
      _QWORD *v6; // x21
    
      *(_QWORD *)this = off_100460C08;
      LogicLong::LogicLong((LogicBattleEvent *)((char *)this + 8));
      *((_BYTE *)this + 16) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 3) = 0;
      v4 = (_QWORD *)operator new(16);
      *v4 = 0;
      v4[1] = 0;
      *((_DWORD *)v4 + 2) = 4;
      *v4 = operator new[](16);
      *((_QWORD *)this + 5) = v4;
      v5 = (_QWORD *)operator new(16);
      *v5 = 0;
      v5[1] = 0;
      *((_DWORD *)v5 + 2) = 4;
      *v5 = operator new[](16);
      *((_QWORD *)this + 4) = v5;
      v6 = (_QWORD *)operator new(16);
      *v6 = 0;
      v6[1] = 0;
      *((_DWORD *)v6 + 2) = 1;
      *v6 = operator new[](4);
      *((_QWORD *)this + 3) = v6;
      *((_DWORD *)this + 2) = *(_DWORD *)a2;
      *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    }

    // attributes: thunk
    void __fastcall LogicBattleEvent::LogicBattleEvent(LogicBattleEvent *this, const #1236 *a2)
    {
      __ZN16LogicBattleEventC2ERK9LogicLong(this, a2);
    }

    void __fastcall LogicBattleEvent::LogicBattleEvent(LogicBattleEvent *this)
    {
      _QWORD *v2; // x20
      _QWORD *v3; // x20
      _QWORD *v4; // x20
    
      *(_QWORD *)this = off_100460C08;
      LogicLong::LogicLong((LogicBattleEvent *)((char *)this + 8));
      *((_BYTE *)this + 16) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 3) = 0;
      v2 = (_QWORD *)operator new(16);
      *v2 = 0;
      v2[1] = 0;
      *((_DWORD *)v2 + 2) = 4;
      *v2 = operator new[](16);
      *((_QWORD *)this + 5) = v2;
      v3 = (_QWORD *)operator new(16);
      *v3 = 0;
      v3[1] = 0;
      *((_DWORD *)v3 + 2) = 8;
      *v3 = operator new[](32);
      *((_QWORD *)this + 4) = v3;
      v4 = (_QWORD *)operator new(16);
      *v4 = 0;
      v4[1] = 0;
      *((_DWORD *)v4 + 2) = 1;
      *v4 = operator new[](4);
      *((_QWORD *)this + 3) = v4;
    }

    // attributes: thunk
    void __fastcall LogicBattleEvent::LogicBattleEvent(LogicBattleEvent *this)
    {
      __ZN16LogicBattleEventC2Ev(this);
    }

    void __fastcall LogicBattleEvent::destruct(Projectile *this)
    {
      _QWORD *v2; // x20
      _QWORD *v3; // x20
      _QWORD *v4; // x20
    
      v2 = (_QWORD *)*((_QWORD *)this + 4);
      if ( v2 )
      {
        if ( *v2 )
          operator delete[](*v2);
        operator delete(v2);
      }
      *((_QWORD *)this + 4) = 0;
      v3 = (_QWORD *)*((_QWORD *)this + 5);
      if ( v3 )
      {
        if ( *v3 )
          operator delete[](*v3);
        operator delete(v3);
      }
      *((_QWORD *)this + 5) = 0;
      v4 = (_QWORD *)*((_QWORD *)this + 3);
      if ( v4 )
      {
        if ( *v4 )
          operator delete[](*v4);
        operator delete(v4);
      }
      *((_BYTE *)this + 16) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 3) = 0;
    }

    __int64 __fastcall LogicBattleEvent::encode(Projectile *this, #1226 *a2)
    {
      const #1236 *v4; // x2
    
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, (unsigned int)*((char *)this + 16));
      ByteStreamHelper::encodeLogicLong(a2, (Projectile *)((char *)this + 8), v4);
      ByteStreamHelper::encodeIntList(a2, *((_QWORD *)this + 5));
      ByteStreamHelper::encodeIntList(a2, *((_QWORD *)this + 4));
      return ByteStreamHelper::encodeIntList(a2, *((_QWORD *)this + 3));
    }

    __int64 __fastcall LogicBattleEvent::decode(Projectile *this, #1225 *a2)
    {
      LogicLong *v4; // x2
    
      *(_DWORD *)(*((_QWORD *)this + 5) + 12LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 3) + 12LL) = 0;
      *((_BYTE *)this + 16) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 208LL))(a2);
      ByteStreamHelper::decodeLogicLong(a2, (Projectile *)((char *)this + 8), v4);
      ByteStreamHelper::decodeIntList(a2, *((_QWORD *)this + 5));
      ByteStreamHelper::decodeIntList(a2, *((_QWORD *)this + 4));
      return ByteStreamHelper::decodeIntList(a2, *((_QWORD *)this + 3));
    }

    #1234 *__fastcall LogicBattleEvent::saveJSON(Projectile *this)
    {
      #1234 *v2; // x19
      const #1236 *v3; // x3
    
      v2 = (#1234 *)operator new(40);
      LogicJSONObject::LogicJSONObject(v2, 4);
      LogicJSONHelper::setInt((__int64)v2, (#1234 *)&JSON_TYPE, (const String *)(unsigned int)*((char *)this + 16));
      LogicJSONHelper::setLogicLong(v2, &JSON_ID, (const String *)((char *)this + 8), v3);
      LogicJSONHelper::setIntArray((__int64)v2, (__int64)&JSON_TICKS, *((_QWORD *)this + 5));
      LogicJSONHelper::setIntArray((__int64)v2, (__int64)&JSON_COORDS, *((_QWORD *)this + 4));
      LogicJSONHelper::setIntArray((__int64)v2, (__int64)&JSON_PARAMS, *((_QWORD *)this + 3));
      return v2;
    }

    __int64 __fastcall LogicBattleEvent::loadJSON(Projectile *this, #1234 *a2)
    {
      #1236 *v4; // x3
    
      *(_DWORD *)(*((_QWORD *)this + 5) + 12LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 3) + 12LL) = 0;
      *((_BYTE *)this + 16) = (unsigned __int8)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_TYPE, 0);
      LogicJSONHelper::getLogicLong(a2, &JSON_ID, (const String *)((char *)this + 8), v4);
      LogicJSONHelper::getIntArray((__int64)a2, (__int64)&JSON_TICKS, *((const char **)this + 5));
      LogicJSONHelper::getIntArray((__int64)a2, (__int64)&JSON_COORDS, *((const char **)this + 4));
      return LogicJSONHelper::getIntArray((__int64)a2, (__int64)&JSON_PARAMS, *((const char **)this + 3));
    }

    __int64 __fastcall LogicBattleEvent::getAccountId(Projectile *this)
    {
      return (__int64)this + 8;
    }

    __int64 __fastcall LogicBattleEvent::setType(__int64 this, char a2)
    {
      *(_BYTE *)(this + 16) = a2;
      return this;
    }

    __int64 __fastcall LogicBattleEvent::getType(Projectile *this)
    {
      return (unsigned int)*((char *)this + 16);
    }

    __int64 __fastcall LogicBattleEvent::setTick(Projectile *this, const char *a2)
    {
      __int64 v3; // x0
      int v5; // [xsp+Ch] [xbp-14h] BYREF
    
      v5 = (int)a2;
      if ( *(int *)(*((_QWORD *)this + 4) + 12LL) >= 1 )
      {
        Debugger::warning((__siginfo *)"replay event: setting tick will clear old ticks and coords", a2);
        *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) = 0;
      }
      v3 = *((_QWORD *)this + 5);
      *(_DWORD *)(v3 + 12) = 0;
      return LogicArrayList<int>::add(v3, &v5);
    }

    __int64 __fastcall LogicBattleEvent::getTick(Projectile *this, int a2)
    {
      __int64 v2; // x8
    
      v2 = *((_QWORD *)this + 5);
      if ( *(int *)(v2 + 12) < 1 )
        return 0xFFFFFFFFLL;
      else
        return *(unsigned int *)(*(_QWORD *)v2 + 4LL * a2);
    }

    __int64 __fastcall LogicBattleEvent::addCoord(__int64 this, const char *a2, int a3, int a4)
    {
      __int64 v4; // x19
      __int64 v5; // x8
      int v6; // w8
      int v7; // w9
      bool v8; // cc
      int v9; // [xsp+4h] [xbp-1Ch] BYREF
      int v10; // [xsp+8h] [xbp-18h] BYREF
      int v11; // [xsp+Ch] [xbp-14h] BYREF
    
      v4 = this;
      v10 = a3;
      v11 = (int)a2;
      v9 = a4;
      v5 = *(_QWORD *)(this + 32);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 12);
        if ( v6 <= 511 )
        {
          v7 = *(_DWORD *)(*(_QWORD *)(this + 40) + 12LL);
          if ( v6 )
            v8 = 1;
          else
            v8 = v7 < 1;
          if ( v8 )
          {
            if ( v7 < v6 >> 1 )
              Debugger::error((__siginfo *)"replay event: ticks array should never be smaller than coords array", a2);
          }
          else
          {
            Debugger::warning((__siginfo *)"replay event: clearing ticks to keep array sizes consistent", a2);
            *(_DWORD *)(*(_QWORD *)(v4 + 40) + 12LL) = 0;
          }
          LogicArrayList<int>::add(*(_QWORD *)(v4 + 32), &v11);
          LogicArrayList<int>::add(*(_QWORD *)(v4 + 32), &v10);
          return LogicArrayList<int>::add(*(_QWORD *)(v4 + 40), &v9);
        }
      }
      return this;
    }

    __int64 __fastcall LogicBattleEvent::getNumCoords(Projectile *this)
    {
      return (unsigned int)(*(int *)(*((_QWORD *)this + 4) + 12LL) >> 1);
    }

    __int64 __fastcall LogicBattleEvent::getCoordX(Projectile *this, int a2)
    {
      return *(unsigned int *)(**((_QWORD **)this + 4) + 8LL * a2);
    }

    __int64 __fastcall LogicBattleEvent::getCoordY(Projectile *this, int a2)
    {
      return *(unsigned int *)(**((_QWORD **)this + 4) + 4LL * ((2 * a2) | 1));
    }

    __int64 __fastcall LogicBattleEvent::getParamCount(Projectile *this)
    {
      return *(unsigned int *)(*((_QWORD *)this + 3) + 12LL);
    }

    __int64 __fastcall LogicBattleEvent::getParam(Projectile *this, int a2)
    {
      return *(unsigned int *)(**((_QWORD **)this + 3) + 4LL * a2);
    }

    __int64 __fastcall LogicBattleEvent::setParam(Projectile *this, int a2, int a3)
    {
      const String *v6; // x1
      __int64 result; // x0
      int v8; // [xsp+Ch] [xbp-54h] BYREF
      String v9; // [xsp+10h] [xbp-50h] BYREF
      String v10; // [xsp+28h] [xbp-38h] BYREF
    
      if ( a2 > 0 )
      {
        String::valueOf(&v9, (String *)1, a2);
        operator+(&v10, "logic battle event: max params allowed:", &v9);
        Debugger::error((Debugger *)&v10, v6);
      }
      while ( 1 )
      {
        result = *((_QWORD *)this + 3);
        if ( *(_DWORD *)(result + 12) > a2 )
          break;
        v8 = 0;
        LogicArrayList<int>::add(result, &v8);
      }
      *(_DWORD *)(*(_QWORD *)result + 4LL * a2) = a3;
      return result;
    }

    void __fastcall LogicBattleEvent::~LogicBattleEvent(Projectile *this)
    {
      *(_QWORD *)this = off_100460C08;
      *((_QWORD *)this + 1) = 0;
    }

    // attributes: thunk
    void __fastcall LogicBattleEvent::~LogicBattleEvent(Projectile *this)
    {
      operator delete(this);
    }

}; // end class LogicBattleEvent
