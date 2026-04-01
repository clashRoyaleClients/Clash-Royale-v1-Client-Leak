class HomeBattleReplayMessage
{
public:

    __int64 __fastcall HomeBattleReplayMessage::HomeBattleReplayMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_DWORD *)(result + 68) = -1;
      *(_QWORD *)result = off_10046E678;
      *(_BYTE *)(result + 82) = 0;
      *(_WORD *)(result + 80) = 0;
      *(_QWORD *)(result + 72) = 0;
      *(_QWORD *)(result + 84) = -1;
      return result;
    }

    __int64 __fastcall HomeBattleReplayMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 68));
      LogicLong::encode(*(_QWORD *)(a1 + 72), a1 + 16);
      ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 84));
      ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 88));
      ByteStream::writeBoolean((ByteStream *)(a1 + 16), *(_BYTE *)(a1 + 80));
      ByteStream::writeBoolean((ByteStream *)(a1 + 16), *(_BYTE *)(a1 + 81));
      return ByteStream::writeBoolean((ByteStream *)(a1 + 16), *(_BYTE *)(a1 + 82));
    }

    __int64 __fastcall HomeBattleReplayMessage::decode(__int64 a1)
    {
      void *v2; // x0
      LogicLong *v3; // x20
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 72) = 0;
      v3 = (LogicLong *)operator new(8);
      LogicLong::LogicLong(v3);
      *(_QWORD *)(a1 + 72) = v3;
      *(_DWORD *)(a1 + 68) = ByteStream::readInt((#1225 *)(a1 + 16));
      LogicLong::decode(*(LogicLong **)(a1 + 72), (ByteStream *)(a1 + 16));
      *(_DWORD *)(a1 + 84) = ByteStream::readInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 88) = ByteStream::readInt((#1225 *)(a1 + 16));
      *(_BYTE *)(a1 + 80) = ByteStream::readBoolean((ByteStream *)(a1 + 16));
      *(_BYTE *)(a1 + 81) = ByteStream::readBoolean((ByteStream *)(a1 + 16));
      result = ByteStream::readBoolean((ByteStream *)(a1 + 16));
      *(_BYTE *)(a1 + 82) = result;
      return result;
    }

    __int64 __fastcall HomeBattleReplayMessage::getMessageType(AskForAvatarRankingListMessage *this)
    {
      return 14114;
    }

    __int64 __fastcall HomeBattleReplayMessage::getServiceNodeType(AskForAvatarRankingListMessage *this)
    {
      return 9;
    }

    __int64 __fastcall HomeBattleReplayMessage::setReplayShardId(__int64 this, int a2)
    {
      *(_DWORD *)(this + 68) = a2;
      return this;
    }

    void __fastcall HomeBattleReplayMessage::setReplayId(__int64 a1, __int64 a2)
    {
      void *v4; // x0
    
      v4 = *(void **)(a1 + 72);
      if ( v4 )
        operator delete(v4);
      *(_QWORD *)(a1 + 72) = a2;
    }

    void __fastcall HomeBattleReplayMessage::destruct(__int64 a1)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
        operator delete(v2);
      *(_DWORD *)(a1 + 68) = -1;
      *(_BYTE *)(a1 + 82) = 0;
      *(_WORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 84) = -1;
    }

    void __fastcall HomeBattleReplayMessage::~HomeBattleReplayMessage(AskForAvatarRankingListMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall HomeBattleReplayMessage::~HomeBattleReplayMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class HomeBattleReplayMessage
