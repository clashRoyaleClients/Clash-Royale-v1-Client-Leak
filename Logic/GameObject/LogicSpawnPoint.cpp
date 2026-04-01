class LogicSpawnPoint
{
public:

    void __fastcall LogicSpawnPoint::LogicSpawnPoint(LogicSpawnPoint *this, const #885 *a2)
    {
      LogicGameObject::LogicGameObject(this, a2);
      *(_QWORD *)this = off_10045F140;
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 31) = 0;
      *((_WORD *)this + 64) = 1;
      *((_DWORD *)this + 30) = LogicSpawnPointData::getFirstWait(a2);
    }

    __int64 __fastcall LogicSpawnPoint::destruct(Debugger *this)
    {
      __int64 result; // x0
    
      result = LogicGameObject::destruct(this);
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 31) = 0;
      *((_WORD *)this + 64) = 1;
      return result;
    }

    __int64 __fastcall LogicSpawnPoint::encode(Debugger *this, #1226 *a2)
    {
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 128));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 129));
      LogicGameObject::encode(this, a2);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 30));
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 31));
    }

    __int64 __fastcall LogicSpawnPoint::decode(Debugger *this, #1225 *a2)
    {
      __int64 result; // x0
    
      *((_BYTE *)this + 128) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      *((_BYTE *)this + 129) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      LogicGameObject::decode(this, a2);
      *((_DWORD *)this + 30) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 31) = result;
      return result;
    }

    __int64 __fastcall LogicSpawnPoint::canBeTargeted(Debugger *this)
    {
      return 0;
    }

    __int64 __fastcall LogicSpawnPoint::tick(Debugger *this)
    {
      __int64 result; // x0
      #885 *Data; // x20
      int v4; // w21
      int v5; // w8
      int Wait; // w0
      int v7; // w1
      const #916 *Character; // x22
      LogicMath *v9; // x24
      LogicMath *v10; // x25
      __int64 OwnerAccountId; // x23
      UnbindFacebookAccountMessage *LogicBattle; // x26
      int HigherInt; // w27
      int LowerInt; // w0
      UnbindFacebookAccountMessage *v15; // x0
      const char *v16; // x2
      #962 *Avatar; // x0
      __int64 ExpLevelData; // x23
      UnbindFacebookAccountMessage *v19; // x26
      const #1236 *v20; // x0
      GameMode *v21; // x22
      __int64 OriginSpell; // x24
      TextField *v23; // x0
      int TroopLevel; // w0
      #837 *LogicGameObjectManager; // x0
      int v26; // w8
    
      result = LogicGameObject::tick(this);
      if ( *((_BYTE *)this + 128) )
      {
        if ( !*((_BYTE *)this + 129) )
        {
          Data = (#885 *)LogicGameObject::getData(this);
          result = LogicSpawnPointData::getCharacterCount(Data);
          v4 = result;
          if ( (int)result >= 1 )
          {
            v5 = *((_DWORD *)this + 30) - 50;
            *((_DWORD *)this + 30) = v5;
            if ( v5 <= 0 )
            {
              while ( 1 )
              {
                Wait = LogicSpawnPointData::getWait(Data, *((_DWORD *)this + 31));
                v7 = *((_DWORD *)this + 31);
                *((_DWORD *)this + 30) += Wait;
                Character = (const #916 *)LogicSpawnPointData::getCharacter(Data, v7);
                v9 = (LogicMath *)LogicGameObject::getX(this);
                v10 = (LogicMath *)LogicGameObject::getY(this);
                OwnerAccountId = LogicGameObject::getOwnerAccountId(this);
                LogicBattle = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(this);
                HigherInt = LogicLong::getHigherInt(OwnerAccountId);
                LowerInt = LogicLong::getLowerInt(OwnerAccountId);
                LODWORD(OwnerAccountId) = LogicBattle::getAccountIndex(LogicBattle, HigherInt, LowerInt);
                v15 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(this);
                Avatar = (#962 *)LogicBattle::getAvatar(v15, OwnerAccountId, v16);
                ExpLevelData = LogicClientAvatar::getExpLevelData(Avatar);
                v19 = (UnbindFacebookAccountMessage *)LogicGameObject::getLogicBattle(this);
                v20 = (const #1236 *)LogicGameObject::getOwnerAccountId(this);
                v21 = LogicBattle::spawnObject(v19, Character, v9, v10, v20, 0, 0);
                OriginSpell = LogicGameObject::getOriginSpell(this);
                if ( LogicServerEventCollector::ENABLED && LogicGameObject::getOriginSpell(this) )
                {
                  v23 = (TextField *)LogicGameObject::getOriginSpell(this);
                  LogicSpell::increaseServerEvent(v23, 4, 1);
                }
                TroopLevel = LogicExpLevelData::getTroopLevel(ExpLevelData);
                LogicCharacter::setLevelIndex(v21, (unsigned int)(TroopLevel - 1), OriginSpell);
                LogicGameObjectManager = (#837 *)LogicGameObject::getLogicGameObjectManager(this);
                result = LogicGameObjectManager::addLogicGameObject(LogicGameObjectManager, v21, 1);
                v26 = (*((_DWORD *)this + 31) + 1) % v4;
                *((_DWORD *)this + 31) = v26;
                if ( !v26 )
                {
                  result = LogicSpawnPointData::isDontLoop(Data);
                  if ( (_DWORD)result )
                    break;
                }
                if ( *((int *)this + 30) > 0 )
                  return result;
              }
              *((_BYTE *)this + 129) = 1;
            }
          }
        }
      }
      return result;
    }

    // attributes: thunk
    __int64 __fastcall LogicSpawnPoint::getSpawnPointData(Debugger *this)
    {
      return LogicGameObject::getData(this);
    }

    __int64 __fastcall LogicSpawnPoint::shouldDestruct(Debugger *this)
    {
      return *((unsigned __int8 *)this + 129);
    }

    __int64 __fastcall LogicSpawnPoint::getType(Debugger *this)
    {
      return 1;
    }

    __int64 __fastcall LogicSpawnPoint::getRadius(Debugger *this)
    {
      return 0;
    }

    __int64 __fastcall LogicSpawnPoint::setEnabled(__int64 this, char a2)
    {
      *(_BYTE *)(this + 128) = a2;
      return this;
    }

    // attributes: thunk
    __int64 __fastcall LogicSpawnPoint::initForServerEvents(Debugger *this, const TextField *a2)
    {
      return LogicGameObject::setOriginSpell(this, a2);
    }

    void __fastcall LogicSpawnPoint::~LogicSpawnPoint(Debugger *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicSpawnPoint::~LogicSpawnPoint(Debugger *this)
    {
      operator delete(this);
    }

}; // end class LogicSpawnPoint
