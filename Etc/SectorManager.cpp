class SectorManager
{
public:

    void __fastcall SectorManager::SectorManager(SectorManager *this, #1028 *a2)
    {
      LogicSummoner *v3; // x0
    
      v3 = LogicGameListener::LogicGameListener(this);
      *(_QWORD *)v3 = off_100463B00;
      *((_DWORD *)v3 + 6) = 0;
      *((_QWORD *)v3 + 1) = 0;
      *((_QWORD *)v3 + 2) = 0;
      *((_QWORD *)v3 + 1) = a2;
    }

    void __fastcall SectorManager::~SectorManager(LogicRegionData *this)
    {
      *(_QWORD *)this = off_100463B00;
      *((_DWORD *)this + 6) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
    }

    // attributes: thunk
    void __fastcall SectorManager::~SectorManager(LogicRegionData *this)
    {
      operator delete(this);
    }

    __int64 __fastcall SectorManager::receiveSectorHeartbeat(vm_address_t *this, LogicEffectData *a2)
    {
      __int64 Instance; // x20
      __int64 v4; // x21
      __int64 v5; // x22
      __int64 Checksum; // x0
      char v7; // w23
      __int64 result; // x0
    
      Instance = GameMode::getInstance(this);
      v4 = *(_QWORD *)(Instance + 112);
      v5 = 10 * (unsigned int)SectorHeartbeatMessage::getServerTurn(a2);
      Checksum = SectorHeartbeatMessage::getChecksum(a2);
      v7 = *(_BYTE *)(Instance + 228);
      *(_BYTE *)(Instance + 228) = 1;
      result = LogicGameMode::endTurnReceivedFromServer(v4, v5, Checksum, a2);
      *(_BYTE *)(Instance + 228) = v7;
      return result;
    }

    __int64 __fastcall SectorManager::updateLogicTick(LogicGameMode **this, float a2, float a3)
    {
      __int64 updated; // x20
      #844 *Tick; // x0
    
      updated = LogicGameMode::updateSectorTicks(*(this + 1), a2, a3);
      if ( *((_QWORD *)*(this + 1) + 21) )
      {
        if ( (unsigned int)LogicGameMode::isOutOfSync() )
        {
          Tick = (#844 *)LogicGameMode::getTick(*(this + 1));
          if ( (unsigned int)SectorManager::requestSectorState(Tick, 0, (int)Tick) )
            LogicGameMode::removeRequestFullUpdateFlag(*(this + 1));
        }
      }
      return updated;
    }

    __int64 __fastcall SectorManager::requestSectorState(#844 *this, bool a2, int a3)
    {
      RequestSectorStateMessage *v4; // x19
    
      v4 = (RequestSectorStateMessage *)operator new(72);
      RequestSectorStateMessage::RequestSectorStateMessage(v4);
      RequestSectorStateMessage::setClientTick(v4, a3);
      return MessageManager::sendUdpMessage((MessageManager *)MessageManager::sm_pInstance, v4);
    }

    __int64 __fastcall SectorManager::receiveSectorState(#844 *this, #949 *a2)
    {
      ByteStream *ByteStream; // x20
    
      ByteStream = (ByteStream *)PiranhaMessage::getByteStream(a2);
      ByteStream::resetOffset(ByteStream);
      if ( (*(unsigned __int8 (__fastcall **)(ByteStream *))(*(_QWORD *)ByteStream + 208LL))(ByteStream) == 1 )
        return SectorManager::receiveCompressedSectorState(this, ByteStream);
      else
        return SectorManager::receiveSectorState(this, ByteStream);
    }

    __int64 __fastcall SectorManager::receiveCompressedSectorState(#844 *this, #1225 *a2)
    {
      int Offset; // w21
      int Length; // w0
      const char *v6; // x22
      const char *v7; // x2
      __int64 ByteArray; // x0
      unsigned __int8 **v9; // x3
      const char *v10; // x1
      int v11; // w8
      _BYTE v13[48]; // [xsp+8h] [xbp-58h] BYREF
      const char *v14; // [xsp+38h] [xbp-28h] BYREF
    
      v14 = 0;
      Offset = ByteStream::getOffset(a2);
      Length = ByteStream::getLength(a2);
      v6 = (const char *)(unsigned int)(Length - Offset);
      Debugger::doAssert((Debugger *)(Length - Offset > 0), (bool)"", v7);
      ByteArray = ByteStream::getByteArray(a2);
      v11 = ZlibHelper::decompressInMySQLFormat((__darwin_pthread_handler_rec *)(ByteArray + Offset), v6, (int)&v14, v9);
      if ( v11 < 0 )
      {
        if ( v14 )
          operator delete[](v14);
        v14 = 0;
        Debugger::error((__siginfo *)"Error uncompressing full update", v10);
      }
      ByteStream::ByteStream((ByteStream *)v13, v14, v11);
      if ( v14 )
        operator delete[](v14);
      v14 = 0;
      SectorManager::receiveSectorState(this, (#1225 *)v13);
      return ByteStream::destruct((#1225 *)v13);
    }

    TextField *__fastcall SectorManager::receiveSectorState(vm_address_t *this, #1225 *a2)
    {
      __int64 Instance; // x22
      char v5; // w23
      LogicGameMode *v6; // x20
      TextField *result; // x0
      unsigned int v8; // w19
      UnbindFacebookAccountMessage *v9; // x20
      const char *v10; // x2
      TextField *v11; // x21
      tween::Bounce *Avatar; // x0
      __int64 AccountId; // x22
      int HigherInt; // w23
      int LowerInt; // w0
    
      Instance = GameMode::getInstance(this);
      v5 = *(_BYTE *)(Instance + 228);
      *(_BYTE *)(Instance + 228) = 1;
      v6 = *(LogicGameMode **)(Instance + 112);
      LogicGameMode::decode(v6, a2, 1, (LogicGameListener *)this);
      *(_BYTE *)(Instance + 228) = v5;
      LODWORD(a2) = *(_DWORD *)(*((_QWORD *)v6 + 21) + 16LL);
      result = (TextField *)GameStateManager::getInstance();
      *((_DWORD *)result + 4) = (_DWORD)a2;
      ++*(_DWORD *)v6;
      if ( LogicServerEventCollector::ENABLED )
      {
        v8 = 0;
        v9 = (UnbindFacebookAccountMessage *)*((_QWORD *)v6 + 21);
        do
        {
          result = (TextField *)LogicBattle::getDeck(v9, v8);
          v11 = result;
          if ( result )
          {
            Avatar = (tween::Bounce *)LogicBattle::getAvatar(v9, v8, v10);
            AccountId = LogicClientAvatar::getAccountId(Avatar);
            HigherInt = LogicLong::getHigherInt(AccountId);
            LowerInt = LogicLong::getLowerInt(AccountId);
            result = LogicSpellDeck::initForServerEvents(v11, HigherInt, LowerInt);
          }
          ++v8;
        }
        while ( v8 != 2 );
      }
      return result;
    }

    __int64 __fastcall SectorManager::loadTilemap(LogicRegionData *this, const ChangeAllianceMemberRoleOkMessage *a2)
    {
      return RenderSystem::loadTilemap(a2, a2);
    }

}; // end class SectorManager
