class LogicJSONNode
{
public:

    void __fastcall LogicJSONNode::LogicJSONNode(LogicJSONNode *this)
    {
      *(_QWORD *)this = off_100475C90;
    }

    void __fastcall LogicJSONNode::destruct(LogicChangeAvatarNameCommand *this)
    {
      ;
    }

    void __fastcall LogicJSONNode::~LogicJSONNode(LogicChangeAvatarNameCommand *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicJSONNode::~LogicJSONNode(LogicChangeAvatarNameCommand *this)
    {
      operator delete(this);
    }

}; // end class LogicJSONNode
