class SectorCommandMessage
{
public:

    void __fastcall SectorCommandMessage::SectorCommandMessage(SectorCommandMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100462740;
      v1[9] = 0;
      v1[10] = 0;
    }

    __int64 __fastcall SectorCommandMessage::encode(RankingEntry *this)
    {
      const LogicCommand *v2; // x2
    
      PiranhaMessage::encode(this);
      ByteStream::writeVInt((RankingEntry *)((char *)this + 16), *((_DWORD *)this + 20));
      ByteStream::writeVInt((RankingEntry *)((char *)this + 16), *((_DWORD *)this + 21));
      if ( !*((_QWORD *)this + 9) )
        return ByteStream::writeBoolean((RankingEntry *)((char *)this + 16), 0);
      ByteStream::writeBoolean((RankingEntry *)((char *)this + 16), 1);
      return LogicCommandManager::encodeCommand((RankingEntry *)((char *)this + 16), *((ChecksumEncoder **)this + 9), v2);
    }

    __int64 __fastcall SectorCommandMessage::decode(RankingEntry *this)
    {
      void (__fastcall ***v2)(_QWORD); // x0
      __int64 v3; // x0
      __int64 result; // x0
      bool v5; // w3
    
      PiranhaMessage::decode(this);
      *((_DWORD *)this + 20) = ByteStream::readVInt((RankingEntry *)((char *)this + 16));
      *((_DWORD *)this + 21) = ByteStream::readVInt((RankingEntry *)((char *)this + 16));
      v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 9);
      if ( v2 )
      {
        (**v2)(v2);
        v3 = *((_QWORD *)this + 9);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        *((_QWORD *)this + 9) = 0;
      }
      result = ByteStream::isAtEnd((RankingEntry *)((char *)this + 16));
      if ( (result & 1) == 0 )
      {
        result = ByteStream::readBoolean((RankingEntry *)((char *)this + 16));
        if ( (_DWORD)result )
        {
          result = LogicCommandManager::decodeCommand((RankingEntry *)((char *)this + 16), (#1225 *)1, 0, v5);
          *((_QWORD *)this + 9) = result;
        }
      }
      return result;
    }

    __int64 __fastcall SectorCommandMessage::getMessageType(RankingEntry *this)
    {
      return 12904;
    }

    PvpMatchmakeNotificationMessage *__fastcall SectorCommandMessage::setCommand(
            RankingEntry *this,
            PvpMatchmakeNotificationMessage *a2)
    {
      PvpMatchmakeNotificationMessage *result; // x0
    
      result = (PvpMatchmakeNotificationMessage *)*((_QWORD *)this + 9);
      if ( result != a2 )
      {
        if ( result )
        {
          (**(void (__fastcall ***)(PvpMatchmakeNotificationMessage *))result)(result);
          result = (PvpMatchmakeNotificationMessage *)*((_QWORD *)this + 9);
          if ( result )
            result = (PvpMatchmakeNotificationMessage *)(*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)result + 16LL))(result);
          *((_QWORD *)this + 9) = 0;
        }
        *((_QWORD *)this + 9) = a2;
      }
      return result;
    }

    __int64 __fastcall SectorCommandMessage::getServiceNodeType(RankingEntry *this)
    {
      return 27;
    }

    __int64 __fastcall SectorCommandMessage::destruct(RankingEntry *this)
    {
      __int64 result; // x0
      __int64 *v3; // x19
      __int64 v4; // t1
    
      PiranhaMessage::destruct(this);
      v4 = *((_QWORD *)this + 9);
      v3 = (__int64 *)((char *)this + 72);
      result = v4;
      if ( v4 )
      {
        (**(void (__fastcall ***)(__int64))result)(result);
        result = *v3;
        if ( *v3 )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        *v3 = 0;
      }
      *v3 = 0;
      v3[1] = 0;
      return result;
    }

    __int64 __fastcall SectorCommandMessage::setClientChecksum(__int64 this, int a2)
    {
      *(_DWORD *)(this + 80) = a2;
      return this;
    }

    __int64 __fastcall SectorCommandMessage::setClientTick(__int64 this, int a2)
    {
      *(_DWORD *)(this + 84) = a2;
      return this;
    }

    void __fastcall SectorCommandMessage::~SectorCommandMessage(RankingEntry *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall SectorCommandMessage::~SectorCommandMessage(RankingEntry *this)
    {
      operator delete(this);
    }

}; // end class SectorCommandMessage
