class LogicGameObjectFactory
{
public:

    __int64 __fastcall LogicGameObjectFactory::createGameObjectByClassID(#1401 *this, const AreaEffectObject *a2)
    {
      __int64 GameObjectByData; // x19
      __int64 v4; // x0
      const char *v5; // x1
      const String *v6; // x1
      String v8; // [xsp+18h] [xbp-28h] BYREF
    
      GameObjectByData = LogicGameObjectFactory::createGameObjectByData(this, a2);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)GameObjectByData + 88LL))(GameObjectByData) != (_DWORD)a2 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)GameObjectByData + 88LL))(GameObjectByData);
        String::format((String *)"Created invalid object %d, %d", v5, v4, a2);
        Debugger::error((Debugger *)&v8, v6);
      }
      return GameObjectByData;
    }

    LoginMessage *__fastcall LogicGameObjectFactory::createGameObjectByData(#1401 *this, const AreaEffectObject *a2)
    {
      LogicDataTables *v3; // x0
      __int64 SummonerData; // x0
      LoginMessage *v5; // x20
      __int64 DataType; // x0
      const char *v7; // x1
      const String *v8; // x1
      String v10; // [xsp+8h] [xbp-28h] BYREF
    
      v3 = (LogicDataTables *)(*(__int64 (__fastcall **)(#1401 *, const AreaEffectObject *))(*(_QWORD *)this + 56LL))(
                                this,
                                a2);
      if ( !(_DWORD)v3 )
      {
        DataType = LogicData::getDataType(this);
        if ( (int)DataType > 12 )
        {
          if ( (int)DataType > 41 )
          {
            if ( (_DWORD)DataType == 42 )
            {
              v5 = (LoginMessage *)operator new(120);
              LogicDeco::LogicDeco(v5, this);
              return v5;
            }
            if ( (_DWORD)DataType == 44 )
            {
              v5 = (LoginMessage *)operator new(136);
              LogicSpawnPoint::LogicSpawnPoint(v5, this);
              return v5;
            }
          }
          else
          {
            if ( (_DWORD)DataType == 13 )
            {
              v5 = (LoginMessage *)operator new(144);
              LogicEgg::LogicEgg(v5, this);
              return v5;
            }
            if ( (_DWORD)DataType == 22 )
            {
              v5 = (LoginMessage *)operator new(152);
              LogicAreaEffectObject::LogicAreaEffectObject(v5, this);
              return v5;
            }
          }
        }
        else if ( (_DWORD)DataType == 10 )
        {
          v5 = (LoginMessage *)operator new(216);
          LogicProjectile::LogicProjectile(v5, this);
          return v5;
        }
        String::format((String *)"createGameObjectByData invalid type %d", v7, DataType);
        Debugger::error((Debugger *)&v10, v8);
      }
      SummonerData = LogicDataTables::getSummonerData(v3);
      if ( (unsigned int)LogicData::equals(this, SummonerData) )
      {
        v5 = (LoginMessage *)operator new(336);
        LogicSummoner::LogicSummoner(v5, this);
      }
      else
      {
        v5 = (LoginMessage *)operator new(216);
        LogicCharacter::LogicCharacter(v5, this);
      }
      return v5;
    }

}; // end class LogicGameObjectFactory
