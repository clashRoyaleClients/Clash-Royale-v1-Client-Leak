class KickAllianceMemberOkMessage
{
public:

    _QWORD *__fastcall KickAllianceMemberOkMessage::KickAllianceMemberOkMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100467B60;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall KickAllianceMemberOkMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 72));
    }

    __int64 __fastcall KickAllianceMemberOkMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readLong((ByteStream *)(a1 + 16));
      *(_QWORD *)(a1 + 72) = result;
      return result;
    }

    __int64 __fastcall KickAllianceMemberOkMessage::getMessageType(ShareReplayPopup *this)
    {
      return 24307;
    }

    __int64 __fastcall KickAllianceMemberOkMessage::getServiceNodeType(ShareReplayPopup *this)
    {
      return 11;
    }

    void __fastcall KickAllianceMemberOkMessage::destruct(__int64 a1)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 72) = 0;
    }

    void __fastcall KickAllianceMemberOkMessage::~KickAllianceMemberOkMessage(ShareReplayPopup *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall KickAllianceMemberOkMessage::~KickAllianceMemberOkMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class KickAllianceMemberOkMessage
