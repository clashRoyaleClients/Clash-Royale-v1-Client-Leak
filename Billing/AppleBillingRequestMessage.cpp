class AppleBillingRequestMessage
{
public:

    String *__fastcall AppleBillingRequestMessage::AppleBillingRequestMessage(String *a1)
    {
      PiranhaMessage::PiranhaMessage((__int64)a1, 0);
      *(_QWORD *)&a1->m_length = off_10046D228;
      String::String(a1 + 3);
      String::String(a1 + 4);
      String::String(a1 + 5);
      String::String(a1 + 6);
      AppleBillingRequestMessage::initializeMembers((AppleBillingRequestMessage *)a1);
      return a1;
    }

    // attributes: thunk
    void __fastcall AppleBillingRequestMessage::AppleBillingRequestMessage(AppleBillingRequestMessage *this)
    {
      __ZN26AppleBillingRequestMessageC2Ev((String *)this);
    }

    __int64 __fastcall AppleBillingRequestMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeString((ByteStream *)(a1 + 16), (String *)(a1 + 72));
      ByteStream::writeString((ByteStream *)(a1 + 16), (String *)(a1 + 96));
      ByteStream::writeString((ByteStream *)(a1 + 16), (String *)(a1 + 120));
      ByteStream::writeString((ByteStream *)(a1 + 16), (String *)(a1 + 144));
      return ByteStream::writeBytes((ByteStream *)(a1 + 16), *(char **)(a1 + 168), *(_DWORD *)(a1 + 176));
    }

    __int64 __fastcall AppleBillingRequestMessage::decode(__int64 a1)
    {
      String *String; // x0
      const char *v3; // x3
      String *v4; // x0
      const char *v5; // x3
      String *v6; // x0
      const char *v7; // x3
      String *v8; // x0
      const char *v9; // x3
      const char *v10; // x1
      unsigned int BytesLength; // w8
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      String = (String *)ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      LogicStringUtil::safeString((nlink_t *)(a1 + 72), String, (String *)"", v3);
      String::operator=((String *)(a1 + 72));
      v4 = (String *)ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      LogicStringUtil::safeString((nlink_t *)(a1 + 96), v4, (String *)"", v5);
      String::operator=((String *)(a1 + 96));
      v6 = (String *)ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      LogicStringUtil::safeString((nlink_t *)(a1 + 120), v6, (String *)"", v7);
      String::operator=((String *)(a1 + 120));
      v8 = (String *)ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      LogicStringUtil::safeString((nlink_t *)(a1 + 144), v8, (String *)"", v9);
      String::operator=((String *)(a1 + 144));
      BytesLength = ByteStream::readBytesLength((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 176) = BytesLength;
      if ( BytesLength >= 0x493E1 )
        Debugger::error((__siginfo *)"Illegal byte array length encountered.", v10);
      result = ByteStream::readBytes((ByteStream *)(a1 + 16), BytesLength, 900000);
      *(_QWORD *)(a1 + 168) = result;
      return result;
    }

    __int64 __fastcall AppleBillingRequestMessage::destruct(__int64 a1)
    {
      __int64 v2; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(_QWORD *)(a1 + 168);
      if ( v2 )
        operator delete[](v2);
      *(_QWORD *)(a1 + 168) = 0;
      return AppleBillingRequestMessage::initializeMembers((AppleBillingRequestMessage *)a1);
    }

    __int64 __fastcall AppleBillingRequestMessage::getMessageType(LogicHintData *this)
    {
      return 10150;
    }

    __int64 __fastcall AppleBillingRequestMessage::getServiceNodeType(LogicHintData *this)
    {
      return 1;
    }

    _BYTE *__fastcall AppleBillingRequestMessage::setReceiptData(LogicHintData *this, _BYTE *a2, int a3)
    {
      __int64 v6; // x0
      __int64 v7; // x0
      _BYTE *result; // x0
      __int64 v9; // x9
    
      v6 = *((_QWORD *)this + 21);
      if ( v6 )
        operator delete[](v6);
      *((_DWORD *)this + 44) = a3;
      if ( a3 < 0LL )
        v7 = -1;
      else
        v7 = a3;
      result = (_BYTE *)operator new[](v7);
      *((_QWORD *)this + 21) = result;
      if ( a3 >= 1 )
      {
        *result = *a2;
        if ( a3 != 1 )
        {
          v9 = 1;
          do
          {
            *(_BYTE *)(*((_QWORD *)this + 21) + v9) = a2[v9];
            ++v9;
          }
          while ( a3 != (_DWORD)v9 );
        }
      }
      return result;
    }

    __int64 __fastcall AppleBillingRequestMessage::setTID(String *a1)
    {
      return String::operator=(a1 + 3);
    }

    __int64 __fastcall AppleBillingRequestMessage::setProdID(String *a1)
    {
      return String::operator=(a1 + 4);
    }

    __int64 __fastcall AppleBillingRequestMessage::setCurrencyCode(String *a1)
    {
      return String::operator=(a1 + 5);
    }

    __int64 __fastcall AppleBillingRequestMessage::setPrice(String *a1)
    {
      return String::operator=(a1 + 6);
    }

    __int64 __fastcall AppleBillingRequestMessage::initializeMembers(__int64 a1)
    {
      __int64 result; // x0
    
      String::operator=(a1 + 72, "");
      String::operator=(a1 + 96, "");
      String::operator=(a1 + 120, "");
      result = String::operator=(a1 + 144, "");
      *(_QWORD *)(a1 + 168) = 0;
      *(_DWORD *)(a1 + 176) = 0;
      return result;
    }

    _QWORD *__fastcall AppleBillingRequestMessage::~AppleBillingRequestMessage(_QWORD *a1)
    {
      *a1 = off_10046D228;
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      return a1;
    }

    void __fastcall AppleBillingRequestMessage::~AppleBillingRequestMessage(_QWORD *a1)
    {
      *a1 = off_10046D228;
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      operator delete(a1);
    }

}; // end class AppleBillingRequestMessage
