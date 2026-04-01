class ByteStream
{
public:

    __int64 __fastcall ByteStream::ByteStream(__int64 a1, int a2)
    {
      __int64 v4; // x0
    
      ChecksumEncoder::ChecksumEncoder((ExpBar *)a1);
      *(_DWORD *)(a1 + 36) = 0;
      *(_QWORD *)a1 = off_100475AB0;
      *(_QWORD *)(a1 + 28) = 0;
      *(_QWORD *)(a1 + 20) = 0;
      if ( a2 < 0LL )
        v4 = -1;
      else
        v4 = a2;
      *(_QWORD *)(a1 + 32) = operator new[](v4);
      *(_DWORD *)(a1 + 40) = a2;
      return a1;
    }

    __int64 __fastcall ByteStream::ByteStream(__int64 a1, int a2)
    {
      __int64 v4; // x0
    
      ChecksumEncoder::ChecksumEncoder((ExpBar *)a1);
      *(_QWORD *)a1 = off_100475AB0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_QWORD *)(a1 + 20) = 0;
      if ( a2 < 0LL )
        v4 = -1;
      else
        v4 = a2;
      *(_QWORD *)(a1 + 32) = operator new[](v4);
      *(_DWORD *)(a1 + 40) = a2;
      return a1;
    }

    __int64 __fastcall ByteStream::ByteStream(__int64 a1, int a2, int a3)
    {
      __int64 v6; // x0
      LogicStringUtil *v7; // x0
      int v8; // w5
    
      ChecksumEncoder::ChecksumEncoder((ExpBar *)a1);
      *(_DWORD *)(a1 + 36) = 0;
      *(_QWORD *)a1 = off_100475AB0;
      *(_QWORD *)(a1 + 28) = 0;
      *(_QWORD *)(a1 + 20) = 0;
      if ( a3 < 0LL )
        v6 = -1;
      else
        v6 = a3;
      v7 = (LogicStringUtil *)operator new[](v6);
      *(_QWORD *)(a1 + 32) = v7;
      *(_DWORD *)(a1 + 40) = a3;
      *(_DWORD *)(a1 + 24) = a3;
      LogicStringUtil::byteArrayCopy(v7, 0, a2, 0, a3, v8);
      return a1;
    }

    __int64 __fastcall ByteStream::ByteStream(__int64 a1, int a2, int a3)
    {
      ByteStream::ByteStream(a1, a2, a3);
      return a1;
    }

    __int64 __fastcall ByteStream::resetOffset(__int64 result)
    {
      *(_DWORD *)(result + 20) = 0;
      *(_DWORD *)(result + 28) = 0;
      return result;
    }

    __int64 __fastcall ByteStream::getLength(__int64 a1)
    {
      unsigned int v1; // w8
      unsigned int v2; // w9
    
      v1 = *(_DWORD *)(a1 + 20);
      v2 = *(_DWORD *)(a1 + 24);
      if ( (int)v1 >= (int)v2 )
        return v1;
      else
        return v2;
    }

    __int64 ByteStream::isCheckSumOnlyMode()
    {
      return 0;
    }

    __int64 __fastcall ByteStream::setOffset(__int64 result, int a2)
    {
      *(_DWORD *)(result + 20) = a2;
      *(_DWORD *)(result + 28) = 0;
      return result;
    }

    __int64 __fastcall ByteStream::getOffset(__int64 a1)
    {
      return *(unsigned int *)(a1 + 20);
    }

    __int64 __fastcall ByteStream::writeStringReference(__int64 a1, String *a2)
    {
      const String *v4; // x1
      LogicStringUtil *Bytes; // x0
      int v6; // w21
      const String *v7; // x2
      __int64 ByteLength; // x0
      int v9; // w20
      const String *v10; // x1
      __int64 result; // x0
      int v12; // w5
      _BYTE v13[24]; // [xsp+8h] [xbp-38h] BYREF
    
      ChecksumEncoder::writeStringReference((ExpBar *)a1, a2);
      Bytes = (LogicStringUtil *)LogicStringUtil::getBytes((GLenum *)a2, v4);
      v6 = (int)Bytes;
      ByteLength = LogicStringUtil::getByteLength(Bytes, (const char *)a2, v7);
      v9 = ByteLength;
      if ( (int)ByteLength < 900001 )
      {
        ByteStream::ensureCapacity((ByteStream *)a1, ByteLength + 4);
        ByteStream::writeIntToByteArray((ByteStream *)a1, v9);
        result = LogicStringUtil::byteArrayCopy(
                   *(LogicStringUtil **)(a1 + 32),
                   (char *)*(unsigned int *)(a1 + 20),
                   v6,
                   0,
                   v9,
                   v12);
        *(_DWORD *)(a1 + 20) += v9;
      }
      else
      {
        String::format((String *)"ByteStream::writeString invalid string length %d", (__int64)v13, ByteLength);
        Debugger::warning((__siginfo *)v13, v10);
        String::~String((__int64)v13);
        return ByteStream::writeIntToByteArray((ByteStream *)a1, -1);
      }
      return result;
    }

    __int64 __fastcall ByteStream::writeIntToByteArray(__int64 a1, int a2)
    {
      __int64 result; // x0
      __int64 v5; // x9
      __int64 v6; // x9
      __int64 v7; // x9
      __int64 v8; // x8
    
      *(_DWORD *)(a1 + 28) = 0;
      result = ByteStream::ensureCapacity((ByteStream *)a1, 4);
      v5 = *(int *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v5 + 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v5) = HIBYTE(a2);
      v6 = *(int *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v6 + 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v6) = BYTE2(a2);
      v7 = *(int *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v7 + 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v7) = BYTE1(a2);
      v8 = *(int *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v8 + 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v8) = a2;
      return result;
    }

    __n128 __fastcall ByteStream::ensureCapacity(__int64 a1, int a2)
    {
      int v3; // w19
      int v4; // w8
      __int64 v5; // x20
      int v6; // w8
      __int64 v7; // x0
      LogicStringUtil *v8; // x0
      int v9; // w5
      __n128 result; // q0
    
      v3 = *(_DWORD *)(a1 + 20);
      v4 = *(_DWORD *)(a1 + 40);
      if ( v3 + a2 > v4 )
      {
        v5 = *(_QWORD *)(a1 + 32);
        v6 = a2 + v4 + 100;
        *(_DWORD *)(a1 + 40) = v6;
        if ( v6 < 0LL )
          v7 = -1;
        else
          v7 = v6;
        v8 = (LogicStringUtil *)operator new[](v7);
        *(_QWORD *)(a1 + 32) = v8;
        LogicStringUtil::byteArrayCopy(v8, 0, v5, 0, v3, v9);
        if ( v5 )
          return operator delete[](v5);
      }
      return result;
    }

    __int64 __fastcall ByteStream::writeString(__int64 a1, String *a2)
    {
      const String *v4; // x1
      LogicStringUtil *Bytes; // x0
      int v6; // w21
      const String *v7; // x2
      __int64 ByteLength; // x0
      int v9; // w20
      const String *v10; // x1
      __int64 result; // x0
      int v12; // w5
      _BYTE v13[24]; // [xsp+8h] [xbp-38h] BYREF
    
      ChecksumEncoder::writeString((ExpBar *)a1, a2);
      if ( !a2 )
        return ByteStream::writeIntToByteArray(a1, -1);
      Bytes = (LogicStringUtil *)LogicStringUtil::getBytes((GLenum *)a2, v4);
      v6 = (int)Bytes;
      ByteLength = LogicStringUtil::getByteLength(Bytes, (const char *)a2, v7);
      v9 = ByteLength;
      if ( (int)ByteLength < 900001 )
      {
        ByteStream::ensureCapacity(a1, ByteLength + 4);
        ByteStream::writeIntToByteArray(a1, v9);
        result = LogicStringUtil::byteArrayCopy(
                   *(LogicStringUtil **)(a1 + 32),
                   (char *)*(unsigned int *)(a1 + 20),
                   v6,
                   0,
                   v9,
                   v12);
        *(_DWORD *)(a1 + 20) += v9;
      }
      else
      {
        String::format((String *)"ByteStream::writeString invalid string length %d", (__int64)v13, ByteLength);
        Debugger::warning((__siginfo *)v13, v10);
        String::~String((__int64)v13);
        return ByteStream::writeIntToByteArray(a1, -1);
      }
      return result;
    }

    __int64 __fastcall ByteStream::readString(__int64 a1, __int64 a2)
    {
      __int64 IntInternal; // x0
      const char *v5; // x1
      int v6; // w3
      int v7; // w19
      const String *v8; // x1
      __int64 result; // x0
      _BYTE v10[24]; // [xsp+18h] [xbp-38h] BYREF
    
      IntInternal = ByteStream::readIntInternal((ChallengePopup *)a1);
      v7 = IntInternal;
      if ( (IntInternal & 0x80000000) != 0 )
      {
        if ( (_DWORD)IntInternal != -1 )
          Debugger::warning((__siginfo *)"Negative String length encountered.", v5);
        return 0;
      }
      if ( (int)IntInternal > (int)a2 )
      {
        String::format((String *)"Too long String encountered, length %d, max %d ", (__int64)v10, IntInternal, a2);
        Debugger::warning((__siginfo *)v10, v8);
        String::~String((__int64)v10);
        return 0;
      }
      result = LogicStringUtil::createString(
                 *(LogicStringUtil **)(a1 + 32),
                 (char *)*(unsigned int *)(a1 + 20),
                 IntInternal,
                 v6);
      *(_DWORD *)(a1 + 20) += v7;
      return result;
    }

    __int64 __fastcall ByteStream::readIntInternal(ChallengePopup *this)
    {
      __int64 v1; // x8
      __int64 v2; // x10
      int v3; // w11
      unsigned __int8 v4; // w9
      unsigned __int8 v5; // w12
    
      *((_DWORD *)this + 7) = 0;
      v1 = *((int *)this + 5);
      *((_DWORD *)this + 5) = v1 + 1;
      v2 = *((_QWORD *)this + 4);
      v3 = *(unsigned __int8 *)(v2 + v1);
      *((_DWORD *)this + 5) = v1 + 2;
      v4 = *(_BYTE *)(v2 + v1 + 1);
      *((_DWORD *)this + 5) = v1 + 3;
      v5 = *(_BYTE *)(v2 + v1 + 2);
      *((_DWORD *)this + 5) = v1 + 4;
      return (v3 << 24) | (v4 << 16) | (v5 << 8) | (unsigned int)*(unsigned __int8 *)(v2 + v1 + 3);
    }

    __int64 __fastcall ByteStream::readString(__int64 a1, __int64 a2, __int64 a3)
    {
      __int64 IntInternal; // x0
      int v7; // w3
      int v8; // w19
      _QWORD *v9; // x8
      const String *v10; // x1
      _BYTE *v11; // x0
      _QWORD *v12; // x8
      const String *v13; // x1
      __int64 result; // x0
      _BYTE v15[24]; // [xsp+20h] [xbp-50h] BYREF
      _BYTE v16[24]; // [xsp+38h] [xbp-38h] BYREF
    
      IntInternal = ByteStream::readIntInternal((ChallengePopup *)a1);
      v8 = IntInternal;
      if ( (IntInternal & 0x80000000) != 0 )
      {
        if ( (_DWORD)IntInternal == -1 )
          return 0;
        v12 = (_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
          v12 = (_QWORD *)*v12;
        String::format((String *)"Negative String length encountered. ID: %s", (__int64)v16, v12);
        Debugger::warning((__siginfo *)v16, v13);
        v11 = v16;
    LABEL_10:
        String::~String((__int64)v11);
        return 0;
      }
      if ( (int)IntInternal > (int)a3 )
      {
        v9 = (_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
          v9 = (_QWORD *)*v9;
        String::format(
          (String *)"Too long String encountered, length %d, max %d. ID: %s",
          (__int64)v15,
          IntInternal,
          a3,
          v9);
        Debugger::warning((__siginfo *)v15, v10);
        v11 = v15;
        goto LABEL_10;
      }
      result = LogicStringUtil::createString(
                 *(LogicStringUtil **)(a1 + 32),
                 (char *)*(unsigned int *)(a1 + 20),
                 IntInternal,
                 v7);
      *(_DWORD *)(a1 + 20) += v8;
      return result;
    }

    void __usercall ByteStream::readStringReference(__int64 a1@<X0>, __int64 a2@<X1>, String *a3@<X8>)
    {
      int IntInternal; // w0
      const char *v7; // x1
      int v8; // w3
      const String *v9; // x1
      char *v10; // x1
      _BYTE v11[24]; // [xsp+8h] [xbp-38h] BYREF
    
      IntInternal = ByteStream::readIntInternal((ChallengePopup *)a1);
      if ( IntInternal < 0 )
      {
        Debugger::warning((__siginfo *)"Negative String reference length encountered.", v7);
        String::String(a3, "");
      }
      else if ( IntInternal <= (int)a2 )
      {
        v10 = (char *)*(unsigned int *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = (_DWORD)v10 + IntInternal;
        LogicStringUtil::createStringObject(*(LogicStringUtil **)(a1 + 32), v10, IntInternal, v8);
      }
      else
      {
        String::format((String *)"Too long String reference encountered, max %d ", (__int64)v11, a2);
        Debugger::warning((__siginfo *)v11, v9);
        String::~String((__int64)v11);
        String::String(a3, "");
      }
    }

    void __fastcall ByteStream::writeBoolean(__int64 a1, _BOOL4 a2)
    {
      __int64 v4; // x8
      __int64 v5; // x9
    
      ChecksumEncoder::writeBoolean((ExpBar *)a1, a2);
      if ( !*(_DWORD *)(a1 + 28) )
      {
        ByteStream::ensureCapacity(a1, 1);
        v4 = *(int *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = v4 + 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 32) + v4) = 0;
      }
      if ( a2 )
      {
        v5 = *(int *)(a1 + 20) + *(_QWORD *)(a1 + 32);
        *(_BYTE *)(v5 - 1) |= 1 << *(_DWORD *)(a1 + 28);
      }
      *(_DWORD *)(a1 + 28) = ((unsigned __int8)*(_DWORD *)(a1 + 28) + 1) & 7;
    }

    bool __fastcall ByteStream::readBoolean(__int64 a1)
    {
      int v1; // w9
      __int64 v2; // x8
      _BOOL8 v3; // x8
    
      v1 = *(_DWORD *)(a1 + 28);
      v2 = *(int *)(a1 + 20) + (__int64)((8 - v1) >> 3);
      *(_DWORD *)(a1 + 20) = v2;
      v3 = ((1 << v1) & *(char *)(v2 + *(_QWORD *)(a1 + 32) - 1)) != 0;
      *(_DWORD *)(a1 + 28) = ((_BYTE)v1 + 1) & 7;
      return v3;
    }

    __int64 __fastcall ByteStream::writeInt(ExpBar *a1, int a2)
    {
      ChecksumEncoder::writeInt(a1, a2);
      return ByteStream::writeIntToByteArray((__int64)a1, a2);
    }

    void __fastcall ByteStream::writeByte(__int64 a1, char a2)
    {
      __int64 v4; // x8
    
      ChecksumEncoder::writeByte((ExpBar *)a1, a2);
      *(_DWORD *)(a1 + 28) = 0;
      ByteStream::ensureCapacity(a1, 1);
      v4 = *(int *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v4 + 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v4) = a2;
    }

    void __fastcall ByteStream::writeShort(__int64 a1, int a2)
    {
      __int16 v2; // w19
      __int64 v4; // x9
      __int64 v5; // x8
    
      v2 = a2;
      ChecksumEncoder::writeShort((ChecksumEncoder *)a1, a2);
      *(_DWORD *)(a1 + 28) = 0;
      ByteStream::ensureCapacity(a1, 2);
      v4 = *(int *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v4 + 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v4) = HIBYTE(v2);
      v5 = *(int *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v5 + 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v5) = v2;
    }

    // attributes: thunk
    __int64 __fastcall ByteStream::readInt(ChallengePopup *this)
    {
      return ByteStream::readIntInternal(this);
    }

    __int64 __fastcall ByteStream::readByte(__int64 a1)
    {
      __int64 v1; // x8
    
      *(_DWORD *)(a1 + 28) = 0;
      v1 = *(int *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v1 + 1;
      return (unsigned int)*(char *)(*(_QWORD *)(a1 + 32) + v1);
    }

    __int64 __fastcall ByteStream::readShort(__int64 a1)
    {
      __int64 v1; // x8
      __int64 v2; // x10
      unsigned __int8 v3; // w11
    
      *(_DWORD *)(a1 + 28) = 0;
      v1 = *(int *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v1 + 1;
      v2 = *(_QWORD *)(a1 + 32);
      v3 = *(_BYTE *)(v2 + v1);
      *(_DWORD *)(a1 + 20) = v1 + 2;
      return *(unsigned __int8 *)(v2 + v1 + 1) | (v3 << 8);
    }

    __int64 __fastcall ByteStream::writeLongLong(ChecksumEncoder *a1, LogicLong *a2)
    {
      __int64 v4; // x1
      int HigherInt; // w0
      __int64 v6; // x1
      int LowerInt; // w1
    
      ChecksumEncoder::writeLongLong(a1, (__int64)a2);
      HigherInt = LogicLong::getHigherInt(a2, v4);
      ByteStream::writeIntToByteArray((__int64)a1, HigherInt);
      LowerInt = LogicLong::getLowerInt(a2, v6);
      return ByteStream::writeIntToByteArray((__int64)a1, LowerInt);
    }

    __int64 __fastcall ByteStream::readLongLong(ChallengePopup *a1)
    {
      LogicLong *IntInternal; // x20
      int v3; // w1
      int v4; // w2
    
      IntInternal = (LogicLong *)ByteStream::readIntInternal(a1);
      v3 = ByteStream::readIntInternal(a1);
      return LogicLong::toLong(IntInternal, v3, v4);
    }

    LogicLong *__fastcall ByteStream::readLong(ByteStream *a1)
    {
      LogicLong *v2; // x19
    
      v2 = (LogicLong *)operator new(8);
      LogicLong::LogicLong(v2);
      LogicLong::decode(v2, a1);
      return v2;
    }

    LogicLong *__fastcall ByteStream::readLong(ByteStream *a1, LogicLong *a2)
    {
      LogicLong *v2; // x19
    
      v2 = a2;
      if ( !a2 )
      {
        v2 = (LogicLong *)operator new(8);
        LogicLong::LogicLong(v2);
      }
      LogicLong::decode(v2, a1);
      return v2;
    }

    __int64 __fastcall ByteStream::writeBytes(__int64 a1, char *a2, int a3)
    {
      int v6; // w5
      __int64 result; // x0
    
      ChecksumEncoder::writeBytes((ChecksumEncoder *)a1, a2, a3);
      if ( !a2 )
        return ByteStream::writeIntToByteArray(a1, -1);
      ByteStream::ensureCapacity(a1, a3 + 4);
      ByteStream::writeIntToByteArray(a1, a3);
      result = LogicStringUtil::byteArrayCopy(
                 *(LogicStringUtil **)(a1 + 32),
                 (char *)*(unsigned int *)(a1 + 20),
                 (int)a2,
                 0,
                 a3,
                 v6);
      *(_DWORD *)(a1 + 20) += a3;
      return result;
    }

    __int64 __fastcall ByteStream::writeBytesWithoutLength(__int64 a1, char *a2, int a3)
    {
      __int64 result; // x0
      int v7; // w5
    
      result = ChecksumEncoder::writeBytes((ChecksumEncoder *)a1, a2, a3);
      if ( a2 )
      {
        ByteStream::ensureCapacity(a1, a3);
        result = LogicStringUtil::byteArrayCopy(
                   *(LogicStringUtil **)(a1 + 32),
                   (char *)*(unsigned int *)(a1 + 20),
                   (int)a2,
                   0,
                   a3,
                   v7);
        *(_DWORD *)(a1 + 20) += a3;
      }
      return result;
    }

    // attributes: thunk
    __int64 __fastcall ByteStream::readBytesLength(ChallengePopup *this)
    {
      return ByteStream::readIntInternal(this);
    }

    LogicStringUtil *__fastcall ByteStream::readBytes(__int64 a1, const char *a2, __int64 a3)
    {
      int v3; // w19
      const String *v5; // x1
      LogicStringUtil *v6; // x21
      __int64 v7; // x0
      int v8; // w5
      _BYTE v10[24]; // [xsp+8h] [xbp-38h] BYREF
    
      v3 = (int)a2;
      if ( ((unsigned int)a2 & 0x80000000) != 0 )
      {
        if ( (_DWORD)a2 != -1 )
          Debugger::warning((__siginfo *)"Negative readBytes length encountered.", a2);
        return 0;
      }
      if ( (int)a2 > (int)a3 )
      {
        String::format((String *)"readBytes too long array, max %d", (__int64)v10, a3);
        Debugger::warning((__siginfo *)v10, v5);
        String::~String((__int64)v10);
        return 0;
      }
      if ( (int)a2 < 0LL )
        v7 = -1;
      else
        v7 = (int)a2;
      v6 = (LogicStringUtil *)operator new[](v7);
      LogicStringUtil::byteArrayCopy(v6, 0, *(_QWORD *)(a1 + 32), (const char *)*(unsigned int *)(a1 + 20), v3, v8);
      *(_DWORD *)(a1 + 20) += v3;
      return v6;
    }

    void __fastcall ByteStream::setByteArray(__int64 a1, __int64 a2, int a3)
    {
      __int64 v6; // x0
    
      v6 = *(_QWORD *)(a1 + 32);
      if ( v6 != a2 )
      {
        if ( v6 )
          operator delete[](v6);
        *(_QWORD *)(a1 + 32) = a2;
      }
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 40) = a3;
      *(_DWORD *)(a1 + 24) = a3;
    }

    __int64 __fastcall ByteStream::getByteArray(ChallengePopup *this)
    {
      return *((_QWORD *)this + 4);
    }

    __int64 __fastcall ByteStream::removeByteArray(ChallengePopup *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = 0;
      return v1;
    }

    void __fastcall ByteStream::destruct(ChallengePopup *this)
    {
      __int64 v2; // x0
    
      ChecksumEncoder::destruct(this);
      v2 = *((_QWORD *)this + 4);
      if ( v2 )
        operator delete[](v2);
      *(_QWORD *)((char *)this + 36) = 0;
      *(_QWORD *)((char *)this + 28) = 0;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    bool __fastcall ByteStream::isAtEnd(ChallengePopup *this)
    {
      int v1; // w8
      int v2; // w9
    
      v1 = *((_DWORD *)this + 5);
      v2 = *((_DWORD *)this + 6);
      if ( v1 >= v2 )
        v2 = *((_DWORD *)this + 5);
      return v1 >= v2;
    }

    void __fastcall ByteStream::writeVInt(ChallengePopup *this, int a2)
    {
      int v4; // w8
      char v5; // w8
      __int64 v6; // x9
      __int64 v7; // x9
      __int64 v8; // x9
      __int64 v9; // x9
      __int64 v10; // x9
      __int64 v11; // x9
      __int64 v12; // x9
      __int64 v13; // x9
      __int64 v14; // x9
      __int64 v15; // x9
      __int64 v16; // x9
    
      ChecksumEncoder::writeVInt(this, a2);
      ByteStream::ensureCapacity((__int64)this, 5);
      *((_DWORD *)this + 7) = 0;
      if ( a2 < 0 )
      {
        if ( a2 >= -63 )
        {
          LOBYTE(v4) = a2 & 0x3F | 0x40;
          goto LABEL_19;
        }
        if ( a2 < -8191 )
        {
          if ( a2 < -1048575 )
          {
            v12 = *((int *)this + 5);
            *((_DWORD *)this + 5) = v12 + 1;
            *(_BYTE *)(*((_QWORD *)this + 4) + v12) = a2 | 0xC0;
            v13 = *((int *)this + 5);
            *((_DWORD *)this + 5) = v13 + 1;
            *(_BYTE *)(*((_QWORD *)this + 4) + v13) = ((unsigned int)a2 >> 6) | 0x80;
            v14 = *((int *)this + 5);
            *((_DWORD *)this + 5) = v14 + 1;
            *(_BYTE *)(*((_QWORD *)this + 4) + v14) = ((unsigned int)a2 >> 13) | 0x80;
            if ( a2 < -134217727 )
            {
    LABEL_18:
              v15 = *((int *)this + 5);
              *((_DWORD *)this + 5) = v15 + 1;
              *(_BYTE *)(*((_QWORD *)this + 4) + v15) = ((unsigned int)a2 >> 20) | 0x80;
              v4 = ((unsigned int)a2 >> 27) & 0xF;
              goto LABEL_19;
            }
    LABEL_17:
            v4 = ((unsigned int)a2 >> 20) & 0x7F;
            goto LABEL_19;
          }
          v5 = a2 | 0xC0;
    LABEL_15:
          v10 = *((int *)this + 5);
          *((_DWORD *)this + 5) = v10 + 1;
          *(_BYTE *)(*((_QWORD *)this + 4) + v10) = v5;
          v11 = *((int *)this + 5);
          *((_DWORD *)this + 5) = v11 + 1;
          *(_BYTE *)(*((_QWORD *)this + 4) + v11) = ((unsigned int)a2 >> 6) | 0x80;
          v4 = ((unsigned int)a2 >> 13) & 0x7F;
          goto LABEL_19;
        }
        v5 = a2 | 0xC0;
    LABEL_12:
        v9 = *((int *)this + 5);
        *((_DWORD *)this + 5) = v9 + 1;
        *(_BYTE *)(*((_QWORD *)this + 4) + v9) = v5;
        v4 = ((unsigned int)a2 >> 6) & 0x7F;
        goto LABEL_19;
      }
      if ( a2 > 63 )
      {
        v5 = a2 & 0x3F | 0x80;
        if ( a2 >= 0x2000 )
        {
          if ( a2 >= 0x100000 )
          {
            v6 = *((int *)this + 5);
            *((_DWORD *)this + 5) = v6 + 1;
            *(_BYTE *)(*((_QWORD *)this + 4) + v6) = v5;
            v7 = *((int *)this + 5);
            *((_DWORD *)this + 5) = v7 + 1;
            *(_BYTE *)(*((_QWORD *)this + 4) + v7) = ((unsigned int)a2 >> 6) | 0x80;
            v8 = *((int *)this + 5);
            *((_DWORD *)this + 5) = v8 + 1;
            *(_BYTE *)(*((_QWORD *)this + 4) + v8) = ((unsigned int)a2 >> 13) | 0x80;
            if ( a2 > 0x7FFFFFF )
              goto LABEL_18;
            goto LABEL_17;
          }
          goto LABEL_15;
        }
        goto LABEL_12;
      }
      LOBYTE(v4) = a2 & 0x3F;
    LABEL_19:
      v16 = *((int *)this + 5);
      *((_DWORD *)this + 5) = v16 + 1;
      *(_BYTE *)(*((_QWORD *)this + 4) + v16) = v4;
    }

    __int64 __fastcall ByteStream::readVInt(ChallengePopup *this)
    {
      __int64 v1; // x9
      __int64 v2; // x11
      __int64 v3; // x10
      char v4; // w12
      __int64 v5; // x8
      int v6; // w11
      int v7; // w11
      int v8; // w12
      int v9; // w11
      int v10; // w8
      int v11; // w13
      int v12; // w12
      int v13; // w13
      int v14; // w11
    
      *((_DWORD *)this + 7) = 0;
      v1 = *((int *)this + 5);
      v2 = v1 + 1;
      *((_DWORD *)this + 5) = v1 + 1;
      v3 = *((_QWORD *)this + 4);
      v4 = *(_BYTE *)(v3 + v1);
      v5 = v4 & 0x3F;
      if ( (v4 & 0x40) != 0 )
      {
        if ( v4 < 0 )
        {
          *((_DWORD *)this + 5) = v1 + 2;
          v9 = *(char *)(v3 + v2);
          v10 = (v9 << 6) & 0x1FC0 | v5;
          if ( (v9 & 0x80) != 0 )
          {
            *((_DWORD *)this + 5) = v1 + 3;
            v11 = *(char *)(v3 + v1 + 2);
            v12 = (v11 << 13) & 0xFE000 | v10;
            if ( (v11 & 0x80) != 0 )
            {
              *((_DWORD *)this + 5) = v1 + 4;
              v13 = *(char *)(v3 + v1 + 3);
              v14 = (v13 << 20) & 0x7F00000 | v12;
              if ( (v13 & 0x80) != 0 )
              {
                *((_DWORD *)this + 5) = v1 + 5;
                return v14 | (*(unsigned __int8 *)(v3 + v1 + 4) << 27) | 0x80000000;
              }
              else
              {
                return v14 | 0xF8000000;
              }
            }
            else
            {
              return v12 | 0xFFF00000;
            }
          }
          else
          {
            return v10 | 0xFFFFE000;
          }
        }
        else
        {
          return *(_DWORD *)&v4 | 0xFFFFFFC0;
        }
      }
      else if ( v4 < 0 )
      {
        *((_DWORD *)this + 5) = v1 + 2;
        v6 = *(char *)(v3 + v2);
        v5 = (v6 << 6) & 0x1FC0 | (unsigned int)v5;
        if ( (v6 & 0x80) != 0 )
        {
          *((_DWORD *)this + 5) = v1 + 3;
          v7 = *(char *)(v3 + v1 + 2);
          v5 = (v7 << 13) & 0xFE000 | (unsigned int)v5;
          if ( (v7 & 0x80) != 0 )
          {
            *((_DWORD *)this + 5) = v1 + 4;
            v8 = *(char *)(v3 + v1 + 3);
            v5 = (v8 << 20) & 0x7F00000 | (unsigned int)v5;
            if ( (v8 & 0x80) != 0 )
            {
              *((_DWORD *)this + 5) = v1 + 5;
              return (unsigned int)v5 | (*(unsigned __int8 *)(v3 + v1 + 4) << 27);
            }
          }
        }
      }
      return v5;
    }

    __int64 __fastcall ByteStream::isByteStream(ChallengePopup *this)
    {
      return 1;
    }

    void __fastcall ByteStream::~ByteStream(ChallengePopup *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ByteStream::~ByteStream(ChallengePopup *this)
    {
      operator delete(this);
    }

}; // end class ByteStream
