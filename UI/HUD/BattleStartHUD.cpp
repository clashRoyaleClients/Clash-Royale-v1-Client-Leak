class BattleStartHUD
{
public:

    void __fastcall BattleStartHUD::BattleStartHUD(BattleStartHUD *this)
    {
      vm_address_t *v2; // x0
      vm_address_t *Instance; // x0
      vm_address_t v4; // x21
      __int64 v5; // x0
      vm_address_t *PlayerAvatar; // x25
      VisitHomeMessage *v7; // x0
      __int64 AccountId; // x23
      const char *v9; // x2
      #1257 *MovieClip; // x20
      UnbindFacebookAccountMessage *v11; // x22
      vm_address_t *Arena; // x26
      VisitHomeMessage *v13; // x0
      vm_address_t *BattleTopAvatar; // x21
      VisitHomeMessage *v15; // x0
      __int64 v16; // x1
      const char *v17; // x2
      tween::Bounce *BattleBottomAvatar; // x24
      unsigned int HomeTeamIndex; // w0
      const char *v20; // x2
      tween::Bounce *Avatar; // x27
      __int64 v22; // x28
      __int64 v23; // x0
      char v24; // w25
      __int64 AllianceId; // x27
      __int64 v26; // x0
      __int64 MovieClipByName; // x0
      MovieClip *v28; // x27
      LogicDataTables *TextFieldByName; // x28
      HomeScreen *Globals; // x0
      #1308 *SubtitleTID; // x0
      const String *v32; // x1
      #1308 *v33; // x0
      #1308 *v34; // x0
      const String *v35; // x1
      #1308 *v36; // x0
      #1308 *TID; // x0
      const String *v38; // x1
      #1308 *String; // x0
      #1257 *v40; // x27
      #1257 *v41; // x26
      const String *AllianceName; // x28
      __int64 v43; // x0
      const char *v44; // x1
      #1381 *v45; // x0
      __int64 NpcData; // x0
      #1308 *v47; // x0
      const String *v48; // x1
      #1308 *Name; // x22
      #1381 *v50; // x0
      String v51; // [xsp+8h] [xbp-68h] BYREF
    
      v2 = (vm_address_t *)DropGUIContainer::DropGUIContainer(this);
      *(_QWORD *)this = off_1004656D8;
      *((_QWORD *)this + 12) = &off_100465830;
      *((_WORD *)this + 98) = 0;
      *(_QWORD *)((char *)this + 188) = 0;
      Instance = (vm_address_t *)GameMode::getInstance(v2);
      v4 = Instance[14];
      v5 = GameMode::getInstance(Instance);
      PlayerAvatar = (vm_address_t *)GameMode::getPlayerAvatar(v5);
      v7 = (VisitHomeMessage *)GameMode::getInstance(PlayerAvatar);
      AccountId = GameMode::getAccountId(v7);
      MovieClip = (#1257 *)ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "pvp_battle_start", v9);
      (*(void (__fastcall **)(BattleStartHUD *, #1257 *))(*(_QWORD *)this + 272LL))(this, MovieClip);
      v11 = *(UnbindFacebookAccountMessage **)(v4 + 168);
      Arena = (vm_address_t *)LogicBattle::getArena(v11);
      v13 = (VisitHomeMessage *)GameMode::getInstance(Arena);
      BattleTopAvatar = (vm_address_t *)GameMode::getBattleTopAvatar(v13);
      v15 = (VisitHomeMessage *)GameMode::getInstance(BattleTopAvatar);
      BattleBottomAvatar = (tween::Bounce *)GameMode::getBattleBottomAvatar(v15);
      if ( !PlayerAvatar )
        goto LABEL_7;
      HomeTeamIndex = LogicBattle::getHomeTeamIndex(v11, v16, v17);
      Avatar = (tween::Bounce *)LogicBattle::getAvatar(v11, HomeTeamIndex, v20);
      v22 = LogicClientAvatar::getAccountId(Avatar);
      v23 = LogicClientAvatar::getAccountId((tween::Bounce *)PlayerAvatar);
      if ( (LogicLong::equals(v22, v23) & 1) != 0 )
      {
        v24 = 1;
        goto LABEL_8;
      }
      if ( (unsigned int)LogicClientAvatar::isInAlliance(Avatar)
        && (unsigned int)LogicClientAvatar::isInAlliance((tween::Bounce *)PlayerAvatar) )
      {
        AllianceId = LogicClientAvatar::getAllianceId(Avatar);
        v26 = LogicClientAvatar::getAllianceId((tween::Bounce *)PlayerAvatar);
        v24 = LogicLong::equals(AllianceId, v26);
      }
      else
      {
    LABEL_7:
        v24 = 0;
      }
    LABEL_8:
      MovieClipByName = MovieClip::getMovieClipByName(MovieClip, "arena");
      v28 = (MovieClip *)MovieClipByName;
      if ( MovieClipByName )
      {
        TextFieldByName = (LogicDataTables *)MovieClip::getTextFieldByName(MovieClipByName, "arena_name");
        Globals = (HomeScreen *)LogicDataTables::getGlobals(TextFieldByName);
        if ( Arena == (vm_address_t *)LogicGlobals::getStartingArena(Globals) )
        {
          TID = (#1308 *)LogicData::getTID(Arena);
          String = StringTable::getString(TID, v38);
          MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, String, 0);
        }
        else
        {
          SubtitleTID = (#1308 *)LogicArenaData::getSubtitleTID(Arena);
          v33 = StringTable::getString(SubtitleTID, v32);
          MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, v33, 0);
          v34 = (#1308 *)LogicData::getTID(Arena);
          v36 = StringTable::getString(v34, v35);
          MovieClip::setText(v28, "arena_number", (const String *)v36);
        }
      }
      v40 = (#1257 *)MovieClip::getMovieClipByName(MovieClip, "player");
      v41 = (#1257 *)MovieClip::getMovieClipByName(MovieClip, "enemy");
      String::String(&v51, "");
      AllianceName = (const String *)LogicClientAvatar::getAllianceName(BattleBottomAvatar);
      if ( *(_DWORD *)LogicClientAvatar::getName(BattleBottomAvatar)
        && (LogicClientAvatar::isTrainingCompleted(BattleBottomAvatar) & 1) != 0
        || (v43 = LogicClientAvatar::getAccountId(BattleBottomAvatar), !(unsigned int)LogicLong::equals(v43, AccountId)) )
      {
        LogicClientAvatar::getName(BattleBottomAvatar);
        v45 = (#1381 *)String::operator=(&v51);
      }
      else
      {
        StringTable::getString((#1308 *)"TID_YOU", v44);
        v45 = (#1381 *)String::operator=(&v51);
      }
      BattleStartHUD::setPlayerInfo(v45, v40, &v51, AllianceName, v24);
      if ( LogicBattle::getNpcData(v11) )
      {
        NpcData = LogicBattle::getNpcData(v11);
        v47 = (#1308 *)LogicData::getTID(NpcData);
        Name = StringTable::getString(v47, v48);
      }
      else
      {
        Name = (#1308 *)LogicClientAvatar::getName((tween::Bounce *)BattleTopAvatar);
      }
      v50 = (#1381 *)LogicClientAvatar::getAllianceName((tween::Bounce *)BattleTopAvatar);
      BattleStartHUD::setPlayerInfo(v50, v41, (const String *)Name, (const String *)v50, v24 != 1);
      *((_DWORD *)this + 48) = MovieClip::getFrameIndex(MovieClip, "actionFrame");
      MovieClip::playOnce(MovieClip);
      String::~String(&v51);
    }

    MovieClip *__fastcall BattleStartHUD::setPlayerInfo(
            #1381 *this,
            #1257 *a2,
            const String *a3,
            const String *String,
            int a5)
    {
      __int64 TextFieldByName; // x0
      const char *v10; // x1
      __int64 v11; // x22
      MovieClip *result; // x0
      const char *v13; // x1
      MovieClip *v14; // x20
      char *v15; // x0
      const String *v16; // x2
    
      TextFieldByName = MovieClip::getTextFieldByName(a2, "name");
      if ( TextFieldByName )
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, a3, 0);
      v11 = MovieClip::getTextFieldByName(a2, "alliance");
      if ( v11 )
      {
        if ( !String->m_length )
          String = (const String *)StringTable::getString((#1308 *)"TID_NO_CLAN", v10);
        MovieClipHelper::setTextAndScaleIfNecessary(v11, String, 0);
      }
      result = (MovieClip *)MovieClip::getMovieClipByName(a2, "txt_visitor");
      v14 = result;
      if ( result )
      {
        if ( a5 )
          v15 = "TID_HOME_TEAM";
        else
          v15 = "TID_VISITOR_TEAM";
        v16 = (const String *)StringTable::getString((#1308 *)v15, v13);
        return (MovieClip *)MovieClip::setText(v14, "txt", v16);
      }
      return result;
    }

    // attributes: thunk
    void __fastcall BattleStartHUD::BattleStartHUD(BattleStartHUD *this)
    {
      __ZN14BattleStartHUDC2Ev(this);
    }

    void __fastcall BattleStartHUD::~BattleStartHUD(#1381 *this)
    {
      *(_QWORD *)this = off_1004656D8;
      *((_QWORD *)this + 12) = &off_100465830;
      *((_WORD *)this + 98) = 0;
      *(_QWORD *)((char *)this + 188) = 0;
      DropGUIContainer::~DropGUIContainer(this);
    }

    void __fastcall BattleStartHUD::~BattleStartHUD(#1381 *this)
    {
      *(_QWORD *)this = off_1004656D8;
      *((_QWORD *)this + 12) = &off_100465830;
      *((_WORD *)this + 98) = 0;
      *(_QWORD *)((char *)this + 188) = 0;
      DropGUIContainer::~DropGUIContainer(this);
      operator delete(this);
    }

    void __fastcall BattleStartHUD::update(#1381 *this, float a2)
    {
      float v4; // s0
      __int64 v6; // x20
      const AreaEffectObject *v7; // x2
      __int64 SoundByName; // x0
      #1257 *MovieClip; // x0
      __int64 v10; // x20
      const AreaEffectObject *v11; // x2
      __int64 v12; // x0
      String v13; // [xsp+0h] [xbp-50h] BYREF
      String v14; // [xsp+18h] [xbp-38h] BYREF
    
      v4 = *((float *)this + 47);
      if ( v4 < 2.0 && (float)(v4 + a2) >= 2.0 )
      {
        v6 = SoundManager::sm_pInstance;
        String::String(&v14, "Names_whoosh_in");
        SoundByName = LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v14, 0, v7);
        SoundManager::playSound(v6, SoundByName, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
        String::~String(&v14);
        v4 = *((float *)this + 47);
      }
      *((float *)this + 47) = v4 + a2;
      if ( !*((_BYTE *)this + 197) )
      {
        MovieClip = (#1257 *)GUIContainer::getMovieClip(this);
        if ( (int)MovieClip::getCurrentFrame(MovieClip) >= *((_DWORD *)this + 48) )
        {
          v10 = SoundManager::sm_pInstance;
          String::String(&v13, "Names_whoosh_out");
          v12 = LogicDataTables::getSoundByName((LogicKickAllianceMemberCommand *)&v13, 0, v11);
          SoundManager::playSound(v10, v12, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
          String::~String(&v13);
          *((_BYTE *)this + 197) = 1;
        }
      }
    }

    __int64 __fastcall BattleStartHUD::touchReleased(__int64 a1, __int64 a2)
    {
      #1257 *MovieClip; // x0
      MovieClip *v5; // x21
      int v6; // w22
      #1257 *v7; // x0
      int TotalFrames; // w0
    
      if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 192LL))(a1, *(unsigned int *)(a2 + 76))
        && *(float *)(a1 + 188) > 0.5 )
      {
        if ( *(_DWORD *)(a1 + 192) != -1 )
        {
          MovieClip = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
          if ( (int)MovieClip::getCurrentFrame(MovieClip) < *(_DWORD *)(a1 + 192) )
          {
            v5 = (MovieClip *)GUIContainer::getMovieClip((#1254 *)a1);
            v6 = *(_DWORD *)(a1 + 192);
            v7 = (#1257 *)GUIContainer::getMovieClip((#1254 *)a1);
            TotalFrames = MovieClip::getTotalFrames(v7);
            MovieClip::gotoAndPlayFrameIndex(v5, v6, TotalFrames - 1);
          }
        }
        *(_BYTE *)(a1 + 196) = 1;
      }
      return Sprite::touchReleased(a1, a2);
    }

}; // end class BattleStartHUD
