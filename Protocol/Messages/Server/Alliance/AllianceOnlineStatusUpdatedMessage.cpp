class AllianceOnlineStatusUpdatedMessage
{
public:

    __int64 __fastcall AllianceOnlineStatusUpdatedMessage::AllianceOnlineStatusUpdatedMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_10046C178;
      *(_DWORD *)(result + 68) = 0;
      return result;
    }

    __int64 __fastcall AllianceOnlineStatusUpdatedMessage::getMembersOnline(__int64 a1)
    {
      return *(unsigned int *)(a1 + 68);
    }

    __int64 __fastcall AllianceOnlineStatusUpdatedMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
    }

    __int64 __fastcall AllianceOnlineStatusUpdatedMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 68) = result;
      return result;
    }

    __int64 AllianceOnlineStatusUpdatedMessage::getMessageType()
    {
      return 20207;
    }

    __int64 AllianceOnlineStatusUpdatedMessage::getServiceNodeType()
    {
      return 9;
    }

    __int64 __fastcall AllianceOnlineStatusUpdatedMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = 0;
      return result;
    }

    void AllianceOnlineStatusUpdatedMessage::~AllianceOnlineStatusUpdatedMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceOnlineStatusUpdatedMessage::~AllianceOnlineStatusUpdatedMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class AllianceOnlineStatusUpdatedMessage
