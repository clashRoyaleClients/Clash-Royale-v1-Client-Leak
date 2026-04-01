class LeaderboardPopup
{
public:

    __int64 __fastcall LeaderboardPopup::LeaderboardPopup(__int64 a1)
    {
      __int64 v2; // x9
      __int64 v3; // x10
      __int64 MovieClip; // x0
      TextField *TextFieldByName; // x21
      __int64 v6; // x0
      TextField *v7; // x22
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 v10; // x0
      __int64 v11; // x0
      __int64 v12; // x0
      #1257 *v13; // x0
      #1249 *MovieClipByName; // x0
      __int64 v15; // x0
      __int64 v16; // x8
      DeviceLinkCodeReceivedScreen *v17; // x22
      void (__fastcall *v18)(DeviceLinkCodeReceivedScreen *, __int64, __int64); // x23
      __int64 v19; // x0
      const char *v20; // x2
      long double v21; // q0
      __int64 v22; // x8
      int v23; // w1
      __int64 v24; // x9
      #1255 *v25; // x21
      MovieClip *v26; // x20
      const char *v27; // x1
      const String *String; // x0
      MovieClip *v29; // x20
      const char *v30; // x1
      const String *v31; // x0
      MovieClip *v32; // x20
      const char *v33; // x1
      const String *v34; // x0
      #1255 *v35; // x21
      String v37; // [xsp+0h] [xbp-60h] BYREF
      String v38; // [xsp+18h] [xbp-48h] BYREF
    
      String::String(&v38, "sc/ui.sc");
      String::String(&v37, "popup_rankings");
      AllianceScreen::AllianceScreen(a1, 1, &v38, &v37);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_10046BA20;
      *(_QWORD *)(a1 + 96) = &off_10046BBB8;
      v2 = 216;
      do
      {
        v3 = a1 + v2;
        *(_QWORD *)v3 = 0;
        *(_WORD *)(v3 + 8) = 0;
        v2 += 16;
      }
      while ( v3 + 16 != a1 + 296 );
      *(_DWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      memset((void *)(a1 + 296), 0, 0x48u);
      MovieClip = GUIContainer::getMovieClip((#1254 *)a1);
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(MovieClip, "ScrollArea");
      v6 = GUIContainer::getMovieClip((#1254 *)a1);
      v7 = (TextField *)MovieClip::getTextFieldByName(v6, "ScrollArea_short");
      *(_QWORD *)(a1 + 216) = createScrollAreaFromTextField(v7);
      *(_QWORD *)(a1 + 264) = createScrollAreaFromTextField(v7);
      *(_QWORD *)(a1 + 232) = createScrollAreaFromTextField(v7);
      *(_QWORD *)(a1 + 280) = createScrollAreaFromTextField(v7);
      *(_QWORD *)(a1 + 248) = createScrollAreaFromTextField(TextFieldByName);
      v8 = GUIContainer::getMovieClip((#1254 *)a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 160LL))(v8, *(_QWORD *)(a1 + 216));
      v9 = GUIContainer::getMovieClip((#1254 *)a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 160LL))(v9, *(_QWORD *)(a1 + 264));
      v10 = GUIContainer::getMovieClip((#1254 *)a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 160LL))(v10, *(_QWORD *)(a1 + 232));
      v11 = GUIContainer::getMovieClip((#1254 *)a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 160LL))(v11, *(_QWORD *)(a1 + 280));
      v12 = GUIContainer::getMovieClip((#1254 *)a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 160LL))(v12, *(_QWORD *)(a1 + 248));
      v13 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClipByName = (#1249 *)MovieClip::getMovieClipByName(v13, "join_fb_item");
      *(_QWORD *)(a1 + 352) = MovieClipByName;
      DisplayObject::removeFromParent(MovieClipByName);
      v15 = GUIContainer::getMovieClip((#1254 *)a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 160LL))(v15, *(_QWORD *)(a1 + 352));
      v16 = *(_QWORD *)(a1 + 352);
      *(_BYTE *)(v16 + 8) = 0;
      *(_BYTE *)(v16 + 64) = 1;
      v17 = (DeviceLinkCodeReceivedScreen *)operator new(264);
      GameButton::GameButton(v17);
      *(_QWORD *)(a1 + 360) = v17;
      v18 = *(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64, __int64))(*(_QWORD *)v17 + 280LL);
      v19 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 352), "connect_button");
      v18(v17, v19, 1);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 352) + 160LL))(
        *(_QWORD *)(a1 + 352),
        *(_QWORD *)(a1 + 360));
      CustomButton::setButtonListener(*(_QWORD *)(a1 + 360), a1 + 96);
      *(__n128 *)&v21 = Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"", v20);
      v22 = 0;
      v23 = *(_DWORD *)(a1 + 208);
      v24 = 216;
      do
      {
        *(_BYTE *)(*(_QWORD *)(a1 + v24) + 8LL) = v23 == (_DWORD)v22++;
        v24 += 16;
      }
      while ( v22 != 5 );
      LeaderboardPopup::AskData(a1, v21);
      v25 = (#1255 *)operator new(40);
      SelectableButtonList::SelectableButtonList(v25);
      *(_QWORD *)(a1 + 296) = v25;
      v26 = *(MovieClip **)(DropGUIContainer::addGameSelectableButton(a1, "player_tab", 1, v25) + 96);
      String = (const String *)StringTable::getString((#1308 *)"TID_TAB_PLAYER_RANGINGS", v27);
      MovieClip::setText(v26, "tab_txt", String);
      v29 = *(MovieClip **)(DropGUIContainer::addGameSelectableButton(a1, "guild_tab", 1, *(_QWORD *)(a1 + 296)) + 96);
      v31 = (const String *)StringTable::getString((#1308 *)"TID_TAB_ALLIANCE_RANGINGS", v30);
      MovieClip::setText(v29, "tab_txt", v31);
      v32 = *(MovieClip **)(DropGUIContainer::addGameSelectableButton(a1, "friends_tab", 1, *(_QWORD *)(a1 + 296)) + 96);
      v34 = (const String *)StringTable::getString((#1308 *)"TID_TAB_FRIEND_RANGINGS", v33);
      MovieClip::setText(v32, "tab_txt", v34);
      v35 = (#1255 *)operator new(40);
      SelectableButtonList::SelectableButtonList(v35);
      *(_QWORD *)(a1 + 320) = v35;
      DropGUIContainer::addGameSelectableButton(a1, "toggle_global", 1, v35);
      DropGUIContainer::addGameSelectableButton(a1, "toggle_local", 1, *(_QWORD *)(a1 + 320));
      return a1;
    }

    __int64 __fastcall LeaderboardPopup::AskData(LogicBillingPackagesData *a1, unsigned int a2)
    {
      __int64 result; // x0
      tween::Bounce *v5; // x19
      char *v6; // x22
      _BYTE *v7; // x22
      int v8; // t1
      __int64 v9; // x19
      AskForAvatarRankingListMessage *v10; // x20
      MessageManager *v11; // x0
      __int64 AllianceId; // x0
      __int64 v13; // x0
    
      GameMode::getInstance();
      result = GameMode::getPlayerAvatar();
      v5 = (tween::Bounce *)result;
      v6 = (char *)a1 + 16 * a2;
      v8 = (unsigned __int8)v6[224];
      v7 = v6 + 224;
      if ( !v8 )
      {
        switch ( a2 )
        {
          case 0u:
            v9 = MessageManager::sm_pInstance;
            v10 = (AskForAvatarRankingListMessage *)operator new(80);
            AskForAvatarRankingListMessage::AskForAvatarRankingListMessage(v10);
            goto LABEL_7;
          case 1u:
            v10 = (AskForAvatarRankingListMessage *)operator new(88);
            AskForAllianceRankingListMessage::AskForAllianceRankingListMessage(v10);
            goto LABEL_9;
          case 2u:
            FriendManager::requestServerFriendList((ReportUserStatusMessage *)FriendManager::sm_pInstance);
            result = LeaderboardPopup::refreshFriendsList(a1);
            break;
          case 3u:
            v9 = MessageManager::sm_pInstance;
            v10 = (AskForAvatarRankingListMessage *)operator new(80);
            AskForAvatarLocalRankingListMessage::AskForAvatarLocalRankingListMessage(v10);
    LABEL_7:
            v11 = (MessageManager *)v9;
            goto LABEL_12;
          case 4u:
            v10 = (AskForAvatarRankingListMessage *)operator new(88);
            AskForAllianceRankingListMessage::AskForAllianceRankingListMessage(v10);
            *((_BYTE *)v10 + 80) = 1;
    LABEL_9:
            if ( LogicClientAvatar::getAllianceId(v5) )
            {
              AllianceId = LogicClientAvatar::getAllianceId(v5);
              v13 = LogicLong::clone(AllianceId);
              AskForAllianceRankingListMessage::setAllianceId((__int64)v10, v13);
            }
            v11 = (MessageManager *)MessageManager::sm_pInstance;
    LABEL_12:
            result = MessageManager::sendMessage(v11, v10);
            break;
          default:
            break;
        }
        *v7 = 1;
      }
      return result;
    }

    // attributes: thunk
    void __fastcall LeaderboardPopup::LeaderboardPopup(LeaderboardPopup *this)
    {
      __ZN16LeaderboardPopupC2Ev((__int64)this);
    }

    void __fastcall LeaderboardPopup::~LeaderboardPopup(LogicBillingPackagesData *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
      long double v6; // q0
      void *v7; // x0
      __int64 v8; // x0
      __int64 v9; // x22
      char *v10; // x20
      __int64 v11; // x0
    
      *(_QWORD *)this = off_10046BA20;
      *((_QWORD *)this + 12) = &off_10046BBB8;
      v2 = *((_QWORD *)this + 45);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 45) = 0;
      v3 = *((_QWORD *)this + 44);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 44) = 0;
      v4 = *((_QWORD *)this + 40);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 40) = 0;
      v5 = *((_QWORD *)this + 37);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 37) = 0;
      LeaderboardPopup::removeItems(this);
      *((_DWORD *)this + 52) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_DWORD *)this + 79) = 0;
      v7 = (void *)*((_QWORD *)this + 41);
      *((_QWORD *)this + 42) = v7;
      *((_QWORD *)this + 37) = 0;
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 44) = 0;
      *((_QWORD *)this + 45) = 0;
      if ( v7 )
        operator delete(v7);
      v8 = *((_QWORD *)this + 38);
      if ( v8 )
        *(__n128 *)&v6 = operator delete[](v8);
      v9 = 0;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 39) = 0;
      do
      {
        v10 = (char *)this + v9;
        v11 = *(_QWORD *)((char *)this + v9 + 280);
        if ( v11 )
          (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v11 + 8LL))(v11, v6);
        *((_QWORD *)v10 + 35) = 0;
        *((_WORD *)v10 + 144) = 0;
        v9 -= 16;
      }
      while ( v9 != -80 );
      AllianceScreen::~AllianceScreen(this);
    }

    __int64 __fastcall LeaderboardPopup::removeItems(LogicBillingPackagesData *this)
    {
      __int64 v2; // x20
      char *v3; // x21
      __int64 result; // x0
      __int64 v5; // x8
      unsigned __int64 v6; // x9
      __int64 i; // x20
      int v8; // w8
      __int64 v9; // x20
      char *v10; // x19
      int v11; // w8
    
      v2 = 0;
      v3 = (char *)this + 216;
      do
      {
        result = ScrollArea::removeAllContent(*(#1253 **)&v3[v2]);
        v2 += 16;
      }
      while ( v2 != 80 );
      v5 = *((_QWORD *)this + 41);
      v6 = (unsigned __int64)(*((_QWORD *)this + 42) - v5) >> 3;
      if ( (int)v6 >= 1 )
      {
        for ( i = (int)v6 - 1LL; ; --i )
        {
          result = *(_QWORD *)(v5 + 8 * i);
          if ( result )
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
          if ( i + 1 < 2 )
            break;
          v5 = *((_QWORD *)this + 41);
        }
      }
      v8 = *((_DWORD *)this + 79);
      v9 = (unsigned int)(v8 - 1);
      if ( v8 >= 1 )
      {
        v10 = (char *)this + 304;
        do
        {
          result = LogicArrayList<DisplayObject *>::remove(v10, v9);
          if ( result )
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
          v11 = v9 + 1;
          v9 = (unsigned int)(v9 - 1);
        }
        while ( v11 > 1 );
      }
      return result;
    }

    // attributes: thunk
    void __fastcall LeaderboardPopup::~LeaderboardPopup(LogicBillingPackagesData *this)
    {
      __ZN16LeaderboardPopupD2Ev(this);
    }

    void __fastcall LeaderboardPopup::~LeaderboardPopup(LogicBillingPackagesData *this)
    {
      LeaderboardPopup::~LeaderboardPopup(this);
      operator delete(this);
    }

    __int64 __fastcall LeaderboardPopup::buttonClicked(#1255 **this, #1251 *a2)
    {
      int v4; // w21
      #1255 *v5; // x0
      unsigned int SelectedIndex; // w20
      const char *v7; // x2
      int v8; // w8
      unsigned int v9; // w8
      __int64 v10; // x8
      int v11; // w21
      __int64 result; // x0
    
      if ( *(this + 45) == a2 )
      {
        if ( !(unsigned int)FacebookManager::getState((LogicBuyChestCommand *)FacebookManager::sm_pInstance) )
          FacebookManager::login((LogicBuyChestCommand *)FacebookManager::sm_pInstance);
        FriendManager::requestServerFriendList((ReportUserStatusMessage *)FriendManager::sm_pInstance);
        return LeaderboardPopup::refreshFriendsList((LogicBillingPackagesData *)this);
      }
      else
      {
        v4 = 0;
        v5 = *(this + 37);
        do
        {
          if ( (#1251 *)SelectableButtonList::getButton(v5, v4) == a2 )
            SelectableButtonList::selectButtonIndex(*(this + 40), 0);
          ++v4;
          v5 = *(this + 37);
        }
        while ( v4 != 3 );
        SelectedIndex = SelectableButtonList::getSelectedIndex(v5);
        if ( (unsigned int)SelectableButtonList::getSelectedIndex(*(this + 40)) == 1 )
          v8 = 3;
        else
          v8 = 0;
        v9 = v8 + SelectedIndex;
        if ( SelectedIndex <= 1 )
          SelectedIndex = v9;
        Debugger::doAssert((Debugger *)(SelectedIndex < 5), (bool)"", v7);
        v10 = *((unsigned int *)this + 52);
        if ( SelectedIndex != (_DWORD)v10 )
        {
          *((_BYTE *)*(this + 2 * v10 + 27) + 8) = 0;
          *((_BYTE *)*(this + 2 * (int)SelectedIndex + 27) + 8) = 1;
          *((_DWORD *)this + 52) = SelectedIndex;
          LeaderboardPopup::AskData((LogicBillingPackagesData *)this, SelectedIndex);
        }
        if ( (int)SelectableButtonList::getButtonCount(*(this + 40)) >= 1 )
        {
          v11 = 0;
          do
            *(_BYTE *)(SelectableButtonList::getButton(*(this + 40), v11++) + 8) = SelectedIndex != 2;
          while ( v11 < (int)SelectableButtonList::getButtonCount(*(this + 40)) );
        }
        result = FacebookManager::getState((LogicBuyChestCommand *)FacebookManager::sm_pInstance);
        if ( !(_DWORD)result )
          *((_BYTE *)*(this + 44) + 8) = SelectedIndex == 2;
      }
      return result;
    }

    __int64 __fastcall LeaderboardPopup::refreshFriendsList(LogicBillingPackagesData *this)
    {
      int State; // w23
      __int64 v3; // x20
      __int64 *FriendList; // x22
      __int64 *v5; // x21
      __int64 v6; // x8
      __int64 v7; // x25
      __int64 v8; // x0
      __int64 v9; // x8
      __int64 v10; // x25
      ChallengeDoneStreamItem *v11; // x23
      __int64 v12; // x24
      __int64 v13; // x22
      const void *v14; // x1
      __int64 v15; // x8
      _BYTE *v16; // x22
      unsigned __int64 v17; // x23
      _QWORD *v18; // x0
      __int64 v19; // x24
      __int64 v20; // x22
      __int64 v21; // x8
      __int64 v22; // x9
      __int64 v23; // x23
      __int64 v24; // x0
      __int64 v25; // x23
      __int64 v26; // x22
      __int64 v27; // x21
      __int64 *v28; // x22
      __int64 v29; // x8
      __int64 v30; // x2
      __int64 i; // x8
      __int64 v32; // x22
      DisplayObject *v33; // x21
      float v34; // s8
      float v35; // s9
      long double v36; // q0
      long double v37; // q0
      float v39; // [xsp+0h] [xbp-A0h]
      __int64 v40; // [xsp+10h] [xbp-90h] BYREF
      __int64 v41; // [xsp+18h] [xbp-88h] BYREF
      void *__dst; // [xsp+20h] [xbp-80h] BYREF
      char *v43; // [xsp+28h] [xbp-78h]
      __int64 v44; // [xsp+38h] [xbp-68h] BYREF
    
      State = FacebookManager::getState((LogicBuyChestCommand *)FacebookManager::sm_pInstance);
      *(_BYTE *)(*((_QWORD *)this + 44) + 8LL) = State == 0 && *((_DWORD *)this + 52) == 2;
      v3 = *((_QWORD *)this + 31);
      *((_BYTE *)this + 257) = 1;
      FriendList = (__int64 *)FriendManager::getFriendList((ReportUserStatusMessage *)FriendManager::sm_pInstance);
      v5 = (__int64 *)((char *)this + 328);
      v6 = *((_QWORD *)this + 41);
      if ( (int)((unsigned __int64)(*((_QWORD *)this + 42) - v6) >> 3) >= 1 )
      {
        v7 = 0;
        do
        {
          v8 = *(_QWORD *)(v6 + 8 * v7);
          do
          {
            if ( v8 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
              v6 = *v5;
            }
            *(_QWORD *)(v6 + 8 * v7) = 0;
            v6 = *v5;
            v8 = *(_QWORD *)(*v5 + 8 * v7);
          }
          while ( v8 );
          ++v7;
        }
        while ( v7 < (int)((unsigned __int64)(*((_QWORD *)this + 42) - v6) >> 3) );
      }
      *((_QWORD *)this + 42) = v6;
      ScrollArea::removeAllContent((#1253 *)v3);
      ScrollArea::setForcedContentBounds((ScrollArea *)v3, 0);
      ScrollArea::enableHorizontalDrag((#1253 *)v3, 0);
      ScrollArea::enableVerticalDrag((#1253 *)v3, 1);
      *(_BYTE *)(v3 + 496) = 1;
      *(_BYTE *)(v3 + 64) = 1;
      if ( State == 3 )
      {
        v9 = *FriendList;
        if ( (int)((unsigned __int64)(FriendList[1] - *FriendList) >> 3) >= 1 )
        {
          v10 = 0;
          do
          {
            v11 = *(ChallengeDoneStreamItem **)(v9 + 8 * v10);
            if ( FriendEntry::getAvatarId(v11) )
            {
              v12 = operator new(368);
              FriendItem::FriendItem(v12, v11, 0);
              v44 = v12;
              std::vector<FriendItem *>::push_back((__int64)this + 328, &v44);
            }
            ++v10;
            v9 = *FriendList;
          }
          while ( v10 < (int)((unsigned __int64)(FriendList[1] - *FriendList) >> 3) );
        }
      }
      if ( LogicDataTables::getClientGlobals()
        && *(_BYTE *)(LogicDataTables::getClientGlobals() + 380)
        && GameCenterManager::sm_pInstance )
      {
        v13 = GameCenterManager::sm_pInstance + 136;
        std::_Vector_base<FacebookFriend *>::_Vector_base(
          (__int64 *)&__dst,
          (__int64)(*(_QWORD *)(GameCenterManager::sm_pInstance + 144) - *(_QWORD *)(GameCenterManager::sm_pInstance + 136)) >> 3);
        v14 = *(const void **)v13;
        v15 = *(_QWORD *)(v13 + 8);
        v16 = __dst;
        v17 = (v15 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8LL;
        memmove(__dst, v14, v15 - (_QWORD)v14);
        v43 = &v16[v17];
        v18 = __dst;
        if ( (int)((unsigned __int64)(&v16[v17] - (_BYTE *)__dst) >> 3) >= 1 )
        {
          v19 = 0;
          do
          {
            v20 = v18[v19];
            if ( *(_QWORD *)(v20 + 88) )
            {
              v21 = *((_QWORD *)this + 41);
              v22 = *((_QWORD *)this + 42);
              if ( (int)((unsigned __int64)(v22 - v21) >> 3) >= 1 )
              {
                v23 = 0;
                do
                {
                  v24 = *(_QWORD *)(*(_QWORD *)(v21 + 8 * v23) + 312LL);
                  if ( v24 )
                  {
                    if ( (LogicLong::equals(v24, *(_QWORD *)(v20 + 88)) & 1) != 0 )
                      goto LABEL_27;
                    v21 = *((_QWORD *)this + 41);
                    v22 = *((_QWORD *)this + 42);
                  }
                  ++v23;
                }
                while ( v23 < (int)((unsigned __int64)(v22 - v21) >> 3) );
              }
              v25 = operator new(368);
              FriendItem::FriendItem(v25, v20);
              v41 = v25;
              std::vector<FriendItem *>::push_back((__int64)this + 328, &v41);
            }
    LABEL_27:
            ++v19;
            v18 = __dst;
          }
          while ( v19 < (int)((unsigned __int64)(v43 - (_BYTE *)__dst) >> 3) );
        }
        if ( v18 )
          operator delete(v18);
      }
      v26 = operator new(368);
      FriendItem::FriendItem(v26, 0, 1);
      v40 = v26;
      std::vector<FriendItem *>::push_back((__int64)this + 328, &v40);
      v27 = *((_QWORD *)this + 41);
      v28 = (__int64 *)*((_QWORD *)this + 42);
      v29 = v27;
      if ( (__int64 *)v27 != v28 )
      {
        v30 = 0;
        for ( i = ((__int64)v28 - v27) >> 3; i != 1; i >>= 1 )
          v30 += 2;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,long,bool (*)(FriendItem const*,FriendItem const*)>(
          *((_QWORD *)this + 41),
          *((char **)this + 42),
          v30,
          (__int64 (__fastcall *)(__int64, __int64))friendSort);
        std::__final_insertion_sort<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,bool (*)(FriendItem const*,FriendItem const*)>(
          v27,
          v28,
          (__int64 (__fastcall *)(__int64, _QWORD))friendSort);
        v27 = *((_QWORD *)this + 41);
        v29 = *((_QWORD *)this + 42);
      }
      if ( (int)((unsigned __int64)(v29 - v27) >> 3) >= 1 )
      {
        v32 = 0;
        v39 = 0.0;
        do
        {
          v33 = *(DisplayObject **)(v27 + 8 * v32);
          v34 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v33 + 88LL))(v33) * 0.5;
          v35 = v39 + (float)((*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v33 + 96LL))(v33) * 0.5);
          *(__n128 *)&v36 = DisplayObject::setPixelSnappedXY(v33, v34, v35);
          v37 = ((long double (__fastcall *)(DisplayObject *, long double))*(_QWORD *)(*(_QWORD *)v33 + 96LL))(v33, v36);
          v39 = v35 + (float)(*(float *)&v37 * 0.5);
          ScrollArea::addContentDontUpdateBounds((#1253 *)v3, v33);
          FriendItem::setOrderNum((__int64)v33, (const char *)(unsigned int)++v32);
          v27 = *((_QWORD *)this + 41);
        }
        while ( v32 < (int)((unsigned __int64)(*((_QWORD *)this + 42) - v27) >> 3) );
      }
      return ScrollArea::updateBounds((ScrollArea *)v3);
    }

    __int64 __fastcall LeaderboardPopup::setData(__int64 result, AllianceLocalRankingListMessage *a2)
    {
      __int64 v3; // x22
      #1253 *v4; // x20
      __int64 v5; // x0
      _QWORD *v6; // x21
      int v7; // w24
      __int64 v8; // x22
      __int64 v9; // x23
      __int64 v10; // x26
      float v11; // s0
      __int64 v12; // x25
      DisplayObject *v13; // x24
      long double v14; // q0
      float v15; // s8
      float v16; // s0
      float v17; // [xsp+0h] [xbp-90h]
      float v18; // [xsp+10h] [xbp-80h]
      DisplayObject *v19; // [xsp+28h] [xbp-68h] BYREF
    
      v3 = result;
      if ( !*(_BYTE *)(result + 289) )
      {
        v4 = *(#1253 **)(result + 280);
        *(_BYTE *)(result + 289) = 1;
        v5 = AllianceLocalRankingListMessage::removeAllianceRankingList(a2);
        v6 = (_QWORD *)v5;
        if ( v5 )
        {
          v7 = *(_DWORD *)(v5 + 12);
          v8 = v3 + 304;
          LogicArrayList<DisplayObject *>::ensureCapacity(v8, v7);
          if ( v7 >= 1 )
          {
            v9 = 0;
            v10 = v7;
            v17 = 0.0;
            v11 = 0.0;
            do
            {
              v18 = v11;
              v12 = *(_QWORD *)(*v6 + 8 * v9);
              v13 = (DisplayObject *)operator new(280);
              AllianceRankItem::AllianceRankItem(v13, v12, v9);
              if ( !(_DWORD)v9 )
              {
                v14 = ((long double (__fastcall *)(DisplayObject *))*(_QWORD *)(*(_QWORD *)v13 + 96LL))(v13);
                v17 = ceilf(*(float *)&v14);
              }
              v15 = v18 + (float)(v17 * 0.5);
              v16 = (*(float (__fastcall **)(#1253 *))(*(_QWORD *)v4 + 88LL))(v4);
              DisplayObject::setPixelSnappedXY(v13, v16 * 0.5, v15);
              ScrollArea::addContentDontUpdateBounds(v4, v13);
              v19 = v13;
              LogicArrayList<DisplayObject *>::add(v8, (__int64 *)&v19);
              v11 = (float)(v17 * 0.5) + v15;
              ++v9;
            }
            while ( v9 < v10 );
          }
          AllianceLocalRankingListMessage::setAllianceRankingList(a2, v6);
        }
        return ScrollArea::updateBounds(v4);
      }
      return result;
    }

    __int64 __fastcall LeaderboardPopup::setData(__int64 result, AllianceRankingListMessage *a2)
    {
      __int64 v3; // x22
      #1253 *v4; // x20
      __int64 v5; // x0
      _QWORD *v6; // x21
      int v7; // w24
      __int64 v8; // x22
      __int64 v9; // x23
      __int64 v10; // x26
      float v11; // s0
      __int64 v12; // x25
      DisplayObject *v13; // x24
      long double v14; // q0
      float v15; // s8
      float v16; // s0
      float v17; // [xsp+0h] [xbp-90h]
      float v18; // [xsp+10h] [xbp-80h]
      DisplayObject *v19; // [xsp+28h] [xbp-68h] BYREF
    
      v3 = result;
      if ( !*(_BYTE *)(result + 241) )
      {
        v4 = *(#1253 **)(result + 232);
        *(_BYTE *)(result + 241) = 1;
        v5 = AllianceRankingListMessage::removeAllianceRankingList(a2);
        v6 = (_QWORD *)v5;
        if ( v5 )
        {
          v7 = *(_DWORD *)(v5 + 12);
          v8 = v3 + 304;
          LogicArrayList<DisplayObject *>::ensureCapacity(v8, v7);
          if ( v7 >= 1 )
          {
            v9 = 0;
            v10 = v7;
            v17 = 0.0;
            v11 = 0.0;
            do
            {
              v18 = v11;
              v12 = *(_QWORD *)(*v6 + 8 * v9);
              v13 = (DisplayObject *)operator new(280);
              AllianceRankItem::AllianceRankItem(v13, v12, v9);
              if ( !(_DWORD)v9 )
              {
                v14 = ((long double (__fastcall *)(DisplayObject *))*(_QWORD *)(*(_QWORD *)v13 + 96LL))(v13);
                v17 = ceilf(*(float *)&v14);
              }
              v15 = v18 + (float)(v17 * 0.5);
              v16 = (*(float (__fastcall **)(#1253 *))(*(_QWORD *)v4 + 88LL))(v4);
              DisplayObject::setPixelSnappedXY(v13, v16 * 0.5, v15);
              ScrollArea::addContentDontUpdateBounds(v4, v13);
              v19 = v13;
              LogicArrayList<DisplayObject *>::add(v8, (__int64 *)&v19);
              v11 = (float)(v17 * 0.5) + v15;
              ++v9;
            }
            while ( v9 < v10 );
          }
          AllianceRankingListMessage::setAllianceRankingList(a2, v6);
        }
        return ScrollArea::updateBounds(v4);
      }
      return result;
    }

    __int64 __fastcall LeaderboardPopup::setData(__int64 this, LogicCharacterBuffComponent *a2)
    {
      __int64 v3; // x22
      #1253 *v4; // x20
      __int64 v5; // x0
      _QWORD *v6; // x21
      int v7; // w24
      __int64 v8; // x22
      __int64 v9; // x23
      __int64 v10; // x25
      float v11; // s0
      #1390 *v12; // x24
      long double v13; // q0
      float v14; // s8
      float v15; // s0
      float v16; // [xsp+0h] [xbp-90h]
      float v17; // [xsp+10h] [xbp-80h]
      #1390 *v18; // [xsp+28h] [xbp-68h] BYREF
    
      v3 = this;
      if ( !*(_BYTE *)(this + 273) )
      {
        v4 = *(#1253 **)(this + 264);
        *(_BYTE *)(this + 273) = 1;
        v5 = AvatarLocalRankingListMessage::removeAvatarRankingList(a2);
        v6 = (_QWORD *)v5;
        if ( v5 )
        {
          v7 = *(_DWORD *)(v5 + 12);
          v8 = v3 + 304;
          LogicArrayList<DisplayObject *>::ensureCapacity(v8, v7);
          if ( v7 >= 1 )
          {
            v9 = 0;
            v10 = v7;
            v16 = 0.0;
            v11 = 0.0;
            do
            {
              v17 = v11;
              v12 = (#1390 *)operator new(280);
              PlayerRankItem::PlayerRankItem(v12, *(DonationContainer **)(*v6 + 8 * v9), v9);
              if ( !(_DWORD)v9 )
              {
                v13 = ((long double (__fastcall *)(#1390 *))*(_QWORD *)(*(_QWORD *)v12 + 96LL))(v12);
                v16 = ceilf(*(float *)&v13);
              }
              v14 = v17 + (float)(v16 * 0.5);
              v15 = (*(float (__fastcall **)(#1253 *))(*(_QWORD *)v4 + 88LL))(v4);
              DisplayObject::setPixelSnappedXY(v12, v15 * 0.5, v14);
              ScrollArea::addContentDontUpdateBounds(v4, v12);
              v18 = v12;
              LogicArrayList<DisplayObject *>::add(v8, (__int64 *)&v18);
              v11 = (float)(v16 * 0.5) + v14;
              ++v9;
            }
            while ( v9 < v10 );
          }
          AvatarLocalRankingListMessage::setAvatarRankingList((__int64)a2, (__int64)v6);
        }
        return ScrollArea::updateBounds(v4);
      }
      return this;
    }

    __int64 __fastcall LeaderboardPopup::setData(__int64 this, #1166 *a2)
    {
      __int64 v3; // x22
      #1253 *v4; // x20
      __int64 v5; // x0
      _QWORD *v6; // x21
      int v7; // w24
      __int64 v8; // x22
      __int64 v9; // x23
      __int64 v10; // x25
      float v11; // s0
      #1390 *v12; // x24
      long double v13; // q0
      float v14; // s8
      float v15; // s0
      float v16; // [xsp+0h] [xbp-90h]
      float v17; // [xsp+10h] [xbp-80h]
      #1390 *v18; // [xsp+28h] [xbp-68h] BYREF
    
      v3 = this;
      if ( !*(_BYTE *)(this + 225) )
      {
        v4 = *(#1253 **)(this + 216);
        *(_BYTE *)(this + 225) = 1;
        v5 = AvatarRankingListMessage::removeAvatarRankingList(a2);
        v6 = (_QWORD *)v5;
        if ( v5 )
        {
          v7 = *(_DWORD *)(v5 + 12);
          v8 = v3 + 304;
          LogicArrayList<DisplayObject *>::ensureCapacity(v8, v7);
          if ( v7 >= 1 )
          {
            v9 = 0;
            v10 = v7;
            v16 = 0.0;
            v11 = 0.0;
            do
            {
              v17 = v11;
              v12 = (#1390 *)operator new(280);
              PlayerRankItem::PlayerRankItem(v12, *(DonationContainer **)(*v6 + 8 * v9), v9);
              if ( !(_DWORD)v9 )
              {
                v13 = ((long double (__fastcall *)(#1390 *))*(_QWORD *)(*(_QWORD *)v12 + 96LL))(v12);
                v16 = ceilf(*(float *)&v13);
              }
              v14 = v17 + (float)(v16 * 0.5);
              v15 = (*(float (__fastcall **)(#1253 *))(*(_QWORD *)v4 + 88LL))(v4);
              DisplayObject::setPixelSnappedXY(v12, v15 * 0.5, v14);
              ScrollArea::addContentDontUpdateBounds(v4, v12);
              v18 = v12;
              LogicArrayList<DisplayObject *>::add(v8, (__int64 *)&v18);
              v11 = (float)(v16 * 0.5) + v14;
              ++v9;
            }
            while ( v9 < v10 );
          }
          AvatarRankingListMessage::setAvatarRankingList(a2, v6);
        }
        return ScrollArea::updateBounds(v4);
      }
      return this;
    }

    __int64 __fastcall LeaderboardPopup::setData(LogicBillingPackagesData *this, #1242 *a2)
    {
      __int64 result; // x0
    
      if ( (*(unsigned int (__fastcall **)(#1242 *))(*(_QWORD *)a2 + 40LL))(a2) == 24403 )
        return LeaderboardPopup::setData((__int64)this, a2);
      if ( (*(unsigned int (__fastcall **)(#1242 *))(*(_QWORD *)a2 + 40LL))(a2) == 24404 )
        return LeaderboardPopup::setData((__int64)this, a2);
      if ( (*(unsigned int (__fastcall **)(#1242 *))(*(_QWORD *)a2 + 40LL))(a2) == 24401 )
        return LeaderboardPopup::setData((__int64)this, a2);
      result = (*(__int64 (__fastcall **)(#1242 *))(*(_QWORD *)a2 + 40LL))(a2);
      if ( (_DWORD)result == 24402 )
        return LeaderboardPopup::setData((__int64)this, a2);
      return result;
    }

    __int64 __fastcall LeaderboardPopup::update(LogicBillingPackagesData *this, long double a2)
    {
      __int64 i; // x20
      __int64 result; // x0
      __int64 v6; // x8
      __int64 v7; // x20
    
      AllianceScreen::update(this, *(float *)&a2);
      for ( i = 0; i != 80; i += 16 )
        result = (*(__int64 (__fastcall **)(_QWORD, long double))(**(_QWORD **)((char *)this + i + 216) + 272LL))(
                   *(_QWORD *)((char *)this + i + 216),
                   a2);
      v6 = *((_QWORD *)this + 41);
      if ( (int)((unsigned __int64)(*((_QWORD *)this + 42) - v6) >> 3) > 0 )
      {
        v7 = 0;
        do
        {
          result = FriendItem::update(*(_QWORD *)(v6 + 8 * v7++));
          v6 = *((_QWORD *)this + 41);
        }
        while ( v7 < (int)((unsigned __int64)(*((_QWORD *)this + 42) - v6) >> 3) );
      }
      return result;
    }

    void *__fastcall LeaderboardPopup::getTitleText(LogicBillingPackagesData *this, const char *a2)
    {
      return StringTable::getString((#1308 *)"TID_TITLE_LEADERBOARD", a2);
    }

    __int64 __fastcall LeaderboardPopup::getScreenType(LogicBillingPackagesData *this)
    {
      return 1;
    }

    __int64 __fastcall LeaderboardPopup::getPopupType(LogicBillingPackagesData *this)
    {
      return 4;
    }

}; // end class LeaderboardPopup
