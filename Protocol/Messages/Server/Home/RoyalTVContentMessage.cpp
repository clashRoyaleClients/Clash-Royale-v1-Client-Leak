class RoyalTVContentMessage
{
public:

    void __fastcall RoyalTVContentMessage::RoyalTVContentMessage(RoyalTVContentMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_1004721D8;
      v1[9] = 0;
    }

    __int64 __fastcall RoyalTVContentMessage::encode(PurchaseConfirmationPopup *this)
    {
      __int64 v2; // x8
      int v3; // w20
      __int64 result; // x0
      __int64 v5; // x22
    
      PiranhaMessage::encode(this);
      v2 = *((_QWORD *)this + 9);
      if ( !v2 )
        return ByteStream::writeVInt((PurchaseConfirmationPopup *)((char *)this + 16), -1);
      v3 = *(_DWORD *)(v2 + 12);
      result = ByteStream::writeVInt((PurchaseConfirmationPopup *)((char *)this + 16), v3);
      if ( v3 >= 1 )
      {
        v5 = 0;
        do
          result = RoyalTVEntry::encode(*(_QWORD *)(**((_QWORD **)this + 9) + 8 * v5++), (__int64)this + 16);
        while ( v3 != (_DWORD)v5 );
      }
      return result;
    }

    __int64 __fastcall RoyalTVContentMessage::decode(PurchaseConfirmationPopup *this)
    {
      __int64 result; // x0
      int v3; // w21
      _QWORD *v4; // x22
      __int64 v5; // x0
      int i; // w23
      __int64 v7; // x22
      __int64 v8; // [xsp+8h] [xbp-38h] BYREF
    
      PiranhaMessage::decode(this);
      result = ByteStream::readVInt((PurchaseConfirmationPopup *)((char *)this + 16));
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
          for ( i = 0; i < v3; ++i )
          {
            v7 = operator new(64);
            RoyalTVEntry::RoyalTVEntry(v7);
            v8 = v7;
            LogicArrayList<RoyalTVEntry *>::add(*((_QWORD *)this + 9), &v8);
            result = RoyalTVEntry::decode(v7, (__int64)this + 16);
          }
        }
      }
      return result;
    }

    __int64 __fastcall RoyalTVContentMessage::getMessageType(PurchaseConfirmationPopup *this)
    {
      return 24405;
    }

    __int64 __fastcall RoyalTVContentMessage::getServiceNodeType(PurchaseConfirmationPopup *this)
    {
      return 13;
    }

    __int64 __fastcall RoyalTVContentMessage::removeMostViewedList(PurchaseConfirmationPopup *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    void __fastcall RoyalTVContentMessage::destruct(PurchaseConfirmationPopup *this)
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
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 24LL))(*(_QWORD *)(*(_QWORD *)v2 + 8 * v3));
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

    void __fastcall RoyalTVContentMessage::~RoyalTVContentMessage(PurchaseConfirmationPopup *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall RoyalTVContentMessage::~RoyalTVContentMessage(PurchaseConfirmationPopup *this)
    {
      operator delete(this);
    }

}; // end class RoyalTVContentMessage
