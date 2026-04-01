class LogicDataTableResource
{
public:

    __int64 __fastcall LogicDataTableResource::LogicDataTableResource(__int64 a1, __int64 a2, int a3, int a4)
    {
      String *v7; // x20
    
      v7 = (String *)(a1 + 8);
      String::String((String *)(a1 + 8));
      *(_DWORD *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_QWORD *)a1 = 0;
      String::operator=(v7, "");
      String::operator=(v7);
      *(_DWORD *)(a1 + 32) = a3;
      *(_DWORD *)(a1 + 36) = a4;
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall LogicDataTableResource::LogicDataTableResource(__int64 a1, __int64 a2, int a3, int a4)
    {
      return __ZN22LogicDataTableResourceC2ERK6Stringii(a1, a2, a3, a4);
    }

    __int64 __fastcall LogicDataTableResource::destruct(__int64 a1)
    {
      *(_DWORD *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_QWORD *)a1 = 0;
      return String::operator=(a1 + 8, "");
    }

    __int64 __fastcall LogicDataTableResource::getTableIndex(FeedPage *this)
    {
      return *((unsigned int *)this + 8);
    }

    __int64 __fastcall LogicDataTableResource::getFileName(FeedPage *this)
    {
      return (__int64)this + 8;
    }

    __int64 __fastcall LogicDataTableResource::getType(FeedPage *this)
    {
      return *((unsigned int *)this + 9);
    }

}; // end class LogicDataTableResource
