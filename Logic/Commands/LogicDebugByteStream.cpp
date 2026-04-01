class LogicDebugByteStream
{
public:

    void __fastcall LogicDebugByteStream::LogicDebugByteStream(LogicDebugByteStream *this)
    {
      ByteStream *v1; // x0
    
      v1 = ByteStream::ByteStream(this, 10);
      *((_DWORD *)v1 + 14) = 0;
      *(_QWORD *)v1 = off_100462E90;
      *((_QWORD *)v1 + 6) = 0;
      *((_BYTE *)v1 + 44) = 0;
      *((_DWORD *)v1 + 20) = 0;
      *((_QWORD *)v1 + 8) = 0;
      *((_QWORD *)v1 + 9) = 0;
    }

    __int64 __fastcall LogicDebugByteStream::destruct(#1307 *this)
    {
      __int64 result; // x0
    
      ByteStream::destruct(this);
      result = *((_QWORD *)this + 6);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *((_QWORD *)this + 6);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 6) = 0;
      }
      *((_DWORD *)this + 14) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_BYTE *)this + 44) = 0;
      *((_DWORD *)this + 19) = 0;
      *((_DWORD *)this + 20) = 0;
      return result;
    }

    __int64 __fastcall LogicDebugByteStream::writeInt(#1307 *this, __int64 a2)
    {
      const String *v4; // x1
      __int64 v5; // x0
      int v6; // w21
      __int64 v7; // x21
      __int64 Offset; // x0
      const char *v9; // x1
      const String *v10; // x1
      __int64 v11; // x0
      const char *v12; // x1
      const String *v13; // x1
      __siginfo v15; // [xsp+20h] [xbp-70h] BYREF
    
      if ( !*((_BYTE *)this + 44) )
      {
        String::String((String *)&v15.__pad[1], "LogicDebugByteStream::writeInt called in read mode");
        Debugger::error((Debugger *)&v15.__pad[1], v4);
      }
      HIDWORD(v15.__pad[0]) = 0;
      LogicArrayList<int>::add((__int64)this + 64, (int *)v15.__pad + 1);
      v5 = *((_QWORD *)this + 6);
      if ( v5 )
      {
        v6 = ByteStream::getOffset(v5) - *((_DWORD *)this + 14);
        if ( v6 != (unsigned int)ByteStream::getOffset(this) )
        {
          v7 = (unsigned int)ByteStream::getOffset(*((_QWORD *)this + 6)) - *((_DWORD *)this + 14);
          Offset = ByteStream::getOffset(this);
          String::format(
            (String *)"LogicDebugByteStream::writeInt ByteStream offsets don't match: %d and %d",
            v9,
            v7,
            Offset);
          Debugger::warning((__siginfo *)&v15.si_addr, v10);
          String::~String((String *)&v15.si_addr);
        }
        v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 144LL))(*((_QWORD *)this + 6));
        if ( (_DWORD)v11 != (_DWORD)a2 )
        {
          String::format(
            (String *)"LogicDebugByteStream::writeInt values don't match: %d and %d. Diff %d",
            v12,
            a2,
            v11,
            (unsigned int)(a2 - v11));
          Debugger::warning(&v15, v13);
          String::~String((String *)&v15);
        }
      }
      return ByteStream::writeInt(this, a2);
    }

    __int64 __fastcall LogicDebugByteStream::writeVInt(#1307 *this, __int64 a2)
    {
      const String *v4; // x1
      __int64 v5; // x0
      int v6; // w21
      __int64 v7; // x21
      __int64 Offset; // x0
      const char *v9; // x1
      const String *v10; // x1
      __int64 v11; // x0
      const char *v12; // x1
      const String *v13; // x1
      __siginfo v15; // [xsp+20h] [xbp-70h] BYREF
    
      if ( !*((_BYTE *)this + 44) )
      {
        String::String((String *)&v15.__pad[1], "LogicDebugByteStream::writeVInt called in read mode");
        Debugger::error((Debugger *)&v15.__pad[1], v4);
      }
      HIDWORD(v15.__pad[0]) = 1;
      LogicArrayList<int>::add((__int64)this + 64, (int *)v15.__pad + 1);
      v5 = *((_QWORD *)this + 6);
      if ( v5 )
      {
        v6 = ByteStream::getOffset(v5) - *((_DWORD *)this + 14);
        if ( v6 != (unsigned int)ByteStream::getOffset(this) )
        {
          v7 = (unsigned int)ByteStream::getOffset(*((_QWORD *)this + 6)) - *((_DWORD *)this + 14);
          Offset = ByteStream::getOffset(this);
          String::format(
            (String *)"LogicDebugByteStream::writeVInt ByteStream offsets don't match: %d and %d",
            v9,
            v7,
            Offset);
          Debugger::warning((__siginfo *)&v15.si_addr, v10);
          String::~String((String *)&v15.si_addr);
        }
        v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 152LL))(*((_QWORD *)this + 6));
        if ( (_DWORD)v11 != (_DWORD)a2 )
        {
          String::format(
            (String *)"LogicDebugByteStream::writeVInt values don't match: %d and %d. Diff %d",
            v12,
            a2,
            v11,
            (unsigned int)(a2 - v11));
          Debugger::warning(&v15, v13);
          String::~String((String *)&v15);
        }
      }
      return ByteStream::writeVInt(this, a2);
    }

    __int64 __fastcall LogicDebugByteStream::writeBoolean(#1307 *this, String *a2)
    {
      const String *v4; // x1
      __int64 v5; // x0
      int v6; // w21
      __int64 v7; // x21
      __int64 Offset; // x0
      const char *v9; // x1
      const String *v10; // x1
      bool v11; // w1
      String *v12; // x21
      __int64 v13; // x0
      bool v14; // w1
      String *v15; // x0
      const String *v16; // x1
      String v18; // [xsp+10h] [xbp-A0h] BYREF
      String v19; // [xsp+28h] [xbp-88h] BYREF
      __siginfo v20; // [xsp+40h] [xbp-70h] BYREF
    
      if ( !*((_BYTE *)this + 44) )
      {
        String::String((String *)&v20.__pad[1], "LogicDebugByteStream::writeBoolean called in read mode");
        Debugger::error((Debugger *)&v20.__pad[1], v4);
      }
      HIDWORD(v20.__pad[0]) = 2;
      LogicArrayList<int>::add((__int64)this + 64, (int *)v20.__pad + 1);
      v5 = *((_QWORD *)this + 6);
      if ( v5 )
      {
        v6 = ByteStream::getOffset(v5) - *((_DWORD *)this + 14);
        if ( v6 != (unsigned int)ByteStream::getOffset(this) )
        {
          v7 = (unsigned int)ByteStream::getOffset(*((_QWORD *)this + 6)) - *((_DWORD *)this + 14);
          Offset = ByteStream::getOffset(this);
          String::format(
            (String *)"LogicDebugByteStream::writeBoolean ByteStream offsets don't match: %d and %d",
            v9,
            v7,
            Offset);
          Debugger::warning((__siginfo *)&v20.si_addr, v10);
          String::~String((String *)&v20.si_addr);
        }
        v12 = (String *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 136LL))(*((_QWORD *)this + 6));
        if ( ((unsigned int)v12 ^ (unsigned int)a2) == 1 )
        {
          v13 = String::valueOf(a2, v11);
          operator+(&v18, "LogicDebugByteStream::writeBoolean values don't match: ", v13);
          operator+(&v18, " and ");
          v15 = (String *)String::valueOf(v12, v14);
          operator+((__int64 *)&v20.si_signo, &v19, v15);
          Debugger::warning(&v20, v16);
          String::~String((String *)&v20);
          String::~String(&v19);
          String::~String(&v18);
        }
      }
      return ByteStream::writeBoolean(this, (bool)a2);
    }

    __int64 __fastcall LogicDebugByteStream::writeStringReference(#1307 *this, String *a2)
    {
      const String *v4; // x1
      __int64 v5; // x0
      int v6; // w21
      __int64 v7; // x21
      __int64 Offset; // x0
      const char *v9; // x1
      const String *v10; // x1
      __int64 ByteLength; // x0
      const String *v12; // x1
      __siginfo v14; // [xsp+18h] [xbp-88h] BYREF
    
      if ( !*((_BYTE *)this + 44) )
      {
        String::String((String *)&v14.__pad[4], "LogicDebugByteStream::writeStringReference called in read mode");
        Debugger::error((Debugger *)&v14.__pad[4], v4);
      }
      HIDWORD(v14.__pad[3]) = 4;
      LogicArrayList<int>::add((__int64)this + 64, (int *)&v14.__pad[3] + 1);
      v5 = *((_QWORD *)this + 6);
      if ( v5 )
      {
        v6 = ByteStream::getOffset(v5) - *((_DWORD *)this + 14);
        if ( v6 != (unsigned int)ByteStream::getOffset(this) )
        {
          v7 = (unsigned int)ByteStream::getOffset(*((_QWORD *)this + 6)) - *((_DWORD *)this + 14);
          Offset = ByteStream::getOffset(this);
          String::format(
            (String *)"LogicDebugByteStream::writeStringReference ByteStream offsets don't match: %d and %d",
            v9,
            v7,
            Offset);
          Debugger::warning((__siginfo *)v14.__pad, v10);
          String::~String((String *)v14.__pad);
        }
        ByteLength = LogicStringUtil::getByteLength(a2);
        (*(void (__fastcall **)(void **__return_ptr, _QWORD, __int64))(**((_QWORD **)this + 6) + 112LL))(
          &v14.si_addr,
          *((_QWORD *)this + 6),
          ByteLength);
        if ( (String::equals(&v14.si_addr, a2) & 1) == 0 )
        {
          String::String((String *)&v14, "LogicDebugByteStream::writeStringReference values don't match");
          Debugger::warning(&v14, v12);
          String::~String((String *)&v14);
        }
        String::~String((String *)&v14.si_addr);
      }
      return ByteStream::writeStringReference(this, a2);
    }

    __int64 __fastcall LogicDebugByteStream::writeString(#1307 *this, String *a2)
    {
      const String *v4; // x1
      __int64 v5; // x0
      int v6; // w21
      __int64 v7; // x21
      __int64 Offset; // x0
      const char *v9; // x1
      const String *v10; // x1
      __int64 ByteLength; // x1
      __int64 v12; // x0
      String *v13; // x21
      const String *v14; // x1
      String *pad; // x0
      const String *v16; // x1
      const String *v17; // x1
      __siginfo v19; // [xsp+10h] [xbp-A0h] BYREF
      String v20; // [xsp+78h] [xbp-38h] BYREF
    
      if ( !*((_BYTE *)this + 44) )
      {
        String::String(&v20, "LogicDebugByteStream::writeString called in read mode");
        Debugger::error((Debugger *)&v20, v4);
      }
      HIDWORD(v19.__pad[6]) = 3;
      LogicArrayList<int>::add((__int64)this + 64, (int *)&v19.__pad[6] + 1);
      v5 = *((_QWORD *)this + 6);
      if ( v5 )
      {
        v6 = ByteStream::getOffset(v5) - *((_DWORD *)this + 14);
        if ( v6 != (unsigned int)ByteStream::getOffset(this) )
        {
          v7 = (unsigned int)ByteStream::getOffset(*((_QWORD *)this + 6)) - *((_DWORD *)this + 14);
          Offset = ByteStream::getOffset(this);
          String::format(
            (String *)"LogicDebugByteStream::writeString ByteStream offsets don't match: %d and %d",
            v9,
            v7,
            Offset);
          Debugger::warning((__siginfo *)&v19.__pad[3], v10);
          String::~String((String *)&v19.__pad[3]);
        }
        if ( a2 )
          ByteLength = LogicStringUtil::getByteLength(a2);
        else
          ByteLength = 0;
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 120LL))(
                *((_QWORD *)this + 6),
                ByteLength);
        v13 = (String *)v12;
        if ( a2 )
        {
          if ( !v12 )
          {
            String::String((String *)&v19.si_addr, "LogicDebugByteStream::writeString values don't match");
            Debugger::warning((__siginfo *)&v19.si_addr, v17);
            String::~String((String *)&v19.si_addr);
            return ByteStream::writeString(this, a2);
          }
          if ( (String::equals(v12, a2) & 1) != 0 )
            goto LABEL_16;
          String::String((String *)&v19, "LogicDebugByteStream::writeString values don't match");
          Debugger::warning(&v19, v14);
          pad = (String *)&v19;
    LABEL_15:
          String::~String(pad);
    LABEL_16:
          String::~String(v13);
          operator delete(v13);
          return ByteStream::writeString(this, a2);
        }
        if ( v12 )
        {
          String::String((String *)v19.__pad, "LogicDebugByteStream::writeString values don't match");
          Debugger::warning((__siginfo *)v19.__pad, v16);
          pad = (String *)v19.__pad;
          goto LABEL_15;
        }
      }
      return ByteStream::writeString(this, a2);
    }

    __int64 __fastcall LogicDebugByteStream::writeByte(#1307 *this, __int64 a2)
    {
      const String *v4; // x1
      __int64 v5; // x0
      int v6; // w21
      __int64 v7; // x21
      __int64 Offset; // x0
      const char *v9; // x1
      const String *v10; // x1
      __int64 v11; // x0
      const char *v12; // x1
      const String *v13; // x1
      __siginfo v15; // [xsp+20h] [xbp-70h] BYREF
    
      if ( !*((_BYTE *)this + 44) )
      {
        String::String((String *)&v15.__pad[1], "LogicDebugByteStream::writeByte called in read mode");
        Debugger::error((Debugger *)&v15.__pad[1], v4);
      }
      HIDWORD(v15.__pad[0]) = 5;
      LogicArrayList<int>::add((__int64)this + 64, (int *)v15.__pad + 1);
      v5 = *((_QWORD *)this + 6);
      if ( v5 )
      {
        v6 = ByteStream::getOffset(v5) - *((_DWORD *)this + 14);
        if ( v6 != (unsigned int)ByteStream::getOffset(this) )
        {
          v7 = (unsigned int)ByteStream::getOffset(*((_QWORD *)this + 6)) - *((_DWORD *)this + 14);
          Offset = ByteStream::getOffset(this);
          String::format(
            (String *)"LogicDebugByteStream::writeByte ByteStream offsets don't match: %d and %d",
            v9,
            v7,
            Offset);
          Debugger::warning((__siginfo *)&v15.si_addr, v10);
          String::~String((String *)&v15.si_addr);
        }
        v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 208LL))(*((_QWORD *)this + 6));
        if ( (_DWORD)v11 != (_DWORD)a2 )
        {
          String::format(
            (String *)"LogicDebugByteStream::writeByte values don't match: %d and %d. Diff %d",
            v12,
            a2,
            v11,
            (unsigned int)(a2 - v11));
          Debugger::warning(&v15, v13);
          String::~String((String *)&v15);
        }
      }
      return ByteStream::writeByte(this, a2);
    }

    __int64 __fastcall LogicDebugByteStream::writeShort(#1307 *this, __int64 a2)
    {
      const String *v4; // x1
      __int64 v5; // x0
      int v6; // w21
      __int64 v7; // x21
      __int64 Offset; // x0
      const char *v9; // x1
      const String *v10; // x1
      __int64 v11; // x0
      const char *v12; // x1
      const String *v13; // x1
      __siginfo v15; // [xsp+20h] [xbp-70h] BYREF
    
      if ( !*((_BYTE *)this + 44) )
      {
        String::String((String *)&v15.__pad[1], "LogicDebugByteStream::writeShort called in read mode");
        Debugger::error((Debugger *)&v15.__pad[1], v4);
      }
      HIDWORD(v15.__pad[0]) = 6;
      LogicArrayList<int>::add((__int64)this + 64, (int *)v15.__pad + 1);
      v5 = *((_QWORD *)this + 6);
      if ( v5 )
      {
        v6 = ByteStream::getOffset(v5) - *((_DWORD *)this + 14);
        if ( v6 != (unsigned int)ByteStream::getOffset(this) )
        {
          v7 = (unsigned int)ByteStream::getOffset(*((_QWORD *)this + 6)) - *((_DWORD *)this + 14);
          Offset = ByteStream::getOffset(this);
          String::format(
            (String *)"LogicDebugByteStream::writeShort ByteStream offsets don't match: %d and %d",
            v9,
            v7,
            Offset);
          Debugger::warning((__siginfo *)&v15.si_addr, v10);
          String::~String((String *)&v15.si_addr);
        }
        v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 216LL))(*((_QWORD *)this + 6));
        if ( (_DWORD)v11 != (_DWORD)a2 )
        {
          String::format(
            (String *)"LogicDebugByteStream::writeShort values don't match: %d and %d. Diff %d",
            v12,
            a2,
            v11,
            (unsigned int)(a2 - v11));
          Debugger::warning(&v15, v13);
          String::~String((String *)&v15);
        }
      }
      return ByteStream::writeShort(this, a2);
    }

    __int64 __fastcall LogicDebugByteStream::readStringReference(#1307 *this, int a2)
    {
      const String *v2; // x1
      __int64 v3; // x8
      const String *v4; // x1
      String v6; // [xsp+0h] [xbp-50h] BYREF
      String v7; // [xsp+18h] [xbp-38h] BYREF
    
      if ( *((_BYTE *)this + 44) )
      {
        String::String(&v7, "LogicDebugByteStream::readStringReference called in write mode");
        Debugger::error((Debugger *)&v7, v2);
      }
      v3 = *((int *)this + 20);
      *((_DWORD *)this + 20) = v3 + 1;
      if ( *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v3) != 4 )
      {
        String::String(&v6, "LogicDebugByteStream::readStringReference called at wrong time");
        Debugger::error((Debugger *)&v6, v4);
      }
      return ByteStream::readStringReference(this, a2);
    }

    __int64 __fastcall LogicDebugByteStream::readString(#1307 *this, int a2)
    {
      const String *v2; // x1
      __int64 v3; // x8
      const String *v4; // x1
      String v6; // [xsp+0h] [xbp-40h] BYREF
      String v7; // [xsp+18h] [xbp-28h] BYREF
    
      if ( *((_BYTE *)this + 44) )
      {
        String::String(&v7, "LogicDebugByteStream::readString called in write mode");
        Debugger::error((Debugger *)&v7, v2);
      }
      v3 = *((int *)this + 20);
      *((_DWORD *)this + 20) = v3 + 1;
      if ( *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v3) != 3 )
      {
        String::String(&v6, "LogicDebugByteStream::readString called at wrong time");
        Debugger::error((Debugger *)&v6, v4);
      }
      return ByteStream::readString(this, a2);
    }

    __int64 __fastcall LogicDebugByteStream::readBoolean(#1307 *this)
    {
      const String *v1; // x1
      __int64 v2; // x8
      const String *v3; // x1
      String v5; // [xsp+0h] [xbp-40h] BYREF
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      if ( *((_BYTE *)this + 44) )
      {
        String::String(&v6, "LogicDebugByteStream::readBoolean called in write mode");
        Debugger::error((Debugger *)&v6, v1);
      }
      v2 = *((int *)this + 20);
      *((_DWORD *)this + 20) = v2 + 1;
      if ( *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v2) != 2 )
      {
        String::String(&v5, "LogicDebugByteStream::readBoolean called at wrong time");
        Debugger::error((Debugger *)&v5, v3);
      }
      return ByteStream::readBoolean(this);
    }

    __int64 __fastcall LogicDebugByteStream::readInt(#1307 *this)
    {
      const String *v1; // x1
      __int64 v2; // x8
      const String *v3; // x1
      String v5; // [xsp+0h] [xbp-40h] BYREF
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      if ( *((_BYTE *)this + 44) )
      {
        String::String(&v6, "LogicDebugByteStream::readInt called in write mode");
        Debugger::error((Debugger *)&v6, v1);
      }
      v2 = *((int *)this + 20);
      *((_DWORD *)this + 20) = v2 + 1;
      if ( *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v2) )
      {
        String::String(&v5, "LogicDebugByteStream::readInt called at wrong time");
        Debugger::error((Debugger *)&v5, v3);
      }
      return ByteStream::readInt(this);
    }

    __int64 __fastcall LogicDebugByteStream::readVInt(#1307 *this)
    {
      const String *v1; // x1
      __int64 v2; // x8
      const String *v3; // x1
      String v5; // [xsp+0h] [xbp-40h] BYREF
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      if ( *((_BYTE *)this + 44) )
      {
        String::String(&v6, "LogicDebugByteStream::readVInt called in write mode");
        Debugger::error((Debugger *)&v6, v1);
      }
      v2 = *((int *)this + 20);
      *((_DWORD *)this + 20) = v2 + 1;
      if ( *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v2) != 1 )
      {
        String::String(&v5, "LogicDebugByteStream::readVInt called at wrong time");
        Debugger::error((Debugger *)&v5, v3);
      }
      return ByteStream::readVInt(this);
    }

    // attributes: thunk
    __int64 __fastcall LogicDebugByteStream::readBytesLength(#1307 *this)
    {
      return ByteStream::readBytesLength(this);
    }

    __int64 __fastcall LogicDebugByteStream::readBytes(#1307 *this, int a2, int a3)
    {
      const String *v3; // x1
      __int64 v4; // x8
      const String *v5; // x1
      String v7; // [xsp+0h] [xbp-50h] BYREF
      String v8; // [xsp+18h] [xbp-38h] BYREF
    
      if ( *((_BYTE *)this + 44) )
      {
        String::String(&v8, "LogicDebugByteStream::readBytes called in write mode");
        Debugger::error((Debugger *)&v8, v3);
      }
      v4 = *((int *)this + 20);
      *((_DWORD *)this + 20) = v4 + 1;
      if ( *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v4) != 7 )
      {
        String::String(&v7, "LogicDebugByteStream::readBytes called at wrong time");
        Debugger::error((Debugger *)&v7, v5);
      }
      return ByteStream::readBytes(this, a2, a3);
    }

    __int64 __fastcall LogicDebugByteStream::readByte(#1307 *this)
    {
      const String *v1; // x1
      __int64 v2; // x8
      const String *v3; // x1
      String v5; // [xsp+0h] [xbp-40h] BYREF
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      if ( *((_BYTE *)this + 44) )
      {
        String::String(&v6, "LogicDebugByteStream::readByte called in write mode");
        Debugger::error((Debugger *)&v6, v1);
      }
      v2 = *((int *)this + 20);
      *((_DWORD *)this + 20) = v2 + 1;
      if ( *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v2) != 5 )
      {
        String::String(&v5, "LogicDebugByteStream::readByte called at wrong time");
        Debugger::error((Debugger *)&v5, v3);
      }
      return ByteStream::readByte(this);
    }

    __int64 __fastcall LogicDebugByteStream::readShort(#1307 *this)
    {
      const String *v1; // x1
      __int64 v2; // x8
      const String *v3; // x1
      String v5; // [xsp+0h] [xbp-40h] BYREF
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      if ( *((_BYTE *)this + 44) )
      {
        String::String(&v6, "LogicDebugByteStream::readShort called in write mode");
        Debugger::error((Debugger *)&v6, v1);
      }
      v2 = *((int *)this + 20);
      *((_DWORD *)this + 20) = v2 + 1;
      if ( *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v2) != 6 )
      {
        String::String(&v5, "LogicDebugByteStream::readShort called at wrong time");
        Debugger::error((Debugger *)&v5, v3);
      }
      return ByteStream::readShort(this);
    }

    void __fastcall LogicDebugByteStream::~LogicDebugByteStream(#1307 *this)
    {
      __int64 v1; // x0
      _QWORD *v2; // x20
    
      *(_QWORD *)this = off_100462E90;
      v2 = (_QWORD *)((char *)this + 64);
      v1 = *((_QWORD *)this + 8);
      if ( v1 )
        operator delete[](v1);
      *v2 = 0;
      v2[1] = 0;
    }

    void __fastcall LogicDebugByteStream::~LogicDebugByteStream(#1307 *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_100462E90;
      v2 = *((_QWORD *)this + 8);
      if ( v2 )
        operator delete[](v2);
      operator delete(this);
    }

}; // end class LogicDebugByteStream
