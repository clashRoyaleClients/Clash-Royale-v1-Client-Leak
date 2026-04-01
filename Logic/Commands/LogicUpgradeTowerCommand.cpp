class LogicUpgradeTowerCommand
{
public:

    void __fastcall LogicUpgradeTowerCommand::LogicUpgradeTowerCommand(LogicUpgradeTowerCommand *this)
    {
      LogicCommand *v1; // x0
    
      v1 = LogicCommand::LogicCommand(this);
      *(_QWORD *)v1 = &off_1004640D8;
      *((_DWORD *)v1 + 7) = 0;
    }

    __int64 __fastcall LogicUpgradeTowerCommand::destruct(RegionItem *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(this);
      *((_DWORD *)this + 7) = 0;
      return result;
    }

    __int64 __fastcall LogicUpgradeTowerCommand::getCommandType(RegionItem *this)
    {
      return 519;
    }

    __int64 __fastcall LogicUpgradeTowerCommand::encode(RegionItem *this, #1226 *a2)
    {
      int v4; // w2
    
      LogicCommand::encode(this, a2);
      return ByteStreamHelper::writeGlobalID(a2, (ChecksumEncoder *)*((unsigned int *)this + 7), v4);
    }

    __int64 __fastcall LogicUpgradeTowerCommand::decode(RegionItem *this, #1225 *a2)
    {
      ByteStream *v4; // x1
      __int64 result; // x0
    
      LogicCommand::decode(this, a2);
      result = ByteStreamHelper::readGlobalID(a2, v4);
      *((_DWORD *)this + 7) = result;
      return result;
    }

    __int64 LogicUpgradeTowerCommand::execute()
    {
      return 1;
    }

    __int64 LogicUpgradeTowerCommand::getCommandGoldCost()
    {
      return 0;
    }

    void __fastcall LogicUpgradeTowerCommand::~LogicUpgradeTowerCommand(RegionItem *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicUpgradeTowerCommand::~LogicUpgradeTowerCommand(RegionItem *this)
    {
      operator delete(this);
    }

}; // end class LogicUpgradeTowerCommand
