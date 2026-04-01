class PiranhaMessage
{
public:

    __int64 __fastcall PiranhaMessage::PiranhaMessage(__int64 a1, int a2)
    {
      *(_QWORD *)a1 = off_100475DD8;
      ByteStream::ByteStream((ByteStream *)(a1 + 16), 10);
      *(_DWORD *)(a1 + 64) = 0;
      *(_DWORD *)(a1 + 8) = a2;
      return a1;
    }

    void __fastcall PiranhaMessage::encode(mach_port_name_t *this)
    {
      ;
    }

    void __fastcall PiranhaMessage::decode(mach_port_name_t *this)
    {
      ;
    }

    bool __fastcall PiranhaMessage::isServerToClientMessage(mach_port_name_t *this)
    {
      return ((*(unsigned int (__fastcall **)(mach_port_name_t *))(*(_QWORD *)this + 40LL))(this) - 20000) >> 4 < 0x271;
    }

    mach_port_name_t *__fastcall PiranhaMessage::getMessageBytes(mach_port_name_t *this)
    {
      return this + 4;
    }

    mach_port_name_t *__fastcall PiranhaMessage::getByteStream(mach_port_name_t *this)
    {
      return this + 4;
    }

    __int64 __fastcall PiranhaMessage::getEncodingLength(mach_port_name_t *this)
    {
      return ByteStream::getLength((__int64)(this + 4));
    }

    __int64 __fastcall PiranhaMessage::getMessageVersion(mach_port_name_t *this)
    {
      return *(this + 2);
    }

    __int64 __fastcall PiranhaMessage::setMessageVersion(__int64 this, int a2)
    {
      *(_DWORD *)(this + 8) = a2;
      return this;
    }

    void __fastcall PiranhaMessage::destruct(mach_port_name_t *this)
    {
      ByteStream::destruct((ChallengePopup *)(this + 4));
      *(this + 16) = 0;
      *(this + 2) = 0;
    }

    void __fastcall PiranhaMessage::~PiranhaMessage(mach_port_name_t *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall PiranhaMessage::~PiranhaMessage(mach_port_name_t *this)
    {
      operator delete(this);
    }

}; // end class PiranhaMessage
