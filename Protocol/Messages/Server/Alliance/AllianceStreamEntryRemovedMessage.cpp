class AllianceStreamEntryRemovedMessage
{
public:

    void __fastcall AllianceStreamEntryRemovedMessage::AllianceStreamEntryRemovedMessage(
            AllianceStreamEntryRemovedMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_10045F2E8;
      v1[9] = 0;
    }

    __int64 __fastcall AllianceStreamEntryRemovedMessage::encode(ChallengeStreamEntry *this)
    {
      PiranhaMessage::encode(this);
      return ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
    }

    __int64 __fastcall AllianceStreamEntryRemovedMessage::decode(ChallengeStreamEntry *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readLong((ChallengeStreamEntry *)((char *)this + 16));
      *((_QWORD *)this + 9) = result;
      return result;
    }

    __int64 __fastcall AllianceStreamEntryRemovedMessage::getStreamEntryId(ChallengeStreamEntry *this)
    {
      return *((_QWORD *)this + 9);
    }

    __int64 __fastcall AllianceStreamEntryRemovedMessage::getMessageType(ChallengeStreamEntry *this)
    {
      return 24318;
    }

    __int64 __fastcall AllianceStreamEntryRemovedMessage::getServiceNodeType(ChallengeStreamEntry *this)
    {
      return 11;
    }

    void __fastcall AllianceStreamEntryRemovedMessage::destruct(ChallengeStreamEntry *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall AllianceStreamEntryRemovedMessage::~AllianceStreamEntryRemovedMessage(ChallengeStreamEntry *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceStreamEntryRemovedMessage::~AllianceStreamEntryRemovedMessage(ChallengeStreamEntry *this)
    {
      operator delete(this);
    }

}; // end class AllianceStreamEntryRemovedMessage
