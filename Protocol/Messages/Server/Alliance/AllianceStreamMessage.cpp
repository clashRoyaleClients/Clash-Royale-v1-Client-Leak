class AllianceStreamMessage
{
public:

    void __fastcall AllianceStreamMessage::AllianceStreamMessage(AllianceStreamMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100466548;
      v1[9] = 0;
    }

    __int64 __fastcall AllianceStreamMessage::encode(LogicSortCollectionCommand *this)
    {
      __int64 v2; // x8
      int v3; // w20
      __int64 result; // x0
      __int64 v5; // x23
      __int64 v6; // x22
      int v7; // w0
    
      PiranhaMessage::encode(this);
      v2 = *((_QWORD *)this + 9);
      if ( !v2 )
        return ByteStream::writeVInt((LogicSortCollectionCommand *)((char *)this + 16), -1);
      v3 = *(_DWORD *)(v2 + 12);
      result = ByteStream::writeVInt((LogicSortCollectionCommand *)((char *)this + 16), v3);
      if ( v3 >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(**((_QWORD **)this + 9) + 8 * v5);
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
          ByteStream::writeVInt((LogicSortCollectionCommand *)((char *)this + 16), v7);
          result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 16LL))(v6, (char *)this + 16);
          ++v5;
        }
        while ( v3 != (_DWORD)v5 );
      }
      return result;
    }

    __int64 __fastcall AllianceStreamMessage::decode(#912 *this)
    {
      __int64 result; // x0
      int v3; // w21
      _QWORD *v4; // x22
      __int64 v5; // x0
      StreamEntryFactory *VInt; // x0
      int v7; // w1
      __int64 StreamEntryByType; // x22
      __int64 v9; // [xsp+8h] [xbp-28h] BYREF
    
      PiranhaMessage::decode(this);
      result = ByteStream::readVInt((#912 *)((char *)this + 16));
      v3 = result;
      if ( (result & 0x80000000) != 0 )
      {
        *((_QWORD *)this + 9) = 0;
      }
      else
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
        *((_QWORD *)this + 9) = v4;
        if ( v3 >= 1 )
        {
          do
          {
            VInt = (StreamEntryFactory *)ByteStream::readVInt((#912 *)((char *)this + 16));
            StreamEntryByType = StreamEntryFactory::createStreamEntryByType(VInt, v7);
            v9 = StreamEntryByType;
            LogicArrayList<StreamEntry *>::add(*((_QWORD *)this + 9), &v9);
            result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)StreamEntryByType + 24LL))(
                       StreamEntryByType,
                       (char *)this + 16);
            --v3;
          }
          while ( v3 );
        }
      }
      return result;
    }

    __int64 __fastcall AllianceStreamMessage::getMessageType(LogicSortCollectionCommand *this)
    {
      return 24311;
    }

    __int64 __fastcall AllianceStreamMessage::getServiceNodeType(LogicSortCollectionCommand *this)
    {
      return 11;
    }

    __int64 __fastcall AllianceStreamMessage::removeStreamEntries(LogicSortCollectionCommand *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    void __fastcall AllianceStreamMessage::destruct(__int64 a1)
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
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 40LL))(*(_QWORD *)(*(_QWORD *)v2 + 8 * v3));
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

    void __fastcall AllianceStreamMessage::~AllianceStreamMessage(LogicSortCollectionCommand *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceStreamMessage::~AllianceStreamMessage(LogicSortCollectionCommand *this)
    {
      operator delete(this);
    }

}; // end class AllianceStreamMessage
