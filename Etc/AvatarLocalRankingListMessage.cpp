class AvatarLocalRankingListMessage
{
public:

    _QWORD *__fastcall AvatarLocalRankingListMessage::AvatarLocalRankingListMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100461178;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall AvatarLocalRankingListMessage::encode(__int64 a1)
    {
      __int64 v2; // x8
      int v3; // w20
      __int64 result; // x0
      __int64 v5; // x22
      __int64 v6; // x0
    
      PiranhaMessage::encode((#1242 *)a1);
      v2 = *(_QWORD *)(a1 + 72);
      if ( !v2 )
        return ByteStream::writeVInt((#1225 *)(a1 + 16), -1);
      v3 = *(_DWORD *)(v2 + 12);
      result = ByteStream::writeVInt((#1225 *)(a1 + 16), v3);
      if ( v3 >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(**(_QWORD **)(a1 + 72) + 8 * v5);
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, a1 + 16);
          ++v5;
        }
        while ( v3 != (_DWORD)v5 );
      }
      return result;
    }

    __int64 __fastcall AvatarLocalRankingListMessage::decode(__int64 a1)
    {
      __int64 result; // x0
      int v3; // w21
      __int64 *v4; // x22
      __int64 v5; // x0
      int i; // w23
      #1068 *v7; // x22
      #1068 *v8; // [xsp+8h] [xbp-38h] BYREF
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      v3 = result;
      if ( (result & 0x80000000) != 0 )
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
            v7 = (#1068 *)operator new(96);
            AvatarRankingEntry::AvatarRankingEntry(v7);
            v8 = v7;
            LogicArrayList<AvatarRankingEntry *>::add(*(_QWORD *)(a1 + 72), &v8);
            result = (*(__int64 (__fastcall **)(#1068 *, __int64))(*(_QWORD *)v7 + 24LL))(v7, a1 + 16);
          }
        }
      }
      return result;
    }

    __int64 __fastcall AvatarLocalRankingListMessage::getMessageType(LogicCharacterBuffComponent *this)
    {
      return 24404;
    }

    __int64 __fastcall AvatarLocalRankingListMessage::getServiceNodeType(LogicCharacterBuffComponent *this)
    {
      return 13;
    }

    __int64 __fastcall AvatarLocalRankingListMessage::removeAvatarRankingList(LogicCharacterBuffComponent *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    __int64 __fastcall AvatarLocalRankingListMessage::setAvatarRankingList(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    void __fastcall AvatarLocalRankingListMessage::destruct(LogicCharacterBuffComponent *this)
    {
      int *v2; // x20
      __int64 v3; // x22
      __int64 v4; // x21
    
      PiranhaMessage::destruct(this);
      v2 = (int *)*((_QWORD *)this + 9);
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
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 32LL))(*(_QWORD *)(*(_QWORD *)v2 + 8 * v3));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
            v2 = (int *)*((_QWORD *)this + 9);
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
        *((_QWORD *)this + 9) = 0;
      }
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall AvatarLocalRankingListMessage::~AvatarLocalRankingListMessage(LogicCharacterBuffComponent *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AvatarLocalRankingListMessage::~AvatarLocalRankingListMessage(LogicCharacterBuffComponent *this)
    {
      operator delete(this);
    }

}; // end class AvatarLocalRankingListMessage
