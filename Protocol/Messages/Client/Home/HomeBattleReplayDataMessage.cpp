class HomeBattleReplayDataMessage
{
public:

    _QWORD *__fastcall HomeBattleReplayDataMessage::HomeBattleReplayDataMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100469818;
      result[9] = 0;
      result[10] = 0;
      return result;
    }

    __int64 __fastcall HomeBattleReplayDataMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 84));
      return ByteStream::writeBytes((ByteStream *)(a1 + 16), *(char **)(a1 + 72), *(_DWORD *)(a1 + 80));
    }

    __int64 __fastcall HomeBattleReplayDataMessage::decode(__int64 a1)
    {
      __int64 v2; // x0
      int BytesLength; // w0
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_DWORD *)(a1 + 84) = ByteStream::readVInt((#1225 *)(a1 + 16));
      v2 = *(_QWORD *)(a1 + 72);
      if ( v2 )
        operator delete[](v2);
      BytesLength = ByteStream::readBytesLength((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 80) = BytesLength;
      result = ByteStream::readBytes((ByteStream *)(a1 + 16), BytesLength, 900000);
      *(_QWORD *)(a1 + 72) = result;
      return result;
    }

    __int64 HomeBattleReplayDataMessage::getMessageType()
    {
      return 24114;
    }

    __int64 HomeBattleReplayDataMessage::getServiceNodeType()
    {
      return 9;
    }

    __int64 __fastcall HomeBattleReplayDataMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      return result;
    }

    __int64 __fastcall HomeBattleReplayDataMessage::removeCompressedReplayDataJSON(__int64 a1)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      return v1;
    }

    __int64 __fastcall HomeBattleReplayDataMessage::getCompressedReplayDataJSONLength(__int64 a1)
    {
      return *(unsigned int *)(a1 + 80);
    }

    void HomeBattleReplayDataMessage::~HomeBattleReplayDataMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall HomeBattleReplayDataMessage::~HomeBattleReplayDataMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class HomeBattleReplayDataMessage
