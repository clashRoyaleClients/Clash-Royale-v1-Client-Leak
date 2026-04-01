class FriendListMessage
{
public:

    __int64 __fastcall FriendListMessage::FriendListMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_100465620;
      *(_DWORD *)(result + 80) = 0;
      *(_QWORD *)(result + 72) = 0;
      return result;
    }

    __int64 __fastcall FriendListMessage::encode(__int64 a1)
    {
      __int64 v2; // x8
      int v3; // w21
      __int64 result; // x0
      __int64 v5; // x22
    
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 80));
      v2 = *(_QWORD *)(a1 + 72);
      if ( !v2 )
        return ByteStream::writeInt((ByteStream *)(a1 + 16), -1);
      v3 = *(_DWORD *)(v2 + 12);
      result = ByteStream::writeInt((ByteStream *)(a1 + 16), v3);
      if ( v3 >= 1 )
      {
        v5 = 0;
        do
          result = FriendEntry::encode(*(#1144 **)(**(_QWORD **)(a1 + 72) + 8 * v5++), (#1226 *)(a1 + 16));
        while ( v3 != (_DWORD)v5 );
      }
      return result;
    }

    __int64 __fastcall FriendListMessage::decode(__int64 a1)
    {
      __int64 result; // x0
      int v3; // w21
      __int64 *v4; // x22
      __int64 v5; // x0
      int i; // w23
      #1144 *v7; // x22
      #1144 *v8; // [xsp+8h] [xbp-38h] BYREF
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_DWORD *)(a1 + 80) = ByteStream::readInt((#1225 *)(a1 + 16));
      result = ByteStream::readInt((#1225 *)(a1 + 16));
      v3 = result;
      if ( (_DWORD)result == -1 )
      {
        *(_QWORD *)(a1 + 72) = 0;
      }
      else
      {
        v4 = (__int64 *)operator new(16);
        *v4 = 0;
        v4[1] = 0;
        *((_DWORD *)v4 + 2) = v3;
        if ( is_mul_ok(v3, 8u) )
          v5 = 8LL * v3;
        else
          v5 = -1;
        result = operator new[](v5);
        *v4 = result;
        *(_QWORD *)(a1 + 72) = v4;
        if ( v3 >= 1 )
        {
          for ( i = 0; i < v3; ++i )
          {
            v7 = (#1144 *)operator new(112);
            FriendEntry::FriendEntry(v7);
            v8 = v7;
            LogicArrayList<FriendEntry *>::add(*(_QWORD *)(a1 + 72), (__int64 *)&v8);
            result = FriendEntry::decode(v7, (ByteStream *)(a1 + 16));
          }
        }
      }
      return result;
    }

    __int64 __fastcall FriendListMessage::getMessageType(LogicAreaEffectObjectData *this)
    {
      return 20105;
    }

    __int64 __fastcall FriendListMessage::getServiceNodeType(LogicAreaEffectObjectData *this)
    {
      return 3;
    }

    __int64 __fastcall FriendListMessage::getListType(LogicAreaEffectObjectData *this)
    {
      return *((unsigned int *)this + 20);
    }

    __int64 __fastcall FriendListMessage::removeFriendEntries(LogicAreaEffectObjectData *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    void __fastcall FriendListMessage::destruct(__int64 a1)
    {
      int *v2; // x20
      __int64 v3; // x22
      __int64 v4; // x21
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(int **)(a1 + 72);
      if ( v2 )
      {
        if ( v2[3] < 1 )
          goto LABEL_15;
        v3 = 0;
        do
        {
          v4 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v3);
          if ( v4 )
          {
            FriendEntry::destruct(*(#1144 **)(*(_QWORD *)v2 + 8 * v3));
            String::~String((String *)(v4 + 88));
            operator delete((void *)v4);
            v2 = *(int **)(a1 + 72);
          }
          ++v3;
        }
        while ( v3 < v2[3] );
        if ( v2 )
        {
    LABEL_15:
          if ( *(_QWORD *)v2 )
            operator delete[](*(_QWORD *)v2);
          operator delete(v2);
        }
        *(_QWORD *)(a1 + 72) = 0;
      }
      *(_DWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 72) = 0;
    }

    void __fastcall FriendListMessage::~FriendListMessage(LogicAreaEffectObjectData *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall FriendListMessage::~FriendListMessage(LogicAreaEffectObjectData *this)
    {
      operator delete(this);
    }

}; // end class FriendListMessage
