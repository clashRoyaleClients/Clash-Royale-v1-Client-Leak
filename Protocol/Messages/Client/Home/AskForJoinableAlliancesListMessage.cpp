class AskForJoinableAlliancesListMessage
{
public:

    _QWORD *__fastcall AskForJoinableAlliancesListMessage::AskForJoinableAlliancesListMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100465A10;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall AskForJoinableAlliancesListMessage::encode(AvatarStreamManager *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall AskForJoinableAlliancesListMessage::decode(AvatarStreamManager *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall AskForJoinableAlliancesListMessage::getMessageType(AvatarStreamManager *this)
    {
      return 14303;
    }

    __int64 __fastcall AskForJoinableAlliancesListMessage::getServiceNodeType(AvatarStreamManager *this)
    {
      return 11;
    }

    // attributes: thunk
    __int64 __fastcall AskForJoinableAlliancesListMessage::destruct(#1242 *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall AskForJoinableAlliancesListMessage::~AskForJoinableAlliancesListMessage(AvatarStreamManager *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AskForJoinableAlliancesListMessage::~AskForJoinableAlliancesListMessage(AvatarStreamManager *this)
    {
      operator delete(this);
    }

}; // end class AskForJoinableAlliancesListMessage
