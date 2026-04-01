class UdpMessage
{
public:

    void __fastcall UdpMessage::UdpMessage(UdpMessage *this)
    {
      *(_BYTE *)this = 0;
      *((_QWORD *)this + 1) = 0;
    }

    void __fastcall UdpMessage::UdpMessage(UdpMessage *this, char a2)
    {
      *((_QWORD *)this + 1) = 0;
      *(_BYTE *)this = a2;
    }

    __int64 __fastcall UdpMessage::destruct(AskForPlayingFacebookFriendsMessage *this)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 1);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 48LL))(result);
        result = *((_QWORD *)this + 1);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 1) = 0;
      }
      *(_BYTE *)this = 0;
      *((_QWORD *)this + 1) = 0;
      return result;
    }

    __int64 __fastcall UdpMessage::getMessageId(AskForPlayingFacebookFriendsMessage *this)
    {
      return (unsigned int)*(char *)this;
    }

    __int64 __fastcall UdpMessage::getPiranhaMessage(AskForPlayingFacebookFriendsMessage *this)
    {
      return *((_QWORD *)this + 1);
    }

    __int64 __fastcall UdpMessage::removePiranhaMessage(AskForPlayingFacebookFriendsMessage *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 1);
      *((_QWORD *)this + 1) = 0;
      return v1;
    }

    __int64 __fastcall UdpMessage::setPiranhaMessage(__int64 a1, __int64 a2)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 8);
      if ( result != a2 )
      {
        if ( result )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 48LL))(result);
          result = *(_QWORD *)(a1 + 8);
          if ( result )
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
          *(_QWORD *)(a1 + 8) = 0;
        }
        *(_QWORD *)(a1 + 8) = a2;
      }
      return result;
    }

    void __fastcall UdpMessage::decode(
            AskForPlayingFacebookFriendsMessage *this,
            ChallengePopup *a2,
            LogicCancelChestOpenCommand *a3)
    {
      __int64 v6; // x21
      __int64 v7; // x0
      __int64 v8; // x21
      __int64 MessageBytes; // x20
      __int64 v10; // x0
      String v11; // [xsp+8h] [xbp-38h] BYREF
    
      *(_BYTE *)this = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 208LL))(a2);
      v6 = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
      v7 = (*(__int64 (__fastcall **)(LogicCancelChestOpenCommand *, __int64))(*(_QWORD *)a3 + 24LL))(a3, v6);
      *((_QWORD *)this + 1) = v7;
      if ( v7 )
      {
        v8 = (*(__int64 (__fastcall **)(ChallengePopup *))(*(_QWORD *)a2 + 152LL))(a2);
        MessageBytes = PiranhaMessage::getMessageBytes(*((mach_port_name_t **)this + 1));
        v10 = (*(__int64 (__fastcall **)(ChallengePopup *, __int64, __int64))(*(_QWORD *)a2 + 200LL))(a2, v8, 900000);
        ByteStream::setByteArray(MessageBytes, v10, v8);
      }
      else
      {
        String::format((String *)"UdpMessage::decode unable to read message type %d", (__int64)&v11, v6);
        Debugger::warning(&v11);
        String::~String((__int64)&v11);
      }
    }

    __int64 __fastcall UdpMessage::encode(char *a1, __int64 a2)
    {
      void (__fastcall *v4)(__int64, __int64); // x21
      __int64 v5; // x0
      __int64 EncodingLength; // x21
      ChallengePopup *ByteStream; // x0
      __int64 ByteArray; // x1
      __int64 (__fastcall *v10)(__int64, __int64, __int64); // [xsp+8h] [xbp-28h]
    
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, (unsigned int)*a1);
      v4 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 88LL);
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 40LL))(*((_QWORD *)a1 + 1));
      v4(a2, v5);
      EncodingLength = PiranhaMessage::getEncodingLength(*((mach_port_name_t **)a1 + 1));
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 88LL))(a2, EncodingLength);
      v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 184LL);
      ByteStream = (ChallengePopup *)PiranhaMessage::getByteStream(*((mach_port_name_t **)a1 + 1));
      ByteArray = ByteStream::getByteArray(ByteStream);
      return v10(a2, ByteArray, EncodingLength);
    }

    bool __fastcall UdpMessage::isMoreRecent(char *a1, int a2)
    {
      int v2; // w8
    
      v2 = *a1;
      if ( v2 > a2 && v2 - a2 < 128 )
        return 1;
      if ( v2 < a2 )
        return a2 - v2 > 127;
      return 0;
    }

}; // end class UdpMessage
