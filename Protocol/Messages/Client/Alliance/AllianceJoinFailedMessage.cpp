class AllianceJoinFailedMessage
{
public:

    void __fastcall AllianceJoinFailedMessage::AllianceJoinFailedMessage(AllianceJoinFailedMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_100465308;
      *(_DWORD *)(v1 + 68) = 0;
    }

    __int64 __fastcall AllianceJoinFailedMessage::encode(LogicMovementComponent *this)
    {
      PiranhaMessage::encode(this);
      return ByteStream::writeVInt((LogicMovementComponent *)((char *)this + 16), *((_DWORD *)this + 17));
    }

    __int64 __fastcall AllianceJoinFailedMessage::decode(LogicMovementComponent *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readVInt((LogicMovementComponent *)((char *)this + 16));
      *((_DWORD *)this + 17) = result;
      return result;
    }

    __int64 __fastcall AllianceJoinFailedMessage::getMessageType(LogicMovementComponent *this)
    {
      return 24302;
    }

    __int64 __fastcall AllianceJoinFailedMessage::getServiceNodeType(LogicMovementComponent *this)
    {
      return 11;
    }

    __int64 __fastcall AllianceJoinFailedMessage::getReason(LogicMovementComponent *this)
    {
      return *((unsigned int *)this + 17);
    }

    __int64 __fastcall AllianceJoinFailedMessage::destruct(LogicMovementComponent *this)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct(this);
      *((_DWORD *)this + 17) = 0;
      return result;
    }

    void __fastcall AllianceJoinFailedMessage::~AllianceJoinFailedMessage(LogicMovementComponent *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceJoinFailedMessage::~AllianceJoinFailedMessage(LogicMovementComponent *this)
    {
      operator delete(this);
    }

}; // end class AllianceJoinFailedMessage
