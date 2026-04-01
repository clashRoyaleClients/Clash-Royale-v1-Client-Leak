class RespondToAllianceJoinRequestMessage
{
public:

    void __fastcall RespondToAllianceJoinRequestMessage::RespondToAllianceJoinRequestMessage(
            RespondToAllianceJoinRequestMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_100464E10;
      *(_QWORD *)(v1 + 72) = 0;
      *(_BYTE *)(v1 + 80) = 0;
      *(_QWORD *)(v1 + 88) = 0;
    }

    __int64 __fastcall RespondToAllianceJoinRequestMessage::encode(MainHUD::PageButton *this)
    {
      PiranhaMessage::encode(this);
      ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
      return ByteStream::writeBoolean((MainHUD::PageButton *)((char *)this + 16), *((_BYTE *)this + 80));
    }

    __int64 __fastcall RespondToAllianceJoinRequestMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_QWORD *)(a1 + 72) = ByteStream::readLong((ByteStream *)(a1 + 16));
      result = ByteStream::readBoolean((ByteStream *)(a1 + 16));
      *(_BYTE *)(a1 + 80) = result;
      return result;
    }

    __int64 RespondToAllianceJoinRequestMessage::getMessageType()
    {
      return 14321;
    }

    __int64 RespondToAllianceJoinRequestMessage::getServiceNodeType()
    {
      return 11;
    }

    void __fastcall RespondToAllianceJoinRequestMessage::destruct(__int64 a1)
    {
      void *v2; // x0
      void *v3; // x20
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 72) = 0;
      v3 = *(void **)(a1 + 88);
      if ( v3 )
      {
        String::~String(*(String **)(a1 + 88));
        operator delete(v3);
      }
      *(_QWORD *)(a1 + 72) = 0;
      *(_BYTE *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }

    __int64 __fastcall RespondToAllianceJoinRequestMessage::setStreamId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    void RespondToAllianceJoinRequestMessage::~RespondToAllianceJoinRequestMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall RespondToAllianceJoinRequestMessage::~RespondToAllianceJoinRequestMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class RespondToAllianceJoinRequestMessage
