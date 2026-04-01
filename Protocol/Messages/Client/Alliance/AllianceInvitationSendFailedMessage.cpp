class AllianceInvitationSendFailedMessage
{
public:

    __int64 __fastcall AllianceInvitationSendFailedMessage::AllianceInvitationSendFailedMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_100464E58;
      *(_DWORD *)(result + 68) = 0;
      return result;
    }

    __int64 __fastcall AllianceInvitationSendFailedMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
    }

    __int64 __fastcall AllianceInvitationSendFailedMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 68) = result;
      return result;
    }

    __int64 AllianceInvitationSendFailedMessage::getMessageType()
    {
      return 24321;
    }

    __int64 AllianceInvitationSendFailedMessage::getServiceNodeType()
    {
      return 11;
    }

    __int64 __fastcall AllianceInvitationSendFailedMessage::getReason(__int64 a1)
    {
      return *(unsigned int *)(a1 + 68);
    }

    __int64 __fastcall AllianceInvitationSendFailedMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = 0;
      return result;
    }

    void AllianceInvitationSendFailedMessage::~AllianceInvitationSendFailedMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceInvitationSendFailedMessage::~AllianceInvitationSendFailedMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class AllianceInvitationSendFailedMessage
