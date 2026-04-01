class LogicJSONNull
{
public:

    void __fastcall LogicJSONNull::LogicJSONNull(LogicJSONNull *this)
    {
      LogicJSONNode::LogicJSONNode(this);
      *(_QWORD *)this = off_100475CC8;
    }

    // attributes: thunk
    void __fastcall LogicJSONNull::destruct(LogicChangeAvatarNameCommand *this)
    {
      LogicJSONNode::destruct(this);
    }

    __int64 __fastcall LogicJSONNull::getType(AuthenticationCheckMessage *this)
    {
      return 6;
    }

    #1329 *__fastcall LogicJSONNull::writeToString(AuthenticationCheckMessage *this, #1329 *a2)
    {
      return StringBuilder::append(a2, (__int64)&NULL_STRING);
    }

    void __fastcall LogicJSONNull::~LogicJSONNull(AuthenticationCheckMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicJSONNull::~LogicJSONNull(AuthenticationCheckMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicJSONNull
