class SWFMovieClipCache
{
public:

    _QWORD *__fastcall SWFMovieClipCache::SWFMovieClipCache(_QWORD *a1, __int64 a2)
    {
      a1[1] = 0;
      a1[2] = 0;
      *a1 = 0;
      *a1 = a2;
      LogicArrayList<MovieClipCacheExportNameAndList *>::ensureCapacity(a1 + 1, 5);
      return a1;
    }

    _QWORD *__fastcall SWFMovieClipCache::SWFMovieClipCache(_QWORD *a1, __int64 a2)
    {
      SWFMovieClipCache::SWFMovieClipCache(a1, a2);
      return a1;
    }

    __int64 __fastcall SWFMovieClipCache::~SWFMovieClipCache(__int64 a1)
    {
      _QWORD *v2; // x22
      __int64 v3; // x8
      __int64 i; // x23
      void *v6; // x21
      __int64 v7; // x0
      String v9; // [xsp+18h] [xbp-48h] BYREF
    
      v2 = (_QWORD *)(a1 + 8);
      v3 = *(unsigned int *)(a1 + 20);
      if ( (int)v3 > 0 )
      {
        for ( i = (int)v3 - 1LL; ; --i )
        {
          if ( (int)i + 1 < 1 || (int)v3 <= i )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v9, i, v3);
            Debugger::error(&v9);
          }
          v6 = *(void **)(*v2 + 8 * i);
          if ( v6 )
          {
            MovieClipCacheExportNameAndList::~MovieClipCacheExportNameAndList(*(MovieClipCacheExportNameAndList **)(*v2 + 8 * i));
            operator delete(v6);
          }
          if ( i + 1 < 2 )
            break;
          v3 = *(unsigned int *)(a1 + 20);
        }
      }
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 20) = 0;
      v7 = *(_QWORD *)(a1 + 8);
      if ( v7 )
        operator delete[](v7);
      *v2 = 0;
      v2[1] = 0;
      return a1;
    }

    __int64 __fastcall SWFMovieClipCache::~SWFMovieClipCache(__int64 a1)
    {
      SWFMovieClipCache::~SWFMovieClipCache(a1);
      return a1;
    }

    __int64 __fastcall SWFMovieClipCache::get(SWFMovieClipCache *a1, const char *a2, char *a3)
    {
      __int64 List; // x0
      int v7; // w8
      __int64 MovieClip; // x20
      char v9; // w8
    
      List = SWFMovieClipCache::getList(a1, a2);
      v7 = *(_DWORD *)(List + 12);
      if ( v7 < 1 )
      {
        MovieClip = SupercellSWF::createMovieClip(*(_QWORD *)a1, a2);
        v9 = 1;
      }
      else
      {
        MovieClip = LogicArrayList<MovieClip *>::remove((__int64 *)List, v7 - 1);
        MovieClip::gotoAndPlayFrameIndex(MovieClip, 0, -1);
        *(_DWORD *)(MovieClip + 20) = 0;
        *(_DWORD *)(MovieClip + 16) = 1065353216;
        *(_DWORD *)(MovieClip + 24) = 0;
        *(_QWORD *)(MovieClip + 28) = 1065353216;
        *(_DWORD *)(MovieClip + 36) = 0;
        ColorTransform::reset(MovieClip + 9);
        v9 = 0;
      }
      *a3 = v9;
      return MovieClip;
    }

    char *__fastcall SWFMovieClipCache::getList(__int64 a1, const char *a2)
    {
      _QWORD *v4; // x19
      __int64 v5; // x8
      __int64 v6; // x24
      __int64 v7; // x25
      #1337 *v8; // x23
      #1337 *v10; // [xsp+10h] [xbp-60h] BYREF
      String v11; // [xsp+18h] [xbp-58h] BYREF
    
      v4 = (_QWORD *)(a1 + 8);
      v5 = *(unsigned int *)(a1 + 20);
      if ( (int)v5 < 1 )
      {
    LABEL_8:
        v8 = (#1337 *)operator new(40);
        MovieClipCacheExportNameAndList::MovieClipCacheExportNameAndList(v8);
        v10 = v8;
        String::operator=(v8, a2);
        LogicArrayList<MovieClipCacheExportNameAndList *>::add(v4, &v10);
      }
      else
      {
        v6 = 0;
        v7 = (int)v5;
        while ( 1 )
        {
          if ( (int)v5 <= v6 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v11, v6, v5);
            Debugger::error(&v11);
          }
          v8 = *(#1337 **)(*v4 + 8 * v6);
          if ( String::equals((__int64)v8, a2) )
            break;
          if ( ++v6 >= v7 )
            goto LABEL_8;
          v5 = *(unsigned int *)(a1 + 20);
        }
      }
      return (char *)v8 + 24;
    }

    __int64 __fastcall SWFMovieClipCache::put(__int64 a1, const char *a2, Multitouch *a3)
    {
      char *List; // x0
      Multitouch *v7; // [xsp+8h] [xbp-18h] BYREF
    
      v7 = a3;
      DisplayObject::removeFromParent(a3);
      List = SWFMovieClipCache::getList(a1, a2);
      return LogicArrayList<MovieClip *>::add((__int64)List, (__int64 *)&v7);
    }

}; // end class SWFMovieClipCache
