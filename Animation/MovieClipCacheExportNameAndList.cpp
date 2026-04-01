class MovieClipCacheExportNameAndList
{
public:

    void __fastcall MovieClipCacheExportNameAndList::MovieClipCacheExportNameAndList(MovieClipCacheExportNameAndList *this)
    {
      String::String((__int64)this);
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      String::operator=(this, "");
      *((_DWORD *)this + 9) = 0;
      LogicArrayList<MovieClip *>::ensureCapacity((__int64)this + 24, 4);
    }

    __int64 __fastcall MovieClipCacheExportNameAndList::~MovieClipCacheExportNameAndList(__int64 a1)
    {
      _QWORD *v2; // x21
      __int64 v3; // x8
      __int64 i; // x22
      __int64 v6; // x0
      __int64 v7; // x0
      String v9; // [xsp+18h] [xbp-48h] BYREF
    
      v2 = (_QWORD *)(a1 + 24);
      v3 = *(unsigned int *)(a1 + 36);
      if ( (int)v3 >= 1 )
      {
        for ( i = (int)v3 - 1LL; ; --i )
        {
          if ( (int)i + 1 < 1 || (int)v3 <= i )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v9, i, v3);
            Debugger::error(&v9);
          }
          v6 = *(_QWORD *)(*v2 + 8 * i);
          if ( v6 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          if ( i + 1 < 2 )
            break;
          v3 = *(unsigned int *)(a1 + 36);
        }
      }
      String::operator=((_DWORD *)a1, "");
      *(_DWORD *)(a1 + 36) = 0;
      v7 = *(_QWORD *)(a1 + 24);
      if ( v7 )
        operator delete[](v7);
      *v2 = 0;
      v2[1] = 0;
      String::~String(a1);
      return a1;
    }

}; // end class MovieClipCacheExportNameAndList
