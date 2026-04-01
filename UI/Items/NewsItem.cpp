class NewsItem
{
public:

    void __fastcall NewsItem::NewsItem(NewsItem *this, ResetAccountMessage ***a2, LogicSellChestCommand *a3)
    {
      const char *v5; // x1
      ResetAccountMessage **v6; // x21
      const String *v7; // x2
      #1257 **v8; // x25
      const String *v9; // x1
      const String *v10; // x1
      long double v11; // q0
      __int64 MovieClipByName; // x21
      DisplayObject *v13; // x22
      TextField *TextFieldByName; // x23
      const String *v16; // x2
      ResetAccountMessage **v17; // x20
      _BOOL4 v18; // w24
      __int64 v19; // x0
      float v20; // s8
      GameButton *v21; // x24
      void (__fastcall *v22)(GameButton *, __int64, __int64); // x26
      __int64 v23; // x0
      __int64 v24; // x24
      const String *v25; // x1
      #1308 *String; // x0
      TextField *v27; // x0
      const char *v28; // x1
      long double v29; // q0
      float v30; // s9
      float v31; // s10
      float v32; // s0
      bool v33; // zf
      long double v35; // q0
      float v36; // s8
      long double TextHeight; // q0
      float v38; // s9
      __int64 v39; // x0
      float v40; // s8
      float v41; // s0
      long double v42; // q0
      DataIcon *v43; // x21
      #1257 *v44; // x20
      Rect v45; // [xsp+0h] [xbp-1E0h] BYREF
      String v46; // [xsp+10h] [xbp-1D0h] BYREF
      _BYTE v47[12]; // [xsp+28h] [xbp-1B8h] BYREF
      float v48; // [xsp+34h] [xbp-1ACh]
      String v49; // [xsp+38h] [xbp-1A8h] BYREF
      String v50; // [xsp+50h] [xbp-190h] BYREF
      String v51; // [xsp+68h] [xbp-178h] BYREF
      String v52; // [xsp+80h] [xbp-160h] BYREF
      String v53; // [xsp+98h] [xbp-148h] BYREF
      String v54; // [xsp+B0h] [xbp-130h] BYREF
      String v55; // [xsp+C8h] [xbp-118h] BYREF
      String v56; // [xsp+E0h] [xbp-100h] BYREF
      String v57; // [xsp+F8h] [xbp-E8h] BYREF
      String v58; // [xsp+110h] [xbp-D0h] BYREF
      String v59; // [xsp+128h] [xbp-B8h] BYREF
      String v60; // [xsp+140h] [xbp-A0h] BYREF
      String v61; // [xsp+158h] [xbp-88h] BYREF
    
      EventScreenItem::EventScreenItem((__int64)this, (__int64)a2, (__int64)a3);
      *((_QWORD *)this + 49) = 0;
      *((_QWORD *)this + 50) = 0;
      *(_QWORD *)this = off_100472428;
      *((_QWORD *)this + 33) = &off_1004725C8;
      *((_QWORD *)this + 47) = 0;
      *((_QWORD *)this + 48) = 0;
      *((_QWORD *)this + 46) = 0;
      *((_BYTE *)this + 64) = 1;
      *((_QWORD *)this + 48) = a2;
      String::String(&v61, "");
      String::String(&v60, "");
      String::String(&v59);
      String::String(&v58);
      String::String(&v57, "");
      String::String(&v56, "");
      String::String(&v55, "");
      String::String(&v54, "");
      LogicData::getIconSWF(**((_QWORD **)this + 48));
      String::operator=(&v57);
      LogicData::getIconExportName(**((_QWORD **)this + 48));
      String::operator=(&v56);
      if ( (unsigned int)LogicData::getDataType(*a2) != 58 )
        Debugger::error((__siginfo *)"Invalid news item type!", v5);
      v6 = *a2;
      LogicNewsData::getItemSWF((__int64)*a2);
      String::operator=(&v61);
      LogicNewsData::getItemExportName((__int64)v6);
      String::operator=(&v60);
      LogicData::getTID((__int64)v6);
      String::operator=(&v59);
      LogicNewsData::getInfoTID((__int64)v6);
      String::operator=(&v58);
      LogicNewsData::getImageSWF((__int64)v6);
      String::operator=(&v55);
      LogicNewsData::getImageExportName((__int64)v6);
      String::operator=(&v54);
      v8 = (#1257 **)((char *)this + 368);
      *((_QWORD *)this + 46) = StringTable::getMovieClip((#1308 *)&v61, &v60, v7);
      String::String(&v53);
      String::String(&v52);
      StringTable::getString((#1308 *)&v59, v9);
      String::operator=(&v53);
      StringTable::getString((#1308 *)&v58, v10);
      String::operator=(&v52);
      MovieClip::setText(*((MovieClip **)this + 46), "title", &v53);
      *(__n128 *)&v11 = MovieClip::setText((MovieClip *)*((_QWORD *)this + 46), "message", &v52);
      (*(void (__fastcall **)(NewsItem *, _QWORD, long double))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 46), v11);
      MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 46), "middle");
      v13 = (DisplayObject *)MovieClip::getMovieClipByName(*((#1257 **)this + 46), "bottom");
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(*((_QWORD *)this + 46), "message");
      if ( MovieClip::getMovieClipByName(*((#1257 **)this + 46), "button") )
      {
        if ( (unsigned int)LogicData::getDataType(*a2) == 58 )
        {
          v17 = *a2;
          LogicNewsData::getButtonUrl((__int64)v17, &v51);
          if ( v51.m_length < 1 )
          {
            v18 = 0;
          }
          else
          {
            LogicNewsData::getButtonTID((__int64)v17, &v50);
            v18 = v50.m_length > 0;
            String::~String();
          }
          String::~String();
          if ( v18 )
          {
            v19 = MovieClip::getMovieClipByName(*v8, "button");
            LODWORD(v20) = COERCE_UNSIGNED_INT128(DisplayObject::getY(v19));
            *(_BYTE *)(MovieClip::getMovieClipByName(*v8, "button") + 8) = 1;
            v21 = (GameButton *)operator new(264);
            GameButton::GameButton(v21);
            *((_QWORD *)this + 50) = v21;
            v22 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v21 + 280LL);
            v23 = MovieClip::getMovieClipByName(*((#1257 **)this + 46), "button");
            v22(v21, v23, 1);
            v24 = *((_QWORD *)this + 50);
            LogicNewsData::getButtonTID((__int64)v17, &v49);
            String = StringTable::getString((#1308 *)&v49, v25);
            GameButton::setText(v24, (__int64)"txt", (const String *)String);
            String::~String();
            v27 = (TextField *)MovieClip::getTextFieldByName(*(_QWORD *)(*((_QWORD *)this + 50) + 96LL), "txt");
            MovieClipHelper::scaleSingleLineText(v27, v28);
            *(__n128 *)&v29 = CustomButton::setButtonListener(*((_QWORD *)this + 50), (char *)this + 264);
            (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**((_QWORD **)this + 46) + 160LL))(
              *((_QWORD *)this + 46),
              *((_QWORD *)this + 50),
              v29);
            if ( v13 )
            {
              v30 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(TextFieldByName)));
              v31 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(TextField::getTextHeight(TextFieldByName)));
              v32 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 50) + 96LL))(*((_QWORD *)this + 50));
              DisplayObject::setY(*((DisplayObject **)this + 50), (float)((float)(v30 + v31) + (float)(v32 * 0.5)) - v20);
            }
          }
        }
        if ( !*((_QWORD *)this + 50) )
          *(_BYTE *)(MovieClip::getMovieClipByName(*v8, "button") + 8) = 0;
      }
      if ( MovieClipByName )
        v33 = v13 == 0;
      else
        v33 = 1;
      if ( !v33 && TextFieldByName != 0 )
      {
        v35 = DisplayObject::getY(TextFieldByName);
        v36 = *(float *)&v35;
        TextHeight = TextField::getTextHeight(TextFieldByName);
        v38 = v36 + *(float *)&TextHeight;
        v39 = *((_QWORD *)this + 50);
        if ( v39 )
          v38 = v38 + (float)((*(float (__fastcall **)(__int64))(*(_QWORD *)v39 + 96LL))(v39) * 0.75);
        v40 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(MovieClipByName)));
        v41 = (*(float (__fastcall **)(__int64))(*(_QWORD *)MovieClipByName + 96LL))(MovieClipByName);
        (*(void (__fastcall **)(__int64, float))(*(_QWORD *)MovieClipByName + 56LL))(
          MovieClipByName,
          (float)((float)(v38 + 1.0) - v40) / v41);
        Rect::Rect((Rect *)v47);
        DisplayObject::getBounds(MovieClipByName, 0, v47);
        v42 = DisplayObject::getY(MovieClipByName);
        DisplayObject::setY(v13, *(float *)&v42 + v48);
        Rect::~Rect((Rect *)v47);
      }
      if ( v57.m_length && v56.m_length )
      {
        v43 = (DataIcon *)operator new(112);
        DataIcon::DataIcon(v43, &v57, &v56);
        *((_QWORD *)this + 49) = v43;
        v44 = (#1257 *)*((_QWORD *)this + 46);
        String::String(&v46, "icon");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v43,
          v44,
          &v46,
          0,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          0,
          0,
          0,
          1);
        String::~String();
      }
      if ( v55.m_length )
      {
        if ( v54.m_length )
        {
          *((_QWORD *)this + 47) = StringTable::getMovieClip((#1308 *)&v55, &v54, v16);
          if ( MovieClip::getMovieClipByName(*((#1257 **)this + 46), "image") )
            MovieClip::changeTimelineChild(*((#1257 **)this + 46), "image", *((#1249 **)this + 47));
        }
      }
      Rect::Rect(&v45);
      DisplayObject::getBounds(*v8, 0, &v45);
      DisplayObject::setXY(*v8, -*(float *)&v45.top, -*(float *)&v45.bottom);
      *((_BYTE *)*v8 + 64) = 1;
      Rect::~Rect(&v45);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
    }

    // attributes: thunk
    void __fastcall NewsItem::NewsItem(NewsItem *this, ResetAccountMessage ***a2, LogicSellChestCommand *a3)
    {
      __ZN8NewsItemC2EP9NewsEntryP11EventScreen(this, a2, a3);
    }

    void __fastcall NewsItem::~NewsItem(FacebookManager *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
    
      *(_QWORD *)this = off_100472428;
      *((_QWORD *)this + 33) = &off_1004725C8;
      v2 = *((_QWORD *)this + 47);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 47) = 0;
      v3 = *((_QWORD *)this + 49);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 49) = 0;
      v4 = *((_QWORD *)this + 46);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 49) = 0;
      *((_QWORD *)this + 50) = 0;
      *((_QWORD *)this + 47) = 0;
      *((_QWORD *)this + 48) = 0;
      *((_QWORD *)this + 46) = 0;
      EventScreenItem::~EventScreenItem((__int64)this);
    }

    // attributes: thunk
    void __fastcall NewsItem::~NewsItem(FacebookManager *this)
    {
      __ZN8NewsItemD2Ev(this);
    }

    void __fastcall NewsItem::~NewsItem(FacebookManager *this)
    {
      NewsItem::~NewsItem(this);
      operator delete(this);
    }

    // attributes: thunk
    void __fastcall NewsItem::update(LogicSpellDeck *this, float a2)
    {
      EventScreenItem::update(this, a2);
    }

    void __fastcall NewsItem::buttonClicked(FacebookManager *this, #1251 *a2)
    {
      const String *v2; // x1
      String v3; // [xsp+8h] [xbp-28h] BYREF
    
      if ( *((_QWORD *)this + 50) )
      {
        LogicNewsData::getButtonUrl(**((_QWORD **)this + 48), &v3);
        Application::openURL((#1285 *)&v3, v2);
        String::~String();
      }
    }

}; // end class NewsItem
