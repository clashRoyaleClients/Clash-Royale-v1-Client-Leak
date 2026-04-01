class InboxItem
{
public:

    __int64 __fastcall InboxItem::InboxItem(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 8) = a2;
      *(_BYTE *)result = 0;
      return result;
    }

    void __fastcall InboxItem::~InboxItem(LogicCollectMultiWinChestCommand *this)
    {
      *(_BYTE *)this = 0;
      *((_QWORD *)this + 1) = 0;
    }

}; // end class InboxItem
