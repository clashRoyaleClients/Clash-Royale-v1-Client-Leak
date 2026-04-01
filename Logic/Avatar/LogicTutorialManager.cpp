class LogicTutorialManager
{
public:

    __int64 __fastcall LogicTutorialManager::LogicTutorialManager(__int64 result)
    {
      *(_QWORD *)(result + 24) = 0;
      *(_DWORD *)(result + 16) = 0;
      *(_QWORD *)result = 0;
      *(_QWORD *)(result + 8) = 0;
      return result;
    }

    _QWORD *__fastcall LogicTutorialManager::init(_QWORD *result, __int64 a2)
    {
      *result = a2;
      return result;
    }

    __int64 __fastcall LogicTutorialManager::destruct(__int64 result)
    {
      *(_QWORD *)(result + 24) = 0;
      *(_DWORD *)(result + 16) = 0;
      *(_QWORD *)result = 0;
      *(_QWORD *)(result + 8) = 0;
      return result;
    }

    __int64 __fastcall LogicTutorialManager::tick(__int64 a1)
    {
      __int64 result; // x0
      const tween::Bounce *v3; // x20
      const LogicMusicData *v4; // x2
      int v5; // w8
      int v6; // w8
      const LogicMusicData *v7; // x2
      int FinishRequirement; // w8
    
      result = LogicGameMode::isImmediateMessageExecution(*(UnlockAccountPopup **)a1);
      if ( (_DWORD)result )
      {
        result = LogicTutorialManager::getPlayerAvatar(a1);
        v3 = (const tween::Bounce *)result;
        if ( result )
        {
          v4 = *(const LogicMusicData **)(a1 + 8);
          if ( v4
            || (result = LogicTutorialManager::startNewTutorial((LogicTutorialManager *)a1, (LogicClientAvatar *)result),
                (v4 = *(const LogicMusicData **)(a1 + 8)) != 0) )
          {
            result = LogicGameMode::hasFinishedTutorial(*(_QWORD *)a1, (__int64)v3, v4);
            if ( (result & 1) == 0 )
            {
              v5 = *(_DWORD *)(a1 + 16);
              if ( v5 < 1 )
              {
                FinishRequirement = LogicTutorialData::getFinishRequirement(*(LogicMusicData **)(a1 + 8));
                if ( FinishRequirement )
                {
                  result = LogicTutorialManager::isActionRequirementMet((DonatorEntry *)a1, FinishRequirement, v7, v3);
                  if ( !(_DWORD)result )
                    return result;
                }
                else
                {
                  result = LogicTutorialManager::requiresInputFromPlayer((DonatorEntry *)a1);
                  if ( (result & 1) != 0 )
                    return result;
                }
                return LogicTutorialManager::setCurrentTutorialCompleted((LogicTutorialManager *)a1);
              }
              v6 = v5 - 50;
              *(_DWORD *)(a1 + 16) = v6;
              if ( v6 <= 0 )
                return LogicTutorialManager::setCurrentTutorialCompleted((LogicTutorialManager *)a1);
            }
          }
        }
      }
      return result;
    }

    tween::Bounce *__fastcall LogicTutorialManager::getPlayerAvatar(__int64 *a1, __int64 a2, const char *a3)
    {
      UnlockAccountPopup *v4; // x8
      UnbindFacebookAccountMessage *v5; // x0
      int v6; // w8
      bool v7; // zf
      tween::Bounce *Avatar; // x0
      tween::Bounce *v9; // x19
      __int64 AccountId; // x0
    
      v4 = (UnlockAccountPopup *)*a1;
      v5 = *(UnbindFacebookAccountMessage **)(*a1 + 168);
      if ( v5 )
      {
        v6 = *((_DWORD *)v5 + 4);
        if ( v6 )
          v7 = v6 == 3;
        else
          v7 = 1;
        if ( v7 )
          return 0;
        Avatar = (tween::Bounce *)LogicBattle::getAvatar(v5, 1u, a3);
      }
      else
      {
        if ( !LogicGameMode::getHome(v4) )
          return 0;
        Avatar = (tween::Bounce *)LogicGameMode::getPlayerAvatar(*a1);
      }
      v9 = Avatar;
      if ( !Avatar )
        return 0;
      AccountId = LogicClientAvatar::getAccountId(Avatar);
      if ( (int)LogicLong::getHigherInt(AccountId) >= 0 )
        return v9;
      else
        return 0;
    }

    bool __fastcall LogicTutorialManager::isTutorialActive(__int64 a1)
    {
      return *(_QWORD *)(a1 + 8) != 0;
    }

    __int64 __fastcall LogicTutorialManager::startNewTutorial(__int64 a1, __int64 a2)
    {
      UnbindFacebookAccountMessage *v4; // x20
      __int64 result; // x0
      int v6; // w0
      int v7; // w21
      __int64 Table; // x23
      int v9; // w24
      CoOpenStreamEntry *v10; // x25
      __int64 v11; // x26
      const LogicMusicData *v12; // x28
      const LogicMusicData *Dependency; // x8
      __int64 LocationData; // x27
      __int64 v15; // x0
      __int64 NpcData; // x27
      __int64 v17; // x0
      const char *v18; // x2
      __int64 SpellToCast; // x27
      LogicSpellListener **LeaderByIndex; // x0
      int FinishRequirement; // w0
      int TotalUpgradeCount; // w27
      AcceptChallengeMessage *LogicDeck; // x0
      char v24; // w22
      char isDisableLeaderMovement; // w0
      char isDisableSpawnPoints; // w0
      int isDisableOpponentSpells; // w0
      int v28; // w2
      const AreaEffectObject *BubbleObject; // x20
      int v30; // w8
      bool v31; // zf
      __int64 GameListener; // x0
      LogicMusicData *v33; // [xsp+0h] [xbp-60h]
      int v34; // [xsp+Ch] [xbp-54h]
    
      v4 = *(UnbindFacebookAccountMessage **)(*(_QWORD *)a1 + 168LL);
      if ( v4 )
      {
        result = LogicBattle::isNPCBattle(*(UnbindFacebookAccountMessage **)(*(_QWORD *)a1 + 168LL));
        if ( !(_DWORD)result )
          return result;
        v6 = 48;
        v7 = 1;
      }
      else
      {
        v7 = 0;
        v6 = 45;
      }
      Table = LogicDataTables::getTable(v6);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
      result = LogicGameMode::getHome(*(UnlockAccountPopup **)a1);
      v10 = (CoOpenStreamEntry *)result;
      if ( v9 >= 1 )
      {
        v33 = 0;
        v11 = 0;
        v34 = -100000;
        while ( 1 )
        {
          v12 = (const LogicMusicData *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v11);
          result = LogicGameMode::hasFinishedTutorial(*(_QWORD *)a1, a2, v12);
          if ( (result & 1) == 0 )
          {
            Dependency = (const LogicMusicData *)LogicTutorialData::getDependency(v12);
            if ( !Dependency || (result = LogicGameMode::hasFinishedTutorial(*(_QWORD *)a1, a2, Dependency), (_DWORD)result) )
            {
              if ( v7 )
              {
                LocationData = LogicBattle::getLocationData(v4);
                v15 = LogicTutorialData::getLocationData(v12);
                result = LogicData::equals(LocationData, v15);
                if ( (_DWORD)result )
                {
                  NpcData = LogicBattle::getNpcData(v4);
                  v17 = LogicTutorialData::getNpcData(v12);
                  result = LogicData::equals(NpcData, v17);
                  if ( (_DWORD)result )
                  {
                    SpellToCast = LogicTutorialData::getSpellToCast(v12);
                    if ( !SpellToCast )
                      goto LABEL_28;
                    LeaderByIndex = (LogicSpellListener **)LogicBattle::getLeaderByIndex(v4, 1u, v18);
                    result = LogicSummoner::hasSpellInHand(LeaderByIndex, SpellToCast);
                    if ( (result & 1) != 0 )
                      goto LABEL_28;
                  }
                }
              }
              else if ( !a2 || (result = LogicClientAvatar::getNpcWinCount(a2), (int)result >= *((_DWORD *)v12 + 42)) )
              {
                FinishRequirement = LogicTutorialData::getFinishRequirement(v12);
                switch ( FinishRequirement )
                {
                  case 'n':
                    result = LogicClientHome::getSpellCollection(v10);
                    if ( *(int *)(result + 12) >= 1 )
                    {
                      LogicDeck = (AcceptChallengeMessage *)LogicClientHome::getLogicDeck(v10, 0);
                      result = LogicSpellDeck::isFull(LogicDeck);
                      if ( (result & 1) == 0 )
                      {
    LABEL_28:
                        result = LogicTutorialData::getPriority(v12);
                        if ( (int)result > v34 )
                        {
                          result = LogicTutorialData::getPriority(v12);
                          v34 = result;
                          v33 = v12;
                        }
                      }
                    }
                    break;
                  case 'j':
                    result = LogicClientHome::getAvailableUpgradeCount((__int64)v10);
                    if ( (_DWORD)result )
                    {
                      TotalUpgradeCount = LogicClientHome::getTotalUpgradeCount((__int64)v10);
                      result = LogicDataTables::getGlobals();
                      if ( TotalUpgradeCount < *(_DWORD *)(result + 408) )
                        goto LABEL_28;
                    }
                    break;
                  case 'e':
                    result = LogicClientHome::getChestCnt(v10);
                    if ( (_DWORD)result )
                      goto LABEL_28;
                    break;
                  default:
                    goto LABEL_28;
                }
              }
            }
          }
          v11 = (unsigned int)(v11 + 1);
          if ( v9 == (_DWORD)v11 )
          {
            if ( v33 )
            {
              *(_QWORD *)(a1 + 8) = v33;
              *(_DWORD *)(a1 + 16) = LogicTutorialData::getWaitTimeMS(v33);
              if ( v7 )
              {
                v24 = LogicTutorialData::isDisableTroopMovement(v33) ^ 1;
                isDisableLeaderMovement = LogicTutorialData::isDisableLeaderMovement(v33);
                LogicTutorialManager::setMovementEnabled((DonatorEntry *)a1, v24, isDisableLeaderMovement != 1);
                isDisableSpawnPoints = LogicTutorialData::isDisableSpawnPoints(v33);
                LogicBattle::setSpawnPointsEnabled(v4, isDisableSpawnPoints != 1);
                isDisableOpponentSpells = LogicTutorialData::isDisableOpponentSpells(v33);
                LogicBattle::setNPCSpellsEnabled((__int64)v4, isDisableOpponentSpells != 1, v28);
                *(_QWORD *)(a1 + 24) = 0;
                BubbleObject = (const AreaEffectObject *)LogicTutorialData::getBubbleObject((__int64)v33);
                v30 = *(_DWORD *)LogicTutorialData::getBubbleExportName(v33);
                if ( BubbleObject )
                  v31 = v30 == 0;
                else
                  v31 = 1;
                if ( !v31 )
                  *(_QWORD *)(a1 + 24) = LogicGameObjectManager::getGameObjectByDataIndex(
                                           *(LogicSpellListener **)(*(_QWORD *)a1 + 64LL),
                                           BubbleObject,
                                           0);
              }
              GameListener = LogicGameMode::getGameListener(*(UnlockAccountPopup **)a1);
              return (*(__int64 (__fastcall **)(__int64, LogicMusicData *))(*(_QWORD *)GameListener + 208LL))(
                       GameListener,
                       v33);
            }
            return result;
          }
        }
      }
      return result;
    }

    __int64 __fastcall LogicTutorialManager::setCurrentTutorialCompleted(__int64 a1, __int64 a2, const char *a3)
    {
      tween::Bounce *PlayerAvatar; // x20
      _BOOL4 isNPCMode; // w8
      UnbindFacebookAccountMessage **v6; // x0
      __int64 Home; // x0
      __int64 v8; // x0
      __int64 GameListener; // x0
    
      PlayerAvatar = LogicTutorialManager::getPlayerAvatar((__int64 *)a1, a2, a3);
      isNPCMode = LogicTutorialData::isNPCMode(*(ResetAccountMessage ***)(a1 + 8));
      v6 = *(UnbindFacebookAccountMessage ***)a1;
      if ( isNPCMode )
      {
        LogicBattle::setTutorialCompleted(v6[21], *(const LogicMusicData **)(a1 + 8));
      }
      else
      {
        Home = LogicGameMode::getHome((UnlockAccountPopup *)v6);
        LogicClientHome::setTutorialFinished(Home, *(AreaEffectObject **)(a1 + 8));
      }
      if ( LogicClientAvatar::getChangeListener(PlayerAvatar) )
      {
        v8 = LogicClientAvatar::getChangeListener(PlayerAvatar);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 136LL))(v8, *(_QWORD *)(a1 + 8));
      }
      *(_DWORD *)(a1 + 16) = 0;
      GameListener = LogicGameMode::getGameListener(*(UnlockAccountPopup **)a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)GameListener + 216LL))(GameListener, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      return LogicTutorialManager::startNewTutorial(a1, (__int64)PlayerAvatar);
    }

    __int64 __fastcall LogicTutorialManager::isActionRequirementMet(
            DonatorEntry *this,
            int a2,
            const LogicMusicData *a3,
            const tween::Bounce *a4)
    {
      __int64 AccountId; // x0
      int HigherInt; // w22
      __int64 v9; // x0
      const char *v10; // x2
      int LowerInt; // w23
      tween::Bounce *Avatar; // x0
      __int64 v13; // x25
      int v14; // w24
      int v15; // w8
      __int64 result; // x0
      __int64 Home; // x0
      int TotalUpgradeCount; // w19
      CoOpenStreamEntry *v19; // x0
      AcceptChallengeMessage *LogicDeck; // x0
      __int64 LeaderByIndex; // x0
      UnbindFacebookAccountMessage *v22; // x19
      int *v23; // x0
      unsigned int AccountIndex; // w0
      unsigned int v25; // w20
      const char *v26; // x2
      GameMode *v27; // x21
      const char *v28; // x2
      LogicSpellListener **v29; // x0
    
      AccountId = LogicClientAvatar::getAccountId(a4);
      HigherInt = LogicLong::getHigherInt(AccountId);
      v9 = LogicClientAvatar::getAccountId(a4);
      LowerInt = LogicLong::getLowerInt(v9);
      if ( *(_QWORD *)(*(_QWORD *)this + 168LL) )
      {
        Avatar = (tween::Bounce *)LogicGameMode::getAvatar(*(_QWORD *)this, 0);
        v13 = LogicClientAvatar::getAccountId(Avatar);
        v14 = LogicLong::getHigherInt(v13);
        v15 = LogicLong::getLowerInt(v13);
      }
      else
      {
        v15 = -1;
        v14 = -1;
      }
      result = 1;
      if ( a2 > 101 )
      {
        switch ( a2 )
        {
          case 'f':
            result = LogicClientAvatar::getNameSetByUser(a4);
            break;
          case 'g':
            return result;
          case 'j':
            Home = LogicGameMode::getHome(*(UnlockAccountPopup **)this);
            TotalUpgradeCount = LogicClientHome::getTotalUpgradeCount(Home);
            result = TotalUpgradeCount >= *(_DWORD *)(LogicDataTables::getGlobals() + 408);
            break;
          case 'n':
            v19 = (CoOpenStreamEntry *)LogicGameMode::getHome(*(UnlockAccountPopup **)this);
            LogicDeck = (AcceptChallengeMessage *)LogicClientHome::getLogicDeck(v19, 0);
            result = LogicSpellDeck::isFull(LogicDeck);
            break;
          default:
    LABEL_9:
            result = 0;
            break;
        }
      }
      else
      {
        switch ( a2 )
        {
          case 0:
            return result;
          case 1:
            result = LogicTutorialManager::areAllTroopsDead(this, HigherInt, LowerInt);
            break;
          case 2:
            result = LogicTutorialManager::areAllTroopsDead(this, v14, v15);
            break;
          case 3:
            LeaderByIndex = LogicBattle::getLeaderByIndex(
                              *(UnbindFacebookAccountMessage **)(*(_QWORD *)this + 168LL),
                              0,
                              v10);
            result = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)LeaderByIndex + 152LL))(LeaderByIndex) ^ 1;
            break;
          case 7:
            v22 = *(UnbindFacebookAccountMessage **)(*(_QWORD *)this + 168LL);
            v23 = (int *)LogicBattle::getAccountId(v22, 0, v10);
            AccountIndex = LogicBattle::getAccountIndex(v22, *v23, v23[1]);
            v25 = (AccountIndex & 1) == 0;
            v27 = (GameMode *)LogicBattle::getLeaderByIndex(v22, AccountIndex, v26);
            v29 = (LogicSpellListener **)LogicBattle::getLeaderByIndex(v22, v25, v28);
            result = (int)LogicSummoner::getStars(v29, v27) > 0;
            break;
          default:
            goto LABEL_9;
        }
      }
      return result;
    }

    bool __fastcall LogicTutorialManager::requiresInputFromPlayer(DonatorEntry *this)
    {
      __int64 v2; // x0
      int FinishRequirement; // w0
    
      v2 = *((_QWORD *)this + 1);
      if ( !v2 )
        return 0;
      if ( LogicTutorialData::getBubbleObject(v2) )
        return 1;
      if ( *((int *)this + 4) > 0 )
        return 0;
      FinishRequirement = LogicTutorialData::getFinishRequirement(*((LogicMusicData **)this + 1));
      if ( FinishRequirement > 108 )
      {
        if ( FinishRequirement == 109 || FinishRequirement == 111 )
          return 1;
      }
      else
      {
        if ( FinishRequirement == 6 )
          return 0;
        if ( FinishRequirement == 108 )
          return 1;
      }
      if ( *(_DWORD *)LogicTutorialData::getOverlayExportName(*((LogicMusicData **)this + 1))
        || *(_DWORD *)LogicTutorialData::getPopupExportName(*((LogicMusicData **)this + 1)) )
      {
        return 1;
      }
      return *(_DWORD *)LogicTutorialData::getSpellDragExportName(*((LogicMusicData **)this + 1)) != 0;
    }

    __int64 __fastcall LogicTutorialManager::encode(AreaEffectObject **this, ExpBar *a2)
    {
      __int64 result; // x0
    
      ByteStreamHelper::writeDataReference((__int64)a2, *(this + 1));
      result = (*(__int64 (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 4));
      if ( *((_QWORD *)*this + 21) )
        return LogicGameObjectManager::writeGameObjectReference(*((LogicSpellListener **)*this + 8), a2, *(this + 3));
      return result;
    }

    __int64 __fastcall LogicTutorialManager::decode(DonatorEntry *this, ChallengePopup *a2)
    {
      __int64 result; // x0
    
      *((_QWORD *)this + 1) = ByteStreamHelper::readDataReference((__int64)a2, 49);
      result = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 4) = result;
      if ( *(_QWORD *)(*(_QWORD *)this + 168LL) )
      {
        result = LogicGameObjectManager::readGameObjectReference(*(LogicSpellListener **)(*(_QWORD *)this + 64LL), a2);
        *((_QWORD *)this + 3) = result;
      }
      return result;
    }

    void __fastcall LogicTutorialManager::setMovementEnabled(DonatorEntry *this, int a2, int a3)
    {
      __int64 v5; // x0
      _QWORD *v6; // x21
      int v7; // w23
      __int64 v8; // x24
      AllianceJoinFailedMessage *v9; // x22
      __int64 v10; // x0
      int v11; // w2
    
      LogicGameObjectManager::getGameObjects(*(LogicSpellListener **)(*(_QWORD *)this + 64LL));
      v6 = (_QWORD *)v5;
      v7 = *(_DWORD *)(v5 + 12);
      if ( v7 >= 1 )
      {
        v8 = 0;
        do
        {
          v9 = *(AllianceJoinFailedMessage **)(*v6 + 8 * v8);
          if ( (*(unsigned int (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)v9 + 88LL))(v9) == 5 )
          {
            if ( (unsigned int)LogicCharacter::isLeader(v9) )
            {
              v10 = (__int64)v9;
              v11 = a3;
            }
            else
            {
              v10 = (__int64)v9;
              v11 = a2;
            }
            LogicGameObject::enableComponent(v10, 1, v11);
          }
          ++v8;
        }
        while ( v7 != (_DWORD)v8 );
      }
    }

    __int64 __fastcall LogicTutorialManager::getCurrentTutorial(DonatorEntry *this)
    {
      return *((_QWORD *)this + 1);
    }

    __int64 __fastcall LogicTutorialManager::isCombatPaused(DonatorEntry *this)
    {
      LogicMusicData *v1; // x0
    
      v1 = (LogicMusicData *)*((_QWORD *)this + 1);
      if ( v1 )
        return LogicTutorialData::isPauseCombat(v1);
      else
        return 0;
    }

    bool __fastcall LogicTutorialManager::isHideCombatUI(DonatorEntry *this)
    {
      LogicMusicData *v1; // x0
    
      v1 = (LogicMusicData *)*((_QWORD *)this + 1);
      return v1 && (LogicTutorialData::isHideCombatUI(v1) & 1) != 0;
    }

    __int64 __fastcall LogicTutorialManager::areAllTroopsDead(DonatorEntry *this, int a2, int a3)
    {
      LogicSpellListener *v5; // x21
      int SearchStartIndex; // w22
      __int64 v7; // x0
      _QWORD *v8; // x21
      __int64 v9; // x24
      __int64 i; // x25
      LogicSpellListener **v11; // x22
      __int64 OwnerAccountId; // x23
    
      v5 = *(LogicSpellListener **)(*(_QWORD *)this + 64LL);
      SearchStartIndex = LogicGameObjectManager::getSearchStartIndex(v5, 5, a3);
      LogicGameObjectManager::getGameObjects(v5);
      v8 = (_QWORD *)v7;
      v9 = *(int *)(v7 + 12);
      if ( SearchStartIndex < (int)v9 )
      {
        for ( i = SearchStartIndex; i < v9; ++i )
        {
          v11 = *(LogicSpellListener ***)(*v8 + 8 * i);
          if ( (*((unsigned int (__fastcall **)(LogicSpellListener **))*v11 + 11))(v11) != 5 )
            break;
          OwnerAccountId = LogicGameObject::getOwnerAccountId(v11);
          if ( (unsigned int)LogicLong::getHigherInt(OwnerAccountId) == a2
            && (unsigned int)LogicLong::getLowerInt(OwnerAccountId) == a3
            && (LogicCharacter::isLeader((AllianceJoinFailedMessage *)v11) & 1) == 0
            && LogicGameObject::hasMovementComponent((GameMode *)v11) )
          {
            return 0;
          }
        }
      }
      return 1;
    }

    __int64 __fastcall LogicTutorialManager::getTutorialSpeechBubbleObject(__int64 a1)
    {
      return *(_QWORD *)(a1 + 24);
    }

    __int64 __fastcall LogicTutorialManager::isMovementEnabled(__int64 a1, int a2)
    {
      LogicMusicData *v2; // x0
      int isDisableLeaderMovement; // w0
    
      v2 = *(LogicMusicData **)(a1 + 8);
      if ( !v2 )
        return 1;
      if ( a2 )
        isDisableLeaderMovement = LogicTutorialData::isDisableLeaderMovement(v2);
      else
        isDisableLeaderMovement = LogicTutorialData::isDisableTroopMovement(v2);
      return isDisableLeaderMovement ^ 1u;
    }

}; // end class LogicTutorialManager
