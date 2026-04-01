class LogicBattleLogPlayer
{
public:

    void __fastcall LogicBattleLogPlayer::LogicBattleLogPlayer(LogicBattleLogPlayer *this)
    {
      LogicLong *v2; // x20
    
      *(_QWORD *)this = off_1004656B0;
      v2 = (LogicBattleLogPlayer *)((char *)this + 16);
      LogicLong::LogicLong((LogicBattleLogPlayer *)((char *)this + 8));
      LogicLong::LogicLong(v2);
      LogicLong::LogicLong((LogicBattleLogPlayer *)((char *)this + 24));
      String::String((String *)((char *)this + 32));
      String::String((String *)((char *)this + 56));
      String::operator=((char *)this + 32, "");
      String::operator=((char *)this + 56, "");
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_DWORD *)this + 26) = 0;
      *((_QWORD *)this + 11) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 10) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
    }

    // attributes: thunk
    void __fastcall LogicBattleLogPlayer::LogicBattleLogPlayer(LogicBattleLogPlayer *this)
    {
      __ZN20LogicBattleLogPlayerC2Ev(this);
    }

    __int64 __fastcall LogicBattleLogPlayer::destruct(LogicHealthBarData *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x21
      __int64 result; // x0
    
      v3 = (_QWORD *)((char *)this + 80);
      v2 = *((_QWORD *)this + 10);
      if ( v2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
        if ( *v3 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
        *v3 = 0;
      }
      String::operator=((char *)this + 32, "");
      result = String::operator=((char *)this + 56, "");
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_DWORD *)v3 + 6) = 0;
      v3[1] = 0;
      v3[2] = 0;
      *v3 = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      return result;
    }

    __int64 __fastcall LogicBattleLogPlayer::setAccountId(__int64 result, _DWORD *a2)
    {
      *(_DWORD *)(result + 8) = *a2;
      *(_DWORD *)(result + 12) = a2[1];
      return result;
    }

    __int64 __fastcall LogicBattleLogPlayer::getAccountId(LogicHealthBarData *this)
    {
      return (__int64)this + 8;
    }

    __int64 __fastcall LogicBattleLogPlayer::setHomeId(__int64 result, _DWORD *a2)
    {
      *(_DWORD *)(result + 16) = *a2;
      *(_DWORD *)(result + 20) = a2[1];
      return result;
    }

    __int64 __fastcall LogicBattleLogPlayer::getHomeId(LogicHealthBarData *this)
    {
      return (__int64)this + 16;
    }

    __int64 __fastcall LogicBattleLogPlayer::setAllianceId(__int64 result, _DWORD *a2)
    {
      *(_DWORD *)(result + 24) = *a2;
      *(_DWORD *)(result + 28) = a2[1];
      return result;
    }

    __int64 __fastcall LogicBattleLogPlayer::getAllianceId(LogicHealthBarData *this)
    {
      return (__int64)this + 24;
    }

    __int64 __fastcall LogicBattleLogPlayer::setStars(__int64 this, int a2)
    {
      *(_DWORD *)(this + 88) = a2;
      return this;
    }

    __int64 __fastcall LogicBattleLogPlayer::getStars(LogicHealthBarData *this)
    {
      return *((unsigned int *)this + 22);
    }

    __int64 __fastcall LogicBattleLogPlayer::setPrevScore(__int64 this, int a2)
    {
      *(_DWORD *)(this + 96) = a2;
      return this;
    }

    __int64 __fastcall LogicBattleLogPlayer::getPrevScore(LogicHealthBarData *this)
    {
      return *((unsigned int *)this + 24);
    }

    __int64 __fastcall LogicBattleLogPlayer::setScore(__int64 this, int a2)
    {
      *(_DWORD *)(this + 92) = a2;
      return this;
    }

    __int64 __fastcall LogicBattleLogPlayer::getScore(LogicHealthBarData *this)
    {
      return *((unsigned int *)this + 23);
    }

    __int64 __fastcall LogicBattleLogPlayer::setHighscoreRank(__int64 this, int a2)
    {
      *(_DWORD *)(this + 104) = a2;
      return this;
    }

    __int64 __fastcall LogicBattleLogPlayer::getHighscoreRank(LogicHealthBarData *this)
    {
      return *((unsigned int *)this + 26);
    }

    __int64 __fastcall LogicBattleLogPlayer::setName(LogicHealthBarData *this, const String *a2)
    {
      return String::operator=((String *)((char *)this + 32));
    }

    __int64 __fastcall LogicBattleLogPlayer::getName(LogicHealthBarData *this)
    {
      return (__int64)this + 32;
    }

    __int64 __fastcall LogicBattleLogPlayer::setAllianceName(LogicHealthBarData *this, const String *a2)
    {
      return String::operator=((String *)((char *)this + 56));
    }

    __int64 __fastcall LogicBattleLogPlayer::getAllianceName(LogicHealthBarData *this)
    {
      return (__int64)this + 56;
    }

    __int64 __fastcall LogicBattleLogPlayer::getAllianceBadgeData(LogicHealthBarData *this)
    {
      return *((_QWORD *)this + 15);
    }

    __int64 __fastcall LogicBattleLogPlayer::setAllianceBadgeData(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 120) = a2;
      return result;
    }

    #1234 *__fastcall LogicBattleLogPlayer::getJSON(LogicHealthBarData *this)
    {
      #1234 *v2; // x19
      const #1236 *v3; // x3
      const String *v4; // x3
      const String *v5; // x3
      const AreaEffectObject *v6; // x3
      const #1236 *v7; // x3
      const #1236 *v8; // x3
      const AreaEffectObject *v9; // x3
      AcceptChallengeMessage *v10; // x0
      LogicJSONArray *v11; // x0
    
      v2 = (#1234 *)operator new(40);
      LogicJSONObject::LogicJSONObject(v2, 4);
      LogicJSONHelper::setLogicLong(v2, &JSON_ATTRIB_ACCOUNT_ID, (const String *)((char *)this + 8), v3);
      LogicJSONHelper::setString(v2, (#1234 *)&JSON_ATTRIB_NAME, (const String *)((char *)this + 32), v4);
      LogicJSONHelper::setString(v2, (#1234 *)&JSON_ATTRIB_ALLIANCE, (const String *)((char *)this + 56), v5);
      LogicJSONHelper::setInt((__int64)v2, (#1234 *)&JSON_ATTRIB_STARS, (const String *)*((unsigned int *)this + 22));
      LogicJSONHelper::setInt((__int64)v2, (#1234 *)&JSON_ATTRIB_SCORE, (const String *)*((unsigned int *)this + 23));
      LogicJSONHelper::setInt((__int64)v2, (#1234 *)&JSON_ATTRIB_ARENA, (const String *)*((unsigned int *)this + 25));
      LogicJSONHelper::setInt((__int64)v2, (#1234 *)&JSON_ATTRIB_SCORE_PREV, (const String *)*((unsigned int *)this + 24));
      LogicJSONHelper::setInt((__int64)v2, (#1234 *)&JSON_ATTRIB_HIGHSCORE, (const String *)*((unsigned int *)this + 26));
      LogicJSONHelper::setLogicData((__int64)v2, (#1234 *)&JSON_ATTRIB_CHEST, *((String **)this + 14), v6);
      LogicJSONHelper::setLogicLong(v2, &JSON_ATTRIB_ALLIANCE_ID, (const String *)this + 1, v7);
      LogicJSONHelper::setLogicLong(v2, &JSON_ATTRIB_HOME_ID, (const String *)((char *)this + 16), v8);
      LogicJSONHelper::setLogicData((__int64)v2, (#1234 *)&JSON_ATTRIB_BADGE, *((String **)this + 15), v9);
      v10 = (AcceptChallengeMessage *)*((_QWORD *)this + 10);
      if ( v10 )
      {
        v11 = LogicSpellDeck::save(v10);
        LogicJSONObject::put(v2, &JSON_ATTRIB_SPELLS, v11);
      }
      return v2;
    }

    const #1228 *__fastcall LogicBattleLogPlayer::loadJSON(LogicHealthBarData *this, const #1234 *a2, const char *a3)
    {
      #1236 *v5; // x3
      const String *v6; // x3
      const String *v7; // x3
      const String *v8; // x2
      #1236 *v9; // x3
      #1236 *v10; // x3
      const String *v11; // x2
      __int64 v12; // x0
      __int64 v13; // x0
      const #1228 *result; // x0
      const #1228 *v15; // x20
      LogicSpellDeck *v16; // x21
      String v17; // [xsp+0h] [xbp-50h] BYREF
      String v18; // [xsp+18h] [xbp-38h] BYREF
    
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"", a3);
      LogicJSONHelper::getLogicLong(a2, &JSON_ATTRIB_ACCOUNT_ID, (const String *)((char *)this + 8), v5);
      LogicJSONHelper::getString(a2, (const #1234 *)&JSON_ATTRIB_NAME, &LogicJSONHelper::DEFAULT_STRING, v6, &v18);
      String::operator=((String *)((char *)this + 32));
      String::~String(&v18);
      LogicJSONHelper::getString(a2, (const #1234 *)&JSON_ATTRIB_ALLIANCE, &LogicJSONHelper::DEFAULT_STRING, v7, &v17);
      String::operator=((String *)((char *)this + 56));
      String::~String(&v17);
      *((_DWORD *)this + 22) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_STARS, 0);
      *((_DWORD *)this + 23) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_SCORE, 0);
      *((_DWORD *)this + 25) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_ARENA, 0);
      *((_DWORD *)this + 24) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_SCORE_PREV, 0);
      *((_DWORD *)this + 26) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_HIGHSCORE, 0);
      *((_QWORD *)this + 14) = LogicJSONHelper::getLogicData(a2, (const #1234 *)&JSON_ATTRIB_CHEST, v8);
      LogicJSONHelper::getLogicLong(a2, &JSON_ATTRIB_ALLIANCE_ID, (const String *)this + 1, v9);
      LogicJSONHelper::getLogicLong(a2, &JSON_ATTRIB_HOME_ID, (const String *)((char *)this + 16), v10);
      *((_QWORD *)this + 15) = LogicJSONHelper::getLogicData(a2, (const #1234 *)&JSON_ATTRIB_BADGE, v11);
      v12 = *((_QWORD *)this + 10);
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v13 = *((_QWORD *)this + 10);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        *((_QWORD *)this + 10) = 0;
      }
      result = (const #1228 *)LogicJSONObject::getJSONArray(a2, &JSON_ATTRIB_SPELLS);
      v15 = result;
      if ( result )
      {
        v16 = (LogicSpellDeck *)operator new(72);
        LogicSpellDeck::LogicSpellDeck(v16);
        *((_QWORD *)this + 10) = v16;
        return (const #1228 *)LogicSpellDeck::load(v16, v15);
      }
      return result;
    }

    __int64 __fastcall LogicBattleLogPlayer::setDeck(LogicHealthBarData *this, AcceptChallengeMessage *a2)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 10);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *((_QWORD *)this + 10);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 10) = 0;
      }
      *((_QWORD *)this + 10) = a2;
      return result;
    }

    __int64 __fastcall LogicBattleLogPlayer::getDeck(LogicHealthBarData *this)
    {
      return *((_QWORD *)this + 10);
    }

    __int64 __fastcall LogicBattleLogPlayer::getChestData(LogicHealthBarData *this)
    {
      return *((_QWORD *)this + 14);
    }

    __int64 __fastcall LogicBattleLogPlayer::setChestData(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 112) = a2;
      return result;
    }

    // attributes: thunk
    void __fastcall LogicBattleLogPlayer::~LogicBattleLogPlayer(LogicHealthBarData *this)
    {
      __ZN20LogicBattleLogPlayerD2Ev(this);
    }

    void __fastcall LogicBattleLogPlayer::~LogicBattleLogPlayer(LogicHealthBarData *this)
    {
      LogicBattleLogPlayer::~LogicBattleLogPlayer(this);
      operator delete(this);
    }

    void __fastcall LogicBattleLogPlayer::~LogicBattleLogPlayer(LogicHealthBarData *this)
    {
      *(_QWORD *)this = off_1004656B0;
      String::~String((String *)((char *)this + 56));
      String::~String((String *)((char *)this + 32));
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 1) = 0;
    }

}; // end class LogicBattleLogPlayer
