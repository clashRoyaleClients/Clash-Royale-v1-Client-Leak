class LogicTimer
{
public:

    void __fastcall LogicTimer::LogicTimer(LogicTimer *this)
    {
      *(_QWORD *)this = 0;
      *((_DWORD *)this + 2) = -1;
    }

    _DWORD *__fastcall LogicTimer::startTimer(_DWORD *this, int a2, int a3)
    {
      *this = 20 * a2;
      *(this + 1) = 20 * a2;
      if ( *(this + 2) == -1 )
        *(this + 2) = a3 + a2;
      return this;
    }

    __int64 __fastcall LogicTimer::destruct(__int64 this)
    {
      *(_QWORD *)this = 0;
      *(_DWORD *)(this + 8) = -1;
      return this;
    }

    bool __fastcall LogicTimer::tick(LogicChestOrderData *this)
    {
      int v1; // w8
      int v2; // w9
      bool v3; // cc
      _BOOL8 v4; // x8
    
      v1 = *(_DWORD *)this;
      v2 = *(_DWORD *)this - 1;
      if ( *(int *)this < 1 )
        return 0;
      v3 = v1 < 2;
      v4 = v1 < 2;
      if ( v3 )
        v2 = 0;
      *(_DWORD *)this = v2;
      return v4;
    }

    __int64 __fastcall LogicTimer::getRemainingSeconds(LogicChestOrderData *this, __int64 a2, int a3)
    {
      if ( *(int *)this < 1 )
        return 0;
      else
        return LogicMath::max((LogicMath *)(unsigned int)((*(_DWORD *)this + 19) / 20), 1, a3);
    }

    bool __fastcall LogicTimer::fastForward(LogicChestOrderData *this, NotificationBadge *a2, int a3)
    {
      _BOOL8 result; // x0
      int SecondsInTicks; // w0
      int v6; // w8
    
      if ( a3 == -1 || *((_DWORD *)this + 2) == -1 )
      {
        SecondsInTicks = LogicTime::getSecondsInTicks(a2);
        if ( *(int *)this < 1 )
        {
          return 0;
        }
        else
        {
          v6 = *(_DWORD *)this - SecondsInTicks;
          result = v6 < 1;
          if ( v6 < 1 )
            v6 = 0;
          *(_DWORD *)this = v6;
        }
      }
      else
      {
        LogicTimer::adjustEndSubtick(this, a3);
        return *(_DWORD *)this < 1;
      }
      return result;
    }

    void __fastcall LogicTimer::adjustEndSubtick(LogicChestOrderData *this, int a2, const char *a3)
    {
      int v4; // w8
    
      if ( *((_DWORD *)this + 2) - a2 <= 0
        || (*(_DWORD *)this = 20 * (*((_DWORD *)this + 2) - a2),
            Debugger::doAssert((Debugger *)1, (bool)"", a3),
            (*(_DWORD *)this & 0x80000000) != 0) )
      {
        *(_DWORD *)this = 0;
      }
      else
      {
        v4 = *((_DWORD *)this + 1);
        if ( *(_DWORD *)this > v4 )
          *(_DWORD *)this = v4;
      }
    }

    bool __fastcall LogicTimer::isFinished(LogicChestOrderData *this)
    {
      return *(_DWORD *)this < 1;
    }

    __int64 __fastcall LogicTimer::encode(unsigned int *a1, __int64 a2)
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, a1[1]);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, a1[2]);
    }

    __int64 __fastcall LogicTimer::decode(LogicChestOrderData *this, #1225 *a2)
    {
      __int64 result; // x0
    
      *(_DWORD *)this = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 1) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 2) = result;
      return result;
    }

}; // end class LogicTimer
