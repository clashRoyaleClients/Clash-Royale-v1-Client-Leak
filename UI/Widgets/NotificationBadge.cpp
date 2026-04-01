class NotificationBadge
{
public:

    __int64 __fastcall NotificationBadge::NotificationBadge(__int64 a1, MovieClip *a2, char a3)
    {
      __int64 MovieClipByName; // x0
      __int64 TextFieldByName; // x0
      const char *v7; // x2
    
      *(_DWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_BYTE *)a1 = a3;
      *(_QWORD *)(a1 + 8) = a2;
      MovieClip::gotoAndStop(a2, "stop");
      MovieClipByName = MovieClip::getMovieClipByName(a2, "num");
      TextFieldByName = MovieClip::getTextFieldByName(MovieClipByName, "txt");
      *(_QWORD *)(a1 + 16) = TextFieldByName;
      Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"NotificationBadge: no textfield for number", v7);
      TextField::setNumberText(*(TextField **)(a1 + 16), 0, 0);
      return a1;
    }

    // attributes: thunk
    void __fastcall NotificationBadge::NotificationBadge(NotificationBadge *this, MovieClip *a2, char a3)
    {
      __ZN17NotificationBadgeC2EP9MovieClipb((__int64)this, a2, a3);
    }

    void __fastcall NotificationBadge::~NotificationBadge(ChestItem *this)
    {
      _QWORD *v1; // x20
    
      v1 = (_QWORD *)((char *)this + 8);
      if ( *(_BYTE *)this )
      {
        if ( *v1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
        *v1 = 0;
      }
      *((_DWORD *)v1 + 4) = 0;
      *v1 = 0;
      v1[1] = 0;
    }

    __int64 __fastcall NotificationBadge::update(__int64 a1, int a2, int a3, float a4)
    {
      MovieClip *v8; // x0
      _QWORD *v9; // x23
      int v10; // w8
      MovieClip *v11; // x21
      int FrameIndex; // w0
      int v13; // w8
      MovieClip *v14; // x21
      int v15; // w22
      int TotalFrames; // w0
      __int64 v17; // x20
      long double v18; // q0
      float v19; // s1
      __int64 (__fastcall *v21)(__int64, long double); // [xsp+8h] [xbp-48h]
    
      if ( (unsigned int)TextField::getNumberValue(*(#1271 **)(a1 + 16)) == a2 && !*(_DWORD *)(a1 + 24) )
      {
        v9 = (_QWORD *)(a1 + 8);
        goto LABEL_14;
      }
      v9 = (_QWORD *)(a1 + 8);
      v8 = *(MovieClip **)(a1 + 8);
      if ( a3 )
      {
        MovieClip::gotoAndStop(v8, "stop");
        TextField::setNumberText(*(TextField **)(a1 + 16), a2, 0);
    LABEL_5:
        *(_DWORD *)(a1 + 24) = 0;
        goto LABEL_14;
      }
      if ( (MovieClip::isPlaying(v8) & 1) == 0 )
      {
        v10 = *(_DWORD *)(a1 + 24);
        if ( v10 == 2 )
          goto LABEL_5;
        if ( v10 == 1 )
        {
          v11 = *(MovieClip **)(a1 + 8);
          FrameIndex = MovieClip::getFrameIndex(v11, "stop");
          MovieClip::gotoAndPlayFrameIndex(v11, 0, FrameIndex);
          TextField::setNumberText(*(TextField **)(a1 + 16), a2, 0);
          v13 = 2;
        }
        else
        {
          if ( v10 )
            goto LABEL_14;
          v14 = *(MovieClip **)(a1 + 8);
          v15 = MovieClip::getFrameIndex(v14, "stop");
          TotalFrames = MovieClip::getTotalFrames(*(#1257 **)(a1 + 8));
          MovieClip::gotoAndPlayFrameIndex(v14, v15, TotalFrames - 1);
          v13 = 1;
        }
        *(_DWORD *)(a1 + 24) = v13;
      }
    LABEL_14:
      v17 = *v9;
      v21 = *(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)*v9 + 80LL);
      *(float *)&v18 = DisplayObject::getAlpha(*v9);
      v19 = a4 * 3.0;
      if ( a2 )
        *(float *)&v18 = v19 + *(float *)&v18;
      else
        *(float *)&v18 = *(float *)&v18 - v19;
      return v21(v17, v18);
    }

}; // end class NotificationBadge
