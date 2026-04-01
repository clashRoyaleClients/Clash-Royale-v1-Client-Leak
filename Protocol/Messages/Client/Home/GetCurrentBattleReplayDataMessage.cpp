class GetCurrentBattleReplayDataMessage
{
public:

    _QWORD *__fastcall GetCurrentBattleReplayDataMessage::GetCurrentBattleReplayDataMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10046CDF8;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall GetCurrentBattleReplayDataMessage::encode(#1242 *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall GetCurrentBattleReplayDataMessage::decode(#1242 *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 GetCurrentBattleReplayDataMessage::getMessageType()
    {
      return 12905;
    }

    __int64 GetCurrentBattleReplayDataMessage::getServiceNodeType()
    {
      return 27;
    }

    // attributes: thunk
    __int64 __fastcall GetCurrentBattleReplayDataMessage::destruct(#1242 *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void GetCurrentBattleReplayDataMessage::~GetCurrentBattleReplayDataMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall GetCurrentBattleReplayDataMessage::~GetCurrentBattleReplayDataMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class GetCurrentBattleReplayDataMessage
