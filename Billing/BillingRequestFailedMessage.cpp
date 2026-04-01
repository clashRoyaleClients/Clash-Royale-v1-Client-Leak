class BillingRequestFailedMessage
{
public:

    void __fastcall BillingRequestFailedMessage::BillingRequestFailedMessage(BillingRequestFailedMessage *this)
    {
      PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)this = off_100461230;
      String::String((String *)((char *)this + 80));
      *((_DWORD *)this + 17) = 0;
      String::operator=((char *)this + 80, "");
      *((_DWORD *)this + 18) = 0;
    }

    // attributes: thunk
    void __fastcall BillingRequestFailedMessage::BillingRequestFailedMessage(BillingRequestFailedMessage *this)
    {
      __ZN27BillingRequestFailedMessageC2Ev(this);
    }

    __int64 __fastcall BillingRequestFailedMessage::encode(LogicCharacterData *this)
    {
      PiranhaMessage::encode(this);
      ByteStream::writeVInt((LogicCharacterData *)((char *)this + 16), *((_DWORD *)this + 17));
      ByteStream::writeString((LogicCharacterData *)((char *)this + 16), (String *)((char *)this + 80));
      return ByteStream::writeVInt((LogicCharacterData *)((char *)this + 16), *((_DWORD *)this + 18));
    }

    __int64 __fastcall BillingRequestFailedMessage::decode(LogicCharacterData *this)
    {
      String *String; // x0
      const char *v3; // x3
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_DWORD *)this + 17) = ByteStream::readVInt((LogicCharacterData *)((char *)this + 16));
      String = (String *)ByteStream::readString((LogicCharacterData *)((char *)this + 16), 900000);
      LogicStringUtil::safeString((nlink_t *)this + 40, String, (String *)"", v3);
      String::operator=((String *)((char *)this + 80));
      result = ByteStream::readVInt((LogicCharacterData *)((char *)this + 16));
      *((_DWORD *)this + 18) = result;
      return result;
    }

    __int64 __fastcall BillingRequestFailedMessage::getServiceNodeType(LogicCharacterData *this)
    {
      return 1;
    }

    void __fastcall BillingRequestFailedMessage::~BillingRequestFailedMessage(LogicCharacterData *this)
    {
      *(_QWORD *)this = off_100461230;
      String::~String((String *)((char *)this + 80));
    }

    void __fastcall BillingRequestFailedMessage::~BillingRequestFailedMessage(LogicCharacterData *this)
    {
      *(_QWORD *)this = off_100461230;
      String::~String((String *)((char *)this + 80));
      operator delete(this);
    }

    __int64 __fastcall BillingRequestFailedMessage::getMessageType(LogicCharacterData *this)
    {
      return 20121;
    }

}; // end class BillingRequestFailedMessage
