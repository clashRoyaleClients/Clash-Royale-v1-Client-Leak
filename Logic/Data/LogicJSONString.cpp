class LogicJSONString
{
public:

    void __fastcall LogicJSONString::LogicJSONString(LogicJSONString *this, String *a2)
    {
      LogicJSONNode::LogicJSONNode(this);
      *(_QWORD *)this = off_100475D70;
      *((_QWORD *)this + 1) = a2;
    }

    void __fastcall LogicJSONString::destruct(__int64 *a1)
    {
      void *v2; // x20
    
      LogicJSONNode::destruct((LogicChangeAvatarNameCommand *)a1);
      v2 = (void *)a1[1];
      if ( v2 )
      {
        String::~String(a1[1]);
        operator delete(v2);
      }
      a1[1] = 0;
    }

    __int64 __fastcall LogicJSONString::getStringValue(__int64 a1)
    {
      return *(_QWORD *)(a1 + 8);
    }

    __int64 LogicJSONString::getType()
    {
      return 4;
    }

    #1329 *__fastcall LogicJSONString::writeToString(__int64 a1, #1329 *a2)
    {
      return LogicJSONParser::writeString(*(String **)(a1 + 8), a2);
    }

    __int64 __fastcall LogicJSONString::getStringReference(__int64 a1)
    {
      return *(_QWORD *)(a1 + 8);
    }

    void LogicJSONString::~LogicJSONString()
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicJSONString::~LogicJSONString(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicJSONString
