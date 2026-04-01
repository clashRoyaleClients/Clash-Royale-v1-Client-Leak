class LoginMessage
{
public:

    void __fastcall LoginMessage::LoginMessage(LoginMessage *this)
    {
      PiranhaMessage::PiranhaMessage((__int64)this, 3);
      *(_QWORD *)this = off_100467370;
      String::String((String *)this + 6);
      String::String((String *)((char *)this + 200));
      String::String((String *)((char *)this + 224));
      String::String((String *)((char *)this + 248));
      LoginMessage::initializeMembers(this);
    }

    // attributes: thunk
    void __fastcall LoginMessage::LoginMessage(LoginMessage *this)
    {
      __ZN12LoginMessageC2Ev(this);
    }

    __int64 __fastcall LoginMessage::destruct(OfferChestPopup *this)
    {
      void *v2; // x0
      void *v3; // x20
      void *v4; // x20
      void *v5; // x20
      void *v6; // x20
      void *v7; // x20
      void *v8; // x20
      void *v9; // x20
      void *v10; // x20
      void *v11; // x20
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      v3 = (void *)*((_QWORD *)this + 10);
      if ( v3 )
      {
        String::~String();
        operator delete(v3);
      }
      v4 = (void *)*((_QWORD *)this + 13);
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      v5 = (void *)*((_QWORD *)this + 14);
      if ( v5 )
      {
        String::~String();
        operator delete(v5);
      }
      v6 = (void *)*((_QWORD *)this + 15);
      if ( v6 )
      {
        String::~String();
        operator delete(v6);
      }
      v7 = (void *)*((_QWORD *)this + 16);
      if ( v7 )
      {
        String::~String();
        operator delete(v7);
      }
      v8 = (void *)*((_QWORD *)this + 17);
      if ( v8 )
      {
        String::~String();
        operator delete(v8);
      }
      v9 = (void *)*((_QWORD *)this + 22);
      if ( v9 )
      {
        String::~String();
        operator delete(v9);
      }
      v10 = (void *)*((_QWORD *)this + 23);
      if ( v10 )
      {
        String::~String();
        operator delete(v10);
      }
      v11 = (void *)*((_QWORD *)this + 35);
      if ( v11 )
      {
        String::~String();
        operator delete(v11);
      }
      return LoginMessage::initializeMembers(this);
    }

    __int64 __fastcall LoginMessage::encode(OfferChestPopup *this)
    {
      PiranhaMessage::encode(this);
      ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
      ByteStream::writeString((OfferChestPopup *)((char *)this + 16), *((String **)this + 10));
      ByteStream::writeVInt((OfferChestPopup *)((char *)this + 16), *((_DWORD *)this + 22));
      ByteStream::writeVInt((OfferChestPopup *)((char *)this + 16), *((_DWORD *)this + 23));
      ByteStream::writeVInt((OfferChestPopup *)((char *)this + 16), *((_DWORD *)this + 24));
      ByteStream::writeString((OfferChestPopup *)((char *)this + 16), *((String **)this + 13));
      ByteStream::writeString((OfferChestPopup *)((char *)this + 16), *((String **)this + 14));
      ByteStream::writeString((OfferChestPopup *)((char *)this + 16), *((String **)this + 15));
      ByteStream::writeString((OfferChestPopup *)((char *)this + 16), *((String **)this + 16));
      ByteStream::writeString((OfferChestPopup *)((char *)this + 16), *((String **)this + 17));
      ByteStream::writeString((OfferChestPopup *)((char *)this + 16), *((String **)this + 22));
      ByteStream::writeString((OfferChestPopup *)((char *)this + 16), *((String **)this + 23));
      ByteStream::writeBoolean((OfferChestPopup *)((char *)this + 16), *((_BYTE *)this + 192));
      ByteStream::writeStringReference((OfferChestPopup *)((char *)this + 16), (const String *)((char *)this + 224));
      ByteStream::writeStringReference((OfferChestPopup *)((char *)this + 16), (const String *)((char *)this + 200));
      ByteStream::writeStringReference((OfferChestPopup *)((char *)this + 16), (const String *)this + 6);
      ByteStreamHelper::writeDataReference((_DWORD)this + 16, *((AreaEffectObject **)this + 21));
      ByteStream::writeStringReference((OfferChestPopup *)((char *)this + 16), (const String *)((char *)this + 248));
      ByteStream::writeBoolean((OfferChestPopup *)((char *)this + 16), *((_BYTE *)this + 272));
      return ByteStream::writeString((OfferChestPopup *)((char *)this + 16), *((String **)this + 35));
    }

    __int64 __fastcall LoginMessage::decode(OfferChestPopup *this)
    {
      __int64 result; // x0
      int v3; // w2
    
      PiranhaMessage::decode(this);
      *((_QWORD *)this + 9) = ByteStream::readLong((OfferChestPopup *)((char *)this + 16));
      *((_QWORD *)this + 10) = ByteStream::readString((OfferChestPopup *)((char *)this + 16), 900000);
      *((_DWORD *)this + 22) = ByteStream::readVInt((OfferChestPopup *)((char *)this + 16));
      *((_DWORD *)this + 23) = ByteStream::readVInt((OfferChestPopup *)((char *)this + 16));
      *((_DWORD *)this + 24) = ByteStream::readVInt((OfferChestPopup *)((char *)this + 16));
      *((_QWORD *)this + 13) = ByteStream::readString((OfferChestPopup *)((char *)this + 16), 900000);
      *((_QWORD *)this + 14) = ByteStream::readString((OfferChestPopup *)((char *)this + 16), 900000);
      *((_QWORD *)this + 15) = ByteStream::readString((OfferChestPopup *)((char *)this + 16), 900000);
      *((_QWORD *)this + 16) = ByteStream::readString((OfferChestPopup *)((char *)this + 16), 900000);
      *((_QWORD *)this + 17) = ByteStream::readString((OfferChestPopup *)((char *)this + 16), 900000);
      *((_QWORD *)this + 22) = ByteStream::readString((OfferChestPopup *)((char *)this + 16), 900000);
      *((_QWORD *)this + 23) = ByteStream::readString((OfferChestPopup *)((char *)this + 16), 900000);
      *((_BYTE *)this + 192) = ByteStream::readBoolean((OfferChestPopup *)((char *)this + 16));
      ByteStream::readStringReference((OfferChestPopup *)((char *)this + 16), 900000);
      String::operator=((String *)((char *)this + 224));
      String::~String();
      ByteStream::readStringReference((OfferChestPopup *)((char *)this + 16), 900000);
      String::operator=((String *)((char *)this + 200));
      String::~String();
      result = ByteStream::isAtEnd((OfferChestPopup *)((char *)this + 16));
      if ( (result & 1) == 0 )
      {
        ByteStream::readStringReference((OfferChestPopup *)((char *)this + 16), 900000);
        String::operator=((String *)this + 6);
        String::~String();
        *((_QWORD *)this + 21) = ByteStreamHelper::readDataReference(
                                   (OfferChestPopup *)((char *)this + 16),
                                   (ByteStream *)1,
                                   v3);
        result = ByteStream::isAtEnd((OfferChestPopup *)((char *)this + 16));
        if ( (result & 1) == 0 )
        {
          ByteStream::readStringReference((OfferChestPopup *)((char *)this + 16), 900000);
          String::operator=((String *)((char *)this + 248));
          String::~String();
          *((_BYTE *)this + 272) = ByteStream::readBoolean((OfferChestPopup *)((char *)this + 16));
          result = ByteStream::readString((OfferChestPopup *)((char *)this + 16), 900000);
          *((_QWORD *)this + 35) = result;
        }
      }
      return result;
    }

    __int64 __fastcall LoginMessage::getMessageType(OfferChestPopup *this)
    {
      return 10101;
    }

    __int64 __fastcall LoginMessage::setAccountId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    __int64 __fastcall LoginMessage::setPassToken(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 80) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setClientMajorVersion(__int64 this, int a2)
    {
      *(_DWORD *)(this + 88) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setClientBuild(__int64 this, int a2)
    {
      *(_DWORD *)(this + 96) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setResourceSha(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 104) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setUDID(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 112) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setADID(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 176) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setOSVersion(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 184) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setOpenUDID(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 120) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setMacAddress(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 128) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setDevice(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 136) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setPreferredLanguage(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 168) = a2;
      return result;
    }

    __int64 __fastcall LoginMessage::setPreferredDeviceLanguage(String *a1)
    {
      return String::operator=(a1 + 6);
    }

    __int64 __fastcall LoginMessage::getServiceNodeType(OfferChestPopup *this)
    {
      return 1;
    }

    __int64 __fastcall LoginMessage::setClientMinorVersion(__int64 this, int a2)
    {
      *(_DWORD *)(this + 92) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setAndroidID(__int64 a1)
    {
      return String::operator=((String *)(a1 + 200));
    }

    __int64 __fastcall LoginMessage::setAndroid(__int64 this, char a2)
    {
      *(_BYTE *)(this + 192) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setFacebookAttributionID(__int64 a1)
    {
      return String::operator=((String *)(a1 + 248));
    }

    __int64 __fastcall LoginMessage::setAdvertisingEnabled(__int64 this, char a2)
    {
      *(_BYTE *)(this + 272) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::setAppleIFV(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 280) = a2;
      return this;
    }

    __int64 __fastcall LoginMessage::initializeMembers(__int64 a1)
    {
      __int64 result; // x0
    
      *(_BYTE *)(a1 + 192) = 0;
      *(_DWORD *)(a1 + 96) = -1;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 88) = -1;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      String::operator=(a1 + 144, "");
      *(_QWORD *)(a1 + 176) = 0;
      *(_QWORD *)(a1 + 184) = 0;
      *(_QWORD *)(a1 + 168) = 0;
      String::operator=(a1 + 200, "");
      String::operator=(a1 + 224, "");
      result = String::operator=(a1 + 248, "");
      *(_BYTE *)(a1 + 272) = 1;
      *(_QWORD *)(a1 + 280) = 0;
      *(_DWORD *)(a1 + 288) = 0;
      return result;
    }

    _QWORD *__fastcall LoginMessage::~LoginMessage(_QWORD *a1)
    {
      *a1 = off_100467370;
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      return a1;
    }

    void __fastcall LoginMessage::~LoginMessage(_QWORD *a1)
    {
      *a1 = off_100467370;
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      operator delete(a1);
    }

}; // end class LoginMessage
