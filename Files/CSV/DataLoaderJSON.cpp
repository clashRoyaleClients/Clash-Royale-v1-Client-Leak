class DataLoaderJSON
{
public:

    __int64 __fastcall DataLoaderJSON::~DataLoaderJSON(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
    
      *(_QWORD *)a1 = off_1004754F0;
      v2 = *(_QWORD *)(a1 + 8);
      if ( v2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
        v3 = *(_QWORD *)(a1 + 8);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        *(_QWORD *)(a1 + 8) = 0;
      }
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      return a1;
    }

    __int64 __fastcall DataLoaderJSON::~DataLoaderJSON(__int64 a1)
    {
      DataLoaderJSON::~DataLoaderJSON(a1);
      return a1;
    }

    void __fastcall DataLoaderJSON::~DataLoaderJSON(void *a1)
    {
      DataLoaderJSON::~DataLoaderJSON((__int64)a1);
      operator delete(a1);
    }

    void __fastcall DataLoaderJSON::load(__int64 a1, const char *a2, __int64 a3)
    {
      xTimer *NativeTime; // x20
      const char *v7; // x1
      FILE *v8; // x22
      const String *v9; // x1
      __int64 v10; // x0
      size_t v11; // x23
      void *v12; // x24
      const String *v13; // x1
      uint64_t v14; // x0
      unsigned __int64 v15; // x2
      long double PassedTimeMs; // q0
      const char *v17; // x1
      const String *v18; // x1
      _BYTE v19[24]; // [xsp+10h] [xbp-80h] BYREF
      String v20; // [xsp+28h] [xbp-68h] BYREF
      _BYTE v21[24]; // [xsp+40h] [xbp-50h] BYREF
      FILE *v22; // [xsp+58h] [xbp-38h] BYREF
    
      NativeTime = (xTimer *)xTimer::getNativeTime();
      v8 = fopen(a2, "rb");
      v22 = v8;
      if ( !v8 )
      {
        String::format((String *)"File not found %s", v7, a3);
        Debugger::error((Debugger *)v21, v9);
      }
      LODWORD(v10) = TitanInputFile::getSize(&v22);
      v11 = (int)v10;
      if ( (int)v10 < 0LL )
        v10 = -1;
      else
        v10 = (int)v10;
      v12 = (void *)operator new[](v10);
      fread(v12, 1u, v11, v8);
      fclose(v8);
      v22 = 0;
      String::String(&v20, (const char *)v12, v11);
      operator delete[](v12);
      *(_DWORD *)(a1 + 16) = v20.m_length;
      *(_QWORD *)(a1 + 8) = LogicJSONParser::parseJSONNode((LogicJSONParser *)&v20, v13);
      v14 = xTimer::getNativeTime();
      PassedTimeMs = xTimer::getPassedTimeMs(NativeTime, v14, v15);
      String::format((String *)"Loading JSON %s took %d ms", v17, a3, (unsigned int)(int)*(float *)&PassedTimeMs);
      Debugger::print((Debugger *)v19, v18);
      String::~String();
      String::~String();
    }

    __int64 __fastcall DataLoaderJSON::getType(EventScreen *this)
    {
      return 6;
    }

}; // end class DataLoaderJSON
