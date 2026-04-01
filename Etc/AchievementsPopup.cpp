class AchievementsPopup
{
public:

    __int64 __fastcall AchievementsPopup::AchievementsPopup(__int64 a1)
    {
      #1257 *MovieClip; // x0
      #1257 *v3; // x0
      __int64 v4; // x0
      #1271 *TextFieldByName; // x0
      const char *v6; // x1
      #1249 *v7; // x20
      #1253 *v8; // x21
      long double Width; // q0
      float v10; // s8
      long double Height; // q0
      __int64 v12; // x0
      #1257 *v13; // x0
      DisplayObject *v14; // x21
      float v15; // s8
      float v16; // s9
      long double v17; // q0
      long double v18; // q0
      Rect v20[2]; // [xsp+0h] [xbp-70h] BYREF
      String v21; // [xsp+10h] [xbp-60h] BYREF
      String v22; // [xsp+28h] [xbp-48h] BYREF
    
      String::String(&v22, "sc/ui.sc");
      String::String(&v21, "popup_achievements");
      PopupBase::PopupBase((PopupBase *)a1, &v22, &v21);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_1004683A0;
      *(_QWORD *)(a1 + 96) = &off_100468578;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      DropGUIContainer::addGameButton((DropGUIContainer *)a1, "close", 1);
      MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      if ( MovieClip::getMovieClipByName(MovieClip, "back_button") )
      {
        v3 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
        *(_BYTE *)(MovieClip::getMovieClipByName(v3, "back_button") + 8) = 0;
      }
      Rect::Rect(v20);
      v4 = GUIContainer::getMovieClip((#1254 *)a1);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v4, "ScrollArea");
      v7 = TextFieldByName;
      if ( !TextFieldByName )
        Debugger::error((__siginfo *)"cannot find scroll area from feed", v6);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v20);
      v8 = (#1253 *)operator new(504);
      Width = Rect::getWidth(v20);
      v10 = *(float *)&Width;
      Height = Rect::getHeight(v20);
      ScrollArea::ScrollArea(v8, v10, *(float *)&Height, 1);
      *(_QWORD *)(a1 + 256) = v8;
      ScrollArea::enablePinching(v8, 0);
      ScrollArea::enableHorizontalDrag(*(#1253 **)(a1 + 256), 0);
      ScrollArea::enableVerticalDrag(*(#1253 **)(a1 + 256), 1);
      v12 = *(_QWORD *)(a1 + 256);
      *(_BYTE *)(v12 + 496) = 1;
      ScrollArea::setAlignment((#1253 *)v12, 12);
      v13 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
      MovieClip::changeTimelineChild(v13, v7, *(#1249 **)(a1 + 256));
      v14 = *(DisplayObject **)(a1 + 256);
      v15 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(v7)));
      v16 = *(float *)&v20[0].top;
      v17 = DisplayObject::getY(v7);
      *(__n128 *)&v18 = DisplayObject::setPixelSnappedXY(v14, v15 + v16, *(float *)&v17 + *(float *)&v20[0].bottom);
      *(_BYTE *)(*(_QWORD *)(a1 + 256) + 64LL) = 1;
      (*(void (__fastcall **)(#1249 *, long double))(*(_QWORD *)v7 + 8LL))(v7, v18);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 112) + 160LL))(
        *(_QWORD *)(a1 + 112),
        *(_QWORD *)(a1 + 256));
      AchievementsPopup::refresh((EventScreenItem *)a1);
      Rect::~Rect(v20);
      return a1;
    }

    __int64 __fastcall AchievementsPopup::refresh(EventScreenItem *this)
    {
      __int64 v2; // x8
      __int64 *v3; // x21
      __int64 v4; // x20
      __int64 v5; // x0
      const tween::Bounce *PlayerAvatar; // x20
      int v7; // w1
      __int64 Table; // x22
      const tween::Bounce *v9; // x1
      __int64 v10; // x23
      __int64 v11; // x0
      const #1351 *v12; // x24
      AchievementItem *v13; // x25
      __int64 v14; // x21
      __int64 v15; // x22
      __int64 v16; // x8
      __int64 v17; // x2
      __int64 i; // x8
      __int64 v19; // x22
      float v20; // s8
      __int64 v21; // x0
      float v22; // s10
      __int64 v23; // x0
      float v24; // s0
      int AchievementIndexToClaim; // w0
      const char *v26; // x1
      int v27; // w20
      float v28; // s8
      float v29; // s8
      __int64 v30; // x0
      float v31; // s1
      __int64 v32; // x20
      __int64 v33; // x21
      __int64 MovieClip; // x0
      float *v35; // x0
      AchievementItem *v37; // [xsp+68h] [xbp-68h] BYREF
    
      v3 = (__int64 *)((char *)this + 232);
      v2 = *((_QWORD *)this + 29);
      if ( (int)((unsigned __int64)(*((_QWORD *)this + 30) - v2) >> 3) >= 1 )
      {
        v4 = 0;
        do
        {
          v5 = *(_QWORD *)(v2 + 8 * v4);
          do
          {
            if ( v5 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
              v2 = *v3;
            }
            *(_QWORD *)(v2 + 8 * v4) = 0;
            v2 = *v3;
            v5 = *(_QWORD *)(*v3 + 8 * v4);
          }
          while ( v5 );
          ++v4;
        }
        while ( v4 < (int)((unsigned __int64)(*((_QWORD *)this + 30) - v2) >> 3) );
      }
      *((_QWORD *)this + 30) = v2;
      GameMode::getInstance();
      PlayerAvatar = (const tween::Bounce *)GameMode::getPlayerAvatar();
      Table = LogicDataTables::getTable((LogicDataTables *)0x3C, v7);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) >= 1 )
      {
        v10 = 0;
        do
        {
          v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v10);
          v12 = (const #1351 *)v11;
          if ( !*(_BYTE *)(v11 + 124) && *(_DWORD *)(v11 + 116) == 2 )
          {
            v13 = (AchievementItem *)operator new(88);
            AchievementItem::AchievementItem(v13, PlayerAvatar, v12);
            v37 = v13;
            std::vector<AchievementItem *>::push_back(v3, &v37);
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (int)v10 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
      }
      v14 = *((_QWORD *)this + 29);
      v15 = *((_QWORD *)this + 30);
      v16 = v14;
      if ( v14 != v15 )
      {
        v17 = 0;
        for ( i = (v15 - v14) >> 3; i != 1; i >>= 1 )
          v17 += 2;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,long,bool (*)(AchievementItem const*,AchievementItem const*)>(
          *((_QWORD *)this + 29),
          *((_QWORD *)this + 30),
          v17,
          itemSort);
        std::__final_insertion_sort<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,bool (*)(AchievementItem const*,AchievementItem const*)>(
          v14,
          v15,
          itemSort);
        v14 = *((_QWORD *)this + 29);
        v16 = *((_QWORD *)this + 30);
      }
      if ( (int)((unsigned __int64)(v16 - v14) >> 3) >= 1 )
      {
        v19 = 0;
        do
        {
          v20 = *(float *)(*((_QWORD *)this + 32) + 92LL) * 0.5;
          v21 = *(_QWORD *)(*(_QWORD *)(v14 + 8 * v19) + 16LL);
          v22 = (float)(int)v19 * (*(float (__fastcall **)(__int64))(*(_QWORD *)v21 + 96LL))(v21);
          v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 29) + 8 * v19) + 16LL);
          v24 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v23 + 96LL))(v23);
          DisplayObject::setXY(
            *(DisplayObject **)(*(_QWORD *)(*((_QWORD *)this + 29) + 8 * v19) + 16LL),
            v20,
            v22 + (float)(v24 * 0.5));
          ScrollArea::addContentDontUpdateBounds(
            *((#1253 **)this + 32),
            *(#1249 **)(*(_QWORD *)(*((_QWORD *)this + 29) + 8 * v19++) + 16LL));
          v14 = *((_QWORD *)this + 29);
        }
        while ( v19 < (int)((unsigned __int64)(*((_QWORD *)this + 30) - v14) >> 3) );
      }
      if ( (int)AchievementsPopup::isAchievementAvailableForClaim(PlayerAvatar, v9) >= 1 )
      {
        AchievementIndexToClaim = AchievementsPopup::getAchievementIndexToClaim(this);
        v27 = AchievementIndexToClaim;
        if ( AchievementIndexToClaim == -1 )
        {
          Debugger::warning((__siginfo *)"No valid achievement to claim found", v26);
        }
        else
        {
          v28 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 29)
                                                                                              + 8LL
                                                                                              * AchievementIndexToClaim)
                                                                                  + 16LL))));
          v29 = v28
              + (float)((*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 96LL))(*((_QWORD *)this + 32)) * 0.5);
          v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 29) + 8LL * v27) + 16LL);
          v31 = v29 - (float)((*(float (__fastcall **)(__int64))(*(_QWORD *)v30 + 96LL))(v30) * 0.5);
          ScrollArea::scrollTo(*((#1253 **)this + 32), 0.0, v31, 1.0, 0.5);
        }
      }
      ScrollArea::updateBounds(*((ScrollArea **)this + 32));
      v32 = operator new(16);
      Rect::Rect((Rect *)v32);
      v33 = *((_QWORD *)this + 32);
      MovieClip = GUIContainer::getMovieClip(this);
      DisplayObject::getBounds(v33, MovieClip, v32);
      v35 = (float *)*((_QWORD *)this + 32);
      *(float *)(v32 + 12) = *(float *)(v32 + 12) + (float)(v35[24] * 0.5);
      return ScrollArea::setForcedContentBounds((ScrollArea *)v35, (Rect *)v32);
    }

    // attributes: thunk
    void __fastcall AchievementsPopup::AchievementsPopup(AchievementsPopup *this)
    {
      __ZN17AchievementsPopupC2Ev((__int64)this);
    }

    void __fastcall AchievementsPopup::~AchievementsPopup(EventScreenItem *this)
    {
      _QWORD *v2; // x8
      __int64 v3; // x20
      __int64 v4; // x0
      __int64 v5; // x0
    
      *(_QWORD *)this = off_1004683A0;
      *((_QWORD *)this + 12) = &off_100468578;
      v2 = (_QWORD *)*((_QWORD *)this + 29);
      if ( (int)((*((_QWORD *)this + 30) - (_QWORD)v2) >> 3) >= 1 )
      {
        v3 = 0;
        do
        {
          v4 = v2[v3];
          do
          {
            if ( v4 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
              v2 = (_QWORD *)*((_QWORD *)this + 29);
            }
            v2[v3] = 0;
            v2 = (_QWORD *)*((_QWORD *)this + 29);
            v4 = v2[v3];
          }
          while ( v4 );
          ++v3;
        }
        while ( v3 < (int)((*((_QWORD *)this + 30) - (_QWORD)v2) >> 3) );
      }
      *((_QWORD *)this + 30) = v2;
      v5 = *((_QWORD *)this + 32);
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        v2 = (_QWORD *)*((_QWORD *)this + 29);
      }
      *((_QWORD *)this + 32) = 0;
      if ( v2 )
        operator delete(v2);
      PopupBase::~PopupBase(this);
    }

    // attributes: thunk
    void __fastcall AchievementsPopup::~AchievementsPopup(EventScreenItem *this)
    {
      __ZN17AchievementsPopupD2Ev(this);
    }

    void __fastcall AchievementsPopup::~AchievementsPopup(EventScreenItem *this)
    {
      AchievementsPopup::~AchievementsPopup(this);
      operator delete(this);
    }

    // attributes: thunk
    __int64 __fastcall AchievementsPopup::update(EventScreenItem *this, float a2)
    {
      return PopupBase::update(this, a2);
    }

    __int64 __fastcall AchievementsPopup::buttonClicked(__int64 a1)
    {
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
    }

    __int64 __fastcall AchievementsPopup::isAchievementAvailableForClaim(EventScreenItem *this, const tween::Bounce *a2)
    {
      __int64 Table; // x20
      __int64 v4; // x21
      __int64 v5; // x22
      __int64 v6; // x23
    
      Table = LogicDataTables::getTable((LogicDataTables *)0x3C, (int)a2);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) < 1 )
        return 0;
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v5);
        if ( (unsigned int)LogicClientAvatar::isAchievementCompleted(this, v6) )
          v4 = ((unsigned int)LogicClientAvatar::getIsAchievementRewardClaimed(this, v6) ^ 1) + (unsigned int)v4;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (int)v5 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
      return v4;
    }

    __int64 __fastcall AchievementsPopup::getAchievementIndexToClaim(EventScreenItem *this)
    {
      __int64 v2; // x8
      __int64 v3; // x19
    
      v2 = *((_QWORD *)this + 29);
      if ( (int)((unsigned __int64)(*((_QWORD *)this + 30) - v2) >> 3) < 1 )
        return 0xFFFFFFFFLL;
      v3 = 0;
      while ( (AchievementItem::isAvailableToClaim(*(RemoveAvatarStreamEntryMessage **)(v2 + 8 * v3)) & 1) == 0 )
      {
        ++v3;
        v2 = *((_QWORD *)this + 29);
        if ( v3 >= (int)((unsigned __int64)(*((_QWORD *)this + 30) - v2) >> 3) )
          return 0xFFFFFFFFLL;
      }
      return v3;
    }

    __int64 __fastcall AchievementsPopup::achievementClaimed(EventScreenItem *this, const #1351 *a2)
    {
      LogicPageOpenedCommand *DiamondData; // x0
      LogicPageOpenedCommand *v5; // x21
      __int64 v6; // x8
      unsigned __int64 v7; // x9
      #1257 **v8; // x19
      unsigned int v9; // w24
      __int64 v10; // x23
      LogicPageOpenedCommand *Instance; // x0
      LogicClientAvatar *MainHUD; // x0
      LogicPageOpenedCommand *DiamondsIconDisplayObject; // x23
      LogicPageOpenedCommand *v14; // x0
      LogicClientAvatar *v15; // x0
      __int64 result; // x0
      int v17; // w20
      int v18; // w26
      __int64 v19; // x21
      int v20; // w9
      int v21; // w23
      int v22; // w10
      int v23; // w27
      int v24; // w9
      int v25; // w10
      int v26; // w8
      int v27; // w28
      int v28; // w8
      int v29; // w8
      int v30; // w24
      int v31; // w8
      int v32; // w22
      BadgePopup *v33; // x0
      float v34; // s8
      __int64 v35; // x0
      __int64 v36; // x0
      __int128 v37; // q0
      __int64 v38; // x19
      int v39; // w9
      int v40; // w21
      int v41; // w10
      int v42; // w10
      int v43; // w22
      int v44; // w8
      int v45; // w23
      int v46; // w8
      int v47; // w8
      int v48; // w26
      float v49; // s8
      int v50; // w8
      int v51; // w20
      BadgePopup *v52; // x0
      float v53; // s9
      __int64 v54; // x0
      __int64 v55; // x0
      __int64 v56; // [xsp+0h] [xbp-A0h]
      int v57; // [xsp+Ch] [xbp-94h]
      __int128 v58; // [xsp+10h] [xbp-90h]
    
      DiamondData = (LogicPageOpenedCommand *)LogicDataTables::getDiamondData(this);
      v5 = DiamondData;
      v6 = *((_QWORD *)this + 29);
      if ( *((_QWORD *)this + 30) == v6 )
      {
        v8 = 0;
      }
      else
      {
        v7 = 0;
        v8 = 0;
        v9 = 1;
        do
        {
          v10 = *(_QWORD *)(v6 + 8 * v7);
          DiamondData = (LogicPageOpenedCommand *)AchievementItem::containsData(v10, (__int64)a2);
          if ( (_DWORD)DiamondData )
            v8 = (#1257 **)v10;
          v7 = v9;
          v6 = *((_QWORD *)this + 29);
          ++v9;
        }
        while ( v7 < (*((_QWORD *)this + 30) - v6) >> 3 );
      }
      Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance(DiamondData);
      MainHUD = (LogicClientAvatar *)HomeScreen::getMainHUD(Instance);
      DiamondsIconDisplayObject = (LogicPageOpenedCommand *)MainHUD::getDiamondsIconDisplayObject(MainHUD);
      v14 = (LogicPageOpenedCommand *)HomeScreen::getInstance(DiamondsIconDisplayObject);
      v15 = (LogicClientAvatar *)HomeScreen::getMainHUD(v14);
      result = MainHUD::getExpIconDisplayObject(v15);
      v56 = result;
      v17 = *((_DWORD *)a2 + 27);
      v18 = *((_DWORD *)a2 + 28);
      v57 = DataGained::MAX_RANDOM_OFFSET_PERCENT;
      DataGained::MAX_RANDOM_OFFSET_PERCENT = 1070386381;
      if ( v5 && v8 && DiamondsIconDisplayObject )
      {
        result = AchievementItem::getDiamondIcon(v8);
        v19 = result;
        if ( v17 >= 0 )
          v20 = v17;
        else
          v20 = 0;
        if ( v20 > 250 )
          v20 = 250;
        if ( v20 >= 1 )
        {
          v21 = v17 / v20;
          if ( v17 < 0 )
            v22 = ~v17;
          else
            v22 = -1;
          v23 = v17 % v20;
          v24 = v17 + v22;
          v25 = v17 + v22 + 251;
          if ( v24 + 1 > 250 )
            v26 = v24 + 1;
          else
            v26 = 250;
          v27 = v25 - v26;
          if ( v17 <= 0 )
            v28 = 0;
          else
            v28 = v17;
          if ( ~v28 < -251 || v28 == 250 )
            v29 = -251;
          else
            v29 = ~v28;
          v30 = -2 - v29;
          v58 = 0u;
          do
          {
            if ( v30 )
              v31 = v21;
            else
              v31 = v23;
            if ( v23 )
              v32 = v31;
            else
              v32 = v21;
            v33 = (BadgePopup *)rand();
            v34 = (float)((float)((float)((int)v33 % 100) * 0.01) * 0.6) + 0.25;
            v35 = GUI::getInstance(v33);
            v36 = GUI::addDataGained(v35, v19, (String *)2, v32, 0, 0.0, 0.0, *(float *)&v58, v34);
            result = DataGained::setValueVisible(v36, 0);
            v37 = v58;
            *(float *)&v37 = *(float *)&v58 + 0.001;
            v58 = v37;
            --v27;
            --v30;
          }
          while ( v27 );
        }
      }
      if ( v8 && v56 )
      {
        result = AchievementItem::getExpIcon(v8);
        v38 = result;
        if ( v18 >= 0 )
          v39 = v18;
        else
          v39 = 0;
        if ( v39 > 250 )
          v39 = 250;
        if ( v39 >= 1 )
        {
          v40 = v18 / v39;
          if ( v18 < 0 )
            v41 = ~v18;
          else
            v41 = -1;
          v42 = v18 + v41;
          v43 = v18 % v39;
          if ( v42 + 1 > 250 )
            v44 = v42 + 1;
          else
            v44 = 250;
          v45 = v42 + 251 - v44;
          if ( v18 <= 0 )
            v46 = 0;
          else
            v46 = v18;
          if ( ~v46 < -251 || v46 == 250 )
            v47 = -251;
          else
            v47 = ~v46;
          v48 = -2 - v47;
          v49 = 0.2;
          do
          {
            if ( v48 )
              v50 = v40;
            else
              v50 = v43;
            if ( v43 )
              v51 = v50;
            else
              v51 = v40;
            v52 = (BadgePopup *)rand();
            v53 = (float)((float)((float)((int)v52 % 100) * 0.01) * 0.6) + 0.1;
            v54 = GUI::getInstance(v52);
            v55 = GUI::addDataGained(v54, v38, 0, v51, 0, 0.0, 0.0, v49, v53);
            result = DataGained::setValueVisible(v55, 0);
            v49 = v49 + 0.001;
            --v45;
            --v48;
          }
          while ( v45 );
        }
      }
      DataGained::MAX_RANDOM_OFFSET_PERCENT = v57;
      return result;
    }

    __int64 __fastcall AchievementsPopup::getPopupType(EventScreenItem *this)
    {
      return 42;
    }

}; // end class AchievementsPopup
