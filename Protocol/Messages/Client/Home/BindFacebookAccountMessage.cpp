class BindFacebookAccountMessage
{
public:

    void __fastcall BindFacebookAccountMessage::BindFacebookAccountMessage(BindFacebookAccountMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_10046F568;
      *(_BYTE *)(v1 + 88) = 0;
      *(_QWORD *)(v1 + 72) = 0;
      *(_QWORD *)(v1 + 80) = 0;
    }

    __int64 __fastcall BindFacebookAccountMessage::encode(Summoner *this)
    {
      PiranhaMessage::encode(this);
      ByteStream::writeBoolean((Summoner *)((char *)this + 16), *((_BYTE *)this + 88));
      ByteStream::writeString((Summoner *)((char *)this + 16), *((String **)this + 9));
      return ByteStream::writeString((Summoner *)((char *)this + 16), *((String **)this + 10));
    }

    __int64 __fastcall BindFacebookAccountMessage::decode(Summoner *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_BYTE *)this + 88) = ByteStream::readBoolean((Summoner *)((char *)this + 16));
      *((_QWORD *)this + 9) = ByteStream::readString((Summoner *)((char *)this + 16), 900000);
      result = ByteStream::readString((Summoner *)((char *)this + 16), 900000);
      *((_QWORD *)this + 10) = result;
      return result;
    }

    __int64 __fastcall BindFacebookAccountMessage::getMessageType(Summoner *this)
    {
      return 14201;
    }

    __int64 __fastcall BindFacebookAccountMessage::getServiceNodeType(Summoner *this)
    {
      return 1;
    }

    __int64 __fastcall BindFacebookAccountMessage::setFacebookId(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 72) = a2;
      return this;
    }

    __int64 __fastcall BindFacebookAccountMessage::setAuthenticationToken(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 80) = a2;
      return this;
    }

    __int64 __fastcall BindFacebookAccountMessage::setForce(__int64 this, char a2)
    {
      *(_BYTE *)(this + 88) = a2;
      return this;
    }

    void __fastcall BindFacebookAccountMessage::destruct(Summoner *this)
    {
      void *v2; // x20
      char *v3; // x21
      void *v4; // x19
    
      PiranhaMessage::destruct(this);
      v3 = (char *)this + 72;
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      v4 = (void *)*((_QWORD *)this + 10);
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      v3[16] = 0;
      *(_QWORD *)v3 = 0;
      *((_QWORD *)v3 + 1) = 0;
    }

    void __fastcall BindFacebookAccountMessage::~BindFacebookAccountMessage(Summoner *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall BindFacebookAccountMessage::~BindFacebookAccountMessage(Summoner *this)
    {
      operator delete(this);
    }

}; // end class BindFacebookAccountMessage
