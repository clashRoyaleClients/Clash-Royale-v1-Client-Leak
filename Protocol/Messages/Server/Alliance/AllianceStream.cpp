class AllianceStream
{
public:

    __int64 __fastcall AllianceStream::AllianceStream(__int64 a1)
    {
      const String *v2; // x1
      const String *v3; // x1
      int exists; // w21
      const String *v5; // x1
      const String *v6; // x1
      const char *v7; // x1
      Utility *v8; // x0
      const char *v9; // x1
      Utility *v10; // x0
      String v12; // [xsp+0h] [xbp-B0h] BYREF
      int v13; // [xsp+1Ch] [xbp-94h]
      Utility *v14; // [xsp+20h] [xbp-90h] BYREF
      String v15; // [xsp+30h] [xbp-80h] BYREF
      int v16; // [xsp+4Ch] [xbp-64h]
      Utility *v17; // [xsp+50h] [xbp-60h] BYREF
      String v18; // [xsp+60h] [xbp-50h] BYREF
      String v19; // [xsp+78h] [xbp-38h] BYREF
    
      *(_QWORD *)a1 = &off_10046F4D8;
      *(_QWORD *)(a1 + 8) = off_10046F528;
      LogicLong::LogicLong((LogicLong *)(a1 + 160));
      LogicLong::LogicLong((LogicLong *)(a1 + 168));
      *(_QWORD *)(a1 + 192) = 0;
      *(_QWORD *)(a1 + 224) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      LogicLong::LogicLong((LogicLong *)(a1 + 240));
      *(_BYTE *)(a1 + 276) = 0;
      *(_BYTE *)(a1 + 268) = 0;
      *(_DWORD *)(a1 + 248) = 0;
      *(_DWORD *)(a1 + 272) = -1;
      *(_DWORD *)(a1 + 264) = -1;
      *(_BYTE *)(a1 + 252) = 0;
      *(_QWORD *)(a1 + 160) = -1;
      *(_QWORD *)(a1 + 168) = -1;
      *(_DWORD *)(a1 + 260) = 0;
      *(_DWORD *)(a1 + 184) = 0;
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      *(_DWORD *)(a1 + 240) = -1;
      *(_DWORD *)(a1 + 244) = -1;
      *(_DWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 176) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 88) = 0;
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_BYTE *)(a1 + 253) = 1;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      String::String(&v19, "ClanChatLastReadH");
      if ( (unsigned int)Application::existsKeyValue((Application *)&v19, v2) )
      {
        String::String(&v18, "ClanChatLastReadL");
        exists = Application::existsKeyValue((Application *)&v18, v3);
        String::~String();
      }
      else
      {
        exists = 0;
      }
      String::~String();
      if ( exists )
      {
        String::String(&v15, "ClanChatLastReadH");
        Application::getKeyValue((Application *)&v15, v5);
        String::~String();
        String::String(&v12, "ClanChatLastReadL");
        Application::getKeyValue((Application *)&v12, v6);
        String::~String();
        if ( v16 + 1 > 8 )
          v8 = v17;
        else
          v8 = (Utility *)&v17;
        *(_DWORD *)(a1 + 240) = Utility::atoi(v8, v7);
        if ( v13 + 1 > 8 )
          v10 = v14;
        else
          v10 = (Utility *)&v14;
        *(_DWORD *)(a1 + 244) = Utility::atoi(v10, v9);
        String::~String();
        String::~String();
      }
      return a1;
    }

    void __fastcall AllianceStream::initialize(__int64 a1)
    {
      #1375 *v2; // x20
      const String *v3; // x2
      __int64 MovieClip; // x0
      #1271 *TextFieldByName; // x20
      const char *v6; // x2
      #1253 *v7; // x21
      long double Width; // q0
      float v9; // s8
      long double Height; // q0
      __int64 v11; // x0
      #1257 *v12; // x0
      DisplayObject *v13; // x21
      float v14; // s8
      float v15; // s9
      long double v16; // q0
      long double v17; // q0
      #1257 *v18; // x0
      __int64 MovieClipByName; // x0
      MovieClip *v20; // x20
      const char *v21; // x1
      const String *String; // x0
      GameButton *v23; // x21
      #1257 *v24; // x0
      __int64 v25; // x0
      __int64 v26; // x20
      GameButton *v27; // x21
      String *v28; // x0
      int v29; // w1
      __int64 v30; // x0
      GameButton *v31; // x20
      __int64 v32; // x20
      MovieClip *v33; // x20
      const char *v34; // x1
      const String *v35; // x0
      __int64 v36; // x20
      #1257 *v37; // x0
      __int64 v38; // x0
      #1257 *v39; // x0
      __int64 v40; // x0
      __int64 v41; // x0
      __int64 v42; // x0
      MovieClip *v43; // x20
      const char *v44; // x1
      const String *v45; // x0
      __int64 v46; // x0
      MovieClip *v47; // x20
      const char *v48; // x1
      const String *v49; // x0
      __int64 v50; // x0
      TextField *v51; // x20
      #1257 *v52; // x0
      __int64 v53; // x0
      GameInputField *v54; // x21
      __int64 v55; // x8
      unsigned __int64 v56; // x9
      unsigned int v57; // w21
      int v58; // w2
      String v59; // [xsp+0h] [xbp-100h] BYREF
      String v60; // [xsp+18h] [xbp-E8h] BYREF
      String v61; // [xsp+30h] [xbp-D0h] BYREF
      String v62; // [xsp+48h] [xbp-B8h] BYREF
      Rect v63[2]; // [xsp+60h] [xbp-A0h] BYREF
      String v64; // [xsp+70h] [xbp-90h] BYREF
      String v65; // [xsp+88h] [xbp-78h] BYREF
      String v66; // [xsp+A0h] [xbp-60h] BYREF
      String v67; // [xsp+B8h] [xbp-48h] BYREF
    
      if ( !*(_QWORD *)(a1 + 16) )
      {
        *(_BYTE *)(a1 + 268) = 1;
        v2 = (#1375 *)operator new(192);
        String::String(&v67, "sc/ui.sc");
        String::String(&v65, "sc/ui.sc");
        String::String(&v64, "guild_chat_page_iphone_new");
        StringTable::getCorrectExportNameForProfile((#1308 *)&v65, &v64, v3, &v66);
        DropGUIContainer::DropGUIContainer(v2, &v67, &v66);
        *(_QWORD *)(a1 + 16) = v2;
        String::~String();
        String::~String();
        String::~String();
        String::~String();
        MovieClip = GUIContainer::getMovieClip(*(#1254 **)(a1 + 16));
        TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "chat_area");
        Debugger::doAssert((Debugger *)(TextFieldByName != 0), (bool)"", v6);
        Rect::Rect(v63);
        TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v63);
        v7 = (#1253 *)operator new(504);
        Width = Rect::getWidth(v63);
        v9 = *(float *)&Width;
        Height = Rect::getHeight(v63);
        ScrollArea::ScrollArea(v7, v9, *(float *)&Height, 100);
        *(_QWORD *)(a1 + 176) = v7;
        ScrollArea::enablePinching(v7, 0);
        ScrollArea::enableHorizontalDrag(*(#1253 **)(a1 + 176), 0);
        ScrollArea::enableVerticalDrag(*(#1253 **)(a1 + 176), 1);
        v11 = *(_QWORD *)(a1 + 176);
        *(_BYTE *)(v11 + 496) = 1;
        ScrollArea::setAlignment((#1253 *)v11, 5);
        v12 = (#1257 *)GUIContainer::getMovieClip(*(#1254 **)(a1 + 16));
        MovieClip::changeTimelineChild(v12, TextFieldByName, *(#1249 **)(a1 + 176));
        v13 = *(DisplayObject **)(a1 + 176);
        v14 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(v13)));
        v15 = *(float *)&v63[0].top;
        v16 = DisplayObject::getY(*(_QWORD *)(a1 + 176));
        *(__n128 *)&v17 = DisplayObject::setPixelSnappedXY(v13, v14 + v15, *(float *)&v16 + *(float *)&v63[0].bottom);
        if ( TextFieldByName )
          (*(void (__fastcall **)(#1271 *, long double))(*(_QWORD *)TextFieldByName + 8LL))(TextFieldByName, v17);
        v18 = (#1257 *)GUIContainer::getMovieClip(*(#1254 **)(a1 + 16));
        MovieClipByName = MovieClip::getMovieClipByName(v18, "friendly_wait");
        *(_QWORD *)(a1 + 40) = MovieClipByName;
        *(_BYTE *)(MovieClipByName + 8) = 0;
        v20 = (MovieClip *)MovieClip::getMovieClipByName((#1257 *)MovieClipByName, "cancel_button");
        String = (const String *)StringTable::getString((#1308 *)"TID_CANCEL", v21);
        MovieClip::setText(v20, "txt", String);
        v23 = (GameButton *)operator new(264);
        GameButton::GameButton(v23);
        *(_QWORD *)(a1 + 48) = v23;
        MovieClip::changeTimelineChild(*(#1257 **)(a1 + 40), v20, v23);
        *((_DWORD *)v20 + 4) = 1065353216;
        *((_DWORD *)v20 + 7) = 1065353216;
        *((_DWORD *)v20 + 5) = 0;
        *((_DWORD *)v20 + 6) = 0;
        *((_DWORD *)v20 + 8) = 0;
        *((_DWORD *)v20 + 9) = 0;
        (*(void (__fastcall **)(_QWORD, MovieClip *, __int64))(**(_QWORD **)(a1 + 48) + 280LL))(
          *(_QWORD *)(a1 + 48),
          v20,
          1);
        CustomButton::setButtonListener(*(_QWORD *)(a1 + 48), a1);
        *(_QWORD *)(a1 + 56) = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 40), "TID_WAITING_FOR_MATE");
        v24 = (#1257 *)GUIContainer::getMovieClip(*(#1254 **)(a1 + 16));
        v25 = MovieClip::getMovieClipByName(v24, "guild_info");
        *(_QWORD *)(a1 + 32) = v25;
        *(_QWORD *)(a1 + 64) = MovieClip::getTextFieldByName(v25, "TID_ONLINE");
        v26 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 32), "button_challenge");
        if ( v26 )
        {
          v27 = (GameButton *)operator new(264);
          GameButton::GameButton(v27);
          *(_QWORD *)(a1 + 112) = v27;
          MovieClip::changeTimelineChild(*(#1257 **)(a1 + 32), (#1249 *)v26, v27);
          *(_DWORD *)(v26 + 16) = 1065353216;
          *(_DWORD *)(v26 + 28) = 1065353216;
          *(_DWORD *)(v26 + 20) = 0;
          *(_DWORD *)(v26 + 24) = 0;
          *(_DWORD *)(v26 + 32) = 0;
          *(_DWORD *)(v26 + 36) = 0;
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 112) + 288LL))(
            *(_QWORD *)(a1 + 112),
            v26,
            1);
          GUIContainer::addButtonManually(*(#1254 **)(a1 + 16), *(#1251 **)(a1 + 112));
          CustomButton::setButtonListener(*(_QWORD *)(a1 + 112), a1);
          v28 = (String *)*(unsigned int *)(LogicDataTables::getGlobals() + 476);
          if ( (_DWORD)v28 )
          {
            String::valueOf(&v61, v28, v29);
            MovieClip::setText((MovieClip *)v26, "txt", &v61);
            String::~String();
          }
          else
          {
            String::String(&v62, "");
            MovieClip::setText((MovieClip *)v26, "txt", &v62);
            String::~String();
            v30 = MovieClip::getMovieClipByName((#1257 *)v26, "icon");
            if ( v30 )
              *(_BYTE *)(v30 + 8) = 0;
          }
          *(_BYTE *)(*(_QWORD *)(a1 + 112) + 8LL) = *(_BYTE *)(LogicDataTables::getGlobals() + 480);
        }
        v31 = (GameButton *)operator new(264);
        GameButton::GameButton(v31);
        *(_QWORD *)(a1 + 104) = v31;
        v32 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 32), "info_button");
        MovieClip::changeTimelineChild(*(#1257 **)(a1 + 32), (#1249 *)v32, *(#1249 **)(a1 + 104));
        *(_DWORD *)(v32 + 16) = 1065353216;
        *(_DWORD *)(v32 + 28) = 1065353216;
        *(_DWORD *)(v32 + 20) = 0;
        *(_DWORD *)(v32 + 24) = 0;
        *(_DWORD *)(v32 + 32) = 0;
        *(_DWORD *)(v32 + 36) = 0;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 104) + 288LL))(*(_QWORD *)(a1 + 104), v32, 1);
        GUIContainer::addButtonManually(*(#1254 **)(a1 + 16), *(#1251 **)(a1 + 104));
        CustomButton::setButtonListener(*(_QWORD *)(a1 + 104), a1);
        v33 = *(MovieClip **)(a1 + 32);
        v35 = (const String *)StringTable::getString((#1308 *)"TID_TOTAL_TROPHIES", v34);
        MovieClip::setText(v33, "total_trophies", v35);
        v36 = operator new(192);
        String::String(&v60, "sc/ui.sc");
        String::String(&v59, "guild_chat_page_buttons_iphone");
        DropGUIContainer::DropGUIContainer((#1375 *)v36, &v60, &v59);
        *(_QWORD *)v36 = off_1004F1A98;
        *(_QWORD *)(v36 + 96) = &off_1004F1BF0;
        *(_QWORD *)(a1 + 24) = v36;
        String::~String();
        String::~String();
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 160LL))(
          *(_QWORD *)(a1 + 16),
          *(_QWORD *)(a1 + 24));
        v37 = (#1257 *)GUIContainer::getMovieClip(*(#1254 **)(a1 + 24));
        v38 = MovieClip::getMovieClipByName(v37, "grad_01");
        if ( v38 )
          *(_BYTE *)(v38 + 64) = 0;
        v39 = (#1257 *)GUIContainer::getMovieClip(*(#1254 **)(a1 + 24));
        v40 = MovieClip::getMovieClipByName(v39, "grad_02");
        if ( v40 )
          *(_BYTE *)(v40 + 64) = 0;
        v41 = DropGUIContainer::addGameButton(*(DropGUIContainer **)(a1 + 24), "chat_button", 1);
        *(_QWORD *)(a1 + 72) = v41;
        CustomButton::setButtonListener(v41, a1);
        v42 = DropGUIContainer::addGameButton(*(DropGUIContainer **)(a1 + 24), "new_messages", 1);
        *(_QWORD *)(a1 + 120) = v42;
        CustomButton::setButtonListener(v42, a1);
        v43 = *(MovieClip **)(*(_QWORD *)(a1 + 120) + 96LL);
        v45 = (const String *)StringTable::getString((#1308 *)"TID_CHAT_BOTTOM_BUTTON", v44);
        MovieClip::setText(v43, "message_count", v45);
        v46 = DropGUIContainer::addGameButton(*(DropGUIContainer **)(a1 + 24), "request_button", 1);
        *(_QWORD *)(a1 + 96) = v46;
        v47 = *(MovieClip **)(v46 + 96);
        v49 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_REQUEST_SPELLS", v48);
        MovieClip::setText(v47, "txt", v49);
        CustomButton::setButtonListener(*(_QWORD *)(a1 + 96), a1);
        v50 = GUIContainer::getMovieClip(*(#1254 **)(a1 + 24));
        v51 = (TextField *)MovieClip::getTextFieldByName(v50, "input");
        v52 = (#1257 *)GUIContainer::getMovieClip(*(#1254 **)(a1 + 24));
        v53 = MovieClip::getMovieClipByName(v52, "text_cell");
        if ( v53 )
          *(_BYTE *)(v53 + 8) = 0;
        *((_BYTE *)v51 + 8) = 0;
        v54 = (GameInputField *)operator new(144);
        GameInputField::GameInputField(v54, v51, *(DropGUIContainer **)(a1 + 24));
        *(_QWORD *)v54 = off_1004F1C10;
        *((_BYTE *)v54 + 24) = 1;
        *(_QWORD *)(a1 + 128) = v54;
        TextInput::setMaxTextLength((TextInput *)v54, 128);
        v55 = *(_QWORD *)(a1 + 192);
        if ( *(_QWORD *)(a1 + 200) != v55 )
        {
          v56 = 0;
          v57 = 1;
          do
          {
            AllianceStream::processEntryToScreen((CharacterAnimator *)a1, *(CombatHUD::Taunt **)(v55 + 8 * v56));
            v56 = v57;
            v55 = *(_QWORD *)(a1 + 192);
            ++v57;
          }
          while ( v56 < (*(_QWORD *)(a1 + 200) - v55) >> 3 );
        }
        std::vector<StreamEntry *>::resize(a1 + 192, 0, 0);
        AllianceStream::createAnchors((CharacterAnimator *)a1);
        *(_BYTE *)(a1 + 268) = 0;
        Debugger::hudPrint((__siginfo *)"Alliance stream initialize", (const char *)0xFFFFFFFFLL, v58);
        Rect::~Rect(v63);
      }
    }

    OfferChestForCoOpenMessage *__fastcall AllianceStream::processEntryToScreen(#1253 **this, CombatHUD::Taunt *a2)
    {
      const LogicLong *Id; // x0
      OfferChestForCoOpenMessage *ItemById; // x0
      OfferChestForCoOpenMessage *result; // x0
      DisplayObject *v7; // x21
      AllianceStream *SenderAvatarId; // x0
      const LogicLong *v9; // x1
      __int64 Instance; // x0
      __int64 HomeScreen; // x0
      __int64 v12; // x22
      void (__fastcall *v13)(__int64, __int64); // x23
      __int64 NewChatMessageSound; // x0
      long double v15; // q0
      OfferChestForCoOpenMessage *v16; // [xsp+38h] [xbp-38h] BYREF
    
      Id = (const LogicLong *)StreamEntry::getId(a2);
      ItemById = (OfferChestForCoOpenMessage *)AllianceStream::getItemById((AllianceStream *)this, Id);
      v16 = ItemById;
      if ( ItemById )
        return (OfferChestForCoOpenMessage *)(*(__int64 (__fastcall **)(OfferChestForCoOpenMessage *, CombatHUD::Taunt *))(*(_QWORD *)ItemById + 384LL))(
                                               ItemById,
                                               a2);
      result = StreamItem::createStreamItem(a2);
      v7 = result;
      v16 = result;
      if ( result )
      {
        if ( (unsigned int)AllianceStream::isNew(this, a2) )
        {
          *((_DWORD *)this + 61) = *(_DWORD *)(StreamEntry::getId(a2) + 4);
          *((_DWORD *)this + 60) = *(_DWORD *)StreamEntry::getId(a2);
          SenderAvatarId = (AllianceStream *)StreamEntry::getSenderAvatarId(a2);
          if ( (AllianceStream::isMyAvatarId(SenderAvatarId, v9) & 1) == 0 )
          {
            if ( (int)StreamEntry::getAgeSeconds(a2) <= 9 )
            {
              if ( (unsigned int)AllianceStream::isVisible((AllianceStream *)this) )
              {
                if ( GameMode::getInstance() )
                {
                  Instance = GameMode::getInstance();
                  HomeScreen = GameMode::getHomeScreen(Instance);
                  v12 = HomeScreen;
                  if ( HomeScreen )
                  {
                    v13 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)HomeScreen + 56LL);
                    NewChatMessageSound = LogicDataTables::getNewChatMessageSound();
                    v13(v12, NewChatMessageSound);
                  }
                }
              }
            }
            ++*((_DWORD *)this + 46);
            if ( *((_BYTE *)this + 268) || (AllianceStream::isVisible((AllianceStream *)this) & 1) == 0 )
              ++*((_DWORD *)this + 62);
          }
        }
        (*(void (__fastcall **)(DisplayObject *, CombatHUD::Taunt *))(*(_QWORD *)v7 + 384LL))(v7, a2);
        *(__n128 *)&v15 = DisplayObject::setPixelSnappedXY(v7, *((float *)*(this + 22) + 23) * 0.5, 0.0);
        std::vector<StreamItem *>::push_back(this + 27, &v16, v15);
        return (OfferChestForCoOpenMessage *)ScrollArea::addContent(*(this + 22), v7);
      }
      return result;
    }

    void __fastcall AllianceStream::createAnchors(CharacterAnimator *this)
    {
      float v2; // s8
      GameButton *v3; // x20
      void (__fastcall *v4)(GameButton *, __int64, __int64); // x21
      const char *v5; // x2
      __int64 MovieClip; // x0
      DisplayObject *v7; // x20
      float v8; // s9
      long double v9; // q0
      long double v10; // q0
      GameButton *v11; // x20
      void (__fastcall *v12)(GameButton *, __int64, __int64); // x21
      const char *v13; // x2
      __int64 v14; // x0
      long double v15; // q0
      DisplayObject *v16; // x20
      float v17; // s0
      long double v18; // q0
      Rect v19[2]; // [xsp+0h] [xbp-50h] BYREF
    
      v2 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(*((_QWORD *)this + 22))));
      v3 = (GameButton *)operator new(264);
      GameButton::GameButton(v3);
      *((_QWORD *)this + 18) = v3;
      v4 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v3 + 280LL);
      MovieClip = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "request_anchor_top", v5);
      v4(v3, MovieClip, 1);
      v7 = (DisplayObject *)*((_QWORD *)this + 18);
      v8 = v2 + (float)((*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v7 + 88LL))(v7) * 0.5);
      v9 = DisplayObject::getY(*((_QWORD *)this + 22));
      *(__n128 *)&v10 = DisplayObject::setPixelSnappedXY(v7, v8, *(float *)&v9);
      (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**((_QWORD **)this + 2) + 160LL))(
        *((_QWORD *)this + 2),
        *((_QWORD *)this + 18),
        v10);
      CustomButton::setButtonListener(*((_QWORD *)this + 18), this);
      v11 = (GameButton *)operator new(264);
      GameButton::GameButton(v11);
      *((_QWORD *)this + 19) = v11;
      v12 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v11 + 280LL);
      v14 = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "request_anchor_btm", v13);
      v12(v11, v14, 1);
      Rect::Rect(v19);
      *(__n128 *)&v15 = DisplayObject::getBounds(*((_QWORD *)this + 12), *((_QWORD *)this + 3), v19);
      v16 = (DisplayObject *)*((_QWORD *)this + 19);
      v17 = (*(float (__fastcall **)(DisplayObject *, long double))(*(_QWORD *)v16 + 88LL))(v16, v15);
      *(__n128 *)&v18 = DisplayObject::setPixelSnappedXY(v16, v2 + (float)(v17 * 0.5), *(float *)&v19[0].bottom);
      (*(void (__fastcall **)(_QWORD, _QWORD, long double))(**((_QWORD **)this + 3) + 160LL))(
        *((_QWORD *)this + 3),
        *((_QWORD *)this + 19),
        v18);
      CustomButton::setButtonListener(*((_QWORD *)this + 19), this);
      Rect::~Rect(v19);
    }

    void __fastcall AllianceStream::~AllianceStream(CharacterAnimator *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 v10; // x0
      void *v11; // x0
      void *v12; // x0
    
      *(_QWORD *)this = &off_10046F4D8;
      *((_QWORD *)this + 1) = off_10046F528;
      v2 = *((_QWORD *)this + 6);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 6) = 0;
      v3 = *((_QWORD *)this + 17);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 17) = 0;
      AllianceStream::removeAllEntries(this);
      v4 = *((_QWORD *)this + 18);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 18) = 0;
      v5 = *((_QWORD *)this + 19);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 19) = 0;
      v6 = *((_QWORD *)this + 22);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *((_QWORD *)this + 22) = 0;
      v7 = *((_QWORD *)this + 10);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *((_QWORD *)this + 10) = 0;
      v8 = *((_QWORD *)this + 16);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *((_QWORD *)this + 16) = 0;
      v9 = *((_QWORD *)this + 3);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      *((_QWORD *)this + 3) = 0;
      v10 = *((_QWORD *)this + 2);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *((_BYTE *)this + 276) = 0;
      *((_BYTE *)this + 268) = 0;
      *((_DWORD *)this + 68) = -1;
      *((_DWORD *)this + 62) = 0;
      *((_DWORD *)this + 66) = -1;
      *((_BYTE *)this + 252) = 0;
      *((_QWORD *)this + 20) = -1;
      *((_QWORD *)this + 21) = -1;
      *((_DWORD *)this + 65) = 0;
      *((_DWORD *)this + 46) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 19) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_DWORD *)this + 64) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 11) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 9) = 0;
      *((_QWORD *)this + 10) = 0;
      *((_BYTE *)this + 253) = 1;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 30) = 0;
      v11 = (void *)*((_QWORD *)this + 27);
      if ( v11 )
        operator delete(v11);
      v12 = (void *)*((_QWORD *)this + 24);
      if ( v12 )
        operator delete(v12);
      *((_QWORD *)this + 20) = 0;
      *((_QWORD *)this + 21) = 0;
    }

    __int64 __fastcall AllianceStream::removeAllEntries(CharacterAnimator *this)
    {
      __int64 v2; // x8
      char *v3; // x20
      __int64 v4; // x9
      unsigned __int64 v5; // x10
      unsigned int v6; // w22
      __int64 v7; // x21
      #1253 *v8; // x0
      __int64 v9; // x8
      __int64 v10; // x9
      unsigned __int64 v11; // x10
      unsigned int v12; // w21
      __int64 v13; // x0
    
      v3 = (char *)this + 192;
      v2 = *((_QWORD *)this + 24);
      v4 = *((_QWORD *)this + 25);
      if ( v4 != v2 )
      {
        v5 = 0;
        v6 = 1;
        do
        {
          v7 = *(_QWORD *)(v2 + 8 * v5);
          if ( v7 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
            v2 = *((_QWORD *)this + 24);
            v4 = *((_QWORD *)this + 25);
          }
          v5 = v6++;
        }
        while ( v5 < (v4 - v2) >> 3 );
      }
      std::vector<StreamEntry *>::resize(v3, 0, 0);
      v8 = (#1253 *)*((_QWORD *)this + 22);
      if ( v8 )
        ScrollArea::removeAllContent(v8);
      v9 = *((_QWORD *)this + 27);
      v10 = *((_QWORD *)this + 28);
      if ( v10 != v9 )
      {
        v11 = 0;
        v12 = 1;
        do
        {
          v13 = *(_QWORD *)(v9 + 8 * v11);
          if ( v13 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
            v9 = *((_QWORD *)this + 27);
            v10 = *((_QWORD *)this + 28);
          }
          v11 = v12++;
        }
        while ( v11 < (v10 - v9) >> 3 );
      }
      return std::vector<StreamItem *>::resize((char *)this + 216, 0, 0);
    }

    // attributes: thunk
    void __fastcall AllianceStream::~AllianceStream(CharacterAnimator *this)
    {
      __ZN14AllianceStreamD2Ev(this);
    }

    void __fastcall AllianceStream::~AllianceStream(CharacterAnimator *this)
    {
      AllianceStream::~AllianceStream(this);
      operator delete(this);
    }

    void __fastcall AllianceStream::setAllianceInfo(__int64 a1, Rect *a2)
    {
      __int64 AllianceHeaderEntry; // x0
      __int64 v5; // x21
      MovieClip *v6; // x22
      __int64 AllianceName; // x0
      const char *v8; // x1
      MovieClip *v9; // x22
      int Score; // w0
      MovieClip *v11; // x21
      __int64 AllianceDescription; // x0
      const char *v13; // x1
      Rect v14; // x0
      Rect v15; // x0
      const AreaEffectObject *AllianceBadgeData; // x20
      __int64 v17; // x0
      DataIcon *v18; // x21
      DisplayObject **v19; // x21
      #1257 *v20; // x19
      String v21; // [xsp+8h] [xbp-68h] BYREF
      String v22; // [xsp+20h] [xbp-50h] BYREF
      String v23; // [xsp+38h] [xbp-38h] BYREF
    
      AllianceHeaderEntry = (__int64)AllianceFullEntry::getAllianceHeaderEntry(a2);
      v5 = AllianceHeaderEntry;
      v6 = *(MovieClip **)(a1 + 32);
      if ( v6 )
      {
        AllianceName = AllianceHeaderEntry::getAllianceName(AllianceHeaderEntry);
        v8 = (const char *)(AllianceName + 8);
        if ( *(_DWORD *)(AllianceName + 4) + 1 > 8 )
          v8 = *(const char **)v8;
        String::String(&v23, v8);
        MovieClip::setText(v6, "guild_name", &v23);
        String::~String();
        v9 = *(MovieClip **)(a1 + 32);
        Score = AllianceHeaderEntry::getScore(v5);
        MovieClip::setNumberText(v9, "trophy_count", Score, 0);
        if ( AllianceFullEntry::getAllianceDescription(a2) )
        {
          v11 = *(MovieClip **)(a1 + 32);
          AllianceDescription = AllianceFullEntry::getAllianceDescription(a2);
          v13 = (const char *)(AllianceDescription + 8);
          if ( *(_DWORD *)(AllianceDescription + 4) + 1 > 8 )
            v13 = *(const char **)v13;
          String::String(&v22, v13);
          MovieClip::setText(v11, "description", &v22);
          String::~String();
        }
      }
      v14 = AllianceFullEntry::getAllianceHeaderEntry(a2);
      *(_DWORD *)(a1 + 272) = AllianceHeaderEntry::getNumberOfMembers(*(_QWORD *)&v14);
      v15 = AllianceFullEntry::getAllianceHeaderEntry(a2);
      AllianceBadgeData = (const AreaEffectObject *)AllianceHeaderEntry::getAllianceBadgeData(*(_QWORD *)&v15);
      if ( AllianceBadgeData )
      {
        v17 = *(_QWORD *)(a1 + 136);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        *(_QWORD *)(a1 + 136) = 0;
        v18 = (DataIcon *)operator new(112);
        DataIcon::DataIcon(v18, AllianceBadgeData);
        *(_QWORD *)(a1 + 136) = v18;
        *(_BYTE *)(MovieClip::getMovieClipByName(*(#1257 **)(a1 + 32), "clan_badge") + 8) = 0;
        v19 = *(DisplayObject ***)(a1 + 136);
        v20 = *(#1257 **)(a1 + 32);
        String::String(&v21, "clan_badge");
        DataIcon::replaceInstanceWithIcon(v19, v20, &v21, 1, COERCE_LONG_DOUBLE((unsigned __int128)0), 0, 1, 0, 0);
        String::~String();
      }
    }

    void __fastcall AllianceStream::buttonClicked(__int64 a1, const char *a2)
    {
      __int64 v3; // x20
      StarHud **v4; // x22
      StarHud *v5; // x20
      StarHud *v6; // x21
      float v7; // s8
      float v8; // s8
      float v9; // s0
      float v10; // s8
      long double v11; // q0
      #1253 *v12; // x21
      long double v13; // q0
      float v14; // s8
      float v15; // s1
      _BYTE *v16; // x0
      void (*v17)(void); // x2
      BadgePopup *Instance; // x0
      LogicChallengeCommand *v19; // x19
      String *v20; // x21
      __int64 v21; // x0
      const String *String; // x0
      MessageManager *v23; // x19
      CancelChallengeMessage *v24; // x21
      LogicProgressSimulator *v25; // x0
      tween::Bounce *PlayerAvatar; // x0
      tween::Bounce *v27; // x19
      __int64 v28; // x0
      MessageManager **HomeScreen; // x0
      __int64 ClanPage; // x20
      __int64 AllianceId; // x0
      #1236 *v32; // x0
      __int64 v33; // x19
      SpellItemListener *v34; // x21
      __int64 v35; // x0
      DisplayObject *v36; // x1
      __int64 v37; // x0
      BadgePopup *Home; // x0
      Stage *v39; // x19
      float v40; // s1
      const char *v41; // x1
      const String *v42; // x0
      _QWORD *v43; // x22
      __int64 v44; // x20
      __int64 v45; // x21
      float v46; // s8
      float v47; // s0
      float v48; // s8
      long double v49; // q0
      long double v50; // q0
      __int64 v51; // x19
      BadgePopup *v52; // x0
      float v53[2]; // [xsp+8h] [xbp-38h] BYREF
    
      if ( *(const char **)(a1 + 120) == a2 )
      {
        *(_BYTE *)(a1 + 253) = 1;
        return;
      }
      if ( *(const char **)(a1 + 80) == a2 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 128) + 56LL))(*(_QWORD *)(a1 + 128), 1);
        *(_BYTE *)(a1 + 253) = 1;
        return;
      }
      if ( *(const char **)(a1 + 72) == a2 )
      {
        v16 = *(_BYTE **)(a1 + 128);
        if ( v16[16] )
        {
          AllianceStream::sendChatMessage((CharacterAnimator *)a1);
          v17 = *(void (**)(void))(**(_QWORD **)(a1 + 128) + 56LL);
        }
        else
        {
          *(_BYTE *)(a1 + 253) = 1;
          v17 = *(void (**)(void))(*(_QWORD *)v16 + 56LL);
        }
        v17();
        return;
      }
      if ( *(const char **)(a1 + 112) == a2 )
      {
        Instance = (BadgePopup *)GameMain::getInstance((AllianceStreamMessage *)a1);
        if ( *((_BYTE *)Instance + 356) )
        {
          v19 = (LogicChallengeCommand *)operator new(40);
          LogicChallengeCommand::LogicChallengeCommand(v19);
          v20 = (String *)operator new(24);
          String::String(v20, "");
          LogicChallengeCommand::setMessage((__int64)v19, v20);
          v21 = GameMode::getInstance();
          GameMode::addCommand(v21, v19, 1);
          return;
        }
        v33 = GUI::getInstance(Instance);
        v34 = (SpellItemListener *)operator new(288);
        ChallengePopup::ChallengePopup(v34);
        v35 = v33;
        v36 = v34;
        goto LABEL_36;
      }
      v3 = *(_QWORD *)(a1 + 48);
      if ( (const char *)v3 == a2 )
      {
        String = (const String *)StringTable::getString((#1308 *)"TID_CANCELLING", a2);
        GameButton::setText(v3, (__int64)"txt", String);
        v23 = (MessageManager *)MessageManager::sm_pInstance;
        v24 = (CancelChallengeMessage *)operator new(72);
        CancelChallengeMessage::CancelChallengeMessage(v24);
        MessageManager::sendMessage(v23, v24);
        return;
      }
      if ( *(const char **)(a1 + 104) == a2 )
      {
        v25 = (LogicProgressSimulator *)GameStateManager::getInstance();
        PlayerAvatar = (tween::Bounce *)GameStateManager::getPlayerAvatar(v25);
        v27 = PlayerAvatar;
        if ( PlayerAvatar )
        {
          if ( LogicClientAvatar::isInAlliance(PlayerAvatar) )
          {
            v28 = GameMode::getInstance();
            if ( v28 )
            {
              HomeScreen = (MessageManager **)GameMode::getHomeScreen(v28);
              if ( HomeScreen )
              {
                ClanPage = HomeScreen::getClanPage(HomeScreen);
                AllianceId = LogicClientAvatar::getAllianceId(v27);
                v32 = (#1236 *)LogicLong::clone(AllianceId);
                ClanPage::openAllianceInfo(ClanPage, v32);
              }
            }
          }
        }
        return;
      }
      if ( *(const char **)(a1 + 96) == a2 )
      {
        if ( !GUI::getInstance((BadgePopup *)a1) )
          return;
        v37 = GameMode::getInstance();
        Home = (BadgePopup *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v37 + 112));
        if ( !Home || (Home = (BadgePopup *)LogicClientHome::getRequestSpellsCooldownSeconds(Home), (int)Home >= 1) )
        {
          v39 = (Stage *)GUI::getInstance(Home);
          v53[0] = GUI::getDefaultFloaterPos(v39);
          v53[1] = v40;
          v42 = (const String *)StringTable::getString((#1308 *)"TID_CANNOT_REQUEST_YET", v41);
          GUI::showFloaterTextAt((__int64)v39, v53, v42, -1, 0.0);
          return;
        }
        v51 = operator new(304);
        v52 = (BadgePopup *)RequestSingleSpellPopup::RequestSingleSpellPopup(v51);
        v35 = GUI::getInstance(v52);
        v36 = (DisplayObject *)v51;
    LABEL_36:
        GUI::showPopup(v35, v36, 1, 0, 0);
        return;
      }
      if ( *(const char **)(a1 + 144) == a2 )
      {
        v43 = *(_QWORD **)(a1 + 216);
        if ( v43 != *(_QWORD **)(a1 + 224) )
        {
          v44 = 0;
          do
          {
            v45 = *v43;
            if ( (*(unsigned int (__fastcall **)(_QWORD, long double))(*(_QWORD *)*v43 + 392LL))(
                   *v43,
                   COERCE_LONG_DOUBLE((unsigned __int128)0)) )
            {
              v46 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(v45)));
              ScrollArea::getYOffset(*(#1253 **)(a1 + 176));
              if ( v46 < v47 )
              {
                if ( !v44
                  || (v48 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(v44))),
                      v49 = DisplayObject::getY(v45),
                      v48 < *(float *)&v49) )
                {
                  v44 = v45;
                }
              }
            }
            ++v43;
          }
          while ( v43 != *(_QWORD **)(a1 + 224) );
          if ( v44 )
          {
            if ( *(_BYTE *)(a1 + 253) )
              *(_BYTE *)(a1 + 253) = 0;
            v12 = *(#1253 **)(a1 + 176);
            v50 = DisplayObject::getY(v44);
            v15 = *(float *)&v50 + (float)(*(float *)(*(_QWORD *)(a1 + 176) + 96LL) * 0.5);
            goto LABEL_53;
          }
        }
      }
      else if ( *(const char **)(a1 + 152) == a2 )
      {
        v4 = *(StarHud ***)(a1 + 216);
        if ( v4 != *(StarHud ***)(a1 + 224) )
        {
          v5 = 0;
          do
          {
            v6 = *v4;
            if ( (*(unsigned int (__fastcall **)(StarHud *, long double))(*(_QWORD *)*v4 + 392LL))(
                   *v4,
                   COERCE_LONG_DOUBLE((unsigned __int128)0)) )
            {
              v7 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(v6)));
              v8 = v7 + (*(float (__fastcall **)(StarHud *))(*(_QWORD *)v6 + 96LL))(v6);
              ScrollArea::getYOffset(*(#1253 **)(a1 + 176));
              if ( v8 > (float)(v9 + *(float *)(*(_QWORD *)(a1 + 176) + 96LL)) )
              {
                if ( !v5
                  || (v10 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(v5))),
                      v11 = DisplayObject::getY(v6),
                      v10 > *(float *)&v11) )
                {
                  v5 = v6;
                }
              }
            }
            ++v4;
          }
          while ( v4 != *(StarHud ***)(a1 + 224) );
          if ( v5 )
          {
            v12 = *(#1253 **)(a1 + 176);
            v13 = DisplayObject::getY(v5);
            v14 = *(float *)&v13 + (float)(*(float *)(*(_QWORD *)(a1 + 176) + 96LL) * 0.0);
            v15 = v14 + (float)(StreamItem::getItemHeight(v5) * 0.5);
    LABEL_53:
            ScrollArea::scrollTo(v12, 0.0, v15, 1.0, 0.3);
          }
        }
      }
    }

    void __fastcall AllianceStream::sendChatMessage(#1279 **this)
    {
      const String *InputText; // x0
      __int64 v3; // x21
      int v4; // w2
      ChatToAllianceStreamMessage *v5; // x20
      String *v6; // x21
      __int64 v7; // x19
      void (__fastcall *v8)(__int64, String *); // x20
      String v9; // [xsp+8h] [xbp-F8h] BYREF
      String v10; // [xsp+20h] [xbp-E0h] BYREF
      String v11; // [xsp+38h] [xbp-C8h] BYREF
      String v12; // [xsp+50h] [xbp-B0h] BYREF
      String v13; // [xsp+68h] [xbp-98h] BYREF
      String v14; // [xsp+80h] [xbp-80h] BYREF
      String v15; // [xsp+98h] [xbp-68h] BYREF
      String v16; // [xsp+B0h] [xbp-50h] BYREF
      String v17; // [xsp+C8h] [xbp-38h] BYREF
    
      InputText = (const String *)InputField::getInputText(*(this + 16));
      String::String(&v10, InputText);
      String::String(&v17);
      String::String(&v16);
      String::trim(&v15, &v10);
      String::operator=(&v10);
      String::~String();
      while ( 1 )
      {
        String::String(&v14, "  ");
        v3 = String::indexOf(&v10, &v14);
        String::~String();
        if ( (_DWORD)v3 == -1 )
          break;
        String::substring(&v13, &v10, 0, v3);
        String::operator=(&v17);
        String::~String();
        String::substring(&v12, &v10, (unsigned int)(v3 + 1), (unsigned int)v10.m_length);
        String::operator=(&v16);
        String::~String();
        operator+((__int64 *)&v11.m_length, &v17, &v16);
        String::operator=(&v10);
        String::~String();
      }
      String::~String();
      String::~String();
      if ( v10.m_length >= 1 )
      {
        Debugger::hudPrint((__siginfo *)"sendChatMessage -> ChatToAllianceStreamMessage", (const char *)0xFFFFFFFFLL, v4);
        v5 = (ChatToAllianceStreamMessage *)operator new(80);
        ChatToAllianceStreamMessage::ChatToAllianceStreamMessage(v5);
        v6 = (String *)operator new(24);
        String::String(v6, &v10);
        ChatToAllianceStreamMessage::setMessage(v5, v6);
        MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v5);
        v7 = (__int64)*(this + 16);
        v8 = *(void (__fastcall **)(__int64, String *))(*(_QWORD *)v7 + 16LL);
        String::String(&v9, "");
        v8(v7, &v9);
        String::~String();
      }
      String::~String();
    }

    void __fastcall AllianceStream::update(CharacterAnimator *this, long double a2)
    {
      long double v2; // q9
      long double v3; // q10
      float v6; // s0
      float v7; // s0
      const char *v8; // x1
      float v9; // s0
      __int64 v10; // x21
      void *String; // x20
      const char *v12; // x1
      const char *v13; // x1
      float v14; // s0
      __int64 v15; // x8
      unsigned __int64 v16; // x22
      unsigned int v17; // w21
      StarHud *v18; // x20
      __int64 v19; // x8
      char *v20; // x9
      char *v21; // x1
      char *v22; // x9
      long double v23; // q0
      float ItemHeight; // s0
      __int128 v25; // q1
      __int64 MovieClip; // x0
      float v27; // s10
      Rect *v28; // x20
      float v29; // s2
      __int64 v30; // x8
      #1395 *TextFieldByName; // x20
      __int64 Globals; // x0
      const char *v33; // x4
      BadgePopup *isPanning; // x0
      __int64 Instance; // x0
      __int64 DragHandler; // x0
      float v37; // s10
      float v38; // s13
      float v39; // s11
      float v40; // s14
      AllianceStream *Id; // x0
      float v42; // s0
      __int64 v43; // x8
      unsigned __int64 v44; // x9
      int v45; // w20
      int v46; // w21
      float v47; // s12
      float v48; // s13
      float v49; // s11
      float v50; // s14
      unsigned int v51; // w23
      StarHud *v52; // x22
      long double v53; // q0
      float v54; // s10
      long double v55; // q0
      float v56; // s10
      AllianceStream *updated; // x0
      __int64 v58; // x0
      float v59; // s0
      float v60; // s8
      __int64 v61; // x0
      float v62; // s0
      int v63; // w8
      float v65; // s0
      float v66; // s1
      __int64 v67; // x0
      LogicPageOpenedCommand *Home; // x0
      LogicPageOpenedCommand *v69; // x20
      __int64 v70; // x8
      __int64 MovieClipByName; // x21
      int RequestSpellsCooldownSeconds; // w0
      int v73; // w20
      _BOOL4 v74; // w22
      int v75; // w24
      #1257 *v76; // x0
      MovieClip *v77; // x21
      const char *v78; // x1
      const char *v79; // x2
      MovieClip *v80; // x21
      __int64 v81; // x0
      AllianceStreamMessage *v82; // x0
      __int64 v83; // x0
      float v84; // s0
      int v85; // w8
      int v86; // w9
      unsigned int v87; // w8
      const char *v88; // x1
      const char *v89; // x1
      String *v90; // x0
      __int128 v91; // [xsp+10h] [xbp-180h]
      String v92; // [xsp+20h] [xbp-170h] BYREF
      String v93; // [xsp+38h] [xbp-158h] BYREF
      String v94; // [xsp+50h] [xbp-140h] BYREF
      String v95; // [xsp+68h] [xbp-128h] BYREF
      String v96; // [xsp+80h] [xbp-110h] BYREF
      String v97; // [xsp+98h] [xbp-F8h] BYREF
      String v98; // [xsp+B0h] [xbp-E0h] BYREF
      String v99; // [xsp+C8h] [xbp-C8h] BYREF
      String v100; // [xsp+E0h] [xbp-B0h] BYREF
      String v101; // [xsp+F8h] [xbp-98h] BYREF
    
      v6 = *(float *)&a2 * -1.9;
      if ( *(_BYTE *)(*((_QWORD *)this + 16) + 16LL) )
        *(float *)&v2 = -v6;
      else
        *(float *)&v2 = v6;
      if ( *((_BYTE *)this + 276) )
        v7 = *((float *)this + 65) + *(float *)&a2;
      else
        v7 = 0.0;
      *((float *)this + 65) = v7;
      AllianceStream::updateBottomButton(this, *(float *)&a2);
      v9 = *(float *)&v2 + *((float *)this + 64);
      if ( v9 < 0.0 )
        v9 = 0.0;
      if ( v9 > 1.0 )
        v9 = 1.0;
      *((float *)this + 64) = v9;
      if ( *((_QWORD *)this + 8) && (*((_DWORD *)this + 68) & 0x80000000) == 0 )
      {
        v10 = *(unsigned int *)(MessageManager::sm_pInstance + 152);
        String = StringTable::getString((#1308 *)"TID_MEMBERS_ONLINE", v8);
        String::String(&v99, "<count>");
        String::format((String *)"%d", v12, v10);
        String::replace(&v100, String, &v99, &v98);
        String::String(&v97, "<total>");
        String::format((String *)"%d", v13, *((unsigned int *)this + 68));
        String::replace(&v101, &v100, &v97, &v96);
        String::~String();
        String::~String();
        String::~String();
        String::~String();
        String::~String();
        TextField::setText(*((#1271 **)this + 8), &v101);
        String::~String();
        v9 = *((float *)this + 64);
      }
      v14 = 1.0 - v9;
      if ( *(_BYTE *)(*((_QWORD *)this + 16) + 16LL) )
        *(float *)&v3 = 0.0;
      else
        *(float *)&v3 = v14;
      LODWORD(v91) = 0;
      (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 9) + 80LL))(*((_QWORD *)this + 9), v3);
      *(_BYTE *)(*((_QWORD *)this + 9) + 64LL) = *(float *)&v3 > 0.1;
      (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 12) + 80LL))(*((_QWORD *)this + 12), v3);
      *(_BYTE *)(*((_QWORD *)this + 12) + 64LL) = *(float *)&v3 > 0.1;
      (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 16) + 88LL))(*((_QWORD *)this + 16), a2);
      v15 = *((_QWORD *)this + 27);
      if ( *((_QWORD *)this + 28) != v15 )
      {
        v16 = 0;
        v17 = 0;
        v91 = 0u;
        do
        {
          while ( 1 )
          {
            v18 = *(StarHud **)(v15 + 8 * v16);
            if ( StreamItem::shouldDestroy(v18) )
              break;
            v23 = DisplayObject::getX(v18);
            DisplayObject::setPixelSnappedXY(v18, *(float *)&v23, *(float *)&v91);
            (*(void (__fastcall **)(StarHud *, long double))(*(_QWORD *)v18 + 360LL))(v18, a2);
            ItemHeight = StreamItem::getItemHeight(v18);
            v25 = v91;
            *(float *)&v25 = *(float *)&v91 + ItemHeight;
            v91 = v25;
            v15 = *((_QWORD *)this + 27);
            v16 = ++v17;
            if ( v17 >= (unsigned __int64)((*((_QWORD *)this + 28) - v15) >> 3) )
              goto LABEL_27;
          }
          v19 = *((_QWORD *)this + 27);
          v20 = (char *)*((_QWORD *)this + 28);
          v21 = (char *)(v19 + 8 * (v16 + 1));
          if ( v21 != v20 )
          {
            memmove((void *)(v19 + 8 * v16), v21, v20 - v21);
            v21 = (char *)*((_QWORD *)this + 28);
          }
          v22 = v21 - 8;
          *((_QWORD *)this + 28) = v21 - 8;
          if ( v18 )
          {
            (*(void (__fastcall **)(StarHud *))(*(_QWORD *)v18 + 8LL))(v18);
            v22 = (char *)*((_QWORD *)this + 28);
          }
          v15 = *((_QWORD *)this + 27);
        }
        while ( v16 < (__int64)&v22[-v15] >> 3 );
      }
    LABEL_27:
      MovieClip = GUIContainer::getMovieClip(*((#1254 **)this + 3));
      v27 = *(float *)&v91 + (*(float (__fastcall **)(__int64))(*(_QWORD *)MovieClip + 96LL))(MovieClip);
      if ( v27 != *(float *)(ScrollArea::getContentBounds(*((#1253 **)this + 22)) + 12) )
      {
        v28 = (Rect *)operator new(16);
        v29 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 88LL))(*((_QWORD *)this + 22));
        Rect::Rect(v28, 0.0, 0.0, v29, v27);
        ScrollArea::setForcedContentBounds(*((ScrollArea **)this + 22), v28);
      }
      v30 = *((_QWORD *)this + 14);
      if ( v30 )
      {
        TextFieldByName = (#1395 *)MovieClip::getTextFieldByName(*(_QWORD *)(v30 + 96), "txt");
        Globals = LogicDataTables::getGlobals();
        MovieClipHelper::setGoldPriceText(TextFieldByName, (#1271 *)*(unsigned int *)(Globals + 476), -1, 0, v33);
      }
      (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 22) + 272LL))(*((_QWORD *)this + 22), a2);
      isPanning = (BadgePopup *)ScrollArea::isPanning(*((#1253 **)this + 22));
      if ( (_DWORD)isPanning )
      {
        Instance = GUI::getInstance(isPanning);
        GUI::fadeOutPopover(Instance);
      }
      if ( (unsigned int)AllianceStream::isVisible(this) )
      {
        DragHandler = ScrollArea::getDragHandler(*((#1253 **)this + 22));
        LODWORD(v37) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)DragHandler
                                                                                              + 304LL))(DragHandler));
        v38 = *(float *)(*((_QWORD *)this + 22) + 96LL);
        LODWORD(v39) = COERCE_UNSIGNED_INT128(DisplayObject::getY(*((_QWORD *)this + 19)));
        v40 = *(float *)(*((_QWORD *)this + 22) + 96LL);
        Id = (AllianceStream *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 96LL))(*((_QWORD *)this + 18));
        *((_QWORD *)this + 20) = -1;
        *((_QWORD *)this + 21) = -1;
        v43 = *((_QWORD *)this + 27);
        if ( *((_QWORD *)this + 28) == v43 )
        {
          v45 = 0;
          v46 = 0;
        }
        else
        {
          v44 = 0;
          v45 = 0;
          v46 = 0;
          v47 = v37 + (float)(v38 * -0.5);
          v48 = v38 + v47;
          v49 = (float)(v47 + v39) + v40;
          v50 = v47 + v42;
          v51 = 1;
          do
          {
            v52 = *(StarHud **)(v43 + 8 * v44);
            v53 = DisplayObject::getY(v52);
            if ( *(float *)&v53 < v48 )
            {
              v54 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(v52)));
              if ( (float)(v54 + StreamItem::getItemHeight(v52)) > v47 )
                (*(void (__fastcall **)(StarHud *, long double))(*(_QWORD *)v52 + 368LL))(v52, a2);
            }
            Id = (AllianceStream *)(*(__int64 (__fastcall **)(StarHud *, long double))(*(_QWORD *)v52 + 392LL))(v52, v2);
            if ( (_DWORD)Id )
            {
              v55 = DisplayObject::getY(v52);
              if ( *(float *)&v55 <= v49 )
              {
                v56 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(v52)));
                if ( (float)(v56 + StreamItem::getItemHeight(v52)) < v50 )
                {
                  ++v45;
                  *((_DWORD *)this + 40) = *(_DWORD *)StreamEntry::getId(*((_QWORD *)v52 + 34));
                  Id = (AllianceStream *)StreamEntry::getId(*((_QWORD *)v52 + 34));
                  *((_DWORD *)this + 41) = *((_DWORD *)Id + 1);
                }
              }
              else
              {
                ++v46;
                if ( (*((_DWORD *)this + 42) & 0x80000000) != 0 || *((int *)this + 43) <= 0 )
                {
                  *((_DWORD *)this + 42) = *(_DWORD *)StreamEntry::getId(*((_QWORD *)v52 + 34));
                  Id = (AllianceStream *)StreamEntry::getId(*((_QWORD *)v52 + 34));
                  *((_DWORD *)this + 43) = *((_DWORD *)Id + 1);
                }
              }
            }
            v44 = v51;
            v43 = *((_QWORD *)this + 27);
            ++v51;
          }
          while ( v44 < (*((_QWORD *)this + 28) - v43) >> 3 );
        }
        updated = (AllianceStream *)AllianceStream::updateAnchor(Id, *((GameButton **)this + 19), v46, *(float *)&a2);
        AllianceStream::updateAnchor(updated, *((GameButton **)this + 18), v45, *(float *)&a2);
      }
      if ( (unsigned int)ScrollArea::isPanning(*((#1253 **)this + 22)) )
        *((_BYTE *)this + 253) = 0;
      ScrollArea::getContentHeight(*((#1253 **)this + 22));
      v58 = *((_QWORD *)this + 22);
      v60 = v59 + (float)(*(float *)(v58 + 96) * -0.5);
      v61 = ScrollArea::getDragHandler((#1253 *)v58);
      v62 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v61 + 304LL))(v61);
      if ( (float)(v60 - v62) >= 5.0 )
      {
        v63 = *((unsigned __int8 *)this + 253);
      }
      else
      {
        v63 = 1;
        *((_BYTE *)this + 253) = 1;
      }
      if ( v60 > v62 && v63 != 0 )
      {
        ScrollArea::getContentHeight(*((#1253 **)this + 22));
        v66 = v65 - (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 96LL))(*((_QWORD *)this + 22));
        ScrollArea::scrollTo(*((#1253 **)this + 22), 0.0, v66, 1.0, 1.0);
      }
      v67 = GameMode::getInstance();
      Home = (LogicPageOpenedCommand *)LogicGameMode::getHome(*(UnlockAccountPopup **)(v67 + 112));
      v69 = Home;
      v70 = *((_QWORD *)this + 12);
      *(_BYTE *)(v70 + 8) = 0;
      if ( Home )
      {
        *(_BYTE *)(v70 + 8) = 1;
        MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(v70 + 96), "clock");
        RequestSpellsCooldownSeconds = LogicClientHome::getRequestSpellsCooldownSeconds(v69);
        v73 = RequestSpellsCooldownSeconds;
        if ( MovieClipByName )
          *(_BYTE *)(MovieClipByName + 8) = RequestSpellsCooldownSeconds > 0;
        v74 = RequestSpellsCooldownSeconds > 0;
        (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)this + 12) + 152LL))(
          *((_QWORD *)this + 12),
          RequestSpellsCooldownSeconds > 0);
        v75 = *((_DWORD *)this + 66);
        v76 = (#1257 *)MovieClip::getMovieClipByName(*(#1257 **)(*((_QWORD *)this + 12) + 96LL), "button");
        v77 = v76;
        if ( v75 < 0
          || ((v74 ^ (v75 > 0)) & 1) != 0
          || (Home = (LogicPageOpenedCommand *)MovieClip::isStopped(v76), (_DWORD)Home) )
        {
          if ( v73 < 1 )
          {
            v78 = "request_available_start";
            v79 = "request_available_end";
          }
          else
          {
            v78 = "request_cooldown_start";
            v79 = "request_cooldown_end";
          }
          MovieClip::gotoAndPlay(v77, v78, v79);
          v80 = *(MovieClip **)(*((_QWORD *)this + 12) + 96LL);
          String::String(&v95, "");
          MovieClip::setText(v80, "time_txt", &v95);
          String::~String();
        }
        if ( v73 >= 1 )
        {
          TimeUtil::getTimeString(v73, 0, &v94);
          MovieClip::setText(*(MovieClip **)(*((_QWORD *)this + 12) + 96LL), "time_txt", &v94);
          String::~String();
        }
        *((_DWORD *)this + 66) = v73;
      }
      if ( *((_BYTE *)this + 276) )
      {
        v81 = HomeScreen::getInstance(Home);
        v82 = (AllianceStreamMessage *)HomeScreen::gotoPage(v81, 3, 1);
        if ( *((_QWORD *)this + 7) )
        {
          v83 = GameMain::getInstance(v82);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 184LL))(v83);
          if ( Assert::g_false )
          {
            while ( 1 )
              ;
          }
          v85 = (int)(float)(v84 * 1000.0) / 650;
          v86 = v85 + 3;
          if ( v85 >= 0 )
            v86 = (int)(float)(v84 * 1000.0) / 650;
          v87 = v85 - (v86 & 0xFFFFFFFC);
          switch ( v87 )
          {
            case 3u:
              v88 = "...";
              break;
            case 2u:
              v88 = "..";
              break;
            case 1u:
              v88 = ".";
              break;
            default:
              v88 = "";
              break;
          }
          String::String(&v93, v88);
          v90 = (String *)StringTable::getString((#1308 *)"TID_WAITING_FOR_MATE", v89);
          operator+((__int64 *)&v92.m_length, v90, &v93);
          TextField::setText(*((#1271 **)this + 7), &v92);
          String::~String();
          String::~String();
        }
      }
    }

    void __fastcall AllianceStream::updateBottomButton(__int64 a1, float a2)
    {
      float v4; // s9
      const char *v5; // x1
      float Alpha; // s0
      float v7; // s8
      float v8; // s8
      const String *String; // x0
      const char *v10; // x1
      int v11; // w8
      void *v12; // x20
      const char *v13; // x1
      long double v14; // q0
      _BYTE v15[24]; // [xsp+10h] [xbp-80h] BYREF
      String v16; // [xsp+28h] [xbp-68h] BYREF
      _QWORD v17[3]; // [xsp+40h] [xbp-50h] BYREF
      String v18; // [xsp+58h] [xbp-38h] BYREF
    
      if ( (unsigned int)AllianceStream::isVisible((AllianceStream *)a1) )
      {
        v4 = a2 * 4.0;
        Alpha = DisplayObject::getAlpha(*(_QWORD *)(a1 + 120));
        v7 = Alpha;
        if ( *(_BYTE *)(a1 + 253) )
        {
          *(_DWORD *)(a1 + 184) = 0;
          v8 = Alpha - v4;
        }
        else
        {
          String = (const String *)StringTable::getString((#1308 *)"TID_CHAT_BOTTOM_BUTTON", v5);
          String::String(&v18, String);
          v11 = *(_DWORD *)(a1 + 184);
          if ( v11 < 2 )
          {
            if ( v11 == 1 )
            {
              StringTable::getString((#1308 *)"TID_CHAT_BOTTOM_NEW_MESSAGE", v10);
              String::operator=(&v18);
            }
          }
          else
          {
            v12 = StringTable::getString((#1308 *)"TID_CHAT_BOTTOM_NEW_MESSAGES", v10);
            String::String(&v16, "<count>");
            String::format((String *)"%d", v13, *(unsigned int *)(a1 + 184));
            String::replace(v17, v12, &v16, v15);
            String::operator=(&v18);
            String::~String();
            String::~String();
            String::~String();
          }
          MovieClip::setText(*(MovieClip **)(*(_QWORD *)(a1 + 120) + 96LL), "message_count", &v18);
          v8 = v4 + v7;
          String::~String();
        }
        *(_OWORD *)&v14 = 0u;
        if ( v8 >= 0.0 )
          *(float *)&v14 = v8;
        if ( *(float *)&v14 > 1.0 )
          *(float *)&v14 = 1.0;
        (*(void (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 120) + 80LL))(*(_QWORD *)(a1 + 120), v14);
        *(_BYTE *)(*(_QWORD *)(a1 + 120) + 64LL) = DisplayObject::getAlpha(*(_QWORD *)(a1 + 120)) > 0.1;
      }
    }

    bool __fastcall AllianceStream::isVisible(__int64 a1)
    {
      __int64 Instance; // x0
      MessageManager **HomeScreen; // x0
      MessageManager **v3; // x19
      ColorTransform *ClanPage; // x0
    
      if ( *(_BYTE *)(a1 + 268) )
        return 0;
      if ( !GameMode::getInstance() )
        return 0;
      Instance = GameMode::getInstance();
      HomeScreen = (MessageManager **)GameMode::getHomeScreen(Instance);
      v3 = HomeScreen;
      if ( !HomeScreen || (unsigned int)HomeScreen::getCurrentPage(HomeScreen) != 3 )
        return 0;
      ClanPage = (ColorTransform *)HomeScreen::getClanPage(v3);
      return (unsigned int)ClanPage::getCurrentScreen(ClanPage) == 0;
    }

    void __fastcall AllianceStream::updateAnchor(float a1, __int64 a2, __int64 a3, int a4)
    {
      void (__fastcall *v7)(__int64, long double); // x21
      long double v8; // q0
      float v9; // s2
      int v10; // w2
      double Alpha; // d0
      MovieClip *v12; // x20
      int v13; // w2
    
      v7 = *(void (__fastcall **)(__int64, long double))(*(_QWORD *)a3 + 80LL);
      *(float *)&v8 = DisplayObject::getAlpha(a3);
      v9 = -1.0;
      if ( a4 > 0 )
        v9 = 1.0;
      *(float *)&v8 = (float)((float)(a1 * 4.0) * v9) + *(float *)&v8;
      if ( *(float *)&v8 < 0.0 )
        *(float *)&v8 = 0.0;
      if ( *(float *)&v8 > 1.0 )
        *(float *)&v8 = 1.0;
      v7(a3, v8);
      Alpha = DisplayObject::getAlpha(a3);
      *(_BYTE *)(a3 + 8) = Alpha > 0.1;
      if ( Alpha > 0.1 )
      {
        v12 = *(MovieClip **)(a3 + 96);
        v13 = LogicMath::max((LogicMath *)1, a4, v10);
        MovieClip::setNumberText(v12, "count", v13, 0);
      }
    }

    MiniTimer *__fastcall AllianceStream::closeInput(__int64 a1)
    {
      BadgePopup *v1; // x0
      __int64 Instance; // x0
    
      v1 = *(BadgePopup **)(a1 + 128);
      if ( *((_BYTE *)v1 + 16) )
        v1 = (BadgePopup *)(*(__int64 (__fastcall **)(BadgePopup *, _QWORD))(*(_QWORD *)v1 + 56LL))(v1, 0);
      Instance = GUI::getInstance(v1);
      return GUI::fadeOutPopover(Instance);
    }

    __int64 __fastcall AllianceStream::createInstance(__int64 a1, __int64 a2, const char *a3)
    {
      __int64 v3; // x19
      __int64 result; // x0
    
      Debugger::doAssert((Debugger *)(AllianceStream::sm_pInstance == 0), (bool)"", a3);
      v3 = operator new(280);
      result = AllianceStream::AllianceStream(v3);
      AllianceStream::sm_pInstance = v3;
      return result;
    }

    __int64 __fastcall AllianceStream::destroyInstance(__int64 a1, __int64 a2, const char *a3)
    {
      long double v3; // q0
      __int64 result; // x0
    
      *(__n128 *)&v3 = Debugger::doAssert((Debugger *)(AllianceStream::sm_pInstance != 0), (bool)"", a3);
      result = AllianceStream::sm_pInstance;
      if ( AllianceStream::sm_pInstance )
        result = (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)AllianceStream::sm_pInstance + 24LL))(
                   AllianceStream::sm_pInstance,
                   v3);
      AllianceStream::sm_pInstance = 0;
      return result;
    }

    __int64 AllianceStream::getInstance()
    {
      return AllianceStream::sm_pInstance;
    }

    OfferChestForCoOpenMessage *__fastcall AllianceStream::addEntry(__int64 a1, CombatHUD::Taunt *a2)
    {
      CombatHUD::Taunt *v3; // [xsp+8h] [xbp-8h] BYREF
    
      v3 = a2;
      if ( *(_QWORD *)(a1 + 16) )
        return AllianceStream::processEntryToScreen((#1253 **)a1, a2);
      else
        return (OfferChestForCoOpenMessage *)std::vector<StreamEntry *>::push_back(a1 + 192, &v3);
    }

    __int64 __fastcall AllianceStream::getItemById(__int64 a1, __int64 a2)
    {
      __int64 v4; // x8
      unsigned __int64 v5; // x9
      unsigned int i; // w22
      __int64 v7; // x21
      __int64 Id; // x0
    
      v4 = *(_QWORD *)(a1 + 216);
      if ( *(_QWORD *)(a1 + 224) == v4 )
        return 0;
      v5 = 0;
      for ( i = 1; ; ++i )
      {
        v7 = *(_QWORD *)(v4 + 8 * v5);
        Id = StreamEntry::getId(*(_QWORD *)(v7 + 272));
        if ( (unsigned int)LogicLong::equals(Id, a2) )
          break;
        v5 = i;
        v4 = *(_QWORD *)(a1 + 216);
        if ( v5 >= (*(_QWORD *)(a1 + 224) - v4) >> 3 )
          return 0;
      }
      return v7;
    }

    bool __fastcall AllianceStream::isNew(__int64 a1, __int64 a2)
    {
      _DWORD *Id; // x0
      int v4; // w9
      _BOOL8 result; // x0
    
      result = 0;
      if ( a2 )
      {
        Id = (_DWORD *)StreamEntry::getId(a2);
        v4 = *(_DWORD *)(a1 + 240);
        if ( *Id > v4 || *Id == v4 && Id[1] > *(_DWORD *)(a1 + 244) )
          return 1;
      }
      return result;
    }

    __int64 __fastcall AllianceStream::isMyAvatarId(__int64 a1)
    {
      __int64 Instance; // x8
      __int64 result; // x0
      LogicProgressSimulator *v4; // x0
      tween::Bounce *PlayerAvatar; // x0
      __int64 Id; // x0
    
      Instance = GameStateManager::getInstance();
      result = 0;
      if ( a1 && Instance )
      {
        v4 = (LogicProgressSimulator *)GameStateManager::getInstance();
        PlayerAvatar = (tween::Bounce *)GameStateManager::getPlayerAvatar(v4);
        if ( PlayerAvatar )
        {
          Id = LogicClientAvatar::getId(PlayerAvatar);
          return LogicLong::equals(Id, a1);
        }
        else
        {
          return 0;
        }
      }
      return result;
    }

    __int64 __fastcall AllianceStream::removeEntry(__int64 a1, __int64 a2)
    {
      StreamEntry **ItemById; // x0
      const char *v3; // x1
    
      ItemById = (StreamEntry **)AllianceStream::getItemById(a1, a2);
      if ( ItemById )
        return StreamItem::setRemoved(ItemById);
      else
        return Debugger::warning((__siginfo *)"AllianceStream::removeEntry: can't find entry", v3);
    }

    void *AllianceStream::getAnalyticsName()
    {
      return &s_name;
    }

    __int64 __fastcall AllianceStream::opened(__int64 a1)
    {
      float v2; // s0
      float v3; // s1
    
      *(_DWORD *)(a1 + 248) = 0;
      *(_BYTE *)(a1 + 252) = 1;
      AllianceStream::saveLastReadId((AllianceStream *)a1);
      ScrollArea::getContentHeight(*(#1253 **)(a1 + 176));
      v3 = v2 - (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 176) + 96LL))(*(_QWORD *)(a1 + 176));
      ScrollArea::scrollTo(*(#1253 **)(a1 + 176), 0.0, v3, 1.0, 0.0);
      (*(void (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 120) + 80LL))(
        *(_QWORD *)(a1 + 120),
        COERCE_LONG_DOUBLE((unsigned __int128)0));
      *(_BYTE *)(*(_QWORD *)(a1 + 120) + 64LL) = DisplayObject::getAlpha(*(_QWORD *)(a1 + 120)) > 0.1;
      (*(void (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 152) + 80LL))(
        *(_QWORD *)(a1 + 152),
        COERCE_LONG_DOUBLE((unsigned __int128)0));
      return (*(__int64 (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 144) + 80LL))(
               *(_QWORD *)(a1 + 144),
               COERCE_LONG_DOUBLE((unsigned __int128)0));
    }

    void __fastcall AllianceStream::saveLastReadId(__int64 a1, int a2)
    {
      String *v3; // x0
      int v4; // w1
      const String *v5; // x2
      const String *v6; // x2
      String v7; // [xsp+0h] [xbp-70h] BYREF
      String v8; // [xsp+18h] [xbp-58h] BYREF
      String v9; // [xsp+30h] [xbp-40h] BYREF
      String v10; // [xsp+48h] [xbp-28h] BYREF
    
      v3 = (String *)*(unsigned int *)(a1 + 240);
      if ( (_DWORD)v3 != -1 )
      {
        String::valueOf(&v10, v3, a2);
        String::valueOf(&v9, (String *)*(unsigned int *)(a1 + 244), v4);
        String::String(&v8, "ClanChatLastReadH");
        Application::storeKeyValue((Application *)&v8, &v10, v5);
        String::~String();
        String::String(&v7, "ClanChatLastReadL");
        Application::storeKeyValue((Application *)&v7, &v9, v6);
        String::~String();
        String::~String();
        String::~String();
      }
    }

    __int64 __fastcall AllianceStream::isPanning(__int64 a1)
    {
      return ScrollArea::isPanning(*(#1253 **)(a1 + 176));
    }

    void __fastcall AllianceStream::clearLastSeenItem(CharacterAnimator *this)
    {
      const String *v2; // x1
      const String *v3; // x1
      String v4; // [xsp+0h] [xbp-40h] BYREF
      String v5; // [xsp+18h] [xbp-28h] BYREF
    
      *((_QWORD *)this + 30) = -1;
      String::String(&v5, "ClanChatLastReadH");
      Application::removeKeyValue((Application *)&v5, v2);
      String::~String();
      String::String(&v4, "ClanChatLastReadL");
      Application::removeKeyValue((Application *)&v4, v3);
      String::~String();
      *((_DWORD *)this + 62) = 0;
      *((_DWORD *)this + 68) = -1;
    }

    __int64 __fastcall AllianceStream::setAreaHeight(CharacterAnimator *this, float a2, const char *a3)
    {
      __int64 v5; // x0
      long double v6; // q0
    
      v5 = *((_QWORD *)this + 22);
      if ( !v5 )
        return Debugger::warning((__siginfo *)"AllianceStream::setAreaHeight called while scroll area is NULL!", a3);
      v6 = DisplayObject::getY(v5);
      return ScrollArea::setAreaHeight(*((#1253 **)this + 22), a2 - *(float *)&v6);
    }

    void __fastcall AllianceStream::rewardFromDonate(__int64 a1, int a2, __int64 a3, LogicGameObjectManagerListener **a4)
    {
      BadgePopup *ItemById; // x21
    
      ItemById = (BadgePopup *)AllianceStream::getItemById(a1, a3);
      if ( ItemById
        && AllianceStream::isVisible(a1)
        && (unsigned int)Sprite::wasVisibleLastFrame(ItemById)
        && (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)ItemById + 34) + 32LL))(*((_QWORD **)ItemById + 34)) == 1 )
      {
        DonateStreamItem::showRewardFromDonate(ItemById, a2, a4);
      }
    }

    void __fastcall AllianceStream::setChallengeActive(__int64 a1, int a2)
    {
      LogicPageOpenedCommand *Instance; // x0
      LogicPageOpenedCommand *MainHUD; // x0
      LogicClientAvatar *v6; // x21
      __int64 v7; // x0
      LogicPageOpenedCommand *v8; // x0
      LogicPageOpenedCommand *v9; // x0
      __int64 PageGUI; // x0
      MovieClip *v11; // x0
      __int64 v12; // x0
      MessageManager **HomeScreen; // x0
      MessageManager **v14; // x21
      CustomButton **ClanPage; // x0
      ColorTransform *v16; // x0
      LogicPageOpenedCommand *v17; // x0
      LogicPageOpenedCommand *v18; // x0
      __int64 v19; // x0
      __int64 v20; // x0
      const char *v21; // x1
      MessageManager **v22; // x0
      CustomButton **v23; // x0
      __int64 v24; // x21
      const String *String; // x0
    
      if ( a2 != *(unsigned __int8 *)(a1 + 276) )
      {
        Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance((LogicPageOpenedCommand *)a1);
        MainHUD = (LogicPageOpenedCommand *)HomeScreen::getMainHUD(Instance);
        v6 = MainHUD;
        if ( a2 )
        {
          v7 = HomeScreen::getInstance(MainHUD);
          HomeScreen::gotoPage(v7, 3, 1);
          MainHUD::setPageButtonEnabled(v6, 0, 0);
          MainHUD::setPageButtonEnabled(v6, 1, 0);
          MainHUD::setPageButtonEnabled(v6, 2, 0);
          v8 = (LogicPageOpenedCommand *)MainHUD::setPageButtonEnabled(v6, 4, 0);
          v9 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v8);
          PageGUI = HomeScreen::getPageGUI(v9);
          PageGUI::setDragEnabled(PageGUI, 0);
          *(_BYTE *)(*(_QWORD *)(a1 + 32) + 8LL) = 0;
          v11 = *(MovieClip **)(a1 + 40);
          *((_BYTE *)v11 + 8) = 1;
          MovieClip::playOnce(v11);
          v12 = GameMode::getInstance();
          if ( v12 )
          {
            HomeScreen = (MessageManager **)GameMode::getHomeScreen(v12);
            v14 = HomeScreen;
            if ( HomeScreen )
            {
              ClanPage = (CustomButton **)HomeScreen::getClanPage(HomeScreen);
              ClanPage::setTabButtonsEnabled(ClanPage, 0);
              v16 = (ColorTransform *)HomeScreen::getClanPage(v14);
              ClanPage::setScreen(v16, 0);
            }
          }
        }
        else
        {
          MainHUD::setPageButtonEnabled(MainHUD, 0, 1);
          MainHUD::setPageButtonEnabled(v6, 1, 1);
          MainHUD::setPageButtonEnabled(v6, 2, 1);
          MainHUD::setPageButtonEnabled(v6, 4, 1);
          v17 = (LogicPageOpenedCommand *)MainHUD::setPageButtonEnabled(v6, 3, 1);
          v18 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v17);
          v19 = HomeScreen::getPageGUI(v18);
          PageGUI::setDragEnabled(v19, 1);
          *(_BYTE *)(*(_QWORD *)(a1 + 32) + 8LL) = 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 40) + 8LL) = 0;
          v20 = GameMode::getInstance();
          if ( v20 )
          {
            v22 = (MessageManager **)GameMode::getHomeScreen(v20);
            if ( v22 )
            {
              v23 = (CustomButton **)HomeScreen::getClanPage(v22);
              ClanPage::setTabButtonsEnabled(v23, 1);
            }
          }
          v24 = *(_QWORD *)(a1 + 48);
          String = (const String *)StringTable::getString((#1308 *)"TID_CANCEL", v21);
          GameButton::setText(v24, (__int64)"txt", String);
        }
        *(_BYTE *)(a1 + 276) = a2;
        *(_DWORD *)(a1 + 260) = 0;
      }
    }

    __int64 __fastcall AllianceStream::refreshSpell(__int64 this, const InitState *a2)
    {
      __int64 v3; // x20
      __int64 v4; // x8
      unsigned __int64 v5; // x9
      unsigned int v6; // w22
      __int64 v7; // x21
    
      v3 = this;
      v4 = *(_QWORD *)(this + 216);
      if ( *(_QWORD *)(this + 224) != v4 )
      {
        v5 = 0;
        v6 = 1;
        do
        {
          v7 = *(_QWORD *)(v4 + 8 * v5);
          this = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 272) + 32LL))(*(_QWORD *)(v7 + 272));
          if ( (_DWORD)this == 1 )
            this = DonateStreamItem::refreshSpell(v7, (__int64)a2);
          v5 = v6;
          v4 = *(_QWORD *)(v3 + 216);
          ++v6;
        }
        while ( v5 < (*(_QWORD *)(v3 + 224) - v4) >> 3 );
      }
      return this;
    }

    bool __fastcall AllianceStream::actionAvailable(CharacterAnimator *this, unsigned int a2)
    {
      _BOOL8 result; // x0
    
      if ( a2 > 8 )
        return 0;
      result = 1;
      if ( ((1 << a2) & 0x19E) != 0 || ((1 << a2) & 0x21) != 0 )
        return GameMode::getInstance() != 0;
      if ( a2 != 6 )
        return 0;
      return result;
    }

    __int64 __fastcall AllianceStream::compareLongs(CharacterAnimator *this, const #1236 *a2, const #1236 *a3)
    {
      unsigned int LowerInt; // w19
      unsigned int v6; // w20
      int HigherInt; // w21
      int v8; // w0
      unsigned int v11; // w9
    
      LowerInt = LogicLong::getLowerInt(this);
      v6 = LogicLong::getLowerInt(a2);
      HigherInt = LogicLong::getHigherInt(this);
      v8 = LogicLong::getHigherInt(a2);
      if ( LowerInt == v6 && HigherInt == v8 )
        return 0;
      if ( HigherInt == v8 )
        v11 = 1;
      else
        v11 = -1;
      if ( LowerInt <= v6 )
        v11 = -1;
      if ( HigherInt <= v8 )
        return v11;
      else
        return 1;
    }

    bool __fastcall AllianceStream::isInitialized(CharacterAnimator *this)
    {
      return *((_QWORD *)this + 2) != 0;
    }

    __int64 __fastcall AllianceStream::isChallenging(CharacterAnimator *this)
    {
      return *((unsigned __int8 *)this + 276);
    }

    __int64 __fastcall AllianceStream::getRootNode(CharacterAnimator *this)
    {
      return *((_QWORD *)this + 2);
    }

}; // end class AllianceStream
