class LogicDebugChecksumEncoder
{
public:

    void __fastcall LogicDebugChecksumEncoder::LogicDebugChecksumEncoder(LogicDebugChecksumEncoder *this, #1225 *a2)
    {
      ChecksumEncoder *v3; // x0
    
      v3 = ChecksumEncoder::ChecksumEncoder(this);
      *(_QWORD *)v3 = off_100469C08;
      *((_BYTE *)v3 + 32) = 1;
      *((_QWORD *)v3 + 3) = a2;
    }

    __int64 __fastcall LogicDebugChecksumEncoder::destruct(DeviceLinkSuccesfullOldScreen *this)
    {
      __int64 result; // x0
    
      ChecksumEncoder::destruct(this);
      result = *((_QWORD *)this + 3);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *((_QWORD *)this + 3);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 3) = 0;
      }
      *((_BYTE *)this + 32) = 1;
      *((_QWORD *)this + 3) = 0;
      return result;
    }

    __int64 __fastcall LogicDebugChecksumEncoder::writeInt(DeviceLinkSuccesfullOldScreen *this, __int64 a2)
    {
      signed int Offset; // w21
      const char *v5; // x1
      const String *v6; // x1
      __int64 v7; // x0
      const char *v8; // x1
      const String *v9; // x1
      char v11; // [xsp+20h] [xbp-50h] BYREF
      String v12; // [xsp+38h] [xbp-38h] BYREF
    
      Offset = ByteStream::getOffset(*((_QWORD *)this + 3));
      if ( Offset > (int)(ByteStream::getLength(*((_QWORD *)this + 3)) - 4) )
      {
        String::format((String *)"LogicDebugChecksumEncoder::writeInt buffer sizes don't match", v5);
        if ( *((_BYTE *)this + 32) )
        {
          *((_BYTE *)this + 32) = 0;
          Debugger::warning((__siginfo *)&v11, v6);
        }
    LABEL_8:
        String::~String();
        return ChecksumEncoder::writeInt(this, a2);
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 144LL))(*((_QWORD *)this + 3));
      if ( (_DWORD)v7 != (_DWORD)a2 )
      {
        String::format(
          (String *)"LogicDebugChecksumEncoder::writeInt values don't match: %d and %d. Diff %d",
          v8,
          a2,
          v7,
          (unsigned int)(a2 - v7));
        if ( *((_BYTE *)this + 32) )
        {
          *((_BYTE *)this + 32) = 0;
          Debugger::warning((__siginfo *)&v12, v9);
        }
        goto LABEL_8;
      }
      return ChecksumEncoder::writeInt(this, a2);
    }

    __int64 __fastcall LogicDebugChecksumEncoder::writeVInt(DeviceLinkSuccesfullOldScreen *this, __int64 a2)
    {
      signed int Offset; // w21
      const char *v5; // x1
      const String *v6; // x1
      __int64 v7; // x0
      const char *v8; // x1
      const String *v9; // x1
      char v11; // [xsp+20h] [xbp-50h] BYREF
      String v12; // [xsp+38h] [xbp-38h] BYREF
    
      Offset = ByteStream::getOffset(*((_QWORD *)this + 3));
      if ( Offset > (int)(ByteStream::getLength(*((_QWORD *)this + 3)) - 4) )
      {
        String::format((String *)"LogicDebugChecksumEncoder::writeVInt buffer sizes don't match", v5);
        if ( *((_BYTE *)this + 32) )
        {
          *((_BYTE *)this + 32) = 0;
          Debugger::warning((__siginfo *)&v11, v6);
        }
    LABEL_8:
        String::~String();
        return ChecksumEncoder::writeVInt(this, a2);
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 152LL))(*((_QWORD *)this + 3));
      if ( (_DWORD)v7 != (_DWORD)a2 )
      {
        String::format(
          (String *)"LogicDebugChecksumEncoder::writeVInt values don't match: %d and %d. Diff %d",
          v8,
          a2,
          v7,
          (unsigned int)(a2 - v7));
        if ( *((_BYTE *)this + 32) )
        {
          *((_BYTE *)this + 32) = 0;
          Debugger::warning((__siginfo *)&v12, v9);
        }
        goto LABEL_8;
      }
      return ChecksumEncoder::writeVInt(this, a2);
    }

    __int64 __fastcall LogicDebugChecksumEncoder::writeBoolean(DeviceLinkSuccesfullOldScreen *this, String *a2)
    {
      signed int Offset; // w21
      const char *v5; // x1
      const String *v6; // x1
      bool v7; // w1
      String *v8; // x21
      __int64 v9; // x0
      bool v10; // w1
      String *v11; // x0
      const String *v12; // x1
      __siginfo v14; // [xsp+0h] [xbp-80h] BYREF
    
      Offset = ByteStream::getOffset(*((_QWORD *)this + 3));
      if ( Offset > (int)(ByteStream::getLength(*((_QWORD *)this + 3)) - 1) )
      {
        String::format((String *)"LogicDebugChecksumEncoder::writeBoolean buffer sizes don't match", v5);
        if ( *((_BYTE *)this + 32) )
        {
          *((_BYTE *)this + 32) = 0;
          Debugger::warning(&v14, v6);
        }
    LABEL_9:
        String::~String();
        return ChecksumEncoder::writeBoolean(this, (bool)a2);
      }
      v8 = (String *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 136LL))(*((_QWORD *)this + 3));
      if ( ((unsigned int)v8 ^ (unsigned int)a2) == 1 )
      {
        v9 = String::valueOf(a2, v7);
        operator+(&v14.si_addr, "LogicDebugChecksumEncoder::writeBoolean values don't match: ", v9);
        operator+(&v14.si_addr, " and ");
        v11 = (String *)String::valueOf(v8, v10);
        operator+((__int64 *)&v14.__pad[3], (String *)v14.__pad, v11);
        if ( *((_BYTE *)this + 32) )
        {
          *((_BYTE *)this + 32) = 0;
          Debugger::warning((__siginfo *)&v14.__pad[3], v12);
        }
        String::~String();
        String::~String();
        goto LABEL_9;
      }
      return ChecksumEncoder::writeBoolean(this, (bool)a2);
    }

    __int64 __fastcall LogicDebugChecksumEncoder::writeString(__int64 a1, String *a2)
    {
      __int64 ByteLength; // x1
      __int64 v5; // x0
      void *v6; // x21
      const String *v7; // x1
      const String *v8; // x1
      const String *v9; // x1
      __siginfo v11; // [xsp+8h] [xbp-68h] BYREF
    
      if ( a2 )
        ByteLength = LogicStringUtil::getByteLength(a2);
      else
        ByteLength = 0;
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 120LL))(*(_QWORD *)(a1 + 24), ByteLength);
      v6 = (void *)v5;
      if ( a2 )
      {
        if ( v5 )
        {
          if ( (String::equals(v5, a2) & 1) != 0 )
          {
    LABEL_17:
            String::~String();
            operator delete(v6);
            return ChecksumEncoder::writeString((#1226 *)a1, a2);
          }
          String::String((String *)&v11, "LogicDebugChecksumEncoder::writeString values don't match");
          if ( *(_BYTE *)(a1 + 32) )
          {
            *(_BYTE *)(a1 + 32) = 0;
            Debugger::warning(&v11, v7);
          }
        }
        else
        {
          String::String((String *)&v11.si_addr, "LogicDebugChecksumEncoder::writeString values don't match");
          if ( *(_BYTE *)(a1 + 32) )
          {
            *(_BYTE *)(a1 + 32) = 0;
            Debugger::warning((__siginfo *)&v11.si_addr, v9);
          }
        }
      }
      else
      {
        if ( !v5 )
          return ChecksumEncoder::writeString((#1226 *)a1, a2);
        String::String((String *)v11.__pad, "LogicDebugChecksumEncoder::writeString values don't match");
        if ( *(_BYTE *)(a1 + 32) )
        {
          *(_BYTE *)(a1 + 32) = 0;
          Debugger::warning((__siginfo *)v11.__pad, v8);
        }
      }
      String::~String();
      if ( v6 )
        goto LABEL_17;
      return ChecksumEncoder::writeString((#1226 *)a1, a2);
    }

    void __fastcall LogicDebugChecksumEncoder::writeStringReference(__int64 a1, String *a2)
    {
      __int64 ByteLength; // x0
      const String *v5; // x1
      String v6; // [xsp+0h] [xbp-40h] BYREF
      String v7; // [xsp+18h] [xbp-28h] BYREF
    
      ByteLength = LogicStringUtil::getByteLength(a2);
      (*(void (__fastcall **)(String *__return_ptr, _QWORD, __int64))(**(_QWORD **)(a1 + 24) + 112LL))(
        &v7,
        *(_QWORD *)(a1 + 24),
        ByteLength);
      if ( (String::equals(&v7, a2) & 1) == 0 )
      {
        String::String(&v6, "LogicDebugChecksumEncoder::writeStringReference values don't match");
        if ( *(_BYTE *)(a1 + 32) )
        {
          *(_BYTE *)(a1 + 32) = 0;
          Debugger::warning((__siginfo *)&v6, v5);
        }
        String::~String();
      }
      ChecksumEncoder::writeStringReference((#1226 *)a1, a2);
      String::~String();
    }

    __int64 __fastcall LogicDebugChecksumEncoder::writeByte(DeviceLinkSuccesfullOldScreen *this, __int64 a2)
    {
      __int64 v4; // x0
      const char *v5; // x1
      const String *v6; // x1
      String v8; // [xsp+18h] [xbp-28h] BYREF
    
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 208LL))(*((_QWORD *)this + 3));
      if ( (_DWORD)v4 != (_DWORD)a2 )
      {
        String::format(
          (String *)"LogicDebugChecksumEncoder::writeByte values don't match: %d and %d. Diff %d",
          v5,
          a2,
          v4,
          (unsigned int)(a2 - v4));
        if ( *((_BYTE *)this + 32) )
        {
          *((_BYTE *)this + 32) = 0;
          Debugger::warning((__siginfo *)&v8, v6);
        }
        String::~String();
      }
      return ChecksumEncoder::writeByte(this, a2);
    }

    __int64 __fastcall LogicDebugChecksumEncoder::writeShort(DeviceLinkSuccesfullOldScreen *this, __int64 a2)
    {
      __int64 v4; // x0
      const char *v5; // x1
      const String *v6; // x1
      String v8; // [xsp+18h] [xbp-28h] BYREF
    
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 216LL))(*((_QWORD *)this + 3));
      if ( (_DWORD)v4 != (_DWORD)a2 )
      {
        String::format(
          (String *)"LogicDebugChecksumEncoder::writeShort values don't match: %d and %d. Diff %d",
          v5,
          a2,
          v4,
          (unsigned int)(a2 - v4));
        if ( *((_BYTE *)this + 32) )
        {
          *((_BYTE *)this + 32) = 0;
          Debugger::warning((__siginfo *)&v8, v6);
        }
        String::~String();
      }
      return ChecksumEncoder::writeShort(this, a2);
    }

    __int64 __fastcall LogicDebugChecksumEncoder::setOtherByteStream(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 24) = a2;
      return result;
    }

    void __fastcall LogicDebugChecksumEncoder::~LogicDebugChecksumEncoder(DeviceLinkSuccesfullOldScreen *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicDebugChecksumEncoder::~LogicDebugChecksumEncoder(DeviceLinkSuccesfullOldScreen *this)
    {
      operator delete(this);
    }

}; // end class LogicDebugChecksumEncoder
