class LogicServerEventCollector
{
public:

    void __fastcall LogicServerEventCollector::LogicServerEventCollector(LogicServerEventCollector *this, int a2, int a3)
    {
      LogicSpellListener::LogicSpellListener(this);
      *(_QWORD *)this = off_10045F240;
      LogicLong::LogicLong((LogicServerEventCollector *)((char *)this + 36));
      *((_DWORD *)this + 8) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 9) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 7) = 0;
      *((_DWORD *)this + 9) = a2;
      *((_DWORD *)this + 10) = a3;
    }

    __int64 __fastcall LogicServerEventCollector::destruct(std::ios_base::Init *this)
    {
      __int64 result; // x0
    
      result = LogicSpellListener::destruct(this);
      *((_DWORD *)this + 15) = 0;
      *((_DWORD *)this + 19) = 0;
      *((_DWORD *)this + 10) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      return result;
    }

    __int64 __fastcall LogicServerEventCollector::increaseServerEvent(__int64 this, int a2, int a3)
    {
      *(_DWORD *)(this + 4LL * a2 + 8) += a3;
      return this;
    }

    __int64 __fastcall LogicServerEventCollector::getServerEventCount(std::ios_base::Init *this, int a2)
    {
      return *((unsigned int *)this + a2 + 2);
    }

    __int64 __fastcall LogicServerEventCollector::increaseDamageCount(
            std::ios_base::Init *this,
            const #1236 *a2,
            __int64 a3)
    {
      int v5; // w0
    
      v5 = LogicLong::equals(a2, (char *)this + 36);
      return (*(__int64 (__fastcall **)(std::ios_base::Init *, bool, __int64))(*(_QWORD *)this + 24LL))(this, v5 != 0, a3);
    }

    __int64 __fastcall LogicServerEventCollector::getServerEventOwnerAccountId(std::ios_base::Init *this)
    {
      return (__int64)this + 36;
    }

    _QWORD *__fastcall LogicServerEventCollector::addServerEventModifier(std::ios_base::Init *this, const TextField *a2)
    {
      _QWORD *result; // x0
      __int64 v5; // x8
      __int64 i; // x9
      bool v7; // cc
      const TextField *v8; // x10
      __int64 v9; // x8
      __int64 j; // x9
      const TextField *v11; // x10
      const TextField *v12; // [xsp+8h] [xbp-18h] BYREF
    
      v12 = a2;
      result = (_QWORD *)LogicSpell::getServerEventOwnerAccountId(a2);
      if ( result )
      {
        if ( (unsigned int)LogicLong::equals(result, (char *)this + 36) )
        {
          result = (_QWORD *)((char *)this + 64);
          v5 = *((int *)this + 19);
          for ( i = 8LL * ((int)v5 - 1); ; i -= 8 )
          {
            v7 = v5-- < 1;
            if ( v7 )
              break;
            v8 = *(const TextField **)(*result + i);
            if ( v8 == a2 )
              return result;
          }
        }
        else
        {
          result = (_QWORD *)((char *)this + 48);
          v9 = *((int *)this + 15);
          for ( j = 8LL * ((int)v9 - 1); ; j -= 8 )
          {
            v7 = v9-- < 1;
            if ( v7 )
              break;
            v11 = *(const TextField **)(*result + j);
            if ( v11 == a2 )
              return result;
          }
        }
        return (_QWORD *)LogicArrayList<LogicSpell const*>::add((__int64)result, (__int64 *)&v12);
      }
      return result;
    }

    void __fastcall LogicServerEventCollector::~LogicServerEventCollector(std::ios_base::Init *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
    
      *(_QWORD *)this = off_10045F240;
      v3 = (_QWORD *)((char *)this + 64);
      v2 = *((_QWORD *)this + 8);
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      v4 = *((_QWORD *)this + 6);
      if ( v4 )
        operator delete[](v4);
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 7) = 0;
      *(_QWORD *)((char *)this + 36) = 0;
    }

    void __fastcall LogicServerEventCollector::~LogicServerEventCollector(std::ios_base::Init *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
    
      *(_QWORD *)this = off_10045F240;
      v3 = (_QWORD *)((char *)this + 64);
      v2 = *((_QWORD *)this + 8);
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      v4 = *((_QWORD *)this + 6);
      if ( v4 )
        operator delete[](v4);
      operator delete(this);
    }

}; // end class LogicServerEventCollector
