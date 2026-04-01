class AllianceJoinRequestOkMessage
{
public:

    void __fastcall AllianceJoinRequestOkMessage::AllianceJoinRequestOkMessage(AllianceJoinRequestOkMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_10045E698;
    }

    // attributes: thunk
    __int64 __fastcall AllianceJoinRequestOkMessage::encode(SendAllianceInvitationMessage *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall AllianceJoinRequestOkMessage::decode(SendAllianceInvitationMessage *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall AllianceJoinRequestOkMessage::getMessageType(SendAllianceInvitationMessage *this)
    {
      return 24319;
    }

    __int64 __fastcall AllianceJoinRequestOkMessage::getServiceNodeType(SendAllianceInvitationMessage *this)
    {
      return 9;
    }

    // attributes: thunk
    __int64 __fastcall AllianceJoinRequestOkMessage::destruct(SendAllianceInvitationMessage *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall AllianceJoinRequestOkMessage::~AllianceJoinRequestOkMessage(SendAllianceInvitationMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceJoinRequestOkMessage::~AllianceJoinRequestOkMessage(SendAllianceInvitationMessage *this)
    {
      operator delete(this);
    }

}; // end class AllianceJoinRequestOkMessage
