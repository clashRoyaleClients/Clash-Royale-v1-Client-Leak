class AllianceLocalRankingListMessage
{
public:

    _QWORD *__fastcall AllianceLocalRankingListMessage::AllianceLocalRankingListMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10046F1C8;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall AllianceLocalRankingListMessage::encode(__int64 a1)
    {
      __int64 v2; // x8
      int v3; // w20
      __int64 result; // x0
      __int64 v5; // x22
      __int64 v6; // x0
    
      PiranhaMessage::encode((#1242 *)a1);
      v2 = *(_QWORD *)(a1 + 72);
      if ( !v2 )
        return ByteStream::writeInt((ByteStream *)(a1 + 16), -1);
      v3 = *(_DWORD *)(v2 + 12);
      result = ByteStream::writeInt((ByteStream *)(a1 + 16), v3);
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

    __int64 __fastcall AllianceLocalRankingListMessage::decode(__int64 a1)
    {
      __int64 result; // x0
      int v3; // w21
      __int64 *v4; // x22
      __int64 v5; // x0
      int i; // w23
      AllianceRankingEntry *v7; // x22
      AllianceRankingEntry *v8; // [xsp+8h] [xbp-38h] BYREF
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readInt((#1225 *)(a1 + 16));
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
            v7 = (AllianceRankingEntry *)operator new(56);
            AllianceRankingEntry::AllianceRankingEntry(v7);
            v8 = v7;
            LogicArrayList<AllianceRankingEntry *>::add(*(_QWORD *)(a1 + 72), &v8);
            result = (*(__int64 (__fastcall **)(AllianceRankingEntry *, __int64))(*(_QWORD *)v7 + 24LL))(v7, a1 + 16);
          }
        }
      }
      return result;
    }

    __int64 AllianceLocalRankingListMessage::getMessageType()
    {
      return 24402;
    }

    __int64 AllianceLocalRankingListMessage::getServiceNodeType()
    {
      return 28;
    }

    __int64 __fastcall AllianceLocalRankingListMessage::removeAllianceRankingList(__int64 a1)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = 0;
      return v1;
    }

    __int64 __fastcall AllianceLocalRankingListMessage::setAllianceRankingList(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    void __fastcall AllianceLocalRankingListMessage::destruct(__int64 a1)
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
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 32LL))(*(_QWORD *)(*(_QWORD *)v2 + 8 * v3));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
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
      *(_QWORD *)(a1 + 72) = 0;
    }

    void __fastcall AllianceLocalRankingListMessage::~AllianceLocalRankingListMessage(LinkNewDeviceScreen *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceLocalRankingListMessage::~AllianceLocalRankingListMessage(LinkNewDeviceScreen *this)
    {
      operator delete(this);
    }

}; // end class AllianceLocalRankingListMessage
