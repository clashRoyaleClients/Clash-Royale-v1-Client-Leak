class LogicMessageFactory
{
public:

    _QWORD *__fastcall LogicMessageFactory::LogicMessageFactory(_QWORD *result)
    {
      *result = off_100475DA8;
      return result;
    }

    void LogicMessageFactory::destruct()
    {
      ;
    }

    void LogicMessageFactory::~LogicMessageFactory()
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicMessageFactory::~LogicMessageFactory(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicMessageFactory
