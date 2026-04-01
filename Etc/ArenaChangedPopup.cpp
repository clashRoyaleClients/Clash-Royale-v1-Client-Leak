class ArenaChangedPopup
{
public:

    __int64 __fastcall ArenaChangedPopup::ArenaChangedPopup(__int64 a1, DonateItem *a2, DonateItem *a3)
    {
      DonateItem *v4; // x19
      __int64 v5; // x26
      __int64 v6; // x27
      __int64 v7; // x28
      const char *v8; // x2
      const char *v9; // x2
      __int64 MovieClip; // x21
      const String *v11; // x2
      Stage *v12; // x0
      DisplayObject *v13; // x21
      __int64 Instance; // x0
      __int64 v15; // x0
      GameButton *v16; // x21
      __int64 MovieClipByName; // x20
      const char *v18; // x2
      MovieClip *v19; // x20
      const char *v20; // x1
      const String *String; // x0
      __int64 v22; // x0
      #1271 *TextFieldByName; // x20
      #1253 *v24; // x21
      float v25; // s8
      long double Height; // q0
      __int64 v27; // x0
      #1257 *v28; // x0
      __int64 Table; // x0
      int v30; // w22
      __int64 v31; // x20
      __int64 v32; // x0
      const AreaEffectObject *v33; // x23
      const String *v34; // x2
      MovieClip *v35; // x20
      const char *v36; // x1
      const String *v37; // x0
      long double v38; // q0
      long double v39; // q0
      float v40; // s8
      const String *v41; // x2
      const char *v42; // x1
      const String *v43; // x0
      MovieClip *v44; // x0
      MovieClip *v45; // x0
      MovieClip *v46; // x20
      MovieClip *v47; // x21
      const char *v48; // x1
      const String *v49; // x0
      MovieClip *v50; // x20
      #1308 *v51; // x0
      const String *v52; // x1
      #1308 *v53; // x0
      Stage *v54; // x0
      __int128 v55; // q0
      const String *v56; // x2
      MovieClip *v57; // x20
      const char *v58; // x1
      const String *v59; // x0
      long double v60; // q0
      long double v61; // q0
      float v62; // s8
      __int128 v63; // q0
      const String *v64; // x2
      int TrophyLimit; // w20
      MovieClip *v66; // x0
      MovieClip *v67; // x0
      MovieClip *v68; // x0
      MovieClip *v69; // x20
      #1308 *TID; // x0
      const String *v71; // x1
      #1308 *v72; // x0
      MovieClip *v73; // x20
      _BYTE *v74; // x21
      #1249 *v75; // x0
      float v76; // s8
      __int64 v77; // x22
      MovieClip *v78; // x25
      const char *v79; // x1
      DataIcon *v80; // x22
      #1249 *IconClip; // x22
      #1257 *v82; // x0
      MovieClip *v83; // x22
      #1308 *SubtitleTID; // x0
      const String *v85; // x1
      #1308 *v86; // x0
      TextField *v87; // x0
      const char *v88; // x1
      DisplayObject *v89; // x22
      long double Width; // q0
      long double v91; // q0
      float v92; // s9
      __int64 v93; // x19
      __int128 v94; // q0
      __int64 v95; // x0
      __int64 v96; // x0
      __int64 v97; // x0
      __int64 v98; // x0
      int SpellCount; // w0
      const char *v100; // x1
      __int64 v101; // x22
      InitState *SpellAt; // x25
      int v103; // w8
      int v104; // w24
      int v105; // w8
      char v106; // w9
      _QWORD *v107; // x19
      InitState *v108; // x22
      InitState *v109; // x28
      __int64 Rarity; // x0
      int SortOrder; // w25
      __int64 v112; // x0
      __int64 v113; // x26
      __int64 v114; // x27
      int v115; // w19
      __int64 v116; // x22
      __int64 v117; // x8
      __int64 v118; // x8
      int v119; // w19
      float *v120; // x24
      float v121; // s9
      long double v122; // q0
      float v123; // s10
      float v124; // s13
      float v125; // s14
      __int64 v126; // x10
      ChatStreamItem *v127; // x28
      float v128; // s15
      long double MidY; // q0
      float v130; // s9
      const InitState *v131; // x1
      const LogicSpell *DummySpell; // x20
      int v133; // w25
      __int64 v134; // x25
      int v135; // w25
      DisplayObject *v136; // x28
      void (__fastcall *v137)(DisplayObject *, float); // x19
      float v138; // s9
      float v139; // s0
      long double v140; // q0
      long double v141; // q0
      __int128 v142; // q1
      __int64 v143; // x19
      int v144; // w0
      const char *v145; // x2
      int v146; // w9
      #1249 *v147; // x20
      float v148; // s9
      float v149; // s9
      long double v150; // q0
      float v151; // s10
      __int128 v152; // q0
      #1253 *v153; // x20
      float v154; // s0
      __int64 v155; // x21
      ScrollArea *v156; // x0
      __int64 v158; // [xsp+10h] [xbp-350h]
      __int64 v159; // [xsp+18h] [xbp-348h]
      __int64 v160; // [xsp+20h] [xbp-340h]
      int v161; // [xsp+28h] [xbp-338h]
      __int64 v162; // [xsp+30h] [xbp-330h]
      __int64 v163; // [xsp+38h] [xbp-328h]
      __int64 v164; // [xsp+40h] [xbp-320h]
      DonateItem *v165; // [xsp+48h] [xbp-318h]
      int v166; // [xsp+54h] [xbp-30Ch]
      __int64 v167; // [xsp+58h] [xbp-308h]
      __int64 v169; // [xsp+68h] [xbp-2F8h]
      float v170; // [xsp+70h] [xbp-2F0h]
      char v171; // [xsp+70h] [xbp-2F0h]
      __int64 v172; // [xsp+70h] [xbp-2F0h]
      __int64 v173; // [xsp+88h] [xbp-2D8h]
      __int64 v175; // [xsp+98h] [xbp-2C8h]
      __int64 v176; // [xsp+A0h] [xbp-2C0h]
      __int64 v177; // [xsp+A8h] [xbp-2B8h]
      bool v178; // [xsp+B4h] [xbp-2ACh]
      float v179; // [xsp+C0h] [xbp-2A0h]
      __int128 v180; // [xsp+E0h] [xbp-280h]
      #1249 *v181; // [xsp+F0h] [xbp-270h] BYREF
      DisplayObject *v182; // [xsp+F8h] [xbp-268h] BYREF
      const LogicSpell *v183; // [xsp+100h] [xbp-260h] BYREF
      InitState *v184; // [xsp+108h] [xbp-258h] BYREF
      void *v185; // [xsp+110h] [xbp-250h] BYREF
      __int64 v186; // [xsp+118h] [xbp-248h]
      DataIcon *v187; // [xsp+120h] [xbp-240h] BYREF
      String v188; // [xsp+128h] [xbp-238h] BYREF
      String v189; // [xsp+140h] [xbp-220h] BYREF
      String v190; // [xsp+158h] [xbp-208h] BYREF
      String v191; // [xsp+170h] [xbp-1F0h] BYREF
      String v192; // [xsp+188h] [xbp-1D8h] BYREF
      MovieClip *v193; // [xsp+1A0h] [xbp-1C0h] BYREF
      String v194; // [xsp+1A8h] [xbp-1B8h] BYREF
      String v195; // [xsp+1C0h] [xbp-1A0h] BYREF
      String v196; // [xsp+1D8h] [xbp-188h] BYREF
      String v197; // [xsp+1F0h] [xbp-170h] BYREF
      MovieClip *v198; // [xsp+208h] [xbp-158h] BYREF
      #1249 *v199; // [xsp+210h] [xbp-150h] BYREF
      __int128 v200; // [xsp+218h] [xbp-148h] BYREF
      String v201; // [xsp+228h] [xbp-138h] BYREF
      String v202; // [xsp+240h] [xbp-120h] BYREF
      String v203; // [xsp+258h] [xbp-108h] BYREF
      String v204; // [xsp+270h] [xbp-F0h] BYREF
      _BYTE v205[64]; // [xsp+288h] [xbp-D8h] BYREF
    
      v4 = a2;
      v5 = a1;
      String::String(&v204, "sc/ui.sc");
      String::String(&v203, "popup_arena_unlocks_new");
      PopupBase::PopupBase(v5, &v204, &v203);
      String::~String();
      String::~String();
      *(_QWORD *)v5 = off_100471BC0;
      *(_QWORD *)(v5 + 96) = &off_100471D98;
      v169 = v5 + 96;
      v177 = v5 + 248;
      v176 = v5 + 264;
      v6 = v5 + 280;
      v173 = v5 + 280;
      v7 = v5 + 304;
      v175 = v5 + 304;
      memset((void *)(v5 + 232), 0, 0x68u);
      Debugger::doAssert((Debugger *)(v4 != 0), (bool)"", v8);
      Debugger::doAssert((Debugger *)(a3 != 0), (bool)"", v9);
      MovieClip = GUIContainer::getMovieClip((#1254 *)v5);
      String::String(&v202, "sc/ui.sc");
      String::String(&v201, "full_page_button_tab");
      *(_QWORD *)(v5 + 232) = StringTable::getMovieClip((#1308 *)&v202, &v201, v11);
      String::~String();
      String::~String();
      v12 = (Stage *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)MovieClip + 160LL))(
                       MovieClip,
                       *(_QWORD *)(v5 + 232));
      v13 = *(DisplayObject **)(v5 + 232);
      Instance = Stage::getInstance(v12);
      DisplayObject::setXY(v13, 0.0, (float)*(int *)(Instance + 432) * 0.5);
      v15 = *(_QWORD *)(v5 + 232);
      *(_BYTE *)(v15 + 64) = 1;
      if ( MovieClip::getMovieClipByName((#1257 *)v15, "darkener") )
        *(_BYTE *)(MovieClip::getMovieClipByName(*(#1257 **)(v5 + 232), "darkener") + 64) = 0;
      v16 = (GameButton *)operator new(264);
      GameButton::GameButton(v16);
      *(_QWORD *)(v5 + 240) = v16;
      MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(v5 + 232), "ok_button");
      Debugger::doAssert((Debugger *)(MovieClipByName != 0), (bool)"", v18);
      MovieClip::changeTimelineChild(*(#1257 **)(v5 + 232), (#1249 *)MovieClipByName, *(#1249 **)(v5 + 240));
      *(_DWORD *)(MovieClipByName + 16) = 1065353216;
      *(_DWORD *)(MovieClipByName + 28) = 1065353216;
      *(_DWORD *)(MovieClipByName + 20) = 0;
      *(_DWORD *)(MovieClipByName + 24) = 0;
      *(_DWORD *)(MovieClipByName + 32) = 0;
      *(_DWORD *)(MovieClipByName + 36) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v5 + 240) + 288LL))(
        *(_QWORD *)(v5 + 240),
        MovieClipByName,
        1);
      CustomButton::setButtonListener(*(_QWORD *)(v5 + 240), v5 + 96);
      v19 = *(MovieClip **)(*(_QWORD *)(v5 + 240) + 96LL);
      String = (const String *)StringTable::getString((#1308 *)"TID_ARENA_CHANGE_CONFIRM_BUTTON", v20);
      MovieClip::setText(v19, "txt", String);
      v22 = GUIContainer::getMovieClip((#1254 *)v5);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(v22, "scroll_area");
      Rect::Rect((Rect *)&v200);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)&v200);
      v24 = (#1253 *)operator new(504);
      LODWORD(v25) = COERCE_UNSIGNED_INT128(Rect::getWidth(&v200));
      Height = Rect::getHeight(&v200);
      ScrollArea::ScrollArea(v24, v25, *(float *)&Height, 25);
      *(_QWORD *)(v5 + 328) = v24;
      ScrollArea::enablePinching(v24, 0);
      ScrollArea::enableHorizontalDrag(*(#1253 **)(v5 + 328), 0);
      ScrollArea::enableVerticalDrag(*(#1253 **)(v5 + 328), 1);
      v27 = *(_QWORD *)(v5 + 328);
      *(_BYTE *)(v27 + 496) = 0;
      ScrollArea::setAlignment((#1253 *)v27, 5);
      v28 = (#1257 *)GUIContainer::getMovieClip((#1254 *)v5);
      MovieClip::changeTimelineChild(v28, TextFieldByName, *(#1249 **)(v5 + 328));
      if ( TextFieldByName )
        (*(void (__fastcall **)(#1271 *))(*(_QWORD *)TextFieldByName + 8LL))(TextFieldByName);
      Table = LogicDataTables::getTable(54);
      v167 = Table;
      v30 = 0;
      v178 = v4 != a3;
      v170 = 0.0;
      v180 = 0u;
      v179 = 0.0;
      while ( 1 )
      {
        v31 = Table;
        if ( v30 >= (*(int (**)(void))(*(_QWORD *)Table + 32LL))() )
          break;
        v166 = v30;
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 40LL))(v31);
        v33 = (const AreaEffectObject *)v32;
        if ( v4 == a3 || (DonateItem *)v32 != a3 )
        {
          if ( (DonateItem *)v32 == a3 )
          {
            String::String(&v192, "sc/ui.sc");
            String::String(&v191, "arena_popup_heading");
            v57 = StringTable::getMovieClip((#1308 *)&v192, &v191, v56);
            String::~String();
            String::~String();
            v193 = v57;
            v59 = (const String *)StringTable::getString((#1308 *)"TID_YOU_ARE_HERE_ARENA", v58);
            MovieClip::setText(v57, "txt", v59);
            *(__n128 *)&v60 = DisplayObject::setXY(v57, *(float *)(*(_QWORD *)(v5 + 328) + 92LL) * 0.5, *(float *)&v180);
            v61 = ((long double (__fastcall *)(MovieClip *, long double))*(_QWORD *)(*(_QWORD *)v57 + 96LL))(v57, v60);
            v62 = *(float *)&v61;
            ScrollArea::addContentDontUpdateBounds(*(#1253 **)(v5 + 328), v57);
            std::vector<MovieClip *>::push_back(v6, &v193);
            v63 = v180;
            *(float *)&v63 = *(float *)&v180 + v62;
            v180 = v63;
          }
          String::String(&v190, "sc/ui.sc");
          String::String(&v189, "arena_popup_element");
          v199 = StringTable::getMovieClip((#1308 *)&v190, &v189, v64);
          String::~String();
          String::~String();
          if ( v33 == a3 )
          {
            v67 = (MovieClip *)MovieClip::getMovieClipByName(v199, "arena_anim");
            MovieClip::gotoAndPlay(v67, "reached_start", "reached_end");
          }
          else
          {
            TrophyLimit = LogicArenaData::getTrophyLimit(a3);
            if ( TrophyLimit <= (int)LogicArenaData::getTrophyLimit(v33) )
            {
              v68 = (MovieClip *)MovieClip::getMovieClipByName(v199, "arena_anim");
              MovieClip::gotoAndStop(v68, "drop_end");
            }
            else
            {
              v66 = (MovieClip *)MovieClip::getMovieClipByName(v199, "arena_anim");
              MovieClip::gotoAndStop(v66, "active");
            }
          }
          v69 = v199;
          TID = (#1308 *)LogicData::getTID((__int64)v33);
          v72 = StringTable::getString(TID, v71);
          MovieClip::setText(v69, "arena_count", (const String *)v72);
        }
        else
        {
          String::String(&v197, "sc/ui.sc");
          String::String(&v196, "arena_popup_heading");
          v35 = StringTable::getMovieClip((#1308 *)&v197, &v196, v34);
          String::~String();
          String::~String();
          v198 = v35;
          v37 = (const String *)StringTable::getString((#1308 *)"TID_YOU_HAVE_REACHED", v36);
          MovieClip::setText(v35, "txt", v37);
          *(__n128 *)&v38 = DisplayObject::setXY(v35, *(float *)(*(_QWORD *)(v5 + 328) + 92LL) * 0.5, *(float *)&v180);
          v39 = ((long double (__fastcall *)(MovieClip *, long double))*(_QWORD *)(*(_QWORD *)v35 + 96LL))(v35, v38);
          v40 = *(float *)&v39;
          ScrollArea::addContentDontUpdateBounds(*(#1253 **)(v5 + 328), v35);
          std::vector<MovieClip *>::push_back(v6, &v198);
          String::String(&v195, "sc/ui.sc");
          String::String(&v194, "arena_popup_clip");
          v199 = StringTable::getMovieClip((#1308 *)&v195, &v194, v41);
          String::~String();
          String::~String();
          if ( *((_DWORD *)v33 + 27) <= *((_DWORD *)v4 + 27) )
          {
            v43 = (const String *)StringTable::getString((#1308 *)"TID_NEW_ARENA", v42);
            MovieClip::setText(v35, "txt", v43);
          }
          v44 = (MovieClip *)MovieClip::getMovieClipByName(v199, "arena_anim");
          MovieClip::gotoAndPlay(v44, "reached_start", "reached_end");
          v45 = (MovieClip *)MovieClip::getMovieClipByName(v199, "arena_heading");
          v46 = v45;
          if ( v45 )
          {
            MovieClip::playOnce(v45);
            v47 = (MovieClip *)MovieClip::getMovieClipByName(v46, "heading");
            v49 = (const String *)StringTable::getString((#1308 *)"TID_YOU_HAVE_REACHED", v48);
            MovieClip::setText(v47, "reached", v49);
            *((_BYTE *)v46 + 8) = v178;
          }
          v50 = v199;
          v51 = (#1308 *)LogicData::getTID((__int64)v33);
          v53 = StringTable::getString(v51, v52);
          MovieClip::setText(v50, "arena_count", (const String *)v53);
          v55 = v180;
          *(float *)&v55 = *(float *)&v180 + v40;
          v180 = v55;
        }
        if ( v33 == a3 )
          v179 = *(float *)&v180 + (float)((float)*(int *)(Stage::getInstance(v54) + 432LL) * 0.5);
        v73 = (MovieClip *)MovieClip::getMovieClipByName(v199, "cards_to_find");
        MovieClip::playOnce(v73);
        *((_BYTE *)v73 + 64) = 1;
        v74 = (_BYTE *)MovieClip::getMovieClipByName(v73, "unlock_info");
        v74[64] = 1;
        v75 = v199;
        *((_BYTE *)v199 + 64) = 1;
        LODWORD(v76) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(#1249 *))*(_QWORD *)(*(_QWORD *)v75 + 96LL))(v75));
        v77 = LogicArenaData::getTrophyLimit(v33);
        if ( (unsigned int)LogicArenaData::isTrainingCamp(v33) )
        {
          if ( MovieClip::getMovieClipByName(v199, "deco") )
            *(_BYTE *)(MovieClip::getMovieClipByName(v199, "deco") + 8) = 0;
          if ( MovieClip::getMovieClipByName(v199, "trophies") )
            *(_BYTE *)(MovieClip::getMovieClipByName(v199, "trophies") + 8) = 0;
        }
        v78 = (MovieClip *)MovieClip::getMovieClipByName(v199, "trophies");
        String::format((String *)"%d+", v79, v77);
        MovieClip::setText(v78, "count", &v188);
        String::~String();
        v80 = (DataIcon *)operator new(112);
        DataIcon::DataIcon(v80, v33);
        v187 = v80;
        IconClip = (#1249 *)DataIcon::getIconClip(v80);
        v82 = (#1257 *)MovieClip::getMovieClipByName(v199, "arena_anim");
        MovieClip::changeTimelineChild(v82, "arena_graphic", IconClip);
        v83 = v199;
        SubtitleTID = (#1308 *)LogicArenaData::getSubtitleTID(v33);
        v86 = StringTable::getString(SubtitleTID, v85);
        MovieClip::setText(v83, "arena", (const String *)v86);
        v87 = (TextField *)MovieClip::getTextFieldByName(v199, "arena");
        MovieClipHelper::scaleSingleLineText(v87, v88);
        ScrollArea::addContentDontUpdateBounds(*(#1253 **)(v5 + 328), v199);
        v89 = v199;
        Width = Rect::getWidth(&v200);
        *(__n128 *)&v91 = DisplayObject::setXY(v89, *(float *)&Width * 0.5, *(float *)&v180);
        v92 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(#1249 *, long double))*(_QWORD *)(*(_QWORD *)v199 + 96LL))(v199, v91)));
        std::vector<MovieClip *>::push_back(v6, &v199);
        std::vector<DataIcon *>::push_back(v7, &v187);
        (*(void (__fastcall **)(#1249 *))(*(_QWORD *)v199 + 96LL))(v199);
        v93 = 0;
        v94 = v180;
        *(float *)&v94 = *(float *)&v180 + v92;
        v180 = v94;
        do
        {
          Rect::Rect((Rect *)&v205[v93]);
          v93 += 16;
        }
        while ( v93 != 64 );
        v95 = MovieClip::getTextFieldByName(v74, "card_area_01");
        DisplayObject::getBounds(v95, v74, v205);
        v96 = MovieClip::getTextFieldByName(v74, "card_area_02");
        DisplayObject::getBounds(v96, v74, &v205[16]);
        v97 = MovieClip::getTextFieldByName(v74, "card_area_03");
        DisplayObject::getBounds(v97, v74, &v205[32]);
        v98 = MovieClip::getTextFieldByName(v74, "card_area_04");
        DisplayObject::getBounds(v98, v74, &v205[48]);
        v185 = 0;
        v186 = 16;
        v165 = a3;
        v185 = (void *)operator new[](128);
        SpellCount = LogicDataTables::getSpellCount();
        v101 = (unsigned int)(SpellCount - 1);
        if ( SpellCount < 1 )
        {
          v104 = 0;
        }
        else
        {
          do
          {
            SpellAt = (InitState *)LogicDataTables::getSpellAt(v101);
            v184 = SpellAt;
            if ( (const AreaEffectObject *)LogicSpellData::getUnlockArena(SpellAt) == v33
              && (LogicSpellData::isNotInUse(SpellAt) & 1) == 0 )
            {
              LogicArrayList<LogicSpellData const*>::add((__int64)&v185, (__int64 *)&v184);
            }
            v103 = v101 + 1;
            v101 = (unsigned int)(v101 - 1);
          }
          while ( v103 > 1 );
          v104 = HIDWORD(v186);
        }
        v105 = 0;
        v106 = 1;
        do
        {
    LABEL_44:
          v171 = v106;
          v113 = v105;
          v114 = v105 + 1;
          while ( v113 < v104 - 1 )
          {
            v107 = v185;
            v108 = (InitState *)*((_QWORD *)v185 + v113);
            v109 = *(InitState **)((char *)v185 + v114 * 8);
            Rarity = LogicSpellData::getRarity(v108);
            SortOrder = LogicRarityData::getSortOrder(Rarity);
            v112 = LogicSpellData::getRarity(v109);
            ++v113;
            ++v114;
            if ( SortOrder > (int)LogicRarityData::getSortOrder(v112) )
            {
              v106 = 0;
              v107[v113 - 1] = v109;
              v107[v114 - 1] = v108;
              v105 = v113;
              goto LABEL_44;
            }
          }
          v105 = 0;
          v106 = 1;
        }
        while ( (v171 & 1) == 0 );
        if ( !v104 )
        {
          *((_BYTE *)v73 + 8) = 0;
          v6 = v173;
          v5 = a1;
          v7 = v175;
          goto LABEL_68;
        }
        v6 = v173;
        v5 = a1;
        v7 = v175;
        if ( v104 < 17 )
        {
          if ( v104 < 1 )
            goto LABEL_68;
        }
        else
        {
          Debugger::warning((__siginfo *)"ARENA CHANGED: cannot fit all spells to popup!!", v100);
        }
        if ( (v104 & 3) != 0 )
          v115 = (v104 >> 2) + 1;
        else
          v115 = v104 >> 2;
        v161 = v115;
        if ( v115 >= 1 )
        {
          v163 = 0;
          v116 = 0;
          v117 = v104;
          v158 = v115;
          v159 = v104;
          do
          {
            v175 = v7;
            v118 = v117 - 4 * v116;
            if ( v118 >= 4 )
              v119 = 4;
            else
              v119 = v118;
            v120 = (float *)&v205[16 * v116];
            LODWORD(v121) = COERCE_UNSIGNED_INT128(Rect::getWidth(v120));
            v122 = Rect::getWidth(v120);
            v160 = v116;
            if ( v119 >= 1 )
            {
              v172 = 0;
              v123 = v121 * 0.25;
              v124 = (float)((float)((float)((float)(4 - v119) * *(float *)&v122) * 0.25) * 0.5) + 0.0;
              v125 = (float)(v121 * 0.25) * 0.5;
              v162 = v119;
              v126 = v163;
              do
              {
                v164 = v126;
                v127 = *(ChatStreamItem **)((char *)v185 + v126);
                v128 = *v120;
                MidY = Rect::getMidY(v120);
                v130 = *(float *)&MidY;
                DummySpell = (const LogicSpell *)ArenaChangedPopup::createDummySpell(v127, v131);
                v183 = DummySpell;
                v133 = LogicArenaData::getTrophyLimit(v165);
                if ( v133 >= (int)LogicArenaData::getTrophyLimit(v33) )
                {
                  v135 = 9;
                }
                else
                {
                  v134 = LogicSpellData::getRarity(v127);
                  if ( v134 == LogicDataTables::getRarityEpic() )
                    v135 = 10;
                  else
                    v135 = 11;
                }
                v136 = (DisplayObject *)operator new(464);
                SpellItem::SpellItem((__int64)v136, DummySpell, v135, 1);
                v182 = v136;
                DisplayObject::setPixelSnappedXY(
                  v136,
                  v125 + (float)((float)(v123 * (float)(int)v172) + (float)(v124 + v128)),
                  v130);
                v137 = *(void (__fastcall **)(DisplayObject *, float))(*(_QWORD *)v136 + 40LL);
                v138 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getHeight(v120)));
                v139 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v136 + 96LL))(v136);
                v137(v136, v138 / v139);
                *(__n128 *)&v140 = CustomButton::setButtonListener(v136, v169);
                (*(void (__fastcall **)(_BYTE *, DisplayObject *, long double))(*(_QWORD *)v74 + 160LL))(v74, v136, v140);
                LogicArrayList<LogicSpell *>::add(v177, (__int64 *)&v183);
                LogicArrayList<SpellItem *>::add(v176, (__int64 *)&v182);
                ++v172;
                v126 = v164 + 8;
              }
              while ( v172 < v162 );
            }
            ++v116;
            v163 += 32;
            v7 = v175;
            v115 = v161;
            v117 = v159;
          }
          while ( v160 + 1 < v158 );
        }
        Rect::getHeight(v205);
        v141 = Rect::getHeight(v205);
        v142 = v180;
        *(float *)&v142 = *(float *)&v180 - (float)((float)(3 - v115) * *(float *)&v141);
        v180 = v142;
    LABEL_68:
        a3 = v165;
        if ( v185 )
          operator delete[](v185);
        v143 = 0;
        v185 = 0;
        v186 = 0;
        do
        {
          Rect::~Rect((Rect *)&v205[v143 + 48]);
          v143 -= 16;
        }
        while ( v143 != -64 );
        v4 = a2;
        if ( MovieClip::getMovieClipByName(v199, "darken") )
          *(_BYTE *)(MovieClip::getMovieClipByName(v199, "darken") + 8) = 0;
        v144 = (*(__int64 (**)(void))(*(_QWORD *)v167 + 32LL))();
        v146 = v166;
        if ( v166 < v144 - 1 )
        {
          v147 = (#1249 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "arena_popup_divider", v145);
          v181 = v147;
          v148 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(#1249 *))*(_QWORD *)(*(_QWORD *)v147 + 96LL))(v147)));
          ScrollArea::addContentDontUpdateBounds(*(#1253 **)(v5 + 328), v147);
          v149 = *(float *)&v180 + (float)(v148 * 0.5);
          *(__n128 *)&v150 = DisplayObject::setXY(v147, *(float *)(*(_QWORD *)(v5 + 328) + 92LL) * 0.5, v149);
          v151 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(#1249 *, long double))*(_QWORD *)(*(_QWORD *)v147 + 96LL))(v147, v150)));
          std::vector<MovieClip *>::push_back(v6, &v181);
          *(float *)&v152 = v149 + (float)(v151 * 0.5);
          v180 = v152;
          v146 = v166;
        }
        v30 = v146 + 1;
        v170 = v76 * 0.5;
        Table = v167;
      }
      v153 = *(#1253 **)(v5 + 328);
      ScrollArea::getScale(v153);
      ScrollArea::scrollTo(v153, 0.0, v179, v154, 0.0);
      v155 = operator new(16);
      Rect::Rect((Rect *)v155);
      *(_QWORD *)v155 = 0;
      v156 = *(ScrollArea **)(v5 + 328);
      *(_DWORD *)(v155 + 8) = *((_DWORD *)v156 + 23);
      *(float *)(v155 + 12) = v170 + *(float *)&v180;
      ScrollArea::setForcedContentBounds(v156, (Rect *)v155);
      Rect::~Rect((Rect *)&v200);
      return v5;
    }

    LogicSpell *__fastcall ArenaChangedPopup::createDummySpell(ChatStreamItem *this, const InitState *a2)
    {
      LogicSpell *v3; // x19
      const char *v4; // x2
    
      v3 = (LogicSpell *)operator new(48);
      LogicSpell::LogicSpell(v3);
      LogicSpell::setSpellData(v3, (__int64)this);
      *((_DWORD *)v3 + 2) = 0;
      LogicSpell::setMaterialCount(v3, 0, v4);
      return v3;
    }

    // attributes: thunk
    void __fastcall ArenaChangedPopup::ArenaChangedPopup(ArenaChangedPopup *this, DonateItem *a2, DonateItem *a3)
    {
      __ZN17ArenaChangedPopupC2EPK14LogicArenaDataS2_((__int64)this, a2, a3);
    }

    void __fastcall ArenaChangedPopup::~ArenaChangedPopup(ChatStreamItem *this, __int64 a2, const char *a3)
    {
      __int64 v4; // x0
      _QWORD *v5; // x21
      __int64 v6; // x8
      __int64 v7; // x22
      void *v8; // x20
      __int64 v9; // x8
      _QWORD *v10; // x20
      __int64 v11; // x8
      __int64 v12; // x22
      __int64 v13; // x0
      __int64 v14; // x8
      __int64 v15; // x8
      __int64 v16; // x22
      unsigned int v17; // w23
      __int64 v18; // x0
      __int64 v19; // x8
      __int64 v20; // x22
      unsigned int v21; // w23
      __int64 v22; // x0
      __int64 v23; // x0
      __int64 v24; // x0
      void *v25; // x0
      void *v26; // x0
    
      *(_QWORD *)this = off_100471BC0;
      *((_QWORD *)this + 12) = &off_100471D98;
      v4 = *((_QWORD *)this + 30);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 30) = 0;
      v5 = (_QWORD *)((char *)this + 248);
      v6 = *((int *)this + 65);
      if ( (int)v6 >= 1 )
      {
        v7 = v6 - 1;
        do
        {
          v8 = *(void **)(*v5 + 8 * v7);
          if ( v8 )
          {
            LogicSpell::destruct(*(TextField **)(*v5 + 8 * v7));
            operator delete(v8);
          }
          v9 = v7-- + 1;
        }
        while ( v9 > 1 );
      }
      *((_DWORD *)this + 65) = 0;
      v10 = (_QWORD *)((char *)this + 264);
      v11 = *((int *)this + 69);
      if ( (int)v11 >= 1 )
      {
        v12 = v11 - 1;
        do
        {
          v13 = *(_QWORD *)(*v10 + 8 * v12);
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          v14 = v12-- + 1;
        }
        while ( v14 > 1 );
      }
      *((_DWORD *)this + 69) = 0;
      v15 = *((_QWORD *)this + 38);
      if ( *((_QWORD *)this + 39) != v15 )
      {
        v16 = 0;
        v17 = 0;
        do
        {
          v18 = *(_QWORD *)(v15 + 8 * v16);
          do
          {
            if ( v18 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
              v15 = *((_QWORD *)this + 38);
            }
            *(_QWORD *)(v15 + 8 * v16) = 0;
            v15 = *((_QWORD *)this + 38);
            v18 = *(_QWORD *)(v15 + 8 * v16);
          }
          while ( v18 );
          v16 = ++v17;
        }
        while ( v17 < (unsigned __int64)((*((_QWORD *)this + 39) - v15) >> 3) );
      }
      *((_QWORD *)this + 39) = v15;
      v19 = *((_QWORD *)this + 35);
      if ( *((_QWORD *)this + 36) != v19 )
      {
        v20 = 0;
        v21 = 0;
        do
        {
          v22 = *(_QWORD *)(v19 + 8 * v20);
          do
          {
            if ( v22 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
              v19 = *((_QWORD *)this + 35);
            }
            *(_QWORD *)(v19 + 8 * v20) = 0;
            v19 = *((_QWORD *)this + 35);
            v22 = *(_QWORD *)(v19 + 8 * v20);
          }
          while ( v22 );
          v20 = ++v21;
        }
        while ( v21 < (unsigned __int64)((*((_QWORD *)this + 36) - v19) >> 3) );
      }
      *((_QWORD *)this + 36) = v19;
      v23 = *((_QWORD *)this + 41);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      *((_QWORD *)this + 41) = 0;
      v24 = *((_QWORD *)this + 29);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      *((_DWORD *)this + 65) = 0;
      *((_DWORD *)this + 69) = 0;
      *((_QWORD *)this + 41) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 30) = 0;
      v25 = (void *)*((_QWORD *)this + 38);
      if ( v25 )
        operator delete(v25);
      v26 = (void *)*((_QWORD *)this + 35);
      if ( v26 )
        operator delete(v26);
      if ( *v10 )
        operator delete[](*v10);
      *v10 = 0;
      *((_QWORD *)this + 34) = 0;
      if ( *v5 )
        operator delete[](*v5);
      *v5 = 0;
      *((_QWORD *)this + 32) = 0;
      PopupBase::~PopupBase(this, a2, a3);
    }

    // attributes: thunk
    void __fastcall ArenaChangedPopup::~ArenaChangedPopup(ChatStreamItem *this, __int64 a2, const char *a3)
    {
      __ZN17ArenaChangedPopupD2Ev(this, a2, a3);
    }

    void __fastcall ArenaChangedPopup::~ArenaChangedPopup(ChatStreamItem *a1, __int64 a2, const char *a3)
    {
      ArenaChangedPopup::~ArenaChangedPopup(a1, a2, a3);
      operator delete(a1);
    }

    void __fastcall ArenaChangedPopup::buttonClicked(__int64 a1, __int64 a2)
    {
      int v4; // w8
      __int64 i; // x21
      vm_address_t *Instance; // x0
    
      v4 = *(_DWORD *)(a1 + 276);
      if ( v4 >= 1 )
      {
        for ( i = 0; i < v4; ++i )
        {
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * i) == a2 )
          {
            Instance = (vm_address_t *)GUI::getInstance((BadgePopup *)a1);
            GUI::openSpellInfo(Instance, *(const TextField **)(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * i) + 304LL), 0);
            v4 = *(_DWORD *)(a1 + 276);
          }
        }
      }
      if ( *(_QWORD *)(a1 + 240) == a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
    }

    __int64 __fastcall ArenaChangedPopup::update(__int64 a1, long double a2)
    {
      BadgePopup *v4; // x0
      BadgePopup *Instance; // x0
      __int64 result; // x0
    
      PopupBase::update((MiniTimer *)a1, a2);
      v4 = (BadgePopup *)(*(__int64 (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 328) + 272LL))(
                           *(_QWORD *)(a1 + 328),
                           a2);
      *(_BYTE *)(a1 + 64) = 1;
      Instance = (BadgePopup *)GUI::getInstance(v4);
      result = GUI::getTopPopup(Instance);
      if ( result != a1 )
        *(_BYTE *)(a1 + 64) = 0;
      return result;
    }

    __int64 __fastcall ArenaChangedPopup::allowClosingFromModalTapping(ChatStreamItem *this)
    {
      return 1;
    }

    __int64 __fastcall ArenaChangedPopup::useModal(ChatStreamItem *this)
    {
      return 1;
    }

    __int64 __fastcall ArenaChangedPopup::getPopupType(ChatStreamItem *this)
    {
      return 25;
    }

}; // end class ArenaChangedPopup
