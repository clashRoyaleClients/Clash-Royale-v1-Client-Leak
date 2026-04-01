class PlayerContextMenuBase
{
public:

    void __fastcall PlayerContextMenuBase::PlayerContextMenuBase(PlayerContextMenuBase *this, int a2)
    {
      const char *v4; // x1
      String v5; // [xsp+0h] [xbp-40h] BYREF
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      String::String(&v6, "sc/ui.sc");
      if ( a2 )
        v4 = "context_menu_bubble_right";
      else
        v4 = "context_menu_bubble_left";
      String::String(&v5, v4);
      PopupBase::PopupBase(this, &v6, &v5);
      String::~String(&v5);
      String::~String(&v6);
      *(_QWORD *)this = off_100462530;
      *((_QWORD *)this + 12) = &off_100462720;
      *((_BYTE *)this + 228) = 0;
    }

    void __fastcall PlayerContextMenuBase::~PlayerContextMenuBase(MatchmakeInfoMessage *this)
    {
      *(_QWORD *)this = off_100462530;
      *((_QWORD *)this + 12) = &off_100462720;
      *((_BYTE *)this + 228) = 0;
      PopupBase::~PopupBase(this);
    }

    void __fastcall PlayerContextMenuBase::~PlayerContextMenuBase(MatchmakeInfoMessage *this)
    {
      *(_QWORD *)this = off_100462530;
      *((_QWORD *)this + 12) = &off_100462720;
      *((_BYTE *)this + 228) = 0;
      PopupBase::~PopupBase(this);
    }

    void __fastcall PlayerContextMenuBase::~PlayerContextMenuBase(MatchmakeInfoMessage *this)
    {
      *(_QWORD *)this = off_100462530;
      *((_QWORD *)this + 12) = &off_100462720;
      *((_BYTE *)this + 228) = 0;
      PopupBase::~PopupBase(this);
      operator delete(this);
    }

    void __fastcall PlayerContextMenuBase::hide(MatchmakeInfoMessage *this)
    {
      ;
    }

    __int64 __fastcall PlayerContextMenuBase::shouldClose(MatchmakeInfoMessage *this)
    {
      return 0;
    }

}; // end class PlayerContextMenuBase
