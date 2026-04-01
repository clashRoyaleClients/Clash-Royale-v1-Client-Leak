class CombatHUD::Taunt
{
public:

    bool __fastcall CombatHUD::Taunt::update(#1359 *this, float a2)
    {
      float v4; // s0
      char isStopped; // w0
    
      v4 = *((float *)this + 26) - a2;
      if ( v4 <= 0.0 )
        v4 = 0.0;
      *((float *)this + 26) = v4;
      isStopped = MovieClip::isStopped(*((#1257 **)this + 12));
      *(_BYTE *)(*((_QWORD *)this + 12) + 8LL) = isStopped ^ 1;
      if ( (isStopped & 1) == 0 )
        CombatHUD::Taunt::updatePosition(this, a2, 0);
      return *((float *)this + 26) > 0.0;
    }

    __int64 __fastcall CombatHUD::Taunt::Taunt(__int64 a1, ChallengeDoneStreamEntry *a2, int a3, int a4)
    {
      #1257 **v8; // x24
      const char *v9; // x2
      const char *v10; // x1
      __int64 v11; // x0
      DataIcon *v12; // x22
      const String *FileName; // x23
      const String *ExportName; // x0
      #1257 *v15; // x21
      LogicTutorialManager *MovieClipByName; // x0
      const char *v17; // x1
      __int64 MovieClip; // x0
      #1308 *TID; // x0
      const String *v20; // x1
      #1308 *String; // x21
      __int64 v22; // x0
      LogicTutorialManager *Instance; // x0
      float v24; // s8
      float *ClientGlobals; // x0
      LogicTutorialManager *v26; // x0
      __int64 RenderSystem; // x0
      String v29; // [xsp+8h] [xbp-58h] BYREF
    
      Sprite::Sprite((Sprite *)a1, 1);
      *(_QWORD *)a1 = off_10046C860;
      *(_QWORD *)(a1 + 96) = 0;
      v8 = (#1257 **)(a1 + 96);
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 112) = 0;
      *(float *)(a1 + 104) = (float)*(int *)(LogicDataTables::getClientGlobals() + 372);
      *(_BYTE *)(a1 + 120) = a3;
      if ( *(int *)LogicTauntData::getExportName(a2) < 1 )
      {
        if ( a3 )
          v17 = "speech_bubble_opponent_master";
        else
          v17 = "speech_bubble_player_master";
        MovieClip = ResourceManager::getMovieClip((ResourceManager *)"sc/ui_stickers.sc", v17, v9);
        *(_QWORD *)(a1 + 96) = MovieClip;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, MovieClip);
        TID = (#1308 *)LogicData::getTID((__int64)a2);
        String = StringTable::getString(TID, v20);
        MovieClipByName = (LogicTutorialManager *)MovieClip::getMovieClipByName(*v8, "bubble");
        if ( MovieClipByName )
        {
          v22 = MovieClip::getMovieClipByName(*v8, "bubble");
          MovieClipByName = (LogicTutorialManager *)MovieClip::getTextFieldByName(v22, "txt");
          if ( MovieClipByName )
            MovieClipByName = (LogicTutorialManager *)MovieClipHelper::setTextAndScaleIfNecessary(
                                                        MovieClipByName,
                                                        String,
                                                        0);
        }
      }
      else
      {
        if ( a3 )
          v10 = "sticker_bubble_opponent_master";
        else
          v10 = "sticker_bubble_player_master";
        v11 = ResourceManager::getMovieClip((ResourceManager *)"sc/ui_stickers.sc", v10, v9);
        *(_QWORD *)(a1 + 96) = v11;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, v11);
        v12 = (DataIcon *)operator new(112);
        FileName = (const String *)LogicTauntData::getFileName(a2);
        ExportName = (const String *)LogicTauntData::getExportName(a2);
        DataIcon::DataIcon(v12, FileName, ExportName);
        *(_QWORD *)(a1 + 112) = v12;
        v15 = (#1257 *)MovieClip::getMovieClipByName(*(#1257 **)(a1 + 96), "bubble");
        String::String(&v29, "anim");
        DataIcon::replaceInstanceWithIcon(
          (DisplayObject **)v12,
          v15,
          &v29,
          0,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          1,
          0,
          1,
          1);
        String::~String();
      }
      Instance = (LogicTutorialManager *)BattleScreen::getInstance(MovieClipByName);
      if ( ((BattleScreen::isBattleEndHUDVisible(Instance) | a4 ^ 1) & 1) == 0 )
      {
        v24 = *(float *)(LogicDataTables::getClientGlobals() + 152);
        ClientGlobals = (float *)LogicDataTables::getClientGlobals();
        *(float *)(a1 + 108) = v24 - ClientGlobals[36];
        v26 = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)ClientGlobals);
        RenderSystem = BattleScreen::getRenderSystem(v26);
        *(float *)(a1 + 108) = (*(float (__fastcall **)(__int64))(*(_QWORD *)RenderSystem + 72LL))(RenderSystem)
                             * *(float *)(a1 + 108);
      }
      CombatHUD::Taunt::updatePosition((CombatHUD::Taunt *)a1, 0.0, 1);
      MovieClip::playOnce(*v8);
      return a1;
    }

    __n128 __fastcall CombatHUD::Taunt::updatePosition(__int64 a1, int a2, float a3)
    {
      LogicTutorialManager *Instance; // x0
      float *BattleEndHUD; // x0
      float v8; // s11
      float v9; // s1
      float v10; // s9
      float v12; // s10
      float v13; // s0
      float v14; // s0
      long double v15; // q0
      float v16; // s1
      float v17; // s0
      float v18; // s0
    
      Instance = (LogicTutorialManager *)BattleScreen::getInstance((LogicTutorialManager *)a1);
      BattleEndHUD = (float *)BattleScreen::getBattleEndHUD(Instance);
      if ( BattleEndHUD && BattleEndHUD[52] > 2.2 )
      {
        LODWORD(v8) = COERCE_UNSIGNED_INT128(
                        BattleEndHUD::getTauntGlobalPosition(
                          (LogicJSONString *)BattleEndHUD,
                          *(unsigned __int8 *)(a1 + 120)));
        v10 = v9;
      }
      else
      {
        v8 = *(float *)&BattleScreen::LEVEL_CENTER_SCREEN_X;
        v10 = *(float *)(a1 + 108);
        if ( !*(_BYTE *)(a1 + 120) )
          v10 = *(float *)&BattleScreen::STAGE_HEIGHT + v10;
      }
      if ( a2 )
        return DisplayObject::setPixelSnappedXY((DisplayObject *)a1, v8, v10);
      v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(a1)));
      v13 = v12 - v8;
      if ( (float)(v12 - v8) < 0.0 )
        v13 = -v13;
      if ( v13 <= 0.2 )
      {
        v12 = v8;
      }
      else
      {
        v14 = (float)(a3 * 14.0) / 0.016667;
        if ( v14 >= 1.0 )
          v12 = (float)(v8 + (float)(v12 * (float)(v14 + -1.0))) / v14;
      }
      v15 = DisplayObject::getY(a1);
      v16 = *(float *)&v15;
      v17 = *(float *)&v15 - v10;
      if ( v17 < 0.0 )
        v17 = -v17;
      if ( v17 <= 0.2 )
      {
        v16 = v10;
      }
      else
      {
        v18 = (float)(a3 * 14.0) / 0.016667;
        if ( v18 >= 1.0 )
          v16 = (float)(v10 + (float)(v16 * (float)(v18 + -1.0))) / v18;
      }
      return DisplayObject::setXY((DisplayObject *)a1, v12, v16);
    }

    void __fastcall CombatHUD::Taunt::~Taunt(#1359 *this)
    {
      __int64 v2; // x0
      char *v3; // x20
    
      *(_QWORD *)this = off_10046C860;
      v3 = (char *)this + 96;
      v2 = *((_QWORD *)this + 12);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v3[24] = 0;
      *((_QWORD *)v3 + 1) = 0;
      *((_QWORD *)v3 + 2) = 0;
      *(_QWORD *)v3 = 0;
      Sprite::~Sprite(this);
    }

    // attributes: thunk
    void __fastcall CombatHUD::Taunt::~Taunt(#1359 *this)
    {
      __ZN9CombatHUD5TauntD2Ev(this);
    }

    void __fastcall CombatHUD::Taunt::~Taunt(#1359 *this)
    {
      CombatHUD::Taunt::~Taunt(this);
      operator delete(this);
    }

}; // end class CombatHUD::Taunt
