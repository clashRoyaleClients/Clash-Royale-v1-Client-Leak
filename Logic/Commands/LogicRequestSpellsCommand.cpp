class LogicRequestSpellsCommand
{
public:

    void __fastcall LogicRequestSpellsCommand::LogicRequestSpellsCommand(LogicRequestSpellsCommand *this)
    {
      LogicCommand *v1; // x0
    
      v1 = LogicCommand::LogicCommand(this);
      *(_QWORD *)v1 = &off_10045FDD8;
      *((_QWORD *)v1 + 5) = 0;
      *((_QWORD *)v1 + 6) = 0;
      *((_QWORD *)v1 + 4) = 0;
    }

    void __fastcall LogicRequestSpellsCommand::destruct(String **this)
    {
      void *v2; // x20
    
      LogicCommand::destruct((LogicCommand *)this);
      v2 = *(this + 4);
      if ( v2 )
      {
        String::~String(*(this + 4));
        operator delete(v2);
      }
      *(this + 4) = 0;
    }

    __int64 __fastcall LogicRequestSpellsCommand::getCommandType(LogicDebugCommand *this)
    {
      return 524;
    }

    __int64 __fastcall LogicRequestSpellsCommand::encode(LogicDebugCommand *this, #1226 *a2)
    {
      LogicCommand::encode();
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 4));
      return ByteStreamHelper::encodeSpellList(a2, (char *)this + 40);
    }

    __int64 __fastcall LogicRequestSpellsCommand::decode(LogicDebugCommand *this, #1225 *a2)
    {
      LogicCommand::decode(this, a2);
      *((_QWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      return ByteStreamHelper::decodeSpellList(a2, (char *)this + 40);
    }

    __int64 __fastcall LogicRequestSpellsCommand::execute(LogicDebugCommand *this, #1028 *a2, char a3)
    {
      #1146 *Home; // x20
      #962 *PlayerAvatar; // x22
      __int64 v8; // x23
      #1147 *TutorialManager; // x0
      int v11; // w8
      _QWORD *v12; // x28
      __int64 v13; // x21
      #895 *v14; // x0
      TextField *SpellByData; // x0
      #962 *v16; // x0
      #1143 *Arena; // x0
      int SpellRequestSize; // w24
      __int64 SpellCollection; // x25
      int v20; // w21
      int i; // w26
      #895 *SpellData; // x0
      AcceptChallengeMessage *SelectedDeck; // x25
      int SpellCnt; // w26
      const char *v25; // x27
      #895 *v26; // x0
      int v27; // w8
      __int64 v28; // x28
      int v29; // w27
      int v30; // w21
      __int64 v31; // x25
      #916 *v32; // x24
      #916 *v33; // x0
      int GlobalID; // w26
      int v35; // w9
      __int64 v36; // x23
      void (__fastcall *v37)(__int64, _QWORD, __int64, _QWORD, _QWORD *, void **); // x21
      #1143 *v38; // x0
      __int64 v39; // x0
      __int64 v40; // [xsp+8h] [xbp-78h]
      TextField *v41; // [xsp+10h] [xbp-70h] BYREF
      TextField *Spell; // [xsp+18h] [xbp-68h] BYREF
      void *v43; // [xsp+20h] [xbp-60h] BYREF
      __int64 v44; // [xsp+28h] [xbp-58h]
    
      Home = (#1146 *)LogicGameMode::getHome(a2);
      if ( !Home )
        return 1;
      PlayerAvatar = (#962 *)LogicGameMode::getPlayerAvatar(a2);
      if ( !PlayerAvatar )
        return 2;
      if ( (int)LogicClientHome::getRequestSpellsCooldownSeconds(Home) > 0 )
        return 3;
      if ( !(unsigned int)LogicClientAvatar::isInAlliance(PlayerAvatar) )
        return 4;
      TutorialManager = (#1147 *)LogicGameMode::getTutorialManager(a2);
      if ( LogicTutorialManager::getCurrentTutorial(TutorialManager) )
        return 5;
      v11 = *((_DWORD *)this + 13);
      if ( !v11 )
        return 6;
      if ( v11 > 1 )
        return 7;
      v12 = (_QWORD *)((char *)this + 40);
      if ( v11 < 1 )
      {
    LABEL_23:
        v43 = 0;
        v44 = 0;
        v16 = (#962 *)LogicGameMode::getPlayerAvatar(a2);
        Arena = (#1143 *)LogicClientAvatar::getArena(v16);
        SpellRequestSize = LogicArenaData::getSpellRequestSize(Arena);
        SpellCollection = LogicClientHome::getSpellCollection(Home);
        v20 = *(_DWORD *)(SpellCollection + 12);
        if ( v20 >= 1 )
        {
          for ( i = 0; i < v20; ++i )
          {
            Spell = (TextField *)LogicSpellCollection::getSpell((#927 *)SpellCollection, i);
            SpellData = (#895 *)LogicSpell::getSpellData(Spell);
            if ( (int)LogicSpellData::getDonateCapacity(SpellData) <= SpellRequestSize )
              LogicArrayList<LogicSpell const*>::add((__int64)&v43, (__int64 *)&Spell);
          }
        }
        SelectedDeck = (AcceptChallengeMessage *)LogicClientHome::getSelectedDeck(Home);
        SpellCnt = LogicSpellDeck::getSpellCnt((__int64)SelectedDeck);
        if ( SpellCnt >= 1 )
        {
          v25 = 0;
          do
          {
            v41 = (TextField *)LogicSpellDeck::getSpell(SelectedDeck, v25);
            v26 = (#895 *)LogicSpell::getSpellData(v41);
            if ( (int)LogicSpellData::getDonateCapacity(v26) <= SpellRequestSize )
              LogicArrayList<LogicSpell const*>::add((__int64)&v43, (__int64 *)&v41);
            v25 = (const char *)(unsigned int)((_DWORD)v25 + 1);
          }
          while ( (int)v25 < SpellCnt );
        }
        v27 = *((_DWORD *)this + 13);
        if ( v27 < 1 )
        {
          v29 = 0;
        }
        else
        {
          v28 = 0;
          v29 = 0;
          v40 = v27;
          do
          {
            v30 = HIDWORD(v44);
            if ( SHIDWORD(v44) >= 1 )
            {
              v31 = 0;
              v32 = *(#916 **)(*((_QWORD *)this + 5) + 8 * v28);
              do
              {
                v33 = (#916 *)LogicSpell::getSpellData(*((TextField **)v43 + (int)v31));
                GlobalID = LogicData::getGlobalID(v33);
                if ( GlobalID == (unsigned int)LogicData::getGlobalID(v32) )
                {
                  ++v29;
                  LogicArrayList<LogicSpell const*>::remove(&v43, v31);
                  LODWORD(v31) = v30;
                }
                v31 = (unsigned int)(v31 + 1);
              }
              while ( (int)v31 < v30 );
            }
            ++v28;
          }
          while ( v28 < v40 );
          v27 = *((_DWORD *)this + 13);
          v12 = (_QWORD *)((char *)this + 40);
        }
        v35 = a3 & 2;
        v8 = 8 * (unsigned int)(v29 < v27);
        if ( v35 && v29 >= v27 )
        {
          v36 = LogicClientAvatar::getChangeListener(PlayerAvatar);
          v37 = *(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD *, void **))(*(_QWORD *)v36 + 144LL);
          v38 = (#1143 *)LogicClientAvatar::getArena(PlayerAvatar);
          v39 = LogicArenaData::getSpellRequestSize(v38);
          v37(v36, 0, v39, *((_QWORD *)this + 4), v12, &v43);
          LogicClientHome::startRequestSpellsCooldown(Home);
          LogicClientHome::saveRequest(Home, *((_QWORD *)this + 4), v12);
          v8 = 0;
        }
        if ( v43 )
          operator delete[](v43);
        v43 = 0;
        v44 = 0;
      }
      else
      {
        v13 = 0;
        while ( 1 )
        {
          v14 = *(#895 **)(*v12 + 8 * v13);
          if ( !v14 )
            return 8;
          if ( (LogicSpellData::isNotInUse(v14) & 1) != 0 )
            return 9;
          SpellByData = (TextField *)LogicClientHome::getSpellByData(Home, *(_QWORD *)(*v12 + 8 * v13));
          if ( SpellByData )
          {
            if ( (LogicSpell::hasEnoughMaterialToMaxLevel(SpellByData) & 1) != 0 )
              return 10;
          }
          if ( ++v13 >= *((int *)this + 13) )
            goto LABEL_23;
        }
      }
      return v8;
    }

    __int64 __fastcall LogicRequestSpellsCommand::setMessage(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 32) = a2;
      return this;
    }

    __int64 __fastcall LogicRequestSpellsCommand::addToWishList(LogicDebugCommand *this, const #895 *a2)
    {
      const #895 *v3; // [xsp+8h] [xbp-8h] BYREF
    
      v3 = a2;
      return LogicArrayList<LogicSpellData const*>::add((__int64)this + 40, (__int64 *)&v3);
    }

    void __fastcall LogicRequestSpellsCommand::~LogicRequestSpellsCommand(LogicDebugCommand *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
    
      *(_QWORD *)this = &off_10045FDD8;
      v3 = (_QWORD *)((char *)this + 40);
      v2 = *((_QWORD *)this + 5);
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      *(_QWORD *)this = &off_1004646C8;
      *(_QWORD *)((char *)this + 20) = 0;
    }

    void __fastcall LogicRequestSpellsCommand::~LogicRequestSpellsCommand(LogicDebugCommand *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = &off_10045FDD8;
      v2 = *((_QWORD *)this + 5);
      if ( v2 )
        operator delete[](v2);
      operator delete(this);
    }

}; // end class LogicRequestSpellsCommand
