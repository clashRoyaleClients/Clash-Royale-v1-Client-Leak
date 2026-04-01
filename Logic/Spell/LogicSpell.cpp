class LogicSpell
{
public:

    void __fastcall LogicSpell::LogicSpell(LogicSpell *this)
    {
      *((_BYTE *)this + 32) = 0;
      *((_DWORD *)this + 2) = 1;
      *((_DWORD *)this + 3) = -1;
      *(_QWORD *)this = 0;
      *((_BYTE *)this + 33) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_DWORD *)this + 4) = 0;
      *((_DWORD *)this + 9) = 0;
      *((_DWORD *)this + 10) = 0;
    }

    __int64 __fastcall LogicSpell::encode(AreaEffectObject **this, #1226 *a2)
    {
      ByteStreamHelper::writeDataReference((int)a2, *this);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 2));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 3));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 4));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 9));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 10));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 32));
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 33));
    }

    __int64 __fastcall LogicSpell::decode(TextField *this, #1225 *a2, int a3)
    {
      __int64 result; // x0
    
      *(_QWORD *)this = ByteStreamHelper::readDataReference(a2, (ByteStream *)7, a3);
      *((_DWORD *)this + 2) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 3) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 4) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 9) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 10) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_BYTE *)this + 32) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 33) = result;
      return result;
    }

    const String *__fastcall LogicSpell::load(TextField *this, const #1234 *a2, const String *a3)
    {
      const String *result; // x0
    
      *(_QWORD *)this = LogicJSONHelper::getLogicData(a2, (const #1234 *)&JSON_ATTRIB_DATA, a3);
      *((_DWORD *)this + 3) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_CREATE_TIME, 0);
      *((_DWORD *)this + 4) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_COUNT, 0);
      *((_DWORD *)this + 2) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_LEVEL_INDEX, 0);
      *((_BYTE *)this + 33) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_NEW_FLAG, 0) != 0;
      *((_DWORD *)this + 9) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_NEW_COUNT, 0);
      *((_BYTE *)this + 32) = (unsigned int)LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_NEW_UPGRADE, 0) != 0;
      result = LogicJSONHelper::getInt(a2, (const #1234 *)&JSON_ATTRIB_RECENT_USE_COUNT, 0);
      *((_DWORD *)this + 10) = (_DWORD)result;
      return result;
    }

    #1234 *__fastcall LogicSpell::save(String **this)
    {
      #1234 *v2; // x19
      const AreaEffectObject *v3; // x3
    
      v2 = (#1234 *)operator new(40);
      LogicJSONObject::LogicJSONObject(v2, 4);
      LogicJSONHelper::setLogicData((__int64)v2, (#1234 *)&JSON_ATTRIB_DATA, *this, v3);
      LogicJSONHelper::setInt((__int64)v2, (#1234 *)&JSON_ATTRIB_CREATE_TIME, (const String *)*((unsigned int *)this + 3));
      LogicJSONHelper::setInt((__int64)v2, (#1234 *)&JSON_ATTRIB_COUNT, (const String *)*((unsigned int *)this + 4));
      LogicJSONHelper::setInt((__int64)v2, (#1234 *)&JSON_ATTRIB_LEVEL_INDEX, (const String *)*((unsigned int *)this + 2));
      LogicJSONHelper::setInt((__int64)v2, (#1234 *)&JSON_ATTRIB_NEW_FLAG, (const String *)*((unsigned __int8 *)this + 33));
      LogicJSONHelper::setInt((__int64)v2, (#1234 *)&JSON_ATTRIB_NEW_COUNT, (const String *)*((unsigned int *)this + 9));
      LogicJSONHelper::setInt(
        (__int64)v2,
        (#1234 *)&JSON_ATTRIB_NEW_UPGRADE,
        (const String *)*((unsigned __int8 *)this + 32));
      LogicJSONHelper::setInt(
        (__int64)v2,
        (#1234 *)&JSON_ATTRIB_RECENT_USE_COUNT,
        (const String *)*((unsigned int *)this + 10));
      return v2;
    }

    __int64 __fastcall LogicSpell::getSpellData(TextField *this)
    {
      return *(_QWORD *)this;
    }

    _QWORD *__fastcall LogicSpell::setSpellData(_QWORD *result, __int64 a2)
    {
      *result = a2;
      return result;
    }

    __int64 __fastcall LogicSpell::clone(TextField *this)
    {
      __int64 result; // x0
    
      result = operator new(48);
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)result = *(_QWORD *)this;
      *(_DWORD *)(result + 8) = *((_DWORD *)this + 2);
      *(_DWORD *)(result + 12) = *((_DWORD *)this + 3);
      *(_DWORD *)(result + 16) = *((_DWORD *)this + 4);
      *(_BYTE *)(result + 33) = *((_BYTE *)this + 33);
      *(_DWORD *)(result + 36) = *((_DWORD *)this + 9);
      *(_BYTE *)(result + 32) = *((_BYTE *)this + 32);
      *(_DWORD *)(result + 40) = *((_DWORD *)this + 10);
      return result;
    }

    __int64 __fastcall LogicSpell::equals(TextField *this, const TextField *a2)
    {
      if ( a2 )
        return LogicData::equals(*(_QWORD *)this, *(_QWORD *)a2);
      else
        return 0;
    }

    __int64 __fastcall LogicSpell::destruct(TextField *this)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 3);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *((_QWORD *)this + 3);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 3) = 0;
      }
      *((_BYTE *)this + 32) = 0;
      *((_DWORD *)this + 2) = 1;
      *((_DWORD *)this + 3) = -1;
      *(_QWORD *)this = 0;
      *((_BYTE *)this + 33) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_DWORD *)this + 4) = 0;
      *((_DWORD *)this + 9) = 0;
      *((_DWORD *)this + 10) = 0;
      return result;
    }

    __int64 __fastcall LogicSpell::setShowNewIcon(__int64 this, char a2)
    {
      *(_BYTE *)(this + 33) = a2;
      return this;
    }

    __int64 __fastcall LogicSpell::isShowNewIcon(TextField *this)
    {
      return *((unsigned __int8 *)this + 33);
    }

    __int64 __fastcall LogicSpell::setShowNewCount(__int64 this, int a2)
    {
      *(_DWORD *)(this + 36) = a2;
      return this;
    }

    __int64 __fastcall LogicSpell::getShowNewCount(TextField *this)
    {
      return *((unsigned int *)this + 9);
    }

    __int64 __fastcall LogicSpell::getPreviousLevelUpgradeExp(TextField *this)
    {
      int v1; // w8
      __int64 v2; // x19
      __int64 Rarity; // x0
    
      v1 = *((_DWORD *)this + 2) - 1;
      if ( v1 >= 0 )
        v2 = (unsigned int)v1;
      else
        v2 = 0;
      Rarity = LogicSpellData::getRarity(*(InitState **)this);
      return LogicRarityData::getUpgradeExp(Rarity, v2);
    }

    __int64 __fastcall LogicSpell::getUpgradeExp(InitState **this)
    {
      __int64 Rarity; // x0
    
      Rarity = LogicSpellData::getRarity(*this);
      return LogicRarityData::getUpgradeExp(Rarity, *((unsigned int *)this + 2));
    }

    _QWORD *__fastcall LogicSpell::increaseServerEvent(_QWORD *this)
    {
      if ( LogicServerEventCollector::ENABLED )
      {
        this = (_QWORD *)*(this + 3);
        if ( this )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*this + 24LL))(this);
      }
      return this;
    }

    void __fastcall LogicSpell::initForServerEvents(TextField *this, int a2, int a3)
    {
      __int64 v6; // x0
      __int64 v7; // x0
      LogicServerEventCollector *v8; // x22
    
      if ( LogicServerEventCollector::ENABLED )
      {
        v6 = *((_QWORD *)this + 3);
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          v7 = *((_QWORD *)this + 3);
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
          *((_QWORD *)this + 3) = 0;
        }
        v8 = (LogicServerEventCollector *)operator new(80);
        LogicServerEventCollector::LogicServerEventCollector(v8, a2, a3);
        *((_QWORD *)this + 3) = v8;
      }
    }

    _QWORD *__fastcall LogicSpell::increaseDamageCount(_QWORD *result)
    {
      if ( LogicServerEventCollector::ENABLED )
      {
        result = (_QWORD *)result[3];
        if ( result )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 40LL))(result);
      }
      return result;
    }

    __int64 __fastcall LogicSpell::getServerEventOwnerAccountId(TextField *this)
    {
      __int64 v1; // x0
    
      if ( LogicServerEventCollector::ENABLED && (v1 = *((_QWORD *)this + 3)) != 0 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
      else
        return 0;
    }

    AskForAllianceStreamMessage *__fastcall LogicSpell::setListener(TextField *this, AskForAllianceStreamMessage *a2)
    {
      AskForAllianceStreamMessage *result; // x0
    
      result = (AskForAllianceStreamMessage *)*((_QWORD *)this + 3);
      if ( result != a2 )
      {
        if ( result )
        {
          (*(void (__fastcall **)(AskForAllianceStreamMessage *))(*(_QWORD *)result + 16LL))(result);
          result = (AskForAllianceStreamMessage *)*((_QWORD *)this + 3);
          if ( result )
            result = (AskForAllianceStreamMessage *)(*(__int64 (__fastcall **)(AskForAllianceStreamMessage *))(*(_QWORD *)result + 8LL))(result);
          *((_QWORD *)this + 3) = 0;
        }
        *((_QWORD *)this + 3) = a2;
      }
      return result;
    }

    _QWORD *__fastcall LogicSpell::addServerEventModifier(_QWORD *this, const TextField *a2)
    {
      if ( LogicServerEventCollector::ENABLED )
      {
        this = (_QWORD *)*(this + 3);
        if ( this )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, const TextField *))(*this + 56LL))(this, a2);
      }
      return this;
    }

    __int64 __fastcall LogicSpell::getListener(TextField *this)
    {
      return *((_QWORD *)this + 3);
    }

    bool __fastcall LogicSpell::hasEnoughMaterialToMaxLevel(InitState **this)
    {
      __int64 v2; // x20
      int MaxLevelIndex; // w0
      int v4; // w21
      __int64 Rarity; // x0
    
      v2 = *((unsigned int *)this + 2);
      MaxLevelIndex = LogicSpellData::getMaxLevelIndex(*this);
      v4 = 0;
      while ( (int)v2 < MaxLevelIndex )
      {
        Rarity = LogicSpellData::getRarity(*this);
        v4 += LogicRarityData::getUpgradeMaterialCount(Rarity, v2);
        v2 = (unsigned int)(v2 + 1);
        MaxLevelIndex = LogicSpellData::getMaxLevelIndex(*this);
      }
      return v4 <= *((_DWORD *)this + 4);
    }

    __int64 __fastcall LogicSpell::getMaxMaterialCount(TextField *this)
    {
      int v2; // w21
      __int64 v3; // x20
      __int64 v4; // x21
      __int64 Rarity; // x0
    
      v2 = *((_DWORD *)this + 2);
      if ( v2 > (int)LogicSpellData::getMaxLevelIndex(*(InitState **)this) )
        return 0;
      LODWORD(v3) = 0;
      LODWORD(v4) = v2 - 1;
      do
      {
        Rarity = LogicSpellData::getRarity(*(InitState **)this);
        v4 = (unsigned int)(v4 + 1);
        v3 = (unsigned int)LogicRarityData::getUpgradeMaterialCount(Rarity, v4) + (unsigned int)v3;
      }
      while ( (int)v4 < (int)LogicSpellData::getMaxLevelIndex(*(InitState **)this) );
      return v3;
    }

    __int64 __fastcall LogicSpell::addMaterial(TextField *this, int a2)
    {
      int MaxMaterialCount; // w0
      int v5; // w2
      int v6; // w0
      int v7; // w22
      __int64 v8; // x20
      int v9; // w8
      int MaterialCountForNextLevel; // w21
      int v11; // w23
      bool v12; // w8
      int v13; // w21
    
      MaxMaterialCount = LogicSpell::getMaxMaterialCount(this);
      v6 = LogicMath::max((LogicMath *)(unsigned int)(MaxMaterialCount - *((_DWORD *)this + 4)), 0, v5);
      v7 = *((_DWORD *)this + 4);
      if ( v6 >= a2 )
        v8 = 0;
      else
        v8 = (unsigned int)(a2 - v6);
      if ( v6 >= a2 )
        v9 = a2;
      else
        v9 = v6;
      *((_DWORD *)this + 4) = v9 + v7;
      if ( v9 >= 1 )
      {
        MaterialCountForNextLevel = LogicSpell::getMaterialCountForNextLevel(this);
        v11 = *((_DWORD *)this + 2);
        if ( v11 < (int)LogicSpellData::getMaxLevelIndex(*(InitState **)this) )
        {
          v12 = v7 < MaterialCountForNextLevel && *((_DWORD *)this + 4) >= MaterialCountForNextLevel;
          *((_BYTE *)this + 32) |= v12;
        }
        if ( *((_DWORD *)this + 4) < MaterialCountForNextLevel
          || (v13 = *((_DWORD *)this + 2), v13 >= (int)LogicSpellData::getMaxLevelIndex(*(InitState **)this)) )
        {
          *((_BYTE *)this + 32) = 0;
        }
      }
      return v8;
    }

    __int64 __fastcall LogicSpell::getMaterialCountForNextLevel(TextField *this)
    {
      int v2; // w22
      int MaxLevelIndex; // w21
      __int64 Rarity; // x20
      __int64 v5; // x1
    
      v2 = *((_DWORD *)this + 2);
      MaxLevelIndex = LogicSpellData::getMaxLevelIndex(*(InitState **)this);
      Rarity = LogicSpellData::getRarity(*(InitState **)this);
      if ( v2 >= MaxLevelIndex )
        v5 = LogicSpellData::getMaxLevelIndex(*(InitState **)this);
      else
        v5 = *((unsigned int *)this + 2);
      return LogicRarityData::getUpgradeMaterialCount(Rarity, v5);
    }

    bool __fastcall LogicSpell::isLevelMax(TextField *this)
    {
      int v1; // w19
    
      v1 = *((_DWORD *)this + 2);
      return v1 >= (int)LogicSpellData::getMaxLevelIndex(*(InitState **)this);
    }

    __int64 __fastcall LogicSpell::canUpgrade(TextField *this)
    {
      int v2; // w21
      int MaterialCountForNextLevel; // w20
      int v4; // w22
    
      v2 = *((_DWORD *)this + 4);
      MaterialCountForNextLevel = LogicSpell::getMaterialCountForNextLevel(this);
      v4 = *((_DWORD *)this + 2);
      return (v2 >= MaterialCountForNextLevel)
           & (unsigned __int8)(v4 < (int)LogicSpellData::getMaxLevelIndex(*(InitState **)this));
    }

    __int64 __fastcall LogicSpell::upgradeToNextLevel(TextField *this)
    {
      int v2; // w21
      int MaterialCountForNextLevel; // w20
      int v4; // w22
      __int64 result; // x0
    
      v2 = *((_DWORD *)this + 4);
      MaterialCountForNextLevel = LogicSpell::getMaterialCountForNextLevel(this);
      v4 = *((_DWORD *)this + 2);
      result = LogicSpellData::getMaxLevelIndex(*(InitState **)this);
      if ( v2 >= MaterialCountForNextLevel && v4 < (int)result )
      {
        result = LogicSpell::getMaterialCountForNextLevel(this);
        *((_DWORD *)this + 4) -= result;
        ++*((_DWORD *)this + 2);
        *((_BYTE *)this + 32) = 0;
      }
      return result;
    }

    void __fastcall LogicSpell::setMaterialCount(TextField *this, int a2, const char *a3)
    {
      Debugger::doAssert((Debugger *)(a2 >= 0), (bool)"", a3);
      *((_DWORD *)this + 4) = a2;
    }

    __int64 __fastcall LogicSpell::getLevelIndexIfAllMaterialUsed(InitState **this)
    {
      LogicGameObjectManagerListener *Rarity; // x20
      int v3; // w21
      __int64 i; // x19
    
      Rarity = (LogicGameObjectManagerListener *)LogicSpellData::getRarity(*this);
      v3 = *((_DWORD *)this + 4);
      for ( i = *((unsigned int *)this + 2);
            (int)i < (int)LogicRarityData::getMaxLevelIndex(Rarity)
         && v3 >= (int)LogicRarityData::getUpgradeMaterialCount(Rarity, i);
            i = (unsigned int)(i + 1) )
      {
        v3 -= LogicRarityData::getUpgradeMaterialCount(Rarity, i);
      }
      return i;
    }

    __int64 __fastcall LogicSpell::setRecentUseCount(__int64 this, int a2)
    {
      *(_DWORD *)(this + 40) = a2;
      return this;
    }

    __int64 __fastcall LogicSpell::getRecentUseCount(TextField *this)
    {
      return *((unsigned int *)this + 10);
    }

    __int64 __fastcall LogicSpell::clearNewUpgradeAvailable(__int64 this)
    {
      *(_BYTE *)(this + 32) = 0;
      return this;
    }

}; // end class LogicSpell
