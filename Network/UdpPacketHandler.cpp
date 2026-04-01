class UdpPacketHandler
{
public:

    __int64 __fastcall UdpPacketHandler::UdpPacketHandler(__int64 a1, __int64 a2, const String *a3, const String *a4)
    {
      RC4Encrypter *v8; // x23
      RC4Encrypter *v9; // x23
    
      UdpReceiveBuffer::UdpReceiveBuffer((#1296 *)a1);
      UdpSendBuffer::UdpSendBuffer((UdpSendBuffer *)(a1 + 40));
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 112) = 0;
      *(_DWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      *(_DWORD *)(a1 + 140) = 1045220557;
      *(_BYTE *)(a1 + 160) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 128) = a2;
      v8 = (RC4Encrypter *)operator new(272);
      RC4Encrypter::RC4Encrypter(v8, a3, a4);
      *(_QWORD *)(a1 + 152) = v8;
      v9 = (RC4Encrypter *)operator new(272);
      RC4Encrypter::RC4Encrypter(v9, a3, a4);
      *(_QWORD *)(a1 + 144) = v9;
      return a1;
    }

    __int64 __fastcall UdpPacketHandler::UdpPacketHandler(__int64 a1, __int64 a2, const String *a3, const String *a4)
    {
      UdpPacketHandler::UdpPacketHandler(a1, a2, a3, a4);
      return a1;
    }

    __int64 __fastcall UdpPacketHandler::~UdpPacketHandler(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x20
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
    
      v3 = a1 + 144;
      v2 = *(_QWORD *)(a1 + 144);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)(a1 + 144) = 0;
      v4 = *(_QWORD *)(a1 + 152);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *(_DWORD *)(a1 + 108) = 0;
      *(_QWORD *)(a1 + 132) = 0;
      *(_QWORD *)(a1 + 124) = 0;
      *(_DWORD *)(a1 + 140) = 1045220557;
      *(_BYTE *)(v3 + 16) = 0;
      *(_QWORD *)v3 = 0;
      *(_QWORD *)(v3 + 8) = 0;
      v5 = *(_QWORD *)(a1 + 112);
      if ( v5 )
        operator delete[](v5);
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      v6 = *(_QWORD *)(a1 + 96);
      if ( v6 )
        operator delete[](v6);
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      UdpSendBuffer::~UdpSendBuffer((UdpSendBuffer *)(a1 + 40));
      UdpReceiveBuffer::~UdpReceiveBuffer((#1296 *)a1);
      return a1;
    }

    __int64 __fastcall UdpPacketHandler::~UdpPacketHandler(__int64 a1)
    {
      UdpPacketHandler::~UdpPacketHandler(a1);
      return a1;
    }

    void __fastcall UdpPacketHandler::receive(__int64 a1, #1293 *a2, __int64 a3, float a4)
    {
      __int64 AckMessageIdCount; // x22
      const char *AckMessageIds; // x0
      __int64 Messages; // x23
      __int64 v11; // x8
      __int64 v12; // x24
      __int64 v13; // x27
      AskForPlayingFacebookFriendsMessage *v14; // x28
      int MessageId; // w26
      __int64 v16; // x8
      __int64 v17; // x9
      int v19; // w10
      __int64 v20; // x8
      __int64 v21; // x27
      __int64 v22; // x28
      AskForPlayingFacebookFriendsMessage *v23; // x24
      mach_port_name_t *v24; // x23
      __int64 v25; // x24
      void (__fastcall *v26)(__int64, __int64, __int64, __int64); // x22
      ChallengePopup *MessageBytes; // x0
      __int64 ByteArray; // x25
      ChallengePopup *v29; // x0
      __int64 v30; // x26
      __int64 EncodingLength; // x0
      ChallengePopup *v32; // x0
      __int64 v33; // x24
      int v34; // w25
      int v35; // w25
      mach_port_name_t *v36; // x0
      __int64 v37; // x8
      String v38; // [xsp+10h] [xbp-D0h] BYREF
      String v39; // [xsp+28h] [xbp-B8h] BYREF
      char v40; // [xsp+47h] [xbp-99h] BYREF
      __int64 v41; // [xsp+48h] [xbp-98h] BYREF
      String v42; // [xsp+50h] [xbp-90h] BYREF
      String v43; // [xsp+68h] [xbp-78h] BYREF
    
      *(_BYTE *)(a1 + 160) = 1;
      AckMessageIdCount = UdpPacket::getAckMessageIdCount(a2);
      AckMessageIds = (const char *)UdpPacket::getAckMessageIds(a2);
      UdpSendBuffer::ackMessages((UdpSendBuffer *)(a1 + 40), AckMessageIds, AckMessageIdCount, a4);
      *(_DWORD *)(a1 + 124) = 0;
      Messages = UdpPacket::getMessages(a2);
      v11 = *(unsigned int *)(Messages + 12);
      if ( (int)v11 >= 1 )
      {
        v12 = 0;
        v13 = (int)v11;
        do
        {
          if ( (int)v11 <= v12 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v42, v12, v11);
            Debugger::error(&v42);
          }
          v14 = *(AskForPlayingFacebookFriendsMessage **)(*(_QWORD *)Messages + 8 * v12);
          v41 = 0;
          LogicArrayList<UdpMessage *>::set(Messages, v12, &v41);
          MessageId = UdpMessage::getMessageId(v14);
          v40 = MessageId;
          UdpReceiveBuffer::processMessage(a1, v14);
          v16 = *(int *)(a1 + 108);
          v17 = (int)v16 - 1;
          while ( v16-- >= 1 )
          {
            v19 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + v17--);
            if ( v19 == (unsigned __int8)MessageId )
            {
              Debugger::warning("UdpPacketHandler::receive id already in buffer");
              goto LABEL_10;
            }
          }
          LogicArrayList<char>::add(a1 + 96, &v40);
    LABEL_10:
          String::format(
            (String *)"UdpPacketHandler::receive got message: %d, ack count %d",
            (__int64)&v39,
            MessageId,
            AckMessageIdCount);
          Debugger::hudPrint(&v39, (const char *)0xFFFFFFFFLL);
          String::~String((__int64)&v39);
          ++v12;
          v11 = *(unsigned int *)(Messages + 12);
        }
        while ( v12 < v13 );
      }
      if ( !(_DWORD)v11 )
      {
        String::format((String *)"UdpPacketHandler::receive, ack count %d", (__int64)&v38, AckMessageIdCount);
        Debugger::hudPrint(&v38, (const char *)0xFFFFFFFFLL);
        String::~String((__int64)&v38);
      }
      if ( *(_DWORD *)(a1 + 108) )
        UdpPacketHandler::send((UdpPacketHandler *)a1);
      v20 = *(unsigned int *)(a1 + 124);
      if ( (int)v20 >= 1 )
      {
        v21 = 0;
        v22 = (int)v20;
        while ( 1 )
        {
          if ( (int)v20 <= v21 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v43, v21, v20);
            Debugger::error(&v43);
          }
          v23 = *(AskForPlayingFacebookFriendsMessage **)(*(_QWORD *)(a1 + 112) + 8 * v21);
          v24 = (mach_port_name_t *)UdpMessage::removePiranhaMessage(v23);
          if ( v23 )
          {
            UdpMessage::destruct(v23);
            operator delete(v23);
          }
          if ( v24 )
          {
            v25 = *(_QWORD *)(a1 + 144);
            v26 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v25 + 16LL);
            MessageBytes = (ChallengePopup *)PiranhaMessage::getMessageBytes(v24);
            ByteArray = ByteStream::getByteArray(MessageBytes);
            v29 = (ChallengePopup *)PiranhaMessage::getMessageBytes(v24);
            v30 = ByteStream::getByteArray(v29);
            EncodingLength = PiranhaMessage::getEncodingLength(v24);
            v26(v25, ByteArray, v30, EncodingLength);
            if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 32LL))(*(_QWORD *)(a1 + 144)) >= 1 )
            {
              v32 = (ChallengePopup *)PiranhaMessage::getMessageBytes(v24);
              v33 = ByteStream::getByteArray(v32);
              v34 = PiranhaMessage::getEncodingLength(v24);
              v35 = v34 - (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 32LL))(*(_QWORD *)(a1 + 144));
              v36 = PiranhaMessage::getMessageBytes(v24);
              ByteStream::setByteArray((__int64)v36, v33, v35);
            }
            v37 = *(_QWORD *)v24;
            if ( a3 )
            {
              (*(void (__fastcall **)(mach_port_name_t *))(v37 + 24))(v24);
              (*(void (__fastcall **)(__int64, mach_port_name_t *))(*(_QWORD *)a3 + 16LL))(a3, v24);
            }
            else
            {
              (*(void (__fastcall **)(mach_port_name_t *))(v37 + 48))(v24);
              (*(void (__fastcall **)(mach_port_name_t *))(*(_QWORD *)v24 + 8LL))(v24);
            }
          }
          if ( ++v21 >= v22 )
            break;
          v20 = *(unsigned int *)(a1 + 124);
        }
      }
    }

    __int64 __fastcall UdpPacketHandler::send(__int64 a1)
    {
      __int64 v2; // x20
      __int64 v3; // x0
      char *v4; // x0
      __int64 v5; // x24
      __int64 i; // x8
      __int64 NotAckedMessages; // x20
      __int64 v8; // x8
      __int64 v9; // x22
      __int64 v10; // x23
      UdpSocket *v11; // x0
      __int64 v12; // x19
      String v14; // [xsp+10h] [xbp-A0h] BYREF
      _BYTE v15[16]; // [xsp+28h] [xbp-88h] BYREF
      void *v16; // [xsp+38h] [xbp-78h]
      String v17; // [xsp+50h] [xbp-60h] BYREF
      String v18; // [xsp+68h] [xbp-48h] BYREF
    
      *(_DWORD *)(a1 + 136) = 0;
      UdpPacket::UdpPacket((#1293 *)v15);
      v2 = *(unsigned int *)(a1 + 108);
      if ( (int)v2 < 0LL )
        v3 = -1;
      else
        v3 = (int)v2;
      v4 = (char *)operator new[](v3);
      if ( (int)v2 >= 1 )
      {
        v5 = 0;
        for ( i = v2; ; i = *(unsigned int *)(a1 + 108) )
        {
          if ( (int)i <= v5 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v17, v5, i);
            Debugger::error(&v17);
          }
          v4[v5] = *(_BYTE *)(*(_QWORD *)(a1 + 96) + v5);
          if ( ++v5 >= (int)v2 )
            break;
        }
      }
      *(_DWORD *)(a1 + 108) = 0;
      UdpPacket::setAckMessageIds((#1293 *)v15, v4, v2);
      NotAckedMessages = UdpSendBuffer::getNotAckedMessages((#1298 *)(a1 + 40));
      v8 = *(unsigned int *)(NotAckedMessages + 12);
      if ( (int)v8 >= 1 )
      {
        v9 = 0;
        v10 = (int)v8;
        while ( 1 )
        {
          if ( (int)v8 <= v9 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v18, v9, v8);
            Debugger::error(&v18);
          }
          UdpPacket::addMessage(v15, *(_QWORD *)(*(_QWORD *)NotAckedMessages + 8 * v9++));
          if ( v9 >= v10 )
            break;
          v8 = *(unsigned int *)(NotAckedMessages + 12);
        }
      }
      v11 = *(UdpSocket **)(a1 + 128);
      if ( *(_BYTE *)(a1 + 160) )
        v12 = UdpSocket::send(v11, (UdpPacket *)v15);
      else
        v12 = UdpSocket::sendMaxPacket(v11, (UdpPacket *)v15);
      UdpPacket::clearMessagesDontDestruct((UdpPacket *)v15);
      if ( (_DWORD)v12 )
      {
        if ( *(_DWORD *)(NotAckedMessages + 12) )
        {
          String::format(
            (String *)"UDP packet sent successfully with %d messages",
            (__int64)&v14,
            *(unsigned int *)(NotAckedMessages + 12));
          Debugger::hudPrint(&v14, (const char *)0xFFFFFFFFLL);
          String::~String((__int64)&v14);
        }
      }
      else
      {
        Debugger::warning("Failed to send UDP packet");
      }
      UdpPacket::destruct((UdpPacket *)v15);
      if ( v16 )
        operator delete[](v16);
      return v12;
    }

    __int64 __fastcall UdpPacketHandler::send(__int64 a1, mach_port_name_t *a2, float a3)
    {
      int v6; // w22
      __int64 EncodingLength; // x21
      int v8; // w21
      __int64 v9; // x0
      __int64 v10; // x22
      __int64 v11; // x23
      void (__fastcall *v12)(__int64, __int64, __int64, __int64); // x25
      ChallengePopup *v13; // x0
      __int64 v14; // x24
      __int64 v15; // x0
      mach_port_name_t *v16; // x0
      ChallengePopup *MessageBytes; // x0
      __int64 ByteArray; // x0
    
      if ( !(unsigned int)PiranhaMessage::getEncodingLength(a2) )
      {
        (*(void (__fastcall **)(mach_port_name_t *))(*(_QWORD *)a2 + 16LL))(a2);
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 32LL))(*(_QWORD *)(a1 + 152));
        EncodingLength = PiranhaMessage::getEncodingLength(a2);
        if ( v6 < 1 )
        {
          MessageBytes = (ChallengePopup *)PiranhaMessage::getMessageBytes(a2);
          ByteArray = ByteStream::getByteArray(MessageBytes);
          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 152) + 24LL))(
            *(_QWORD *)(a1 + 152),
            ByteArray,
            ByteArray,
            EncodingLength);
        }
        else
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 32LL))(*(_QWORD *)(a1 + 152)) + EncodingLength;
          if ( v8 < 0LL )
            v9 = -1;
          else
            v9 = v8;
          v10 = operator new[](v9);
          v11 = *(_QWORD *)(a1 + 152);
          v12 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 24LL);
          v13 = (ChallengePopup *)PiranhaMessage::getMessageBytes(a2);
          v14 = ByteStream::getByteArray(v13);
          v15 = PiranhaMessage::getEncodingLength(a2);
          v12(v11, v14, v10, v15);
          v16 = PiranhaMessage::getMessageBytes(a2);
          ByteStream::setByteArray((__int64)v16, v10, v8);
        }
      }
      UdpSendBuffer::addMessage((UdpSendBuffer *)(a1 + 40), (PiranhaMessage *)a2, a3);
      return UdpPacketHandler::send(a1);
    }

    __int64 __fastcall UdpPacketHandler::update(__int64 a1, float a2)
    {
      float v2; // s2
      float v3; // s0
    
      v2 = *(float *)(a1 + 140);
      v3 = *(float *)(a1 + 136) + a2;
      *(float *)(a1 + 136) = v3;
      if ( v3 > v2 )
        return UdpPacketHandler::send(a1);
      return a1;
    }

    __int64 __fastcall UdpPacketHandler::setHeartbeatTimeSetting(__int64 this, float a2)
    {
      *(float *)(this + 140) = a2;
      return this;
    }

}; // end class UdpPacketHandler
