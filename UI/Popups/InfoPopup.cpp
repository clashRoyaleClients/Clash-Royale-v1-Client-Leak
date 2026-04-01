class InfoPopup
{
public:

    PopupBase *__fastcall InfoPopup::InfoPopup(PopupBase *a1, const String *a2, const String *a3)
    {
      MovieClip *MovieClip; // x0
      __int64 v7; // x0
      MovieClip *v8; // x0
      GameButton *v9; // x20
      const char *v10; // x1
      const String *String; // x0
      String v13; // [xsp+0h] [xbp-50h] BYREF
      String v14; // [xsp+18h] [xbp-38h] BYREF
    
      String::String(&v14, "sc/ui.sc");
      String::String(&v13, "popup_info_ok");
      PopupBase::PopupBase(a1, &v14, &v13);
      String::~String(&v13);
      String::~String(&v14);
      *(_QWORD *)a1 = off_100466AA8;
      *((_QWORD *)a1 + 12) = &off_100466C80;
      *((_QWORD *)a1 + 29) = 0;
      MovieClip = (MovieClip *)GUIContainer::getMovieClip(a1);
      MovieClip::setText(MovieClip, "title", a2);
      v7 = GUIContainer::getMovieClip(a1);
      *(_BYTE *)(MovieClip::getTextFieldByName(v7, "txt") + 78) = 1;
      v8 = (MovieClip *)GUIContainer::getMovieClip(a1);
      MovieClip::setText(v8, "txt", a3);
      v9 = (GameButton *)DropGUIContainer::addGameButton(a1, "button_ok", 1);
      *((_QWORD *)a1 + 29) = v9;
      String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_OK", v10);
      GameButton::setText(v9, "txt", String);
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      return a1;
    }

    PopupBase *__fastcall InfoPopup::InfoPopup(PopupBase *a1, const String *a2, const String *a3)
    {
      return InfoPopup::InfoPopup(a1, a2, a3);
    }

    void __fastcall InfoPopup::~InfoPopup(MatchmakeFailedMessage *a1)
    {
      *(_QWORD *)a1 = off_100466AA8;
      *((_QWORD *)a1 + 12) = &off_100466C80;
      *((_QWORD *)a1 + 29) = 0;
      PopupBase::~PopupBase(a1);
    }

    void __fastcall InfoPopup::~InfoPopup(MatchmakeFailedMessage *a1)
    {
      *(_QWORD *)a1 = off_100466AA8;
      *((_QWORD *)a1 + 12) = &off_100466C80;
      *((_QWORD *)a1 + 29) = 0;
      PopupBase::~PopupBase(a1);
      operator delete(a1);
    }

    __int64 __fastcall InfoPopup::buttonClicked(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
    }

    // attributes: thunk
    __int64 __fastcall InfoPopup::update(MatchmakeFailedMessage *this, float a2)
    {
      return PopupBase::update(this, a2);
    }

    __int64 __fastcall InfoPopup::touchReleased(__int64 a1, __int64 a2)
    {
      Sprite::touchReleased(a1, a2);
      return 1;
    }

    __int64 __fastcall InfoPopup::touchPressed(__int64 a1, __int64 a2)
    {
      Sprite::touchPressed(a1, a2);
      return 1;
    }

    __int64 __fastcall InfoPopup::getPopupType(BillingRequestFailedMessage *this)
    {
      return 46;
    }

}; // end class InfoPopup
