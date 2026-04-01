class LogicJSONNumber
{
public:

    __int64 __fastcall LogicJSONNumber::setIntValue(__int64 this, int a2)
    {
      *(_QWORD *)(this + 8) = a2;
      return this;
    }

    void __fastcall LogicJSONNumber::LogicJSONNumber(LogicJSONNumber *this, int a2)
    {
      LogicJSONNode::LogicJSONNode(this);
      *(_QWORD *)this = off_100475D00;
      *((_QWORD *)this + 1) = a2;
    }

    void __fastcall LogicJSONNumber::LogicJSONNumber(LogicJSONNumber *this, __int64 a2)
    {
      LogicJSONNode::LogicJSONNode(this);
      *(_QWORD *)this = off_100475D00;
      *((_QWORD *)this + 1) = a2;
    }

    void __fastcall LogicJSONNumber::destruct(InviteItem *this)
    {
      LogicJSONNode::destruct(this);
      *((_QWORD *)this + 1) = 0;
    }

    __int64 __fastcall LogicJSONNumber::getIntValue(InviteItem *this)
    {
      Debugger::doAssert((unsigned __int64)(*((_QWORD *)this + 1) + 0x80000000LL) >> 32 == 0, "Integer overflow.");
      return *((unsigned int *)this + 2);
    }

    __int64 __fastcall LogicJSONNumber::getType(InviteItem *this)
    {
      return 3;
    }

    void __fastcall LogicJSONNumber::writeToString(String **this, #1329 *a2)
    {
      String v3; // [xsp+8h] [xbp-28h] BYREF
    
      String::valueOf(*(this + 1), &v3);
      StringBuilder::append(a2, (__int64)&v3);
      String::~String((__int64)&v3);
    }

    void __fastcall LogicJSONNumber::~LogicJSONNumber(InviteItem *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicJSONNumber::~LogicJSONNumber(InviteItem *this)
    {
      operator delete(this);
    }

}; // end class LogicJSONNumber
