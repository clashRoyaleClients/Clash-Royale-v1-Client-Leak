class PvpMatchmakeNotificationMessage
{
public:

    __int64 __fastcall PvpMatchmakeNotificationMessage::PvpMatchmakeNotificationMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_10045EF00;
      *(_DWORD *)(result + 68) = 0;
      return result;
    }

    __int64 __fastcall PvpMatchmakeNotificationMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = 0;
      return result;
    }

    __int64 __fastcall PvpMatchmakeNotificationMessage::getMessageType(AppleBillingRequestMessage *this)
    {
      return 22957;
    }

    __int64 __fastcall PvpMatchmakeNotificationMessage::getServiceNodeType(AppleBillingRequestMessage *this)
    {
      return 9;
    }

    __int64 __fastcall PvpMatchmakeNotificationMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
    }

    __int64 __fastcall PvpMatchmakeNotificationMessage::decode(AppleBillingRequestMessage *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readVInt((AppleBillingRequestMessage *)((char *)this + 16));
      *((_DWORD *)this + 17) = result;
      return result;
    }

    __int64 __fastcall PvpMatchmakeNotificationMessage::getLevelIndex(AppleBillingRequestMessage *this)
    {
      return *((unsigned int *)this + 17);
    }

    void __fastcall PvpMatchmakeNotificationMessage::~PvpMatchmakeNotificationMessage(AppleBillingRequestMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall PvpMatchmakeNotificationMessage::~PvpMatchmakeNotificationMessage(AppleBillingRequestMessage *this)
    {
      operator delete(this);
    }

}; // end class PvpMatchmakeNotificationMessage
