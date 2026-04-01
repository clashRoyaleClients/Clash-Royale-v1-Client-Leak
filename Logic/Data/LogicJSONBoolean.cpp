class LogicJSONBoolean
{
public:

    void __fastcall LogicJSONBoolean::LogicJSONBoolean(LogicJSONBoolean *this, char a2)
    {
      LogicJSONNode::LogicJSONNode(this);
      *(_QWORD *)this = off_100475C58;
      *((_BYTE *)this + 8) = a2;
    }

    __int64 __fastcall LogicJSONBoolean::isTrue(ArenaChangedPopup *this)
    {
      return *((unsigned __int8 *)this + 8);
    }

    __int64 __fastcall LogicJSONBoolean::destruct(ArenaChangedPopup *this)
    {
      __int64 result; // x0
    
      result = LogicJSONNode::destruct(this);
      *((_BYTE *)this + 8) = 0;
      return result;
    }

    __int64 __fastcall LogicJSONBoolean::getType(ArenaChangedPopup *this)
    {
      return 5;
    }

    #1329 *__fastcall LogicJSONBoolean::writeToString(__int64 a1, #1329 *a2)
    {
      void *v2; // x8
    
      if ( *(_BYTE *)(a1 + 8) )
        v2 = &TRUE_STRING;
      else
        v2 = &FALSE_STRING;
      return StringBuilder::append(a2, (__int64)v2);
    }

    void __fastcall LogicJSONBoolean::~LogicJSONBoolean(ArenaChangedPopup *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicJSONBoolean::~LogicJSONBoolean(ArenaChangedPopup *this)
    {
      operator delete(this);
    }

}; // end class LogicJSONBoolean
