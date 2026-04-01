class LogicDeviceLinkDoneMessage
{
public:

    __int64 __fastcall LogicDeviceLinkDoneMessage::LogicDeviceLinkDoneMessage(__int64 a1)
    {
      PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)a1 = off_1004636C8;
      LogicLong::LogicLong((LogicLong *)(a1 + 68));
      String::String((String *)(a1 + 80));
      String::operator=(a1 + 80, "");
      *(_QWORD *)(a1 + 68) = 0;
      return a1;
    }

    // attributes: thunk
    void __fastcall LogicDeviceLinkDoneMessage::LogicDeviceLinkDoneMessage(LogicDeviceLinkDoneMessage *this)
    {
      __ZN26LogicDeviceLinkDoneMessageC2Ev((__int64)this);
    }

    __int64 __fastcall LogicDeviceLinkDoneMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeStringReference((ByteStream *)(a1 + 16), (const String *)(a1 + 80));
      return LogicLong::encode(a1 + 68, a1 + 16);
    }

    __int64 __fastcall LogicDeviceLinkDoneMessage::decode(__int64 a1)
    {
      String v3; // [xsp+8h] [xbp-38h] BYREF
    
      PiranhaMessage::decode((#1242 *)a1);
      ByteStream::readStringReference((ByteStream *)(a1 + 16), 900000);
      String::operator=((String *)(a1 + 80));
      String::~String(&v3);
      return LogicLong::decode((LogicLong *)(a1 + 68), (ByteStream *)(a1 + 16));
    }

    __int64 __fastcall LogicDeviceLinkDoneMessage::getMessageType(KeepAliveServerMessage *this)
    {
      return 26007;
    }

    __int64 __fastcall LogicDeviceLinkDoneMessage::getServiceNodeType(KeepAliveServerMessage *this)
    {
      return 1;
    }

    __int64 __fastcall LogicDeviceLinkDoneMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      result = String::operator=(a1 + 80, "");
      *(_QWORD *)(a1 + 68) = 0;
      return result;
    }

    __int64 __fastcall LogicDeviceLinkDoneMessage::getAccountID(KeepAliveServerMessage *this)
    {
      return (__int64)this + 68;
    }

    __int64 __fastcall LogicDeviceLinkDoneMessage::getPassToken(KeepAliveServerMessage *this)
    {
      return (__int64)this + 80;
    }

    __int64 __fastcall LogicDeviceLinkDoneMessage::~LogicDeviceLinkDoneMessage(__int64 a1)
    {
      *(_QWORD *)a1 = off_1004636C8;
      String::~String((String *)(a1 + 80));
      *(_QWORD *)(a1 + 68) = 0;
      return a1;
    }

    void __fastcall LogicDeviceLinkDoneMessage::~LogicDeviceLinkDoneMessage(KeepAliveServerMessage *this)
    {
      *(_QWORD *)this = off_1004636C8;
      String::~String((String *)((char *)this + 80));
      operator delete(this);
    }

}; // end class LogicDeviceLinkDoneMessage
