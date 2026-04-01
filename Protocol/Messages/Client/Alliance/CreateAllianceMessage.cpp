class CreateAllianceMessage
{
public:

    void __fastcall CreateAllianceMessage::CreateAllianceMessage(CreateAllianceMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100460978;
      v1[12] = 0;
      v1[13] = 0;
      v1[10] = 0;
      v1[11] = 0;
      v1[9] = 0;
    }

    __int64 __fastcall CreateAllianceMessage::encode(GameMain *this)
    {
      PiranhaMessage::encode(this);
      ByteStream::writeString((GameMain *)((char *)this + 16), *((String **)this + 9));
      ByteStream::writeString((GameMain *)((char *)this + 16), *((String **)this + 10));
      ByteStreamHelper::writeDataReference((_DWORD)this + 16, *((#916 **)this + 11));
      ByteStream::writeVInt((GameMain *)((char *)this + 16), *((_DWORD *)this + 26));
      ByteStream::writeVInt((GameMain *)((char *)this + 16), *((_DWORD *)this + 27));
      return ByteStreamHelper::writeDataReference((int)this + 16, *((#916 **)this + 12));
    }

    __int64 __fastcall CreateAllianceMessage::decode(GameMain *this)
    {
      #1225 *v2; // x1
      #1225 *v3; // x1
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_QWORD *)this + 9) = ByteStream::readString((GameMain *)((char *)this + 16), 60);
      *((_QWORD *)this + 10) = ByteStream::readString((GameMain *)((char *)this + 16), 560);
      *((_QWORD *)this + 11) = ByteStreamHelper::readDataReference((GameMain *)((char *)this + 16), v2);
      *((_DWORD *)this + 26) = ByteStream::readVInt((GameMain *)((char *)this + 16));
      *((_DWORD *)this + 27) = ByteStream::readVInt((GameMain *)((char *)this + 16));
      result = ByteStreamHelper::readDataReference((GameMain *)((char *)this + 16), v3);
      *((_QWORD *)this + 12) = result;
      return result;
    }

    __int64 __fastcall CreateAllianceMessage::getMessageType(GameMain *this)
    {
      return 14301;
    }

    __int64 __fastcall CreateAllianceMessage::getServiceNodeType(GameMain *this)
    {
      return 9;
    }

    __int64 __fastcall CreateAllianceMessage::setAllianceBadgeData(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 88) = a2;
      return result;
    }

    __int64 __fastcall CreateAllianceMessage::setAllianceName(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 72) = a2;
      return this;
    }

    __int64 __fastcall CreateAllianceMessage::setAllianceDescription(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 80) = a2;
      return this;
    }

    __int64 __fastcall CreateAllianceMessage::setAllianceType(__int64 this, int a2)
    {
      *(_DWORD *)(this + 104) = a2;
      return this;
    }

    void __fastcall CreateAllianceMessage::destruct(GameMain *this)
    {
      void *v2; // x20
      _QWORD *v3; // x21
      String *v4; // x19
    
      PiranhaMessage::destruct(this);
      v3 = (_QWORD *)((char *)this + 72);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
      {
        String::~String(*((String **)this + 9));
        operator delete(v2);
      }
      *((_QWORD *)this + 9) = 0;
      v4 = (String *)*((_QWORD *)this + 10);
      if ( v4 )
      {
        String::~String(v4);
        operator delete(v4);
      }
      v3[3] = 0;
      v3[4] = 0;
      v3[1] = 0;
      v3[2] = 0;
      *v3 = 0;
    }

    __int64 __fastcall CreateAllianceMessage::setRequiredScore(__int64 this, int a2)
    {
      *(_DWORD *)(this + 108) = a2;
      return this;
    }

    __int64 __fastcall CreateAllianceMessage::setRegion(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 96) = a2;
      return result;
    }

    void __fastcall CreateAllianceMessage::~CreateAllianceMessage(GameMain *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall CreateAllianceMessage::~CreateAllianceMessage(GameMain *this)
    {
      operator delete(this);
    }

}; // end class CreateAllianceMessage
