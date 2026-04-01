class GainedStar
{
public:

    void __fastcall GainedStar::GainedStar(GainedStar *this, const #1060 *a2)
    {
      vm_address_t *RealOwnerAccountId; // x21
      #945 *Instance; // x0
      #962 *BattleBottomAvatar; // x0
      __int64 AccountId; // x0
      const char *v8; // x2
      const char *v9; // x1
      MovieClip *MovieClip; // x0
    
      Sprite::Sprite(this, 2);
      *(_QWORD *)this = off_10045F560;
      *((_QWORD *)this + 12) = 0;
      *((_WORD *)this + 72) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_DWORD *)this + 23) = -1;
      RealOwnerAccountId = (vm_address_t *)LogicGameObject::getRealOwnerAccountId(a2);
      Instance = (#945 *)GameMode::getInstance(RealOwnerAccountId);
      BattleBottomAvatar = (#962 *)GameMode::getBattleBottomAvatar(Instance);
      AccountId = LogicClientAvatar::getAccountId(BattleBottomAvatar);
      *((_BYTE *)this + 144) = LogicLong::equals(RealOwnerAccountId, AccountId) ^ 1;
      *((_DWORD *)this + 24) = LogicGameObject::getRealOwnerIndex(a2);
      *((_DWORD *)this + 23) = LogicGameObject::getGlobalID(a2);
      if ( *((_BYTE *)this + 144) )
        v9 = "star_appear";
      else
        v9 = "star_appear_enemy";
      MovieClip = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)"sc/effects.sc", v9, v8);
      *((_QWORD *)this + 15) = MovieClip;
      MovieClip::stop(MovieClip);
      *((_DWORD *)this + 25) = MovieClip::getFrameIndex(*((_QWORD *)this + 15), "startMove");
      *((_DWORD *)this + 28) = MovieClip::getTotalFrames(*((#1257 **)this + 15));
      *((float *)this + 27) = MovieClip::getMSPerFrame(*((_QWORD *)this + 15)) * (float)*((int *)this + 28);
      (*(void (__fastcall **)(GainedStar *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 15));
      *((_BYTE *)this + 8) = 0;
    }

    // attributes: thunk
    void __fastcall GainedStar::GainedStar(GainedStar *this, const #1060 *a2)
    {
      __ZN10GainedStarC2EPK14LogicCharacter(this, a2);
    }

    void __fastcall GainedStar::~GainedStar(DropGUIContainer *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_10045F560;
      v2 = *((_QWORD *)this + 15);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_WORD *)this + 72) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_DWORD *)this + 23) = -1;
      Sprite::~Sprite(this);
    }

    // attributes: thunk
    void __fastcall GainedStar::~GainedStar(DropGUIContainer *this)
    {
      __ZN10GainedStarD2Ev(this);
    }

    void __fastcall GainedStar::~GainedStar(DropGUIContainer *this)
    {
      GainedStar::~GainedStar(this);
      operator delete(this);
    }

    __int64 __fastcall GainedStar::setPath(__int64 result, _QWORD *a2, _QWORD *a3)
    {
      *(_QWORD *)(result + 128) = *a2;
      *(_QWORD *)(result + 136) = *a3;
      return result;
    }

    __int64 __fastcall GainedStar::update(MovieClip **this, float a2)
    {
      __int64 result; // x0
      float v5; // s0
      __int64 v6; // x20
      __int64 PlayerGainedStar; // x0
      float v8; // s1
      int v9; // s2
      bool v10; // w8
      float v11; // s0
      int v12; // w20
      int v13; // w8
      float v14; // s0
      float v15; // s0
      float v16; // s1
    
      result = GainedStar::triggered((DropGUIContainer *)this);
      if ( (result & 1) != 0 )
      {
        v5 = *((float *)this + 26);
        if ( v5 == 0.0 )
        {
          v6 = SoundManager::sm_pInstance;
          if ( SoundManager::sm_pInstance )
          {
            if ( *((_BYTE *)this + 144) )
              PlayerGainedStar = LogicDataTables::getPlayerGainedStar((LogicDataTables *)result);
            else
              PlayerGainedStar = LogicDataTables::getEnemyGainedStar((LogicDataTables *)result);
            SoundManager::playSound(v6, PlayerGainedStar, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
            v5 = *((float *)this + 26);
          }
        }
        v8 = *((float *)this + 27);
        v9 = *((_DWORD *)this + 28);
        v10 = v5 < v8;
        v11 = v5 + a2;
        *((float *)this + 26) = v11;
        *((_BYTE *)this + 145) = v10 && v11 >= v8;
        v12 = (int)(float)((float)(v11 * (float)v9) / v8);
        MovieClip::gotoAndStopFrameIndex(*(this + 15), v12);
        v13 = *((_DWORD *)this + 25);
        v14 = *((float *)this + 29);
        if ( v12 >= v13 )
        {
          v14 = v14 + a2;
          *((float *)this + 29) = v14;
        }
        v15 = v14
            / (float)((float)(*((float *)this + 27) * (float)(*((_DWORD *)this + 28) - v13)) / (float)*((int *)this + 28));
        v16 = 1.0;
        if ( v15 <= 1.0 )
          v16 = v15;
        result = DisplayObject::setXY(
                   (DisplayObject *)this,
                   *((float *)this + 32) + (float)(v16 * (float)(*((float *)this + 34) - *((float *)this + 32))),
                   *((float *)this + 33) + (float)(v16 * (float)(*((float *)this + 35) - *((float *)this + 33))));
        *((_BYTE *)this + 8) = *((float *)this + 26) < *((float *)this + 27);
      }
      else
      {
        *((_DWORD *)this + 26) = 0;
        *((_BYTE *)this + 8) = 0;
      }
      return result;
    }

    __int64 __fastcall GainedStar::triggered(DropGUIContainer *this)
    {
      UnbindFacebookAccountMessage *v2; // x20
      const char *v3; // x2
      GameMode *LeaderByIndex; // x21
      const char *v5; // x2
      __int64 LeaderTowers; // x20
      __int64 v7; // x21
    
      v2 = *(UnbindFacebookAccountMessage **)(*(_QWORD *)(GameMode::getInstance((vm_address_t *)this) + 112LL) + 168LL);
      LeaderByIndex = (GameMode *)LogicBattle::getLeaderByIndex(v2, *((_DWORD *)this + 24), v3);
      if ( !(*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)LeaderByIndex + 152LL))(LeaderByIndex) )
        return 1;
      if ( (unsigned int)LogicGameObject::getGlobalID(LeaderByIndex) != *((_DWORD *)this + 23) )
      {
        LeaderTowers = LogicBattle::getLeaderTowers(v2, *((_DWORD *)this + 24), v5);
        if ( *(int *)(LeaderTowers + 12) >= 1 )
        {
          v7 = 0;
          while ( (unsigned int)LogicGameObject::getGlobalID(*(GameMode **)(*(_QWORD *)LeaderTowers + 8 * v7)) != *((_DWORD *)this + 23) )
          {
            if ( ++v7 >= *(int *)(LeaderTowers + 12) )
              return 1;
          }
          return 0;
        }
        return 1;
      }
      return 0;
    }

    __int64 __fastcall GainedStar::getScoreBlink(DropGUIContainer *this)
    {
      __int64 v1; // x8
    
      v1 = *((unsigned __int8 *)this + 145);
      *((_BYTE *)this + 145) = 0;
      return v1;
    }

    bool __fastcall GainedStar::isAnimating(DropGUIContainer *this)
    {
      return (unsigned int)GainedStar::triggered(this) && *((float *)this + 26) < *((float *)this + 27);
    }

}; // end class GainedStar
