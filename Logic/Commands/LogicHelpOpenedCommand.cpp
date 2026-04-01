class LogicHelpOpenedCommand
{
public:

    // attributes: thunk
    __int64 __fastcall LogicHelpOpenedCommand::destruct(Effect *this)
    {
      return LogicCommand::destruct(this);
    }

    __int64 __fastcall LogicHelpOpenedCommand::execute(Effect *this, #1028 *a2)
    {
      if ( !a2 )
        return 2;
      if ( !LogicGameMode::getPlayerAvatar(a2) )
        return 3;
      *(_BYTE *)(LogicGameMode::getPlayerAvatar(a2) + 68) = 1;
      return 0;
    }

    __int64 __fastcall LogicHelpOpenedCommand::getCommandType(Effect *this)
    {
      return 531;
    }

    // attributes: thunk
    __int64 __fastcall LogicHelpOpenedCommand::encode(Effect *this, #1226 *a2)
    {
      return LogicCommand::encode(this, a2);
    }

    // attributes: thunk
    __int64 __fastcall LogicHelpOpenedCommand::decode(Effect *this, #1225 *a2)
    {
      return LogicCommand::decode(this, a2);
    }

    void __fastcall LogicHelpOpenedCommand::~LogicHelpOpenedCommand(Effect *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicHelpOpenedCommand::~LogicHelpOpenedCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicHelpOpenedCommand
