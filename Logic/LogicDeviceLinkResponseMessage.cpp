class LogicDeviceLinkResponseMessage
{
public:

    void __fastcall LogicDeviceLinkResponseMessage::LogicDeviceLinkResponseMessage(LogicDeviceLinkResponseMessage *this)
    {
      PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)this = off_100464518;
      String::String((String *)this + 3);
      String::String((String *)((char *)this + 112));
      LogicLong::LogicLong((LogicDeviceLinkResponseMessage *)((char *)this + 136));
      String::String((String *)this + 6);
      LogicDeviceLinkResponseMessage::initializeMembers(this);
    }

    // attributes: thunk
    void __fastcall LogicDeviceLinkResponseMessage::LogicDeviceLinkResponseMessage(LogicDeviceLinkResponseMessage *this)
    {
      __ZN30LogicDeviceLinkResponseMessageC2Ev(this);
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeStringReference((ByteStream *)(a1 + 16), (const String *)(a1 + 72));
      ByteStream::writeStringReference((ByteStream *)(a1 + 16), (const String *)(a1 + 112));
      ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 100));
      ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 104));
      ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 96));
      ByteStream::writeStringReference((ByteStream *)(a1 + 16), (const String *)(a1 + 144));
      return LogicLong::encode(a1 + 136, a1 + 16);
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::decode(__int64 a1)
    {
      LogicDataTables *v2; // x0
      __int64 Globals; // x0
      String v5; // [xsp+8h] [xbp-68h] BYREF
      String v6; // [xsp+20h] [xbp-50h] BYREF
      String v7; // [xsp+38h] [xbp-38h] BYREF
    
      v2 = (LogicDataTables *)PiranhaMessage::decode((#1242 *)a1);
      Globals = LogicDataTables::getGlobals(v2);
      ByteStream::readStringReference((ByteStream *)(a1 + 16), *(_DWORD *)(Globals + 488));
      String::operator=((String *)(a1 + 72));
      String::~String(&v7);
      ByteStream::readStringReference((ByteStream *)(a1 + 16), 900000);
      String::operator=((String *)(a1 + 112));
      String::~String(&v6);
      *(_DWORD *)(a1 + 100) = ByteStream::readInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 104) = ByteStream::readInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 96) = ByteStream::readInt((#1225 *)(a1 + 16));
      ByteStream::readStringReference((ByteStream *)(a1 + 16), 900000);
      String::operator=((String *)(a1 + 144));
      String::~String(&v5);
      return LogicLong::decode((LogicLong *)(a1 + 136), (ByteStream *)(a1 + 16));
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::getMessageType(SelectSpellsFromCoOpenMessage *this)
    {
      return 26005;
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::getServiceNodeType(SelectSpellsFromCoOpenMessage *this)
    {
      return 1;
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::destruct(#1242 *a1)
    {
      PiranhaMessage::destruct(a1);
      return LogicDeviceLinkResponseMessage::initializeMembers(a1);
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::getLinkCode(SelectSpellsFromCoOpenMessage *this)
    {
      return (__int64)this + 72;
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::getVillageName(SelectSpellsFromCoOpenMessage *this)
    {
      return (__int64)this + 112;
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::getErrorCode(SelectSpellsFromCoOpenMessage *this)
    {
      return *((unsigned int *)this + 24);
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::getVillageLevel(SelectSpellsFromCoOpenMessage *this)
    {
      return *((unsigned int *)this + 25);
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::getExpLevel(SelectSpellsFromCoOpenMessage *this)
    {
      return *((unsigned int *)this + 26);
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::getAccountID(SelectSpellsFromCoOpenMessage *this)
    {
      return (__int64)this + 136;
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::getPassToken(SelectSpellsFromCoOpenMessage *this)
    {
      return (__int64)this + 144;
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::initializeMembers(__int64 a1)
    {
      String::operator=(a1 + 72, "");
      *(_QWORD *)(a1 + 96) = 0;
      *(_DWORD *)(a1 + 104) = 0;
      String::operator=(a1 + 112, "");
      *(_QWORD *)(a1 + 136) = 0;
      return String::operator=(a1 + 144, "");
    }

    __int64 __fastcall LogicDeviceLinkResponseMessage::~LogicDeviceLinkResponseMessage(__int64 a1)
    {
      *(_QWORD *)a1 = off_100464518;
      String::~String((String *)(a1 + 144));
      *(_QWORD *)(a1 + 136) = 0;
      String::~String((String *)(a1 + 112));
      String::~String((String *)(a1 + 72));
      return a1;
    }

    void __fastcall LogicDeviceLinkResponseMessage::~LogicDeviceLinkResponseMessage(char *a1)
    {
      *(_QWORD *)a1 = off_100464518;
      String::~String((String *)a1 + 6);
      *((_QWORD *)a1 + 17) = 0;
      String::~String((String *)(a1 + 112));
      String::~String((String *)a1 + 3);
      operator delete(a1);
    }

}; // end class LogicDeviceLinkResponseMessage
