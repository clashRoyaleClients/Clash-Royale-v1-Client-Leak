class LogicGambleCommand
{
public:

    void __fastcall LogicGambleCommand::LogicGambleCommand(LogicGambleCommand *this)
    {
      __int64 v1; // x0
    
      v1 = LogicCommand::LogicCommand((__int64)this);
      *(_QWORD *)v1 = &off_100466748;
      *(_DWORD *)(v1 + 28) = 0;
    }

    __int64 __fastcall LogicGambleCommand::destruct(InputField *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct((__int64)this);
      *((_DWORD *)this + 7) = 0;
      return result;
    }

    __int64 __fastcall LogicGambleCommand::getCommandType(InputField *this)
    {
      return 508;
    }

    __int64 __fastcall LogicGambleCommand::encode(__int64 a1, #1317 *a2)
    {
      int v4; // w2
    
      LogicCommand::encode(a1, a2);
      return ByteStreamHelper::writeGlobalID(a2, (ChecksumEncoder *)*(unsigned int *)(a1 + 28), v4);
    }

    __int64 __fastcall LogicGambleCommand::decode(_DWORD *a1, ByteStreamHelper *a2)
    {
      ByteStream *v4; // x1
      __int64 result; // x0
    
      LogicCommand::decode(a1, a2);
      result = ByteStreamHelper::readGlobalID(a2, v4);
      a1[7] = result;
      return result;
    }

    __int64 LogicGambleCommand::execute()
    {
      return 1;
    }

    __int64 __fastcall LogicGambleCommand::getCommandGoldCost(__int64 a1, __int64 a2, int a3)
    {
      if ( LogicDataTables::getDataById((LogicDataTables *)*(unsigned int *)(a1 + 28), 43, a3) )
        return LogicGambleChestData::getGoldPrice();
      else
        return 0;
    }

    void __fastcall LogicGambleCommand::~LogicGambleCommand(InputField *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicGambleCommand::~LogicGambleCommand(InputField *this)
    {
      operator delete(this);
    }

}; // end class LogicGambleCommand
