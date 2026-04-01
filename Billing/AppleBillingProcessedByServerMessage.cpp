class AppleBillingProcessedByServerMessage
{
public:

    void __fastcall AppleBillingProcessedByServerMessage::AppleBillingProcessedByServerMessage(
            AppleBillingProcessedByServerMessage *this)
    {
      PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)this = off_100461278;
      String::String((String *)this + 3);
      String::String((String *)this + 4);
      String::operator=((char *)this + 72, "");
      *((_DWORD *)this + 30) = -1;
    }

    // attributes: thunk
    void __fastcall AppleBillingProcessedByServerMessage::AppleBillingProcessedByServerMessage(
            AppleBillingProcessedByServerMessage *this)
    {
      __ZN36AppleBillingProcessedByServerMessageC2Ev(this);
    }

    __int64 __fastcall AppleBillingProcessedByServerMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeString((ByteStream *)(a1 + 16), (String *)(a1 + 72));
      ByteStream::writeString((ByteStream *)(a1 + 16), (String *)(a1 + 96));
      return ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 120));
    }

    __int64 __fastcall AppleBillingProcessedByServerMessage::decode(__int64 a1)
    {
      String *String; // x0
      const char *v3; // x3
      String *v4; // x0
      const char *v5; // x3
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      String = (String *)ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      LogicStringUtil::safeString((nlink_t *)(a1 + 72), String, (String *)"", v3);
      String::operator=((String *)(a1 + 72));
      v4 = (String *)ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      LogicStringUtil::safeString((nlink_t *)(a1 + 96), v4, (String *)"", v5);
      String::operator=((String *)(a1 + 96));
      result = ByteStream::readInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 120) = result;
      return result;
    }

    __int64 __fastcall AppleBillingProcessedByServerMessage::destruct(LogicMath *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::destruct(this);
      result = String::operator=((char *)this + 72, "");
      *((_DWORD *)this + 30) = -1;
      return result;
    }

    __int64 __fastcall AppleBillingProcessedByServerMessage::getMessageType(LogicMath *this)
    {
      return 20151;
    }

    __int64 __fastcall AppleBillingProcessedByServerMessage::getServiceNodeType(LogicMath *this)
    {
      return 1;
    }

    __int64 __fastcall AppleBillingProcessedByServerMessage::getTID(LogicMath *this)
    {
      return (__int64)this + 72;
    }

    __int64 __fastcall AppleBillingProcessedByServerMessage::getProdId(LogicMath *this)
    {
      return (__int64)this + 96;
    }

    void __fastcall AppleBillingProcessedByServerMessage::~AppleBillingProcessedByServerMessage(String *this)
    {
      *(_QWORD *)&this->m_length = off_100461278;
      String::~String(this + 4);
      String::~String(this + 3);
    }

    void __fastcall AppleBillingProcessedByServerMessage::~AppleBillingProcessedByServerMessage(String *a1)
    {
      *(_QWORD *)&a1->m_length = off_100461278;
      String::~String(a1 + 4);
      String::~String(a1 + 3);
      operator delete(a1);
    }

}; // end class AppleBillingProcessedByServerMessage
