class AllianceStreamEntryMessage
{
public:

    _QWORD *__fastcall AllianceStreamEntryMessage::AllianceStreamEntryMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100461990;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall AllianceStreamEntryMessage::encode(__int64 a1)
    {
      int v2; // w0
    
      PiranhaMessage::encode((#1242 *)a1);
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 32LL))(*(_QWORD *)(a1 + 72));
      ByteStream::writeVInt((#1225 *)(a1 + 16), v2);
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 16LL))(*(_QWORD *)(a1 + 72), a1 + 16);
    }

    __int64 __fastcall AllianceStreamEntryMessage::decode(__int64 a1)
    {
      int VInt; // w0
      DonateStreamEntry *StreamEntryByType; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      VInt = ByteStream::readVInt((#1225 *)(a1 + 16));
      StreamEntryByType = StreamEntryFactory::createStreamEntryByType(VInt);
      *(_QWORD *)(a1 + 72) = StreamEntryByType;
      return (*(__int64 (__fastcall **)(DonateStreamEntry *, __int64))(*(_QWORD *)StreamEntryByType + 24LL))(
               StreamEntryByType,
               a1 + 16);
    }

    __int64 AllianceStreamEntryMessage::getMessageType()
    {
      return 24312;
    }

    __int64 AllianceStreamEntryMessage::getServiceNodeType()
    {
      return 11;
    }

    __int64 __fastcall AllianceStreamEntryMessage::removeStreamEntry(__int64 a1)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = 0;
      return v1;
    }

    __int64 __fastcall AllianceStreamEntryMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      result = *(_QWORD *)(a1 + 72);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 40LL))(result);
        result = *(_QWORD *)(a1 + 72);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *(_QWORD *)(a1 + 72) = 0;
      }
      *(_QWORD *)(a1 + 72) = 0;
      return result;
    }

    void AllianceStreamEntryMessage::~AllianceStreamEntryMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceStreamEntryMessage::~AllianceStreamEntryMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class AllianceStreamEntryMessage
