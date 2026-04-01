class LogicSortCollectionCommand
{
public:

    void __fastcall LogicSortCollectionCommand::LogicSortCollectionCommand(LogicSortCollectionCommand *this)
    {
      LogicCommand *v1; // x0
    
      v1 = LogicCommand::LogicCommand(this);
      *(_QWORD *)v1 = &off_100460C50;
      *((_DWORD *)v1 + 7) = 0;
    }

    __int64 __fastcall LogicSortCollectionCommand::destruct(GameObjectSprite *this)
    {
      __int64 result; // x0
    
      result = LogicCommand::destruct(this);
      *((_DWORD *)this + 7) = 0;
      return result;
    }

    __int64 __fastcall LogicSortCollectionCommand::getCommandType(GameObjectSprite *this)
    {
      return 520;
    }

    __int64 __fastcall LogicSortCollectionCommand::encode(GameObjectSprite *this, #1226 *a2)
    {
      LogicCommand::encode();
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 7));
    }

    __int64 __fastcall LogicSortCollectionCommand::decode(GameObjectSprite *this, #1225 *a2)
    {
      __int64 result; // x0
    
      LogicCommand::decode(this, a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 7) = result;
      return result;
    }

    __int64 LogicSortCollectionCommand::execute()
    {
      return 1;
    }

    void __fastcall LogicSortCollectionCommand::~LogicSortCollectionCommand(GameObjectSprite *this)
    {
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    // attributes: thunk
    void __fastcall LogicSortCollectionCommand::~LogicSortCollectionCommand(GameObjectSprite *this)
    {
      operator delete(this);
    }

}; // end class LogicSortCollectionCommand
