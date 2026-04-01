class AskForBattleReplayStreamMessage
{
public:

    _QWORD *__fastcall AskForBattleReplayStreamMessage::AskForBattleReplayStreamMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10046D270;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall AskForBattleReplayStreamMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 72));
    }

    __int64 __fastcall AskForBattleReplayStreamMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readLong((ByteStream *)(a1 + 16));
      *(_QWORD *)(a1 + 72) = result;
      return result;
    }

    __int64 __fastcall AskForBattleReplayStreamMessage::getMessageType(CreditsPopup *this)
    {
      return 14406;
    }

    __int64 __fastcall AskForBattleReplayStreamMessage::getServiceNodeType(CreditsPopup *this)
    {
      return 9;
    }

    void __fastcall AskForBattleReplayStreamMessage::destruct(__int64 a1)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 72) = 0;
    }

    __int64 __fastcall AskForBattleReplayStreamMessage::setHomeId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    void __fastcall AskForBattleReplayStreamMessage::~AskForBattleReplayStreamMessage(CreditsPopup *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AskForBattleReplayStreamMessage::~AskForBattleReplayStreamMessage(CreditsPopup *this)
    {
      operator delete(this);
    }

}; // end class AskForBattleReplayStreamMessage
