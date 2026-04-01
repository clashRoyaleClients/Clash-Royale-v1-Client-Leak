class Assert
{
public:

    _UNKNOWN **Assert::getAssertHandlerInstance()
    {
      unsigned __int8 v0; // w8
    
      v0 = atomic_load((unsigned __int8 *)&`guard variable for'Assert::getAssertHandlerInstance(void)::s_handler);
      if ( (v0 & 1) == 0
        && __cxa_guard_acquire((__guard *)&`guard variable for'Assert::getAssertHandlerInstance(void)::s_handler) )
      {
        Assert::getAssertHandlerInstance(void)::s_handler = Assert::defaultHandler;
        __cxa_guard_release((__guard *)&`guard variable for'Assert::getAssertHandlerInstance(void)::s_handler);
      }
      return &Assert::getAssertHandlerInstance(void)::s_handler;
    }

    __int64 __fastcall Assert::report(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
    {
      Assert::getAssertHandlerInstance();
      return Assert::getAssertHandlerInstance(void)::s_handler(a1, a2, a3, a4);
    }

    __int64 __fastcall Assert::reportFormatted(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            const char *a4,
            __int64 a5,
            __int64 a6,
            __int64 a7,
            __int64 a8,
            char a9)
    {
      char __str[1024]; // [xsp+8h] [xbp-438h] BYREF
    
      if ( a4 )
      {
        vsnprintf(__str, 0x400u, a4, &a9);
        Assert::getAssertHandlerInstance();
        return Assert::getAssertHandlerInstance(void)::s_handler(a1, __str, a2, a3);
      }
      else
      {
        Assert::getAssertHandlerInstance();
        return Assert::getAssertHandlerInstance(void)::s_handler(a1, 0, a2, a3);
      }
    }

    __int64 __fastcall Assert::defaultHandler(__int64 a1, const char *a2, __int64 a3, __int64 a4)
    {
      const char *v6; // x1
      _BYTE v8[24]; // [xsp+18h] [xbp-58h] BYREF
      _BYTE v9[24]; // [xsp+30h] [xbp-40h] BYREF
      _BYTE v10[24]; // [xsp+48h] [xbp-28h] BYREF
    
      String::format((String *)"[xAssert] %s(%d): Assert Failure: ", a2, a3, a4);
      if ( a1 )
      {
        String::format((String *)"'%s' ", v6, a1);
        String::operator+=(v10, v9);
        String::~String();
      }
      if ( a2 )
      {
        String::format((String *)"%s", v6, a2);
        String::operator+=(v10, v8);
        String::~String();
      }
      Debugger::print((Debugger *)v10, (const String *)v6);
      String::~String();
      return 1;
    }

}; // end class Assert
