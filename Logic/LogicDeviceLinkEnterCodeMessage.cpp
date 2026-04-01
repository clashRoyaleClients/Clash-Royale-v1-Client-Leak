class LogicDeviceLinkEnterCodeMessage
{
public:

    void __fastcall LogicDeviceLinkEnterCodeMessage::LogicDeviceLinkEnterCodeMessage(LogicDeviceLinkEnterCodeMessage *this)
    {
      PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)this = off_100472190;
      String::String((String *)this + 3);
      String::operator=((char *)this + 72, "");
    }

    // attributes: thunk
    void __fastcall LogicDeviceLinkEnterCodeMessage::LogicDeviceLinkEnterCodeMessage(LogicDeviceLinkEnterCodeMessage *this)
    {
      __ZN31LogicDeviceLinkEnterCodeMessageC2Ev(this);
    }

    __int64 __fastcall LogicDeviceLinkEnterCodeMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeStringReference((ByteStream *)(a1 + 16), (const String *)(a1 + 72));
    }

    void __fastcall LogicDeviceLinkEnterCodeMessage::decode(__int64 a1)
    {
      __int64 Globals; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      Globals = LogicDataTables::getGlobals();
      ByteStream::readStringReference((ByteStream *)(a1 + 16), *(_DWORD *)(Globals + 488));
      String::operator=((String *)(a1 + 72));
      String::~String();
    }

    __int64 __fastcall LogicDeviceLinkEnterCodeMessage::getMessageType(DonationBriefingPopup *this)
    {
      return 16002;
    }

    __int64 __fastcall LogicDeviceLinkEnterCodeMessage::getServiceNodeType(DonationBriefingPopup *this)
    {
      return 9;
    }

    __int64 __fastcall LogicDeviceLinkEnterCodeMessage::destruct(DonationBriefingPopup *this)
    {
      PiranhaMessage::destruct(this);
      return String::operator=((char *)this + 72, "");
    }

    __int64 __fastcall LogicDeviceLinkEnterCodeMessage::setLinkCode(String *this, const String *a2)
    {
      return String::operator=(this + 3);
    }

    void __fastcall LogicDeviceLinkEnterCodeMessage::~LogicDeviceLinkEnterCodeMessage(DonationBriefingPopup *this)
    {
      *(_QWORD *)this = off_100472190;
      String::~String();
    }

    void __fastcall LogicDeviceLinkEnterCodeMessage::~LogicDeviceLinkEnterCodeMessage(DonationBriefingPopup *this)
    {
      *(_QWORD *)this = off_100472190;
      String::~String();
      operator delete(this);
    }

}; // end class LogicDeviceLinkEnterCodeMessage
