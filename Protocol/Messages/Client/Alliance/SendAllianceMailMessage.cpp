class SendAllianceMailMessage
{
public:

    void __fastcall SendAllianceMailMessage::SendAllianceMailMessage(SendAllianceMailMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_10045E5A8;
      v1[9] = 0;
      v1[10] = 0;
    }

    __int64 __fastcall SendAllianceMailMessage::encode(LogicDeviceLinkConfirmYesMessage *this)
    {
      PiranhaMessage::encode(this);
      ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
      return ByteStream::writeString((LogicDeviceLinkConfirmYesMessage *)((char *)this + 16), *((String **)this + 10));
    }

    __int64 __fastcall SendAllianceMailMessage::decode(LogicDeviceLinkConfirmYesMessage *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_QWORD *)this + 9) = ByteStream::readLong((LogicDeviceLinkConfirmYesMessage *)((char *)this + 16));
      result = ByteStream::readString((LogicDeviceLinkConfirmYesMessage *)((char *)this + 16), 900000);
      *((_QWORD *)this + 10) = result;
      return result;
    }

    __int64 __fastcall SendAllianceMailMessage::getMessageType(LogicDeviceLinkConfirmYesMessage *this)
    {
      return 14330;
    }

    __int64 __fastcall SendAllianceMailMessage::getServiceNodeType(LogicDeviceLinkConfirmYesMessage *this)
    {
      return 11;
    }

    void __fastcall SendAllianceMailMessage::destruct(LogicDeviceLinkConfirmYesMessage *this)
    {
      void *v2; // x0
      _QWORD *v3; // x20
      String *v4; // x19
    
      PiranhaMessage::destruct(this);
      v3 = (_QWORD *)((char *)this + 72);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
      v4 = (String *)*((_QWORD *)this + 10);
      if ( v4 )
      {
        String::~String(v4);
        operator delete(v4);
      }
      *v3 = 0;
      v3[1] = 0;
    }

    void __fastcall SendAllianceMailMessage::~SendAllianceMailMessage(LogicDeviceLinkConfirmYesMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall SendAllianceMailMessage::~SendAllianceMailMessage(LogicDeviceLinkConfirmYesMessage *this)
    {
      operator delete(this);
    }

}; // end class SendAllianceMailMessage
