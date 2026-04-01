class LogicLongToCodeConverterUtil
{
public:

    void __fastcall LogicLongToCodeConverterUtil::LogicLongToCodeConverterUtil(
            LogicLongToCodeConverterUtil *this,
            String *a2,
            String *a3)
    {
      String::String((__int64)this);
      String::String((__int64)this + 24);
      String::operator=(this, "");
      String::operator=((_DWORD *)this + 6, "");
      String::operator=((String *)this, a2);
      String::operator=((String *)this + 1, a3);
    }

    void __fastcall LogicLongToCodeConverterUtil::LogicLongToCodeConverterUtil(
            LogicLongToCodeConverterUtil *this,
            String *a2,
            String *a3)
    {
      LogicLongToCodeConverterUtil::LogicLongToCodeConverterUtil(this, a2, a3);
    }

    void __usercall LogicLongToCodeConverterUtil::convert(String *this@<X0>, __int64 a2@<X1>, String *a3@<X8>)
    {
      __int64 v4; // x22
      String *v5; // x20
      __int64 v6; // x23
      __int64 v7; // x25
      int v8; // w3
      __int64 v9; // x8
      int v10; // w2
      char *v11; // x1
      _BYTE v12[12]; // [xsp+Ch] [xbp-54h] BYREF
    
      if ( a2 < 0 )
      {
        Debugger::warning("LogicLongToCodeConverter: value to convert cannot be negative");
        String::String(a3, "");
      }
      else
      {
        v4 = 0;
        v5 = this + 1;
        v6 = *((int *)this + 6);
        while ( 1 )
        {
          v7 = a2 / v6;
          v12[v4 + 11] = String::charAt(v5, a2 % v6);
          if ( !v7 )
            break;
          v9 = v4 + 11;
          --v4;
          a2 = v7;
          if ( v9 <= 0 )
          {
            v10 = 12;
            v11 = 0;
            goto LABEL_8;
          }
        }
        v10 = 1 - v4;
        v11 = (char *)(unsigned int)(v4 + 11);
    LABEL_8:
        LogicStringUtil::createStringObject((LogicStringUtil *)v12, v11, v10, v8);
      }
    }

    __int64 *__fastcall LogicLongToCodeConverterUtil::toCode(String *this, const LogicCommandManagerListener *a2)
    {
      __int64 *v4; // x20
      __int64 LowerInt; // x21
      unsigned __int8 HigherInt; // w0
      String v8; // [xsp+8h] [xbp-38h] BYREF
    
      if ( (int)LogicLong::getHigherInt((unsigned int *)a2) < 256 )
      {
        LowerInt = (int)LogicLong::getLowerInt((__int64)a2);
        HigherInt = LogicLong::getHigherInt((unsigned int *)a2);
        LogicLongToCodeConverterUtil::convert(this, HigherInt | (unsigned __int64)(LowerInt << 8), &v8);
        v4 = (__int64 *)operator new(24);
        operator+(v4, this, &v8);
        String::~String((__int64)&v8);
      }
      else
      {
        Debugger::warning("Cannot convert the code to string. Higher int value too large");
        return 0;
      }
      return v4;
    }

}; // end class LogicLongToCodeConverterUtil
