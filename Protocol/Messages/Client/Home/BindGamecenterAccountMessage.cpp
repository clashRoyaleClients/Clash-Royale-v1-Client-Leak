class BindGamecenterAccountMessage
{
public:

    __int64 __fastcall BindGamecenterAccountMessage::BindGamecenterAccountMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)(result + 72) = 0;
      *(_BYTE *)(result + 80) = 0;
      *(_QWORD *)(result + 120) = 0;
      *(_QWORD *)(result + 136) = 0;
      *(_DWORD *)(result + 128) = 0;
      *(_QWORD *)result = off_10046D328;
      *(_DWORD *)(result + 144) = 0;
      *(_DWORD *)(result + 112) = 0;
      *(_QWORD *)(result + 96) = 0;
      *(_QWORD *)(result + 104) = 0;
      *(_QWORD *)(result + 88) = 0;
      return result;
    }

    __int64 __fastcall BindGamecenterAccountMessage::encode(SpellTargetIndicator *this)
    {
      PiranhaMessage::encode(this);
      ByteStream::writeBoolean((SpellTargetIndicator *)((char *)this + 16), *((_BYTE *)this + 80));
      ByteStream::writeString((SpellTargetIndicator *)((char *)this + 16), *((String **)this + 9));
      ByteStream::writeString((SpellTargetIndicator *)((char *)this + 16), *((String **)this + 11));
      ByteStream::writeString((SpellTargetIndicator *)((char *)this + 16), *((String **)this + 12));
      ByteStream::writeBytes((SpellTargetIndicator *)((char *)this + 16), *((char **)this + 13), *((_DWORD *)this + 28));
      ByteStream::writeBytes((SpellTargetIndicator *)((char *)this + 16), *((char **)this + 15), *((_DWORD *)this + 32));
      return ByteStream::writeBytes(
               (SpellTargetIndicator *)((char *)this + 16),
               *((char **)this + 17),
               *((_DWORD *)this + 36));
    }

    __int64 __fastcall BindGamecenterAccountMessage::decode(SpellTargetIndicator *this)
    {
      int BytesLength; // w0
      int v3; // w0
      int v4; // w0
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_BYTE *)this + 80) = ByteStream::readBoolean((SpellTargetIndicator *)((char *)this + 16));
      *((_QWORD *)this + 9) = ByteStream::readString((SpellTargetIndicator *)((char *)this + 16), 900000);
      *((_QWORD *)this + 11) = ByteStream::readString((SpellTargetIndicator *)((char *)this + 16), 900000);
      *((_QWORD *)this + 12) = ByteStream::readString((SpellTargetIndicator *)((char *)this + 16), 900000);
      BytesLength = ByteStream::readBytesLength((SpellTargetIndicator *)((char *)this + 16));
      *((_DWORD *)this + 28) = BytesLength;
      *((_QWORD *)this + 13) = ByteStream::readBytes((SpellTargetIndicator *)((char *)this + 16), BytesLength, 1000);
      v3 = ByteStream::readBytesLength((SpellTargetIndicator *)((char *)this + 16));
      *((_DWORD *)this + 32) = v3;
      *((_QWORD *)this + 15) = ByteStream::readBytes((SpellTargetIndicator *)((char *)this + 16), v3, 1000);
      v4 = ByteStream::readBytesLength((SpellTargetIndicator *)((char *)this + 16));
      *((_DWORD *)this + 36) = v4;
      result = ByteStream::readBytes((SpellTargetIndicator *)((char *)this + 16), v4, 1000);
      *((_QWORD *)this + 17) = result;
      return result;
    }

    __int64 __fastcall BindGamecenterAccountMessage::getMessageType(SpellTargetIndicator *this)
    {
      return 14212;
    }

    __int64 __fastcall BindGamecenterAccountMessage::getServiceNodeType(SpellTargetIndicator *this)
    {
      return 1;
    }

    __int64 __fastcall BindGamecenterAccountMessage::setGamecenterId(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 72) = a2;
      return this;
    }

    __int64 __fastcall BindGamecenterAccountMessage::setForce(__int64 this, char a2)
    {
      *(_BYTE *)(this + 80) = a2;
      return this;
    }

    void __fastcall BindGamecenterAccountMessage::setTimestamp(SpellTargetIndicator *this, const char *a2, int a3)
    {
      __int64 v6; // x0
      __int64 v7; // x0
      _BYTE *v8; // x0
      __int64 v9; // x9
    
      v6 = *((_QWORD *)this + 17);
      if ( v6 )
        operator delete[](v6);
      *((_QWORD *)this + 17) = 0;
      if ( a2 )
      {
        if ( a3 < 0LL )
          v7 = -1;
        else
          v7 = a3;
        v8 = (_BYTE *)operator new[](v7);
        *((_QWORD *)this + 17) = v8;
        if ( a3 >= 1 )
        {
          *v8 = *a2;
          if ( a3 != 1 )
          {
            v9 = 1;
            do
            {
              *(_BYTE *)(*((_QWORD *)this + 17) + v9) = a2[v9];
              ++v9;
            }
            while ( a3 != (_DWORD)v9 );
          }
        }
      }
      *((_DWORD *)this + 36) = a3;
    }

    __int64 __fastcall BindGamecenterAccountMessage::setUrl(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 88) = a2;
      return this;
    }

    __int64 __fastcall BindGamecenterAccountMessage::setBundleID(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 96) = a2;
      return this;
    }

    void __fastcall BindGamecenterAccountMessage::setSalt(SpellTargetIndicator *this, const char *a2, int a3)
    {
      __int64 v6; // x0
      __int64 v7; // x0
      _BYTE *v8; // x0
      __int64 v9; // x9
    
      v6 = *((_QWORD *)this + 15);
      if ( v6 )
        operator delete[](v6);
      *((_QWORD *)this + 15) = 0;
      if ( a2 )
      {
        if ( a3 < 0LL )
          v7 = -1;
        else
          v7 = a3;
        v8 = (_BYTE *)operator new[](v7);
        *((_QWORD *)this + 15) = v8;
        if ( a3 >= 1 )
        {
          *v8 = *a2;
          if ( a3 != 1 )
          {
            v9 = 1;
            do
            {
              *(_BYTE *)(*((_QWORD *)this + 15) + v9) = a2[v9];
              ++v9;
            }
            while ( a3 != (_DWORD)v9 );
          }
        }
      }
      *((_DWORD *)this + 32) = a3;
    }

    void __fastcall BindGamecenterAccountMessage::setSignature(SpellTargetIndicator *this, const char *a2, int a3)
    {
      __int64 v6; // x0
      __int64 v7; // x0
      _BYTE *v8; // x0
      __int64 v9; // x9
    
      v6 = *((_QWORD *)this + 13);
      if ( v6 )
        operator delete[](v6);
      *((_QWORD *)this + 13) = 0;
      if ( a2 )
      {
        if ( a3 < 0LL )
          v7 = -1;
        else
          v7 = a3;
        v8 = (_BYTE *)operator new[](v7);
        *((_QWORD *)this + 13) = v8;
        if ( a3 >= 1 )
        {
          *v8 = *a2;
          if ( a3 != 1 )
          {
            v9 = 1;
            do
            {
              *(_BYTE *)(*((_QWORD *)this + 13) + v9) = a2[v9];
              ++v9;
            }
            while ( a3 != (_DWORD)v9 );
          }
        }
      }
      *((_DWORD *)this + 28) = a3;
    }

    void __fastcall BindGamecenterAccountMessage::destruct(SpellTargetIndicator *this)
    {
      void *v2; // x20
      void *v3; // x20
      void *v4; // x20
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      v3 = (void *)*((_QWORD *)this + 11);
      if ( v3 )
      {
        String::~String();
        operator delete(v3);
      }
      *((_QWORD *)this + 11) = 0;
      v4 = (void *)*((_QWORD *)this + 12);
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      *((_QWORD *)this + 12) = 0;
      v5 = *((_QWORD *)this + 13);
      if ( v5 )
        operator delete[](v5);
      *((_QWORD *)this + 13) = 0;
      v6 = *((_QWORD *)this + 15);
      if ( v6 )
        operator delete[](v6);
      *((_QWORD *)this + 15) = 0;
      v7 = *((_QWORD *)this + 17);
      if ( v7 )
        operator delete[](v7);
      *((_QWORD *)this + 9) = 0;
      *((_BYTE *)this + 80) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_DWORD *)this + 32) = 0;
      *((_DWORD *)this + 36) = 0;
      *((_DWORD *)this + 28) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_QWORD *)this + 11) = 0;
    }

    void __fastcall BindGamecenterAccountMessage::~BindGamecenterAccountMessage(SpellTargetIndicator *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall BindGamecenterAccountMessage::~BindGamecenterAccountMessage(SpellTargetIndicator *this)
    {
      operator delete(this);
    }

}; // end class BindGamecenterAccountMessage
