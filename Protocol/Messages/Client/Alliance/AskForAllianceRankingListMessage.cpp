class AskForAllianceRankingListMessage
{
public:

    void __fastcall AskForAllianceRankingListMessage::AskForAllianceRankingListMessage(
            AskForAllianceRankingListMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_10045E6E0;
      *(_QWORD *)(v1 + 72) = 0;
      *(_BYTE *)(v1 + 80) = 0;
    }

    __int64 __fastcall AskForAllianceRankingListMessage::encode(ChatToAllianceStreamMessage *this)
    {
      PiranhaMessage::encode(this);
      ByteStream::writeBoolean((ChatToAllianceStreamMessage *)((char *)this + 16), *((_BYTE *)this + 80));
      if ( !*((_QWORD *)this + 9) )
        return ByteStream::writeBoolean((ChatToAllianceStreamMessage *)((char *)this + 16), 0);
      ByteStream::writeBoolean((ChatToAllianceStreamMessage *)((char *)this + 16), 1);
      return ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
    }

    __int64 __fastcall AskForAllianceRankingListMessage::decode(ChatToAllianceStreamMessage *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_BYTE *)this + 80) = ByteStream::readBoolean((ChatToAllianceStreamMessage *)((char *)this + 16));
      result = ByteStream::readBoolean((ChatToAllianceStreamMessage *)((char *)this + 16));
      if ( (_DWORD)result )
      {
        result = ByteStream::readLong((ChatToAllianceStreamMessage *)((char *)this + 16));
        *((_QWORD *)this + 9) = result;
      }
      return result;
    }

    __int64 __fastcall AskForAllianceRankingListMessage::getMessageType(ChatToAllianceStreamMessage *this)
    {
      return 14401;
    }

    __int64 __fastcall AskForAllianceRankingListMessage::getServiceNodeType(ChatToAllianceStreamMessage *this)
    {
      return 13;
    }

    __int64 __fastcall AskForAllianceRankingListMessage::setAllianceId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    void __fastcall AskForAllianceRankingListMessage::destruct(ChatToAllianceStreamMessage *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
      *((_BYTE *)this + 80) = 0;
    }

    void __fastcall AskForAllianceRankingListMessage::~AskForAllianceRankingListMessage(ChatToAllianceStreamMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AskForAllianceRankingListMessage::~AskForAllianceRankingListMessage(ChatToAllianceStreamMessage *this)
    {
      operator delete(this);
    }

}; // end class AskForAllianceRankingListMessage
