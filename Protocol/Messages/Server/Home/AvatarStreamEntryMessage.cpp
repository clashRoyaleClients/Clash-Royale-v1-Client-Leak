class AvatarStreamEntryMessage
{
public:

    _QWORD *__fastcall AvatarStreamEntryMessage::AvatarStreamEntryMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100472C40;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall AvatarStreamEntryMessage::encode(__int64 a1)
    {
      int v2; // w0
    
      PiranhaMessage::encode((#1242 *)a1);
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 32LL))(*(_QWORD *)(a1 + 72));
      ByteStream::writeVInt((ChallengePopup *)(a1 + 16), v2);
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 16LL))(*(_QWORD *)(a1 + 72), a1 + 16);
    }

    __int64 __fastcall AvatarStreamEntryMessage::decode(__int64 a1)
    {
      #1341 *VInt; // x0
      int v3; // w1
      __int64 StreamEntryByType; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      VInt = (#1341 *)ByteStream::readVInt((#1225 *)(a1 + 16));
      StreamEntryByType = AvatarStreamEntryFactory::createStreamEntryByType(VInt, v3);
      *(_QWORD *)(a1 + 72) = StreamEntryByType;
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)StreamEntryByType + 24LL))(StreamEntryByType, a1 + 16);
    }

    __int64 AvatarStreamEntryMessage::getMessageType()
    {
      return 24412;
    }

    __int64 AvatarStreamEntryMessage::getServiceNodeType()
    {
      return 11;
    }

    __int64 __fastcall AvatarStreamEntryMessage::removeStreamEntry(LogicBuyCardCommand *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    __int64 __fastcall AvatarStreamEntryMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      result = *(_QWORD *)(a1 + 72);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 72LL))(result);
        result = *(_QWORD *)(a1 + 72);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *(_QWORD *)(a1 + 72) = 0;
      }
      *(_QWORD *)(a1 + 72) = 0;
      return result;
    }

    void __fastcall AvatarStreamEntryMessage::~AvatarStreamEntryMessage(LogicBuyCardCommand *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AvatarStreamEntryMessage::~AvatarStreamEntryMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class AvatarStreamEntryMessage
