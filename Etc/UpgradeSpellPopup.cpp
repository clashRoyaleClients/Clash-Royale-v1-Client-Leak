class UpgradeSpellPopup
{
public:

    __int64 __fastcall UpgradeSpellPopup::UpgradeSpellPopup(__int64 a1, int *a2)
    {
      const String *v3; // x2
      DisplayObject *v4; // x20
      Stage *v5; // x0
      Stage *Instance; // x0
      int v7; // w19
      __int64 v8; // x0
      const String *v9; // x2
      DisplayObject *v10; // x0
      long double v11; // q0
      #1257 *v12; // x27
      MovieClip *MovieClipByName; // x20
      __int64 SpellData; // x0
      #1308 *TID; // x0
      const String *v16; // x1
      #1308 *String; // x0
      #1257 *v18; // x0
      MovieClip *v19; // x0
      InitState *v20; // x0
      String *IconFileName; // x0
      const String *v22; // x2
      #1308 *MovieClip; // x20
      __int64 v24; // x0
      float v25; // s8
      float v26; // s0
      __int64 v27; // x0
      __int64 v28; // x0
      __int64 v29; // x0
      int FrameIndex; // w0
      const char *v31; // x2
      unsigned __int64 v32; // x19
      const char *v33; // x1
      MovieClip *v34; // x21
      const char *v35; // x2
      int v36; // w19
      LogicFuseSpellsCommand *v37; // x21
      int *Attributes; // x0
      const char *v39; // x1
      int *v40; // x23
      __int64 v41; // x21
      __int64 v42; // x20
      int v43; // w22
      __int64 v44; // x19
      __int64 v45; // x24
      int v46; // w25
      MovieClip *v47; // x26
      MovieClip *v48; // x0
      #1249 *v49; // x22
      const String *v50; // x2
      #1249 *v51; // x27
      void (__fastcall *v52)(#1249 *, float); // x23
      float v53; // s8
      float v54; // s0
      __int64 v55; // x22
      __int64 v56; // x0
      int v57; // w9
      _DWORD *v58; // x10
      int v59; // w9
      AreaEffectObject *v60; // x0
      __int64 Name; // x0
      const String *v62; // x1
      LogicPageOpenedCommand *v63; // x0
      LogicPageOpenedCommand *v64; // x0
      LogicPageOpenedCommand *v65; // x0
      __int64 v67; // [xsp+20h] [xbp-1C0h]
      int *v68; // [xsp+28h] [xbp-1B8h]
      __int64 v69; // [xsp+30h] [xbp-1B0h]
      #1257 *v71; // [xsp+40h] [xbp-1A0h]
      _QWORD v72[3]; // [xsp+48h] [xbp-198h] BYREF
      _DWORD *v73; // [xsp+60h] [xbp-180h] BYREF
      String v74; // [xsp+68h] [xbp-178h] BYREF
      Rect v75[2]; // [xsp+80h] [xbp-160h] BYREF
      String v76; // [xsp+90h] [xbp-150h] BYREF
      String v77; // [xsp+A8h] [xbp-138h] BYREF
      String v78; // [xsp+C0h] [xbp-120h] BYREF
      String v79; // [xsp+D8h] [xbp-108h] BYREF
      String v80; // [xsp+F0h] [xbp-F0h] BYREF
      String v81; // [xsp+108h] [xbp-D8h] BYREF
      String v82; // [xsp+120h] [xbp-C0h] BYREF
      String v83; // [xsp+138h] [xbp-A8h] BYREF
      String v84; // [xsp+150h] [xbp-90h] BYREF
      String v85; // [xsp+168h] [xbp-78h] BYREF
    
      String::String(&v85, "sc/ui.sc");
      String::String(&v84, "UI_menu_background");
      PopupBase::PopupBase((PopupBase *)a1, &v85, &v84);
      String::~String();
      String::~String();
      *(_QWORD *)(a1 + 304) = 0;
      v69 = a1 + 296;
      *(_QWORD *)(a1 + 296) = 0;
      *(_QWORD *)a1 = off_1004676C8;
      *(_QWORD *)(a1 + 96) = &off_1004678A0;
      *(_QWORD *)(a1 + 356) = 0;
      *(_DWORD *)(a1 + 364) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 392) = 0;
      *(_QWORD *)(a1 + 400) = 0;
      *(_QWORD *)(a1 + 384) = 0;
      *(_BYTE *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 336) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 328) = 0;
      *(_QWORD *)(a1 + 376) = 0xFFFFFFFFLL;
      *(_DWORD *)(a1 + 372) = 0;
      *(_DWORD *)(a1 + 308) = 0;
      *(_DWORD *)(a1 + 332) = 0;
      String::String(&v83, "sc/ui.sc");
      String::String(&v82, "display_darken");
      *(_QWORD *)(a1 + 400) = StringTable::getMovieClip((#1308 *)&v83, &v82, v3);
      String::~String();
      String::~String();
      v4 = *(DisplayObject **)(a1 + 400);
      *((_BYTE *)v4 + 64) = 0;
      Instance = (Stage *)Stage::getInstance(v5);
      v7 = *((_DWORD *)Instance + 107);
      v8 = Stage::getInstance(Instance);
      DisplayObject::setPixelSnappedXY(v4, (float)v7 * 0.0, (float)*(int *)(v8 + 432) * 0.5);
      (*(void (__fastcall **)(_QWORD, float))(**(_QWORD **)(a1 + 400) + 40LL))(*(_QWORD *)(a1 + 400), 1.2);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 400));
      String::String(&v81, "sc/ui_chest.sc");
      String::String(&v80, "upgrade_card");
      *(_QWORD *)(a1 + 392) = StringTable::getMovieClip((#1308 *)&v81, &v80, v9);
      String::~String();
      String::~String();
      v10 = *(DisplayObject **)(a1 + 392);
      *((_BYTE *)v10 + 64) = 0;
      *(__n128 *)&v11 = DisplayObject::setPixelSnappedXY(v10, 0.0, 0.0);
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 392), v11);
      v12 = *(#1257 **)(a1 + 392);
      v71 = v12;
      *(_QWORD *)(a1 + 232) = a2;
      LogicArrayList<GravityParticle *>::ensureCapacity(a1 + 320, 256);
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(v12, "card_name");
      SpellData = LogicSpell::getSpellData((TextField *)a2);
      TID = (#1308 *)LogicData::getTID(SpellData);
      String = StringTable::getString(TID, v16);
      MovieClip::setText(MovieClipByName, "txt", (const String *)String);
      v18 = (#1257 *)MovieClip::getMovieClipByName(v12, "card");
      *(_QWORD *)(a1 + 256) = v18;
      v19 = (MovieClip *)MovieClip::getMovieClipByName(v18, "card_anim");
      *(_QWORD *)(a1 + 264) = v19;
      MovieClip::gotoAndStopFrameIndex(v19, 0);
      String::String(&v79, "sc/ui_spells.sc");
      v20 = (InitState *)LogicSpell::getSpellData((TextField *)a2);
      IconFileName = (String *)LogicSpellData::getIconFileName(v20);
      MovieClip = StringTable::getMovieClip((#1308 *)&v79, IconFileName, v22);
      String::~String();
      v24 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 264), "card_image");
      v25 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v24 + 88LL))(v24)));
      v32 = *(_QWORD *)(*(_QWORD *)MovieClip + 40LL);
      v26 = (*(float (__fastcall **)(#1308 *))(*(_QWORD *)MovieClip + 88LL))(MovieClip);
      ((void (__fastcall *)(#1308 *, float))v32)(MovieClip, v25 / v26);
      v27 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 264), "card_image");
      (*(void (__fastcall **)(__int64, #1308 *))(*(_QWORD *)v27 + 160LL))(v27, MovieClip);
      v28 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 264), "level");
      *(_QWORD *)(a1 + 280) = MovieClip::getTextFieldByName(v28, "txt");
      UpgradeSpellPopup::updateLevelText((AllianceInvitationSentOkMessage *)a1, -1, a2[2]);
      v29 = MovieClip::getMovieClipByName(v12, "progress");
      *(_QWORD *)(a1 + 272) = v29;
      *(_QWORD *)(a1 + 288) = MovieClip::getTextFieldByName(v29, "card_count");
      FrameIndex = MovieClip::getFrameIndex(*(_QWORD *)(a1 + 272), "progress_full");
      *(_DWORD *)(a1 + 312) = FrameIndex;
      Debugger::doAssert((Debugger *)(FrameIndex != -1), (bool)"", v31);
      UpgradeSpellPopup::updateProgressMaxValue((AllianceInvitationSentOkMessage *)a1, 1);
      LODWORD(MovieClip) = MovieClip::getFrameIndex(*(_QWORD *)(a1 + 264), "stop");
      LODWORD(v32) = 0;
      *(float *)(a1 + 356) = (float)(int)MovieClip * MovieClip::getMSPerFrame(*(_QWORD *)(a1 + 264));
      do
      {
        v32 = (unsigned int)(v32 + 1);
        String::format((String *)"stat%d", v33, v32);
        v34 = (MovieClip *)MovieClip::getMovieClipByName(v12, &v78);
        String::~String();
        if ( !v34 )
          break;
        MovieClip::gotoAndStopFrameIndex(v34, 0);
        *((_BYTE *)v34 + 8) = 0;
      }
      while ( (int)v32 < 20 );
      v36 = a2[2];
      Debugger::doAssert((Debugger *)(v36 > 0), (bool)"upgrade popup ctr: level index out of bounds", v35);
      v37 = (LogicFuseSpellsCommand *)operator new(336);
      SpellInfoPopup::InfoCard::InfoCard(v37, 0, (const TextField *)a2, 0, 1, 1, v36 - 1);
      *(_QWORD *)(a1 + 240) = v37;
      Attributes = (int *)SpellInfoPopup::InfoCard::getAttributes(v37);
      v67 = a1;
      v40 = Attributes;
      v68 = Attributes;
      if ( Attributes[3] >= 1 )
      {
        v41 = 0;
        v42 = 0;
        v43 = 0;
        do
        {
          v44 = *(_QWORD *)v40;
          v45 = *(_QWORD *)v40 + v41;
          if ( *(_DWORD *)(v45 + 68) || *(_DWORD *)(v45 + 72) )
          {
            v46 = v43 + 1;
            String::format((String *)"stat%d", v39, (unsigned int)(v43 + 1));
            v47 = (MovieClip *)MovieClip::getMovieClipByName(v12, &v77);
            String::~String();
            if ( !v47 )
            {
              v60 = (AreaEffectObject *)LogicSpell::getSpellData((TextField *)a2);
              Name = LogicData::getName(v60);
              operator+(v72, "not enought clips for all stat changes, spell:", Name);
              Debugger::error((Debugger *)v72, v62);
            }
            String::String(&v76, (const String *)(v44 + v41 + 8));
            MovieClip::gotoAndStopFrameIndex(v47, 0);
            v48 = (MovieClip *)MovieClip::getMovieClipByName(v47, "type");
            MovieClip::setText(v48, "txt", &v76);
            v49 = (#1249 *)MovieClip::getMovieClipByName(v47, "icon");
            if ( v49 )
            {
              Rect::Rect(v75);
              DisplayObject::getBounds(v49, v71, v75);
              SpellInfoPopup::getIconExportName((ScrollArea *)*(unsigned int *)(v44 + v41 + 64), &v74);
              if ( v74.m_length )
              {
                v51 = (#1249 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", (const char *)&v74, v50);
                MovieClip::changeTimelineChild(v47, v49, v51);
                v52 = *(void (__fastcall **)(#1249 *, float))(*(_QWORD *)v51 + 40LL);
                v53 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(v75)));
                v54 = (*(float (__fastcall **)(#1249 *))(*(_QWORD *)v51 + 88LL))(v51);
                v52(v51, v53 / v54);
                (*(void (__fastcall **)(#1249 *))(*(_QWORD *)v49 + 8LL))(v49);
              }
              String::~String();
              Rect::~Rect(v75);
              v40 = v68;
            }
            v55 = operator new(56);
            *(_DWORD *)(v55 + 40) = 0;
            *(_DWORD *)(v55 + 44) = 0;
            *(_BYTE *)(v55 + 48) = 0;
            *(_DWORD *)(v55 + 32) = 0;
            *(_QWORD *)(v55 + 16) = 0;
            *(_QWORD *)(v55 + 24) = 0;
            *(_QWORD *)v55 = 0;
            *(_QWORD *)(v55 + 8) = 0;
            v73 = (_DWORD *)v55;
            *(_QWORD *)v55 = v47;
            v56 = MovieClip::getMovieClipByName(v47, "value");
            *(_QWORD *)(v55 + 8) = MovieClip::getTextFieldByName(v56, "txt");
            v57 = *(_DWORD *)(v44 + v41 + 56);
            v58 = v73;
            v73[4] = v57;
            v58[5] = *(_DWORD *)(v45 + 68) + v57;
            v59 = *(_DWORD *)(v44 + v41 + 60);
            v58[6] = v59;
            v58[7] = *(_DWORD *)(v44 + v41 + 72) + v59;
            v58[10] = -1082130432;
            v58[11] = 1055286886;
            v58[9] = *(_DWORD *)(v44 + v41 + 64);
            LogicArrayList<UpgradeSpellPopup::Stat *>::add(v69, &v73);
            if ( !(_DWORD)v42 )
              *(_DWORD *)(v67 + 368) = MovieClip::getFrameIndex(v47, "stop");
            String::~String();
            v43 = v46;
            v12 = v71;
          }
          ++v42;
          v41 += 80;
        }
        while ( v42 < v40[3] );
      }
      *(_QWORD *)(v67 + 248) = 0;
      v63 = (LogicPageOpenedCommand *)HomeScreen::getInstance((LogicPageOpenedCommand *)Attributes);
      v64 = (LogicPageOpenedCommand *)HomeScreen::setHUDVisible(v63, 0);
      v65 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v64);
      HomeScreen::setPagesVisible(v65, 0);
      return v67;
    }

    void __fastcall UpgradeSpellPopup::updateLevelText(AllianceInvitationSentOkMessage *this, int a2, char *a3)
    {
      #1271 *v6; // x21
      int v7; // w1
      _QWORD v8[3]; // [xsp+0h] [xbp-50h] BYREF
      String v9; // [xsp+18h] [xbp-38h] BYREF
    
      Debugger::doAssert((Debugger *)(*((_QWORD *)this + 35) != 0), (bool)"", a3);
      v6 = (#1271 *)*((_QWORD *)this + 35);
      String::valueOf(v8, (String *)a3, v7);
      operator+(&v9, "Level ", v8);
      TextField::setText(v6, &v9);
      String::~String();
      String::~String();
      *(_DWORD *)(*((_QWORD *)this + 35) + 64LL) = a2;
    }

    __int64 __fastcall UpgradeSpellPopup::updateProgressMaxValue(AllianceInvitationSentOkMessage *this, int a2)
    {
      TextField *v3; // x0
      InitState *SpellData; // x0
      __int64 Rarity; // x0
      __int64 result; // x0
    
      v3 = (TextField *)*((_QWORD *)this + 29);
      if ( a2 )
      {
        SpellData = (InitState *)LogicSpell::getSpellData(v3);
        Rarity = LogicSpellData::getRarity(SpellData);
        result = LogicRarityData::getUpgradeMaterialCount(
                   Rarity,
                   (const char *)(unsigned int)(*(_DWORD *)(*((_QWORD *)this + 29) + 8LL) - 1));
        *((_DWORD *)this + 90) = result;
      }
      else
      {
        result = LogicSpell::isLevelMax(v3);
        if ( (_DWORD)result )
        {
          *((_DWORD *)this + 90) = -1;
        }
        else
        {
          result = LogicSpell::getMaterialCountForNextLevel(*((TextField **)this + 29));
          *((_DWORD *)this + 90) = result;
        }
        *((_DWORD *)this + 97) = 1055286886;
      }
      return result;
    }

    // attributes: thunk
    void __fastcall UpgradeSpellPopup::UpgradeSpellPopup(UpgradeSpellPopup *this, int *a2)
    {
      __ZN17UpgradeSpellPopupC2EPK10LogicSpell((__int64)this, a2);
    }

    void __fastcall UpgradeSpellPopup::~UpgradeSpellPopup(AllianceInvitationSentOkMessage *this)
    {
      LogicPageOpenedCommand *Instance; // x0
      LogicJSONObject *RenderSystem; // x0
      LogicPageOpenedCommand *EffectManager; // x0
      __int64 v5; // x20
      _QWORD *v6; // x21
      __int64 v7; // x22
      __int64 i; // x23
      int v10; // w1
      LogicPageOpenedCommand *v11; // x0
      LogicPageOpenedCommand *v12; // x0
      LogicPageOpenedCommand *v13; // x0
      _QWORD *v14; // x20
      __int64 v15; // x8
      __int64 v16; // x22
      void *v17; // x0
      __int64 v18; // x8
      _QWORD *v19; // x22
      __int64 v20; // x8
      __int64 v21; // x23
      __int64 v22; // x0
      __int64 v23; // x8
      __int64 v24; // x0
      __int64 v25; // x0
      __int64 v26; // x0
      __int64 v27; // x0
    
      *(_QWORD *)this = off_1004676C8;
      *((_QWORD *)this + 12) = &off_1004678A0;
      Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance(this);
      RenderSystem = (LogicJSONObject *)HomeScreen::getRenderSystem(Instance);
      EffectManager = (LogicPageOpenedCommand *)RenderSystem::getEffectManager(RenderSystem);
      v5 = (__int64)EffectManager;
      v6 = (_QWORD *)((char *)this + 336);
      v7 = *((int *)this + 87);
      for ( i = 4LL * ((int)v7 - 1); v7-- >= 1; i -= 4 )
      {
        v10 = *(_DWORD *)(*v6 + i);
        EffectManager = (LogicPageOpenedCommand *)EffectManager::removeEffect(v5, v10);
      }
      *((_DWORD *)this + 87) = 0;
      v11 = (LogicPageOpenedCommand *)HomeScreen::getInstance(EffectManager);
      v12 = (LogicPageOpenedCommand *)HomeScreen::setHUDVisible(v11, 1);
      v13 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v12);
      HomeScreen::setPagesVisible(v13, 1);
      v14 = (_QWORD *)((char *)this + 296);
      v15 = *((int *)this + 77);
      if ( (int)v15 >= 1 )
      {
        v16 = v15 - 1;
        do
        {
          v17 = *(void **)(*v14 + 8 * v16);
          if ( v17 )
            operator delete(v17);
          v18 = v16-- + 1;
        }
        while ( v18 > 1 );
      }
      *((_DWORD *)this + 77) = 0;
      v19 = (_QWORD *)((char *)this + 320);
      v20 = *((int *)this + 83);
      if ( (int)v20 >= 1 )
      {
        v21 = v20 - 1;
        do
        {
          v22 = *(_QWORD *)(*v19 + 8 * v21);
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
          v23 = v21-- + 1;
        }
        while ( v23 > 1 );
      }
      *((_DWORD *)this + 83) = 0;
      v24 = *((_QWORD *)this + 30);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      *((_QWORD *)this + 30) = 0;
      v25 = *((_QWORD *)this + 49);
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      *((_QWORD *)this + 49) = 0;
      v26 = *((_QWORD *)this + 50);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      *((_DWORD *)this + 87) = 0;
      *((_DWORD *)this + 90) = 0;
      *((_DWORD *)this + 89) = 0;
      *((_DWORD *)this + 91) = 0;
      *((_BYTE *)this + 352) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 49) = 0;
      *((_QWORD *)this + 50) = 0;
      *((_QWORD *)this + 48) = 0;
      *((_QWORD *)this + 47) = 0xFFFFFFFFLL;
      *((_DWORD *)this + 93) = 0;
      *((_DWORD *)this + 77) = 0;
      *((_DWORD *)this + 83) = 0;
      v27 = *((_QWORD *)this + 42);
      if ( v27 )
        operator delete[](v27);
      *v6 = 0;
      *((_QWORD *)this + 43) = 0;
      if ( *v19 )
        operator delete[](*v19);
      *v19 = 0;
      *((_QWORD *)this + 41) = 0;
      if ( *v14 )
        operator delete[](*v14);
      *v14 = 0;
      *((_QWORD *)this + 38) = 0;
      PopupBase::~PopupBase(this);
    }

    // attributes: thunk
    void __fastcall UpgradeSpellPopup::~UpgradeSpellPopup(AllianceInvitationSentOkMessage *this)
    {
      __ZN17UpgradeSpellPopupD2Ev(this);
    }

    void __fastcall UpgradeSpellPopup::~UpgradeSpellPopup(AllianceInvitationSentOkMessage *this)
    {
      UpgradeSpellPopup::~UpgradeSpellPopup(this);
      operator delete(this);
    }

    void UpgradeSpellPopup::buttonClicked()
    {
      ;
    }

    __int64 __fastcall UpgradeSpellPopup::touchReleased(__int64 a1, __int64 a2)
    {
      int v4; // w8
    
      v4 = *(_DWORD *)(a1 + 248);
      if ( v4 <= 5 )
        UpgradeSpellPopup::setState(a1, (unsigned int)(v4 + 1));
      return PopupBase::touchReleased(a1, a2);
    }

    __int64 __fastcall UpgradeSpellPopup::getPopupType(AllianceInvitationSentOkMessage *this)
    {
      return 24;
    }

    void __fastcall UpgradeSpellPopup::update(#1257 **this, float a2)
    {
      Stage *v4; // x0
      __int64 Instance; // x0
      __int64 v6; // x8
      _QWORD *v7; // x20
      __int64 v8; // x21
      __int64 v9; // x0
      __int64 v10; // x8
      float v11; // s0
      __int64 v12; // x20
      float v13; // s0
      float v14; // s0
      float v15; // s10
      __int64 v16; // x0
      __int64 v17; // x0
      float v18; // s0
      float v19; // s0
      float v20; // s0
      __int64 v21; // x1
      int v22; // w8
      __int64 v23; // x8
      __int64 v24; // x20
      int v25; // w8
      int v26; // w9
    
      v4 = (Stage *)PopupBase::update((MatchmakeFailedMessage *)this, a2);
      Instance = Stage::getInstance(v4);
      DisplayObject::setPixelSnappedXY((DisplayObject *)this, (float)*(int *)(Instance + 428) * 0.5, 0.0);
      *((float *)this + 63) = *((float *)this + 63) + a2;
      v6 = *((int *)this + 83);
      if ( (int)v6 >= 1 )
      {
        v7 = this + 40;
        v8 = v6 - 1;
        do
        {
          if ( GravityParticle::update(*(#1303 **)(*v7 + 8 * v8), a2) )
          {
            v9 = *(_QWORD *)(*v7 + 8 * v8);
            if ( v9 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
            LogicArrayList<GravityParticle *>::remove(this + 40, v8);
          }
          v10 = v8-- + 1;
        }
        while ( v10 > 1 );
      }
      v11 = *((float *)this + 95);
      if ( v11 > 0.0 )
      {
        v12 = *((int *)this + 94);
        if ( (_DWORD)v12 != -1 )
        {
          v13 = v11 - a2;
          if ( v13 <= 0.0 )
            v13 = 0.0;
          *((float *)this + 95) = v13;
          v14 = sinf((float)(v13 * 3.1416) / 0.08);
          v15 = v14 * 0.05;
          ColorTransform::setAddColor(
            (ColorTransform *)(**((_QWORD **)*(this + 37) + v12) + 9LL),
            v14 * 0.25,
            v14 * 0.25,
            v14 * 0.25);
          v16 = **((_QWORD **)*(this + 37) + *((int *)this + 94));
          (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v16 + 48LL))(v16, v15 + 1.0);
          v17 = **((_QWORD **)*(this + 37) + *((int *)this + 94));
          (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v17 + 56LL))(v17, 1.0 - v15);
          if ( *((float *)this + 95) <= 0.0 )
            *((_DWORD *)this + 94) = -1;
        }
      }
      v18 = *((float *)this + 97);
      if ( v18 > 0.0 )
      {
        v19 = v18 - a2;
        if ( v19 <= 0.0 )
          v19 = 0.0;
        *((float *)this + 97) = v19;
        v20 = sinf((float)(v19 / 0.45) * 3.1416);
        ColorTransform::setAddColor((#1257 *)((char *)*(this + 34) + 9), v20 * 0.5, v20 * 0.5, v20 * 0.5);
      }
      switch ( *((_DWORD *)this + 62) )
      {
        case 0:
          v21 = 1;
          goto LABEL_33;
        case 1:
        case 5:
          if ( (unsigned int)MovieClip::isStopped(*(this + 49)) )
            goto LABEL_23;
          return;
        case 2:
          if ( !(unsigned int)UpgradeSpellPopup::updateCardLevelProgress((UpgradeSpellPopup *)this, a2) )
            return;
    LABEL_23:
          v22 = *((_DWORD *)this + 62);
          if ( v22 > 5 )
            return;
          v21 = (unsigned int)(v22 + 1);
          goto LABEL_33;
        case 3:
          v23 = *((int *)this + 91);
          if ( (int)v23 >= *((_DWORD *)this + 77) )
          {
            v21 = 4;
    LABEL_33:
            UpgradeSpellPopup::setState(this, v21);
          }
          else
          {
            v24 = *((_QWORD *)*(this + 37) + v23);
            UpgradeSpellPopup::Stat::update((UpgradeSpellPopup::Stat *)v24, a2);
            v25 = *(_DWORD *)(v24 + 32);
            if ( v25 != *((_DWORD *)this + 93) )
            {
              v26 = *((_DWORD *)this + 91);
              if ( v26 != *((_DWORD *)this + 94) )
              {
                *((_DWORD *)this + 93) = v25;
                *((_DWORD *)this + 95) = 1041194025;
                *((_DWORD *)this + 94) = v26;
              }
            }
            if ( *(float *)(v24 + 40) >= *(float *)(v24 + 44) )
              ++*((_DWORD *)this + 91);
          }
          return;
        default:
          return;
      }
    }

    void __fastcall UpgradeSpellPopup::setState(__int64 a1, int a2)
    {
      __int64 Instance; // x20
      DonateAllianceUnitMessage *v4; // x0
      __int64 v5; // x20
      DonateAllianceUnitMessage *v6; // x0
      __int64 v7; // x8
      __int64 v8; // x21
      __int64 v9; // x8
      MovieClip *v10; // x0
      __int64 v11; // x8
      String v12; // [xsp+30h] [xbp-70h] BYREF
      int v13; // [xsp+4Ch] [xbp-54h] BYREF
      String v14; // [xsp+50h] [xbp-50h] BYREF
      int EffectId; // [xsp+6Ch] [xbp-34h] BYREF
    
      if ( *(_DWORD *)(a1 + 248) != a2 )
      {
        *(_DWORD *)(a1 + 248) = a2;
        *(_DWORD *)(a1 + 252) = 0;
        switch ( a2 )
        {
          case 0:
            MovieClip::gotoAndStopFrameIndex(*(MovieClip **)(a1 + 392), 0);
            break;
          case 1:
            Instance = HomeScreen::getInstance((LogicPageOpenedCommand *)a1);
            String::String(&v14, "upgradeCard_start");
            v4 = (DonateAllianceUnitMessage *)HomeScreen::addEffectAt(
                                                Instance,
                                                &v14,
                                                *(_QWORD *)(a1 + 256),
                                                COERCE_LONG_DOUBLE((unsigned __int128)0),
                                                COERCE_LONG_DOUBLE((unsigned __int128)0));
            EffectId = Effect::getEffectId(v4);
            LogicArrayList<int>::add(a1 + 336, &EffectId);
            String::~String();
            MovieClip::gotoAndPlay(*(MovieClip **)(a1 + 392), 0, "stop");
            UpgradeSpellPopup::setProgress((UpgradeSpellPopup *)a1, 0.0);
            break;
          case 2:
            MovieClip::gotoAndStop(*(MovieClip **)(a1 + 392), "stop");
            MovieClip::gotoAndPlay(*(MovieClip **)(a1 + 264), 0, "stop");
            UpgradeSpellPopup::setProgress((UpgradeSpellPopup *)a1, 0.0);
            break;
          case 3:
            v5 = HomeScreen::getInstance((LogicPageOpenedCommand *)a1);
            String::String(&v12, "upgradeCard_ready");
            v6 = (DonateAllianceUnitMessage *)HomeScreen::addEffectAt(
                                                v5,
                                                &v12,
                                                *(_QWORD *)(a1 + 256),
                                                COERCE_LONG_DOUBLE((unsigned __int128)0),
                                                COERCE_LONG_DOUBLE((unsigned __int128)0));
            v13 = Effect::getEffectId(v6);
            LogicArrayList<int>::add(a1 + 336, &v13);
            String::~String();
            UpgradeSpellPopup::setProgress((UpgradeSpellPopup *)a1, 1.0);
            UpgradeSpellPopup::updateLevelText(
              (AllianceInvitationSentOkMessage *)a1,
              -16711936,
              (char *)(unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 232) + 8LL) + 1));
            MovieClip::gotoAndStop(*(MovieClip **)(a1 + 264), "stop");
            *(_DWORD *)(a1 + 364) = 0;
            break;
          case 4:
            v7 = *(int *)(a1 + 308);
            if ( (int)v7 >= 1 )
            {
              v8 = v7 - 1;
              do
              {
                v9 = *(_QWORD *)(*(_QWORD *)(a1 + 296) + 8 * v8);
                *(_DWORD *)(v9 + 40) = 0;
                v10 = *(MovieClip **)v9;
                *((_BYTE *)v10 + 8) = 1;
                MovieClip::gotoAndStop(v10, "stop");
                UpgradeSpellPopup::Stat::update(*(UpgradeSpellPopup::Stat **)(*(_QWORD *)(a1 + 296) + 8 * v8), 1000.0);
                v11 = v8-- + 1;
              }
              while ( v11 > 1 );
            }
            break;
          case 5:
            MovieClip::gotoAndPlay(*(MovieClip **)(a1 + 392), "stop", "end");
            break;
          case 6:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
            break;
          default:
            return;
        }
      }
    }

    bool __fastcall UpgradeSpellPopup::updateCardLevelProgress(__int64 a1, float a2)
    {
      float v4; // s0
      float v6; // s0
      float v7; // s9
      float v8; // s0
      float v9; // s0
      float v10; // [xsp+0h] [xbp-30h]
    
      v4 = *(float *)(a1 + 252);
      if ( v4 < 0.0 )
        return 0;
      v6 = v4 / *(float *)(a1 + 356);
      if ( v6 >= 0.0 )
      {
        v7 = 1.0;
        if ( v6 > 1.0 || (v7 = v6, v6 >= 0.9) )
        {
          if ( !*(_BYTE *)(a1 + 352) )
          {
            UpgradeSpellPopup::updateLevelText(
              (AllianceInvitationSentOkMessage *)a1,
              -16711936,
              (char *)(unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 232) + 8LL) + 1));
            UpgradeSpellPopup::updateProgressMaxValue((AllianceInvitationSentOkMessage *)a1, 0);
            *(_BYTE *)(a1 + 352) = 1;
          }
          v6 = v7;
        }
        v10 = v6;
        UpgradeSpellPopup::setProgress((UpgradeSpellPopup *)a1, v6);
        if ( v10 > 0.4 )
          return v10 >= 1.0;
      }
      else
      {
        v10 = 0.0;
        UpgradeSpellPopup::setProgress((UpgradeSpellPopup *)a1, 0.0);
      }
      v8 = *(float *)(a1 + 384) + a2;
      *(float *)(a1 + 384) = v8;
      if ( v8 >= 1.0 )
      {
        *(_DWORD *)(a1 + 384) = 1065353216;
        goto LABEL_15;
      }
      *(float *)(a1 + 384) = v8;
      if ( v8 >= 0.015 )
      {
        do
        {
    LABEL_15:
          UpgradeSpellPopup::spawnParticles(
            (UpgradeSpellPopup *)a1,
            *(DisplayObject **)(a1 + 272),
            *(DisplayObject **)(a1 + 256),
            1);
          v9 = *(float *)(a1 + 384) + -0.015;
          *(float *)(a1 + 384) = v9;
        }
        while ( v9 >= 0.015 );
      }
      return v10 >= 1.0;
    }

    void __fastcall UpgradeSpellPopup::setProgress(__int64 a1, float a2)
    {
      int v3; // w8
      float v4; // s0
      __int64 v5; // x21
      #1271 *v6; // x20
      const char *v7; // x1
      #1271 *v8; // x19
      const char *v9; // x1
      const String *String; // x0
      String v11; // [xsp+38h] [xbp-38h] BYREF
    
      v3 = *(_DWORD *)(a1 + 360);
      if ( v3 == -1 )
      {
        MovieClip::gotoAndStopFrameIndex(*(MovieClip **)(a1 + 272), 0);
        v8 = *(#1271 **)(a1 + 288);
        String = (const String *)StringTable::getString((#1308 *)"TID_SPELL_MAX_LEVEL", v9);
        TextField::setText(v8, String);
      }
      else
      {
        v4 = 1.0 - a2;
        v5 = (unsigned int)(int)(float)((float)(v4 * (float)v3) + 0.5);
        MovieClip::gotoAndStopFrameIndex(
          *(MovieClip **)(a1 + 272),
          (int)(float)((float)(v4 * (float)*(int *)(a1 + 312)) + 0.5));
        v6 = *(#1271 **)(a1 + 288);
        String::format((String *)"%d/%d", v7, v5, *(unsigned int *)(a1 + 360));
        TextField::setText(v6, &v11);
        String::~String();
      }
    }

    void __fastcall UpgradeSpellPopup::spawnParticles(int *a1, __int64 a2, __int64 a3, int a4)
    {
      long double MidY; // q0
      long double Width; // q0
      int v9; // w21
      float v10; // s13
      float v11; // s10
      int v12; // w28
      float v13; // s15
      float v14; // s11
      int v15; // w22
      int v16; // w27
      int v17; // w26
      int v18; // w25
      int v19; // w24
      int v20; // w0
      int v21; // w19
      int v22; // w20
      __int64 v23; // x23
      float v24; // [xsp+18h] [xbp-E8h]
      int v25; // [xsp+1Ch] [xbp-E4h]
      float MidX; // [xsp+20h] [xbp-E0h]
      String v29; // [xsp+30h] [xbp-D0h] BYREF
      __int64 v30; // [xsp+48h] [xbp-B8h] BYREF
      __int128 v31; // [xsp+50h] [xbp-B0h] BYREF
      Rect v32[2]; // [xsp+60h] [xbp-A0h] BYREF
    
      Rect::Rect(v32);
      DisplayObject::getBounds(a2, a1, v32);
      Rect::Rect((Rect *)&v31);
      DisplayObject::getBounds(a3, a1, &v31);
      MidX = Rect::getMidX(&v31);
      MidY = Rect::getMidY(&v31);
      v25 = LODWORD(MidY);
      Width = Rect::getWidth(&v31);
      if ( a4 >= 1 )
      {
        v9 = 0;
        v24 = *(float *)&Width * 0.5;
        do
        {
          if ( a1[83] > 255 )
            break;
          v10 = *(float *)&v32[0].top;
          LODWORD(v11) = COERCE_UNSIGNED_INT128(Rect::getWidth(v32));
          v12 = rand();
          v13 = *(float *)&v32[0].bottom;
          LODWORD(v14) = COERCE_UNSIGNED_INT128(Rect::getHeight(v32));
          v15 = rand();
          v16 = rand();
          v17 = rand();
          v18 = rand();
          v19 = rand();
          v20 = rand();
          v21 = v20;
          v22 = v20 >= 0 ? v20 : v20 + 3;
          v23 = operator new(136);
          String::String(&v29, "sc/effects.sc");
          GravityParticle::GravityParticle(
            (GravityParticle *)v23,
            &v29,
            (const String *)&UpgradeSpellPopup::PRT_EXPORT_NAMES + (int)(v21 - (v22 & 0xFFFFFFFC)));
          String::~String();
          v30 = v23;
          DisplayObject::setXY(
            (DisplayObject *)v23,
            v10 + (float)((float)(v11 * (float)(v12 % 1000)) / 1000.0),
            v13 + (float)((float)(v14 * (float)(v15 % 1000)) / 1000.0));
          *(float *)(v23 + 108) = MidX;
          *(_DWORD *)(v23 + 112) = v25;
          *(_DWORD *)(v23 + 104) = 1145569280;
          *(float *)(v23 + 116) = v24;
          *(float *)(v23 + 128) = (float)((float)((float)(v19 % 1000) * 0.5) / 1000.0) + 1.0;
          *(float *)(v23 + 120) = (float)((float)((float)(v16 % 1000) * 200.0) / 1000.0) + -100.0;
          *(float *)(v23 + 124) = (float)((float)((float)(v17 % 1000) * -100.0) / 1000.0) + -150.0;
          (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v23 + 40LL))(
            v23,
            (float)((float)((float)(v18 % 1000) * 0.6) / 1000.0) + 1.0);
          (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)a1 + 160LL))(a1, v23);
          LogicArrayList<GravityParticle *>::add(a1 + 80, &v30);
          ++v9;
        }
        while ( v9 < a4 );
      }
      Rect::~Rect((Rect *)&v31);
      Rect::~Rect(v32);
    }

    __int64 __fastcall UpgradeSpellPopup::hideGuiWhenTopMost(AllianceInvitationSentOkMessage *this)
    {
      return 1;
    }

}; // end class UpgradeSpellPopup
