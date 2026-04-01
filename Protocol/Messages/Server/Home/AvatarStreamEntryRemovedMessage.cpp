class AvatarStreamEntryRemovedMessage
{
public:

    void __fastcall AvatarStreamEntryRemovedMessage::AvatarStreamEntryRemovedMessage(AvatarStreamEntryRemovedMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100463AB8;
      v1[9] = 0;
    }

    __int64 __fastcall AvatarStreamEntryRemovedMessage::encode(#843 *this)
    {
      PiranhaMessage::encode(this);
      return ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
    }

    __int64 __fastcall AvatarStreamEntryRemovedMessage::decode(KickAllianceMemberMessage *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readLong((KickAllianceMemberMessage *)((char *)this + 16));
      *((_QWORD *)this + 9) = result;
      return result;
    }

    __int64 __fastcall AvatarStreamEntryRemovedMessage::getStreamEntryId(KickAllianceMemberMessage *this)
    {
      return *((_QWORD *)this + 9);
    }

    __int64 __fastcall AvatarStreamEntryRemovedMessage::getMessageType(KickAllianceMemberMessage *this)
    {
      return 24418;
    }

    __int64 __fastcall AvatarStreamEntryRemovedMessage::getServiceNodeType(KickAllianceMemberMessage *this)
    {
      return 11;
    }

    void __fastcall AvatarStreamEntryRemovedMessage::destruct(KickAllianceMemberMessage *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall AvatarStreamEntryRemovedMessage::~AvatarStreamEntryRemovedMessage(KickAllianceMemberMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AvatarStreamEntryRemovedMessage::~AvatarStreamEntryRemovedMessage(KickAllianceMemberMessage *this)
    {
      operator delete(this);
    }

}; // end class AvatarStreamEntryRemovedMessage
