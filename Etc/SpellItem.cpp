class SpellItem
{
public:

    String *__usercall SpellItem::getExportNameForType@<X0>(int a1@<W0>, String *a2@<X8>)
    {
      String *result; // x0
    
      switch ( a1 )
      {
        case 0:
        case 3:
          result = String::String(a2, "spell_card_ingame");
          break;
        case 4:
        case 11:
          result = String::String(a2, "spell_card_locked");
          break;
        case 10:
          result = String::String(a2, "spell_card_locked_arena");
          break;
        default:
          result = String::String(a2, "spell_card_full");
          break;
      }
      return result;
    }

    __int64 __fastcall SpellItem::SpellItem(__int64 a1, const LogicSpell *a2, int a3, char a4)
    {
      const String *v8; // x2
      #1257 *MovieClip; // x23
      MovieClip *MovieClipByName; // x0
      __int64 v11; // x24
      __int64 v12; // x0
      __int64 v13; // x27
      __int64 TextFieldByName; // x0
      __int64 v15; // x0
      __int64 v16; // x0
      __int64 v17; // x26
      GameButton *v18; // x27
      DisplayObject *v19; // x26
      long double v20; // q0
      float v21; // s8
      long double v22; // q0
      float v23; // s9
      long double v24; // q0
      float v25; // s10
      long double v26; // q0
      MovieClip *v27; // x26
      const char *v28; // x1
      const String *String; // x0
      __int64 v30; // x0
      __int64 v31; // x0
      __int64 v32; // x0
      __int64 v33; // x0
      __int64 v34; // x0
      __int64 v35; // x0
      __int64 v36; // x0
      __int64 v37; // x0
      __int64 v38; // x0
      __int64 v39; // x0
      __int64 v40; // x23
      __int64 v41; // x26
      int8x16_t v42; // q0
      DisplayObject *v43; // x23
      long double v44; // q0
      float v45; // s8
      long double v46; // q0
      float v47; // s9
      long double v48; // q0
      float v49; // s10
      long double v50; // q0
      MovieClip *v51; // x23
      const char *v52; // x1
      const String *v53; // x0
      __int64 v54; // x23
      GameButton *v55; // x26
      DisplayObject *v56; // x23
      float v57; // s8
      float v58; // s9
      float v59; // s10
      long double v60; // q0
      MovieClip *v61; // x23
      const char *v62; // x1
      const String *v63; // x0
      #1257 *v64; // x1
      __int64 v66; // x0
      __int64 v67; // x0
      __int64 v68; // x0
      __int64 v69; // x0
      __int64 v70; // x0
      __int64 v71; // x0
      __int64 v72; // x0
      __int64 v73; // x0
      __int64 v74; // x0
      __int64 v75; // x0
      __int64 v76; // x0
      __int64 v77; // x0
      __int64 v78; // x0
      __int64 v79; // x0
      __int64 v80; // x0
      __int64 v81; // x0
      __int64 v82; // x0
      __int64 v83; // x0
      __int64 v84; // x0
      __int64 v85; // x0
      __int64 v86; // x0
      __int64 v87; // x0
      __int64 v88; // x0
      __int64 v89; // x0
      __int64 v90; // x0
      __int64 v91; // x0
      __int64 v92; // x0
      __int64 v93; // x0
      __int64 v94; // x0
      __int64 v95; // x0
      __int64 v96; // x0
      __int64 v97; // x0
      __int64 v98; // x0
      __int64 v99; // x0
      __int64 v100; // x0
      __int64 v101; // x0
      __int64 v102; // x0
      __int64 v103; // x0
      __int64 v104; // x0
      __int64 v105; // x0
      String v106; // [xsp+0h] [xbp-A0h] BYREF
      String v107; // [xsp+18h] [xbp-88h] BYREF
    
      GameButton::GameButton((GameButton *)a1);
      LogicSpellListener::LogicSpellListener((_QWORD *)(a1 + 264));
      *(_QWORD *)a1 = off_10046EEC0;
      *(_QWORD *)(a1 + 264) = off_10046F060;
      *(_QWORD *)(a1 + 272) = &off_10046F0C0;
      Rect::Rect((Rect *)(a1 + 328));
      *(_DWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      *(_BYTE *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      *(_QWORD *)(a1 + 368) = 0;
      *(_QWORD *)(a1 + 376) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      *(_QWORD *)(a1 + 440) = 0;
      *(_QWORD *)(a1 + 448) = 0;
      *(_QWORD *)(a1 + 424) = 0;
      *(_QWORD *)(a1 + 432) = 0;
      *(_QWORD *)(a1 + 408) = 0;
      *(_QWORD *)(a1 + 416) = 0;
      *(_QWORD *)(a1 + 392) = 0;
      *(_QWORD *)(a1 + 400) = 0;
      *(_DWORD *)(a1 + 384) = a3;
      *(_QWORD *)(a1 + 408) = &sm_nullListener;
      SpellItem::getExportNameForType(a3, &v107);
      MovieClip = (#1257 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", (const char *)&v107, v8);
      *(_QWORD *)(a1 + 312) = MovieClip;
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "frame");
      *(_QWORD *)(a1 + 392) = MovieClipByName;
      if ( MovieClipByName )
        MovieClip::gotoAndStopFrameIndex(MovieClipByName, 0);
      v11 = MovieClip::getMovieClipByName(MovieClip, "selected");
      v12 = MovieClip::getMovieClipByName(MovieClip, "selected_in_use");
      v13 = v12;
      if ( v12 )
        *(_BYTE *)(v12 + 8) = 0;
      if ( a3 == 4 )
      {
    LABEL_126:
        (*(void (__fastcall **)(__int64, #1257 *, __int64))(*(_QWORD *)a1 + 280LL))(a1, MovieClip, 1);
      }
      else if ( a3 == 11 )
      {
        (*(void (__fastcall **)(__int64, #1257 *, __int64))(*(_QWORD *)a1 + 280LL))(a1, MovieClip, 1);
        TextFieldByName = MovieClip::getTextFieldByName(MovieClip, "TID_UNLOCKS_AT");
        if ( TextFieldByName )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)TextFieldByName + 8LL))(TextFieldByName);
        v15 = MovieClip::getTextFieldByName(MovieClip, "arena");
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        v16 = MovieClip::getMovieClipByName(MovieClip, "darken");
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      }
      else if ( (unsigned int)(a3 - 5) > 1 )
      {
        switch ( *(_DWORD *)(a1 + 384) )
        {
          case 0:
          case 3:
            goto LABEL_126;
          case 1:
            v66 = MovieClip::getMovieClipByName(MovieClip, "new_count");
            if ( v66 )
              *(_BYTE *)(v66 + 8) = 0;
            v67 = MovieClip::getMovieClipByName(MovieClip, "new_tag");
            if ( v67 )
              *(_BYTE *)(v67 + 8) = 0;
            v68 = MovieClip::getMovieClipByName(MovieClip, "selected");
            if ( v68 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 8LL))(v68);
            v69 = MovieClip::getTextFieldByName(MovieClip, "card_name");
            if ( v69 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 8LL))(v69);
            goto LABEL_126;
          case 2:
            v70 = MovieClip::getMovieClipByName(MovieClip, "new_count");
            if ( v70 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8LL))(v70);
            v71 = MovieClip::getMovieClipByName(MovieClip, "new_tag");
            if ( v71 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 8LL))(v71);
            v72 = MovieClip::getMovieClipByName(MovieClip, "selected");
            if ( v72 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 8LL))(v72);
            v73 = MovieClip::getMovieClipByName(MovieClip, "Progress");
            if ( v73 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
            v74 = MovieClip::getTextFieldByName(MovieClip, "card_level");
            if ( v74 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 8LL))(v74);
            v75 = MovieClip::getTextFieldByName(MovieClip, "card_level_small");
            if ( v75 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 8LL))(v75);
            v76 = MovieClip::getMovieClipByName(MovieClip, "card_info_bg");
            if ( v76 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 8LL))(v76);
            v77 = MovieClip::getTextFieldByName(MovieClip, "card_name");
            if ( v77 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 8LL))(v77);
            v78 = MovieClip::getMovieClipByName(MovieClip, "elixar_count");
            if ( v78 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 8LL))(v78);
            goto LABEL_126;
          case 4:
          case 0xA:
          case 0xB:
            v30 = MovieClip::getMovieClipByName(MovieClip, "new_count");
            if ( v30 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
            v31 = MovieClip::getMovieClipByName(MovieClip, "new_tag");
            if ( v31 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
            v32 = MovieClip::getMovieClipByName(MovieClip, "selected");
            if ( v32 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
            v33 = MovieClip::getMovieClipByName(MovieClip, "Progress");
            if ( v33 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
            v34 = MovieClip::getMovieClipByName(MovieClip, "card_info_bg");
            if ( v34 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
            v35 = MovieClip::getMovieClipByName(MovieClip, "elixar_count");
            if ( v35 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
            v36 = MovieClip::getMovieClipByName(MovieClip, "card_txt_bg");
            if ( v36 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
            goto LABEL_126;
          case 7:
            v79 = MovieClip::getMovieClipByName(MovieClip, "new_count");
            if ( v79 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 8LL))(v79);
            v80 = MovieClip::getMovieClipByName(MovieClip, "new_tag");
            if ( v80 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 8LL))(v80);
            v81 = MovieClip::getMovieClipByName(MovieClip, "selected");
            if ( v81 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 8LL))(v81);
            v82 = MovieClip::getMovieClipByName(MovieClip, "Progress");
            if ( v82 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 8LL))(v82);
            v83 = MovieClip::getMovieClipByName(MovieClip, "card_info_bg");
            if ( v83 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 8LL))(v83);
            v84 = MovieClip::getMovieClipByName(MovieClip, "elixar_count");
            if ( v84 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 8LL))(v84);
            v85 = MovieClip::getTextFieldByName(MovieClip, "card_level");
            if ( v85 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 8LL))(v85);
            v86 = MovieClip::getTextFieldByName(MovieClip, "card_name");
            if ( v86 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 8LL))(v86);
            v87 = MovieClip::getMovieClipByName(MovieClip, "card_txt_bg");
            if ( v87 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 8LL))(v87);
            String::String(&v106, "lvl.xy");
            MovieClip::setText(MovieClip, "card_level_small", &v106);
            String::~String();
            (*(void (__fastcall **)(__int64, #1257 *, __int64))(*(_QWORD *)a1 + 280LL))(a1, MovieClip, 1);
            break;
          case 8:
            v88 = MovieClip::getMovieClipByName(MovieClip, "new_count");
            if ( v88 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 8LL))(v88);
            v89 = MovieClip::getMovieClipByName(MovieClip, "new_tag");
            if ( v89 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 8LL))(v89);
            v90 = MovieClip::getMovieClipByName(MovieClip, "selected");
            if ( v90 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v90 + 8LL))(v90);
            v91 = MovieClip::getTextFieldByName(MovieClip, "card_name");
            if ( v91 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v91 + 8LL))(v91);
            v92 = MovieClip::getTextFieldByName(MovieClip, "card_level");
            if ( v92 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 8LL))(v92);
            v93 = MovieClip::getTextFieldByName(MovieClip, "card_level_small");
            if ( v93 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 8LL))(v93);
            v94 = MovieClip::getMovieClipByName(MovieClip, "card_txt_bg");
            if ( v94 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 8LL))(v94);
            v95 = MovieClip::getMovieClipByName(MovieClip, "card_info_bg");
            if ( v95 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 8LL))(v95);
            goto LABEL_126;
          case 9:
            v96 = MovieClip::getMovieClipByName(MovieClip, "new_count");
            if ( v96 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 8LL))(v96);
            v97 = MovieClip::getMovieClipByName(MovieClip, "new_tag");
            if ( v97 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 8LL))(v97);
            v98 = MovieClip::getMovieClipByName(MovieClip, "selected");
            if ( v98 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 8LL))(v98);
            v99 = MovieClip::getMovieClipByName(MovieClip, "Progress");
            if ( v99 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 8LL))(v99);
            v100 = MovieClip::getTextFieldByName(MovieClip, "card_level");
            if ( v100 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 8LL))(v100);
            v101 = MovieClip::getTextFieldByName(MovieClip, "card_level_small");
            if ( v101 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 8LL))(v101);
            v102 = MovieClip::getMovieClipByName(MovieClip, "elixar_count");
            if ( v102 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 8LL))(v102);
            v103 = MovieClip::getMovieClipByName(MovieClip, "card_txt_bg");
            if ( v103 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 8LL))(v103);
            v104 = MovieClip::getMovieClipByName(MovieClip, "card_info_bg");
            if ( v104 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 8LL))(v104);
            v105 = MovieClip::getTextFieldByName(MovieClip, "card_name");
            if ( v105 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 8LL))(v105);
            goto LABEL_126;
          default:
            v37 = MovieClip::getMovieClipByName(MovieClip, "selected");
            if ( v37 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
            goto LABEL_126;
        }
      }
      else
      {
        (*(void (__fastcall **)(__int64, #1257 *, __int64))(*(_QWORD *)a1 + 280LL))(a1, MovieClip, 1);
        if ( a3 == 6 )
        {
          v17 = MovieClip::getMovieClipByName((#1257 *)v11, "button_select");
          *(_BYTE *)(v17 + 64) = 1;
          v18 = (GameButton *)operator new(264);
          GameButton::GameButton(v18);
          *(_QWORD *)(a1 + 432) = v18;
          *((_BYTE *)v18 + 64) = 1;
          (*(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v18 + 280LL))(v18, v17, 1);
          CustomButton::setButtonListener(*(_QWORD *)(a1 + 432), a1 + 272);
          v19 = *(DisplayObject **)(a1 + 432);
          v20 = DisplayObject::getX(v19);
          v21 = *(float *)&v20;
          v22 = DisplayObject::getX(v11);
          v23 = *(float *)&v22;
          v24 = DisplayObject::getY(*(_QWORD *)(a1 + 432));
          v25 = *(float *)&v24;
          v26 = DisplayObject::getY(v11);
          DisplayObject::setPixelSnappedXY(v19, v21 + v23, v25 + *(float *)&v26);
          v27 = *(MovieClip **)(*(_QWORD *)(a1 + 432) + 96LL);
          String = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_SELECT", v28);
          MovieClip::setText(v27, "button_text", String);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 432));
        }
        else
        {
          *(_BYTE *)(v13 + 8) = 1;
          *(_BYTE *)(v11 + 8) = 0;
          v11 = v13;
        }
        v38 = MovieClip::getMovieClipByName(MovieClip, "new_count");
        if ( v38 )
          *(_BYTE *)(v38 + 8) = 0;
        v39 = MovieClip::getMovieClipByName(MovieClip, "new_tag");
        if ( v39 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
        v40 = MovieClip::getMovieClipByName((#1257 *)v11, "button_upgrade");
        *(_BYTE *)(v40 + 64) = 1;
        v41 = operator new(264);
        GameButton::GameButton((GameButton *)v41);
        *(_QWORD *)(a1 + 416) = v41;
        *(_BYTE *)(v41 + 64) = 1;
        v42 = *(int8x16_t *)(v40 + 16);
        *(_QWORD *)(v41 + 16) = v42.i64[0];
        *(_QWORD *)(v41 + 24) = vextq_s8(v42, v42, 8u).u64[0];
        *(_DWORD *)(v41 + 32) = *(_DWORD *)(v40 + 32);
        *(_DWORD *)(v41 + 36) = *(_DWORD *)(v40 + 36);
        *(_DWORD *)(v40 + 16) = 1065353216;
        *(_DWORD *)(v40 + 28) = 1065353216;
        *(_DWORD *)(v40 + 20) = 0;
        *(_DWORD *)(v40 + 24) = 0;
        *(_QWORD *)(v40 + 32) = 0;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v41 + 280LL))(v41, v40, 1);
        CustomButton::setButtonListener(*(_QWORD *)(a1 + 416), a1 + 272);
        v43 = *(DisplayObject **)(a1 + 416);
        v44 = DisplayObject::getX(v43);
        v45 = *(float *)&v44;
        v46 = DisplayObject::getX(v11);
        v47 = *(float *)&v46;
        v48 = DisplayObject::getY(*(_QWORD *)(a1 + 416));
        v49 = *(float *)&v48;
        v50 = DisplayObject::getY(v11);
        DisplayObject::setPixelSnappedXY(v43, v45 + v47, v49 + *(float *)&v50);
        v51 = *(MovieClip **)(*(_QWORD *)(a1 + 416) + 96LL);
        v53 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_UPGRADE", v52);
        MovieClip::setText(v51, "button_text", v53);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 416));
        v54 = MovieClip::getMovieClipByName((#1257 *)v11, "button_info");
        *(_BYTE *)(v54 + 64) = 1;
        v55 = (GameButton *)operator new(264);
        GameButton::GameButton(v55);
        *(_QWORD *)(a1 + 424) = v55;
        *((_BYTE *)v55 + 64) = 1;
        (*(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v55 + 280LL))(v55, v54, 1);
        CustomButton::setButtonListener(*(_QWORD *)(a1 + 424), a1 + 272);
        v56 = *(DisplayObject **)(a1 + 424);
        v57 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(v56)));
        v58 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(v11)));
        v59 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(*(_QWORD *)(a1 + 424))));
        v60 = DisplayObject::getY(v11);
        DisplayObject::setPixelSnappedXY(v56, v57 + v58, v59 + *(float *)&v60);
        v61 = *(MovieClip **)(*(_QWORD *)(a1 + 424) + 96LL);
        v63 = (const String *)StringTable::getString((#1308 *)"TID_BUTTON_INFO", v62);
        MovieClip::setText(v61, "button_text", v63);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, *(_QWORD *)(a1 + 424));
      }
      *(_QWORD *)(a1 + 360) = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "elixar_count");
      DisplayObject::getBounds(*(_QWORD *)(a1 + 96), 0, a1 + 328);
      *(_BYTE *)(a1 + 443) = a4;
      DropGUIContainer::putLocalizedTIDsToTextFields(*(#1375 **)(a1 + 96), v64);
      SpellItem::setSpell((SpellItem *)a1, a2);
      String::~String();
      return a1;
    }

    __int64 __fastcall SpellItem::setSpell(__int64 a1, TextField *a2)
    {
      __int64 result; // x0
      bool v5; // w8
      __int64 ScrollOpenSound; // x0
      __int64 v7; // x8
      __int64 v8; // x8
    
      if ( a2 )
      {
        result = LogicSpell::getSpellData(a2);
        v5 = result != 0;
      }
      else
      {
        result = GameButton::setClickSound(a1, 0);
        v5 = 0;
      }
      *(_BYTE *)(a1 + 64) = v5;
      if ( *(TextField **)(a1 + 304) != a2 )
      {
        *(_QWORD *)(a1 + 304) = a2;
        if ( a2 )
        {
          ScrollOpenSound = LogicDataTables::getScrollOpenSound();
          GameButton::setClickSound(a1, ScrollOpenSound);
          result = SpellItem::setBasicSpellInfo((SpellItem *)a1, *(MovieClip **)(a1 + 312), a2);
          v7 = *(_QWORD *)(a1 + 424);
          if ( v7 )
            *(_BYTE *)(v7 + 8) = 1;
          v8 = *(_QWORD *)(a1 + 416);
          if ( v8 )
            *(_BYTE *)(v8 + 8) = 0;
        }
      }
      return result;
    }

    // attributes: thunk
    __int64 __fastcall SpellItem::SpellItem(__int64 a1, const LogicSpell *a2, int a3, char a4)
    {
      return __ZN9SpellItemC2EPK10LogicSpellNS_8ItemTypeEb(a1, a2, a3, a4);
    }

    void __fastcall SpellItem::~SpellItem(__int64 a1)
    {
      *(_QWORD *)a1 = off_10046EEC0;
      *(_QWORD *)(a1 + 264) = off_10046F060;
      *(_QWORD *)(a1 + 272) = &off_10046F0C0;
      SpellItem::destructInternal((InboxItem *)a1);
      *(_DWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      *(_BYTE *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      *(_DWORD *)(a1 + 384) = 0;
      *(_QWORD *)(a1 + 368) = 0;
      *(_QWORD *)(a1 + 376) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      *(_QWORD *)(a1 + 440) = 0;
      *(_QWORD *)(a1 + 448) = 0;
      *(_QWORD *)(a1 + 424) = 0;
      *(_QWORD *)(a1 + 432) = 0;
      *(_QWORD *)(a1 + 408) = 0;
      *(_QWORD *)(a1 + 416) = 0;
      *(_QWORD *)(a1 + 392) = 0;
      *(_QWORD *)(a1 + 400) = 0;
      Rect::~Rect((Rect *)(a1 + 328));
      GameButton::~GameButton((DeviceLinkCodeReceivedScreen *)a1);
    }

    __int64 __fastcall SpellItem::destructInternal(InboxItem *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 result; // x0
    
      v2 = *((_QWORD *)this + 52);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 52) = 0;
      v3 = *((_QWORD *)this + 53);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 53) = 0;
      v4 = *((_QWORD *)this + 54);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 54) = 0;
      v5 = *((_QWORD *)this + 47);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)this + 47) = 0;
      result = *((_QWORD *)this + 50);
      if ( result )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      *((_QWORD *)this + 50) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall SpellItem::~SpellItem(__int64 a1)
    {
      __ZN9SpellItemD2Ev(a1);
    }

    void __fastcall SpellItem::~SpellItem(void *a1)
    {
      SpellItem::~SpellItem((__int64)a1);
      operator delete(a1);
    }

    __int64 __fastcall SpellItem::setBasicSpellInfo(__int64 a1, #1257 *a2, TextField *a3)
    {
      int v6; // w25
      InitState *SpellData; // x20
      const char *v8; // x1
      tween::Bounce *PlayerAvatar; // x23
      const char *v10; // x1
      __int64 Instance; // x0
      __int64 Home; // x24
      const DonateItem *Arena; // x0
      _BOOL4 v14; // w26
      int hasSpell; // w24
      int ManaCost; // w0
      #1271 *TextFieldByName; // x0
      const char *v19; // x1
      long double v20; // q0
      __int64 v21; // x23
      int FontSize; // w1
      const AreaEffectObject *v23; // x1
      #1308 *LocalizedName; // x0
      unsigned int v25; // w8
      __int64 MovieClipByName; // x0
      #1257 *v27; // x23
      int FrameIndex; // w0
      const char *v29; // x2
      int v30; // w0
      const char *v31; // x2
      __int64 v32; // x0
      __int64 v33; // x8
      bool v34; // w9
      __int64 v35; // x23
      int v36; // w25
      __int64 v37; // x8
      __int64 v38; // x0
      char v39; // w8
      __int64 v40; // x8
      MovieClip *v41; // x22
      InitState *v42; // x0
      __int64 UnlockArena; // x0
      #1308 *TID; // x0
      const String *v45; // x1
      #1308 *String; // x0
      __int64 v47; // x0
      long double v48; // q0
      __int64 ChildByName; // x0
      __int64 v50; // x0
      __int64 v51; // x24
      __int64 MaterialCountForNextLevel; // x0
      const char *v53; // x1
      __int64 v54; // x24
      __int64 v55; // x0
      const char *v56; // x1
      int v57; // s8
      int v58; // w0
      int v59; // w8
      int v60; // w9
      int v61; // w24
      int v62; // w1
      MovieClip *v63; // x0
      #1271 *FuseCost; // x22
      #1395 *v65; // x25
      #1249 *v66; // x26
      const char *v67; // x4
      #1249 *v68; // x22
      const char *v69; // x2
      String *IconFileName; // x0
      const String *v71; // x2
      #1249 *MovieClip; // x23
      float v73; // s8
      float v74; // s8
      void (__fastcall *v75)(#1249 *, float); // x21
      float v76; // s0
      unsigned int v77; // w8
      __int64 v78; // x0
      __int64 v79; // x21
      String v80; // [xsp+18h] [xbp-C8h] BYREF
      String v81; // [xsp+30h] [xbp-B0h] BYREF
      String v82; // [xsp+48h] [xbp-98h] BYREF
      String v83; // [xsp+60h] [xbp-80h] BYREF
      String v84; // [xsp+78h] [xbp-68h] BYREF
    
      v6 = *((_DWORD *)a3 + 2);
      SpellData = (InitState *)LogicSpell::getSpellData(a3);
      if ( !LogicSpell::getSpellData(a3) )
        return Debugger::warning((__siginfo *)"setBasicSpellInfo: LogicSpell has no data!", v8);
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      if ( GameMode::getInstance() && *(_QWORD *)(GameMode::getInstance() + 112) )
      {
        Instance = GameMode::getInstance();
        Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      }
      else
      {
        Home = 0;
      }
      if ( PlayerAvatar )
      {
        Arena = (const DonateItem *)LogicClientAvatar::getArena(PlayerAvatar);
        v14 = !LogicSpellData::isUnlockedInArena(SpellData, Arena);
      }
      else
      {
        Debugger::warning((__siginfo *)"setBasicspellInfo: no avatar!", v10);
        v14 = 0;
      }
      if ( Home )
        hasSpell = LogicClientHome::hasSpell(Home, SpellData);
      else
        hasSpell = 0;
      SpellItem::setExpLevel((SpellItem *)a1, v6 + 1);
      if ( (unsigned int)LogicSpellData::isMirror(SpellData) )
      {
        SpellItem::setManaUnknown((SpellItem *)a1);
      }
      else
      {
        ManaCost = LogicSpellData::getManaCost(SpellData);
        SpellItem::setMana((SpellItem *)a1, ManaCost);
      }
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(a2, "card_name");
      v21 = (__int64)TextFieldByName;
      if ( TextFieldByName )
      {
        FontSize = s_origFontSize;
        if ( s_origFontSize == -1 )
        {
          FontSize = TextField::getFontSize(TextFieldByName);
          s_origFontSize = FontSize;
        }
        TextField::setFontSize((#1271 *)v21, FontSize);
        *(_BYTE *)(v21 + 73) = *(_BYTE *)(a1 + 443);
        LocalizedName = StringTable::getLocalizedName(SpellData, v23);
        MovieClipHelper::setTextAndScaleIfNecessary(v21, (const String *)LocalizedName, 0);
      }
      v25 = *(_DWORD *)(a1 + 384);
      if ( v25 <= 0xB )
      {
        if ( ((1 << v25) & 0x162) != 0 )
        {
          MovieClipByName = MovieClip::getMovieClipByName(a2, "progress");
          v27 = (#1257 *)MovieClipByName;
          if ( MovieClipByName )
          {
            *(_QWORD *)(a1 + 448) = MovieClipByName;
            FrameIndex = MovieClip::getFrameIndex(MovieClipByName, "progress_full");
            *(_DWORD *)(a1 + 456) = FrameIndex;
            Debugger::doAssert((Debugger *)(FrameIndex != -1), (bool)"", v29);
            v30 = MovieClip::getFrameIndex(*(_QWORD *)(a1 + 448), "max_level");
            *(_DWORD *)(a1 + 460) = v30;
            Debugger::doAssert((Debugger *)(v30 != -1), (bool)"", v31);
            v32 = MovieClip::getMovieClipByName(v27, "lock");
            if ( v32 )
              *(_BYTE *)(v32 + 8) = 0;
            v33 = *(_QWORD *)(a1 + 368);
            if ( v33 )
            {
              v34 = (hasSpell | !v14) == 1 && *(_DWORD *)(a1 + 384) != 8;
              *(_BYTE *)(v33 + 8) = v34;
            }
            v50 = MovieClip::getTextFieldByName(a2, "TID_NOT_FOUND");
            if ( v50 )
              *(_BYTE *)(v50 + 8) = (v14 | hasSpell) ^ 1;
            if ( LogicSpell::isLevelMax(a3) )
            {
              if ( (int)LogicSpell::getMaterialCountForNextLevel(a3) < 1 )
              {
                String::String(&v82, "");
                MovieClip::setText(v27, "card_count", &v82);
              }
              else
              {
                v51 = *((unsigned int *)a3 + 4);
                MaterialCountForNextLevel = LogicSpell::getMaterialCountForNextLevel(a3);
                String::format((String *)"%d/%d", v53, v51, MaterialCountForNextLevel);
                MovieClip::setText(v27, "card_count", &v83);
              }
              String::~String();
              v62 = *(_DWORD *)(a1 + 460);
              v63 = v27;
            }
            else
            {
              v54 = *((unsigned int *)a3 + 4);
              v55 = LogicSpell::getMaterialCountForNextLevel(a3);
              String::format((String *)"%d/%d", v56, v54, v55);
              MovieClip::setText(v27, "card_count", &v81);
              String::~String();
              v57 = *((_DWORD *)a3 + 4);
              v58 = LogicSpell::getMaterialCountForNextLevel(a3);
              v59 = *(_DWORD *)(a1 + 456);
              v60 = (int)(float)((float)((float)v57 / (float)v58) * (float)v59);
              if ( v60 < 0 )
              {
                v61 = 0;
              }
              else if ( v60 <= v59 )
              {
                v61 = (int)(float)((float)((float)v57 / (float)v58) * (float)v59);
              }
              else
              {
                v61 = *(_DWORD *)(a1 + 456);
              }
              if ( (LogicSpell::canUpgrade(a3) & 1) == 0 )
                v61 -= v61 == *(_DWORD *)(a1 + 456);
              if ( (unsigned int)LogicSpell::canUpgrade(a3) && *(_QWORD *)(a1 + 416) )
              {
                FuseCost = (#1271 *)LogicFuseSpellsCommand::getFuseCost((unsigned int *)a3);
                v65 = (#1395 *)MovieClip::getTextFieldByName(*(_QWORD *)(*(_QWORD *)(a1 + 416) + 96LL), "price");
                v66 = (#1249 *)MovieClip::getMovieClipByName(*(#1257 **)(*(_QWORD *)(a1 + 416) + 96LL), "icon");
                MovieClipHelper::setGoldPriceText(v65, FuseCost, -1, 0, v67);
                MovieClipHelper::moveIconNextToText((__int64)v65, v66, 0, 3.0);
              }
              v63 = v27;
              v62 = v61;
            }
            *(__n128 *)&v20 = MovieClip::gotoAndStopFrameIndex(v63, v62);
          }
        }
        else if ( ((1 << v25) & 0xC10) != 0 )
        {
          v35 = MovieClip::getTextFieldByName(a2, "arena");
          if ( v14 )
            v36 = *(unsigned __int8 *)(LogicSpellData::getRarity(SpellData) + 144);
          else
            v36 = 0;
          v37 = *(_QWORD *)(a1 + 368);
          if ( v37 )
            *(_BYTE *)(v37 + 8) = 0;
          v38 = MovieClip::getTextFieldByName(a2, "TID_NOT_FOUND");
          if ( v38 )
          {
            if ( v14 )
              v39 = 0;
            else
              v39 = hasSpell ^ 1;
            *(_BYTE *)(v38 + 8) = v39;
          }
          if ( v35 )
          {
            v42 = (InitState *)LogicSpell::getSpellData(a3);
            UnlockArena = LogicSpellData::getUnlockArena(v42);
            TID = (#1308 *)LogicData::getTID(UnlockArena);
            String = StringTable::getString(TID, v45);
            TextField::setText((#1271 *)v35, (const String *)String);
            *(_BYTE *)(v35 + 8) = v14;
          }
          v47 = MovieClip::getTextFieldByName(a2, "TID_UNLOCKS_AT");
          if ( v47 )
            *(_BYTE *)(v47 + 8) = v14;
          ChildByName = MovieClip::getChildByName(a2, "darken", v48);
          if ( ChildByName )
            *(_BYTE *)(ChildByName + 8) = v14;
          if ( v36 )
            goto LABEL_77;
        }
        else if ( v25 == 2 )
        {
          v40 = *((unsigned int *)a3 + 4);
          if ( (int)v40 >= 1 )
          {
            v41 = *(MovieClip **)(a1 + 96);
            String::format((String *)"x%d", v19, v40);
            MovieClip::setText(v41, "material_count", &v84);
            String::~String();
          }
        }
      }
      v68 = (#1249 *)MovieClip::getChildByName(a2, "card_image", v20);
      Debugger::doAssert((Debugger *)(v68 != 0), (bool)"", v69);
      String::String(&v80, "sc/ui_spells.sc");
      IconFileName = (String *)LogicSpellData::getIconFileName(SpellData);
      MovieClip = StringTable::getMovieClip((#1308 *)&v80, IconFileName, v71);
      String::~String();
      v73 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(#1249 *))*(_QWORD *)(*(_QWORD *)v68 + 88LL))(v68)));
      v74 = v73 * (*(float (__fastcall **)(#1249 *))(*(_QWORD *)v68 + 64LL))(v68);
      MovieClip::changeTimelineChild(a2, v68, MovieClip);
      v75 = *(void (__fastcall **)(#1249 *, float))(*(_QWORD *)MovieClip + 40LL);
      v76 = (*(float (__fastcall **)(#1249 *))(*(_QWORD *)MovieClip + 88LL))(MovieClip);
      v75(MovieClip, v74 / v76);
      if ( v68 )
        (*(void (__fastcall **)(#1249 *))(*(_QWORD *)v68 + 8LL))(v68);
      v77 = *(_DWORD *)(a1 + 384);
      if ( v77 <= 0xB && ((1 << v77) & 0xC10) != 0 )
      {
        (*(void (__fastcall **)(#1249 *, __int64))(*(_QWORD *)MovieClip + 152LL))(MovieClip, 1);
        v78 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "image_back");
        if ( v78 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v78 + 152LL))(v78, 1);
      }
    LABEL_77:
      v79 = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "image_back");
      if ( v79 )
        *(_BYTE *)(v79 + 8) = LogicSpellData::isMirror(SpellData);
      return SpellItem::updateNewTagVisibility((SpellItem *)a1);
    }

    __int64 __fastcall SpellItem::setUpgradeIconVisible(__int64 result, int a2)
    {
      char v2; // w19
      __int64 v3; // x20
      __int64 v4; // x8
      #1271 *FuseCost; // x21
      const char *v6; // x4
    
      v2 = a2;
      v3 = result;
      v4 = *(_QWORD *)(result + 424);
      if ( v4 )
        *(_BYTE *)(v4 + 8) = a2 ^ 1;
      if ( *(_QWORD *)(result + 416) )
      {
        if ( a2 )
        {
          FuseCost = (#1271 *)LogicFuseSpellsCommand::getFuseCost(*(unsigned int **)(result + 304));
          result = MovieClip::getTextFieldByName(*(_QWORD *)(*(_QWORD *)(v3 + 416) + 96LL), "price");
          if ( result )
            result = MovieClipHelper::setGoldPriceText((#1395 *)result, FuseCost, -1, 0, v6);
        }
        *(_BYTE *)(*(_QWORD *)(v3 + 416) + 8LL) = v2;
      }
      return result;
    }

    #1257 *__fastcall SpellItem::update(__int64 a1, float a2)
    {
      float v4; // s0
      float v5; // s2
      float v6; // s0
      float v7; // s1
      float v8; // s2
      BadgePopup *updated; // x0
      BadgePopup *Instance; // x0
      __int64 TopPopup; // x0
      NoAlliance *v12; // x20
      AreaEffectObject *SpellFuseSound; // x0
      sigval v14; // x0
      __int64 v15; // x0
      #1257 *result; // x0
      float v17; // s0
      float v18; // s0
      float v19; // s0
      unsigned int v20; // w8
      float v21; // s2
      long double v22; // q0
      int v23; // w20
      float v24; // s1
      float v25; // s1
      __int64 (__fastcall *v26)(__int64, long double); // x1
      float v27; // s2
      float v28; // s2
      float v29; // s2
      __int64 (__fastcall *v30)(__int64, long double); // x1
      float v31; // s2
      __int64 v32; // x0
      AllianceStreamMessage *v33; // x0
      __int64 v34; // x0
      float v35; // s0
      float v36; // s0
      float v37; // s0
      __int64 v38; // x0
      SpellInfoPopup *v39; // x20
      BadgePopup *v40; // x0
      __int64 v41; // x0
      __int64 (__fastcall *v42)(__int64, long double); // [xsp+8h] [xbp-28h]
      __int64 (__fastcall *v43)(__int64, long double); // [xsp+8h] [xbp-28h]
    
      v4 = *(float *)(a1 + 296);
      if ( v4 > 0.0 )
      {
        v5 = (float)(a2 * 3.0) + v4;
        *(float *)(a1 + 296) = v5;
        v6 = *(float *)(a1 + 288);
        v7 = *(float *)(a1 + 292);
        if ( v5 >= 1.0 )
        {
          *(_DWORD *)(a1 + 296) = 0;
        }
        else
        {
          v8 = 1.0 - (float)((float)(1.0 - v5) * (float)(1.0 - v5));
          v6 = *(float *)(a1 + 280) + (float)(v8 * (float)(v6 - *(float *)(a1 + 280)));
          v7 = *(float *)(a1 + 284) + (float)(v8 * (float)(v7 - *(float *)(a1 + 284)));
        }
        LODWORD(v4) = DisplayObject::setXY((DisplayObject *)a1, v6, v7).n128_u32[0];
      }
      updated = (BadgePopup *)SpellItem::updateWobble((SpellItem *)a1, v4);
      Instance = (BadgePopup *)GUI::getInstance(updated);
      TopPopup = GUI::getTopPopup(Instance);
      if ( (!TopPopup || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)TopPopup + 328LL))(TopPopup) == 1)
        && *(_BYTE *)(a1 + 345) )
      {
        *(_BYTE *)(a1 + 345) = 0;
        v12 = (NoAlliance *)SoundManager::sm_pInstance;
        SpellFuseSound = (AreaEffectObject *)LogicDataTables::getSpellFuseSound();
        v14 = SoundManager::playSound(v12, SpellFuseSound, 0xFFFFFFFFLL, 1.0, 0.0);
        *(_QWORD *)(a1 + 320) = 0x3E99999A3E99999ALL;
        v15 = GUI::getInstance((BadgePopup *)v14.sival_ptr);
        GUI::showPendingDataGained(v15);
      }
      result = *(#1257 **)(a1 + 376);
      if ( result )
      {
        result = (#1257 *)MovieClip::isStopped(result);
        if ( (_DWORD)result )
        {
          result = *(#1257 **)(a1 + 376);
          if ( result )
            result = (#1257 *)(*(__int64 (__fastcall **)(#1257 *))(*(_QWORD *)result + 8LL))(result);
          *(_QWORD *)(a1 + 376) = 0;
        }
      }
      v17 = *(float *)(a1 + 320);
      if ( v17 > 0.0 )
      {
        v18 = v17 - a2;
        if ( v18 < 0.0 )
          v18 = 0.0;
        *(float *)(a1 + 320) = v18;
        v19 = sinf((float)(v18 / *(float *)(a1 + 324)) * 3.1416);
        result = (#1257 *)ColorTransform::setAddColor((ColorTransform *)(a1 + 9), v19 * 0.3, v19 * 0.3, v19 * 0.3);
      }
      v20 = *(_DWORD *)(a1 + 384);
      if ( v20 <= 6 && ((1 << v20) & 0x62) != 0 )
      {
        result = (#1257 *)CustomButton::getButtonState((#1251 *)a1);
        if ( (_DWORD)result == 1
          && (result = (#1257 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 16LL))(*(_QWORD *)(a1 + 408)),
              (_DWORD)result)
          && !*(_BYTE *)(a1 + 347) )
        {
          v37 = *(float *)(a1 + 444) + a2;
          *(float *)(a1 + 444) = v37;
          if ( v37 > 0.8 )
          {
            v38 = GUI::getInstance(result);
            result = (#1257 *)GUI::getPopupByType(v38, 0);
            if ( !result )
            {
              v39 = (SpellInfoPopup *)operator new(288);
              SpellInfoPopup::SpellInfoPopup(v39, *(const TextField **)(a1 + 304), 1, 1);
              v41 = GUI::getInstance(v40);
              GUI::showPopup(v41, v39, 0, 0, 0);
              result = (#1257 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1);
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 444) = 0;
        }
        v20 = *(_DWORD *)(a1 + 384);
      }
      if ( v20 == 6 )
      {
        if ( *(_BYTE *)(a1 + 347) )
        {
          v21 = *(float *)(a1 + 348) + a2;
          *(float *)(a1 + 348) = v21;
          v42 = *(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)a1 + 40LL);
          werp1(1.0, 1.1, v21, 0.07, 0.15, 0.21);
        }
        else
        {
          v42 = *(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)a1 + 40LL);
          *(float *)&v22 = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
          v27 = *(float *)&v22 + -1.0;
          if ( (float)(*(float *)&v22 + -1.0) < 0.0 )
            v27 = -v27;
          if ( v27 <= 0.001 )
          {
            LODWORD(v22) = 1.0;
          }
          else
          {
            v28 = (float)(a2 * 6.0) / 0.016667;
            if ( v28 >= 1.0 )
              *(float *)&v22 = (float)((float)(*(float *)&v22 * (float)(v28 + -1.0)) + 1.0) / v28;
          }
        }
        v32 = a1;
        v30 = v42;
        return (#1257 *)v30(v32, v22);
      }
      if ( v20 == 1 )
      {
        v23 = *(unsigned __int8 *)(a1 + 352);
        v43 = *(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)a1 + 40LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
        if ( !v23 )
        {
          v29 = *(float *)&v22 + -1.0;
          if ( (float)(*(float *)&v22 + -1.0) < 0.0 )
            v29 = -v29;
          v30 = v43;
          if ( v29 <= 0.001 )
          {
            LODWORD(v22) = 1.0;
          }
          else
          {
            v31 = (float)(a2 * 6.0) / 0.016667;
            if ( v31 >= 1.0 )
              *(float *)&v22 = (float)((float)(*(float *)&v22 * (float)(v31 + -1.0)) + 1.0) / v31;
          }
          v32 = a1;
          return (#1257 *)v30(v32, v22);
        }
        v24 = *(float *)&v22 + -1.175;
        if ( (float)(*(float *)&v22 + -1.175) < 0.0 )
          v24 = -(float)(*(float *)&v22 + -1.175);
        if ( v24 <= 0.001 )
        {
          LODWORD(v22) = 1066821222;
          v26 = v43;
        }
        else
        {
          v25 = (float)(a2 * 6.0) / 0.016667;
          v26 = v43;
          if ( v25 >= 1.0 )
            *(float *)&v22 = (float)((float)(*(float *)&v22 * (float)(v25 + -1.0)) + 1.175) / v25;
        }
        v33 = (AllianceStreamMessage *)v26(a1, v22);
        v34 = GameMain::getInstance(v33);
        v35 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v34 + 184LL))(v34);
        v36 = sinf(v35 * 6.2832);
        return (#1257 *)ColorTransform::setAddColor(
                          (ColorTransform *)(a1 + 9),
                          (float)((float)(v36 * 0.5) + 0.5) * 0.125,
                          (float)((float)(v36 * 0.5) + 0.5) * 0.125,
                          (float)((float)(v36 * 0.5) + 0.5) * 0.125);
      }
      return result;
    }

    __int64 __fastcall SpellItem::updateWobble(__int64 result)
    {
      TextField **v1; // x19
      __int64 Instance; // x0
      float v3; // s8
      AreaEffectObject *SpellData; // x0
      int v5; // w1
      int InstanceID; // w0
      float v7; // s8
      float v8; // s9
      float v9; // s2
    
      v1 = (TextField **)result;
      if ( *(_BYTE *)(result + 440) )
      {
        if ( *(_QWORD *)(result + 304) )
        {
          Instance = GameMain::getInstance((AllianceStreamMessage *)result);
          v3 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)Instance
                                                                                                   + 184LL))(Instance)));
          SpellData = (AreaEffectObject *)LogicSpell::getSpellData(v1[38]);
          InstanceID = LogicData::getInstanceID(SpellData, v5);
          v7 = sinf((float)(v3 * 28.0) + (float)((float)InstanceID * 123.0)) * 0.45;
          LODWORD(v8) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(TextField **))*((_QWORD *)*v1 + 8))(v1));
          v9 = (*((float (__fastcall **)(TextField **))*v1 + 9))(v1);
          return DisplayObject::rotate((DisplayObject *)v1, v7, v8, v9);
        }
      }
      return result;
    }

    __n128 __fastcall SpellItem::updateFusionMode(__int64 a1, int a2)
    {
      TextField *v4; // x0
      bool isLevelMax; // w0
      _BYTE *v6; // x21
      int v7; // w22
      __n128 result; // q0
      MovieClip *MovieClipByName; // x0
      int v10; // w1
      __int64 FuseCost; // x20
      LogicKickAllianceMemberCommand *PlayerAvatar; // x21
      const #1355 *GoldData; // x0
      bool hasEnoughResources; // w20
      MovieClip *v15; // x19
    
      v4 = *(TextField **)(a1 + 304);
      if ( v4 && LogicSpell::getSpellData(v4) )
      {
        isLevelMax = LogicSpell::isLevelMax(*(TextField **)(a1 + 304));
        v6 = (_BYTE *)(a1 + 441);
        *(_BYTE *)(a1 + 441) = 0;
        if ( isLevelMax )
        {
          a2 = 0;
          v7 = 1;
        }
        else
        {
          v7 = 0;
          *v6 = a2;
        }
      }
      else
      {
        a2 = 0;
        v7 = 0;
        v6 = (_BYTE *)(a1 + 441);
        *(_BYTE *)(a1 + 441) = 0;
      }
      SpellItem::setUpgradeIconVisible(a1, a2);
      MovieClipByName = *(MovieClip **)(a1 + 448);
      if ( MovieClipByName )
      {
        if ( v7 )
        {
          v10 = *(_DWORD *)(a1 + 460);
          return MovieClip::gotoAndStopFrameIndex(MovieClipByName, v10);
        }
        if ( *v6 )
        {
          FuseCost = LogicFuseSpellsCommand::getFuseCost(*(unsigned int **)(a1 + 304));
          GameMode::getInstance();
          PlayerAvatar = (LogicKickAllianceMemberCommand *)GameMode::getPlayerAvatar();
          GoldData = (const #1355 *)LogicDataTables::getGoldData(PlayerAvatar);
          hasEnoughResources = LogicClientAvatar::hasEnoughResources(PlayerAvatar, GoldData, FuseCost, 0, 0, 0);
          MovieClip::gotoAndStopFrameIndex(*(MovieClip **)(a1 + 448), *(_DWORD *)(a1 + 456));
          if ( MovieClip::getMovieClipByName(*(#1257 **)(a1 + 448), "flow") )
            *(_BYTE *)(MovieClip::getMovieClipByName(*(#1257 **)(a1 + 448), "flow") + 8) = hasEnoughResources;
          if ( MovieClip::getMovieClipByName(*(#1257 **)(a1 + 448), "flow2") )
            *(_BYTE *)(MovieClip::getMovieClipByName(*(#1257 **)(a1 + 448), "flow2") + 8) = hasEnoughResources;
          MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 448), "arrow_full");
          v15 = MovieClipByName;
          if ( MovieClipByName )
          {
            if ( !hasEnoughResources )
            {
              v10 = 0;
              return MovieClip::gotoAndStopFrameIndex(MovieClipByName, v10);
            }
            if ( (unsigned int)MovieClip::isStopped(MovieClipByName) )
              return MovieClip::gotoAndPlayFrameIndex(v15, 0, -1);
          }
        }
      }
      return result;
    }

    __int64 __fastcall SpellItem::buttonPressed(CustomButton *a1)
    {
      (***((void (__fastcall ****)(_QWORD, CustomButton *))a1 + 51))(*((_QWORD *)a1 + 51), a1);
      return GameButton::buttonPressed(a1);
    }

    void __fastcall SpellItem::setExpLevel(__int64 a1, String *a2)
    {
      __int64 MovieClipByName; // x0
      MovieClip *v5; // x20
      #1249 *v6; // x22
      TextField *v7; // x0
      InitState *SpellData; // x0
      LogicGameObjectManagerListener *Rarity; // x0
      const String *v10; // x2
      const char *CardGlowExportName; // x8
      #1249 *MovieClip; // x0
      const char *v13; // x1
      __int64 TextFieldByName; // x22
      TextField *v15; // x0
      LogicGameObjectManagerListener **v16; // x0
      const String *String; // x0
      void *v18; // x23
      int v19; // w1
      TextField *v20; // x0
      InitState *v21; // x0
      _DWORD *v22; // x0
      InitState *v23; // x0
      LogicGameObjectManagerListener *v24; // x0
      int CardTxtBgFrameIdx; // w0
      const char *v26; // x1
      __int64 v27; // x20
      void *v28; // x22
      int v29; // w1
      TextField *v30; // x0
      InitState *v31; // x0
      _DWORD *v32; // x0
      _QWORD v33[3]; // [xsp+0h] [xbp-C0h] BYREF
      String v34; // [xsp+18h] [xbp-A8h] BYREF
      String v35; // [xsp+30h] [xbp-90h] BYREF
      String v36; // [xsp+48h] [xbp-78h] BYREF
      String v37; // [xsp+60h] [xbp-60h] BYREF
      String v38; // [xsp+78h] [xbp-48h] BYREF
    
      MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "card_txt_bg");
      v5 = (MovieClip *)MovieClipByName;
      if ( MovieClipByName )
        *(_BYTE *)(MovieClipByName + 8) = 0;
      v6 = (#1249 *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "rarity_glow");
      if ( v6 )
      {
        v7 = *(TextField **)(a1 + 304);
        if ( v7 )
        {
          SpellData = (InitState *)LogicSpell::getSpellData(v7);
          Rarity = (LogicGameObjectManagerListener *)LogicSpellData::getRarity(SpellData);
          CardGlowExportName = (const char *)LogicRarityData::getCardGlowExportName(Rarity);
          if ( *(_DWORD *)CardGlowExportName )
          {
            MovieClip = (#1249 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", CardGlowExportName, v10);
            *(_QWORD *)(a1 + 368) = MovieClip;
            MovieClip::changeTimelineChild(*(#1257 **)(a1 + 96), v6, MovieClip);
          }
          (*(void (__fastcall **)(#1249 *))(*(_QWORD *)v6 + 8LL))(v6);
        }
      }
      TextFieldByName = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 312), "card_level");
      if ( TextFieldByName )
      {
        v15 = *(TextField **)(a1 + 304);
        if ( v15
          && (v16 = (LogicGameObjectManagerListener **)LogicSpell::getSpellData(v15),
              (int)LogicSpellData::getMaxLevelIndex(v16) < (int)a2) )
        {
          String = (const String *)StringTable::getString((#1308 *)"TID_SPELL_MAX_LEVEL", v13);
          TextField::setText((#1271 *)TextFieldByName, String);
        }
        else
        {
          v18 = StringTable::getString((#1308 *)"TID_SPELL_ITEM_LEVEL", v13);
          String::String(&v37, "<NUMBER>");
          String::valueOf(&v36, a2, v19);
          String::replace(&v38, v18, &v37, &v36);
          TextField::setText((#1271 *)TextFieldByName, &v38);
          String::~String();
          String::~String();
          String::~String();
        }
        *(_BYTE *)(TextFieldByName + 73) = *(_BYTE *)(a1 + 443);
        v20 = *(TextField **)(a1 + 304);
        if ( v20 && LogicSpell::getSpellData(v20) )
        {
          v21 = (InitState *)LogicSpell::getSpellData(*(TextField **)(a1 + 304));
          v22 = (_DWORD *)LogicSpellData::getRarity(v21);
          if ( v22 )
            *(_DWORD *)(TextFieldByName + 64) = (v22[28] << 16) | (v22[29] << 8) | v22[30] | 0xFF000000;
          if ( v5 )
          {
            *((_BYTE *)v5 + 8) = 1;
            v23 = (InitState *)LogicSpell::getSpellData(*(TextField **)(a1 + 304));
            v24 = (LogicGameObjectManagerListener *)LogicSpellData::getRarity(v23);
            CardTxtBgFrameIdx = LogicRarityData::getCardTxtBgFrameIdx(v24);
            MovieClip::gotoAndStopFrameIndex(v5, CardTxtBgFrameIdx);
          }
        }
      }
      else
      {
        v27 = MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 312), "card_level_small");
        if ( v27 )
        {
          v28 = StringTable::getString((#1308 *)"TID_SPELL_ITEM_LEVEL_SHORT", v26);
          String::String(&v34, "<NUMBER>");
          String::valueOf(v33, a2, v29);
          String::replace(&v35, v28, &v34, v33);
          TextField::setText((#1271 *)v27, &v35);
          String::~String();
          String::~String();
          String::~String();
          *(_BYTE *)(v27 + 73) = *(_BYTE *)(a1 + 443);
          v30 = *(TextField **)(a1 + 304);
          if ( v30 )
          {
            if ( LogicSpell::getSpellData(v30) )
            {
              v31 = (InitState *)LogicSpell::getSpellData(*(TextField **)(a1 + 304));
              v32 = (_DWORD *)LogicSpellData::getRarity(v31);
              if ( v32 )
                *(_DWORD *)(v27 + 64) = (v32[28] << 16) | (v32[29] << 8) | v32[30] | 0xFF000000;
            }
          }
        }
      }
    }

    __int64 __fastcall SpellItem::setManaUnknown(__int64 a1)
    {
      __int64 result; // x0
      const char *v3; // x1
      __int64 v4; // x20
      const String *String; // x0
    
      result = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 312), "elixar_count");
      if ( result )
      {
        result = MovieClip::getTextFieldByName(result, "count");
        v4 = result;
        if ( result )
        {
          String = (const String *)StringTable::getString((#1308 *)"TID_MANA_UNKNOWN", v3);
          result = TextField::setText((#1271 *)v4, String);
          *(_BYTE *)(v4 + 73) = *(_BYTE *)(a1 + 443);
        }
      }
      return result;
    }

    TextField *__fastcall SpellItem::setMana(__int64 a1, int a2)
    {
      TextField *result; // x0
      TextField *v5; // x21
    
      result = (TextField *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 312), "elixar_count");
      if ( result )
      {
        result = (TextField *)MovieClip::getTextFieldByName(result, "count");
        v5 = result;
        if ( result )
        {
          result = (TextField *)TextField::setNumberText(result, a2, 0);
          *((_BYTE *)v5 + 73) = *(_BYTE *)(a1 + 443);
        }
      }
      return result;
    }

    __int64 __fastcall SpellItem::updateNewTagVisibility(__int64 result)
    {
      __int64 v1; // x21
      __int64 MovieClipByName; // x20
      __int64 v3; // x19
    
      v1 = result;
      if ( *(_QWORD *)(result + 304) )
      {
        MovieClipByName = MovieClip::getMovieClipByName(*(#1257 **)(result + 312), "new_count");
        v3 = MovieClip::getMovieClipByName(*(#1257 **)(v1 + 312), "new_tag");
        result = LogicSpell::isShowNewIcon(*(TextField **)(v1 + 304));
        if ( (_DWORD)result )
        {
          if ( MovieClipByName )
            *(_BYTE *)(MovieClipByName + 8) = 0;
          if ( v3 )
            *(_BYTE *)(v3 + 8) = 1;
        }
        else
        {
          result = LogicSpell::getShowNewCount(*(TextField **)(v1 + 304));
          if ( MovieClipByName )
            *(_BYTE *)(MovieClipByName + 8) = 0;
          if ( v3 )
            *(_BYTE *)(v3 + 8) = 0;
        }
      }
      return result;
    }

    __int64 __fastcall SpellItem::setButtonAlpha(__int64 a1, long double a2)
    {
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 result; // x0
      __int64 v8; // x19
    
      v4 = *(_QWORD *)(a1 + 424);
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v4 + 80LL))(v4, a2);
        *(_BYTE *)(*(_QWORD *)(a1 + 424) + 64LL) = *(float *)&a2 > 0.9;
      }
      v5 = *(_QWORD *)(a1 + 416);
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v5 + 80LL))(v5, a2);
        *(_BYTE *)(*(_QWORD *)(a1 + 416) + 64LL) = *(float *)&a2 > 0.9;
      }
      v6 = *(_QWORD *)(a1 + 432);
      if ( v6 )
      {
        (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v6 + 80LL))(v6, a2);
        *(_BYTE *)(*(_QWORD *)(a1 + 432) + 64LL) = *(float *)&a2 > 0.9;
      }
      result = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "selected");
      v8 = result;
      if ( result )
      {
        result = (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 80LL))(result, a2);
        *(_BYTE *)(v8 + 64) = *(float *)&a2 > 0.9;
      }
      return result;
    }

    __int64 __fastcall SpellItem::refresh(__int64 a1)
    {
      return SpellItem::setBasicSpellInfo(a1, *(#1257 **)(a1 + 312), *(TextField **)(a1 + 304));
    }

    __int64 __fastcall SpellItem::showFuseEffect(_BYTE *a1)
    {
      __int64 result; // x0
    
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 368LL))(a1);
      a1[345] = 1;
      return result;
    }

    void __fastcall SpellItem::savePosition(__int64 a1)
    {
      long double v2; // q0
      long double v3; // q0
    
      v2 = DisplayObject::getX(a1);
      *(_DWORD *)(a1 + 280) = LODWORD(v2);
      v3 = DisplayObject::getY(a1);
      *(_DWORD *)(a1 + 284) = LODWORD(v3);
    }

    void __fastcall SpellItem::destruct(InboxItem *this)
    {
      SpellItem::destructInternal(this);
      LogicSpellListener::destruct();
      *((_DWORD *)this + 74) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 36) = 0;
      *((_QWORD *)this + 39) = 0;
      *((_QWORD *)this + 40) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_BYTE *)this + 352) = 0;
      *((_QWORD *)this + 43) = 0;
      *((_DWORD *)this + 96) = 0;
      *((_QWORD *)this + 46) = 0;
      *((_QWORD *)this + 47) = 0;
      *((_QWORD *)this + 45) = 0;
      *((_QWORD *)this + 55) = 0;
      *((_QWORD *)this + 56) = 0;
      *((_QWORD *)this + 53) = 0;
      *((_QWORD *)this + 54) = 0;
      *((_QWORD *)this + 51) = 0;
      *((_QWORD *)this + 52) = 0;
      *((_QWORD *)this + 49) = 0;
      *((_QWORD *)this + 50) = 0;
    }

    // attributes: thunk
    __int64 SpellItem::touchPressed()
    {
      return CustomButton::touchPressed();
    }

    __int64 __fastcall SpellItem::touchMoved(__int64 a1, __int64 a2)
    {
      float32x2_t v4; // d0
      float v5; // s8
      long double v6; // q0
    
      if ( *(_BYTE *)(a1 + 346) )
      {
        if ( *(_BYTE *)(a1 + 347) )
        {
    LABEL_5:
          v5 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(a1)));
          v6 = DisplayObject::getY(a1);
          DisplayObject::setXY(
            (DisplayObject *)a1,
            v5 + (float)(*(float *)(a2 + 52) - *(float *)(a2 + 60)),
            *(float *)&v6 + (float)(*(float *)(a2 + 56) - *(float *)(a2 + 64)));
          return Sprite::touchMoved(a1, a2);
        }
        v4 = vsub_f32(*(float32x2_t *)(a2 + 52), *(float32x2_t *)(a2 + 68));
        if ( vaddv_f32(vmul_f32(v4, v4)) >= 36.0 )
        {
          *(_BYTE *)(a1 + 347) = 1;
          *(_DWORD *)(a1 + 348) = 0;
          *(_BYTE *)(*(_QWORD *)(a1 + 408) + 8LL) = 1;
          goto LABEL_5;
        }
      }
      return Sprite::touchMoved(a1, a2);
    }

    __int64 __fastcall SpellItem::touchReleased(__int64 a1, __int64 a2)
    {
      _BYTE *v4; // x0
    
      if ( !*(_BYTE *)(a1 + 347) )
        return CustomButton::touchReleased(a1, a2);
      v4 = *(_BYTE **)(a1 + 408);
      v4[8] = 0;
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      *(_BYTE *)(a1 + 347) = 0;
      CustomButton::touchCancelled((#1251 *)a1, *(_DWORD *)(a2 + 76));
      return 1;
    }

    __int64 __fastcall SpellItem::touchCancelled(__int64 a1, int a2)
    {
      __int64 result; // x0
    
      result = CustomButton::touchCancelled((#1251 *)a1, a2);
      if ( *(_BYTE *)(a1 + 347) )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 408) + 8LL) = 0;
        *(_BYTE *)(a1 + 347) = 0;
      }
      return result;
    }

    __int64 __fastcall SpellItem::levelChanged(__int64 a1)
    {
      return SpellItem::setBasicSpellInfo(a1, *(#1257 **)(a1 + 312), *(TextField **)(a1 + 304));
    }

    void __fastcall SpellItem::materialCountChanged(__int64 a1)
    {
      LogicPageOpenedCommand *v2; // x0
      LogicPageOpenedCommand *Instance; // x20
      const InitState *SpellData; // x1
    
      v2 = (LogicPageOpenedCommand *)SpellItem::setBasicSpellInfo(a1, *(#1257 **)(a1 + 312), *(TextField **)(a1 + 304));
      Instance = (LogicPageOpenedCommand *)HomeScreen::getInstance(v2);
      if ( Instance )
      {
        SpellData = (const InitState *)LogicSpell::getSpellData(*(TextField **)(a1 + 304));
        HomeScreen::refreshSpell(Instance, SpellData);
      }
    }

    __int64 __fastcall SpellItem::resetSpell(__int64 a1, TextField *a2)
    {
      if ( *(_DWORD *)(a1 + 384) == 3 )
        return SpellItem::setSpell(a1, a2);
      return a1;
    }

    __int64 __fastcall SpellItem::setInDeck(__int64 this, char a2)
    {
      *(_BYTE *)(this + 442) = a2;
      return this;
    }

    void __fastcall SpellItem::setItemListener(__int64 a1, __int64 a2, const char *a3)
    {
      Debugger::doAssert((Debugger *)(*(_QWORD *)(a1 + 408) == (_QWORD)&sm_nullListener), (bool)"", a3);
      *(_QWORD *)(a1 + 408) = a2;
    }

    __int64 __fastcall SpellItem::setDraggingEnabled(__int64 this, char a2)
    {
      *(_BYTE *)(this + 346) = a2;
      return this;
    }

    __int64 __fastcall SpellItem::isDragging(InboxItem *this)
    {
      return *((unsigned __int8 *)this + 347);
    }

    void *__fastcall SpellItem::getAnalyticsName(InboxItem *this)
    {
      return &s_analyticsName;
    }

    __int64 __fastcall SpellItem::buttonClicked(__int64 result, __int64 a2, const char *a3)
    {
      __int64 v3; // x19
      int v4; // w8
      __int64 v5; // x9
      ShopItem *v6; // x0
      SpellInfoPopup *v7; // x20
      BadgePopup *v8; // x0
      __int64 Instance; // x0
    
      v3 = result;
      v4 = *(_DWORD *)(result + 384);
      if ( (unsigned int)(v4 - 5) <= 1 && *(_QWORD *)(result + 304) )
      {
        if ( *(_QWORD *)(result + 416) == a2 || *(_QWORD *)(result + 424) == a2 )
        {
          Debugger::doAssert((Debugger *)1, (bool)"", a3);
          v7 = (SpellInfoPopup *)operator new(288);
          SpellInfoPopup::SpellInfoPopup(v7, *(const TextField **)(v3 + 304), 1, 1);
          Instance = GUI::getInstance(v8);
          return GUI::showPopup(Instance, v7, 0, 0, 0);
        }
        else if ( v4 == 6 && *(_QWORD *)(result + 432) == a2 )
        {
          Debugger::doAssert((Debugger *)1, (bool)"", a3);
          v5 = *(_QWORD *)(v3 + 408);
          if ( v5 )
            v6 = (ShopItem *)(v5 - 200);
          else
            v6 = 0;
          return SpellPage::gotoSwapMode(v6);
        }
      }
      return result;
    }

    __int64 __fastcall SpellItem::addPendingExpGained(BadgePopup *a1, int a2)
    {
      __int64 Instance; // x0
    
      Instance = GUI::getInstance(a1);
      return GUI::addDataGained(Instance, (__int64)a1, 0, a2, 1, 0.0, -20.0, 0.0, 0.0);
    }

    __int64 __fastcall SpellItem::enableFrameHilite(__int64 result, int a2)
    {
      char v2; // w19
      __int64 v3; // x20
      const String *v4; // x1
    
      v2 = a2;
      v3 = result;
      if ( *(unsigned __int8 *)(result + 344) != a2 )
      {
        result = *(_QWORD *)(result + 392);
        if ( result )
        {
          if ( a2 )
            v4 = (const String *)&SpellItem::FRAME_LABEL_HILITE;
          else
            v4 = (const String *)&SpellItem::FRAME_LABEL_NORMAL;
          result = MovieClip::gotoAndStop((MovieClip *)result, v4);
        }
        *(_BYTE *)(v3 + 344) = v2;
      }
      return result;
    }

    __int64 __fastcall SpellItem::setHoveringHighlight(__int64 result, char a2)
    {
      *(_BYTE *)(result + 352) = a2;
      if ( *(_DWORD *)(result + 384) == 1 && (a2 & 1) == 0 )
        return ColorTransform::setAddColor((ColorTransform *)(result + 9), 0.0, 0.0, 0.0);
      return result;
    }

    DisplayObject *__fastcall SpellItem::setWobble(DisplayObject *result, int a2)
    {
      DisplayObject *v2; // x19
      float v3; // s8
      float v4; // s2
    
      v2 = result;
      if ( a2 != *((unsigned __int8 *)result + 440) )
      {
        *((_BYTE *)result + 440) = a2;
        if ( (a2 & 1) == 0 )
        {
          LODWORD(v3) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(DisplayObject *))*(_QWORD *)(*(_QWORD *)result + 64LL))(result));
          v4 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v2 + 72LL))(v2);
          return (DisplayObject *)DisplayObject::rotate(v2, 0.0, v3, v4);
        }
      }
      return result;
    }

    __int64 __fastcall SpellItem::setManaVisible(__int64 a1, char a2)
    {
      __int64 result; // x0
    
      result = MovieClip::getMovieClipByName(*(#1257 **)(a1 + 312), "elixar_count");
      if ( result )
        *(_BYTE *)(result + 8) = a2;
      return result;
    }

}; // end class SpellItem
