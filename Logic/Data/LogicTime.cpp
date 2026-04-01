class LogicTime
{
public:

    void __fastcall LogicTime::LogicTime(LogicTime *this)
    {
      *((_DWORD *)this + 14) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      *(_QWORD *)this = 0;
      *((_DWORD *)this + 3) = LogicTimeUtil::getCurrentTime(this);
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 4) = 0;
      *((_DWORD *)this + 8) = 0;
      *((_DWORD *)this + 9) = 0;
      *(_QWORD *)((char *)this + 44) = 1000;
    }

    __int64 __fastcall LogicTime::destruct(__int64 this)
    {
      *(_DWORD *)(this + 56) = 0;
      *(_QWORD *)(this + 40) = 0;
      *(_QWORD *)(this + 48) = 0;
      *(_QWORD *)(this + 24) = 0;
      *(_QWORD *)(this + 32) = 0;
      *(_QWORD *)(this + 8) = 0;
      *(_QWORD *)(this + 16) = 0;
      *(_QWORD *)this = 0;
      return this;
    }

    _DWORD *__fastcall LogicTime::increaseTick(_DWORD *this)
    {
      ++*this;
      ++*(this + 4);
      return this;
    }

    __int64 __fastcall LogicTime::getSecondsInTicks(NotificationBadge *this)
    {
      return (unsigned int)(20 * (_DWORD)this);
    }

    bool __fastcall LogicTime::isClientOffSync(NotificationBadge *this)
    {
      return *(_DWORD *)this > *((_DWORD *)this + 1) + 60;
    }

    __int64 __fastcall LogicTime::setServerTick(NotificationBadge *this, int a2, int a3)
    {
      int v6; // w22
      int CurrentTime; // w0
      int v8; // w2
      int v9; // w3
      int v10; // w21
      int v11; // w0
      int v12; // w1
      int v13; // w2
      __int64 result; // x0
    
      v6 = *((_DWORD *)this + 3);
      CurrentTime = LogicTimeUtil::getCurrentTime(this);
      *((_DWORD *)this + 3) = CurrentTime;
      if ( a3 )
        v10 = 0;
      else
        v10 = CurrentTime - v6;
      if ( (v10 & 0x80000000) == 0 )
      {
        v11 = v10;
        if ( *((_DWORD *)this + 6) )
          v11 = LogicMath::min((LogicMath *)*((unsigned int *)this + 6), v10, v8);
        *((_DWORD *)this + 6) = v11;
        *((_DWORD *)this + 5) = LogicMath::max((LogicMath *)*((unsigned int *)this + 5), v10, v8);
        *((_DWORD *)this + 7) = v10;
      }
      *((_DWORD *)this + 1) = a2 + 19;
      if ( (unsigned int)(v10 - 250) < 0x2EF )
      {
        v12 = a2 - 1;
        v13 = a2 + 1;
      }
      else
      {
        v12 = a2 - 5;
        v13 = a2 + 5;
      }
      result = LogicMath::clamp((#1237 *)*((unsigned int *)this + 4), v12, v13, v9);
      *((_DWORD *)this + 4) = result;
      *((_DWORD *)this + 14) = result - a2;
      *((_DWORD *)this + 13) = *(_DWORD *)this + ~(_DWORD)result;
      return result;
    }

    __int64 __fastcall LogicTime::update(NotificationBadge *this, float a2, float a3, __int64 a4, int a5)
    {
      __int64 v6; // x20
      int v7; // w8
      int v8; // w9
      _DWORD *v9; // x21
      unsigned int v10; // w10
      int v11; // w0
      int v12; // w2
      float v13; // s0
      bool v14; // cc
    
      v6 = (unsigned int)(int)(a2 * 1000.0 / 50.0);
      if ( (int)v6 <= 0 )
      {
        v9 = (_DWORD *)((char *)this + 4);
        v8 = *((_DWORD *)this + 1);
        v7 = *(_DWORD *)this;
      }
      else
      {
        v7 = *(_DWORD *)this;
        v9 = (_DWORD *)((char *)this + 4);
        v8 = *((_DWORD *)this + 1);
        if ( *(_DWORD *)this + (int)v6 <= v8 + 60 )
          v10 = (int)(a2 * 1000.0 / 50.0);
        else
          v10 = v8 + 60 - *(_DWORD *)this;
        if ( v8 )
          v6 = v10;
        else
          v6 = 0;
      }
      *((float *)this + 12) = *((float *)this + 12) + a3;
      v11 = LogicMath::min((LogicMath *)*((unsigned int *)this + 11), v8 - (int)v6 - v7, a5);
      *((_DWORD *)this + 11) = v11;
      v13 = *((float *)this + 12);
      if ( v11 )
        v14 = 1;
      else
        v14 = v13 <= 10.0;
      if ( v14 )
      {
        if ( v13 > 20.0 )
        {
          if ( v11 >= 2 )
            *((_DWORD *)this + 10) = LogicMath::min((LogicMath *)(unsigned int)(*((_DWORD *)this + 10) + 1), 1, v12);
          *(_QWORD *)((char *)this + 44) = 1000;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = LogicMath::max((LogicMath *)(unsigned int)(*((_DWORD *)this + 10) - 1), -6, v12);
        *(_QWORD *)((char *)this + 44) = 1000;
      }
      if ( *(_DWORD *)this >= *v9 )
        ++*((_DWORD *)this + 8);
      ++*((_DWORD *)this + 9);
      return v6;
    }

    long double __fastcall LogicTime::updateModifiedDeltaTime(
            NotificationBadge *this,
            long double a2,
            __int64 a3,
            __int64 a4,
            int a5)
    {
      int v7; // w20
      int v8; // w0
      long double v9; // q0
    
      v7 = *((_DWORD *)this + 13);
      if ( v7 )
      {
        v8 = LogicMath::clamp((#1237 *)(unsigned int)(1000 - 33 * v7), 750, 2500, a5);
        *((_DWORD *)this + 2) = v8;
        *(float *)&a2 = (float)((float)v8 * *(float *)&a2) / 1000.0;
        if ( v7 < 0 )
        {
          *(float *)&v9 = (float)(-50 * v7) / 1000.0;
          if ( *(float *)&v9 < *(float *)&a2 )
            return v9;
        }
      }
      else
      {
        *((_DWORD *)this + 2) = 1000;
      }
      return a2;
    }

    __int64 __fastcall LogicTime::getDiffToPreferredTick(NotificationBadge *this)
    {
      return *((unsigned int *)this + 13);
    }

    __int64 __fastcall LogicTime::getMaxTick(NotificationBadge *this)
    {
      return *((unsigned int *)this + 1);
    }

    __int64 __fastcall LogicTime::encode(unsigned int *a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *a1);
    }

    LogicTimeUtil *__fastcall LogicTime::decode(NotificationBadge *this, #1225 *a2, int a3)
    {
      LogicTimeUtil *result; // x0
    
      result = (LogicTimeUtil *)(*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)this = (_DWORD)result;
      if ( a3 )
      {
        *((_DWORD *)this + 4) = (_DWORD)result;
        *((_DWORD *)this + 1) = (_DWORD)result + 19;
        *((_DWORD *)this + 13) = 0;
        *((_DWORD *)this + 8) = 0;
        *((_DWORD *)this + 9) = 0;
        result = (LogicTimeUtil *)LogicTimeUtil::getCurrentTime(result);
        *((_DWORD *)this + 3) = (_DWORD)result;
      }
      return result;
    }

    __int64 __fastcall LogicTime::getTimeMultiplier(NotificationBadge *this)
    {
      return *((unsigned int *)this + 2);
    }

}; // end class LogicTime
