class AlliancePopup
{
public:

    void __fastcall AlliancePopup::AlliancePopup(AlliancePopup *this)
    {
      __int64 MovieClip; // x0
      #1271 *TextFieldByName; // x20
      const char *v4; // x2
      #1253 *v5; // x21
      long double Width; // q0
      float v7; // s8
      long double Height; // q0
      __int64 v9; // x0
      #1257 *v10; // x0
      DisplayObject *v11; // x21
      float v12; // s8
      float v13; // s9
      long double v14; // q0
      long double v15; // q0
      Rect v16[2]; // [xsp+0h] [xbp-70h] BYREF
      String v17; // [xsp+10h] [xbp-60h] BYREF
      String v18; // [xsp+28h] [xbp-48h] BYREF
    
      String::String(&v18, "sc/ui.sc");
      String::String(&v17, "popup_generic_back");
      PopupBase::PopupBase((__int64)this, &v18, &v17);
      String::~String();
      String::~String();
      *(_QWORD *)this = off_10046E040;
      *((_QWORD *)this + 12) = &off_10046E218;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 30) = DropGUIContainer::addGameButton(this, "close", 1);
      *((_QWORD *)this + 31) = DropGUIContainer::addGameButton(this, "back_button", 1);
      MovieClip = GUIContainer::getMovieClip(this);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "scrollarea");
      Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"", v4);
      Rect::Rect(v16);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v16);
      v5 = (#1253 *)operator new(504);
      Width = Rect::getWidth(v16);
      v7 = *(float *)&Width;
      Height = Rect::getHeight(v16);
      ScrollArea::ScrollArea(v5, v7, *(float *)&Height, 1);
      *((_QWORD *)this + 29) = v5;
      ScrollArea::enablePinching(v5, 0);
      ScrollArea::enableHorizontalDrag(*((#1253 **)this + 29), 0);
      ScrollArea::enableVerticalDrag(*((#1253 **)this + 29), 1);
      v9 = *((_QWORD *)this + 29);
      *(_BYTE *)(v9 + 496) = 1;
      ScrollArea::setAlignment((#1253 *)v9, 5);
      v10 = (#1257 *)GUIContainer::getMovieClip(this);
      MovieClip::changeTimelineChild(v10, TextFieldByName, *((#1249 **)this + 29));
      v11 = (DisplayObject *)*((_QWORD *)this + 29);
      v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(TextFieldByName)));
      v13 = *(float *)&v16[0].top;
      v14 = DisplayObject::getY(TextFieldByName);
      *(__n128 *)&v15 = DisplayObject::setPixelSnappedXY(v11, v12 + v13, *(float *)&v14 + *(float *)&v16[0].bottom);
      if ( TextFieldByName )
        (*(void (__fastcall **)(#1271 *, long double))(*(_QWORD *)TextFieldByName + 8LL))(TextFieldByName, v15);
      Rect::~Rect(v16);
    }

    // attributes: thunk
    void __fastcall AlliancePopup::AlliancePopup(AlliancePopup *this)
    {
      __ZN13AlliancePopupC2Ev(this);
    }

    void __fastcall AlliancePopup::~AlliancePopup(LogicAllianceSettingsChangedCommand *this, __int64 a2, const char *a3)
    {
      _QWORD *v4; // x8
      _BYTE *v5; // x9
      unsigned __int64 v6; // x10
      unsigned int v7; // w20
      __int64 v8; // x0
      __int64 v9; // x0
    
      *(_QWORD *)this = off_10046E040;
      *((_QWORD *)this + 12) = &off_10046E218;
      v4 = (_QWORD *)*((_QWORD *)this + 32);
      v5 = (_BYTE *)*((_QWORD *)this + 33);
      if ( v5 == (_BYTE *)v4 )
      {
        v4 = (_QWORD *)*((_QWORD *)this + 33);
      }
      else
      {
        v6 = 0;
        v7 = 1;
        do
        {
          v8 = v4[v6];
          if ( v8 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
            v4 = (_QWORD *)*((_QWORD *)this + 32);
            v5 = (_BYTE *)*((_QWORD *)this + 33);
          }
          v6 = v7++;
        }
        while ( v6 < (v5 - (_BYTE *)v4) >> 3 );
      }
      v9 = *((_QWORD *)this + 29);
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        v4 = (_QWORD *)*((_QWORD *)this + 32);
      }
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 29) = 0;
      if ( v4 )
        operator delete(v4);
      PopupBase::~PopupBase(this, a2, a3);
    }

    // attributes: thunk
    void __fastcall AlliancePopup::~AlliancePopup(LogicAllianceSettingsChangedCommand *this, __int64 a2, const char *a3)
    {
      __ZN13AlliancePopupD2Ev(this, a2, a3);
    }

    void __fastcall AlliancePopup::~AlliancePopup(LogicAllianceSettingsChangedCommand *this, __int64 a2, const char *a3)
    {
      AlliancePopup::~AlliancePopup(this, a2, a3);
      operator delete(this);
    }

    #1251 **__fastcall AlliancePopup::buttonClicked(#1251 **this, #1251 *a2)
    {
      #1251 **v3; // x19
      #1251 *v4; // x8
    
      v3 = this;
      if ( *(this + 30) == a2 )
        this = (#1251 **)(*((__int64 (__fastcall **)(#1251 **))*this + 44))(this);
      if ( v3[31] == a2 )
      {
        v4 = v3[33];
        if ( v3[32] == v4 )
          return (#1251 **)Debugger::warning((__siginfo *)"no screen to go back", (const char *)a2);
        else
          return (#1251 **)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 - 1) + 360LL))(*((_QWORD *)v4 - 1));
      }
      return this;
    }

    MiniTimer *__fastcall AlliancePopup::update(LogicAllianceSettingsChangedCommand *this, long double a2)
    {
      MiniTimer *result; // x0
      __int64 v5; // x8
      __int64 v6; // x9
      __int64 v7; // x20
      _BYTE *v8; // x20
      MovieClip *MovieClip; // x21
      const String *v10; // x0
      int v11; // w8
      DisplayObject **v12; // x0
    
      result = PopupBase::update(this, a2);
      v6 = *((_QWORD *)this + 32);
      v5 = *((_QWORD *)this + 33);
      if ( v6 != v5 )
      {
        v7 = *(_QWORD *)(v5 - 8);
        result = (MiniTimer *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 344LL))(v7);
        if ( (_DWORD)result )
        {
          v5 = *((_QWORD *)this + 33) - 8LL;
          *((_QWORD *)this + 33) = v5;
          if ( v7 )
          {
            result = (MiniTimer *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
            v5 = *((_QWORD *)this + 33);
          }
          v6 = *((_QWORD *)this + 32);
          if ( v6 != v5 )
          {
            v8 = *(_BYTE **)(v5 - 8);
            v8[8] = 1;
            MovieClip = (MovieClip *)GUIContainer::getMovieClip(this);
            v10 = (const String *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v8 + 376LL))(v8);
            result = (MiniTimer *)MovieClip::setText(MovieClip, "title", v10);
            v6 = *((_QWORD *)this + 32);
            v5 = *((_QWORD *)this + 33);
          }
          *(_BYTE *)(*((_QWORD *)this + 31) + 8LL) = (unsigned __int64)((v5 - v6) >> 3) > 1;
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 352LL))(v7);
          v12 = (DisplayObject **)*((_QWORD *)this + 29);
          if ( v11 )
            (*((void (__fastcall **)(DisplayObject **, long double))*v12 + 34))(v12, a2);
          else
            DisplayObject::setXY(v12[14], 0.0, 0.0);
          result = (MiniTimer *)(*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v7 + 336LL))(v7, a2);
          v6 = *((_QWORD *)this + 32);
          v5 = *((_QWORD *)this + 33);
        }
      }
      if ( v6 == v5 )
        result = (MiniTimer *)(*(__int64 (__fastcall **)(LogicAllianceSettingsChangedCommand *))(*(_QWORD *)this + 352LL))(this);
      *((_BYTE *)this + 64) = 1;
      return result;
    }

    __int64 __fastcall AlliancePopup::pushScreen(
            LogicAllianceSettingsChangedCommand *this,
            AskForAvatarLocalRankingListMessage *a2,
            const char *a3)
    {
      long double v5; // q0
      __int64 v6; // x8
      MovieClip *MovieClip; // x21
      const String *v8; // x0
      float v9; // s8
      long double v10; // q0
      AskForAvatarLocalRankingListMessage *v12; // [xsp+8h] [xbp-38h] BYREF
    
      v12 = a2;
      *(__n128 *)&v5 = Debugger::doAssert((Debugger *)(a2 != 0), (bool)"", a3);
      v6 = *((_QWORD *)this + 33);
      if ( *((_QWORD *)this + 32) != v6 )
        *(_BYTE *)(*(_QWORD *)(v6 - 8) + 8LL) = 0;
      std::vector<AllianceScreen *>::push_back((char *)this + 256, &v12, v5);
      *(_BYTE *)(*((_QWORD *)this + 31) + 8LL) = (unsigned __int64)((__int64)(*((_QWORD *)this + 33) - *((_QWORD *)this + 32)) >> 3) > 1;
      MovieClip = (MovieClip *)GUIContainer::getMovieClip(this);
      v8 = (const String *)(*(__int64 (__fastcall **)(AskForAvatarLocalRankingListMessage *))(*(_QWORD *)a2 + 376LL))(a2);
      MovieClip::setText(MovieClip, "title", v8);
      if ( !(*(unsigned int (__fastcall **)(AskForAvatarLocalRankingListMessage *))(*(_QWORD *)a2 + 352LL))(a2) )
        return (*(__int64 (__fastcall **)(LogicAllianceSettingsChangedCommand *, AskForAvatarLocalRankingListMessage *))(*(_QWORD *)this + 160LL))(
                 this,
                 a2);
      v9 = *(float *)(*((_QWORD *)this + 29) + 92LL) * 0.5;
      v10 = DisplayObject::getY(a2);
      DisplayObject::setPixelSnappedXY(a2, v9, *(float *)&v10);
      return ScrollArea::addContent(*((#1253 **)this + 29), a2);
    }

    __int64 __fastcall AlliancePopup::setData(__int64 result, __int64 a2)
    {
      __int64 v3; // x20
      __int64 v4; // x8
      unsigned __int64 v5; // x9
      unsigned int v6; // w21
    
      v3 = result;
      v4 = *(_QWORD *)(result + 256);
      if ( *(_QWORD *)(result + 264) != v4 )
      {
        v5 = 0;
        v6 = 1;
        do
        {
          result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 8 * v5) + 368LL))(
                     *(_QWORD *)(v4 + 8 * v5),
                     a2);
          v5 = v6;
          v4 = *(_QWORD *)(v3 + 256);
          ++v6;
        }
        while ( v5 < (*(_QWORD *)(v3 + 264) - v4) >> 3 );
      }
      return result;
    }

    __int64 __fastcall AlliancePopup::getScreenByType(LogicAllianceSettingsChangedCommand *this, int a2)
    {
      __int64 result; // x0
      __int64 v5; // x8
      unsigned __int64 v6; // x21
      unsigned int v7; // w22
    
      result = 0;
      v5 = *((_QWORD *)this + 32);
      if ( *((_QWORD *)this + 33) != v5 )
      {
        v6 = 0;
        v7 = 1;
        while ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 8 * v6) + 328LL))(*(_QWORD *)(v5 + 8 * v6)) != a2 )
        {
          v6 = v7;
          v5 = *((_QWORD *)this + 32);
          ++v7;
          if ( v6 >= (*((_QWORD *)this + 33) - v5) >> 3 )
            return 0;
        }
        return *(_QWORD *)(*((_QWORD *)this + 32) + 8 * v6);
      }
      return result;
    }

    __int64 __fastcall AlliancePopup::pushAllianceInfo(LogicAllianceSettingsChangedCommand *this, const #1236 *a2)
    {
      AllianceInfo *v4; // x21
      #1236 *v5; // x0
      const char *v6; // x2
      AskForAllianceDataMessage *v7; // x20
      __int64 v8; // x0
    
      v4 = (AllianceInfo *)operator new(336);
      v5 = (#1236 *)LogicLong::clone(a2);
      AllianceInfo::AllianceInfo(v4, v5);
      AlliancePopup::pushScreen(this, v4, v6);
      v7 = (AskForAllianceDataMessage *)operator new(80);
      AskForAllianceDataMessage::AskForAllianceDataMessage(v7);
      v8 = LogicLong::clone(a2);
      AskForAllianceDataMessage::setAllianceId((__int64)v7, v8);
      return MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v7);
    }

    __int64 __fastcall AlliancePopup::getPlayerInfosWaitingForData(LogicAllianceSettingsChangedCommand *this)
    {
      __int64 v2; // x19
      __int64 v3; // x8
      unsigned __int64 v4; // x22
      unsigned int v5; // w21
    
      v2 = 0;
      v3 = *((_QWORD *)this + 32);
      if ( *((_QWORD *)this + 33) != v3 )
      {
        v4 = 0;
        v5 = 1;
        do
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 8 * v4) + 328LL))(*(_QWORD *)(v3 + 8 * v4)) == 2 )
            v2 = ((unsigned int)PlayerInfo::getHasData(*(LogicDeviceLinkMenuClosedMessage **)(*((_QWORD *)this + 32) + 8 * v4))
                ^ 1)
               + (unsigned int)v2;
          v4 = v5;
          v3 = *((_QWORD *)this + 32);
          ++v5;
        }
        while ( v4 < (*((_QWORD *)this + 33) - v3) >> 3 );
      }
      return v2;
    }

    __int64 __fastcall AlliancePopup::getAllianceInfosWaitingForData(LogicAllianceSettingsChangedCommand *this)
    {
      __int64 v2; // x19
      __int64 v3; // x8
      unsigned __int64 v4; // x22
      unsigned int v5; // w21
    
      v2 = 0;
      v3 = *((_QWORD *)this + 32);
      if ( *((_QWORD *)this + 33) != v3 )
      {
        v4 = 0;
        v5 = 1;
        do
        {
          if ( !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 8 * v4) + 328LL))(*(_QWORD *)(v3 + 8 * v4)) )
            v2 = ((unsigned int)AllianceInfo::getHasData(*(LogicChallengeCommand **)(*((_QWORD *)this + 32) + 8 * v4)) ^ 1)
               + (unsigned int)v2;
          v4 = v5;
          v3 = *((_QWORD *)this + 32);
          ++v5;
        }
        while ( v4 < (*((_QWORD *)this + 33) - v3) >> 3 );
      }
      return v2;
    }

    __int64 __fastcall AlliancePopup::getPopupType(LogicAllianceSettingsChangedCommand *this)
    {
      return 22;
    }

}; // end class AlliancePopup
