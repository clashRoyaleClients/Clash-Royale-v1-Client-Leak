class AskForAvatarLocalRankingListMessage
{
public:

    void __fastcall AskForAvatarLocalRankingListMessage::AskForAvatarLocalRankingListMessage(
            AskForAvatarLocalRankingListMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_10045F378;
      v1[9] = 0;
    }

    __int64 __fastcall AskForAvatarLocalRankingListMessage::encode(DonateStreamEntry *this)
    {
      PiranhaMessage::encode(this);
      if ( !*((_QWORD *)this + 9) )
        return ByteStream::writeBoolean((DonateStreamEntry *)((char *)this + 16), 0);
      ByteStream::writeBoolean((DonateStreamEntry *)((char *)this + 16), 1);
      return ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
    }

    __int64 __fastcall AskForAvatarLocalRankingListMessage::decode(DonateStreamEntry *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readBoolean((DonateStreamEntry *)((char *)this + 16));
      if ( (_DWORD)result )
      {
        result = ByteStream::readLong((DonateStreamEntry *)((char *)this + 16));
        *((_QWORD *)this + 9) = result;
      }
      return result;
    }

    __int64 __fastcall AskForAvatarLocalRankingListMessage::getMessageType(DonateStreamEntry *this)
    {
      return 14404;
    }

    __int64 __fastcall AskForAvatarLocalRankingListMessage::getServiceNodeType(DonateStreamEntry *this)
    {
      return 13;
    }

    void __fastcall AskForAvatarLocalRankingListMessage::destruct(DonateStreamEntry *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall AskForAvatarLocalRankingListMessage::~AskForAvatarLocalRankingListMessage(DonateStreamEntry *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AskForAvatarLocalRankingListMessage::~AskForAvatarLocalRankingListMessage(DonateStreamEntry *this)
    {
      operator delete(this);
    }

}; // end class AskForAvatarLocalRankingListMessage
