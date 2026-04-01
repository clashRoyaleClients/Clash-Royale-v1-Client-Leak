class BattleReportStreamMessage
{
public:

    _QWORD *__fastcall BattleReportStreamMessage::BattleReportStreamMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100467BA8;
      result[9] = 0;
      result[10] = 0;
      return result;
    }

    __int64 __fastcall BattleReportStreamMessage::encode(__int64 a1)
    {
      __int64 v2; // x8
      int v3; // w21
      __int64 result; // x0
      __int64 v5; // x23
      __int64 v6; // x22
      int v7; // w0
    
      PiranhaMessage::encode((#1242 *)a1);
      ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 72));
      v2 = *(_QWORD *)(a1 + 80);
      if ( !v2 )
        return ByteStream::writeVInt((#1225 *)(a1 + 16), -1);
      v3 = *(_DWORD *)(v2 + 12);
      result = ByteStream::writeVInt((#1225 *)(a1 + 16), v3);
      if ( v3 >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(**(_QWORD **)(a1 + 80) + 8 * v5);
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
          ByteStream::writeVInt((#1225 *)(a1 + 16), v7);
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, a1 + 16);
          ++v5;
        }
        while ( v3 != (_DWORD)v5 );
      }
      return result;
    }

    __int64 __fastcall BattleReportStreamMessage::decode(__int64 a1)
    {
      __int64 result; // x0
      int v3; // w21
      __int64 *v4; // x22
      __int64 v5; // x0
      int i; // w24
      int VInt; // w23
      AvatarStreamEntry *v8; // x22
      AvatarStreamEntry *v9; // [xsp+8h] [xbp-38h] BYREF
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_QWORD *)(a1 + 72) = ByteStream::readLong((ByteStream *)(a1 + 16));
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      v3 = result;
      if ( (result & 0x80000000) != 0 )
      {
        *(_QWORD *)(a1 + 80) = 0;
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
        *(_QWORD *)(a1 + 80) = v4;
        if ( v3 >= 1 )
        {
          for ( i = 0; i < v3; ++i )
          {
            VInt = ByteStream::readVInt((#1225 *)(a1 + 16));
            v8 = (AvatarStreamEntry *)operator new(96);
            BattleReportStreamEntry::BattleReportStreamEntry(v8, VInt);
            v9 = v8;
            LogicArrayList<BattleReportStreamEntry *>::add(*(_QWORD *)(a1 + 80), &v9);
            result = (*(__int64 (__fastcall **)(AvatarStreamEntry *, __int64))(*(_QWORD *)v8 + 24LL))(v8, a1 + 16);
          }
        }
      }
      return result;
    }

    __int64 BattleReportStreamMessage::getMessageType()
    {
      return 24413;
    }

    __int64 BattleReportStreamMessage::getServiceNodeType()
    {
      return 11;
    }

    __int64 __fastcall BattleReportStreamMessage::removeStreamEntries(__int64 a1)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = 0;
      return v1;
    }

    void __fastcall BattleReportStreamMessage::destruct(__int64 a1)
    {
      void *v2; // x0
      int *v3; // x20
      __int64 v4; // x23
      __int64 v5; // x21
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 72) = 0;
      v3 = *(int **)(a1 + 80);
      if ( v3 )
      {
        if ( v3[3] < 1 )
          goto LABEL_17;
        v4 = 0;
        do
        {
          v5 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v4);
          if ( v5 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 72LL))(*(_QWORD *)(*(_QWORD *)v3 + 8 * v4));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
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

    void BattleReportStreamMessage::~BattleReportStreamMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall BattleReportStreamMessage::~BattleReportStreamMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class BattleReportStreamMessage
