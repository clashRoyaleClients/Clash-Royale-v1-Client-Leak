class StartMissionMessage
{
public:

    void __fastcall StartMissionMessage::StartMissionMessage(StartMissionMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100471068;
      v1[9] = 0;
    }

    void __fastcall StartMissionMessage::StartMissionMessage(
            StartMissionMessage *this,
            const Character::AnimFrameIndices *a2)
    {
      _QWORD *v3; // x0
    
      v3 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v3 = off_100471068;
      v3[9] = a2;
    }

    __int64 __fastcall StartMissionMessage::encode(AvatarNameCheckResponseMessage *this)
    {
      PiranhaMessage::encode(this);
      return ByteStreamHelper::writeDataReference((__int64)this + 16, *((AreaEffectObject **)this + 9));
    }

    __int64 __fastcall StartMissionMessage::decode(AvatarNameCheckResponseMessage *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStreamHelper::readDataReference((__int64)this + 16, 18);
      *((_QWORD *)this + 9) = result;
      return result;
    }

    __int64 __fastcall StartMissionMessage::getMessageType(AvatarNameCheckResponseMessage *this)
    {
      return 14104;
    }

    __int64 __fastcall StartMissionMessage::getServiceNodeType(AvatarNameCheckResponseMessage *this)
    {
      return 9;
    }

    __int64 __fastcall StartMissionMessage::destruct(AvatarNameCheckResponseMessage *this)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct(this);
      *((_QWORD *)this + 9) = 0;
      return result;
    }

    void __fastcall StartMissionMessage::~StartMissionMessage(AvatarNameCheckResponseMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall StartMissionMessage::~StartMissionMessage(AvatarNameCheckResponseMessage *this)
    {
      operator delete(this);
    }

}; // end class StartMissionMessage
