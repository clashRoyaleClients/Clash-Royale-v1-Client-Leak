class LogicGameObject
{
public:

    void __fastcall LogicGameObject::createReferences(GameMode *this)
    {
      ;
    }

    void __fastcall LogicGameObject::onDeath(GameMode *this)
    {
      ;
    }

    void __fastcall LogicGameObject::aboutToBeDestroyed(GameMode *this)
    {
      ;
    }

    __int64 __fastcall LogicGameObject::getSize(GameMode *this)
    {
      return 100;
    }

    __int64 __fastcall LogicGameObject::isFlying(GameMode *this)
    {
      return 0;
    }

    void __fastcall LogicGameObject::addPendingPhysicalDamage(GameMode *this)
    {
      ;
    }

    __int64 __fastcall LogicGameObject::getPendingPhysicalDamage(GameMode *this)
    {
      return 0;
    }

    void __fastcall LogicGameObject::LogicGameObject(LogicGameObject *this, const AreaEffectObject *a2)
    {
      LogicDataTables *v4; // x0
      HomeScreen *Globals; // x0
      AvatarNameChangeFailedMessage *DefaultGameObjectListener; // x0
    
      *(_QWORD *)this = off_100461030;
      LogicVector2::LogicVector2((LogicGameObject *)((char *)this + 52));
      v4 = LogicVector2::LogicVector2((LogicGameObject *)((char *)this + 60));
      *(_QWORD *)((char *)this + 14) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_DWORD *)this + 12) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_DWORD *)this + 29) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      *(_QWORD *)((char *)this + 92) = 0;
      *(_QWORD *)((char *)this + 84) = 0;
      *(_QWORD *)((char *)this + 76) = 0;
      *(_QWORD *)((char *)this + 68) = 0;
      *((_QWORD *)this + 3) = a2;
      *(_QWORD *)((char *)this + 52) = 0x7FFFFFFF7FFFFFFFLL;
      Globals = (HomeScreen *)LogicDataTables::getGlobals(v4);
      DefaultGameObjectListener = (AvatarNameChangeFailedMessage *)LogicGlobals::getDefaultGameObjectListener(Globals);
      LogicGameObject::setListener(this, DefaultGameObjectListener);
    }

    AvatarNameChangeFailedMessage **__fastcall LogicGameObject::setListener(
            AvatarNameChangeFailedMessage **this,
            AvatarNameChangeFailedMessage *a2)
    {
      AvatarNameChangeFailedMessage **v3; // x20
      HomeScreen *Globals; // x0
      __int64 DefaultGameObjectListener; // x8
    
      v3 = this;
      if ( *(this + 5) != a2 )
      {
        Globals = (HomeScreen *)LogicDataTables::getGlobals((LogicDataTables *)this);
        DefaultGameObjectListener = LogicGlobals::getDefaultGameObjectListener(Globals);
        this = (AvatarNameChangeFailedMessage **)v3[5];
        if ( (AvatarNameChangeFailedMessage **)DefaultGameObjectListener != this && this != 0 )
        {
          (*((void (__fastcall **)(AvatarNameChangeFailedMessage **))*this + 2))(this);
          this = (AvatarNameChangeFailedMessage **)v3[5];
          if ( this )
            this = (AvatarNameChangeFailedMessage **)(*((__int64 (__fastcall **)(AvatarNameChangeFailedMessage **))*this + 1))(this);
          v3[5] = 0;
        }
        v3[5] = a2;
      }
      return this;
    }

    __int64 __fastcall LogicGameObject::attachLogicGameObjectManager(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 32) = a2;
      return result;
    }

    __int64 __fastcall LogicGameObject::addComponent(GameMode *this, Sprite *a2)
    {
      __int64 result; // x0
      const char *v5; // x1
      char *v6; // x8
      _QWORD *v7; // x8
      __int64 v8; // t1
    
      result = (*(__int64 (__fastcall **)(Sprite *))(*(_QWORD *)a2 + 32LL))(a2);
      v6 = (char *)this + 8 * (int)result;
      v8 = *((_QWORD *)v6 + 10);
      v7 = v6 + 80;
      if ( v8 )
        Debugger::error((__siginfo *)"LogicGameObject::addComponent - Component is already added.", v5);
      *v7 = a2;
      *((_DWORD *)this + 19) |= 1 << result;
      return result;
    }

    __int64 __fastcall LogicGameObject::enableComponent(__int64 this, int a2, int a3)
    {
      int v3; // w8
      int v4; // w8
    
      if ( *(_QWORD *)(this + 8LL * a2 + 80) )
      {
        v3 = 1 << a2;
        if ( a3 )
          v4 = *(_DWORD *)(this + 76) | v3;
        else
          v4 = *(_DWORD *)(this + 76) & ~v3;
        *(_DWORD *)(this + 76) = v4;
      }
      return this;
    }

    __int64 __fastcall LogicGameObject::getComponent(GameMode *this, int a2)
    {
      if ( (*((_DWORD *)this + 19) & (1 << a2)) != 0 )
        return *((_QWORD *)this + a2 + 10);
      else
        return 0;
    }

    __int64 __fastcall LogicGameObject::removeGameObjectReferences(
            GameMode *this,
            const GameMode *a2,
            __int64 a3,
            __int64 a4,
            GameMode *a5)
    {
      __int64 v9; // x23
      char *v10; // x24
      __int64 result; // x0
    
      v9 = 0;
      v10 = (char *)this + 80;
      do
      {
        result = *(_QWORD *)&v10[v9];
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64, const GameMode *, __int64, __int64, GameMode *))(*(_QWORD *)result
                                                                                                      + 56LL))(
                     result,
                     a2,
                     a3,
                     a4,
                     a5);
        v9 += 8;
      }
      while ( v9 != 32 );
      return result;
    }

    __int64 __fastcall LogicGameObject::getData(GameMode *this)
    {
      return *((_QWORD *)this + 3);
    }

    void __fastcall LogicGameObject::tick(GameMode *this)
    {
      ;
    }

    __int64 __fastcall LogicGameObject::encodeComponent(__int64 a1, __int64 a2, int a3)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 8LL * a3 + 80);
      if ( result )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 40LL))(result);
      return result;
    }

    __int64 __fastcall LogicGameObject::encode(GameMode *this, #1226 *a2)
    {
      const LogicVector2 *v4; // x2
    
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 12));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 19));
      ByteStreamHelper::encodeVector(a2, (GameMode *)((char *)this + 52), v4);
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 17));
    }

    __int64 __fastcall LogicGameObject::decodeComponent(__int64 a1, __int64 a2, int a3)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 8LL * a3 + 80);
      if ( result )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 48LL))(result);
      return result;
    }

    __int64 __fastcall LogicGameObject::decode(GameMode *this, #1225 *a2)
    {
      LogicVector2 *v4; // x2
      __int64 result; // x0
    
      *((_DWORD *)this + 12) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 19) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      ByteStreamHelper::decodeVector(a2, (GameMode *)((char *)this + 52), v4);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 17) = result;
      return result;
    }

    __int64 __fastcall LogicGameObject::destruct(GameMode *this)
    {
      __int64 v2; // x20
      char *v3; // x21
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 result; // x0
    
      LogicGameObject::setListener((AvatarNameChangeFailedMessage **)this, 0);
      v2 = 0;
      v3 = (char *)this + 80;
      do
      {
        v4 = *(_QWORD *)&v3[v2];
        if ( v4 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
          v5 = *(_QWORD *)&v3[v2];
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          *(_QWORD *)&v3[v2] = 0;
        }
        v2 += 8;
      }
      while ( v2 != 32 );
      LogicVector2::destruct((GameMode *)((char *)this + 52));
      result = LogicVector2::destruct((GameMode *)((char *)this + 60));
      *(_QWORD *)((char *)this + 14) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_DWORD *)this + 12) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_DWORD *)this + 29) = 0;
      *(_QWORD *)((char *)this + 108) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      *(_QWORD *)((char *)this + 92) = 0;
      *(_QWORD *)((char *)this + 84) = 0;
      *(_QWORD *)((char *)this + 76) = 0;
      *(_QWORD *)((char *)this + 68) = 0;
      return result;
    }

    __int64 __fastcall LogicGameObject::canBeSaved(GameMode *this)
    {
      return (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)this + 40LL))(this) ^ 1;
    }

    __int64 __fastcall LogicGameObject::getLogicBattle(LogicSpellListener **this)
    {
      return LogicGameObjectManager::getLogicBattle(*(this + 4));
    }

    __int64 __fastcall LogicGameObject::getLogicGameObjectManager(GameMode *this)
    {
      return *((_QWORD *)this + 4);
    }

    __int64 __fastcall LogicGameObject::getGlobalID(GameMode *this)
    {
      return *((unsigned int *)this + 4);
    }

    __int64 __fastcall LogicGameObject::getOwnerAccountId(LogicSpellListener **this)
    {
      UnbindFacebookAccountMessage *LogicBattle; // x20
      unsigned int OwnerIndex; // w1
      const char *v4; // x2
    
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObjectManager::getLogicBattle(*(this + 4));
      OwnerIndex = LogicGameObject::getOwnerIndex((GameMode *)this);
      return LogicBattle::getAccountId(LogicBattle, OwnerIndex, v4);
    }

    __int64 __fastcall LogicGameObject::getOwnerIndex(GameMode *this)
    {
      FriendListMessage *v2; // x0
    
      if ( (*((_BYTE *)this + 76) & 8) != 0
        && (v2 = (FriendListMessage *)*((_QWORD *)this + 13)) != 0
        && LogicCharacterBuffComponent::isControlChanged(v2) )
      {
        return (*((_DWORD *)this + 12) & 1) == 0;
      }
      else
      {
        return *((unsigned int *)this + 12);
      }
    }

    __int64 __fastcall LogicGameObject::getRealOwnerAccountId(GameMode *this)
    {
      UnbindFacebookAccountMessage *LogicBattle; // x0
      const char *v3; // x2
    
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObjectManager::getLogicBattle(*((LogicSpellListener **)this + 4));
      return LogicBattle::getAccountId(LogicBattle, *((_DWORD *)this + 12), v3);
    }

    __int64 __fastcall LogicGameObject::getTileX(GameMode *this)
    {
      return (unsigned int)(*((_DWORD *)this + 13) / 500);
    }

    __int64 __fastcall LogicGameObject::getTileY(GameMode *this)
    {
      return (unsigned int)(*((_DWORD *)this + 14) / 500);
    }

    __int64 __fastcall LogicGameObject::setOwnerIndex(__int64 this, int a2)
    {
      *(_DWORD *)(this + 48) = a2;
      return this;
    }

    __int64 __fastcall LogicGameObject::getCharacterBuffComponent(GameMode *this)
    {
      if ( (*((_BYTE *)this + 76) & 8) != 0 )
        return *((_QWORD *)this + 13);
      else
        return 0;
    }

    __int64 __fastcall LogicGameObject::getRealOwnerIndex(GameMode *this)
    {
      return *((unsigned int *)this + 12);
    }

    bool __fastcall LogicGameObject::isOwnerTop(GameMode *this)
    {
      return (unsigned int)LogicGameObject::getOwnerIndex(this) == 0;
    }

    bool __fastcall LogicGameObject::isOwnedByAI(LogicSpellListener **this)
    {
      UnbindFacebookAccountMessage *LogicBattle; // x20
      unsigned int OwnerIndex; // w0
      const char *v4; // x2
    
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObjectManager::getLogicBattle(*(this + 4));
      OwnerIndex = LogicGameObject::getOwnerIndex((GameMode *)this);
      return *(_DWORD *)LogicBattle::getAccountId(LogicBattle, OwnerIndex, v4) == -1;
    }

    bool __fastcall LogicGameObject::isOwnedByPlayer(LogicSpellListener **this)
    {
      return !LogicGameObject::isOwnedByAI(this);
    }

    _DWORD *__fastcall LogicGameObject::setPosition(_DWORD *this, int a2, int a3, int a4)
    {
      if ( *(this + 13) == 0x7FFFFFFF )
      {
        *(this + 15) = a2;
        *(this + 16) = a3;
        *(this + 18) = a4;
      }
      *(this + 13) = a2;
      *(this + 14) = a3;
      *(this + 17) = a4;
      return this;
    }

    __int64 __fastcall LogicGameObject::getX(GameMode *this)
    {
      return *((unsigned int *)this + 13);
    }

    __int64 __fastcall LogicGameObject::getY(GameMode *this)
    {
      return *((unsigned int *)this + 14);
    }

    __int64 __fastcall LogicGameObject::getZ(GameMode *this)
    {
      return *((unsigned int *)this + 17);
    }

    __int64 __fastcall LogicGameObject::getPosition(GameMode *this)
    {
      return (__int64)this + 52;
    }

    __int64 __fastcall LogicGameObject::getMovementComponent(GameMode *this)
    {
      if ( (*((_BYTE *)this + 76) & 2) != 0 )
        return *((_QWORD *)this + 11);
      else
        return 0;
    }

    __int64 __fastcall LogicGameObject::getMovementComponentEvenIfDisabled(GameMode *this)
    {
      return *((_QWORD *)this + 11);
    }

    __int64 __fastcall LogicGameObject::getTarget(GameMode *this)
    {
      #1037 *v1; // x0
    
      if ( (*((_BYTE *)this + 76) & 1) != 0 && (v1 = (#1037 *)*((_QWORD *)this + 10)) != 0 )
        return LogicCombatComponent::getTarget(v1);
      else
        return 0;
    }

    __int64 __fastcall LogicGameObject::getCombatComponent(GameMode *this)
    {
      if ( (*((_BYTE *)this + 76) & 1) != 0 )
        return *((_QWORD *)this + 10);
      else
        return 0;
    }

    __int64 __fastcall LogicGameObject::getRequiredRangeToTarget(GameMode *this)
    {
      if ( (*((_BYTE *)this + 76) & 1) != 0 && *((_QWORD *)this + 10) )
        return LogicCombatComponent::getRequiredRangeToTarget();
      else
        return 0;
    }

    __int64 __fastcall LogicGameObject::getOpponentOwnerCharacter(LogicSpellListener **this)
    {
      UnbindFacebookAccountMessage *LogicBattle; // x20
      unsigned int OwnerIndex; // w0
      const char *v4; // x2
      __int64 AccountId; // x20
      UnbindFacebookAccountMessage *v6; // x19
      int HigherInt; // w21
      int LowerInt; // w0
      char AccountIndex; // w0
      const char *v10; // x2
      __int64 LeaderByIndex; // x19
      const char *v12; // x2
    
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObjectManager::getLogicBattle(*(this + 4));
      OwnerIndex = LogicGameObject::getOwnerIndex((GameMode *)this);
      AccountId = LogicBattle::getAccountId(LogicBattle, OwnerIndex, v4);
      v6 = (UnbindFacebookAccountMessage *)LogicGameObjectManager::getLogicBattle(*(this + 4));
      HigherInt = LogicLong::getHigherInt(AccountId);
      LowerInt = LogicLong::getLowerInt(AccountId);
      AccountIndex = LogicBattle::getAccountIndex(v6, HigherInt, LowerInt);
      LeaderByIndex = LogicBattle::getLeaderByIndex(v6, (AccountIndex & 1) == 0, v10);
      Debugger::doAssert((Debugger *)(LeaderByIndex != 0), (bool)"", v12);
      return LeaderByIndex;
    }

    __int64 __fastcall LogicGameObject::getOwnerCharacter(LogicSpellListener **this)
    {
      UnbindFacebookAccountMessage *LogicBattle; // x20
      unsigned int OwnerIndex; // w0
      const char *v4; // x2
      __int64 AccountId; // x20
      UnbindFacebookAccountMessage *v6; // x19
      int HigherInt; // w21
      int LowerInt; // w0
      unsigned int AccountIndex; // w0
      const char *v10; // x2
      __int64 LeaderByIndex; // x19
      const char *v12; // x2
    
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObjectManager::getLogicBattle(*(this + 4));
      OwnerIndex = LogicGameObject::getOwnerIndex((GameMode *)this);
      AccountId = LogicBattle::getAccountId(LogicBattle, OwnerIndex, v4);
      v6 = (UnbindFacebookAccountMessage *)LogicGameObjectManager::getLogicBattle(*(this + 4));
      HigherInt = LogicLong::getHigherInt(AccountId);
      LowerInt = LogicLong::getLowerInt(AccountId);
      AccountIndex = LogicBattle::getAccountIndex(v6, HigherInt, LowerInt);
      LeaderByIndex = LogicBattle::getLeaderByIndex(v6, AccountIndex, v10);
      Debugger::doAssert((Debugger *)(LeaderByIndex != 0), (bool)"", v12);
      return LeaderByIndex;
    }

    // attributes: thunk
    __int64 __fastcall LogicGameObject::getControllingCharacter(LogicSpellListener **this)
    {
      return LogicGameObject::getOwnerCharacter(this);
    }

    bool __fastcall LogicGameObject::isAlive(GameMode *this)
    {
      LogicArenaData *v2; // x0
    
      if ( !(*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)this + 136LL))(this) )
        return 1;
      v2 = (LogicArenaData *)(*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)this + 136LL))(this);
      return LogicHitpointComponent::isAlive(v2);
    }

    __int64 __fastcall LogicGameObject::canBeTargeted(GameMode *this)
    {
      return 0;
    }

    __int64 __fastcall LogicGameObject::getHitpointComponent(GameMode *this)
    {
      if ( (*((_BYTE *)this + 76) & 4) != 0 )
        return *((_QWORD *)this + 12);
      else
        return 0;
    }

    __int64 __fastcall LogicGameObject::shouldDestruct(GameMode *this)
    {
      return (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)this + 152LL))(this) ^ 1;
    }

    bool __fastcall LogicGameObject::hasMovementComponent(GameMode *this)
    {
      return *((_QWORD *)this + 11) != 0;
    }

    bool __fastcall LogicGameObject::isValidHealingTarget(GameMode *this, const GameMode *a2, int a3)
    {
      LogicArenaData *v6; // x21
      int OwnerIndex; // w23
      int Hitpoints; // w22
    
      v6 = (LogicArenaData *)(*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 136LL))(a2);
      if ( !v6 )
        return 0;
      if ( !(*(unsigned int (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 160LL))(a2) )
        return 0;
      OwnerIndex = LogicGameObject::getOwnerIndex(a2);
      if ( OwnerIndex != (unsigned int)LogicGameObject::getOwnerIndex(this) )
        return 0;
      if ( (*(unsigned int (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 88LL))(a2) == 5
        && ((*(__int64 (__fastcall **)(GameMode *, const GameMode *))(*(_QWORD *)this + 184LL))(this, a2) & 1) != 0 )
      {
        return 1;
      }
      if ( !a3 )
        return a2 != this;
      Hitpoints = LogicHitpointComponent::getHitpoints(v6);
      return Hitpoints < (int)LogicHitpointComponent::getMaxHitpoints(v6) && a2 != this;
    }

    bool __fastcall LogicGameObject::getTargetPriority(GameMode *this, GameMode *a2)
    {
      #1025 *CharacterData; // x0
      _BOOL8 result; // x0
    
      result = 0;
      if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)this + 88LL))(this) == 5 )
      {
        CharacterData = (#1025 *)LogicCharacter::getCharacterData(this);
        if ( (unsigned int)LogicCharacterData::getTargetOnlyBuildings(CharacterData) )
        {
          if ( ((*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)a2 + 216LL))(a2) & 1) != 0 )
            return 1;
        }
      }
      return result;
    }

    bool __fastcall LogicGameObject::isValidTarget(GameMode *this, const GameMode *a2, char a3, int a4)
    {
      #1037 *v8; // x0
      GameMode *Target; // x0
      #1025 *CharacterData; // x22
      int v11; // w23
      LogicArenaData *v12; // x0
      Sprite *v13; // x23
      const BattleResultMessage *BuffOnDamage; // x24
      __int64 Projectile; // x0
      #1060 *ParentCharacter; // x0
      int OwnerIndex; // w20
    
      if ( a2 == this )
        return 0;
      if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)this + 88LL))(this) != 5 )
      {
    LABEL_29:
        if ( (*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 136LL))(a2) )
        {
          if ( (*(unsigned int (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 160LL))(a2) )
          {
            if ( (a3 & 1) != 0 )
              return 1;
            OwnerIndex = LogicGameObject::getOwnerIndex(a2);
            if ( OwnerIndex != (unsigned int)LogicGameObject::getOwnerIndex(this) )
              return 1;
          }
        }
        return 0;
      }
      if ( !(*(unsigned int (__fastcall **)(const GameMode *, GameMode *))(*(_QWORD *)a2 + 184LL))(a2, this) )
      {
        CharacterData = (#1025 *)LogicCharacter::getCharacterData(this);
        if ( a4
          && ((*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 216LL))(a2) & 1) == 0
          && !(*(unsigned int (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 200LL))(a2) )
        {
          return 0;
        }
        if ( (*(unsigned int (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 128LL))(a2)
          && !*(_BYTE *)(LogicCharacter::getCharacterData(this) + 440) )
        {
          return 0;
        }
        if ( ((*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 128LL))(a2) & 1) == 0
          && !*(_BYTE *)(LogicCharacter::getCharacterData(this) + 441) )
        {
          return 0;
        }
        if ( (unsigned int)LogicCharacterData::ignoreTargetWithPendingDamage(CharacterData) )
        {
          v11 = (*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 232LL))(a2);
          if ( v11 )
          {
            v12 = (LogicArenaData *)(*(__int64 (__fastcall **)(const GameMode *))(*(_QWORD *)a2 + 136LL))(a2);
            if ( v12 )
            {
              if ( LogicHitpointComponent::isEnoughToKill(v12, v11) )
                return 0;
            }
          }
        }
        if ( (unsigned int)LogicCharacterData::ignoreTargetIfImmuneToDamageBuff(CharacterData) )
        {
          if ( (*((_BYTE *)a2 + 76) & 8) != 0 )
            v13 = (Sprite *)*((_QWORD *)a2 + 13);
          else
            v13 = 0;
          BuffOnDamage = (const BattleResultMessage *)LogicCharacterData::getBuffOnDamage(CharacterData);
          if ( LogicCharacterData::getProjectile(CharacterData, 0) )
          {
            Projectile = LogicCharacterData::getProjectile(CharacterData, 0);
            BuffOnDamage = (const BattleResultMessage *)LogicProjectileData::getTargetBuff(Projectile);
          }
          if ( v13 )
          {
            ParentCharacter = (#1060 *)LogicComponent::getParentCharacter(v13);
            if ( (LogicCharacter::isLeader(ParentCharacter) & 1) == 0
              && (LogicCharacterBuffComponent::isImmuneToBuff(v13, BuffOnDamage) & 1) != 0 )
            {
              return 0;
            }
          }
        }
        goto LABEL_29;
      }
      if ( (*((_BYTE *)a2 + 76) & 1) != 0 && (v8 = (#1037 *)*((_QWORD *)a2 + 10)) != 0 )
        Target = (GameMode *)LogicCombatComponent::getTarget(v8);
      else
        Target = 0;
      return Target == this;
    }

    __int64 __fastcall LogicGameObject::getDamageEffect(GameMode *this)
    {
      return 0;
    }

    __int64 __fastcall LogicGameObject::getDistanceToObjectSquared(GameMode *this, const GameMode *a2)
    {
      return LogicVector2::getDistanceSquared((GameMode *)((char *)this + 52), (const GameMode *)((char *)a2 + 52));
    }

    __int64 __fastcall LogicGameObject::getDistanceToObjectSquared(GameMode *this, const GameMode *a2)
    {
      return LogicVector2::getDistanceSquaredTo((char *)this + 52, a2);
    }

    bool __fastcall LogicGameObject::intersects(GameMode *this, #1237 *a2, #1237 *a3, int a4)
    {
      int v8; // w23
      int v9; // w23
      int v10; // w24
      int v11; // w0
      int v12; // w3
      int v13; // w23
      _BOOL8 result; // x0
      int v15; // w22
      int v16; // w22
      int v17; // w25
      int v18; // w0
      int v19; // w3
      int v20; // w8
      int DistanceSquaredTo; // w20
      int v23; // w0
    
      if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)this + 216LL))(this) )
      {
        v8 = *((_DWORD *)this + 13);
        v9 = v8 - (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)this + 112LL))(this);
        v10 = *((_DWORD *)this + 13);
        v11 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)this + 112LL))(this);
        v13 = LogicMath::clamp(a2, v9, v11 + v10, v12) - (_DWORD)a2;
        if ( v13 > a4 )
          return 0;
        result = 0;
        if ( v13 < -a4 )
          return result;
        v15 = *((_DWORD *)this + 14);
        v16 = v15 - (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)this + 112LL))(this);
        v17 = *((_DWORD *)this + 14);
        v18 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)this + 112LL))(this);
        v20 = LogicMath::clamp(a3, v16, v18 + v17, v19) - (_DWORD)a3;
        return v20 <= a4 && v20 >= -a4 && v13 * v13 + v20 * v20 < (unsigned int)(a4 * a4);
      }
      else
      {
        DistanceSquaredTo = LogicVector2::getDistanceSquaredTo((char *)this + 52, a2);
        v23 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)this + 112LL))(this);
        return DistanceSquaredTo < (v23 + a4) * (v23 + a4);
      }
    }

    bool __fastcall LogicGameObject::isInRangeAccurate(GameMode *this, const GameMode *a2, const #1240 *a3, int a4)
    {
      int v5; // w19
      const #1240 *v8; // x23
      int v9; // w0
      int v10; // w24
      const char *v11; // x2
      int DistanceSquared; // w19
      const char *v13; // x2
      int v14; // w20
    
      v5 = (int)a3;
      v8 = (GameMode *)((char *)this + 52);
      v9 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)this + 112LL))(this);
      v10 = (v9 + v5) * (v9 + v5);
      Debugger::doAssert((Debugger *)1, (bool)"", v11);
      DistanceSquared = LogicVector2::getDistanceSquared(a2, v8);
      v14 = a4 - (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)this + 112LL))(this);
      if ( v14 < 1 )
        return DistanceSquared <= v10;
      Debugger::doAssert((Debugger *)1, (bool)"", v13);
      return DistanceSquared <= v10 && DistanceSquared >= v14 * v14;
    }

    __int64 __fastcall LogicGameObject::getDeathEffect(GameMode *this)
    {
      return 0;
    }

    LogicMovementComponent *__fastcall LogicGameObject::updatePrevPos(GameMode *this)
    {
      LogicCombatComponent *v2; // x0
      LogicMovementComponent *result; // x0
      int v4; // w9
    
      v2 = (LogicCombatComponent *)*((_QWORD *)this + 10);
      if ( v2 )
        LogicCombatComponent::updatePrevPos(v2);
      result = (LogicMovementComponent *)*((_QWORD *)this + 11);
      if ( result )
        result = (LogicMovementComponent *)LogicMovementComponent::updatePrevPos(result);
      v4 = *((_DWORD *)this + 14);
      *((_DWORD *)this + 15) = *((_DWORD *)this + 13);
      *((_DWORD *)this + 16) = v4;
      *((_DWORD *)this + 18) = *((_DWORD *)this + 17);
      return result;
    }

    __int64 __fastcall LogicGameObject::getPrevX(GameMode *this)
    {
      return *((unsigned int *)this + 15);
    }

    __int64 __fastcall LogicGameObject::getPrevY(GameMode *this)
    {
      return *((unsigned int *)this + 16);
    }

    __int64 __fastcall LogicGameObject::getPrevZ(GameMode *this)
    {
      return *((unsigned int *)this + 18);
    }

    __int64 LogicGameObject::isBuffPointFor()
    {
      return 0;
    }

    __int64 __fastcall LogicGameObject::isSummoner(GameMode *this)
    {
      return 0;
    }

    __int64 __fastcall LogicGameObject::isTower(GameMode *this)
    {
      return 0;
    }

    __int64 __fastcall LogicGameObject::getOriginSpell(GameMode *this)
    {
      if ( LogicServerEventCollector::ENABLED )
        return *((_QWORD *)this + 14);
      else
        return 0;
    }

    __int64 __fastcall LogicGameObject::setOriginSpell(__int64 result, __int64 a2)
    {
      if ( LogicServerEventCollector::ENABLED )
        *(_QWORD *)(result + 112) = a2;
      return result;
    }

    __int64 LogicGameObject::isBuilding()
    {
      return 0;
    }

    void LogicGameObject::~LogicGameObject()
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicGameObject::~LogicGameObject(void *a1)
    {
      operator delete(a1);
    }

    __int64 LogicGameObject::getRadius()
    {
      return 0;
    }

}; // end class LogicGameObject
