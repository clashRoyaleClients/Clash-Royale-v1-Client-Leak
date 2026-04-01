class LogicMovementComponent
{
public:

    void __fastcall LogicMovementComponent::LogicMovementComponent(
            LogicMovementComponent *this,
            AllianceJoinFailedMessage *a2,
            const char *a3)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
      Font *CharacterData; // x0
      int v6; // w8
    
      LogicComponent::LogicComponent(this, a2, a3);
      *(_QWORD *)this = off_100470858;
      LogicVector2::LogicVector2((LogicMovementComponent *)((char *)this + 16));
      LogicVector2::LogicVector2((LogicMovementComponent *)((char *)this + 464));
      LogicVector2::LogicVector2((LogicMovementComponent *)((char *)this + 496));
      *((_DWORD *)this + 118) = 0;
      bzero((char *)this + 24, 0x1B4u);
      *((_QWORD *)this + 61) = 0;
      *((_DWORD *)this + 115) = -1;
      *((_DWORD *)this + 121) = 0;
      *((_DWORD *)this + 119) = 0;
      *((_DWORD *)this + 120) = 0;
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
      if ( (unsigned int)LogicCharacterData::getChargeRange(CharacterData) )
        v6 = 0;
      else
        v6 = -1;
      *((_DWORD *)this + 115) = v6;
    }

    __int64 __fastcall LogicMovementComponent::resetCharge(CommandStorage *this)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
      Font *CharacterData; // x0
      __int64 result; // x0
      int v5; // w8
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
      result = LogicCharacterData::getChargeRange(CharacterData);
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = -1;
      *((_DWORD *)this + 115) = v5;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicMovementComponent::LogicMovementComponent(
            LogicMovementComponent *this,
            AllianceJoinFailedMessage *a2,
            const char *a3)
    {
      __ZN22LogicMovementComponentC2EP14LogicCharacter(this, a2, a3);
    }

    void __fastcall LogicMovementComponent::destruct(CommandStorage *this)
    {
      LogicVector2::destruct((CommandStorage *)((char *)this + 464));
      LogicVector2::destruct((CommandStorage *)((char *)this + 16));
      LogicVector2::destruct((CommandStorage *)((char *)this + 496));
      LogicComponent::destruct((__int64)this);
      *((_DWORD *)this + 118) = 0;
      bzero((char *)this + 24, 0x1B4u);
      *((_QWORD *)this + 61) = 0;
      *((_DWORD *)this + 115) = -1;
      *((_DWORD *)this + 121) = 0;
      *((_DWORD *)this + 119) = 0;
      *((_DWORD *)this + 120) = 0;
    }

    __int64 __fastcall LogicMovementComponent::tick(CommandStorage *this)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
    
      if ( *((_BYTE *)this + 488) )
        return LogicMovementComponent::updatePushback(this);
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      if ( (unsigned int)LogicCharacter::getState(ParentCharacter) == 1 )
        LogicMovementComponent::moveToTarget(this);
      return LogicMovementComponent::updateMovement(this);
    }

    __int64 __fastcall LogicMovementComponent::updatePushback(CommandStorage *this)
    {
      int v2; // w8
      #1237 *v3; // x3
      __int64 result; // x0
    
      v2 = *((_DWORD *)this + 118);
      if ( v2 >= 1 )
      {
        LogicMovementComponent::checkCollisions(this);
        v2 = *((_DWORD *)this + 118);
      }
      v3 = (#1237 *)(unsigned int)(v2 - 25);
      *((_DWORD *)this + 118) = (_DWORD)v3;
      result = LogicMovementComponent::updateMovementTowards(this, *((_DWORD *)this + 116), *((_DWORD *)this + 117), v3);
      *((_BYTE *)this + 488) = *((_DWORD *)this + 118) >= 0;
      return result;
    }

    AllianceJoinFailedMessage *__fastcall LogicMovementComponent::moveToTarget(CommandStorage *this)
    {
      GameMode *Parent; // x0
      AllianceJoinFailedMessage *result; // x0
      AllianceJoinFailedMessage *v4; // x20
      unsigned int (__fastcall *v5)(AllianceJoinFailedMessage *, __int64); // x21
      __int64 ParentCharacter; // x0
      Font *CharacterData; // x0
      __int64 RequiredRangeToTarget; // x2
      GameMode *v9; // x0
      int ClosestTilePositionToTarget; // w0
      int v11; // w20
      int v12; // w21
      UnbindFacebookAccountMessage *LogicBattle; // x0
      int v14; // w22
      int v15; // w22
      UnbindFacebookAccountMessage *v16; // x0
      int v17; // w23
      GameMode *v19; // x0
      AreaEffectObject *Data; // x0
      String *Name; // x0
      AreaEffectObject *v22; // x0
      String *v23; // x0
      const String *v24; // x1
      AllianceJoinFailedMessage *v25; // x0
      Font *v26; // x0
      int *v27; // x23
      UnbindFacebookAccountMessage *v28; // x0
      const char *v29; // x1
      __int64 v30; // x0
      __int64 PathFinder; // x22
      GameMode *v32; // x0
      int TileX; // w23
      GameMode *v34; // x0
      int TileY; // w24
      const AllianceJoinFailedMessage *v36; // x0
      UnlockAccountPopup **v37; // x0
      __int64 GameListener; // x0
      const char *v39; // x20
      int v40; // w21
      int PathPoint; // w0
      __int64 v42; // x8
      String v43; // [xsp+0h] [xbp-90h] BYREF
      String v44; // [xsp+18h] [xbp-78h] BYREF
      String v45; // [xsp+30h] [xbp-60h] BYREF
      String v46; // [xsp+48h] [xbp-48h] BYREF
    
      Parent = (GameMode *)LogicComponent::getParent(this);
      result = (AllianceJoinFailedMessage *)LogicGameObject::getTarget(Parent);
      v4 = result;
      if ( !result )
        return result;
      v5 = *(unsigned int (__fastcall **)(AllianceJoinFailedMessage *, __int64))(*(_QWORD *)result + 184LL);
      ParentCharacter = LogicComponent::getParentCharacter(this);
      if ( v5(v4, ParentCharacter) )
      {
        CharacterData = (Font *)LogicCharacter::getCharacterData(v4);
        RequiredRangeToTarget = (unsigned int)LogicCharacterData::getRange(CharacterData) - 250;
      }
      else
      {
        v9 = (GameMode *)LogicComponent::getParent(this);
        RequiredRangeToTarget = LogicGameObject::getRequiredRangeToTarget(v9);
      }
      ClosestTilePositionToTarget = LogicMovementComponent::getClosestTilePositionToTarget(this, v4, RequiredRangeToTarget);
      if ( ClosestTilePositionToTarget < 0 )
      {
        String::String(&v43, "Didn't find position next to the. Object ");
        v19 = (GameMode *)LogicComponent::getParent(this);
        Data = (AreaEffectObject *)LogicGameObject::getData(v19);
        Name = (String *)LogicData::getName(Data);
        operator+((__int64 *)&v44.m_length, &v43, Name);
        operator+(&v44, " target: ");
        v22 = (AreaEffectObject *)LogicGameObject::getData(v4);
        v23 = (String *)LogicData::getName(v22);
        operator+((__int64 *)&v46.m_length, &v45, v23);
        Debugger::warning((__siginfo *)&v46, v24);
        String::~String();
        String::~String();
        String::~String();
        String::~String();
        v11 = 0;
        v12 = 0;
      }
      else
      {
        v11 = ClosestTilePositionToTarget >> 16;
        v12 = (unsigned __int16)ClosestTilePositionToTarget;
        if ( *((int *)this + 6) >= 1 )
        {
          LogicBattle = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)this);
          v14 = *((_DWORD *)this + 7);
          v15 = v14 % (int)LogicBattle::getTilemapWidth(LogicBattle);
          v16 = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)this);
          v17 = *((_DWORD *)this + 7);
          result = (AllianceJoinFailedMessage *)LogicBattle::getTilemapWidth(v16);
          if ( v11 == v15 && v12 == v17 / (int)result )
            return result;
        }
      }
      v25 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      v26 = (Font *)LogicCharacter::getCharacterData(v25);
      if ( (unsigned int)LogicCharacterData::getFlyingHeight(v26) )
      {
        *((_DWORD *)this + 6) = 1;
        v27 = (int *)((char *)this + 24);
        v28 = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)this);
        *((_DWORD *)this + 7) = v11 + LogicBattle::getTilemapWidth(v28) * v12;
      }
      else
      {
        v30 = LogicComponent::getLogicBattle((GameMode **)this);
        PathFinder = LogicTileMap::getPathFinder(*(RequestSingleSpellPopup **)(v30 + 8));
        v32 = (GameMode *)LogicComponent::getParent(this);
        TileX = LogicGameObject::getTileX(v32);
        v34 = (GameMode *)LogicComponent::getParent(this);
        TileY = LogicGameObject::getTileY(v34);
        v36 = (const AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
        LogicPathFinder::findPath((RequestSingleSpellPopup **)PathFinder, TileX, TileY, v11, v12, 1, v36);
        v37 = (UnlockAccountPopup **)LogicComponent::getLogicBattle((GameMode **)this);
        GameListener = LogicBattle::getGameListener(v37);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)GameListener + 336LL))(
          GameListener,
          *(unsigned int *)(PathFinder + 12));
        *((_DWORD *)this + 6) = 0;
        v27 = (int *)((char *)this + 24);
        if ( (int)LogicPathFinder::getPathLength((LogicBattleLog *)PathFinder) >= 1 )
        {
          v39 = 0;
          v40 = -1;
          do
          {
            PathPoint = LogicPathFinder::getPathPoint((LogicBattleLog *)PathFinder, v39);
            if ( PathPoint != v40 )
            {
              v42 = *((int *)this + 6);
              *((_DWORD *)this + 6) = v42 + 1;
              *((_DWORD *)this + v42 + 7) = PathPoint;
              v40 = PathPoint;
            }
            v39 = (const char *)(unsigned int)((_DWORD)v39 + 1);
          }
          while ( (int)v39 < (int)LogicPathFinder::getPathLength((LogicBattleLog *)PathFinder) );
        }
      }
      if ( *v27 < 1 )
        return (AllianceJoinFailedMessage *)Debugger::print((Debugger *)"Path length 0. Set to Idle", v29);
      else
        return (AllianceJoinFailedMessage *)LogicMovementComponent::calculatePathTargetNormal(this);
    }

    __int64 __fastcall LogicMovementComponent::updateMovement(CommandStorage *this)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x20
      Font *CharacterData; // x22
      int Speed; // w23
      FriendListMessage *CharacterBuffComponent; // x0
      __int64 v6; // x2
      int v7; // w3
      #1237 *v8; // x21
      FriendListMessage *v9; // x0
      AllianceJoinFailedMessage *v10; // x0
      __int64 v11; // x0
      #1237 *JumpSpeed; // x24
      Font *v13; // x0
      int JumpHeight; // w21
      const char *v15; // x2
      int v16; // w22
      int v17; // w23
      int v18; // w25
      CommandStorage *v19; // x0
      int v20; // w19
      int Height; // w0
      int v22; // w3
      AllianceJoinFailedMessage *v23; // x0
      const char *v24; // x2
      GameMode *v25; // x0
      int v26; // w20
      GameMode *v27; // x0
      int v28; // w2
      CommandStorage *v29; // x0
      int v30; // w1
      int *v31; // x0
      __int64 result; // x0
      int v33; // w8
      int StopMovementAfterMS; // w23
      int WaitMS; // w0
      int v36; // w9
      int v37; // w8
      #1237 *v38; // x20
      UnbindFacebookAccountMessage *LogicBattle; // x0
      int TilemapWidth; // w0
      int v41; // w3
      #1237 *v42; // x20
      UnbindFacebookAccountMessage *v43; // x0
      int TilemapHeight; // w0
      int v45; // w3
      int v46; // w8
      GameMode *Parent; // x0
      const #1240 *Position; // x0
      const char *v49; // x2
      __int64 v50; // x0
      #1237 *v51; // x24
      Font *v52; // x0
      int v53; // w25
      const char *v54; // x2
      int v55; // w21
      int v56; // w22
      int v57; // w23
      int v58; // w2
      int v59; // w19
      int v60; // w24
      int v61; // w8
      __int64 v62; // x21
      __int64 v63; // x22
      __int64 v64; // x21
      __int64 v66; // x21
      LogicSpellListener **v67; // x0
      UnbindFacebookAccountMessage *v68; // x0
      int v69; // w0
      int v70; // w8
      GameMode *v71; // x0
      int v72; // w21
      GameMode *v73; // x0
      int v74; // w0
      LogicCharacter *v75; // x0
      int v76[2]; // [xsp+0h] [xbp-60h] BYREF
      int v77[2]; // [xsp+8h] [xbp-58h] BYREF
      int v78; // [xsp+10h] [xbp-50h] BYREF
      int v79; // [xsp+14h] [xbp-4Ch]
      int v80[2]; // [xsp+18h] [xbp-48h] BYREF
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
      Speed = LogicCharacterData::getSpeed(CharacterData);
      CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(ParentCharacter);
      v8 = (#1237 *)LogicCharacterBuffComponent::calculateSpeed(CharacterBuffComponent, Speed, v6, v7);
      LogicMovementComponent::checkAvoidance(this);
      if ( (int)v8 > 0
        || (v9 = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(ParentCharacter),
            (LogicCharacterBuffComponent::isStatic(v9) & 1) == 0) )
      {
        LogicMovementComponent::checkCollisions(this);
      }
      v10 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      if ( (unsigned int)LogicCharacter::getState(v10) == 6 )
      {
        v11 = LogicCharacter::getCharacterData(ParentCharacter);
        JumpSpeed = (#1237 *)LogicCharacterData::getJumpSpeed(v11);
        v13 = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
        JumpHeight = LogicCharacterData::getJumpHeight(v13);
        Debugger::doAssert((Debugger *)(*((_DWORD *)this + 6) == 1), (bool)"", v15);
        LogicVector2::LogicVector2((LogicVector2 *)v80);
        LogicMovementComponent::getTargetPositionWhereGoingNow(this, (#1240 *)v80);
        LogicMovementComponent::updateMovementTowards(this, v80[0], v80[1], JumpSpeed);
        v16 = LogicGameObject::getX(ParentCharacter);
        v17 = LogicGameObject::getY(ParentCharacter);
        v18 = *((_DWORD *)this + 123) / (int)JumpSpeed;
        v19 = (CommandStorage *)LogicMovementComponent::tickToTarget(this, (int)JumpSpeed, (const #1240 *)v80);
        v20 = (int)v19;
        Height = LogicMovementComponent::getHeight(v19, v18, v19);
        if ( v20 > 1 )
        {
          v22 = (Height * JumpHeight) >> 4;
        }
        else
        {
          LogicCharacter::setState(ParentCharacter, 1);
          v22 = 0;
        }
        LogicGameObject::setPosition(ParentCharacter, v16, v17, v22);
        v31 = v80;
        return LogicVector2::destruct((LogicVector2 *)v31);
      }
      v23 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      if ( (unsigned int)LogicCharacter::getState(v23) == 5 )
      {
        v25 = (GameMode *)LogicComponent::getParentCharacter(this);
        v26 = LogicGameObject::getX(v25);
        v27 = (GameMode *)LogicComponent::getParentCharacter(this);
        v28 = LogicGameObject::getY(v27);
        v29 = this;
        v30 = v26;
        return LogicMovementComponent::updateMovementTowards(v29, v30, v28, v8);
      }
      if ( *((_BYTE *)this + 490) )
        goto LABEL_37;
      Debugger::doAssert((Debugger *)(Speed > 0), (bool)"", v24);
      v33 = *((_DWORD *)this + 119);
      *((_DWORD *)this + 120) = v33;
      *((_DWORD *)this + 119) = v33 + 50 * (int)v8 / Speed;
      if ( (unsigned int)LogicMovementComponent::isWaitingAfterFootStep(this) )
      {
        StopMovementAfterMS = LogicCharacterData::getStopMovementAfterMS((__int64)CharacterData);
        WaitMS = LogicCharacterData::getWaitMS((__int64)CharacterData);
        v36 = *((_DWORD *)this + 119);
        v37 = v36 - (WaitMS + StopMovementAfterMS);
        if ( v36 >= WaitMS + StopMovementAfterMS )
        {
          *((_DWORD *)this + 119) = v37;
          *((_DWORD *)this + 120) = v37;
        }
        else
        {
          v8 = 0;
        }
      }
      if ( (unsigned int)LogicCharacter::getState(ParentCharacter) == 3 )
      {
        LogicVector2::LogicVector2(
          (LogicVector2 *)&v78,
          *((_DWORD *)this + 111) - *((_DWORD *)this + 113),
          *((_DWORD *)this + 112) - *((_DWORD *)this + 114));
        if ( (LogicGameObject::getGlobalID(ParentCharacter) & 1) == 0 )
        {
          v78 = -v78;
          v79 = -v79;
        }
        LogicVector2::normalize((LogicVector2 *)&v78, (int)v8);
        v38 = (#1237 *)(unsigned int)(*((_DWORD *)this + 111) + v79);
        *((_DWORD *)this + 111) = (_DWORD)v38;
        *((_DWORD *)this + 112) -= v78;
        LogicBattle = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)this);
        TilemapWidth = LogicBattle::getTilemapWidth(LogicBattle);
        *((_DWORD *)this + 111) = LogicMath::clamp(v38, 0, 500 * TilemapWidth, v41);
        v42 = (#1237 *)*((unsigned int *)this + 112);
        v43 = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)this);
        TilemapHeight = LogicBattle::getTilemapHeight(v43);
        *((_DWORD *)this + 112) = LogicMath::clamp(v42, 0, 500 * TilemapHeight, v45);
        LogicVector2::LogicVector2((LogicVector2 *)v77);
        LogicMovementComponent::getTargetPositionWhereGoingNow(this, (#1240 *)v77);
        LogicMovementComponent::updateMovementTowards(this, v77[0], v77[1], v8);
        v46 = *((_DWORD *)this + 110) - 50;
        *((_DWORD *)this + 110) = v46;
        if ( v46 < 1
          || (Parent = (GameMode *)LogicComponent::getParent(this),
              Position = (const #1240 *)LogicGameObject::getPosition(Parent),
              (int)LogicVector2::getDistanceSquared((#1240 *)v77, Position) <= 499) )
        {
          LogicMovementComponent::initPanicTarget(this);
        }
        v31 = v77;
        return LogicVector2::destruct((LogicVector2 *)v31);
      }
      if ( !*((_DWORD *)this + 6) )
      {
    LABEL_37:
        LogicMovementComponent::getTargetPositionWhereGoingNow(this, (CommandStorage *)((char *)this + 496));
        v30 = *((_DWORD *)this + 124);
        v28 = *((_DWORD *)this + 125);
        v29 = this;
        return LogicMovementComponent::updateMovementTowards(v29, v30, v28, v8);
      }
      if ( (unsigned int)LogicCharacter::getState(ParentCharacter) == 4 )
      {
        v50 = LogicCharacter::getCharacterData(ParentCharacter);
        v51 = (#1237 *)LogicCharacterData::getJumpSpeed(v50);
        v52 = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
        v53 = LogicCharacterData::getJumpHeight(v52);
        Debugger::doAssert((Debugger *)(*((_DWORD *)this + 6) == 1), (bool)"", v54);
        LogicVector2::LogicVector2((LogicVector2 *)v76);
        LogicMovementComponent::getTargetPositionWhereGoingNow(this, (#1240 *)v76);
        LogicMovementComponent::updateMovementTowards(this, v76[0], v76[1], v51);
        v55 = LogicGameObject::getX(ParentCharacter);
        v56 = LogicGameObject::getY(ParentCharacter);
        v57 = LogicGameObject::getZ(ParentCharacter);
        v59 = LogicMovementComponent::tickToTarget(this, (int)v51, (const #1240 *)v76);
        if ( v53 / 1000 <= v59 )
          v60 = v53;
        else
          v60 = 0;
        if ( v57 < v60 )
          v57 = LogicMath::min((LogicMath *)(unsigned int)(v57 + 1000), v60, v58);
        if ( v57 >= v60 )
          v57 = LogicMath::max((LogicMath *)(unsigned int)(v57 - 1000), v60, v58);
        if ( v59 <= 1 )
        {
          LogicCharacter::setState(ParentCharacter, 1);
          v57 = 0;
        }
        LogicGameObject::setPosition(ParentCharacter, v55, v56, v57);
        v31 = v76;
        return LogicVector2::destruct((LogicVector2 *)v31);
      }
      Debugger::doAssert((Debugger *)(*((_DWORD *)this + 6) > 0), (bool)"", v49);
      LogicMovementComponent::getTargetPositionWhereGoingNow(this, (CommandStorage *)((char *)this + 496));
      result = LogicMovementComponent::updateMovementTowards(this, *((_DWORD *)this + 124), *((_DWORD *)this + 125), v8);
      if ( *((_BYTE *)this + 489) )
      {
        --*((_DWORD *)this + 6);
        result = LogicMovementComponent::calculatePathTargetNormal(this);
        if ( *((_BYTE *)CharacterData + 408) )
        {
          v61 = *((_DWORD *)this + 6);
          v62 = (unsigned int)(v61 - 2);
          if ( v61 >= 2 )
          {
            result = LogicMovementComponent::isOnWater(this, *((_DWORD *)this + v61 + 6));
            if ( (_DWORD)result )
            {
              if ( (v62 & 0x80000000) != 0 )
              {
    LABEL_48:
                v66 = 0;
              }
              else
              {
                v63 = (int)v62;
                v64 = v62 << 32;
                while ( (unsigned int)LogicMovementComponent::isOnWater(this, *((_DWORD *)this + v63 + 7)) )
                {
                  v64 -= 0x100000000LL;
                  if ( v63-- <= 0 )
                    goto LABEL_48;
                }
                v66 = v64 >> 32;
              }
              v67 = (LogicSpellListener **)LogicComponent::getParent(this);
              v68 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(v67);
              v69 = LogicBattle::getTilemapWidth(v68);
              v70 = *((_DWORD *)this + v66 + 7);
              *((_DWORD *)this + 124) = 500 * (v70 % v69) + 250;
              *((_DWORD *)this + 125) = 500 * (v70 / v69) + 250;
              LogicMovementComponent::moveToPoint(this, (CommandStorage *)((char *)this + 496));
              v71 = (GameMode *)LogicComponent::getParent(this);
              v72 = LogicGameObject::getX(v71);
              v73 = (GameMode *)LogicComponent::getParent(this);
              v74 = LogicGameObject::getY(v73);
              *((_DWORD *)this + 123) = LogicVector2::getDistance((CommandStorage *)((char *)this + 496), v72, v74);
              v75 = (LogicCharacter *)LogicComponent::getParentCharacter(this);
              return LogicCharacter::setState(v75, 6);
            }
          }
        }
      }
      return result;
    }

    __int64 __fastcall LogicMovementComponent::encode(__int64 a1, __int64 a2)
    {
      void (__fastcall *v4)(__int64, _QWORD); // x8
      __int64 v5; // x21
    
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 488));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 490));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 491));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(unsigned __int8 *)(a1 + 489));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 24));
      v4 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL);
      if ( *(int *)(a1 + 24) >= 1 )
      {
        v5 = 0;
        do
        {
          v4(a2, *(unsigned int *)(a1 + 28 + 4 * v5++));
          v4 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL);
        }
        while ( v5 < *(int *)(a1 + 24) );
      }
      v4(a2, *(unsigned int *)(a1 + 436));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 428));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 432));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 440));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 444));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 448));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 452));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 456));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 460));
      ByteStreamHelper::encodeVector(a2, (unsigned int *)(a1 + 464));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 484));
      ByteStreamHelper::encodeVector(a2, (unsigned int *)(a1 + 16));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 472));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 476));
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 492));
    }

    __int64 __fastcall LogicMovementComponent::decode(__int64 a1, __int64 a2)
    {
      int v4; // w21
      int v5; // w0
      __int64 v6; // x21
      __int64 v7; // x23
      __int64 result; // x0
    
      *(_BYTE *)(a1 + 488) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2);
      *(_BYTE *)(a1 + 490) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2);
      *(_BYTE *)(a1 + 491) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2);
      *(_BYTE *)(a1 + 489) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2);
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 24) = v4;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      if ( v4 >= 1 )
      {
        v6 = 0;
        do
        {
          *(_DWORD *)(a1 + 28 + 4 * v6++) = v5;
          v7 = *(int *)(a1 + 24);
          v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
        }
        while ( v6 < v7 );
      }
      *(_DWORD *)(a1 + 436) = v5;
      *(_DWORD *)(a1 + 428) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 432) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 440) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 444) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 448) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 452) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 456) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 460) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      ByteStreamHelper::decodeVector(a2, (_DWORD *)(a1 + 464));
      *(_DWORD *)(a1 + 484) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      ByteStreamHelper::decodeVector(a2, (_DWORD *)(a1 + 16));
      *(_DWORD *)(a1 + 472) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 476) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 492) = result;
      return result;
    }

    __int64 __fastcall LogicMovementComponent::calculatePathTargetNormal(__int64 result)
    {
      _DWORD *v1; // x19
      int v2; // w20
      UnbindFacebookAccountMessage *LogicBattle; // x0
      int v4; // w20
      int v5; // w20
      GameMode *Parent; // x0
      __int64 v7; // x21
      UnbindFacebookAccountMessage *v8; // x0
      GameMode *v9; // x0
    
      v1 = (_DWORD *)result;
      v2 = *(_DWORD *)(result + 24);
      if ( v2 < 1 )
      {
        *(_QWORD *)(result + 16) = 0;
      }
      else
      {
        LogicBattle = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)result);
        v4 = v1[v2 + 6];
        v5 = 500 * (v4 % (int)LogicBattle::getTilemapWidth(LogicBattle)) + 250;
        Parent = (GameMode *)LogicComponent::getParent((Sprite *)v1);
        v1[4] = v5 - LogicGameObject::getX(Parent);
        v7 = (__int64)&v1[v1[6] + 7];
        v8 = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)v1);
        LODWORD(v7) = *(_DWORD *)(v7 - 4);
        LODWORD(v7) = 500 * ((int)v7 / (int)LogicBattle::getTilemapWidth(v8)) + 250;
        v9 = (GameMode *)LogicComponent::getParent((Sprite *)v1);
        v1[5] = v7 - LogicGameObject::getY(v9);
        return LogicVector2::normalize((LogicVector2 *)(v1 + 4), 256);
      }
      return result;
    }

    __int64 __fastcall LogicMovementComponent::getPathX(GameMode **a1, int a2)
    {
      UnbindFacebookAccountMessage *LogicBattle; // x0
      int v5; // w19
    
      LogicBattle = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle(a1);
      v5 = *((_DWORD *)a1 + a2 + 7);
      return (unsigned int)(v5 % (int)LogicBattle::getTilemapWidth(LogicBattle));
    }

    __int64 __fastcall LogicMovementComponent::getPathY(GameMode **a1, int a2)
    {
      UnbindFacebookAccountMessage *LogicBattle; // x0
      int v5; // w19
    
      LogicBattle = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle(a1);
      v5 = *((_DWORD *)a1 + a2 + 7);
      return (unsigned int)(v5 / (int)LogicBattle::getTilemapWidth(LogicBattle));
    }

    __int64 __fastcall LogicMovementComponent::getClosestTilePositionToTarget(Sprite *a1, GameMode *a2, int a3)
    {
      GameMode *Parent; // x20
      int v7; // w19
      int v8; // w28
      GameMode *ParentCharacter; // x0
      AllianceListMessage *CombatComponent; // x0
      int v11; // w20
      GameMode *v12; // x0
      int v13; // w8
      int TileX; // w20
      int TileY; // w22
      RequestSingleSpellPopup *v16; // x21
      const char *v17; // x2
      int v18; // w19
      int v19; // w2
      int v20; // w26
      int v21; // w2
      int v22; // w24
      int v23; // w2
      int v24; // w25
      int v25; // w2
      const char *v26; // x2
      int v27; // w19
      unsigned __int64 v28; // x20
      int v29; // w26
      int v30; // w22
      int v31; // w23
      const char *v32; // x2
      int v33; // w9
      __int64 v35; // x19
      const char *v37; // x1
      int v38; // [xsp+Ch] [xbp-84h]
      unsigned int v39; // [xsp+10h] [xbp-80h]
      int v40; // [xsp+14h] [xbp-7Ch]
      int v41; // [xsp+1Ch] [xbp-74h]
      int v42; // [xsp+20h] [xbp-70h]
      int v43; // [xsp+24h] [xbp-6Ch]
      int v44; // [xsp+28h] [xbp-68h]
      int v45; // [xsp+2Ch] [xbp-64h]
      int v46; // [xsp+3Ch] [xbp-54h]
      int v47; // [xsp+3Ch] [xbp-54h]
    
      Parent = (GameMode *)LogicComponent::getParent(a1);
      v7 = LogicGameObject::getX(Parent);
      v8 = LogicGameObject::getY(Parent);
      ParentCharacter = (GameMode *)LogicComponent::getParentCharacter(a1);
      CombatComponent = (AllianceListMessage *)LogicGameObject::getCombatComponent(ParentCharacter);
      if ( (int)LogicCombatComponent::getHealingPower(CombatComponent) < 1 )
      {
        v46 = v7;
      }
      else
      {
        v46 = LogicGameObject::getX(a2);
        v11 = LogicGameObject::getY(a2);
        v12 = (GameMode *)LogicComponent::getParent(a1);
        if ( LogicGameObject::isOwnerTop(v12) )
          v13 = -a3;
        else
          v13 = a3;
        v8 = v13 + v11;
      }
      TileX = LogicGameObject::getTileX(a2);
      TileY = LogicGameObject::getTileY(a2);
      v16 = *(RequestSingleSpellPopup **)(LogicComponent::getLogicBattle((GameMode **)a1) + 8);
      Debugger::doAssert((Debugger *)1, (bool)"", v17);
      v18 = a3 / 500 + 1;
      v20 = LogicMath::max((LogicMath *)(unsigned int)(TileX - v18), 0, v19);
      v22 = LogicMath::min((LogicMath *)(unsigned int)(v18 + TileX), *(_DWORD *)v16 - 1, v21);
      v24 = LogicMath::max((LogicMath *)(unsigned int)(TileY - v18), 0, v23);
      v42 = LogicMath::min((LogicMath *)(unsigned int)(v18 + TileY), *((_DWORD *)v16 + 1) - 1, v25);
      if ( v24 > v42 )
        return 0xFFFFFFFFLL;
      v45 = a3 * a3;
      v40 = v20 - 1;
      v39 = 500 * v20 + 250;
      v43 = -v46;
      v38 = v20 << 16;
      v47 = -1;
      v27 = 0x7FFFFFFF;
      v41 = v20;
      do
      {
        Debugger::doAssert((Debugger *)1, (bool)"", v26);
        if ( v20 <= v22 )
        {
          v44 = (500 * v24 + 250 - v8) * (500 * v24 + 250 - v8);
          v29 = v38;
          v28 = v39;
          v30 = v40;
          do
          {
            if ( (unsigned int)LogicTileMap::isPassablePathFinder(v16, ++v30, v24)
              && (int)LogicGameObject::getDistanceToObjectSquared(a2, (const GameMode *)v28) <= v45 )
            {
              Debugger::doAssert((Debugger *)1, (bool)"", v26);
              v31 = v44 + (v43 + v28) * (v43 + v28);
              Debugger::doAssert((Debugger *)1, (bool)"", v32);
              v33 = v47;
              if ( v31 < v27 )
                v33 = v29 | v24;
              v47 = v33;
              if ( v31 < v27 )
                v27 = v44 + (v43 + v28) * (v43 + v28);
            }
            v28 = (unsigned int)(v28 + 500);
            v29 += 0x10000;
          }
          while ( v30 < v22 );
        }
        v20 = v41;
      }
      while ( v24++ < v42 );
      if ( v27 == 0x7FFFFFFF )
        return 0xFFFFFFFFLL;
      v35 = (unsigned int)v47;
      if ( (LogicTileMap::isPassablePathFinder(v16, v47 >> 16, (unsigned __int16)v47) & 1) == 0 )
        Debugger::error((__siginfo *)"Chose invalid tile", v37);
      return v35;
    }

    __int64 __fastcall LogicMovementComponent::checkAvoidance(CommandStorage *this)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
      __int64 result; // x0
      AllianceJoinFailedMessage *v4; // x0
      _DWORD *Direction; // x20
      int v6; // w2
      GameMode *Parent; // x0
      _DWORD *Position; // x21
      unsigned int v9; // w22
      int v10; // w23
      __int64 v11; // x0
      int v12; // w0
      int v13; // w2
      int v14; // w24
      __int64 LogicGameObjectManager; // x0
      __int64 IntersectingObjects; // x22
      __int64 v17; // x28
      GameMode *v18; // x0
      int v19; // w3
      __int64 v20; // x27
      _DWORD *v21; // x23
      GameMode *v22; // x25
      __int64 MovementComponent; // x24
      int v24; // w21
      int v25; // w0
      int v26; // w26
      unsigned int v27; // w21
      __int64 v28; // x22
      AllianceJoinFailedMessage *v29; // x0
      int v30; // w25
      int v31; // w26
      AllianceJoinFailedMessage *v32; // x0
      int v33; // w8
      int v34; // w26
      AllianceJoinFailedMessage *v35; // x25
      AllianceJoinFailedMessage *v36; // x0
      unsigned int v37; // w28
      _DWORD *v38; // x21
      int v39; // w23
      int v40; // w8
      bool v41; // cc
      int v42; // w24
      UnbindFacebookAccountMessage *LogicBattle; // x0
      int v44; // w24
      int TilemapWidth; // w0
      char *v46; // x26
      UnbindFacebookAccountMessage *v47; // x0
      __int64 v48; // x26
      __int64 v49; // x0
      int DistanceSquaredHelper; // w24
      int v51; // w0
      signed int v52; // w8
      char v53; // w8
      int v54; // w9
      int v55; // w8
      #1237 *v56; // x0
      int v57; // w8
      int v58; // w8
      char v59; // [xsp+8h] [xbp-78h]
      int v60; // [xsp+Ch] [xbp-74h]
      unsigned int v61; // [xsp+Ch] [xbp-74h]
      __int64 v62; // [xsp+10h] [xbp-70h]
      int v63; // [xsp+18h] [xbp-68h]
      int v64; // [xsp+1Ch] [xbp-64h]
      _DWORD *v65; // [xsp+20h] [xbp-60h]
      int v66; // [xsp+2Ch] [xbp-54h]
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      result = LogicCharacter::getState(ParentCharacter);
      if ( (_DWORD)result == 4 )
      {
        *((_DWORD *)this + 121) = 0;
      }
      else
      {
        v4 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
        Direction = (_DWORD *)LogicCharacter::getDirection(v4);
        v65 = Direction;
        if ( (LogicVector2::getLengthSquared() & 0x80000000) == 0 && !*((_BYTE *)this + 490) )
        {
          Parent = (GameMode *)LogicComponent::getParent(this);
          Position = (_DWORD *)LogicGameObject::getPosition(Parent);
          v9 = *Direction + *Position;
          v10 = Direction[1] + Position[1];
          v11 = LogicComponent::getParent(this);
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 112LL))(v11);
          v14 = LogicMath::min((LogicMath *)0x1F4, v12, v13);
          LogicGameObjectManager = LogicComponent::getLogicGameObjectManager((GameMode **)this);
          IntersectingObjects = LogicSpacePartition::getIntersectingObjects(
                                  *(Screen **)(LogicGameObjectManager + 64),
                                  v9,
                                  v10,
                                  v14);
          v62 = IntersectingObjects;
          v17 = *(unsigned int *)(IntersectingObjects + 12);
          v18 = (GameMode *)LogicComponent::getParent(this);
          v66 = LogicGameObject::getZ(v18);
          if ( (int)v17 < 1 )
          {
            v64 = 0;
            v63 = 0;
            LOBYTE(v60) = 1;
            v59 = 1;
          }
          else
          {
            v20 = 0;
            v64 = 0;
            v63 = 0;
            LOBYTE(v60) = 1;
            v59 = 1;
            v21 = Position;
            do
            {
              v22 = *(GameMode **)(*(_QWORD *)IntersectingObjects + 8 * v20);
              MovementComponent = LogicGameObject::getMovementComponent(v22);
              if ( v22 != (GameMode *)LogicComponent::getParent(this) && v66 > 0 == (int)LogicGameObject::getZ(v22) > 0 )
              {
                v24 = LogicGameObject::getX(v22) - *v21;
                v25 = LogicGameObject::getY(v22);
                v26 = *Direction;
                v27 = Direction[1] * v24 - *Direction * (v25 - v21[1]);
                if ( MovementComponent )
                {
                  v28 = v17;
                  v29 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)MovementComponent);
                  v30 = *(_DWORD *)LogicCharacter::getDirection(v29) * v26;
                  v31 = Direction[1];
                  v32 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)MovementComponent);
                  v33 = v30 + *(_DWORD *)(LogicCharacter::getDirection(v32) + 4) * v31;
                  if ( *(_BYTE *)(MovementComponent + 490) )
                    v34 = 0;
                  else
                    v34 = v33;
                  if ( *((int *)this + 115) < 10000 )
                  {
                    v41 = v34 <= 0;
                  }
                  else
                  {
                    v35 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)MovementComponent);
                    v36 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
                    v37 = v27;
                    v38 = v21;
                    v39 = *(_DWORD *)(LogicCharacter::getCharacterData(v36) + 668);
                    v40 = *(_DWORD *)(LogicCharacter::getCharacterData(v35) + 668);
                    v41 = v34 <= 0 && v39 <= v40;
                    v21 = v38;
                    v27 = v37;
                  }
                  v17 = v28;
                  if ( v41 )
                  {
                    ++v63;
                    v52 = *(_DWORD *)(MovementComponent + 484);
                    IntersectingObjects = v62;
                    if ( v52 )
                      LOBYTE(v52) = v52 > 0;
                    else
                      v52 = v27 >> 31;
                    v59 = v52;
                  }
                  else
                  {
                    IntersectingObjects = v62;
                  }
                  Direction = v65;
                }
                else
                {
                  v42 = *((_DWORD *)this + 6);
                  if ( v42 >= 2 )
                  {
                    LogicBattle = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)this);
                    v44 = *((_DWORD *)this + v42 + 6);
                    TilemapWidth = LogicBattle::getTilemapWidth(LogicBattle);
                    v46 = (char *)this + 4 * *((int *)this + 6) + 28;
                    v61 = 500 * (v44 % TilemapWidth) + 250;
                    v47 = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)this);
                    LODWORD(v46) = *((_DWORD *)v46 - 1);
                    v48 = (unsigned int)(500 * ((int)v46 / (int)LogicBattle::getTilemapWidth(v47)) + 250);
                    v49 = LogicGameObject::getPosition(v22);
                    DistanceSquaredHelper = LogicVector2::getDistanceSquaredHelper(v49, v61, v48);
                    v51 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v22 + 112LL))(v22);
                    if ( DistanceSquaredHelper < v51 * v51 )
                      --*((_DWORD *)this + 6);
                  }
                  v60 = v27 >> 31;
                  ++v64;
                }
              }
              ++v20;
            }
            while ( (_DWORD)v17 != (_DWORD)v20 );
          }
          v53 = v59;
          if ( v64 > 0 )
            v53 = v60;
          if ( v64 + v63 >= 1 )
          {
            v54 = *((_DWORD *)this + 121);
            if ( v54 )
            {
              if ( v64 >= 1 )
              {
                if ( (v53 & 1) != 0 )
                  v55 = 20;
                else
                  v55 = -20;
                v56 = (#1237 *)(unsigned int)(v54 + v55);
                *((_DWORD *)this + 121) = (_DWORD)v56;
                *((_DWORD *)this + 121) = LogicMath::clamp(v56, -200, 200, v19);
              }
            }
            else
            {
              if ( (v53 & 1) != 0 )
                v57 = 200;
              else
                v57 = -200;
              *((_DWORD *)this + 121) = v57;
            }
          }
        }
        v58 = *((_DWORD *)this + 121);
        if ( v58 < 1 )
          result = LogicMath::min(0, v58 + 10, v6);
        else
          result = LogicMath::max(0, v58 - 10, v6);
        *((_DWORD *)this + 121) = result;
      }
      return result;
    }

    __int64 __fastcall LogicMovementComponent::getDirection(CommandStorage *this)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      return LogicCharacter::getDirection(ParentCharacter);
    }

    __int64 __fastcall LogicMovementComponent::tickToTarget(CommandStorage *this, const char *a2, const #1240 *a3)
    {
      int v4; // w20
      GameMode *ParentCharacter; // x0
      __int64 Position; // x0
    
      v4 = (int)a2;
      if ( !(_DWORD)a2 )
      {
        Debugger::warning((__siginfo *)"LogicMovementComponent::tickToTarget: Speed is zero", a2);
        v4 = 1;
      }
      ParentCharacter = (GameMode *)LogicComponent::getParentCharacter(this);
      Position = LogicGameObject::getPosition(ParentCharacter);
      return (unsigned int)((int)LogicVector2::getDistance(a3, Position) / v4);
    }

    __int64 __fastcall LogicMovementComponent::getHeight(CommandStorage *this, const char *a2, #1237 *a3)
    {
      int v4; // w20
      int v5; // w0
      int v6; // w3
      int v7; // w0
    
      v4 = (int)a2;
      if ( ((unsigned int)a3 & 0x80000000) != 0 || (int)a2 < (int)a3 )
        Debugger::warning((__siginfo *)"getHeight invalid t", a2);
      v5 = LogicMath::min(a3, v4 - (int)a3, (int)a3);
      v7 = LogicMath::clamp((#1237 *)(unsigned int)(2 * v5), 0, 32, v6);
      return v7 - ((unsigned int)(v7 * v7) >> 6);
    }

    int *__fastcall LogicMovementComponent::checkCollisions(CommandStorage *this)
    {
      __int64 Parent; // x0
      int *result; // x0
      LogicMath *v4; // x20
      GameMode *v5; // x0
      GameMode *v6; // x0
      GameMode *v7; // x0
      int v8; // w23
      Screen *v9; // x24
      GameMode *v10; // x0
      const #1240 *Position; // x0
      int *v12; // x24
      int v13; // w21
      __int64 v14; // x22
      GameMode *v15; // x25
      int v16; // w2
      int v17; // w26
      __int64 Data; // x0
      int v19; // w27
      int v20; // w26
      int v21; // w28
      int v22; // w0
      int v23; // [xsp+8h] [xbp-58h]
      int v24; // [xsp+Ch] [xbp-54h]
    
      Parent = LogicComponent::getParent(this);
      result = (int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Parent + 112LL))(Parent);
      v4 = (LogicMath *)result;
      if ( (_DWORD)result )
      {
        v5 = (GameMode *)LogicComponent::getParent(this);
        v24 = LogicGameObject::getX(v5);
        v6 = (GameMode *)LogicComponent::getParent(this);
        v23 = LogicGameObject::getY(v6);
        v7 = (GameMode *)LogicComponent::getParent(this);
        v8 = LogicGameObject::getZ(v7);
        v9 = *(Screen **)(LogicComponent::getLogicGameObjectManager((GameMode **)this) + 64);
        v10 = (GameMode *)LogicComponent::getParent(this);
        Position = (const #1240 *)LogicGameObject::getPosition(v10);
        result = (int *)LogicSpacePartition::getIntersectingObjects(v9, Position, (int)v4 + 20);
        v12 = result;
        v13 = result[3];
        if ( v13 >= 1 )
        {
          v14 = 0;
          do
          {
            v15 = *(GameMode **)(*(_QWORD *)v12 + 8 * v14);
            result = (int *)LogicComponent::getParent(this);
            if ( v15 != (GameMode *)result )
            {
              result = (int *)LogicGameObject::getZ(v15);
              if ( v8 > 0 == (int)result > 0 )
              {
                v17 = (int)v4;
                if ( !LogicGameObject::getMovementComponentEvenIfDisabled(v15) )
                  v17 = LogicMath::min(v4, 500, v16);
                Data = LogicGameObject::getData(v15);
                if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)Data + 56LL))(Data) )
                  v19 = *(_DWORD *)(LogicGameObject::getData(v15) + 668);
                else
                  v19 = 20;
                v20 = (*(__int64 (__fastcall **)(GameMode *))(*(_QWORD *)v15 + 112LL))(v15) + v17;
                v21 = v24 - LogicGameObject::getX(v15);
                v22 = LogicGameObject::getY(v15);
                result = (int *)LogicMovementComponent::checkCollision(this, v21, v23 - v22, v20, v19);
              }
            }
            ++v14;
          }
          while ( v13 != (_DWORD)v14 );
        }
      }
      return result;
    }

    __int64 __fastcall LogicMovementComponent::getTargetPositionWhereGoingNow(__int64 this, #1240 *a2)
    {
      Sprite *v3; // x20
      int v4; // w8
      int v5; // w8
      int v6; // w21
      LogicSpellListener **Parent; // x0
      UnbindFacebookAccountMessage *LogicBattle; // x0
      int v9; // w8
      GameMode *v10; // x0
      GameMode *Target; // x0
      GameMode *v12; // x21
      GameMode *v13; // x0
      GameMode *v14; // x0
    
      v3 = (Sprite *)this;
      if ( *(_BYTE *)(this + 491) )
      {
        *(_DWORD *)a2 = *(_DWORD *)(this + 444);
        v4 = *(_DWORD *)(this + 448);
      }
      else
      {
        v5 = *(_DWORD *)(this + 24);
        if ( v5 )
        {
          v6 = *(_DWORD *)(this + 4LL * v5 + 24);
          Parent = (LogicSpellListener **)LogicComponent::getParent((Sprite *)this);
          LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(Parent);
          this = LogicBattle::getTilemapWidth(LogicBattle);
          *(_DWORD *)a2 = 500 * (v6 % (int)this) + 250;
          v9 = 500 * (v6 / (int)this);
        }
        else
        {
          v10 = (GameMode *)LogicComponent::getParent((Sprite *)this);
          Target = (GameMode *)LogicGameObject::getTarget(v10);
          v12 = Target;
          if ( Target )
          {
            *(_DWORD *)a2 = LogicGameObject::getX(Target);
            this = LogicGameObject::getY(v12);
            *((_DWORD *)a2 + 1) = this;
            return this;
          }
          v13 = (GameMode *)LogicComponent::getParent(v3);
          *(_DWORD *)a2 = 500 * LogicGameObject::getTileX(v13) + 250;
          v14 = (GameMode *)LogicComponent::getParent(v3);
          this = LogicGameObject::getTileY(v14);
          v9 = 500 * this;
        }
        v4 = v9 + 250;
      }
      *((_DWORD *)a2 + 1) = v4;
      return this;
    }

    __int64 __fastcall LogicMovementComponent::updateMovementTowards(CommandStorage *this, int a2, int a3, #1237 *a4)
    {
      LogicMath *v4; // x20
      GameMode *ParentCharacter; // x0
      AllianceJoinFailedMessage *v9; // x0
      int v10; // w23
      GameMode *Parent; // x0
      #1240 *Position; // x0
      int Distance; // w0
      int v14; // w25
      GameMode *v15; // x0
      int v16; // w24
      GameMode *v17; // x0
      int v18; // w0
      const char *v19; // x2
      int v20; // w8
      int v21; // w26
      int v22; // w27
      __int64 v23; // x0
      const char *v24; // x2
      int v25; // w21
      int v26; // w20
      __int64 v27; // x0
      int v28; // w28
      int v29; // w21
      AllianceJoinFailedMessage *v30; // x0
      LogicVector2 *Direction; // x24
      int v32; // w22
      int v33; // w25
      int v34; // w2
      int v35; // w3
      __int64 v36; // x25
      __int64 v37; // x24
      #1237 *v38; // x0
      #1237 *v39; // x0
      int v40; // w22
      int v41; // w26
      int v42; // w1
      int v43; // w0
      __int64 v44; // x23
      int v45; // w8
      __int64 v46; // x26
      GameMode *v47; // x0
      __int64 v48; // x27
      __int64 v49; // x0
      GameMode *v50; // x0
      int v51; // w21
      GameMode *v52; // x0
      GameMode *v53; // x0
      AllianceJoinFailedMessage *v54; // x0
      int v55; // w21
      AllianceJoinFailedMessage *v56; // x0
      GameMode *v57; // x0
      Font *CharacterData; // x0
      int v60; // [xsp+8h] [xbp-58h]
      int v61; // [xsp+Ch] [xbp-54h]
    
      v4 = a4;
      if ( (int)a4 >= 1 && (*((_DWORD *)this + 115) & 0x80000000) == 0 )
      {
        ParentCharacter = (GameMode *)LogicComponent::getParentCharacter(this);
        if ( *(int *)(LogicGameObject::getCharacterBuffComponent(ParentCharacter) + 56) <= 0
          && *((int *)this + 115) >= 10000 )
        {
          v9 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
          v4 = (LogicMath *)(unsigned int)(*(_DWORD *)(LogicCharacter::getCharacterData(v9) + 540) * (int)v4 / 100);
        }
      }
      v61 = (int)v4;
      v10 = LogicMath::min(v4, 250, a3);
      Parent = (GameMode *)LogicComponent::getParent(this);
      Position = (#1240 *)LogicGameObject::getPosition(Parent);
      Distance = LogicVector2::getDistance(Position, a2, a3);
      if ( Distance )
        v14 = Distance;
      else
        v14 = 1;
      if ( v10 > v14 )
        v10 = v14;
      v15 = (GameMode *)LogicComponent::getParent(this);
      v16 = LogicGameObject::getX(v15);
      v17 = (GameMode *)LogicComponent::getParent(this);
      v18 = LogicGameObject::getY(v17);
      v20 = a2 - v16;
      v60 = a2;
      if ( *((_BYTE *)this + 490) )
        v21 = 0;
      else
        v21 = a3 - v18;
      if ( *((_BYTE *)this + 490) )
        v22 = 0;
      else
        v22 = v20;
      if ( (v22 | (v22 << 8)) < 0 )
        v23 = (v22 < 1) & (unsigned __int8)(v22 << 8 < 1);
      else
        v23 = 1;
      Debugger::doAssert((Debugger *)v23, (bool)"", v19);
      v25 = v21 << 8;
      v26 = a3;
      if ( (v21 | (v21 << 8)) < 0 )
        v27 = (v21 < 1) & (unsigned __int8)(v25 < 1);
      else
        v27 = 1;
      Debugger::doAssert((Debugger *)v27, (bool)"", v24);
      v28 = (v22 << 8) / v14 * v10;
      v29 = v25 / v14 * v10;
      v30 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
      Direction = (LogicVector2 *)LogicCharacter::getDirection(v30);
      v33 = *(_DWORD *)Direction;
      v32 = *((_DWORD *)Direction + 1);
      *(_DWORD *)Direction = v22;
      *((_DWORD *)Direction + 1) = v21;
      LogicVector2::normalize(Direction, 256);
      if ( !(unsigned int)LogicVector2::getLengthSquared(Direction) )
      {
        *(_DWORD *)Direction = v33;
        *((_DWORD *)Direction + 1) = v32;
      }
      v36 = (unsigned int)(v28 >> 8);
      v37 = (unsigned int)(v29 >> 8);
      v38 = (#1237 *)*((unsigned int *)this + 121);
      if ( (_DWORD)v38 )
      {
        v39 = (#1237 *)LogicMath::clamp(v38, -256, 256, v35);
        v40 = (_DWORD)v39 * v37;
        v41 = -(v36 * (_DWORD)v39);
        v43 = LogicMath::abs(v39, v42);
        *((_DWORD *)this + 124) = (((256 - v43) * (int)v36) >> 8) + (v40 >> 8);
        *((_DWORD *)this + 125) = (((256 - v43) * (int)v37) >> 8) + (v41 >> 8);
        LogicVector2::normalize((CommandStorage *)((char *)this + 496), v10);
        v36 = *((unsigned int *)this + 124);
        v37 = *((unsigned int *)this + 125);
      }
      v44 = LogicMath::max((LogicMath *)(unsigned int)(v61 - v10), 0, v34);
      v45 = *((_DWORD *)this + 109);
      if ( v45 >= 1 )
      {
        *((_DWORD *)this + 124) = *((_DWORD *)this + 107) / v45;
        *((_DWORD *)this + 125) = *((_DWORD *)this + 108) / v45;
        if ( (int)LogicVector2::getLengthSquared((char *)this + 496) >= 22501 )
          LogicVector2::normalize((CommandStorage *)((char *)this + 496), 150);
        *((_DWORD *)this + 109) = 0;
        *(_QWORD *)((char *)this + 428) = 0;
        v36 = (unsigned int)(*((_DWORD *)this + 124) + v36);
        v37 = (unsigned int)(*((_DWORD *)this + 125) + v37);
      }
      v46 = *(_QWORD *)(LogicComponent::getLogicBattle((GameMode **)this) + 8);
      v47 = (GameMode *)LogicComponent::getParent(this);
      v48 = LogicGameObject::getPosition(v47);
      v49 = LogicComponent::getParent(this);
      LogicTileMap::moveObject(v46, v48, v36, v37, v49);
      v50 = (GameMode *)LogicComponent::getParent(this);
      v51 = v60 - LogicGameObject::getX(v50);
      v52 = (GameMode *)LogicComponent::getParent(this);
      *((_BYTE *)this + 489) = (int)(*((_DWORD *)this + 5) * (v26 - LogicGameObject::getY(v52))) / 256
                             + *((_DWORD *)this + 4) * v51 / 256 < 1001;
      if ( (*((_DWORD *)this + 115) & 0x80000000) == 0 )
      {
        if ( v61 - (int)v44 >= 10
          && (v53 = (GameMode *)LogicComponent::getParentCharacter(this),
              *(int *)(LogicGameObject::getCharacterBuffComponent(v53) + 56) <= 0)
          && (v54 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this),
              (unsigned int)LogicCharacter::getState(v54) == 1) )
        {
          v55 = *((_DWORD *)this + 115);
          v56 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(this);
          if ( v55 <= 9999 )
          {
            CharacterData = (Font *)LogicCharacter::getCharacterData(v56);
            *((_DWORD *)this + 115) += 10000
                                     * ((v61 - (int)v44)
                                      / 10)
                                     / (int)LogicCharacterData::getChargeRange(CharacterData);
          }
          else if ( LogicGameObject::getCombatComponent(v56) )
          {
            v57 = (GameMode *)LogicComponent::getParentCharacter(this);
            *(_BYTE *)(LogicGameObject::getCombatComponent(v57) + 97) = 1;
          }
        }
        else
        {
          *((_DWORD *)this + 115) = 0;
        }
      }
      return v44;
    }

    bool __fastcall LogicMovementComponent::isWaitingAfterFootStep(Sprite *a1)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
      __int64 CharacterData; // x0
      int StopMovementAfterMS; // w0
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(a1);
      CharacterData = LogicCharacter::getCharacterData(ParentCharacter);
      StopMovementAfterMS = LogicCharacterData::getStopMovementAfterMS(CharacterData);
      return StopMovementAfterMS >= 1 && *((_DWORD *)a1 + 119) > StopMovementAfterMS;
    }

    __int64 __fastcall LogicMovementComponent::initPanicTarget(__int64 a1)
    {
      __int64 Globals; // x21
      int v3; // w22
      UnbindFacebookAccountMessage *LogicBattle; // x20
      LogicGameMode **v5; // x0
      GameMode *Parent; // x0
      #1237 *v7; // x21
      GameMode *v8; // x0
      __int64 Position; // x0
      int v10; // w2
      __int64 Angle; // x0
      #1237 *v12; // x21
      LogicGameMode **v13; // x0
      int v14; // w22
      int v15; // w23
      int v16; // w1
      int v17; // w23
      int v18; // w1
      #1237 *v19; // x21
      int TilemapWidth; // w0
      int v21; // w3
      #1237 *v22; // x21
      int TilemapHeight; // w0
      int v24; // w3
      __int64 result; // x0
      LogicGameMode **v26; // x0
    
      Globals = LogicDataTables::getGlobals();
      v3 = *(_DWORD *)(Globals + 60);
      LogicBattle = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)a1);
      v5 = (LogicGameMode **)LogicComponent::getLogicBattle((GameMode **)a1);
      *(_DWORD *)(a1 + 440) = LogicBattle::rand(v5, *(_DWORD *)(Globals + 64) - v3) + v3;
      if ( *(_DWORD *)(a1 + 444) || *(_DWORD *)(a1 + 448) )
      {
        Parent = (GameMode *)LogicComponent::getParent((Sprite *)a1);
        v7 = (#1237 *)(unsigned int)(*(_DWORD *)LogicGameObject::getPosition(Parent) - *(_DWORD *)(a1 + 452));
        v8 = (GameMode *)LogicComponent::getParent((Sprite *)a1);
        Position = LogicGameObject::getPosition(v8);
        Angle = LogicMath::getAngle(v7, *(_DWORD *)(Position + 4) - *(_DWORD *)(a1 + 456), v10);
      }
      else
      {
        v26 = (LogicGameMode **)LogicComponent::getLogicBattle((GameMode **)a1);
        Angle = LogicBattle::rand(v26, 360);
      }
      v12 = (#1237 *)Angle;
      v13 = (LogicGameMode **)LogicComponent::getLogicBattle((GameMode **)a1);
      v14 = LogicBattle::rand(v13, 1000) + 1000;
      v15 = *(_DWORD *)(a1 + 452);
      *(_DWORD *)(a1 + 444) = v15 + ((int)(LogicMath::cos(v12, v16) * v14) >> 10);
      v17 = *(_DWORD *)(a1 + 456);
      *(_DWORD *)(a1 + 448) = v17 + ((int)(LogicMath::sin(v12, v18) * v14) >> 10);
      v19 = (#1237 *)*(unsigned int *)(a1 + 444);
      TilemapWidth = LogicBattle::getTilemapWidth(LogicBattle);
      *(_DWORD *)(a1 + 444) = LogicMath::clamp(v19, 0, 500 * TilemapWidth, v21);
      v22 = (#1237 *)*(unsigned int *)(a1 + 448);
      TilemapHeight = LogicBattle::getTilemapHeight(LogicBattle);
      result = LogicMath::clamp(v22, 0, 500 * TilemapHeight, v24);
      *(_DWORD *)(a1 + 448) = result;
      return result;
    }

    __int64 __fastcall LogicMovementComponent::isOnWater(Sprite *a1, int a2)
    {
      LogicSpellListener **Parent; // x0
      UnbindFacebookAccountMessage *LogicBattle; // x20
      int TilemapWidth; // w0
      __int64 v6; // x21
      __int64 v7; // x19
      BillingManager *TilemapData; // x0
    
      Parent = (LogicSpellListener **)LogicComponent::getParent(a1);
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(Parent);
      TilemapWidth = LogicBattle::getTilemapWidth(LogicBattle);
      v6 = (unsigned int)(a2 / TilemapWidth);
      v7 = (unsigned int)(a2 % TilemapWidth);
      TilemapData = (BillingManager *)LogicBattle::getTilemapData(LogicBattle);
      return LogicTilemapData::isWater(TilemapData, v7, v6);
    }

    __int64 __fastcall LogicMovementComponent::moveToPoint(__int64 a1, int *a2)
    {
      UnbindFacebookAccountMessage *LogicBattle; // x0
      const char *v5; // x1
      int v6; // w21
      int v7; // w20
      UnbindFacebookAccountMessage *v8; // x0
      __int64 result; // x0
    
      LogicBattle = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)a1);
      if ( !LogicBattle::isInsideBattleArea(LogicBattle, *a2, a2[1]) )
        Debugger::warning((__siginfo *)"target point outside battle area", v5);
      *(_DWORD *)(a1 + 24) = 1;
      v6 = *a2 / 500;
      v7 = a2[1] / 500;
      v8 = (UnbindFacebookAccountMessage *)LogicComponent::getLogicBattle((GameMode **)a1);
      result = LogicBattle::getTilemapWidth(v8);
      *(_DWORD *)(a1 + 28) = v6 + result * v7;
      return result;
    }

    __int64 LogicMovementComponent::getType()
    {
      return 1;
    }

    __int64 __fastcall LogicMovementComponent::start(__int64 a1)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
      Font *CharacterData; // x0
      __int64 result; // x0
      int v5; // w8
    
      *(_BYTE *)(a1 + 490) = 0;
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)a1);
      CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
      result = LogicCharacterData::getChargeRange(CharacterData);
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = -1;
      *(_DWORD *)(a1 + 460) = v5;
      return result;
    }

    __int64 __fastcall LogicMovementComponent::stop(__int64 result)
    {
      *(_BYTE *)(result + 490) = 1;
      *(_DWORD *)(result + 24) = 0;
      return result;
    }

    __int64 __fastcall LogicMovementComponent::doPushback(__int64 result, int a2, int a3, LogicMath *a4)
    {
      __int64 v7; // x19
      AllianceJoinFailedMessage *ParentCharacter; // x0
      __int64 CharacterData; // x0
      GameMode *v10; // x0
      FriendListMessage *CharacterBuffComponent; // x0
      GameMode *Parent; // x0
      __int64 v13; // x22
      GameMode *v14; // x0
      __int64 v15; // x21
      GameMode *v16; // x0
      GameMode *v17; // x0
      const char *v18; // x2
      int v19; // w1
      int v20; // w0
      int v21; // w2
      int v22; // w23
      __int64 v23; // x0
      int v24; // w2
      int v25; // w8
      int v26; // w9
    
      v7 = result;
      if ( !*(_BYTE *)(result + 488) )
      {
        ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter((Sprite *)result);
        CharacterData = LogicCharacter::getCharacterData(ParentCharacter);
        result = LogicCharacterData::getIgnorePushback(CharacterData);
        if ( (result & 1) == 0 )
        {
          v10 = (GameMode *)LogicComponent::getParentCharacter((Sprite *)v7);
          CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(v10);
          result = LogicCharacterBuffComponent::ignorePushBack(CharacterBuffComponent);
          if ( (result & 1) == 0 )
          {
            Parent = (GameMode *)LogicComponent::getParent((Sprite *)v7);
            v13 = (unsigned int)LogicGameObject::getX(Parent) - a2;
            v14 = (GameMode *)LogicComponent::getParent((Sprite *)v7);
            v15 = (unsigned int)LogicGameObject::getY(v14) - a3;
            v16 = (GameMode *)LogicComponent::getParent((Sprite *)v7);
            *(_DWORD *)(v7 + 464) = LogicGameObject::getX(v16);
            v17 = (GameMode *)LogicComponent::getParent((Sprite *)v7);
            *(_DWORD *)(v7 + 468) = LogicGameObject::getY(v17);
            Debugger::doAssert((Debugger *)1, (bool)"", v18);
            v20 = LogicMath::sqrt((#1237 *)(unsigned int)(v13 * v13 + v15 * v15), v19);
            v22 = v20;
            if ( v20 )
            {
              if ( v20 < 1 )
              {
                *(_BYTE *)(v7 + 488) = 0;
                return Debugger::hudPrint((__siginfo *)"push back fail!", (const char *)0xFFFFFFFFLL, v21);
              }
            }
            else
            {
              v13 = (~(2 * *(_DWORD *)(LogicComponent::getParent((Sprite *)v7) + 16)) & 2u) - 1;
              v22 = 1;
            }
            v23 = LogicComponent::getParent((Sprite *)v7);
            (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v23 + 40) + 128LL))(
              *(_QWORD *)(v23 + 40),
              v13,
              v15,
              100);
            result = LogicMath::min(a4, 10000, v24);
            v25 = 0;
            if ( (int)result >= 1 )
            {
              LOWORD(v26) = 0;
              do
              {
                LOWORD(v25) = v25 + 25;
                v26 = (__int16)(v25 + v26);
                v25 = (__int16)v25;
              }
              while ( v26 < (int)result );
            }
            *(_DWORD *)(v7 + 472) = v25;
            *(_DWORD *)(v7 + 464) += (int)result * (int)v13 / v22;
            *(_DWORD *)(v7 + 468) += (int)result * (int)v15 / v22;
            *(_BYTE *)(v7 + 488) = 1;
          }
        }
      }
      return result;
    }

    void __fastcall LogicMovementComponent::checkCollision(Sprite *a1, #1237 *a2, #1237 *a3, int a4, int a5)
    {
      int v8; // w20
      int v10; // w1
      const char *v11; // x2
      __int64 v12; // x24
      int v13; // w1
      GameMode *Parent; // x0
      int v15; // w0
      int v16; // w24
      AllianceJoinFailedMessage *ParentCharacter; // x0
      int v18; // w25
      int v19; // w3
      int v20; // w0
      int v21; // w2
      int v22; // w0
      int v23; // w9
    
      v8 = (int)a2;
      if ( (int)LogicMath::abs(a2, (int)a2) <= a4 && (int)LogicMath::abs(a3, v10) <= a4 )
      {
        v12 = (unsigned int)(v8 * v8 + (_DWORD)a3 * (_DWORD)a3);
        Debugger::doAssert((Debugger *)1, (bool)"", v11);
        if ( !(_DWORD)v12 )
        {
          Parent = (GameMode *)LogicComponent::getParent(a1);
          if ( LogicGameObject::isOwnerTop(Parent) )
            LODWORD(a3) = -1;
          else
            LODWORD(a3) = 1;
          v12 = 1;
        }
        if ( (int)v12 <= a4 * a4 )
        {
          v15 = LogicMath::sqrt((#1237 *)v12, v13);
          if ( v15 )
            v16 = v15;
          else
            v16 = 1;
          ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(a1);
          v18 = *(_DWORD *)(LogicCharacter::getCharacterData(ParentCharacter) + 668);
          v20 = LogicMath::clamp((#1237 *)(unsigned int)(a4 - v16), 0, 300, v19);
          v22 = LogicMath::min((LogicMath *)0x12C, v20 * a5 / v18 + 1, v21);
          v23 = *((_DWORD *)a1 + 108);
          *((_DWORD *)a1 + 107) += v22 * v8 / v16;
          *((_DWORD *)a1 + 108) = v23 + v22 * (int)a3 / v16;
          ++*((_DWORD *)a1 + 109);
        }
      }
    }

    __int64 __fastcall LogicMovementComponent::setPanic(__int64 result, int a2)
    {
      Sprite *v2; // x19
      GameMode *Parent; // x0
      GameMode *v4; // x0
    
      v2 = (Sprite *)result;
      if ( a2 != *(unsigned __int8 *)(result + 491) )
      {
        *(_BYTE *)(result + 491) = a2;
        if ( a2 )
        {
          *(_BYTE *)(result + 490) = 0;
          Parent = (GameMode *)LogicComponent::getParent((Sprite *)result);
          *((_DWORD *)v2 + 113) = *(_DWORD *)LogicGameObject::getPosition(Parent);
          v4 = (GameMode *)LogicComponent::getParent(v2);
          *((_DWORD *)v2 + 114) = *(_DWORD *)(LogicGameObject::getPosition(v4) + 4);
          return LogicMovementComponent::initPanicTarget((__int64)v2);
        }
        else
        {
          *(_DWORD *)(result + 456) = 0;
          *(_QWORD *)(result + 440) = 0;
          *(_QWORD *)(result + 448) = 0;
        }
      }
      return result;
    }

    void LogicMovementComponent::setDebugTouchPosition()
    {
      ;
    }

    __int64 __fastcall LogicMovementComponent::getSpeed(Sprite *a1)
    {
      AllianceJoinFailedMessage *ParentCharacter; // x0
      Font *CharacterData; // x19
      AllianceJoinFailedMessage *v4; // x0
      GameMode *v6; // x0
      FriendListMessage *CharacterBuffComponent; // x20
      int Speed; // w1
      __int64 v9; // x2
      int v10; // w3
    
      ParentCharacter = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(a1);
      CharacterData = (Font *)LogicCharacter::getCharacterData(ParentCharacter);
      v4 = (AllianceJoinFailedMessage *)LogicComponent::getParentCharacter(a1);
      if ( (LogicCharacter::getState(v4) & 0xFFFFFFFD) == 4 )
        return LogicCharacterData::getJumpSpeed((__int64)CharacterData);
      v6 = (GameMode *)LogicComponent::getParentCharacter(a1);
      CharacterBuffComponent = (FriendListMessage *)LogicGameObject::getCharacterBuffComponent(v6);
      Speed = LogicCharacterData::getSpeed(CharacterData);
      return LogicCharacterBuffComponent::calculateSpeed(CharacterBuffComponent, Speed, v9, v10);
    }

    __int64 __fastcall LogicMovementComponent::getPathLength(__int64 a1)
    {
      return *(unsigned int *)(a1 + 24);
    }

    __int64 __fastcall LogicMovementComponent::getMoveTimer(__int64 a1)
    {
      return *(unsigned int *)(a1 + 476);
    }

    __int64 __fastcall LogicMovementComponent::getPreviousMoveTimer(__int64 a1)
    {
      return *(unsigned int *)(a1 + 480);
    }

    __int64 __fastcall LogicMovementComponent::updatePrevPos(__int64 result)
    {
      *(_DWORD *)(result + 480) = *(_DWORD *)(result + 476);
      return result;
    }

    void LogicMovementComponent::~LogicMovementComponent()
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicMovementComponent::~LogicMovementComponent(void *a1)
    {
      operator delete(a1);
    }

}; // end class LogicMovementComponent
