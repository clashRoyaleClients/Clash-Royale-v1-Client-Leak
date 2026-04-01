class JoinAllianceUsingInvitationMessage
{
public:

    void __fastcall JoinAllianceUsingInvitationMessage::JoinAllianceUsingInvitationMessage(
            JoinAllianceUsingInvitationMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100461848;
      v1[9] = 0;
      v1[10] = 0;
    }

    __int64 __fastcall JoinAllianceUsingInvitationMessage::encode(LogicClaimAchievementRewardCommand *this)
    {
      PiranhaMessage::encode(this);
      ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
      return ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 10));
    }

    __int64 __fastcall JoinAllianceUsingInvitationMessage::decode(LogicClaimAchievementRewardCommand *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_QWORD *)this + 9) = ByteStream::readLong((LogicClaimAchievementRewardCommand *)((char *)this + 16));
      result = ByteStream::readLong((LogicClaimAchievementRewardCommand *)((char *)this + 16));
      *((_QWORD *)this + 10) = result;
      return result;
    }

    __int64 __fastcall JoinAllianceUsingInvitationMessage::getMessageType(LogicClaimAchievementRewardCommand *this)
    {
      return 14323;
    }

    __int64 __fastcall JoinAllianceUsingInvitationMessage::getServiceNodeType(LogicClaimAchievementRewardCommand *this)
    {
      return 10;
    }

    __int64 __fastcall JoinAllianceUsingInvitationMessage::setAvatarStreamEntryId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    __int64 __fastcall JoinAllianceUsingInvitationMessage::setInviterAvatarId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 80) = a2;
      return result;
    }

    void __fastcall JoinAllianceUsingInvitationMessage::destruct(LogicClaimAchievementRewardCommand *this)
    {
      void *v2; // x0
      void *v3; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
      v3 = (void *)*((_QWORD *)this + 10);
      if ( v3 )
        operator delete(v3);
      *((_QWORD *)this + 9) = 0;
      *((_QWORD *)this + 10) = 0;
    }

    void __fastcall JoinAllianceUsingInvitationMessage::~JoinAllianceUsingInvitationMessage(
            LogicClaimAchievementRewardCommand *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall JoinAllianceUsingInvitationMessage::~JoinAllianceUsingInvitationMessage(
            LogicClaimAchievementRewardCommand *this)
    {
      operator delete(this);
    }

}; // end class JoinAllianceUsingInvitationMessage
