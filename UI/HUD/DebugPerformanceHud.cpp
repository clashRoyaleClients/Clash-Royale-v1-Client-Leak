class DebugPerformanceHud
{
public:

    __int64 __fastcall DebugPerformanceHud::getInstance(MovieClipFrame *this)
    {
      return DebugPerformanceHud::sm_pInstance;
    }

    __int64 __fastcall DebugPerformanceHud::setBounds(__int64 result, unsigned int a2, int a3, int a4, char a5)
    {
      _DWORD *v5; // x8
    
      v5 = (_DWORD *)(result + 4LL * a2);
      *v5 = a3;
      v5[12] = a4;
      *(_BYTE *)(result + a2 + 96) = a5;
      return result;
    }

    __int64 __fastcall DebugPerformanceHud::incrementValue(__int64 result, int a2)
    {
      if ( DebugPerformanceHud::sm_enabled )
      {
        DebugPerformanceHud::sm_counterValue[(unsigned int)result] += a2;
        DebugPerformanceHud::sm_counterActive[(unsigned int)result] = 1;
      }
      return result;
    }

    __int64 __fastcall DebugPerformanceHud::setValue(__int64 result, int a2)
    {
      if ( DebugPerformanceHud::sm_enabled )
      {
        DebugPerformanceHud::sm_counterValue[(unsigned int)result] = a2;
        DebugPerformanceHud::sm_counterActive[(unsigned int)result] = 1;
      }
      return result;
    }

    void __fastcall DebugPerformanceHud::addGenID(unsigned int a1, __int64 a2)
    {
      char *v2; // x0
      __int64 v3; // x8
      __int64 v4; // x9
      int v6; // w10
      String v7; // [xsp+8h] [xbp-48h] BYREF
      String v8; // [xsp+20h] [xbp-30h] BYREF
      int v9; // [xsp+3Ch] [xbp-14h]
    
      v9 = a2;
      if ( (_DWORD)a2 )
      {
        v2 = (char *)&sm_values + 16 * a1;
        v3 = *((int *)v2 + 3);
        v4 = 4LL * ((int)v3 - 1);
        do
        {
          if ( v3-- < 1 )
          {
            LogicArrayList<unsigned int>::add();
            return;
          }
          v6 = *(_DWORD *)(*(_QWORD *)v2 + v4);
          v4 -= 4;
        }
        while ( v6 != (_DWORD)a2 );
        if ( DebugPerformanceHud::sm_enabled )
        {
          String::format((String *)"DebugPerformanceHud attempting to add id %d more than once", (__int64)&v7, a2);
          Debugger::warning(&v7);
          String::~String((__int64)&v7);
        }
      }
      else if ( DebugPerformanceHud::sm_enabled )
      {
        String::format((String *)"DebugPerformanceHud attempting to add id 0", (__int64)&v8);
        Debugger::warning(&v8);
        String::~String((__int64)&v8);
      }
    }

    void __fastcall DebugPerformanceHud::delGenID(unsigned int a1, __int64 a2)
    {
      char *v2; // x0
      __int64 v3; // x9
      __int64 v4; // x8
      String *v5; // x0
      String v6; // [xsp+10h] [xbp-40h] BYREF
      String v7; // [xsp+28h] [xbp-28h] BYREF
    
      if ( !(_DWORD)a2 )
      {
        if ( !DebugPerformanceHud::sm_enabled )
          return;
        String::format((String *)"DebugPerformanceHud attempting to remove id 0", (__int64)&v7);
        Debugger::warning(&v7);
        v5 = &v7;
        goto LABEL_13;
      }
      v2 = (char *)&sm_values + 16 * a1;
      v3 = *((int *)v2 + 3);
      if ( (int)v3 >= 1 )
      {
        v4 = 0;
        while ( *(_DWORD *)(*(_QWORD *)v2 + 4 * v4) != (_DWORD)a2 )
        {
          if ( ++v4 >= v3 )
            goto LABEL_11;
        }
        if ( (_DWORD)v4 != -1 )
        {
          LogicArrayList<unsigned int>::remove();
          return;
        }
      }
    LABEL_11:
      if ( DebugPerformanceHud::sm_enabled )
      {
        String::format((String *)"DebugPerformanceHud attempting to remove id %d more than once", (__int64)&v6, a2);
        Debugger::warning(&v6);
        v5 = &v6;
    LABEL_13:
        String::~String((__int64)v5);
      }
    }

    String *__fastcall DebugPerformanceHud::setName(unsigned int a1, String *a2)
    {
      return String::operator=((String *)&s_names + a1, a2);
    }

    __int64 __fastcall DebugPerformanceHud::isOverdrawEnabled(MovieClipFrame *this)
    {
      return *((unsigned __int8 *)this + 376);
    }

}; // end class DebugPerformanceHud
