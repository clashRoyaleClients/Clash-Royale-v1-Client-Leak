class AllianceInvitationSentOkMessage
{
public:

    void __fastcall AllianceInvitationSentOkMessage::AllianceInvitationSentOkMessage(AllianceInvitationSentOkMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_100461890;
    }

    // attributes: thunk
    __int64 __fastcall AllianceInvitationSentOkMessage::encode(AskForAllianceRankingListMessage *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall AllianceInvitationSentOkMessage::decode(AskForAllianceRankingListMessage *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall AllianceInvitationSentOkMessage::getMessageType(AskForAllianceRankingListMessage *this)
    {
      return 24322;
    }

    __int64 __fastcall AllianceInvitationSentOkMessage::getServiceNodeType(AskForAllianceRankingListMessage *this)
    {
      return 10;
    }

    // attributes: thunk
    __int64 __fastcall AllianceInvitationSentOkMessage::destruct(AskForAllianceRankingListMessage *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall AllianceInvitationSentOkMessage::~AllianceInvitationSentOkMessage(
            AskForAllianceRankingListMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceInvitationSentOkMessage::~AllianceInvitationSentOkMessage(
            AskForAllianceRankingListMessage *this)
    {
      operator delete(this);
    }

}; // end class AllianceInvitationSentOkMessage
