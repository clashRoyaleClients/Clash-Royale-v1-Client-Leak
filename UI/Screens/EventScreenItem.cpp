class EventScreenItem
{
public:

    __int64 __fastcall EventScreenItem::getAnalyticsName(LogicSpellDeck *this)
    {
      return (__int64)this + 344;
    }

    __int64 __fastcall EventScreenItem::EventScreenItem(__int64 a1, __int64 a2, __int64 a3)
    {
      GameButton::GameButton((DeviceLinkCodeReceivedScreen *)a1);
      *(_QWORD *)a1 = off_100466590;
      *(_QWORD *)(a1 + 264) = &off_100466728;
      String::String((String *)(a1 + 320));
      String::String((String *)(a1 + 344));
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      String::operator=(a1 + 344, "EventScreenItem");
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      String::operator=(a1 + 320, "");
      *(_BYTE *)(a1 + 64) = 1;
      *(_QWORD *)(a1 + 272) = a2;
      *(_QWORD *)(a1 + 288) = a3;
      return a1;
    }

    __int64 __fastcall EventScreenItem::EventScreenItem(__int64 a1, __int64 a2, __int64 a3)
    {
      GameButton::GameButton((DeviceLinkCodeReceivedScreen *)a1);
      *(_QWORD *)a1 = off_100466590;
      *(_QWORD *)(a1 + 264) = &off_100466728;
      String::String((String *)(a1 + 320));
      String::String((String *)(a1 + 344));
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      String::operator=(a1 + 344, "EventScreenItem");
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      String::operator=(a1 + 320, "");
      *(_BYTE *)(a1 + 64) = 1;
      *(_QWORD *)(a1 + 280) = a2;
      *(_QWORD *)(a1 + 288) = a3;
      return a1;
    }

    void __fastcall EventScreenItem::~EventScreenItem(__int64 a1)
    {
      void *v2; // x0
      void *v3; // x0
      void *v4; // x0
    
      *(_QWORD *)a1 = off_100466590;
      *(_QWORD *)(a1 + 264) = &off_100466728;
      v2 = *(void **)(a1 + 296);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 296) = 0;
      v3 = *(void **)(a1 + 304);
      if ( v3 )
        operator delete(v3);
      *(_QWORD *)(a1 + 304) = 0;
      v4 = *(void **)(a1 + 312);
      if ( v4 )
        operator delete(v4);
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      String::operator=(a1 + 344, "EventScreenItem");
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      String::operator=(a1 + 320, "");
      String::~String((String *)(a1 + 344));
      String::~String((String *)(a1 + 320));
      GameButton::~GameButton((DeviceLinkCodeReceivedScreen *)a1);
    }

    // attributes: thunk
    void __fastcall EventScreenItem::~EventScreenItem(__int64 a1)
    {
      __ZN15EventScreenItemD2Ev(a1);
    }

    void __fastcall EventScreenItem::~EventScreenItem(void *a1)
    {
      EventScreenItem::~EventScreenItem((__int64)a1);
      operator delete(a1);
    }

    void __fastcall EventScreenItem::update(LogicSpellDeck *this, float a2)
    {
      ;
    }

    __int64 __fastcall EventScreenItem::getItemHeight(LogicSpellDeck *this)
    {
      return (*(__int64 (__fastcall **)(LogicSpellDeck *))(*(_QWORD *)this + 96LL))(this);
    }

    __int64 __fastcall EventScreenItem::shouldRemove(LogicSpellDeck *this)
    {
      LogicStartMatchmakeCommand *v1; // x0
    
      v1 = (LogicStartMatchmakeCommand *)*((_QWORD *)this + 34);
      if ( v1 )
        return AvatarStreamEntry::isRemoved(v1);
      else
        return 0;
    }

}; // end class EventScreenItem
