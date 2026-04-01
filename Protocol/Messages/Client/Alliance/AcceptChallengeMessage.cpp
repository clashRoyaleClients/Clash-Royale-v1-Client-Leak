class AcceptChallengeMessage
{
public:

    _QWORD *__fastcall AcceptChallengeMessage::AcceptChallengeMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100469CD0;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall AcceptChallengeMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return LogicLong::encode(*(_QWORD *)(a1 + 72), a1 + 16);
    }

    __int64 __fastcall AcceptChallengeMessage::decode(__int64 a1)
    {
      LogicLong *v2; // x20
    
      PiranhaMessage::decode((#1242 *)a1);
      v2 = (LogicLong *)operator new(8);
      LogicLong::LogicLong(v2);
      *(_QWORD *)(a1 + 72) = v2;
      return LogicLong::decode(v2, (ByteStream *)(a1 + 16));
    }

    __int64 AcceptChallengeMessage::getMessageType()
    {
      return 14120;
    }

    __int64 AcceptChallengeMessage::getServiceNodeType()
    {
      return 9;
    }

    void __fastcall AcceptChallengeMessage::destruct(__int64 a1)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 72) = 0;
    }

    __int64 __fastcall AcceptChallengeMessage::setEntryId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    void AcceptChallengeMessage::~AcceptChallengeMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall AcceptChallengeMessage::~AcceptChallengeMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class AcceptChallengeMessage
