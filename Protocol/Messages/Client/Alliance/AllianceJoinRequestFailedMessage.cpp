class AllianceJoinRequestFailedMessage
{
public:

    void __fastcall AllianceJoinRequestFailedMessage::AllianceJoinRequestFailedMessage(
            AllianceJoinRequestFailedMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_1004632E0;
      *(_DWORD *)(v1 + 68) = 0;
    }

    __int64 __fastcall AllianceJoinRequestFailedMessage::encode(GUI *this)
    {
      PiranhaMessage::encode(this);
      return ByteStream::writeVInt((GUI *)((char *)this + 16), *((_DWORD *)this + 17));
    }

    __int64 __fastcall AllianceJoinRequestFailedMessage::decode(GUI *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readVInt((GUI *)((char *)this + 16));
      *((_DWORD *)this + 17) = result;
      return result;
    }

    __int64 __fastcall AllianceJoinRequestFailedMessage::getMessageType(GUI *this)
    {
      return 24320;
    }

    __int64 __fastcall AllianceJoinRequestFailedMessage::getServiceNodeType(GUI *this)
    {
      return 11;
    }

    __int64 __fastcall AllianceJoinRequestFailedMessage::getReason(GUI *this)
    {
      return *((unsigned int *)this + 17);
    }

    __int64 __fastcall AllianceJoinRequestFailedMessage::destruct(GUI *this)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct(this);
      *((_DWORD *)this + 17) = 0;
      return result;
    }

    void __fastcall AllianceJoinRequestFailedMessage::~AllianceJoinRequestFailedMessage(GUI *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceJoinRequestFailedMessage::~AllianceJoinRequestFailedMessage(GUI *this)
    {
      operator delete(this);
    }

}; // end class AllianceJoinRequestFailedMessage
