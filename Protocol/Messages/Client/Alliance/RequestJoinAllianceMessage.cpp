class RequestJoinAllianceMessage
{
public:

    void __fastcall RequestJoinAllianceMessage::RequestJoinAllianceMessage(RequestJoinAllianceMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_10046F3E0;
      *(_DWORD *)(v1 + 88) = 0;
      *(_QWORD *)(v1 + 72) = 0;
      *(_QWORD *)(v1 + 80) = 0;
    }

    __int64 __fastcall RequestJoinAllianceMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 72));
      ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 80));
      return ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 88));
    }

    __int64 __fastcall RequestJoinAllianceMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_QWORD *)(a1 + 72) = ByteStream::readLong((ByteStream *)(a1 + 16));
      *(_QWORD *)(a1 + 80) = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      result = ByteStream::readInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 88) = result;
      return result;
    }

    __int64 __fastcall RequestJoinAllianceMessage::getMessageType(FilterEffect *this)
    {
      return 14317;
    }

    __int64 __fastcall RequestJoinAllianceMessage::getServiceNodeType(FilterEffect *this)
    {
      return 9;
    }

    __int64 __fastcall RequestJoinAllianceMessage::setAllianceId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    __int64 __fastcall RequestJoinAllianceMessage::setMessage(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 80) = a2;
      return this;
    }

    void __fastcall RequestJoinAllianceMessage::destruct(FilterEffect *this)
    {
      void *v2; // x0
      char *v3; // x20
      void *v4; // x19
    
      PiranhaMessage::destruct(this);
      v3 = (char *)this + 72;
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
      v4 = (void *)*((_QWORD *)this + 10);
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      *((_DWORD *)v3 + 4) = 0;
      *(_QWORD *)v3 = 0;
      *((_QWORD *)v3 + 1) = 0;
    }

    void __fastcall RequestJoinAllianceMessage::~RequestJoinAllianceMessage(FilterEffect *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall RequestJoinAllianceMessage::~RequestJoinAllianceMessage(FilterEffect *this)
    {
      operator delete(this);
    }

}; // end class RequestJoinAllianceMessage
