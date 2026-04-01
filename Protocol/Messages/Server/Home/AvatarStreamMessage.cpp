class AvatarStreamMessage
{
public:

    _QWORD *__fastcall AvatarStreamMessage::AvatarStreamMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10046F0E0;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall AvatarStreamMessage::encode(__int64 a1)
    {
      __int64 v2; // x8
      int v3; // w20
      __int64 result; // x0
      __int64 v5; // x23
      __int64 v6; // x22
      int v7; // w0
    
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
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
          ByteStream::writeVInt((#1225 *)(a1 + 16), v7);
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, a1 + 16);
          ++v5;
        }
        while ( v3 != (_DWORD)v5 );
      }
      return result;
    }

    __int64 __fastcall AvatarStreamMessage::decode(__int64 a1)
    {
      __int64 result; // x0
      int v3; // w21
      __int64 *v4; // x22
      __int64 v5; // x0
      int v6; // w23
      #1341 *VInt; // x0
      const char *v8; // x1
      BattleReportStreamEntry *StreamEntryByType; // x22
      BattleReportStreamEntry *v10; // [xsp+8h] [xbp-38h] BYREF
    
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
          v6 = 0;
          while ( 1 )
          {
            VInt = (#1341 *)ByteStream::readVInt((#1225 *)(a1 + 16));
            StreamEntryByType = AvatarStreamEntryFactory::createStreamEntryByType(VInt);
            v10 = StreamEntryByType;
            if ( !StreamEntryByType )
              break;
            LogicArrayList<AvatarStreamEntry *>::add(*(_QWORD *)(a1 + 72), &v10);
            result = (*(__int64 (__fastcall **)(BattleReportStreamEntry *, __int64))(*(_QWORD *)StreamEntryByType + 24LL))(
                       StreamEntryByType,
                       a1 + 16);
            if ( ++v6 >= v3 )
              return result;
          }
          return Debugger::warning((__siginfo *)"Corrupted AvatarStreamMessage", v8);
        }
      }
      return result;
    }

    __int64 __fastcall AvatarStreamMessage::getMessageType(BattlePage *this)
    {
      return 24411;
    }

    __int64 __fastcall AvatarStreamMessage::getServiceNodeType(BattlePage *this)
    {
      return 11;
    }

    __int64 __fastcall AvatarStreamMessage::removeStreamEntries(BattlePage *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    void __fastcall AvatarStreamMessage::destruct(__int64 a1)
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
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 72LL))(*(_QWORD *)(*(_QWORD *)v2 + 8 * v3));
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

    void __fastcall AvatarStreamMessage::~AvatarStreamMessage(BattlePage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AvatarStreamMessage::~AvatarStreamMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class AvatarStreamMessage
