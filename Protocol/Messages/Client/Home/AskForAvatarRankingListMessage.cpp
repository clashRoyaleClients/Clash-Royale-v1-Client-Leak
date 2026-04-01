class AskForAvatarRankingListMessage
{
public:

    void __fastcall AskForAvatarRankingListMessage::AskForAvatarRankingListMessage(AskForAvatarRankingListMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100465278;
      v1[9] = 0;
    }

    __int64 __fastcall AskForAvatarRankingListMessage::encode(SpellButton *this)
    {
      PiranhaMessage::encode(this);
      if ( !*((_QWORD *)this + 9) )
        return ByteStream::writeBoolean((SpellButton *)((char *)this + 16), 0);
      ByteStream::writeBoolean((SpellButton *)((char *)this + 16), 1);
      return ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
    }

    __int64 __fastcall AskForAvatarRankingListMessage::decode(SpellButton *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readBoolean((SpellButton *)((char *)this + 16));
      if ( (_DWORD)result )
      {
        result = ByteStream::readLong((SpellButton *)((char *)this + 16));
        *((_QWORD *)this + 9) = result;
      }
      return result;
    }

    __int64 __fastcall AskForAvatarRankingListMessage::getMessageType(SpellButton *this)
    {
      return 14403;
    }

    __int64 __fastcall AskForAvatarRankingListMessage::getServiceNodeType(SpellButton *this)
    {
      return 13;
    }

    void __fastcall AskForAvatarRankingListMessage::destruct(SpellButton *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall AskForAvatarRankingListMessage::~AskForAvatarRankingListMessage(SpellButton *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AskForAvatarRankingListMessage::~AskForAvatarRankingListMessage(SpellButton *this)
    {
      operator delete(this);
    }

}; // end class AskForAvatarRankingListMessage
