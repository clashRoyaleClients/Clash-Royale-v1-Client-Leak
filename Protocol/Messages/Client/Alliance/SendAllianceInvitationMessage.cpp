class SendAllianceInvitationMessage
{
public:

    _QWORD *__fastcall SendAllianceInvitationMessage::SendAllianceInvitationMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100470510;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall SendAllianceInvitationMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 72));
    }

    __int64 __fastcall SendAllianceInvitationMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readLong((ByteStream *)(a1 + 16));
      *(_QWORD *)(a1 + 72) = result;
      return result;
    }

    __int64 __fastcall SendAllianceInvitationMessage::getMessageType(ChangeHomeNameMessage *this)
    {
      return 14322;
    }

    __int64 __fastcall SendAllianceInvitationMessage::getServiceNodeType(ChangeHomeNameMessage *this)
    {
      return 11;
    }

    __int64 __fastcall SendAllianceInvitationMessage::setAvatarId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    void __fastcall SendAllianceInvitationMessage::destruct(__int64 a1)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 72) = 0;
    }

    void __fastcall SendAllianceInvitationMessage::~SendAllianceInvitationMessage(ChangeHomeNameMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall SendAllianceInvitationMessage::~SendAllianceInvitationMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class SendAllianceInvitationMessage
