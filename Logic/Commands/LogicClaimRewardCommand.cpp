class LogicClaimRewardCommand
{
public:

    LogicServerCommand *__fastcall LogicClaimRewardCommand::LogicClaimRewardCommand(LogicServerCommand *a1)
    {
      LogicServerCommand *result; // x0
    
      result = LogicServerCommand::LogicServerCommand(a1);
      *(_QWORD *)result = &off_100466F48;
      *((_DWORD *)result + 12) = 0;
      *((_QWORD *)result + 4) = 0;
      *((_QWORD *)result + 5) = 0;
      return result;
    }

    void __fastcall LogicClaimRewardCommand::destruct(LogicServerCommand *a1)
    {
      ChallengeFailedMessage *v2; // x0
      _QWORD *v3; // x19
      ChallengeFailedMessage *v4; // t1
    
      LogicServerCommand::destruct(a1);
      v4 = (ChallengeFailedMessage *)*((_QWORD *)a1 + 4);
      v3 = (_QWORD *)((char *)a1 + 32);
      v2 = v4;
      if ( v4 )
      {
        LogicReward::destruct(v2);
        if ( *v3 )
          operator delete((void *)*v3);
        *v3 = 0;
      }
      *((_DWORD *)v3 + 4) = 0;
      *v3 = 0;
      v3[1] = 0;
    }

    __int64 __fastcall LogicClaimRewardCommand::execute(__int64 a1, UnlockAccountPopup *a2)
    {
      __int64 Home; // x19
      __int64 v5; // x23
      __int64 v6; // x22
      #1146 *v7; // x25
      __int64 SpellCollection; // x27
      __int64 v9; // x19
      LogicSpawnPointData *ChestWithID; // x0
      LogicSpawnPointData *v11; // x21
      __int64 v12; // x0
      LogicSpawnPointData *FreeChest; // x0
      tween::Bounce *PlayerAvatar; // x0
      tween::Bounce *v15; // x21
      int v16; // w19
      int Gold; // w20
      int MaxGold; // w20
      int v19; // w0
      int v20; // w2
      __int64 GameListener; // x19
      unsigned __int64 v22; // x8
      __int64 v23; // x9
      __int64 v24; // x8
      __int64 v25; // x0
      #1146 *v26; // x20
      AcceptChallengeMessage *SelectedDeck; // x28
      int SelectedDeckIdx; // w19
      int v29; // w8
      __int64 v30; // x26
      int **v31; // x9
      int *v32; // x27
      _QWORD *v33; // x9
      InitState *SpellData; // x21
      TextField *SpellByData; // x0
      TextField *v36; // x24
      int v37; // w23
      LogicGameObjectManagerListener *Rarity; // x0
      __int64 v39; // x23
      int v40; // w25
      __int64 v41; // x20
      void (__fastcall *v42)(__int64, __int64, __int64, __int64); // x19
      __int64 GlobalID; // x0
      int v44; // w0
      int ShowNewCount; // w0
      __int64 Listener; // x0
      const char *i; // x21
      __int64 v48; // x8
      int *v49; // x9
      int v51; // t1
      int v52; // w8
      int v53; // w22
      __int64 v54; // x8
      __int64 v55; // x21
      __int64 v56; // x23
      void (__fastcall *v57)(__int64, __int64, __int64, __int64); // x19
      __int64 v58; // x0
      __int64 v59; // x23
      __int64 v60; // x0
      int v61; // w8
      __int64 v62; // x19
      int v63; // w0
      __int64 v64; // x26
      int CurrentTimestamp; // w0
      __int64 v66; // x0
      const char *v67; // x1
      int Exp; // w0
      #1147 *TutorialManager; // x0
      LogicMusicData *CurrentTutorial; // x0
      LogicTutorialManager *v71; // x0
      AcceptChallengeMessage *v72; // x0
      int v73; // w21
      int v74; // w25
      __int64 v75; // x22
      #1146 *v76; // x0
      void (__fastcall *v77)(__int64, __int64, __int64 *, __int64, __int64, __int64, __int64, _QWORD, int); // x20
      __int64 v78; // x24
      __int64 v79; // x19
      int ChestCnt; // w0
      int v82; // [xsp+10h] [xbp-100h]
      char v83; // [xsp+14h] [xbp-FCh]
      GameInputField *v84; // [xsp+18h] [xbp-F8h]
      UnlockAccountPopup *v85; // [xsp+20h] [xbp-F0h]
      AreaEffectObject *v86; // [xsp+28h] [xbp-E8h]
      AreaEffectObject *TreasureChestData; // [xsp+30h] [xbp-E0h]
      __int64 v88; // [xsp+38h] [xbp-D8h]
      __int64 v89; // [xsp+40h] [xbp-D0h]
      int v90; // [xsp+4Ch] [xbp-C4h]
      LogicClientHome *v91; // [xsp+50h] [xbp-C0h]
      __int64 v92; // [xsp+58h] [xbp-B8h]
      __int64 v93; // [xsp+60h] [xbp-B0h]
      tween::Bounce *v94; // [xsp+68h] [xbp-A8h]
      TextField *v95; // [xsp+70h] [xbp-A0h] BYREF
      InitState *v96; // [xsp+78h] [xbp-98h] BYREF
      int *v97; // [xsp+80h] [xbp-90h] BYREF
      int v98; // [xsp+8Ch] [xbp-84h] BYREF
      __int64 v99; // [xsp+90h] [xbp-80h] BYREF
      __int64 v100; // [xsp+98h] [xbp-78h]
      __int64 v101; // [xsp+A0h] [xbp-70h] BYREF
      __int64 v102; // [xsp+A8h] [xbp-68h]
      __int64 v103; // [xsp+B0h] [xbp-60h] BYREF
      __int64 v104; // [xsp+B8h] [xbp-58h]
    
      if ( !*(_QWORD *)(a1 + 32) )
        return 1;
      Home = LogicGameMode::getHome(a2);
      v103 = 0;
      v104 = 0;
      v102 = 4;
      v5 = operator new[](16);
      v101 = v5;
      v6 = **(_QWORD **)(a1 + 32);
      v7 = (#1146 *)Home;
      SpellCollection = LogicClientHome::getSpellCollection((#1146 *)Home);
      switch ( *(_DWORD *)(a1 + 44) )
      {
        case 1:
          ChestWithID = (LogicSpawnPointData *)LogicClientHome::getChestWithID((#1146 *)Home, *(_DWORD *)(a1 + 40));
          v11 = ChestWithID;
          if ( !ChestWithID )
            goto LABEL_15;
          TreasureChestData = (AreaEffectObject *)LogicChest::getTreasureChestData(ChestWithID);
          v12 = LogicChest::getTreasureChestData(v11);
          if ( !(unsigned int)LogicTreasureChestData::isTutorialChest(v12) )
            goto LABEL_16;
          TreasureChestData = (AreaEffectObject *)LogicChest::getTreasureChestData(v11);
          v86 = TreasureChestData;
          goto LABEL_17;
        case 2:
          FreeChest = (LogicSpawnPointData *)LogicClientHome::getFreeChest((#1146 *)Home);
          if ( FreeChest )
            goto LABEL_14;
          goto LABEL_15;
        case 3:
          FreeChest = *(LogicSpawnPointData **)(Home + 184);
          if ( FreeChest )
            goto LABEL_14;
          goto LABEL_15;
        case 4:
          FreeChest = (LogicSpawnPointData *)LogicClientHome::getPurchasedChest((#1146 *)Home);
          if ( FreeChest )
    LABEL_14:
            TreasureChestData = (AreaEffectObject *)LogicChest::getTreasureChestData(FreeChest);
          else
    LABEL_15:
            TreasureChestData = 0;
    LABEL_16:
          v86 = 0;
    LABEL_17:
          PlayerAvatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(a2);
          v15 = PlayerAvatar;
          if ( !PlayerAvatar )
          {
            v9 = 4;
            goto LABEL_95;
          }
          v16 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
          Gold = LogicClientAvatar::getGold(PlayerAvatar);
          if ( Gold + v16 > (int)LogicClientAvatar::getMaxGold(v15) )
          {
            MaxGold = LogicClientAvatar::getMaxGold(v15);
            v19 = LogicClientAvatar::getGold(v15);
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) = LogicMath::max((LogicMath *)(unsigned int)(MaxGold - v19), 0, v20);
          }
          GameListener = LogicGameMode::getGameListener(a2);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)GameListener + 104LL))(GameListener, *(_QWORD *)(a1 + 32));
          v89 = GameListener;
          v94 = v15;
          v85 = a2;
          v88 = a1;
          v99 = 0;
          v100 = 0;
          if ( !v6 )
          {
            v92 = 0;
            v53 = 0;
            v26 = v7;
            goto LABEL_63;
          }
          v22 = *(int *)(v6 + 12);
          v23 = (v22 * (unsigned __int128)4uLL) >> 64;
          v24 = 4 * v22;
          if ( v23 )
            v25 = -1;
          else
            v25 = v24;
          v92 = operator new[](v25);
          v26 = v7;
          SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(v7);
          SelectedDeckIdx = LogicClientHome::getSelectedDeckIdx(v7);
          v98 = SelectedDeckIdx;
          LogicArrayList<LogicSpellData const*>::ensureCapacity((__int64)&v103, *(_DWORD *)(v6 + 12));
          v29 = *(_DWORD *)(v6 + 12);
          if ( v29 < 1 )
          {
            v53 = 0;
            goto LABEL_63;
          }
          v82 = SelectedDeckIdx;
          v84 = (GameInputField *)SpellCollection;
          v91 = v7;
          v30 = 0;
          v90 = 0;
          v83 = 0;
          v93 = v29;
          break;
        default:
          v9 = 3;
          goto LABEL_95;
      }
      while ( 1 )
      {
        v31 = *(int ***)v6;
        v32 = **(int ***)v6;
        *(_DWORD *)(v6 + 12) = v29 - 1;
        if ( v29 >= 2 )
        {
          v33 = v31 + 1;
          do
          {
            *(v33 - 1) = *v33;
            --v29;
            ++v33;
          }
          while ( v29 > 1 );
        }
        v97 = v32;
        SpellData = (InitState *)LogicSpell::getSpellData((TextField *)v32);
        v96 = SpellData;
        if ( (unsigned int)LogicSpellData::isNotInUse(SpellData) )
        {
          if ( !v32 )
            goto LABEL_55;
    LABEL_39:
          LogicSpell::destruct((TextField *)v32);
          operator delete(v32);
          v97 = 0;
          goto LABEL_55;
        }
        LogicArrayList<LogicSpellData const*>::add((__int64)&v103, (__int64 *)&v96);
        SpellByData = (TextField *)LogicClientHome::getSpellByData(v91, SpellData);
        v36 = SpellByData;
        v95 = SpellByData;
        *(_DWORD *)(v92 + 4 * v30) = v32[4];
        if ( SpellByData )
        {
          v37 = LogicSpell::addMaterial(SpellByData, v32[4]);
          Rarity = (LogicGameObjectManagerListener *)LogicSpellData::getRarity(SpellData);
          v39 = (unsigned int)LogicRarityData::getGoldConversionValue(Rarity) * v37;
          if ( (int)v39 >= 1 )
          {
            v40 = LogicClientAvatar::getGold(v94);
            LogicClientAvatar::addFreeGold(v94, v39, 18);
            v41 = LogicClientAvatar::getChangeListener(v94);
            v42 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v41 + 296LL);
            GlobalID = LogicData::getGlobalID(SpellData);
            v42(v41, v39, 18, GlobalID);
            v44 = LogicClientAvatar::getGold(v94);
            (*(void (__fastcall **)(__int64, TextField *, _QWORD))(*(_QWORD *)v89 + 112LL))(
              v89,
              v36,
              (unsigned int)(v44 - v40));
          }
          ShowNewCount = LogicSpell::getShowNewCount(v36);
          LogicSpell::setShowNewCount((__int64)v36, v32[4] + ShowNewCount);
          if ( LogicSpell::getListener(v36) )
          {
            Listener = LogicSpell::getListener(v36);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)Listener + 64LL))(Listener);
          }
          LogicArrayList<LogicSpell *>::add((__int64)&v99, (__int64 *)&v95);
          if ( v32 )
            goto LABEL_39;
        }
        else
        {
          LogicSpellCollection::addSpell(v84, (TextField *)v32);
          LogicSpell::setShowNewIcon((__int64)v32, 1);
          LogicSpell::setShowNewCount((__int64)v32, v32[4]);
          LogicArrayList<LogicSpell *>::add((__int64)&v99, (__int64 *)&v97);
          if ( !v86 || (LogicTreasureChestData::isAddFirstSpellToCollection(v86, v30) & 1) == 0 )
          {
            for ( i = 0; (int)i < (int)LogicSpellDeck::size(SelectedDeck); i = (const char *)(unsigned int)((_DWORD)i + 1) )
            {
              if ( !LogicSpellDeck::getSpell(SelectedDeck, i)
                && (unsigned int)LogicSpellDeck::canBeInserted(SelectedDeck, (const TextField *)v32, (int)i) )
              {
                LogicSpellDeck::moveSpellFromCollection(SelectedDeck, i, v84, *((_DWORD *)v84 + 3) - 1);
                v48 = SHIDWORD(v102);
                v49 = (int *)(v101 + 4LL * (HIDWORD(v102) - 1));
                while ( v48-- >= 1 )
                {
                  v51 = *v49--;
                  if ( v51 == v82 )
                    goto LABEL_53;
                }
                LogicArrayList<int>::add((__int64)&v101, &v98);
    LABEL_53:
                v52 = 0;
                goto LABEL_54;
              }
            }
          }
          v52 = 1;
    LABEL_54:
          v90 += v52;
          v83 = 1;
        }
    LABEL_55:
        if ( ++v30 >= v93 )
          break;
        v29 = *(_DWORD *)(v6 + 12);
      }
      v26 = v91;
      if ( (v83 & 1) != 0 )
        LogicClientHome::updateCardCountToAvatar(v91);
      v53 = v90;
    LABEL_63:
      v54 = *(_QWORD *)(v88 + 32);
      v55 = *(unsigned int *)(v54 + 8);
      if ( (int)v55 >= 1 )
      {
        LogicClientAvatar::addFreeGold(v94, *(_DWORD *)(v54 + 8), 1);
        v56 = LogicClientAvatar::getChangeListener(v94);
        v57 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v56 + 296LL);
        v58 = LogicData::getGlobalID(TreasureChestData);
        v57(v56, v55, 1, v58);
        v54 = *(_QWORD *)(v88 + 32);
      }
      v59 = *(unsigned int *)(v54 + 12);
      if ( (int)v59 >= 1 )
        LogicClientAvatar::addFreeDiamonds(v94, *(_DWORD *)(v54 + 12), 1);
      v60 = LogicClientHome::getChangeListener(v26);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v60 + 32LL))(v60, *(_QWORD *)(v88 + 32));
      LogicClientHome::setClaimingReward(v26, 0);
      v61 = *(_DWORD *)(v88 + 44);
      switch ( v61 )
      {
        case 2:
          v62 = v88;
          CurrentTimestamp = LogicGameMode::getCurrentTimestamp(v85);
          LogicClientHome::freeChestCollected(v26, CurrentTimestamp);
          v64 = 1;
          break;
        case 3:
          v62 = v88;
          v63 = LogicGameMode::getCurrentTimestamp(v85);
          LogicClientHome::crownChestCollected(v26, v63);
          v64 = 4;
          break;
        case 4:
          v62 = v88;
          LogicClientHome::purchasedChestCollected(v26);
          v64 = 5;
          break;
        default:
          v62 = v88;
          v66 = LogicClientHome::getChestWithID(v26, *(_DWORD *)(v88 + 40));
          if ( v66 )
          {
            if ( (unsigned int)LogicChest::getSource(v66) == 1 )
              v64 = 3;
            else
              v64 = 2;
          }
          else
          {
            Debugger::warning((__siginfo *)"LogicClaimRewardCommand::execute pChest is null", v67);
            v64 = 0;
          }
          LogicClientHome::destroyChestWithId(v26, *(_DWORD *)(v88 + 40));
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 96LL))(v89);
          break;
      }
      if ( TreasureChestData )
      {
        Exp = LogicTreasureChestData::getExp(TreasureChestData);
        LogicClientAvatar::xpGainHelper(v94, Exp, v26);
      }
      TutorialManager = (#1147 *)LogicGameMode::getTutorialManager(v85);
      CurrentTutorial = (LogicMusicData *)LogicTutorialManager::getCurrentTutorial(TutorialManager);
      if ( CurrentTutorial && (unsigned int)LogicTutorialData::getFinishRequirement(CurrentTutorial) == 101 )
      {
        v71 = (LogicTutorialManager *)LogicGameMode::getTutorialManager(v85);
        LogicTutorialManager::setCurrentTutorialCompleted(v71);
      }
      if ( v53 >= 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 80LL))(v89);
      if ( HIDWORD(v102) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 88LL))(v89);
      if ( LogicClientAvatar::getChangeListener(v94) )
      {
        v72 = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(v26);
        v73 = LogicSpellDeck::size(v72);
        v74 = *(_DWORD *)(LogicClientHome::getSpellCollection(v26) + 12);
        v75 = LogicClientAvatar::getChangeListener(v94);
        v76 = v26;
        v77 = *(void (__fastcall **)(__int64, __int64, __int64 *, __int64, __int64, __int64, __int64, _QWORD, int))(*(_QWORD *)v75 + 232LL);
        v78 = *(unsigned int *)(v62 + 48);
        v79 = *(unsigned int *)(*(_QWORD *)(v62 + 32) + 8LL);
        ChestCnt = LogicClientHome::getChestCnt(v76);
        v77(v75, v78, &v99, v92, v64, v59, v79, (unsigned int)(v74 + v73), ChestCnt);
      }
      if ( v92 )
        operator delete[](v92);
      if ( v99 )
        operator delete[](v99);
      v9 = 0;
      v99 = 0;
      v100 = 0;
      v5 = v101;
    LABEL_95:
      if ( v5 )
        operator delete[](v5);
      v101 = 0;
      v102 = 0;
      if ( v103 )
        operator delete[](v103);
      v103 = 0;
      v104 = 0;
      return v9;
    }

    __int64 __fastcall LogicClaimRewardCommand::getCommandType(LogicShopSeedChangedCommand *this)
    {
      return 213;
    }

    void __fastcall LogicClaimRewardCommand::setData(LogicShopSeedChangedCommand *this, ChallengeFailedMessage *a2)
    {
      ChallengeFailedMessage *v4; // x0
      void *v5; // x0
    
      v4 = (ChallengeFailedMessage *)*((_QWORD *)this + 4);
      if ( v4 )
      {
        LogicReward::destruct(v4);
        v5 = (void *)*((_QWORD *)this + 4);
        if ( v5 )
          operator delete(v5);
        *((_QWORD *)this + 4) = 0;
      }
      *((_QWORD *)this + 4) = a2;
    }

    __int64 __fastcall LogicClaimRewardCommand::setChestGlobalID(__int64 this, int a2)
    {
      *(_DWORD *)(this + 48) = a2;
      return this;
    }

    __int64 __fastcall LogicClaimRewardCommand::encode(ChallengeFailedMessage **this, #1226 *a2)
    {
      void (__fastcall *v4)(#1226 *, __int64); // x8
    
      v4 = *(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( *(this + 4) )
      {
        v4(a2, 1);
        LogicReward::encode(*(this + 4), a2);
      }
      else
      {
        v4(a2, 0);
      }
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 10));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 11));
      return LogicServerCommand::encode(this, a2);
    }

    __int64 __fastcall LogicClaimRewardCommand::decode(LogicShopSeedChangedCommand *this, #1225 *a2)
    {
      ChallengeFailedMessage *v4; // x0
      void *v5; // x0
      ChallengeFailedMessage *v6; // x21
    
      v4 = (ChallengeFailedMessage *)*((_QWORD *)this + 4);
      if ( v4 )
      {
        LogicReward::destruct(v4);
        v5 = (void *)*((_QWORD *)this + 4);
        if ( v5 )
          operator delete(v5);
        *((_QWORD *)this + 4) = 0;
      }
      if ( (*(unsigned int (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2) )
      {
        v6 = (ChallengeFailedMessage *)operator new(16);
        LogicReward::LogicReward(v6);
        *((_QWORD *)this + 4) = v6;
        LogicReward::decode(v6, a2);
      }
      *((_DWORD *)this + 10) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 11) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      return LogicServerCommand::decode(this, a2);
    }

    __int64 __fastcall LogicClaimRewardCommand::setLocationId(__int64 result, int a2)
    {
      *(_DWORD *)(result + 40) = a2;
      return result;
    }

    __int64 __fastcall LogicClaimRewardCommand::setChestType(__int64 result, int a2)
    {
      *(_DWORD *)(result + 44) = a2;
      return result;
    }

    _QWORD *__fastcall LogicClaimRewardCommand::~LogicClaimRewardCommand(_QWORD *result)
    {
      *result = &off_1004646C8;
      *(_QWORD *)((char *)result + 20) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicClaimRewardCommand::~LogicClaimRewardCommand(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicClaimRewardCommand
