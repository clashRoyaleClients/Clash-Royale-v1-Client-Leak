class AllianceListMessage
{
public:

    void __fastcall AllianceListMessage::AllianceListMessage(AllianceListMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100464A30;
      v1[9] = 0;
      v1[10] = 0;
    }

    __int64 __fastcall AllianceListMessage::encode(MainHUD *this)
    {
      __int64 v2; // x8
      int v3; // w21
      __int64 result; // x0
      __int64 v5; // x22
    
      PiranhaMessage::encode(this);
      ByteStream::writeString((MainHUD *)((char *)this + 16), *((String **)this + 9));
      v2 = *((_QWORD *)this + 10);
      if ( !v2 )
        return ByteStream::writeVInt((MainHUD *)((char *)this + 16), -1);
      v3 = *(_DWORD *)(v2 + 12);
      result = ByteStream::writeVInt((MainHUD *)((char *)this + 16), v3);
      if ( v3 >= 1 )
      {
        v5 = 0;
        do
          result = AllianceHeaderEntry::encode(*(_QWORD *)(**((_QWORD **)this + 10) + 8 * v5++), (__int64)this + 16);
        while ( v3 != (_DWORD)v5 );
      }
      return result;
    }

    __int64 __fastcall AllianceListMessage::decode(MainHUD *this)
    {
      __int64 result; // x0
      int v3; // w21
      _QWORD *v4; // x22
      __int64 v5; // x0
      int i; // w23
      void *v7; // x22
      void *v8; // [xsp+8h] [xbp-38h] BYREF
    
      PiranhaMessage::decode(this);
      *((_QWORD *)this + 9) = ByteStream::readString((MainHUD *)((char *)this + 16), 900000);
      result = ByteStream::readVInt((MainHUD *)((char *)this + 16));
      v3 = result;
      if ( (unsigned int)result < 0x2711 )
      {
        v4 = (_QWORD *)operator new(16);
        *v4 = 0;
        v4[1] = 0;
        *((_DWORD *)v4 + 2) = v3;
        if ( is_mul_ok(v3, 8u) )
          v5 = 8LL * v3;
        else
          v5 = -1;
        result = operator new[](v5);
        *v4 = result;
        *((_QWORD *)this + 10) = v4;
        if ( v3 >= 1 )
        {
          for ( i = 0; i < v3; ++i )
          {
            v7 = (void *)operator new(80);
            AllianceHeaderEntry::AllianceHeaderEntry(v7);
            v8 = v7;
            LogicArrayList<AllianceHeaderEntry *>::add(*((_QWORD *)this + 10), &v8);
            result = AllianceHeaderEntry::decode((__int64)v7, (MainHUD *)((char *)this + 16));
          }
        }
      }
      else
      {
        *((_QWORD *)this + 10) = 0;
      }
      return result;
    }

    __int64 AllianceListMessage::getMessageType()
    {
      return 24310;
    }

    __int64 AllianceListMessage::getServiceNodeType()
    {
      return 11;
    }

    __int64 __fastcall AllianceListMessage::removeAlliances(__int64 a1)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = 0;
      return v1;
    }

    __int64 __fastcall AllianceListMessage::removeSearchString(__int64 a1)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = 0;
      return v1;
    }

    void __fastcall AllianceListMessage::destruct(__int64 a1)
    {
      void *v2; // x20
      int *v3; // x20
      __int64 v4; // x23
      void *v5; // x21
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
      {
        String::~String(*(String **)(a1 + 72));
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 72) = 0;
      v3 = *(int **)(a1 + 80);
      if ( v3 )
      {
        if ( v3[3] < 1 )
          goto LABEL_17;
        v4 = 0;
        do
        {
          v5 = *(void **)(*(_QWORD *)v3 + 8 * v4);
          if ( v5 )
          {
            AllianceHeaderEntry::destruct(*(void **)(*(_QWORD *)v3 + 8 * v4));
            operator delete(v5);
            v3 = *(int **)(a1 + 80);
          }
          ++v4;
        }
        while ( v4 < v3[3] );
        if ( v3 )
        {
    LABEL_17:
          if ( *(_QWORD *)v3 )
            operator delete[](*(_QWORD *)v3);
          operator delete(v3);
        }
        *(_QWORD *)(a1 + 80) = 0;
      }
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
    }

    void AllianceListMessage::~AllianceListMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceListMessage::~AllianceListMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class AllianceListMessage
