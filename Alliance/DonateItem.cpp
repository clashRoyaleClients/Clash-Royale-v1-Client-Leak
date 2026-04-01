class DonateItem
{
public:

    __int64 __fastcall DonateItem::update(DonateItem *a1)
    {
      int v2; // w0
      _BOOL8 v3; // x1
    
      v2 = DonateItem::copySpellValues(a1);
      *((_BYTE *)a1 + 264) = v2;
      v3 = 1;
      if ( v2 )
        v3 = *((_BYTE *)a1 + 265) == 0;
      *((_BYTE *)a1 + 64) = 1;
      return (*(__int64 (__fastcall **)(DonateItem *, _BOOL8))(*(_QWORD *)a1 + 152LL))(a1, v3);
    }

    __int64 __fastcall DonateItem::DonateItem(__int64 a1, __int64 a2, InitState *a3)
    {
      const String *v6; // x2
      #1308 *MovieClip; // x20
      #1257 *v8; // x1
      long double v9; // q0
      #1249 *ChildByName; // x21
      const char *v11; // x2
      String *IconFileName; // x0
      const String *v13; // x2
      float v14; // s8
      __int64 v15; // x22
      void (__fastcall *v16)(__int64, float); // x23
      float v17; // s0
      MovieClip *MovieClipByName; // x0
      long double v19; // q0
      #1271 *TextFieldByName; // x0
      #1271 *v21; // x0
      String v23; // [xsp+8h] [xbp-88h] BYREF
      String v24; // [xsp+20h] [xbp-70h] BYREF
      String v25; // [xsp+38h] [xbp-58h] BYREF
    
      GameButton::GameButton((DeviceLinkCodeReceivedScreen *)a1);
      *(_WORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 312) = 0;
      *(_QWORD *)a1 = off_1004F1318;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 272) = a3;
      *(_QWORD *)(a1 + 280) = a2;
      String::String(&v25, "sc/ui.sc");
      String::String(&v24, "spell_card_donate");
      MovieClip = StringTable::getMovieClip((#1308 *)&v25, &v24, v6);
      String::~String();
      String::~String();
      DropGUIContainer::putLocalizedTIDsToTextFields(MovieClip, v8);
      ChildByName = (#1249 *)MovieClip::getChildByName(MovieClip, "card_image", v9);
      Debugger::doAssert((Debugger *)(ChildByName != 0), (bool)"", v11);
      String::String(&v23, "sc/ui_spells.sc");
      IconFileName = (String *)LogicSpellData::getIconFileName(a3);
      *(_QWORD *)(a1 + 312) = StringTable::getMovieClip((#1308 *)&v23, IconFileName, v13);
      String::~String();
      v14 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(#1249 *))*(_QWORD *)(*(_QWORD *)ChildByName
                                                                                                + 88LL))(ChildByName)));
      MovieClip::changeTimelineChild(MovieClip, ChildByName, *(#1249 **)(a1 + 312));
      v15 = *(_QWORD *)(a1 + 312);
      v16 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v15 + 40LL);
      v17 = (*(float (__fastcall **)(#1308 *))(*(_QWORD *)MovieClip + 88LL))(MovieClip);
      v16(v15, (float)(v14 / v17) * 0.95);
      MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(MovieClip, "frame");
      *(__n128 *)&v19 = MovieClip::gotoAndStopFrameIndex(MovieClipByName, 0);
      (*(void (__fastcall **)(#1249 *, long double))(*(_QWORD *)ChildByName + 8LL))(ChildByName, v19);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "next_upgrade");
      *(_QWORD *)(a1 + 288) = TextFieldByName;
      if ( TextFieldByName )
      {
        TextField::setAlign(TextFieldByName, 0);
        fixTF(*(#1271 **)(a1 + 288));
      }
      v21 = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "cards_left");
      *(_QWORD *)(a1 + 296) = v21;
      if ( v21 )
      {
        TextField::setAlign(v21, 0);
        fixTF(*(#1271 **)(a1 + 296));
      }
      *(_QWORD *)(a1 + 304) = MovieClip::getTextFieldByName(MovieClip, "cards_given");
      (*(void (__fastcall **)(__int64, #1308 *, __int64))(*(_QWORD *)a1 + 288LL))(a1, MovieClip, 1);
      return a1;
    }

    // attributes: thunk
    void __fastcall DonateItem::~DonateItem(#1389 *this)
    {
      __ZN10DonateItemD2Ev(this);
    }

    void __fastcall DonateItem::~DonateItem(#1389 *this)
    {
      DonateItem::~DonateItem(this);
      operator delete(this);
    }

    StarHud *__fastcall DonateItem::buttonPressed(__int64 a1)
    {
      __int64 v2; // x20
      StarHud *result; // x0
      const char *v4; // x1
      tween::Bounce *v5; // x21
      tween::Bounce *PlayerAvatar; // x0
      __int64 Id; // x22
      __int64 Arena; // x0
      DonateAllianceUnitMessage *v9; // x21
      __int64 v10; // x0
      LogicLong *v11; // x0
      char v12; // w2
    
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 272LL);
      GameMode::getInstance();
      result = (StarHud *)GameMode::getPlayerAvatar();
      v5 = result;
      if ( *(_QWORD *)(a1 + 280) )
        result = (StarHud *)StreamItem::closePopovers(result);
      if ( v5 )
      {
        if ( !v2 )
          return (StarHud *)Debugger::print((Debugger *)"The old donate item was removed already", v4);
        if ( *(_BYTE *)(a1 + 265) )
        {
          if ( *(_BYTE *)(a1 + 264) )
          {
            GameMode::getInstance();
            PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
            Id = LogicClientAvatar::getId(PlayerAvatar);
            Arena = LogicClientAvatar::getArena(v5);
            result = (StarHud *)DonateStreamEntry::canDonateAnything(v2, Id, 0, Arena);
            if ( (_DWORD)result )
            {
              v9 = (DonateAllianceUnitMessage *)operator new(88);
              DonateAllianceUnitMessage::DonateAllianceUnitMessage(v9);
              v10 = StreamEntry::getId(v2);
              v11 = (LogicLong *)LogicLong::clone(v10);
              DonateAllianceUnitMessage::setStreamId(v9, v11);
              DonateAllianceUnitMessage::setAllianceSpellData(v9, *(const LogicSpellData **)(a1 + 272));
              return (StarHud *)MessageManager::sendMessage((MessageManager *)MessageManager::sm_pInstance, v9);
            }
            return result;
          }
          v12 = 0;
        }
        else
        {
          v12 = *(_BYTE *)(a1 + 264) != 0;
        }
        return (StarHud *)DonateStreamItem::canDonate(*(_QWORD *)(a1 + 280), *(const char **)(a1 + 272), v12, 1);
      }
      return result;
    }

    void __fastcall DonateItem::~DonateItem(#1389 *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_1004F1318;
      v2 = *((_QWORD *)this + 39);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_WORD *)this + 132) = 0;
      *((_QWORD *)this + 38) = 0;
      *((_QWORD *)this + 39) = 0;
      *((_QWORD *)this + 36) = 0;
      *((_QWORD *)this + 37) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 35) = 0;
      GameButton::~GameButton(this);
    }

    bool __fastcall DonateItem::copySpellValues(__int64 a1)
    {
      __int64 Instance; // x0
      __int64 Home; // x0
      const char *v4; // x1
      TextField *SpellByData; // x0
      TextField *v6; // x21
      int v7; // w20
      __int64 MaterialCountForNextLevel; // x21
      __int64 v10; // x22
      tween::Bounce *PlayerAvatar; // x0
      __int64 Id; // x0
      __int64 DonateCount; // x0
      const char *v14; // x1
      #1271 *v15; // x22
      const char *v16; // x1
      TextField *v17; // x0
      #1271 *v18; // x22
      TextField *v19; // x0
      long double TextWidth; // q0
      float v21; // s8
      long double v22; // q0
      #1249 *v23; // x22
      float v24; // s8
      long double v25; // q0
      String v26; // [xsp+10h] [xbp-60h] BYREF
      String v27; // [xsp+28h] [xbp-48h] BYREF
    
      Instance = GameMode::getInstance();
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      if ( !Home )
      {
        Debugger::warning((__siginfo *)"copySpellValues: pHome is NULL.", v4);
        return 0;
      }
      SpellByData = (TextField *)LogicClientHome::getSpellByData(Home, *(_QWORD *)(a1 + 272));
      v6 = SpellByData;
      if ( SpellByData )
      {
        v7 = *((_DWORD *)SpellByData + 4);
        if ( LogicSpell::isLevelMax(SpellByData) )
          MaterialCountForNextLevel = 0;
        else
          MaterialCountForNextLevel = LogicSpell::getMaterialCountForNextLevel(v6);
      }
      else
      {
        MaterialCountForNextLevel = 0;
        v7 = 0;
      }
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 272LL);
      if ( !v10 )
      {
        v15 = *(#1271 **)(a1 + 304);
        goto LABEL_12;
      }
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      Id = LogicClientAvatar::getId(PlayerAvatar);
      DonateCount = DonateStreamEntry::getDonateCount(v10, Id, *(_QWORD *)(a1 + 272));
      v15 = *(#1271 **)(a1 + 304);
      if ( !(_DWORD)DonateCount )
      {
    LABEL_12:
        String::String(&v27, "");
        goto LABEL_13;
      }
      String::format((String *)"x%d", v14, DonateCount);
    LABEL_13:
      TextField::setText(v15, &v27);
      String::~String();
      v17 = *(TextField **)(a1 + 296);
      if ( v17 )
        TextField::setNumberText(v17, v7, 0);
      v18 = *(#1271 **)(a1 + 288);
      if ( v18 )
      {
        String::format((String *)"/%d", v16, MaterialCountForNextLevel);
        TextField::setText(v18, &v26);
        String::~String();
      }
      v19 = *(TextField **)(a1 + 296);
      if ( v19 )
      {
        if ( *(_QWORD *)(a1 + 288) )
        {
          TextWidth = TextField::getTextWidth(v19);
          v21 = *(float *)&TextWidth;
          v22 = TextField::getTextWidth((TextField *)*(_QWORD *)(a1 + 288));
          DisplayObject::setX(*(#1249 **)(a1 + 296), floorf((float)(v21 + *(float *)&v22) * -0.5));
          v23 = *(#1249 **)(a1 + 288);
          v24 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(*(_QWORD *)(a1 + 296))));
          v25 = TextField::getTextWidth((TextField *)*(_QWORD *)(a1 + 296));
          DisplayObject::setX(v23, floorf(v24 + *(float *)&v25));
        }
      }
      *(_DWORD *)(a1 + 320) = v7;
      *(_DWORD *)(a1 + 324) = MaterialCountForNextLevel;
      return v7 > 0;
    }

}; // end class DonateItem
