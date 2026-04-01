class EditClanPopup
{
public:

    void __fastcall EditClanPopup::EditClanPopup(EditClanPopup *this, Rect *a2)
    {
      long double v4; // q0
      const char *v5; // x1
      const String *String; // x0
      #1257 *MovieClip; // x0
      #1257 *v8; // x0
      AllianceSettings *v9; // x21
      __int64 v10; // x21
      void (__fastcall *v11)(__int64, __int64); // x22
      __int64 v12; // x0
      #1249 *v13; // x0
      DisplayObject *v14; // x21
      __int64 v15; // x0
      float v16; // s0
      String v17; // [xsp+0h] [xbp-50h] BYREF
      String v18; // [xsp+18h] [xbp-38h] BYREF
    
      String::String(&v18, "sc/ui.sc");
      String::String(&v17, "popup_generic_back");
      PopupBase::PopupBase((__int64)this, &v18, &v17);
      String::~String();
      String::~String();
      *(_QWORD *)this = off_100471268;
      *((_QWORD *)this + 12) = &off_100471440;
      DropGUIContainer::addGameButton((__int64)this, "close", 1, v4);
      String = (const String *)StringTable::getString((#1308 *)"TID_CHANGE_SETTINGS_TITLE", v5);
      GUIContainer::setText(this, "title", String, 1);
      MovieClip = (#1257 *)GUIContainer::getMovieClip(this);
      if ( MovieClip::getMovieClipByName(MovieClip, "back_button") )
      {
        v8 = (#1257 *)GUIContainer::getMovieClip(this);
        *(_BYTE *)(MovieClip::getMovieClipByName(v8, "back_button") + 8) = 0;
      }
      v9 = (AllianceSettings *)operator new(368);
      AllianceSettings::AllianceSettings(v9, 0);
      *((_QWORD *)this + 29) = v9;
      v10 = GUIContainer::getMovieClip(this);
      v11 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 160LL);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 352LL))(*((_QWORD *)this + 29));
      v11(v10, v12);
      v13 = (#1249 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 352LL))(*((_QWORD *)this + 29));
      DisplayObject::setX(v13, 0.0);
      v14 = (DisplayObject *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 352LL))(*((_QWORD *)this + 29));
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 352LL))(*((_QWORD *)this + 29));
      v16 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v15 + 96LL))(v15);
      DisplayObject::setY(v14, (float)(v16 * -0.55) + -125.0);
      AllianceSettings::setData(*((std::ostream **)this + 29), a2);
    }

    // attributes: thunk
    void __fastcall EditClanPopup::EditClanPopup(EditClanPopup *this, Rect *a2)
    {
      __ZN13EditClanPopupC2EP17AllianceFullEntry(this, a2);
    }

    void __fastcall EditClanPopup::~EditClanPopup(LogicBuyResourcePackCommand *this, __int64 a2, const char *a3)
    {
      __int64 v4; // x0
    
      *(_QWORD *)this = off_100471268;
      *((_QWORD *)this + 12) = &off_100471440;
      v4 = *((_QWORD *)this + 29);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 29) = 0;
      PopupBase::~PopupBase(this, a2, a3);
    }

    // attributes: thunk
    void __fastcall EditClanPopup::~EditClanPopup(LogicBuyResourcePackCommand *this, __int64 a2, const char *a3)
    {
      __ZN13EditClanPopupD2Ev(this, a2, a3);
    }

    void __fastcall EditClanPopup::~EditClanPopup(LogicBuyResourcePackCommand *this, __int64 a2, const char *a3)
    {
      EditClanPopup::~EditClanPopup(this, a2, a3);
      operator delete(this);
    }

    __int64 __fastcall EditClanPopup::update(LogicBuyResourcePackCommand *this, long double a2)
    {
      PopupBase::update(this, a2);
      return (*(__int64 (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 29) + 328LL))(*((_QWORD *)this + 29), a2);
    }

    __int64 __fastcall EditClanPopup::buttonClicked(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
    }

    __int64 __fastcall EditClanPopup::getPopupType(LogicBuyResourcePackCommand *this)
    {
      return 32;
    }

}; // end class EditClanPopup
