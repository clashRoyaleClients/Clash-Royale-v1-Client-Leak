class LogicDeviceLinkConfirmYesMessage
{
public:

    __int64 __fastcall LogicDeviceLinkConfirmYesMessage::LogicDeviceLinkConfirmYesMessage(__int64 a1)
    {
      PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)a1 = off_100468D38;
      String::String((String *)(a1 + 72));
      LogicLong::LogicLong((LogicLong *)(a1 + 96));
      String::String((String *)(a1 + 104));
      String::String((String *)(a1 + 128));
      LogicDeviceLinkConfirmYesMessage::initializeMembers((LogicDeviceLinkConfirmYesMessage *)a1);
      return a1;
    }

    // attributes: thunk
    void __fastcall LogicDeviceLinkConfirmYesMessage::LogicDeviceLinkConfirmYesMessage(
            LogicDeviceLinkConfirmYesMessage *this)
    {
      __ZN32LogicDeviceLinkConfirmYesMessageC2Ev((__int64)this);
    }

    __int64 __fastcall LogicDeviceLinkConfirmYesMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeStringReference((ByteStream *)(a1 + 16), (const String *)(a1 + 72));
      ByteStream::writeStringReference((ByteStream *)(a1 + 16), (const String *)(a1 + 104));
      ByteStream::writeStringReference((ByteStream *)(a1 + 16), (const String *)(a1 + 128));
      return LogicLong::encode(a1 + 96, a1 + 16);
    }

    __int64 __fastcall LogicDeviceLinkConfirmYesMessage::decode(__int64 a1)
    {
      LogicDataTables *v2; // x0
      __int64 Globals; // x0
    
      v2 = (LogicDataTables *)PiranhaMessage::decode((#1242 *)a1);
      Globals = LogicDataTables::getGlobals(v2);
      ByteStream::readStringReference((ByteStream *)(a1 + 16), *(_DWORD *)(Globals + 488));
      String::operator=((String *)(a1 + 72));
      String::~String();
      ByteStream::readStringReference((ByteStream *)(a1 + 16), 900000);
      String::operator=((String *)(a1 + 104));
      String::~String();
      ByteStream::readStringReference((ByteStream *)(a1 + 16), 900000);
      String::operator=((String *)(a1 + 128));
      String::~String();
      return LogicLong::decode((LogicLong *)(a1 + 96), (ByteStream *)(a1 + 16));
    }

    __int64 __fastcall LogicDeviceLinkConfirmYesMessage::getMessageType(LogicChangeAllianceRoleCommand *this)
    {
      return 16003;
    }

    __int64 __fastcall LogicDeviceLinkConfirmYesMessage::getServiceNodeType(LogicChangeAllianceRoleCommand *this)
    {
      return 1;
    }

    __int64 __fastcall LogicDeviceLinkConfirmYesMessage::destruct(#1242 *a1)
    {
      PiranhaMessage::destruct(a1);
      return LogicDeviceLinkConfirmYesMessage::initializeMembers(a1);
    }

    __int64 __fastcall LogicDeviceLinkConfirmYesMessage::setLinkCode(String *a1)
    {
      return String::operator=(a1 + 3);
    }

    __int64 __fastcall LogicDeviceLinkConfirmYesMessage::setAccountId(__int64 this, int a2, int a3)
    {
      *(_DWORD *)(this + 96) = a2;
      *(_DWORD *)(this + 100) = a3;
      return this;
    }

    __int64 __fastcall LogicDeviceLinkConfirmYesMessage::setPassToken(__int64 a1)
    {
      return String::operator=((String *)(a1 + 104));
    }

    __int64 __fastcall LogicDeviceLinkConfirmYesMessage::setNewDeviceName(__int64 a1)
    {
      return String::operator=((String *)(a1 + 128));
    }

    __int64 __fastcall LogicDeviceLinkConfirmYesMessage::initializeMembers(__int64 a1)
    {
      __int64 result; // x0
    
      String::operator=(a1 + 72, "");
      String::operator=(a1 + 104, "");
      result = String::operator=(a1 + 128, "");
      *(_QWORD *)(a1 + 96) = 0;
      return result;
    }

    _QWORD *__fastcall LogicDeviceLinkConfirmYesMessage::~LogicDeviceLinkConfirmYesMessage(_QWORD *a1)
    {
      *a1 = off_100468D38;
      String::~String();
      String::~String();
      a1[12] = 0;
      String::~String();
      return a1;
    }

    void __fastcall LogicDeviceLinkConfirmYesMessage::~LogicDeviceLinkConfirmYesMessage(_QWORD *a1)
    {
      *a1 = off_100468D38;
      String::~String();
      String::~String();
      a1[12] = 0;
      String::~String();
      operator delete(a1);
    }

}; // end class LogicDeviceLinkConfirmYesMessage
