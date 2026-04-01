class LogicSummoner
{
public:

    __int64 __fastcall LogicSummoner::LogicSummoner(__int64 a1, const AreaEffectObject *a2)
    {
      LogicCharacter::LogicCharacter((AllianceJoinFailedMessage *)a1, a2);
      *(_BYTE *)(a1 + 210) = 0;
      *(_QWORD *)a1 = off_100470170;
      *(_DWORD *)(a1 + 328) = 0;
      *(_BYTE *)(a1 + 324) = 0;
      *(_QWORD *)(a1 + 316) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 224) = 0;
      *(_QWORD *)(a1 + 256) = -1;
      *(_QWORD *)(a1 + 264) = -1;
      *(_DWORD *)(a1 + 280) = 0;
      *(_DWORD *)(a1 + 228) = 0;
      *(_DWORD *)(a1 + 244) = 0;
      *(_QWORD *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_DWORD *)(a1 + 248) = -1;
      *(_DWORD *)(a1 + 252) = -1;
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 276) = 0;
      *(_DWORD *)(a1 + 304) = 0;
      *(_DWORD *)(a1 + 308) = 0;
      *(_DWORD *)(a1 + 312) = 0;
      *(_BYTE *)(a1 + 325) = 0;
      LogicArrayList<int>::ensureCapacity(a1 + 216, 8);
      LogicArrayList<int>::ensureCapacity(a1 + 232, 8);
      *(_DWORD *)(a1 + 272) = *(_DWORD *)(LogicDataTables::getGlobals() + 152);
      *(_BYTE *)(a1 + 324) = 1;
      *(_BYTE *)(a1 + 210) = 1;
      return a1;
    }

    __int64 __fastcall LogicSummoner::setEncodeDeckDataEnabled(__int64 result, char a2)
    {
      *(_BYTE *)(result + 210) = a2;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicSummoner::LogicSummoner(LogicSummoner *this, const AreaEffectObject *a2)
    {
      __ZN13LogicSummonerC2EPK9LogicData((__int64)this, a2);
    }

    __int64 __fastcall LogicSummoner::setStartingMana(__int64 result, int a2)
    {
      *(_DWORD *)(result + 272) = a2;
      return result;
    }

    void __fastcall LogicSummoner::destruct(__int64 a1)
    {
      LogicHeatMap *v2; // x0
      void *v3; // x0
      void **v4; // x20
      __int64 v5; // x0
    
      LogicCharacter::destruct((AllianceJoinFailedMessage *)a1);
      v2 = *(LogicHeatMap **)(a1 + 296);
      if ( v2 )
      {
        LogicHeatMap::destruct(v2);
        v3 = *(void **)(a1 + 296);
        if ( v3 )
          operator delete(v3);
        *(_QWORD *)(a1 + 296) = 0;
      }
      v4 = (void **)(a1 + 288);
      v5 = *(_QWORD *)(a1 + 288);
      if ( v5 )
      {
        LogicSpellAIBlackboard::destruct(v5);
        if ( *v4 )
          operator delete(*v4);
        *v4 = 0;
      }
      *(_BYTE *)(a1 + 210) = 0;
      *(_DWORD *)(a1 + 328) = 0;
      *(_BYTE *)(a1 + 324) = 0;
      *(_QWORD *)(a1 + 316) = 0;
      *(_QWORD *)(a1 + 256) = -1;
      *(_QWORD *)(a1 + 264) = -1;
      *(_DWORD *)(a1 + 280) = 0;
      *(_DWORD *)(a1 + 228) = 0;
      *(_DWORD *)(a1 + 244) = 0;
      *v4 = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_DWORD *)(a1 + 248) = -1;
      *(_DWORD *)(a1 + 252) = -1;
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 276) = 0;
      *(_DWORD *)(a1 + 304) = 0;
      *(_DWORD *)(a1 + 308) = 0;
      *(_DWORD *)(a1 + 312) = 0;
      *(_BYTE *)(a1 + 325) = 0;
    }

    __int64 __fastcall LogicSummoner::encode(__int64 a1, __int64 a2)
    {
      __int64 hasDeck; // x21
      __int64 v5; // x21
      void (__fastcall *v6)(__int64, _QWORD); // x8
      __int64 v7; // x21
      __int64 v8; // x21
    
      LogicCharacter::encode();
      if ( *(_BYTE *)(a1 + 210) )
        hasDeck = LogicSummoner::hasDeck(a1);
      else
        hasDeck = 0;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, hasDeck);
      if ( (_DWORD)hasDeck )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 280));
        v5 = 0;
        v6 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL);
        do
        {
          v6(a2, *(unsigned int *)(a1 + 256 + v5));
          v6 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL);
          v5 += 4;
        }
        while ( v5 != 16 );
        v6(a2, *(unsigned int *)(a1 + 228));
        if ( *(int *)(a1 + 228) >= 1 )
        {
          v7 = 0;
          do
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(
              a2,
              *(unsigned int *)(*(_QWORD *)(a1 + 216) + 4 * v7++));
          while ( v7 < *(int *)(a1 + 228) );
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 244));
        if ( *(int *)(a1 + 244) >= 1 )
        {
          v8 = 0;
          do
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(
              a2,
              *(unsigned int *)(*(_QWORD *)(a1 + 232) + 4 * v8++));
          while ( v8 < *(int *)(a1 + 244) );
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 248));
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 320));
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 312));
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 276));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 272));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 316));
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 328));
    }

    bool __fastcall LogicSummoner::hasDeck(__int64 a1)
    {
      AcceptChallengeMessage *Deck; // x0
    
      if ( !((__int64 (*)(void))LogicSummoner::getDeck)() )
        return 0;
      Deck = (AcceptChallengeMessage *)LogicSummoner::getDeck(a1);
      return !LogicSpellDeck::isEmpty(Deck);
    }

    __int64 __fastcall LogicSummoner::decode(LogicCharacter *a1, ByteStream *a2)
    {
      int v4; // w22
      __int64 i; // x21
      int v6; // w21
      int v7; // w0
      __int64 result; // x0
      int v9; // [xsp+8h] [xbp-38h] BYREF
      int v10; // [xsp+Ch] [xbp-34h] BYREF
    
      LogicCharacter::decode(a1, a2);
      if ( (*(unsigned int (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 136LL))(a2) )
      {
        *((_DWORD *)a1 + 70) = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
        v4 = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
        for ( i = 0; i != 16; i += 4 )
        {
          *(_DWORD *)((char *)a1 + i + 256) = v4;
          v4 = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
        }
        *((_DWORD *)a1 + 57) = 0;
        v6 = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
        if ( v4 >= 1 )
        {
          do
          {
            v10 = v6;
            LogicArrayList<int>::add((__int64)a1 + 216, &v10);
            v6 = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
            --v4;
          }
          while ( v4 );
        }
        *((_DWORD *)a1 + 61) = 0;
        v7 = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
        if ( v6 >= 1 )
        {
          do
          {
            v9 = v7;
            LogicArrayList<int>::add((__int64)a1 + 232, &v9);
            v7 = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
            --v6;
          }
          while ( v6 );
        }
        *((_DWORD *)a1 + 62) = v7;
        *((_DWORD *)a1 + 80) = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
        *((_DWORD *)a1 + 78) = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
      }
      *((_DWORD *)a1 + 69) = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)a1 + 68) = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)a1 + 79) = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)a1 + 82) = result;
      return result;
    }

    __int64 __fastcall LogicSummoner::setLogicClientAvatar(__int64 a1, __int64 a2, AcceptChallengeMessage *a3, int a4)
    {
      _QWORD *v6; // x21
      __int64 Table; // x22
      int v8; // w25
      UnbindFacebookAccountMessage *LogicBattle; // x0
      __int64 LocationData; // x23
      __int64 v11; // x24
      LogicMusicData *v12; // x26
      __int64 v13; // x0
      const InitState *SpellToCast; // x8
      int SpellIdxByData; // w0
      const char *v16; // x1
      __int64 v17; // x8
      __int64 v18; // x9
      bool v19; // cc
      int v20; // w10
      bool v21; // zf
      const char *v22; // x22
      int v23; // w2
      __int64 v24; // x8
      __int64 v25; // x9
      int v26; // w10
      const char *v27; // x21
      __int64 result; // x0
      __int64 v29; // x8
      int *v30; // x11
      int v31; // w9
      int v32; // w10
      _DWORD *v33; // x11
      int v34; // [xsp+4h] [xbp-6Ch] BYREF
      __int64 v35; // [xsp+8h] [xbp-68h] BYREF
      __int64 v36; // [xsp+10h] [xbp-60h]
      int v37; // [xsp+18h] [xbp-58h] BYREF
      int v38; // [xsp+1Ch] [xbp-54h] BYREF
    
      *(_DWORD *)(a1 + 228) = 0;
      if ( a4 )
      {
        v6 = (_QWORD *)(a1 + 216);
        Table = LogicDataTables::getTable(48);
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table);
        LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
        LocationData = LogicBattle::getLocationData(LogicBattle);
        if ( v8 > 0 )
        {
          v11 = 0;
          do
          {
            v12 = (LogicMusicData *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, v11);
            v13 = LogicTutorialData::getLocationData(v12);
            if ( LogicData::equals(LocationData, v13) )
            {
              SpellToCast = (const InitState *)LogicTutorialData::getSpellToCast(v12);
              if ( SpellToCast )
              {
                SpellIdxByData = LogicSpellDeck::getSpellIdxByData(a3, SpellToCast);
                v38 = SpellIdxByData;
                if ( SpellIdxByData == -1 )
                {
                  Debugger::warning((__siginfo *)"Unable to find spell required by tutorial from deck", v16);
                }
                else
                {
                  v17 = *(int *)(a1 + 228);
                  v18 = 4LL * ((int)v17 - 1);
                  while ( 1 )
                  {
                    v19 = v17-- < 1;
                    if ( v19 )
                      break;
                    v20 = *(_DWORD *)(*v6 + v18);
                    v18 -= 4;
                    if ( v20 == SpellIdxByData )
                      goto LABEL_13;
                  }
                  LogicArrayList<int>::add(a1 + 216, &v38);
                }
              }
            }
    LABEL_13:
            v21 = (_DWORD)v11 == v8 - 1;
            v11 = (unsigned int)(v11 + 1);
          }
          while ( !v21 );
        }
        v22 = 0;
        v37 = 0;
        do
        {
          if ( LogicSpellDeck::getSpell(a3, v22) )
          {
            v24 = *(int *)(a1 + 228);
            v25 = 4LL * ((int)v24 - 1);
            while ( 1 )
            {
              v19 = v24-- < 1;
              if ( v19 )
                break;
              v26 = *(_DWORD *)(*v6 + v25);
              v25 -= 4;
              if ( v26 == (_DWORD)v22 )
                goto LABEL_22;
            }
            LogicArrayList<int>::add(a1 + 216, &v37);
          }
    LABEL_22:
          v22 = (const char *)(unsigned int)((_DWORD)v22 + 1);
          v37 = (int)v22;
        }
        while ( (int)v22 < 8 );
      }
      else
      {
        v36 = 8;
        v27 = 0;
        v35 = operator new[](32);
        v34 = 0;
        do
        {
          if ( LogicSpellDeck::getSpell(a3, v27) )
            LogicArrayList<int>::add((__int64)&v35, &v34);
          v27 = (const char *)(unsigned int)((_DWORD)v27 + 1);
          v34 = (int)v27;
        }
        while ( (int)v27 < 8 );
        LogicSummoner::addSpellsInRandomOrder(a1, &v35);
        if ( v35 )
          operator delete[](v35);
        v35 = 0;
        v36 = 0;
      }
      result = LogicMath::min((LogicMath *)*(unsigned int *)(a1 + 228), 4, v23);
      *(_DWORD *)(a1 + 280) = result;
      if ( (int)result >= 1 )
      {
        v29 = 0;
        do
        {
          v30 = *(int **)(a1 + 216);
          v31 = *v30;
          v32 = *(_DWORD *)(a1 + 228);
          *(_DWORD *)(a1 + 228) = v32 - 1;
          if ( v32 >= 2 )
          {
            v33 = v30 + 1;
            do
            {
              *(v33 - 1) = *v33;
              --v32;
              ++v33;
            }
            while ( v32 > 1 );
          }
          *(_DWORD *)(a1 + 4 * v29++ + 256) = v31;
        }
        while ( v29 < *(int *)(a1 + 280) );
      }
      return result;
    }

    __int64 __fastcall LogicSummoner::addSpellsInRandomOrder(__int64 a1, __int64 a2)
    {
      LogicGameMode **LogicBattle; // x0
      int v5; // w21
      __int64 OwnerAccountId; // x0
      int LowerInt; // w0
      int v8; // w1
      __int64 v9; // x20
      int v10; // w0
      int v12; // [xsp+4h] [xbp-9ECh] BYREF
      _BYTE v13[2504]; // [xsp+8h] [xbp-9E8h] BYREF
    
      *(_DWORD *)(a1 + 228) = 0;
      LogicBattle = (LogicGameMode **)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
      v5 = LogicBattle::rand(LogicBattle, 100000);
      OwnerAccountId = LogicGameObject::getOwnerAccountId((LogicSpellListener **)a1);
      LowerInt = LogicLong::getLowerInt(OwnerAccountId);
      LogicMersenneTwisterRandom::LogicMersenneTwisterRandom((#1233 *)v13, LowerInt + v5);
      v8 = *(_DWORD *)(a2 + 12);
      if ( v8 )
      {
        v9 = a1 + 216;
        do
        {
          v10 = LogicMersenneTwisterRandom::rand((#1233 *)v13, v8);
          v12 = LogicArrayList<int>::remove((__int64 *)a2, v10);
          LogicArrayList<int>::add(v9, &v12);
          v8 = *(_DWORD *)(a2 + 12);
        }
        while ( v8 );
      }
      return LogicMersenneTwisterRandom::destruct((#1233 *)v13);
    }

    __int64 LogicSummoner::canBeTargeted()
    {
      return 1;
    }

    __int64 __fastcall LogicSummoner::getSpell(__int64 a1, int a2)
    {
      const char *v2; // x19
      AcceptChallengeMessage *Deck; // x0
    
      v2 = (const char *)*(unsigned int *)(a1 + 4LL * a2 + 256);
      if ( (_DWORD)v2 == -1 )
        return 0;
      Deck = (AcceptChallengeMessage *)LogicSummoner::getDeck(a1);
      return LogicSpellDeck::getSpell(Deck, v2);
    }

    __int64 __fastcall LogicSummoner::getDeck(LogicSpellListener **a1)
    {
      UnbindFacebookAccountMessage *LogicBattle; // x20
      __int64 OwnerAccountId; // x0
      int HigherInt; // w21
      __int64 v5; // x0
      int LowerInt; // w0
      int AccountIndex; // w1
    
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(a1);
      OwnerAccountId = LogicGameObject::getOwnerAccountId(a1);
      HigherInt = LogicLong::getHigherInt(OwnerAccountId);
      v5 = LogicGameObject::getOwnerAccountId(a1);
      LowerInt = LogicLong::getLowerInt(v5);
      AccountIndex = LogicBattle::getAccountIndex(LogicBattle, HigherInt, LowerInt);
      return LogicBattle::getDeck(LogicBattle, AccountIndex);
    }

    __int64 __fastcall LogicSummoner::hasSpellInHand(LogicSpellListener **a1, __int64 a2)
    {
      const char *v4; // x1
      AcceptChallengeMessage *Deck; // x20
      __int64 v6; // x22
      LogicSpellListener **v7; // x21
      const char *v8; // x1
      TextField *Spell; // x0
      __int64 SpellData; // x0
    
      if ( LogicSummoner::hasDeck((__int64)a1) )
      {
        Deck = (AcceptChallengeMessage *)LogicSummoner::getDeck(a1);
        v6 = 0;
        v7 = a1 + 32;
        while ( 1 )
        {
          v8 = (const char *)*((unsigned int *)v7 + v6);
          if ( (_DWORD)v8 != -1 )
          {
            Spell = (TextField *)LogicSpellDeck::getSpell(Deck, v8);
            if ( Spell )
            {
              SpellData = LogicSpell::getSpellData(Spell);
              if ( LogicData::equals(a2, SpellData) )
                break;
            }
          }
          if ( ++v6 >= 4 )
            return 0;
        }
        return 1;
      }
      else
      {
        Debugger::warning((__siginfo *)"hasSpellInHand called while deck is null", v4);
        return 0;
      }
    }

    __int64 __fastcall LogicSummoner::useSpell(__int64 a1, unsigned int *a2, int a3, int a4, AllianceItem *a5, __int64 a6)
    {
      InitState *SpellData; // x23
      const TextField *v13; // x28
      TextField *LastUsedSpell; // x0
      const char *v15; // x1
      AllianceItem *v16; // x26
      bool v17; // w21
      __int64 LogicGameObjectManager; // x0
      bool v19; // w6
      #1237 *v20; // x25
      LogicMath *v21; // x20
      int InstantDamage; // w22
      int InstantHeal; // w21
      __int64 Radius; // x24
      __int64 GlobalID; // x27
      int MultipleProjectiles; // w0
      int v27; // w2
      int v28; // w0
      int v29; // w20
      AllianceItem *v30; // x28
      #1401 *Projectile; // x27
      LogicGameMode **LogicBattle; // x0
      int v33; // w0
      const char *v34; // x25
      int v35; // w0
      int v36; // w22
      Font *CharacterData; // x0
      int v38; // w24
      int v39; // w21
      int v40; // w26
      GameMode *GameObjectByClassID; // x23
      int OwnerIndex; // w0
      __int64 DamageEffect; // x0
      LogicData *DamageType; // x0
      LogicSpellListener *v45; // x0
      int v47; // w21
      UnlockAccountPopup **v48; // x22
      const LogicData *v49; // x23
      char OnlyEnemies; // w0
      int v51; // w4
      Sprite *v52; // x0
      LogicMath *v53; // x20
      Font *SummonCharacter; // x22
      const AreaEffectObject *Egg; // x24
      int SummonNumber; // w23
      const #1236 *OwnerAccountId; // x21
      UnbindFacebookAccountMessage *v58; // x0
      ChangeAllianceMemberRoleOkMessage **v59; // x25
      GameMode *v60; // x21
      const char *HatchDuration; // x0
      LogicSpellListener *v62; // x0
      const BattleResultMessage *StartingBuff; // x24
      ChangeAllianceMemberRoleOkMessage **v64; // x0
      __int64 v65; // x24
      const AreaEffectObject *AreaEffectObject; // x21
      UnbindFacebookAccountMessage *v67; // x22
      const #1236 *v68; // x0
      GameMode *v69; // x21
      LogicSpellListener *v70; // x0
      const BattleResultMessage *BuffType; // x21
      int BuffNumber; // w0
      int v73; // w23
      char OnlyOwnTroops; // w24
      #1237 *v75; // x20
      char v76; // w25
      __int64 v77; // x0
      AcceptChallengeMessage *Deck; // x21
      int SpellCnt; // w22
      const char *v80; // x23
      TextField *Spell; // x0
      __int64 v82; // x21
      void (__fastcall *v83)(__int64, #1237 *, __int64, _QWORD, __int64, _QWORD, __int64, _QWORD); // x20
      __int64 Effect; // x22
      __int64 v85; // x0
      int StartingBuffTime; // [xsp+0h] [xbp-C0h]
      char v87; // [xsp+0h] [xbp-C0h]
      char v88; // [xsp+1h] [xbp-BFh]
      int v89; // [xsp+20h] [xbp-A0h]
      int v90; // [xsp+24h] [xbp-9Ch]
      int v91; // [xsp+24h] [xbp-9Ch]
      __int64 v92; // [xsp+28h] [xbp-98h]
      unsigned int v93; // [xsp+30h] [xbp-90h]
      int v94; // [xsp+30h] [xbp-90h]
      int v95; // [xsp+34h] [xbp-8Ch]
      int v96; // [xsp+38h] [xbp-88h]
      int v97; // [xsp+3Ch] [xbp-84h]
      int v98; // [xsp+40h] [xbp-80h]
      unsigned int v99; // [xsp+44h] [xbp-7Ch]
      __int64 v100; // [xsp+48h] [xbp-78h]
      int Pushback; // [xsp+48h] [xbp-78h]
      int v102; // [xsp+50h] [xbp-70h]
      int BuffTime; // [xsp+50h] [xbp-70h]
      unsigned int v104; // [xsp+54h] [xbp-6Ch]
      int v105; // [xsp+58h] [xbp-68h] BYREF
      int v106; // [xsp+5Ch] [xbp-64h]
      _DWORD v107[2]; // [xsp+60h] [xbp-60h] BYREF
      _BYTE v108[8]; // [xsp+68h] [xbp-58h] BYREF
    
      SpellData = (InitState *)LogicSpell::getSpellData((TextField *)a2);
      v13 = (const TextField *)a2;
      if ( (unsigned int)LogicSpellData::isMirror(SpellData) )
      {
        LastUsedSpell = (TextField *)LogicSummoner::getLastUsedSpell((AllianceItem *)a1);
        v13 = LastUsedSpell;
        if ( !LastUsedSpell )
          return Debugger::warning((__siginfo *)"Mirror spell used as a first spell", v15);
        SpellData = (InitState *)LogicSpell::getSpellData(LastUsedSpell);
      }
      v92 = a6;
      if ( a5 )
        v16 = a5;
      else
        v16 = SpellData;
      if ( LogicServerEventCollector::ENABLED )
        LogicSpell::increaseServerEvent(v13);
      LogicVector2::LogicVector2((LogicVector2 *)v108, a3, a4);
      LogicVector2::LogicVector2((LogicVector2 *)v107, -1, -1);
      v17 = (unsigned int)LogicGameObject::getOwnerIndex((GameMode *)a1) == 0;
      LogicGameObjectManager = LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
      LogicSummoner::findPositionForSpell(
        v16,
        (const InitState *)v108,
        (const #1240 *)v107,
        *(#1240 **)(LogicGameObjectManager + 56),
        0,
        v17,
        v19);
      v20 = (#1237 *)v107[0];
      v104 = v107[1];
      *(_DWORD *)(a1 + 272) -= LogicSummoner::calculateManaCost(a1, v16);
      v21 = (LogicMath *)a2[2];
      v102 = a2[2];
      LogicSummoner::useSpellFromHand((LogicSummoner *)a1, (const LogicSpell *)a2);
      InstantDamage = LogicSpellData::getInstantDamage((InitState **)v16, v21);
      InstantHeal = LogicSpellData::getInstantHeal((InitState **)v16, v21);
      Radius = LogicSpellData::getRadius(v16);
      GlobalID = 0;
      if ( LogicSpellData::getProjectile(v16) )
      {
        MultipleProjectiles = LogicSpellData::getMultipleProjectiles(v16);
        v28 = LogicMath::max((LogicMath *)1, MultipleProjectiles, v27);
        v98 = v28;
        if ( v28 < 1 )
        {
          GlobalID = 0;
        }
        else
        {
          v89 = InstantDamage;
          v90 = InstantHeal;
          v99 = (unsigned int)v20;
          v100 = (__int64)v13;
          v29 = 0;
          v97 = (int)Radius >> 2;
          v96 = Radius - ((int)Radius >> 2);
          v93 = Radius;
          v95 = 360 / v28;
          do
          {
            if ( v29 || !LogicSpellData::getCustomFirstProjectile(v16) )
            {
              Projectile = (#1401 *)LogicSpellData::getProjectile(v16);
              LogicVector2::LogicVector2((LogicVector2 *)&v105, 0, 0);
              v30 = v16;
              if ( v29 >= 1 )
              {
                LogicBattle = (LogicGameMode **)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
                v105 = LogicBattle::rand(LogicBattle, v96) + v97;
                LogicVector2::rotate((LogicVector2 *)&v105, v95 * v29);
              }
            }
            else
            {
              v30 = v16;
              Projectile = (#1401 *)LogicSpellData::getCustomFirstProjectile(v16);
              LogicVector2::LogicVector2((LogicVector2 *)&v105, 0, 0);
            }
            v33 = LogicGameObject::getX((GameMode *)a1);
            v34 = (const char *)(unsigned int)(v33 + (v105 >> 2));
            v35 = LogicGameObject::getY((GameMode *)a1);
            v36 = v106 + v35;
            CharacterData = (Font *)LogicCharacter::getCharacterData((AllianceJoinFailedMessage *)a1);
            v38 = 3 * LogicCharacterData::getCollisionRadius(CharacterData);
            v39 = v105 + v99;
            v40 = v106 + v104;
            LogicVector2::destruct((LogicVector2 *)&v105);
            GameObjectByClassID = (GameMode *)LogicGameObjectFactory::createGameObjectByClassID(
                                                Projectile,
                                                (const AreaEffectObject *)3);
            OwnerIndex = LogicGameObject::getOwnerIndex((GameMode *)a1);
            LogicGameObject::setOwnerIndex((__int64)GameObjectByClassID, OwnerIndex);
            DamageEffect = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
            if ( !DamageEffect )
            {
              DamageType = (LogicData *)LogicProjectileData::getDamageType(Projectile);
              DamageEffect = LogicDamageTypeData::getDamageEffect(DamageType);
            }
            LogicProjectile::init(
              (__int64)GameObjectByClassID,
              v34,
              v36,
              v38,
              0,
              v39,
              v40,
              (LogicSpellListener **)a1,
              DamageEffect,
              v102,
              v100);
            v45 = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
            LogicGameObjectManager::addLogicGameObject(v45, GameObjectByClassID, 1);
            GlobalID = LogicGameObject::getGlobalID(GameObjectByClassID);
            ++v29;
            v16 = v30;
          }
          while ( v98 != v29 );
          v13 = (const TextField *)v100;
          v20 = (#1237 *)v99;
          Radius = v93;
          InstantDamage = v89;
          InstantHeal = v90;
        }
      }
      if ( (int)Radius >= 1 )
      {
        if ( InstantDamage >= 1 )
        {
          v91 = InstantHeal;
          Pushback = LogicSpellData::getPushback(v16);
          v47 = InstantDamage;
          v48 = (UnlockAccountPopup **)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
          v49 = (const LogicData *)LogicSpellData::getDamageType(v16);
          OnlyEnemies = LogicSpellData::getOnlyEnemies(v16);
          v51 = v47;
          InstantHeal = v91;
          LogicGameObjectManager::giveDamageToObjectsInArea(
            v48,
            v20,
            v104,
            Radius,
            v51,
            v49,
            (GameMode *)a1,
            Pushback,
            (int)v20,
            v104,
            -1,
            OnlyEnemies ^ 1,
            1,
            1,
            0);
        }
        if ( InstantHeal >= 1 )
        {
          v52 = (Sprite *)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
          LogicGameObjectManager::healObjectsInArea(v52, v20, (#1237 *)v104, Radius, InstantHeal, (const GameMode *)a1);
        }
      }
      v94 = Radius;
      if ( LogicSpellData::getSummonCharacter(v16) )
      {
        v53 = v20;
        SummonCharacter = (Font *)LogicSpellData::getSummonCharacter(v16);
        Egg = (const AreaEffectObject *)LogicCharacterData::getEgg((__int64)SummonCharacter);
        SummonNumber = LogicSpellData::getSummonNumber(v16);
        OwnerAccountId = (const #1236 *)LogicGameObject::getOwnerAccountId((LogicSpellListener **)a1);
        v58 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
        v59 = (ChangeAllianceMemberRoleOkMessage **)v58;
        if ( Egg )
        {
          v20 = v53;
          v60 = LogicBattle::spawnObject(v58, Egg, v53, (LogicMath *)v104, OwnerAccountId, 0, 0);
          HatchDuration = (const char *)LogicEggData::getHatchDuration(Egg);
          LogicEgg::init((__int64)v60, (__int64)SummonCharacter, HatchDuration, v102, SummonNumber, (__int64)v13);
          v62 = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
          LogicGameObjectManager::addLogicGameObject(v62, v60, 1);
        }
        else
        {
          StartingBuff = (const BattleResultMessage *)LogicCharacterData::getStartingBuff(SummonCharacter);
          StartingBuffTime = LogicCharacterData::getStartingBuffTime((__int64)SummonCharacter);
          v64 = v59;
          v20 = v53;
          LogicBattle::spawnObjects(
            v64,
            (__int64)SummonCharacter,
            v102,
            (int)v53,
            v104,
            SummonNumber,
            (__int64)OwnerAccountId,
            StartingBuff,
            StartingBuffTime,
            v13,
            1);
        }
      }
      v65 = v104;
      if ( LogicSpellData::getAreaEffectObject(v16) )
      {
        AreaEffectObject = (const AreaEffectObject *)LogicSpellData::getAreaEffectObject(v16);
        v67 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
        v68 = (const #1236 *)LogicGameObject::getOwnerAccountId((LogicSpellListener **)a1);
        v69 = LogicBattle::spawnObject(v67, AreaEffectObject, v20, (LogicMath *)v104, v68, 0, 0);
        LogicAreaEffectObject::init(v69, v102, v13);
        v70 = (LogicSpellListener *)LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
        LogicGameObjectManager::addLogicGameObject(v70, v69, 1);
      }
      BuffType = (const BattleResultMessage *)LogicSpellData::getBuffType(v16);
      if ( BuffType )
      {
        BuffTime = LogicSpellData::getBuffTime(v16, v102);
        BuffNumber = LogicSpellData::getBuffNumber(v16);
        if ( BuffNumber >= 1 )
          v73 = BuffNumber;
        else
          v73 = 10000;
        OnlyOwnTroops = LogicSpellData::getOnlyOwnTroops(v16);
        v75 = v20;
        v76 = LogicSpellData::getOnlyEnemies(v16);
        v77 = LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
        v88 = v76;
        v20 = v75;
        v87 = OnlyOwnTroops;
        v65 = v104;
        LogicGameObjectManager::giveBuffToObjectsInArea(
          v77,
          v75,
          (#1237 *)v104,
          v94,
          (const GameMode *)a1,
          BuffType,
          BuffTime,
          v73,
          v87,
          v88,
          v92,
          v13);
      }
      *(_DWORD *)(a1 + 248) = -1;
      if ( LogicSummoner::hasDeck(a1) )
      {
        Deck = (AcceptChallengeMessage *)LogicSummoner::getDeck((LogicSpellListener **)a1);
        SpellCnt = LogicSpellDeck::getSpellCnt((__int64)Deck);
        if ( SpellCnt >= 1 )
        {
          v80 = 0;
          while ( 1 )
          {
            Spell = (TextField *)LogicSpellDeck::getSpell(Deck, v80);
            if ( (unsigned int)LogicSpell::equals(Spell, v13) )
              break;
            v80 = (const char *)(unsigned int)((_DWORD)v80 + 1);
            if ( (int)v80 >= SpellCnt )
              goto LABEL_46;
          }
          *(_DWORD *)(a1 + 248) = (_DWORD)v80;
        }
      }
    LABEL_46:
      if ( LogicSpellData::getEffect(v16) )
      {
        v82 = *(_QWORD *)(LogicGameObject::getLogicGameObjectManager((GameMode *)a1) + 40);
        v83 = *(void (__fastcall **)(__int64, #1237 *, __int64, _QWORD, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v82 + 72LL);
        Effect = LogicSpellData::getEffect(v16);
        v85 = LogicGameObject::getOwnerAccountId((LogicSpellListener **)a1);
        v83(v82, v20, v65, 0, Effect, 0, v85, 0);
      }
      return (*(__int64 (__fastcall **)(_QWORD, #1237 *, __int64, AllianceItem *, __int64))(**(_QWORD **)(a1 + 40) + 112LL))(
               *(_QWORD *)(a1 + 40),
               v20,
               v65,
               v16,
               GlobalID);
    }

    __int64 __fastcall LogicSummoner::getLastUsedSpell(AllianceItem *this)
    {
      AcceptChallengeMessage *Deck; // x0
    
      if ( *((_DWORD *)this + 62) == -1 || !LogicSummoner::hasDeck((__int64)this) )
        return 0;
      Deck = (AcceptChallengeMessage *)LogicSummoner::getDeck((LogicSpellListener **)this);
      return LogicSpellDeck::getSpell(Deck, (const char *)*((unsigned int *)this + 62));
    }

    void __fastcall LogicSummoner::findPositionForSpell(
            AllianceItem *this,
            const InitState *a2,
            const #1240 *a3,
            UnbindFacebookAccountMessage **a4,
            const UnlockAccountPopup *a5,
            __int64 a6)
    {
      int TilemapWidth; // w19
      int TilemapHeight; // w23
      int v12; // w3
      int v13; // w3
      int v14; // w19
      __int64 v15; // x0
      int i; // w20
      Font *SummonCharacter; // x19
      int v18; // w26
      const char *v19; // x1
      int v20; // w27
      int v21; // w10
      int v22; // w8
      int v23; // w9
      int v24; // w21
      int v25; // w22
      int v26; // w23
      int v27; // w25
      int v28; // w20
      int v29; // w8
      int v30; // w9
      ChangeAllianceMemberRoleOkMessage *LocationData; // x0
      const LogicCharacterData *TilemapData; // x19
      const LogicTilemapData *v33; // x3
      int DistanceSquared; // w28
      const #1240 *v36; // [xsp+0h] [xbp-C0h]
      int v37; // [xsp+Ch] [xbp-B4h]
      int v38; // [xsp+10h] [xbp-B0h]
      int v39; // [xsp+14h] [xbp-ACh]
      LogicVector2 *v40; // [xsp+18h] [xbp-A8h]
      int v41; // [xsp+20h] [xbp-A0h]
      int v42; // [xsp+24h] [xbp-9Ch]
      int v43; // [xsp+28h] [xbp-98h]
      unsigned int SizeInTiles; // [xsp+2Ch] [xbp-94h]
      unsigned int v45; // [xsp+30h] [xbp-90h]
      unsigned int v46; // [xsp+34h] [xbp-8Ch]
      _DWORD v48[2]; // [xsp+40h] [xbp-80h] BYREF
      int v49; // [xsp+48h] [xbp-78h] BYREF
      int v50; // [xsp+4Ch] [xbp-74h]
      char v51; // [xsp+57h] [xbp-69h] BYREF
      void *v52; // [xsp+58h] [xbp-68h] BYREF
      int v53; // [xsp+60h] [xbp-60h]
      int v54; // [xsp+64h] [xbp-5Ch]
      int v55; // [xsp+68h] [xbp-58h] BYREF
      int v56; // [xsp+6Ch] [xbp-54h]
    
      v42 = (int)a5;
      LogicVector2::LogicVector2((LogicVector2 *)&v55, *(_DWORD *)a2, *((_DWORD *)a2 + 1));
      TilemapWidth = LogicBattle::getTilemapWidth(a4[21]);
      TilemapHeight = LogicBattle::getTilemapHeight(a4[21]);
      v55 = LogicMath::clamp((#1237 *)(unsigned int)v55, 0, 500 * TilemapWidth, v12);
      v56 = LogicMath::clamp((#1237 *)(unsigned int)v56, 0, 500 * TilemapHeight, v13);
      if ( LogicSpellData::getSummonCharacter(this) )
      {
        v45 = TilemapHeight >> 1;
        v46 = TilemapWidth >> 1;
        v14 = (TilemapHeight >> 1) * (TilemapWidth >> 1);
        v52 = 0;
        v54 = 0;
        v53 = v14;
        if ( v14 < 0LL )
          v15 = -1;
        else
          v15 = v14;
        v52 = (void *)operator new[](v15);
        if ( v14 >= 1 )
        {
          for ( i = 0; i < v14; ++i )
          {
            v51 = 1;
            LogicArrayList<bool>::add((__int64)&v52, &v51);
          }
        }
        LogicSummoner::buildFreeTileMap(a4, v46, v45, &v52, a6);
        LogicVector2::LogicVector2((LogicVector2 *)&v49);
        LogicVector2::LogicVector2((LogicVector2 *)v48);
        SummonCharacter = (Font *)LogicSpellData::getSummonCharacter(this);
        if ( LogicCharacterData::isBuilding(SummonCharacter) )
        {
          if ( LogicCharacterData::getMorphCharacter(SummonCharacter) )
            SummonCharacter = (Font *)LogicCharacterData::getMorphResultCharacter((__int64)SummonCharacter);
          SizeInTiles = LogicCharacterData::getSizeInTiles((__int64)SummonCharacter);
        }
        else
        {
          SizeInTiles = 1;
        }
        v18 = LogicCharacterData::snapCoordinate(SummonCharacter, v55);
        v20 = LogicCharacterData::snapCoordinate(SummonCharacter, v56);
        v40 = SummonCharacter;
        v36 = a3;
        v21 = 0;
        v41 = 30;
        v43 = 0x7FFFFFFF;
        do
        {
          v38 = v21;
          v22 = 2 * v21;
          if ( v21 <= 0 )
            v22 = 1;
          v37 = v22;
          if ( v22 >= 1 )
          {
            v23 = 0;
            v24 = -v21;
            if ( v21 <= 0 )
              v25 = 1;
            else
              v25 = 4;
            do
            {
              v39 = v23;
              v26 = 0;
              v27 = v23 - v21;
              v28 = v21 - v23;
              do
              {
                if ( (v26 & 1) != 0 )
                  v29 = v24;
                else
                  v29 = v27;
                if ( (v26 & 1) != 0 )
                  v30 = v28;
                else
                  v30 = v24;
                if ( v26 >= 2 )
                {
                  v29 = -v29;
                  v30 = -v30;
                }
                v49 = v18 + 1000 * v29;
                v50 = v20 + 1000 * v30;
                LocationData = (ChangeAllianceMemberRoleOkMessage *)LogicBattle::getLocationData(a4[21]);
                TilemapData = (const LogicCharacterData *)LogicLocationData::getTilemapData(LocationData);
                if ( (unsigned int)LogicSummoner::positionFree(&v52, v46, v45, &v49, SizeInTiles, TilemapData) )
                {
                  DistanceSquared = LogicVector2::getDistanceSquared((#1240 *)&v49, (const #1240 *)&v55);
                  if ( v42 && (unsigned int)LogicSummoner::roadsBeneath((LogicSummoner *)&v49, v40, TilemapData, v33) )
                    DistanceSquared = 0x7FFFFFFF;
                  if ( DistanceSquared < v43 )
                  {
                    LogicVector2::set((LogicVector2 *)v48, v49, v50);
                    v41 = 0;
                    v43 = DistanceSquared;
                  }
                }
                ++v26;
              }
              while ( v26 < v25 );
              v21 = v38;
              v23 = v39 + 1;
            }
            while ( v39 + 1 < v37 );
          }
        }
        while ( v21++ < v41 );
        if ( v43 == 0x7FFFFFFF )
        {
          Debugger::warning((__siginfo *)"LogicSummoner::findPositionForSpell: Can't find position for spell", v19);
        }
        else
        {
          *(_DWORD *)v36 = v48[0];
          *((_DWORD *)v36 + 1) = v48[1];
        }
        LogicVector2::destruct((LogicVector2 *)v48);
        LogicVector2::destruct((LogicVector2 *)&v49);
        if ( v52 )
          operator delete[](v52);
      }
      else
      {
        *(_DWORD *)a3 = v55 + 500 - v55 % 1000;
        *((_DWORD *)a3 + 1) = v56 + 500 - v56 % 1000;
      }
    }

    __int64 __fastcall LogicSummoner::calculateManaCost(AllianceItem *a1, InitState *a2)
    {
      __int64 ManaCost; // x20
      TextField *LastUsedSpell; // x21
      int v6; // w19
      InitState *SpellData; // x0
      LogicMath *v8; // x19
      int v9; // w1
      int v10; // w2
    
      ManaCost = LogicSpellData::getManaCost(a2);
      if ( !(unsigned int)LogicSpellData::isMirror(a2) )
        return ManaCost;
      LastUsedSpell = (TextField *)LogicSummoner::getLastUsedSpell(a1);
      if ( !LastUsedSpell )
        return ManaCost;
      v6 = LogicSpellData::getManaCost(a2);
      SpellData = (InitState *)LogicSpell::getSpellData(LastUsedSpell);
      v8 = (LogicMath *)((unsigned int)LogicSpellData::getManaCost(SpellData) + v6);
      v9 = *(_DWORD *)(LogicDataTables::getGlobals() + 148);
      return LogicMath::min(v8, v9, v10);
    }

    __int64 __fastcall LogicSummoner::useSpellFromHand(LogicSummoner *a1, const TextField *a2)
    {
      int v4; // w22
      int v5; // w21
      TextField *Spell; // x0
      __int64 result; // x0
      const char *v8; // x1
    
      v4 = 0;
      v5 = -1;
      do
      {
        Spell = (TextField *)LogicSummoner::getSpell((__int64)a1, v4);
        if ( Spell && (unsigned int)LogicSpell::equals(Spell, a2) )
          v5 = v4;
        ++v4;
      }
      while ( v4 != 4 );
      if ( v5 != -1 )
        return LogicSummoner::useSpellFromHand(a1, v5);
      result = LogicSummoner::hasDeck((__int64)a1);
      if ( (_DWORD)result )
        return Debugger::warning((__siginfo *)"Cannot find spell from summoner hand!", v8);
      return result;
    }

    __int64 __fastcall LogicSummoner::updateCombatComponentState(AllianceJoinFailedMessage *a1)
    {
      int v2; // w20
    
      v2 = *((_DWORD *)a1 + 82);
      if ( v2 <= *(_DWORD *)(LogicDataTables::getGlobals() + 104) )
        return LogicGameObject::enableComponent((__int64)a1, 0, 0);
      else
        return LogicCharacter::updateCombatComponentState(a1);
    }

    __int64 __fastcall LogicSummoner::tick(__int64 a1, __int64 a2, int a3)
    {
      int v4; // w8
      bool v5; // vf
      int v6; // w8
      int v7; // w8
      int v8; // w0
      __int64 v9; // x8
      __int64 v10; // x20
      int v11; // w8
      int *v12; // x11
      int v13; // w10
      _DWORD *v14; // x11
      UnlockAccountPopup **LogicBattle; // x0
      int SecondsLeft; // w20
      int v17; // w21
      UnbindFacebookAccountMessage *v18; // x0
      int v19; // w8
      __int64 Globals; // x0
      int v21; // w20
      int v22; // w20
      UnbindFacebookAccountMessage *v23; // x20
      unsigned int RealOwnerIndex; // w0
      const char *v25; // x2
      int v26; // w21
      int TotalTowerCount; // w0
      int v28; // w8
      _BOOL4 v29; // w21
      LogicArenaData *v30; // x0
      _BOOL4 isNPCBattle; // w0
      __int64 v32; // x20
      void (__fastcall *v33)(__int64, __int64); // x21
      __int64 KingActivateTrainingEffect; // x0
      DonatorEntry *TutorialManager; // x0
      int RegenRateMilliseconds; // w20
      __int64 v37; // x21
      const char *v38; // x2
      int v39; // w8
      int v40; // w9
      int v41; // w20
      __int64 v42; // x0
      int v43; // w3
    
      v4 = *(_DWORD *)(a1 + 308);
      v5 = __OFSUB__(v4--, 1);
      *(_DWORD *)(a1 + 308) = v4;
      if ( (v4 < 0) ^ v5 | (v4 == 0) )
        *(_DWORD *)(a1 + 304) = 0;
      v6 = *(_DWORD *)(a1 + 312);
      if ( v6 >= 1 )
      {
        v7 = v6 - 50;
        *(_DWORD *)(a1 + 312) = v7;
        if ( v7 <= 0 )
        {
          *(_DWORD *)(a1 + 312) = 0;
          LogicSummoner::reshuffleDeck((LogicSummoner *)a1);
        }
      }
      v8 = LogicMath::max(0, *(_DWORD *)(a1 + 320) - 50, a3);
      *(_DWORD *)(a1 + 320) = v8;
      if ( !v8 )
      {
        v9 = *(int *)(a1 + 280);
        if ( (int)v9 >= 1 )
        {
          v10 = 0;
          while ( *(_DWORD *)(a1 + 256 + 4 * v10) != -1 )
          {
            if ( ++v10 >= v9 )
              goto LABEL_24;
          }
          v11 = *(_DWORD *)(a1 + 228);
          if ( !v11 )
          {
            LogicArrayList<int>::addAll(a1 + 216, a1 + 232);
            *(_DWORD *)(a1 + 244) = 0;
            v11 = *(_DWORD *)(a1 + 228);
          }
          v12 = *(int **)(a1 + 216);
          v13 = *v12;
          *(_DWORD *)(a1 + 228) = v11 - 1;
          if ( v11 >= 2 )
          {
            v14 = v12 + 1;
            do
            {
              *(v14 - 1) = *v14;
              --v11;
              ++v14;
            }
            while ( v11 > 1 );
          }
          *(_DWORD *)(a1 + 256 + 4 * v10) = v13;
          LogicBattle = (UnlockAccountPopup **)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
          SecondsLeft = LogicBattle::getSecondsLeft(LogicBattle);
          v17 = *(_DWORD *)(LogicDataTables::getGlobals() + 168);
          v18 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
          if ( (unsigned int)LogicBattle::isOnOvertime(v18) )
          {
            v19 = *(_DWORD *)(LogicDataTables::getGlobals() + 320);
          }
          else
          {
            Globals = LogicDataTables::getGlobals();
            if ( SecondsLeft <= v17 )
              v19 = *(_DWORD *)(Globals + 316);
            else
              v19 = *(_DWORD *)(Globals + 312);
          }
          *(_DWORD *)(a1 + 320) = v19;
        }
      }
    LABEL_24:
      v21 = *(_DWORD *)(a1 + 328);
      if ( v21 )
      {
        if ( v21 >= 1 && v21 <= *(_DWORD *)(LogicDataTables::getGlobals() + 104) )
        {
          v22 = *(_DWORD *)(a1 + 328) + 50;
          *(_DWORD *)(a1 + 328) = v22;
          if ( v22 > *(_DWORD *)(LogicDataTables::getGlobals() + 104) )
            LogicGameObject::enableComponent(a1, 0, 1);
        }
      }
      else
      {
        v23 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
        RealOwnerIndex = LogicGameObject::getRealOwnerIndex((GameMode *)a1);
        v26 = *(_DWORD *)(LogicBattle::getLeaderTowers(v23, RealOwnerIndex, v25) + 12);
        TotalTowerCount = LogicBattle::getTotalTowerCount(v23);
        if ( TotalTowerCount >= 0 )
          v28 = TotalTowerCount;
        else
          v28 = TotalTowerCount + 1;
        v29 = v26 < v28 >> 1;
        v30 = (LogicArenaData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
        if ( !LogicHitpointComponent::hasFullHealth(v30) || v29 )
        {
          *(_DWORD *)(a1 + 328) = 50;
          isNPCBattle = LogicBattle::isNPCBattle(v23);
          v32 = *(_QWORD *)(a1 + 40);
          v33 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 56LL);
          if ( isNPCBattle )
            KingActivateTrainingEffect = LogicDataTables::getKingActivateTrainingEffect();
          else
            KingActivateTrainingEffect = LogicDataTables::getKingActivateEffect();
          v33(v32, KingActivateTrainingEffect);
        }
      }
      TutorialManager = (DonatorEntry *)LogicGameMode::getTutorialManager(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL));
      if ( (LogicTutorialManager::isHideCombatUI(TutorialManager) & 1) == 0 )
      {
        RegenRateMilliseconds = LogicSummoner::getRegenRateMilliseconds((AllianceItem *)a1);
        v37 = LogicDataTables::getGlobals();
        Debugger::doAssert((Debugger *)(RegenRateMilliseconds > 0), (bool)"", v38);
        v39 = 100 * RegenRateMilliseconds / *(_DWORD *)(v37 + 148);
        v40 = *(_DWORD *)(a1 + 276) + 5000;
        *(_DWORD *)(a1 + 276) = v40;
        v41 = v40 / v39;
        if ( v40 / v39 >= 1 )
        {
          *(_DWORD *)(a1 + 276) = v40 % v39;
          v42 = LogicDataTables::getGlobals();
          *(_DWORD *)(a1 + 272) = LogicMath::clamp(
                                    (#1237 *)(unsigned int)(*(_DWORD *)(a1 + 272) + v41),
                                    0,
                                    *(_DWORD *)(v42 + 148),
                                    v43);
        }
      }
      if ( LogicGameObject::isOwnedByAI((LogicSpellListener **)a1)
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1) )
      {
        LogicSummoner::updateAI((AllianceItem *)a1);
      }
      return LogicCharacter::tick((AllianceJoinFailedMessage *)a1);
    }

    __int64 __fastcall LogicSummoner::reshuffleDeck(__int64 a1)
    {
      __int64 *v2; // x20
      __int64 result; // x0
      __int64 v4; // x21
      LogicGameMode **LogicBattle; // x0
      int v6; // w0
    
      v2 = (__int64 *)(a1 + 216);
      result = LogicArrayList<int>::addAll(a1 + 216, a1 + 232);
      v4 = 0;
      *(_DWORD *)(a1 + 244) = 0;
      do
      {
        if ( !*(_DWORD *)(a1 + 228) )
          break;
        LogicBattle = (LogicGameMode **)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
        v6 = LogicBattle::rand(LogicBattle, *(_DWORD *)(a1 + 228));
        result = LogicArrayList<int>::remove(v2, v6);
        *(_DWORD *)(a1 + 256 + 4 * v4++) = result;
      }
      while ( v4 < 4 );
      return result;
    }

    __int64 __fastcall LogicSummoner::getRegenRateMilliseconds(LogicSpellListener **this)
    {
      unsigned int *Globals; // x19
      UnbindFacebookAccountMessage *LogicBattle; // x0
      Character::AnimFrameIndices *NpcData; // x20
      UnlockAccountPopup **v5; // x0
      signed int SecondsLeft; // w21
      signed int v7; // w24
      UnbindFacebookAccountMessage *v8; // x0
      int v9; // w22
      _BOOL4 isOwnedByAI; // w0
    
      Globals = (unsigned int *)LogicDataTables::getGlobals();
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(this);
      NpcData = (Character::AnimFrameIndices *)LogicBattle::getNpcData(LogicBattle);
      v5 = (UnlockAccountPopup **)LogicGameObject::getLogicBattle(this);
      SecondsLeft = LogicBattle::getSecondsLeft(v5);
      v7 = Globals[42];
      v8 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(this);
      v9 = LogicBattle::isOnOvertime(v8);
      isOwnedByAI = LogicGameObject::isOwnedByAI(this);
      if ( NpcData && isOwnedByAI )
      {
        if ( v9 )
        {
          return LogicNpcData::getManaRegenMillisecondsOvertime(NpcData);
        }
        else if ( SecondsLeft > v7 )
        {
          return LogicNpcData::getManaRegenMilliseconds(NpcData);
        }
        else
        {
          return LogicNpcData::getManaRegenMillisecondsEnd(NpcData);
        }
      }
      else if ( v9 )
      {
        return Globals[41];
      }
      else if ( SecondsLeft > v7 )
      {
        return Globals[39];
      }
      else
      {
        return Globals[40];
      }
    }

    __int64 __fastcall LogicSummoner::increaseMana(AllianceItem *this, int a2)
    {
      __int64 Globals; // x0
      int v5; // w3
      __int64 result; // x0
    
      Globals = LogicDataTables::getGlobals();
      result = LogicMath::clamp((#1237 *)(unsigned int)(*((_DWORD *)this + 68) + a2), 0, *(_DWORD *)(Globals + 148), v5);
      *((_DWORD *)this + 68) = result;
      return result;
    }

    __int64 __fastcall LogicSummoner::updateAI(__int64 this)
    {
      __int64 v1; // x19
      __int64 LogicGameObjectManager; // x0
      int Tick; // w20
      int OwnerIndex; // w0
      int v5; // w23
      int v6; // w24
      int v7; // w25
      __int64 *v8; // x26
      __int64 v9; // x21
      LogicHeatMap *v10; // x21
      UnbindFacebookAccountMessage *LogicBattle; // x0
      int TilemapWidth; // w22
      UnbindFacebookAccountMessage *v13; // x0
      int TilemapHeight; // w0
      LogicHeatMap *v15; // x20
      __int64 v16; // x0
      int ManaReserve; // w22
      int v18; // w20
      _BOOL8 v19; // x21
      int FrontGroupIdx; // w0
      int v21; // w2
      __int64 v22; // x0
      int v23; // w1
      LogicGameMode **v24; // x0
      LogicGameMode **v25; // x0
      int v26; // w25
      int v27; // w8
      int v28; // w28
      __int64 v29; // x20
      int v30; // w23
      const LogicSpell *v31; // x27
      InitState *SpellData; // x24
      Font *SummonCharacter; // x0
      _BOOL4 isBuilding; // w26
      Font *v35; // x0
      int OnlyOwnTroops; // w8
      __int64 v37; // x0
      __int64 v38; // x27
      __int64 Position; // x0
      _BOOL4 shouldDefend; // w0
      __int64 v41; // x27
      __int64 v42; // x0
      LogicGameMode **v43; // x0
      int v44; // w8
      int v45; // w27
      LogicGameMode **v46; // x0
      __int64 v47; // x27
      Font *MorphResultCharacter; // x21
      int MinimumRange; // w22
      int Range; // w0
      int v51; // w3
      int v52; // w0
      int v53; // w8
      __int64 v54; // x0
      __int64 v55; // x20
      void (__fastcall *v56)(__int64, __int64, _BOOL8); // x22
      AcceptChallengeMessage *Deck; // x0
      __int64 Spell; // x21
      _BOOL8 v59; // x0
      unsigned int *v60; // x0
      int v61; // [xsp+Ch] [xbp-64h]
      _DWORD v62[2]; // [xsp+10h] [xbp-60h] BYREF
      int v63; // [xsp+18h] [xbp-58h] BYREF
      int v64; // [xsp+1Ch] [xbp-54h]
    
      v1 = this;
      if ( !*(_BYTE *)(this + 324) )
        return this;
      LogicGameObjectManager = LogicGameObject::getLogicGameObjectManager((GameMode *)this);
      Tick = LogicGameMode::getTick(*(UnlockAccountPopup **)(LogicGameObjectManager + 56));
      OwnerIndex = LogicGameObject::getOwnerIndex((GameMode *)v1);
      v5 = OwnerIndex;
      v6 = OwnerIndex + 1;
      if ( OwnerIndex + 1 >= 0 )
        v7 = OwnerIndex + 1;
      else
        v7 = OwnerIndex + 2;
      if ( Tick >= 88 && !*(_BYTE *)(v1 + 325) )
      {
        LogicSummoner::onEventAI((LogicSummoner *)v1, 0);
        *(_BYTE *)(v1 + 325) = 1;
      }
      if ( *(_QWORD *)(v1 + 296) )
      {
        v8 = (__int64 *)(v1 + 288);
        v9 = *(_QWORD *)(v1 + 288);
      }
      else
      {
        v10 = (LogicHeatMap *)operator new(40);
        LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)v1);
        TilemapWidth = LogicBattle::getTilemapWidth(LogicBattle);
        v13 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)v1);
        TilemapHeight = LogicBattle::getTilemapHeight(v13);
        LogicHeatMap::LogicHeatMap(v10, TilemapWidth, TilemapHeight);
        *(_QWORD *)(v1 + 296) = v10;
        v9 = operator new(32);
        LogicSpellAIBlackboard::LogicSpellAIBlackboard(v9, v1);
        v8 = (__int64 *)(v1 + 288);
        *(_QWORD *)(v1 + 288) = v9;
      }
      this = LogicSpellAIBlackboard::tick(v9);
      if ( Tick % 60 )
        return this;
      v15 = *(LogicHeatMap **)(v1 + 296);
      v16 = LogicGameObject::getLogicGameObjectManager((GameMode *)v1);
      LogicHeatMap::build(v15, *(const LogicGameMode **)(v16 + 56));
      ManaReserve = LogicSummoner::getManaReserve(v1);
      v18 = LogicGameObject::getOwnerIndex((GameMode *)v1);
      v19 = v18 != 0;
      FrontGroupIdx = LogicHeatMap::getFrontGroupIdx(*(_QWORD *)(v1 + 296), v19, 5);
      if ( (FrontGroupIdx & 0x80000000) == 0 )
      {
        if ( *(int *)(*(_QWORD *)(***(_QWORD ***)(v1 + 296) + 8LL * FrontGroupIdx) + 4LL * (int)(v6 - (v7 & 0xFFFFFFFE))) >= 16 )
        {
          v22 = *v8;
          v23 = 3;
    LABEL_17:
          LogicSpellAIBlackboard::setState(v22, v23, 1500);
          goto LABEL_18;
        }
        v24 = (LogicGameMode **)LogicGameObject::getLogicBattle((LogicSpellListener **)v1);
        if ( (int)LogicBattle::rand(v24, 100) >= 51 )
        {
          v22 = *v8;
          v23 = 1;
          goto LABEL_17;
        }
      }
    LABEL_18:
      if ( (*(_DWORD *)(*v8 + 24) | 2) != 3
        && (LogicHeatMap::getFrontGroupIdx(*(_QWORD *)(v1 + 296), v18 == 0, 5) & 0x80000000) == 0 )
      {
        LogicSpellAIBlackboard::setState(*v8, 2, 5000);
      }
      v61 = v18;
      if ( (*(_DWORD *)(*v8 + 24) & 0xFFFFFFFE) == 2 )
      {
        Debugger::hudPrint((__siginfo *)"USE all reserve mana!", (const char *)0xFFFFFFFFLL, v21);
        ManaReserve = 0;
      }
      v25 = (LogicGameMode **)LogicGameObject::getLogicBattle((LogicSpellListener **)v1);
      this = LogicBattle::rand(v25, *(_DWORD *)(v1 + 280));
      v26 = this;
      v27 = *(_DWORD *)(v1 + 280);
      if ( v27 >= 1 )
      {
        v28 = 0;
        v29 = v5;
        do
        {
          v30 = (v26 + v28) % v27;
          this = LogicSummoner::getSpell(v1, v30);
          v31 = (const LogicSpell *)this;
          if ( !this )
            goto LABEL_57;
          SpellData = (InitState *)LogicSpell::getSpellData((TextField *)this);
          this = LogicSummoner::calculateManaCost((AllianceItem *)v1, SpellData);
          if ( (int)this > *(_DWORD *)(v1 + 272) - ManaReserve )
            goto LABEL_57;
          if ( LogicSpellData::getProjectile(SpellData)
            && (LogicHeatMap::getFrontGroupIdx(*(_QWORD *)(v1 + 296), v19, 2) & 0x80000000) != 0 )
          {
            LogicHeatMap::getBiggestGroupIdx(*(SettingsPopup **)(v1 + 296), v19, 2);
          }
          if ( LogicSpellData::getSummonCharacter(SpellData) )
          {
            SummonCharacter = (Font *)LogicSpellData::getSummonCharacter(SpellData);
            isBuilding = LogicCharacterData::isBuilding(SummonCharacter);
            v35 = (Font *)LogicSpellData::getSummonCharacter(SpellData);
            if ( LogicCharacterData::isBuilding(v35) )
            {
              this = LogicSummoner::tryToDeployBuilding((LogicSummoner *)v1, v31, v30);
              if ( (this & 1) != 0 )
                return this;
              goto LABEL_57;
            }
            LogicSpellData::getSummonCharacter(SpellData);
            if ( (unsigned int)LogicCharacterData::isBuilder() )
            {
              v38 = *(_QWORD *)(v1 + 296);
              Position = LogicGameObject::getPosition((GameMode *)v1);
              LODWORD(this) = LogicHeatMap::getHeatIdx(v38, Position);
            }
            else
            {
              shouldDefend = LogicSpellAIBlackboard::shouldDefend(*(tween::Quint **)(v1 + 288));
              v41 = *(_QWORD *)(v1 + 296);
              if ( shouldDefend )
              {
                v42 = LogicGameObject::getPosition((GameMode *)v1);
                LODWORD(this) = LogicHeatMap::getHeatIdx(v41, v42);
              }
              else
              {
                LODWORD(this) = LogicHeatMap::getFrontGroupIdx(*(_QWORD *)(v1 + 296), v61 == 0, 2);
                if ( (this & 0x80000000) == 0 )
                  goto LABEL_55;
                LODWORD(this) = LogicHeatMap::getBiggestGroupIdx(*(SettingsPopup **)(v1 + 296), v61 == 0, 3);
              }
            }
            if ( (this & 0x80000000) != 0 )
            {
              v43 = (LogicGameMode **)LogicGameObject::getLogicBattle((LogicSpellListener **)v1);
              this = LogicBattle::rand(v43, 100);
              if ( (int)this < 51 )
                goto LABEL_57;
              v44 = *(_DWORD *)(**(_QWORD **)(v1 + 296) + 12LL);
              if ( v44 >= 0 )
                v45 = *(_DWORD *)(**(_QWORD **)(v1 + 296) + 12LL);
              else
                v45 = v44 + 1;
              v46 = (LogicGameMode **)LogicGameObject::getLogicBattle((LogicSpellListener **)v1);
              this = (unsigned int)LogicBattle::rand(v46, 4) + (v45 >> 1) - 2;
              goto LABEL_54;
            }
          }
          else
          {
            OnlyOwnTroops = LogicSpellData::getOnlyOwnTroops(SpellData);
            v37 = *(_QWORD *)(v1 + 296);
            if ( OnlyOwnTroops )
            {
              LODWORD(this) = LogicHeatMap::getFrontGroupIdx(v37, v61 == 0, 4);
              if ( (this & 0x80000000) != 0 )
              {
                this = LogicHeatMap::getBiggestGroupIdx(*(SettingsPopup **)(v1 + 296), v61 == 0, 4);
                isBuilding = 0;
                goto LABEL_54;
              }
              isBuilding = 0;
            }
            else
            {
              LODWORD(this) = LogicHeatMap::getFrontGroupIdx(v37, v19, 4);
              if ( (this & 0x80000000) != 0 )
              {
                this = LogicHeatMap::getBiggestGroupIdx(*(SettingsPopup **)(v1 + 296), v19, 4);
                isBuilding = 0;
    LABEL_54:
                if ( (this & 0x80000000) != 0 )
                  goto LABEL_57;
                goto LABEL_55;
              }
              isBuilding = 0;
            }
          }
    LABEL_55:
          v47 = *(_QWORD *)(***(_QWORD ***)(v1 + 296) + 8LL * (int)this);
          this = LogicSpellData::isHealSpell(SpellData);
          if ( !(_DWORD)this || *(int *)(v47 + 4 * v29 + 16) >= 2 )
          {
            LogicVector2::LogicVector2((LogicVector2 *)&v63);
            v63 = *(_DWORD *)(v47 + 32);
            v64 = *(_DWORD *)(v47 + 36);
            if ( LogicSpellData::getSummonCharacter(SpellData) )
            {
              MorphResultCharacter = (Font *)LogicSpellData::getSummonCharacter(SpellData);
              if ( LogicCharacterData::getMorphCharacter(MorphResultCharacter) )
                MorphResultCharacter = (Font *)LogicCharacterData::getMorphResultCharacter((__int64)MorphResultCharacter);
              MinimumRange = LogicCharacterData::getMinimumRange(MorphResultCharacter);
              Range = LogicCharacterData::getRange(MorphResultCharacter);
              v52 = LogicMath::clamp((#1237 *)0x7D0, MinimumRange, Range, v51);
              if ( v61 )
                v53 = v52;
              else
                v53 = -v52;
              v64 += v53;
              if ( isBuilding )
              {
                LogicVector2::LogicVector2((LogicVector2 *)v62, 0, 0);
                v54 = LogicGameObject::getLogicGameObjectManager((GameMode *)v1);
                LogicSummoner::findPositionForSpell(
                  SpellData,
                  (const InitState *)&v63,
                  (const #1240 *)v62,
                  *(UnbindFacebookAccountMessage ***)(v54 + 56),
                  (const UnlockAccountPopup *)1,
                  v61 == 0);
                v63 = v62[0];
                v64 = v62[1];
                LogicVector2::destruct((LogicVector2 *)v62);
              }
            }
            v55 = *(_QWORD *)(v1 + 40);
            v56 = *(void (__fastcall **)(__int64, __int64, _BOOL8))(*(_QWORD *)v55 + 104LL);
            Deck = (AcceptChallengeMessage *)LogicSummoner::getDeck((LogicSpellListener **)v1);
            Spell = LogicSpellDeck::getSpell(Deck, (const char *)*(unsigned int *)(v1 + 4LL * v30 + 256));
            v59 = LogicSpellAIBlackboard::shouldDefend(*(tween::Quint **)(v1 + 288));
            v56(v55, Spell, v59);
            LODWORD(v55) = v63;
            LODWORD(Spell) = v64;
            v60 = (unsigned int *)LogicSummoner::getSpell(v1, v30);
            LogicSummoner::useSpell(v1, v60, v55, Spell, 0, 0);
            return LogicVector2::destruct((LogicVector2 *)&v63);
          }
    LABEL_57:
          ++v28;
          v27 = *(_DWORD *)(v1 + 280);
        }
        while ( v28 < v27 );
      }
      return this;
    }

    __int64 __fastcall LogicSummoner::getMana(AllianceItem *this)
    {
      return *((unsigned int *)this + 68);
    }

    __int64 __fastcall LogicSummoner::getSimulatedMana(AllianceItem *this, __int64 a2, const char *a3)
    {
      #1237 *v4; // x19
      int v5; // w2
      int v6; // w3
    
      Debugger::doAssert((Debugger *)1, (bool)"", a3);
      v4 = (#1237 *)(unsigned int)(*((_DWORD *)this + 68) - *((_DWORD *)this + 76));
      v5 = *(_DWORD *)(LogicDataTables::getGlobals() + 148);
      return LogicMath::clamp(v4, 0, v5, v6);
    }

    __int64 __fastcall LogicSummoner::convertToAccurateMana(LogicSpellListener **this, int a2)
    {
      int v3; // w22
      __int64 Globals; // x19
      int RegenRateMilliseconds; // w0
      int v6; // w23
      const char *v7; // x2
      const char *v8; // x2
      int v9; // w8
      int v10; // w23
      int v11; // w8
      int v12; // w20
      int v13; // w9
      int v14; // w9
      int v15; // w8
    
      v3 = 100 * a2;
      Globals = LogicDataTables::getGlobals();
      RegenRateMilliseconds = LogicSummoner::getRegenRateMilliseconds(this);
      v6 = 100 * RegenRateMilliseconds;
      Debugger::doAssert((Debugger *)(RegenRateMilliseconds > 0), (bool)"", v7);
      v9 = *(_DWORD *)(Globals + 148);
      v10 = v6 / v9;
      if ( v10 )
      {
        v11 = *((_DWORD *)this + 69);
        v12 = 100 * v11;
        Debugger::doAssert((Debugger *)(v11 >= 0), (bool)"", v8);
        v9 = *(_DWORD *)(Globals + 148);
        v13 = v12 / v10;
      }
      else
      {
        v13 = 0;
      }
      v14 = v13 + v3;
      v15 = 100 * v9;
      if ( v14 <= v15 )
        return (unsigned int)v14;
      else
        return (unsigned int)v15;
    }

    __int64 __fastcall LogicSummoner::getSimulatedAccurateMana(AllianceItem *a1, __int64 a2, const char *a3)
    {
      int SimulatedMana; // w1
    
      SimulatedMana = LogicSummoner::getSimulatedMana(a1, a2, a3);
      return LogicSummoner::convertToAccurateMana((LogicSpellListener **)a1, SimulatedMana);
    }

    __int64 __fastcall LogicSummoner::shouldDestruct(AllianceItem *this)
    {
      return 0;
    }

    Character::AnimFrameIndices *__fastcall LogicSummoner::onEventAI(LogicSpellListener **a1, unsigned int a2)
    {
      UnbindFacebookAccountMessage *LogicBattle; // x0
      Character::AnimFrameIndices *result; // x0
      const char *v6; // x2
      int v7; // w1
      int InstanceID; // w21
      LogicBattleEvent *v9; // x20
      const #1236 *OwnerAccountId; // x0
      __int64 LogicGameObjectManager; // x0
      const char *Tick; // x0
      UnlockAccountPopup **v13; // x0
      __int64 GameListener; // x0
    
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(a1);
      result = (Character::AnimFrameIndices *)LogicBattle::getNpcData(LogicBattle);
      if ( result )
      {
        result = (Character::AnimFrameIndices *)LogicNpcData::getEventTauntData(result, a2, v6);
        if ( result )
        {
          InstanceID = LogicData::getInstanceID(result, v7);
          v9 = (LogicBattleEvent *)operator new(48);
          OwnerAccountId = (const #1236 *)LogicGameObject::getOwnerAccountId(a1);
          LogicBattleEvent::LogicBattleEvent(v9, OwnerAccountId);
          LogicBattleEvent::setType((__int64)v9, 3);
          LogicBattleEvent::setParam(v9, 0, InstanceID);
          LogicGameObjectManager = LogicGameObject::getLogicGameObjectManager((GameMode *)a1);
          Tick = (const char *)LogicGameMode::getTick(*(UnlockAccountPopup **)(LogicGameObjectManager + 56));
          LogicBattleEvent::setTick(v9, Tick);
          v13 = (UnlockAccountPopup **)LogicGameObject::getLogicBattle(a1);
          GameListener = LogicBattle::getGameListener(v13);
          (*(void (__fastcall **)(__int64, LogicBattleEvent *))(*(_QWORD *)GameListener + 280LL))(GameListener, v9);
          (*(void (__fastcall **)(LogicBattleEvent *))(*(_QWORD *)v9 + 16LL))(v9);
          return (Character::AnimFrameIndices *)(*(__int64 (__fastcall **)(LogicBattleEvent *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
      return result;
    }

    __int64 __fastcall LogicSummoner::getManaReserve(__int64 a1)
    {
      LogicArenaData *v2; // x20
      signed int v3; // w21
      UnlockAccountPopup **LogicBattle; // x0
      UnbindFacebookAccountMessage *v6; // x0
      Character::AnimFrameIndices *NpcData; // x20
      UnlockAccountPopup **v8; // x0
    
      v2 = (LogicArenaData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
      v3 = 4 * LogicHitpointComponent::getHitpoints(v2);
      if ( v3 < (int)(3 * LogicHitpointComponent::getMaxHitpoints(v2)) )
        return 0;
      LogicBattle = (UnlockAccountPopup **)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
      if ( (int)LogicBattle::getSecondsGone(LogicBattle) <= 14 )
        return *(unsigned int *)(a1 + 272);
      v6 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
      NpcData = (Character::AnimFrameIndices *)LogicBattle::getNpcData(v6);
      if ( NpcData )
      {
        v8 = (UnlockAccountPopup **)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
        if ( (int)LogicBattle::getSecondsLeft(v8) >= 61 )
          return LogicNpcData::getManaReserve(NpcData);
        return 0;
      }
      return (unsigned int)(*(_DWORD *)(LogicDataTables::getGlobals() + 148) / 2);
    }

    __int64 __fastcall LogicSummoner::tryToDeployBuilding(__int64 a1, TextField *a2, int a3)
    {
      _BOOL8 hasDeck; // x0
      const char *v7; // x2
      int OwnerIndex; // w22
      InitState *SpellData; // x0
      Font *SummonCharacter; // x0
      _BOOL4 isTrap; // w23
      AreaEffectObject *v12; // x0
      int v13; // w2
      UnbindFacebookAccountMessage *v14; // x0
      #1224 **v15; // x21
      int v16; // w0
      int v17; // w23
      int v18; // w24
      int v19; // w26
      int MapWidth; // w8
      __int64 result; // x0
      int v22; // w25
      __int64 v23; // x22
      __int64 v24; // x23
      int v25; // w2
      signed int v26; // w24
      UnbindFacebookAccountMessage *LogicBattle; // x0
      const char *v28; // x2
      GameMode *LeaderByIndex; // x23
      int v31; // w0
      __int64 v32; // x0
      __int64 v33; // x0
      int FrontGroupIdx; // w0
      int v35; // w2
      __int64 v36; // x21
      int DistanceSquaredTo; // w22
      char *v38; // x0
      UnbindFacebookAccountMessage *v39; // x0
      #1224 **TilemapData; // x23
      LogicGameMode **v41; // x0
      int v42; // w24
      int MapHeight; // w0
      int v44; // w27
      int v45; // w28
      const char *v46; // x1
      __int64 v47; // x22
      int v48; // w25
      int v49; // w26
      __int64 v50; // x24
      __int64 v51; // x0
      __int64 v52; // x21
      void (__fastcall *v53)(__int64, __int64, _QWORD); // x22
      AcceptChallengeMessage *Deck; // x0
      __int64 Spell; // x0
      unsigned int *v56; // x0
      _DWORD v57[2]; // [xsp+8h] [xbp-C8h] BYREF
      _DWORD v58[2]; // [xsp+10h] [xbp-C0h] BYREF
      String v59; // [xsp+18h] [xbp-B8h] BYREF
      __siginfo v60; // [xsp+30h] [xbp-A0h] BYREF
    
      hasDeck = LogicSummoner::hasDeck(a1);
      Debugger::doAssert((Debugger *)hasDeck, (bool)"tryToDeployBuilding needs deck", v7);
      LogicVector2::LogicVector2((LogicVector2 *)&v60.__pad[3]);
      OwnerIndex = LogicGameObject::getOwnerIndex((GameMode *)a1);
      SpellData = (InitState *)LogicSpell::getSpellData(a2);
      SummonCharacter = (Font *)LogicSpellData::getSummonCharacter(SpellData);
      isTrap = LogicCharacterData::isTrap(SummonCharacter);
      v12 = (AreaEffectObject *)LogicSpell::getSpellData(a2);
      if ( !isTrap )
      {
        LogicData::getDebuggerName(v12);
        operator+(&v60, "tryToDeployBuilding: ", &v59);
        Debugger::hudPrint(&v60, (const String *)0xFFFFFFFFLL, v25);
        String::~String();
        String::~String();
        if ( LogicSpellAIBlackboard::shouldAttack(*(tween::Quint **)(a1 + 288)) )
        {
          v26 = 0;
          do
          {
            LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
            LeaderByIndex = (GameMode *)LogicBattle::getLeaderByIndex(LogicBattle, v26++, v28);
          }
          while ( LeaderByIndex == (GameMode *)a1 && v26 < 2 );
          LogicVector2::LogicVector2((LogicVector2 *)v58);
          LogicVector2::LogicVector2((LogicVector2 *)v57);
          v57[0] = LogicGameObject::getX(LeaderByIndex);
          v57[1] = LogicGameObject::getY(LeaderByIndex);
          if ( (*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)LeaderByIndex + 200LL))(LeaderByIndex) )
          {
            v58[0] = *(_DWORD *)LogicGameObject::getPosition(LeaderByIndex);
            v31 = *(_DWORD *)(LogicGameObject::getPosition(LeaderByIndex) + 4);
          }
          else
          {
            v58[0] = LogicGameObject::getX(LeaderByIndex);
            v31 = LogicGameObject::getY(LeaderByIndex);
          }
          v58[1] = v31;
          v33 = LogicSpell::getSpellData(a2);
          if ( (unsigned int)LogicSummoner::findBuildingPosition(a1, v33, v58, &v60.__pad[3]) )
          {
            FrontGroupIdx = LogicHeatMap::getFrontGroupIdx(*(_QWORD *)(a1 + 296), OwnerIndex == 0, 5);
            if ( FrontGroupIdx < 0 )
            {
              v38 = "skipped, not enough big group on front";
            }
            else
            {
              v36 = *(_QWORD *)(***(_QWORD ***)(a1 + 296) + 8LL * FrontGroupIdx) + 32LL;
              DistanceSquaredTo = LogicVector2::getDistanceSquaredTo(&v60.__pad[3], v57[0]);
              if ( (int)LogicVector2::getDistanceSquaredTo(v36, v57[0]) < DistanceSquaredTo )
                goto LABEL_47;
              v38 = "skipped Not Safe";
            }
            Debugger::hudPrint((__siginfo *)v38, (const char *)0xFFFFFFFFLL, v35);
          }
        }
        else if ( (int)LogicHeatMap::getDefenceCnt(*(SettingsPopup **)(a1 + 296), OwnerIndex == 0) > 1 )
        {
          v39 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
          TilemapData = (#1224 **)LogicBattle::getTilemapData(v39);
          v41 = (LogicGameMode **)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
          v42 = LogicBattle::rand(v41, 2);
          LODWORD(v60.__pad[3]) = 0;
          MapHeight = LogicTilemapData::getMapHeight(TilemapData);
          if ( MapHeight >= 0 )
            v44 = MapHeight;
          else
            v44 = MapHeight + 1;
          if ( OwnerIndex )
            v45 = 2;
          else
            v45 = -2;
          if ( (int)LogicTilemapData::getMapWidth(TilemapData) < 1 )
            goto LABEL_48;
          v47 = 0;
          v48 = 0;
          v49 = v42 + 1;
          v50 = (unsigned int)(v45 + (v44 >> 1));
          do
          {
            if ( (unsigned int)LogicTilemapData::getTileCost((BillingManager *)TilemapData, v47, v50) == v49 )
            {
              LODWORD(v60.__pad[3]) += v47;
              HIDWORD(v60.__pad[3]) = 500 * v50;
              ++v48;
            }
            v47 = (unsigned int)(v47 + 1);
          }
          while ( (int)v47 < (int)LogicTilemapData::getMapWidth(TilemapData) );
          if ( v48 )
          {
            LODWORD(v60.__pad[3]) = 500 * LODWORD(v60.__pad[3]) / v48;
            v51 = LogicSpell::getSpellData(a2);
            if ( (unsigned int)LogicSummoner::findBuildingPosition(a1, v51, &v60.__pad[3], &v60.__pad[3]) )
              goto LABEL_47;
          }
          else
          {
    LABEL_48:
            Debugger::warning((__siginfo *)"spell ai cant find lanes from tilemap.", v46);
          }
        }
        else
        {
          v60.__pad[3] = *(_QWORD *)LogicGameObject::getPosition((GameMode *)a1);
          v32 = LogicSpell::getSpellData(a2);
          if ( (LogicSummoner::findBuildingPosition(a1, v32, &v60.__pad[3], &v60.__pad[3]) & 1) != 0 )
            goto LABEL_47;
        }
        return 0;
      }
      LogicData::getDebuggerName(v12);
      operator+(v60.__pad, "try trap: ", &v60.si_addr);
      Debugger::hudPrint((__siginfo *)v60.__pad, (const String *)0xFFFFFFFFLL, v13);
      String::~String();
      String::~String();
      v14 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)a1);
      v15 = (#1224 **)LogicBattle::getTilemapData(v14);
      LODWORD(v60.__pad[3]) = 0;
      v16 = LogicTilemapData::getMapHeight(v15);
      if ( v16 >= 0 )
        v17 = v16;
      else
        v17 = v16 + 1;
      if ( OwnerIndex )
        v18 = 1;
      else
        v18 = 2;
      if ( OwnerIndex )
        v19 = 2;
      else
        v19 = -2;
      MapWidth = LogicTilemapData::getMapWidth(v15);
      result = 0;
      if ( MapWidth >= 1 )
      {
        v22 = 0;
        v23 = 0;
        v24 = (unsigned int)(v19 + (v17 >> 1));
        do
        {
          if ( (unsigned int)LogicTilemapData::getTileCost((BillingManager *)v15, v23, v24) == v18 )
          {
            LODWORD(v60.__pad[3]) += v23;
            HIDWORD(v60.__pad[3]) = 500 * v24;
            ++v22;
          }
          v23 = (unsigned int)(v23 + 1);
        }
        while ( (int)v23 < (int)LogicTilemapData::getMapWidth(v15) );
        if ( v22 )
        {
          LODWORD(v60.__pad[3]) = 500 * LODWORD(v60.__pad[3]) / v22;
    LABEL_47:
          v52 = *(_QWORD *)(a1 + 40);
          v53 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v52 + 104LL);
          Deck = (AcceptChallengeMessage *)LogicSummoner::getDeck((LogicSpellListener **)a1);
          Spell = LogicSpellDeck::getSpell(Deck, (const char *)*(unsigned int *)(a1 + 4LL * a3 + 256));
          v53(v52, Spell, 0);
          LODWORD(v52) = v60.__pad[3];
          LODWORD(v53) = HIDWORD(v60.__pad[3]);
          v56 = (unsigned int *)LogicSummoner::getSpell(a1, a3);
          LogicSummoner::useSpell(a1, v56, v52, (int)v53, 0, 0);
          return 1;
        }
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicSummoner::findBuildingPosition(LogicSpellListener **a1, InitState *a2, __int64 a3, _DWORD *a4)
    {
      Font *SummonCharacter; // x24
      int SizeInTiles; // w25
      UnbindFacebookAccountMessage *LogicBattle; // x0
      UnbindFacebookAccountMessage *v10; // x0
      int v11; // w19
      __int64 v12; // x0
      int i; // w20
      int OwnerIndex; // w26
      __int64 LogicGameObjectManager; // x0
      unsigned __int64 Range; // x27
      LogicMath *MinimumRange; // x0
      int v18; // w2
      int v19; // w8
      __int64 v20; // x28
      int v21; // w19
      int v22; // w22
      int v23; // w23
      int j; // w25
      UnbindFacebookAccountMessage *v25; // x0
      __int64 TilemapData; // x0
      UnbindFacebookAccountMessage *v27; // x0
      const LogicCharacterData *v28; // x0
      const LogicTilemapData *v29; // x3
      __int64 v30; // x8
      __int64 v31; // x9
      int v32; // w11
      bool v33; // cc
      _BOOL4 v34; // w11
      int v35; // w12
      LogicGameMode **v36; // x0
      int v37; // w9
      __int64 v38; // x0
      __int64 v39; // x19
      _DWORD *v41; // [xsp+8h] [xbp-B8h]
      int v42; // [xsp+1Ch] [xbp-A4h]
      unsigned int v43; // [xsp+2Ch] [xbp-94h]
      unsigned int v44; // [xsp+30h] [xbp-90h]
      unsigned int v45; // [xsp+34h] [xbp-8Ch]
      GameMode *v46; // [xsp+38h] [xbp-88h]
      __int64 v47; // [xsp+40h] [xbp-80h] BYREF
      __int64 v48; // [xsp+48h] [xbp-78h]
      int v49; // [xsp+50h] [xbp-70h] BYREF
      int v50; // [xsp+54h] [xbp-6Ch] BYREF
      char v51; // [xsp+5Fh] [xbp-61h] BYREF
      __int64 v52; // [xsp+60h] [xbp-60h] BYREF
      int v53; // [xsp+68h] [xbp-58h]
      int v54; // [xsp+6Ch] [xbp-54h]
    
      SummonCharacter = (Font *)LogicSpellData::getSummonCharacter(a2);
      if ( LogicCharacterData::getMorphCharacter(SummonCharacter) )
        SummonCharacter = (Font *)LogicCharacterData::getMorphResultCharacter((__int64)SummonCharacter);
      SizeInTiles = LogicCharacterData::getSizeInTiles((__int64)SummonCharacter);
      v46 = (GameMode *)a1;
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(a1);
      v45 = (int)LogicBattle::getTilemapWidth(LogicBattle) >> 1;
      v10 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(a1);
      v44 = (int)LogicBattle::getTilemapHeight(v10) >> 1;
      v11 = v44 * v45;
      v52 = 0;
      v54 = 0;
      v53 = v44 * v45;
      if ( ((v44 * v45) & 0x80000000) != 0 )
        v12 = -1;
      else
        v12 = v11;
      v52 = operator new[](v12);
      if ( v11 >= 1 )
      {
        for ( i = 0; i < v11; ++i )
        {
          v51 = 1;
          LogicArrayList<bool>::add((__int64)&v52, &v51);
        }
      }
      OwnerIndex = LogicGameObject::getOwnerIndex(v46);
      LogicGameObjectManager = LogicGameObject::getLogicGameObjectManager(v46);
      LogicSummoner::buildFreeTileMap(*(_QWORD *)(LogicGameObjectManager + 56), v45, v44, &v52, OwnerIndex == 0);
      LogicVector2::LogicVector2((LogicVector2 *)&v49);
      v48 = 100;
      v47 = operator new[](400);
      Range = LogicCharacterData::getRange(SummonCharacter);
      MinimumRange = (LogicMath *)LogicCharacterData::getMinimumRange(SummonCharacter);
      v19 = Range - 1000;
      if ( (int)Range - 1000 < 0 )
        v19 = Range - 999;
      v20 = LogicMath::max(MinimumRange, v19 >> 1, v18);
      if ( LogicCharacterData::getSpawnCharacter((__int64)SummonCharacter) )
      {
        Range = LogicCharacterData::getSpawnCharacterRange((__int64)SummonCharacter);
        v20 = 0;
      }
      v42 = v45 - SizeInTiles;
      if ( (int)(v45 - SizeInTiles) < 1 )
        goto LABEL_36;
      v41 = a4;
      v21 = 0;
      v22 = v44 - SizeInTiles;
      v23 = 500 * SizeInTiles;
      v43 = SizeInTiles;
      do
      {
        if ( v22 >= 1 )
        {
          for ( j = 0; j < v22; ++j )
          {
            v49 = v23 + 1000 * v21;
            v50 = v23 + 1000 * j;
            if ( (LogicVector2::isInDistance(&v49, a3, v20) & 1) == 0 )
            {
              if ( (unsigned int)LogicVector2::isInDistance(&v49, a3, Range) )
              {
                v25 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)v46);
                TilemapData = LogicBattle::getTilemapData(v25);
                if ( (unsigned int)LogicSummoner::positionFree(&v52, v45, v44, &v49, v43, TilemapData) )
                {
                  v27 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle((LogicSpellListener **)v46);
                  v28 = (const LogicCharacterData *)LogicBattle::getTilemapData(v27);
                  if ( (LogicSummoner::roadsBeneath((LogicSummoner *)&v49, SummonCharacter, v28, v29) & 1) == 0 )
                  {
                    if ( SHIDWORD(v48) >= 8 )
                    {
                      v30 = 0;
                      v31 = v47;
                      do
                      {
                        v32 = *(_DWORD *)(v31 + v30 + 4);
                        v33 = v32 < v50;
                        v34 = v32 > v50;
                        v35 = v33;
                        if ( OwnerIndex )
                          v34 = v35;
                        if ( v34 )
                        {
                          *(_DWORD *)(v31 + v30) = v49;
                          *(_DWORD *)(v31 + v30 + 4) = v50;
                        }
                        v30 += 8;
                      }
                      while ( v30 != 32 );
                    }
                    else
                    {
                      LogicArrayList<int>::add((__int64)&v47, &v49);
                      LogicArrayList<int>::add((__int64)&v47, &v50);
                    }
                  }
                }
              }
            }
          }
        }
        ++v21;
      }
      while ( v21 < v42 );
      if ( v48 <= 0 )
      {
    LABEL_36:
        v39 = 0;
        v38 = v47;
      }
      else
      {
        v36 = (LogicGameMode **)LogicGameObject::getLogicBattle((LogicSpellListener **)v46);
        v37 = 2 * LogicBattle::rand(v36, SHIDWORD(v48) / 2);
        v38 = v47;
        *v41 = *(_DWORD *)(v47 + 4LL * v37);
        v39 = 1;
        v41[1] = *(_DWORD *)(v38 + 4LL * (v37 | 1));
      }
      if ( v38 )
        operator delete[](v38);
      v47 = 0;
      v48 = 0;
      if ( v52 )
        operator delete[](v52);
      return v39;
    }

    void __fastcall LogicSummoner::buildFreeTileMap(__int64 a1, int a2, int a3, _QWORD *a4, int a5)
    {
      __int64 v8; // x0
      _QWORD *v9; // x21
      int v10; // w8
      int v11; // w25
      __int64 v12; // x26
      __int64 v13; // x27
      __int64 v14; // x28
      AllianceJoinFailedMessage *v15; // x22
      Font *CharacterData; // x23
      int OwnerIndex; // w24
      bool v18; // zf
      int NoDeploySizeW; // w24
      int SizeInTiles; // w23
      __int64 v21; // x0
      _DWORD *Position; // x0
      int v23; // w10
      __int64 v24; // x11
      int v25; // w12
      int v26; // w8
      int v27; // w9
      int v28; // w12
      __int64 v29; // x14
      __int64 v30; // x15
      int v31; // w16
      __int64 v32; // x17
    
      LogicGameObjectManager::getGameObjects(*(LogicSpellListener **)(a1 + 64));
      v9 = (_QWORD *)v8;
      v10 = *(_DWORD *)(v8 + 12);
      v11 = v10 - 1;
      if ( v10 >= 1 )
      {
        v12 = 0;
        v13 = a2;
        v14 = a3;
        do
        {
          v15 = *(AllianceJoinFailedMessage **)(*v9 + 8 * v12);
          if ( (*(unsigned int (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)v15 + 152LL))(v15) )
          {
            if ( (*(unsigned int (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)v15 + 88LL))(v15) == 5 )
            {
              CharacterData = (Font *)LogicCharacter::getCharacterData(v15);
              if ( LogicCharacterData::isBuilding(CharacterData) || LogicCharacterData::isSummoner(CharacterData) )
              {
                OwnerIndex = LogicGameObject::getOwnerIndex(v15);
                v18 = (int)LogicCharacterData::getNoDeploySizeW((__int64)CharacterData) < 1 || (OwnerIndex == 0) == a5;
                if ( v18 )
                {
                  v21 = LogicCharacterData::getMorphCharacter(CharacterData)
                      ? LogicCharacterData::getMorphResultCharacter((__int64)CharacterData)
                      : (__int64)CharacterData;
                  SizeInTiles = LogicCharacterData::getSizeInTiles(v21);
                  NoDeploySizeW = SizeInTiles;
                }
                else
                {
                  NoDeploySizeW = LogicCharacterData::getNoDeploySizeW((__int64)CharacterData);
                  SizeInTiles = LogicCharacterData::getNoDeploySizeH((__int64)CharacterData);
                }
                if ( NoDeploySizeW )
                  goto LABEL_19;
              }
            }
            else if ( (*(unsigned int (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)v15 + 88LL))(v15) == 4 )
            {
              SizeInTiles = 1;
              NoDeploySizeW = 1;
    LABEL_19:
              Position = (_DWORD *)LogicGameObject::getPosition(v15);
              v23 = Position[1];
              LODWORD(v24) = (v23 - 500 * SizeInTiles) / 1000;
              v25 = (v23 + 500 * SizeInTiles) / 1000;
              if ( (int)v24 < v25 )
              {
                v26 = (*Position - 500 * NoDeploySizeW) / 1000;
                v27 = (*Position + 500 * NoDeploySizeW) / 1000;
                v24 = (int)v24;
                v28 = v25 - 1;
                v29 = v13 * (int)v24 + v26;
                do
                {
                  if ( v24 < v14 && (v24 & 0x8000000000000000LL) == 0 )
                  {
                    v30 = v29;
                    v31 = v27 - v26;
                    v32 = v26;
                    if ( v26 < v27 )
                    {
                      do
                      {
                        if ( (v32 & 0x8000000000000000LL) == 0 && v32 < v13 )
                          *(_BYTE *)(*a4 + v30) = 0;
                        ++v32;
                        --v31;
                        ++v30;
                      }
                      while ( v31 );
                    }
                  }
                  v29 += v13;
                  v18 = (_DWORD)v24++ == v28;
                }
                while ( !v18 );
              }
            }
          }
          v18 = (_DWORD)v12++ == v11;
        }
        while ( !v18 );
      }
    }

    __int64 __fastcall LogicSummoner::positionFree(_QWORD *a1, int a2, int a3, _DWORD *a4, int a5, BillingManager *a6)
    {
      int v8; // w13
      __int64 v9; // x8
      int v10; // w8
      int v11; // w11
      int v12; // w9
      int v13; // w22
      int v14; // w24
      __int64 v15; // x12
      __int64 v16; // x21
      __int64 v17; // x27
      __int64 v18; // x23
      __int64 result; // x0
      int v20; // w28
      __int64 v21; // [xsp+8h] [xbp-68h]
      __int64 v22; // [xsp+10h] [xbp-60h]
      __int64 v23; // [xsp+18h] [xbp-58h]
    
      v8 = a4[1];
      v9 = 274877907LL * (*a4 - 500 * a5);
      v10 = (v9 >> 38) + ((unsigned __int64)v9 >> 63);
      v11 = v8 - 500 * a5;
      v12 = (*a4 + 500 * a5) / 1000;
      if ( v10 >= v12 )
        return 1;
      v13 = v11 / 1000;
      v14 = (v8 + 500 * a5) / 1000;
      v15 = a2;
      v21 = a2;
      v22 = v11 / 1000;
      v16 = a3;
      v17 = v10;
      v23 = v12;
      while ( v13 >= v14 )
      {
    LABEL_13:
        ++v17;
        result = 1;
        if ( v17 >= v23 )
          return result;
      }
      v18 = v22;
    LABEL_5:
      result = 0;
      if ( v18 < v16 && v17 < v15 && (((unsigned int)v18 | (unsigned int)v17) & 0x80000000) == 0 )
      {
        if ( *(_BYTE *)(*a1 + v17 + v18 * v15) )
        {
          v20 = 0;
          while ( LogicTilemapData::canPlaceEgg(a6, v20 & 1 | (unsigned int)(2 * v17), (unsigned int)(2 * v18 + (v20 >> 1))) )
          {
            if ( ++v20 > 3 )
            {
              ++v18;
              v15 = v21;
              if ( v18 < v14 )
                goto LABEL_5;
              goto LABEL_13;
            }
          }
        }
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicSummoner::roadsBeneath(_DWORD *a1, __int64 a2, #1224 **a3)
    {
      int SizeInTiles; // w20
      __int64 result; // x0
      int v7; // w23
      int v8; // w24
      int v9; // w25
      int v10; // w21
      int v11; // w27
      __int64 v12; // x22
      int MapWidth; // w0
    
      SizeInTiles = LogicCharacterData::getSizeInTiles(a2);
      result = 0;
      v7 = -SizeInTiles;
      if ( ((SizeInTiles & 0x40000000) != 0) == __OFSUB__(SizeInTiles, -SizeInTiles) )
      {
        v8 = *a1 / 500;
        v9 = a1[1] / 500;
        while ( 2 )
        {
          v10 = v7 + v8;
          v11 = ~SizeInTiles;
          do
          {
            if ( (v10 & 0x80000000) == 0 )
            {
              v12 = (unsigned int)(v9 + v11 + 1);
              MapWidth = LogicTilemapData::getMapWidth(a3);
              if ( (v12 & 0x80000000) == 0
                && v10 < MapWidth
                && (int)v12 < (int)LogicTilemapData::getMapHeight(a3)
                && (int)LogicTilemapData::getTileCost((BillingManager *)a3, (unsigned int)(v7 + v8), v12) > 0 )
              {
                return 1;
              }
            }
            ++v11;
          }
          while ( v11 < SizeInTiles );
          if ( v7++ < SizeInTiles )
            continue;
          break;
        }
        return 0;
      }
      return result;
    }

    __int64 __fastcall LogicSummoner::cheatShuffleSpells(LogicSummoner *a1)
    {
      int i; // w20
      __int64 result; // x0
    
      for ( i = 0; i != 4; ++i )
        result = LogicSummoner::useSpellFromHand(a1, i);
      return result;
    }

    __int64 __fastcall LogicSummoner::useSpellFromHand(__int64 a1, int a2)
    {
      __int64 v2; // x8
      _DWORD *v3; // x19
      __int64 result; // x0
      const char *v5; // x1
    
      v2 = a1 + 4LL * a2;
      if ( *(_DWORD *)(v2 + 256) == -1 )
      {
        result = LogicSummoner::hasDeck(a1);
        if ( (_DWORD)result )
          Debugger::error((__siginfo *)"Cant use spell from hand!\n", v5);
      }
      else
      {
        v3 = (_DWORD *)(v2 + 256);
        result = LogicArrayList<int>::add(a1 + 232, (int *)(v2 + 256));
        *v3 = -1;
      }
      return result;
    }

    bool __fastcall LogicSummoner::setAIEnabled(__int64 a1, char a2)
    {
      _BOOL8 result; // x0
    
      result = LogicGameObject::isOwnedByAI((LogicSpellListener **)a1);
      if ( result )
        *(_BYTE *)(a1 + 324) = a2;
      return result;
    }

    Character::AnimFrameIndices *__fastcall LogicSummoner::onTowerDestroyed(LogicSpellListener **a1)
    {
      Character::AnimFrameIndices *result; // x0
    
      result = (Character::AnimFrameIndices *)LogicGameObject::isOwnedByAI(a1);
      if ( (_DWORD)result )
      {
        result = (Character::AnimFrameIndices *)(*((__int64 (__fastcall **)(LogicSpellListener **))*a1 + 19))(a1);
        if ( (_DWORD)result )
          return LogicSummoner::onEventAI(a1, 1u);
      }
      return result;
    }

    __int64 __fastcall LogicSummoner::updateSimulatedMana(__int64 a1, int a2, int a3, AllianceItem *a4, int a5)
    {
      #1237 *v9; // x23
      __int64 Globals; // x0
      int v11; // w3
      __int64 result; // x0
      UnbindFacebookAccountMessage **v13; // x21
      _BOOL8 isOwnerTop; // x0
      _DWORD v15[2]; // [xsp+0h] [xbp-40h] BYREF
      _BYTE v16[8]; // [xsp+8h] [xbp-38h] BYREF
    
      v9 = (#1237 *)(unsigned int)(*(_DWORD *)(a1 + 304) + a5);
      *(_DWORD *)(a1 + 304) = (_DWORD)v9;
      Globals = LogicDataTables::getGlobals();
      result = LogicMath::clamp(v9, 0, *(_DWORD *)(Globals + 148), v11);
      *(_DWORD *)(a1 + 304) = result;
      *(_DWORD *)(a1 + 308) = 60;
      if ( a4 )
      {
        LogicVector2::LogicVector2((LogicVector2 *)v16, a2, a3);
        LogicVector2::LogicVector2((LogicVector2 *)v15, -1, -1);
        v13 = *(UnbindFacebookAccountMessage ***)(LogicGameObject::getLogicGameObjectManager((GameMode *)a1) + 56);
        isOwnerTop = LogicGameObject::isOwnerTop((GameMode *)a1);
        LogicSummoner::findPositionForSpell(a4, (const InitState *)v16, (const #1240 *)v15, v13, 0, isOwnerTop);
        return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, AllianceItem *, _QWORD))(**(_QWORD **)(a1 + 40) + 120LL))(
                 *(_QWORD *)(a1 + 40),
                 v15[0],
                 v15[1],
                 a4,
                 0);
      }
      return result;
    }

    __int64 __fastcall LogicSummoner::resetSimulatedManaTimers(__int64 result)
    {
      *(_QWORD *)(result + 304) = 0;
      return result;
    }

    __int64 __fastcall LogicSummoner::onDeath(LogicCharacter *a1)
    {
      LogicArenaData *v2; // x0
    
      v2 = (LogicArenaData *)(*(__int64 (__fastcall **)(LogicCharacter *))(*(_QWORD *)a1 + 136LL))(a1);
      *((_DWORD *)a1 + 79) = LogicHitpointComponent::getHitpoints(v2);
      return LogicCharacter::onDeath(a1);
    }

    __int64 __fastcall LogicSummoner::getHitpointsForWinningCondition(_DWORD *a1)
    {
      LogicArenaData *v2; // x0
    
      v2 = (LogicArenaData *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 136LL))(a1);
      return a1[79] + (unsigned int)LogicHitpointComponent::getHitpoints(v2);
    }

    __int64 __fastcall LogicSummoner::getOneManaRegenRateMS(LogicSpellListener **a1)
    {
      int RegenRateMilliseconds; // w19
    
      RegenRateMilliseconds = LogicSummoner::getRegenRateMilliseconds(a1);
      return (unsigned int)(RegenRateMilliseconds / *(_DWORD *)(LogicDataTables::getGlobals() + 148));
    }

    __int64 LogicSummoner::isSummoner()
    {
      return 1;
    }

    __int64 __fastcall LogicSummoner::getDeckSpellIndex(__int64 a1, int a2)
    {
      return *(unsigned int *)(a1 + 4LL * a2 + 256);
    }

    __int64 __fastcall LogicSummoner::getSpellIndex(__int64 a1, int a2)
    {
      __int64 result; // x0
      __int64 v4; // x8
    
      result = 0;
      v4 = a1 + 256;
      while ( *(_DWORD *)(v4 + 4 * result) != a2 )
      {
        if ( ++result >= 4 )
          return 0xFFFFFFFFLL;
      }
      return result;
    }

    // attributes: thunk
    __int64 __fastcall LogicSummoner::isAlive(AllianceJoinFailedMessage *this)
    {
      return LogicCharacter::isAlive(this);
    }

    __int64 __fastcall LogicSummoner::clearSpellCooldowns(__int64 result)
    {
      *(_DWORD *)(result + 320) = 0;
      return result;
    }

    __int64 __fastcall LogicSummoner::getStars(LogicSpellListener **a1, GameMode *a2)
    {
      unsigned int RealOwnerIndex; // w20
      UnbindFacebookAccountMessage *LogicBattle; // x0
      const char *v6; // x2
      const char *v7; // x1
      int v8; // w8
    
      if ( !(*(unsigned int (__fastcall **)(GameMode *))(*(_QWORD *)a2 + 152LL))(a2) )
        return 3;
      RealOwnerIndex = LogicGameObject::getRealOwnerIndex(a2);
      LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(a1);
      v8 = *(_DWORD *)(LogicBattle::getLeaderTowers(LogicBattle, RealOwnerIndex, v6) + 12);
      if ( v8 >= 3 )
      {
        Debugger::warning((__siginfo *)"more than 2 summoner towers!", v7);
        v8 = 2;
      }
      return (unsigned int)(2 - v8);
    }

    __int64 __fastcall LogicSummoner::getNextSpell(__int64 a1)
    {
      AcceptChallengeMessage *Deck; // x0
      unsigned int *v3; // x8
    
      if ( LogicSummoner::hasDeck(a1) )
      {
        if ( *(int *)(a1 + 228) >= 1 )
        {
          Deck = (AcceptChallengeMessage *)LogicSummoner::getDeck((LogicSpellListener **)a1);
          v3 = *(unsigned int **)(a1 + 216);
          return LogicSpellDeck::getSpell(Deck, (const char *)*v3);
        }
        if ( *(int *)(a1 + 244) >= 1 )
        {
          Deck = (AcceptChallengeMessage *)LogicSummoner::getDeck((LogicSpellListener **)a1);
          v3 = *(unsigned int **)(a1 + 232);
          return LogicSpellDeck::getSpell(Deck, (const char *)*v3);
        }
      }
      return 0;
    }

    __int64 __fastcall LogicSummoner::setSimulatedLastSpellDeckIndex(__int64 result, int a2)
    {
      *(_DWORD *)(result + 252) = a2;
      return result;
    }

    __int64 __fastcall LogicSummoner::getSimulatedLastSpell(AllianceItem *a1)
    {
      AcceptChallengeMessage *Deck; // x0
    
      if ( !LogicSummoner::hasDeck((__int64)a1) || *((_DWORD *)a1 + 63) == -1 )
        return LogicSummoner::getLastUsedSpell(a1);
      Deck = (AcceptChallengeMessage *)LogicSummoner::getDeck((LogicSpellListener **)a1);
      return LogicSpellDeck::getSpell(Deck, (const char *)*((unsigned int *)a1 + 63));
    }

    __int64 __fastcall LogicSummoner::calculateSimulatedManaCost(AllianceItem *a1, InitState *a2)
    {
      __int64 ManaCost; // x20
      TextField *SimulatedLastSpell; // x21
      int v6; // w19
      InitState *SpellData; // x0
      LogicMath *v8; // x19
      int v9; // w1
      int v10; // w2
    
      ManaCost = LogicSpellData::getManaCost(a2);
      if ( !(unsigned int)LogicSpellData::isMirror(a2) )
        return ManaCost;
      SimulatedLastSpell = (TextField *)LogicSummoner::getSimulatedLastSpell(a1);
      if ( !SimulatedLastSpell )
        return ManaCost;
      v6 = LogicSpellData::getManaCost(a2);
      SpellData = (InitState *)LogicSpell::getSpellData(SimulatedLastSpell);
      v8 = (LogicMath *)((unsigned int)LogicSpellData::getManaCost(SpellData) + v6);
      v9 = *(_DWORD *)(LogicDataTables::getGlobals() + 148);
      return LogicMath::min(v8, v9, v10);
    }

    _QWORD *__fastcall LogicSummoner::~LogicSummoner(_QWORD *a1)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
    
      *a1 = off_100470170;
      v3 = a1 + 29;
      v2 = a1[29];
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      v4 = a1[27];
      if ( v4 )
        operator delete[](v4);
      a1[27] = 0;
      a1[28] = 0;
      return a1;
    }

    void __fastcall LogicSummoner::~LogicSummoner(_QWORD *a1)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
    
      *a1 = off_100470170;
      v3 = a1 + 29;
      v2 = a1[29];
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      v4 = a1[27];
      if ( v4 )
        operator delete[](v4);
      operator delete(a1);
    }

}; // end class LogicSummoner
