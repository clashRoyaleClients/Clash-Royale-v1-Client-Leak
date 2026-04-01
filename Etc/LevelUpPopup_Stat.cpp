class LevelUpPopup::Stat
{
public:

    __int64 __fastcall LevelUpPopup::Stat::set(#1406 *this, #1257 *a2, int a3, int a4, const String *a5, ScrollArea *a6)
    {
      const String *v9; // x1
      __int64 MovieClipByName; // x0
      __int64 v11; // x0
      MovieClip *v12; // x0
      #1249 *v13; // x21
      const String *v14; // x2
      #1249 *MovieClip; // x0
      String v17; // [xsp+0h] [xbp-70h] BYREF
      __int128 v18; // [xsp+18h] [xbp-58h] BYREF
      String v19; // [xsp+28h] [xbp-48h] BYREF
    
      if ( !a2 )
      {
        operator+(&v19, "level up stat: movie clip passed as null, stat_name:", a5);
        Debugger::error((Debugger *)&v19, v9);
      }
      *((_DWORD *)this + 1) = a3;
      *((_DWORD *)this + 2) = a4;
      *((_QWORD *)this + 2) = a2;
      MovieClipByName = MovieClip::getMovieClipByName(a2, "value_change");
      *((_QWORD *)this + 4) = MovieClip::getTextFieldByName(MovieClipByName, "txt");
      v11 = MovieClip::getMovieClipByName(*((#1257 **)this + 2), "value");
      *((_QWORD *)this + 3) = MovieClip::getTextFieldByName(v11, "txt");
      v12 = (MovieClip *)MovieClip::getMovieClipByName(*((#1257 **)this + 2), "type");
      MovieClip::setText(v12, "txt", a5);
      (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 2) + 80LL))(
        *((_QWORD *)this + 2),
        COERCE_LONG_DOUBLE((unsigned __int128)0));
      v13 = (#1249 *)MovieClip::getMovieClipByName(*((#1257 **)this + 2), "icon");
      if ( v13 )
      {
        Rect::Rect((Rect *)&v18);
        DisplayObject::getBounds(v13, *((_QWORD *)this + 2), &v18);
        SpellInfoPopup::getIconExportName(a6, &v17);
        if ( v17.m_length )
        {
          MovieClip = (#1249 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", (const char *)&v17, v14);
          MovieClip::changeTimelineChild(*((#1257 **)this + 2), v13, MovieClip);
          (*(void (__fastcall **)(#1249 *))(*(_QWORD *)v13 + 8LL))(v13);
        }
        String::~String();
        Rect::~Rect((Rect *)&v18);
      }
      return LevelUpPopup::Stat::update(this, 0.0);
    }

    bool __fastcall LevelUpPopup::Stat::update(__int64 a1, const char *a2, float a3)
    {
      float v4; // s0
      float v5; // s0
      float v6; // s1
      int v7; // w8
      __int64 v8; // x21
      #1271 *v9; // x20
      #1271 *v10; // x20
      const char *v11; // x1
      float v12; // s0
      float v13; // s1
      float v14; // s8
      float v15; // s0
      float v16; // s8
      float v18; // [xsp+10h] [xbp-80h]
      float v19; // [xsp+10h] [xbp-80h]
      String v20; // [xsp+20h] [xbp-70h] BYREF
      String v21; // [xsp+38h] [xbp-58h] BYREF
    
      v4 = *(float *)a1 + a3;
      *(float *)a1 = v4;
      v5 = v4 / 0.3;
      if ( v5 >= 0.0 )
      {
        v6 = 1.0;
        if ( v5 <= 1.0 )
          v6 = v5;
      }
      else
      {
        v6 = 0.0;
      }
      v18 = v6;
      v7 = *(_DWORD *)(a1 + 4);
      v8 = (unsigned int)(int)(float)((float)(v6 * (float)(*(_DWORD *)(a1 + 8) - v7)) + 0.5);
      v9 = *(#1271 **)(a1 + 24);
      String::format((String *)"%d", a2, (unsigned int)(v8 + v7));
      TextField::setText(v9, &v21);
      String::~String();
      v10 = *(#1271 **)(a1 + 32);
      String::format((String *)"+%d", v11, v8);
      TextField::setText(v10, &v20);
      String::~String();
      (*(void (__fastcall **)(_QWORD, float))(**(_QWORD **)(a1 + 16) + 80LL))(*(_QWORD *)(a1 + 16), v18 * 3.0);
      v12 = (float)(*(float *)a1 + -0.3) / 0.35;
      if ( v12 >= 0.0 )
      {
        v13 = 1.0;
        if ( v12 <= 1.0 )
          v13 = (float)(*(float *)a1 + -0.3) / 0.35;
      }
      else
      {
        v13 = 0.0;
      }
      v19 = v13;
      v14 = v13 * 3.1416;
      v15 = sinf(v13 * 3.1416);
      ColorTransform::setAddColor((ColorTransform *)(*(_QWORD *)(a1 + 16) + 9LL), v15 * 0.5, v15 * 0.5, v15 * 0.5);
      v16 = (float)((float)(1.0 - v19) * 0.1) * sinf(v14 * 3.0);
      (*(void (__fastcall **)(_QWORD, float))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16), 1.0 - v16);
      (*(void (__fastcall **)(_QWORD, float))(**(_QWORD **)(a1 + 16) + 56LL))(*(_QWORD *)(a1 + 16), v16 + 1.0);
      return *(float *)a1 >= 0.475;
    }

}; // end class LevelUpPopup::Stat
