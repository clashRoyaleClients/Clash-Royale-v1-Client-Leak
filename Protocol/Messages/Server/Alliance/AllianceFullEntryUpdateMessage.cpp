class AllianceFullEntryUpdateMessage
{
public:

    __int64 __fastcall AllianceFullEntryUpdateMessage::AllianceFullEntryUpdateMessage(__int64 a1)
    {
      PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)a1 = off_10046E978;
      String::String((String *)(a1 + 72));
      String::operator=(a1 + 72, "");
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      return a1;
    }

    // attributes: thunk
    void __fastcall AllianceFullEntryUpdateMessage::AllianceFullEntryUpdateMessage(AllianceFullEntryUpdateMessage *this)
    {
      __ZN30AllianceFullEntryUpdateMessageC2Ev((__int64)this);
    }

    __int64 __fastcall AllianceFullEntryUpdateMessage::destruct(__int64 a1)
    {
      void *v2; // x0
    
      v2 = *(void **)(a1 + 104);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 104) = 0;
      String::operator=(a1 + 72, "");
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      return PiranhaMessage::destruct((#1242 *)a1);
    }

    __int64 __fastcall AllianceFullEntryUpdateMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeString((ByteStream *)(a1 + 16), (String *)(a1 + 72));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 96));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 100));
      if ( !*(_QWORD *)(a1 + 104) )
        return ByteStream::writeBoolean((ByteStream *)(a1 + 16), 0);
      ByteStream::writeBoolean((ByteStream *)(a1 + 16), 1);
      return ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 104));
    }

    __int64 __fastcall AllianceFullEntryUpdateMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      ByteStream::readStringReference((ByteStream *)(a1 + 16), 1000);
      String::operator=((String *)(a1 + 72));
      String::~String();
      *(_DWORD *)(a1 + 96) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 100) = ByteStream::readVInt((#1225 *)(a1 + 16));
      result = ByteStream::readBoolean((ByteStream *)(a1 + 16));
      if ( (_DWORD)result )
      {
        result = ByteStream::readLong((ByteStream *)(a1 + 16));
        *(_QWORD *)(a1 + 104) = result;
      }
      return result;
    }

    __int64 __fastcall AllianceFullEntryUpdateMessage::getMessageType(Particle *this)
    {
      return 24324;
    }

    __int64 __fastcall AllianceFullEntryUpdateMessage::getServiceNodeType(Particle *this)
    {
      return 11;
    }

    _QWORD *__fastcall AllianceFullEntryUpdateMessage::~AllianceFullEntryUpdateMessage(_QWORD *a1)
    {
      *a1 = off_10046E978;
      String::~String();
      return a1;
    }

    void __fastcall AllianceFullEntryUpdateMessage::~AllianceFullEntryUpdateMessage(_QWORD *a1)
    {
      *a1 = off_10046E978;
      String::~String();
      operator delete(a1);
    }

}; // end class AllianceFullEntryUpdateMessage
