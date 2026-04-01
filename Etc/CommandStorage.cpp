class CommandStorage
{
public:

    PlayerRankItem *__fastcall CommandStorage::CommandStorage(PlayerRankItem *a1)
    {
      _QWORD *v2; // x0
    
      LogicCommandManagerListener::LogicCommandManagerListener(a1);
      *(_QWORD *)a1 = off_10046DBC8;
      v2 = (_QWORD *)operator new(16);
      *v2 = 0;
      v2[1] = 0;
      *((_QWORD *)a1 + 1) = v2;
      return a1;
    }

    _QWORD *__fastcall CommandStorage::~CommandStorage(_QWORD *result)
    {
      *result = off_10046DBC8;
      result[1] = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall CommandStorage::~CommandStorage(void *a1)
    {
      operator delete(a1);
    }

    __int64 __fastcall CommandStorage::destruct(PlayerRankItem *a1)
    {
      _QWORD *v2; // x20
      int v3; // w8
      int v4; // w21
      void (__fastcall ***v5)(_QWORD); // x0
      void (__fastcall ***v6)(_QWORD); // x20
      int v7; // w8
      __int64 result; // x0
    
      v2 = (_QWORD *)*((_QWORD *)a1 + 1);
      v3 = *((_DWORD *)v2 + 3);
      v4 = v3 - 1;
      if ( v3 >= 1 )
      {
        do
        {
          v5 = (void (__fastcall ***)(_QWORD))LogicArrayList<LogicCommand *>::remove(v2, v4);
          v6 = v5;
          if ( v5 )
          {
            (**v5)(v5);
            (*v6)[2](v6);
          }
          v2 = (_QWORD *)*((_QWORD *)a1 + 1);
          v7 = v4-- + 1;
        }
        while ( v7 > 1 );
      }
      if ( v2 )
      {
        if ( *v2 )
          operator delete[](*v2);
        operator delete(v2);
      }
      *((_QWORD *)a1 + 1) = 0;
      result = LogicCommandManagerListener::destruct(a1);
      *((_QWORD *)a1 + 1) = 0;
      return result;
    }

    void __fastcall CommandStorage::commandExecuted(__int64 a1, __int64 a2)
    {
      __int64 v2; // [xsp+8h] [xbp-8h] BYREF
    
      v2 = a2;
      LogicArrayList<LogicCommand *>::add(*(_QWORD *)(a1 + 8), &v2);
    }

    __int64 __fastcall CommandStorage::removeCommands(__int64 a1, __int64 a2, const char *a3)
    {
      __int64 v4; // x20
      _QWORD *v5; // x0
    
      Debugger::doAssert((Debugger *)(*(_QWORD *)(a1 + 8) != 0), (bool)"", a3);
      v4 = *(_QWORD *)(a1 + 8);
      v5 = (_QWORD *)operator new(16);
      *v5 = 0;
      v5[1] = 0;
      *(_QWORD *)(a1 + 8) = v5;
      return v4;
    }

}; // end class CommandStorage
