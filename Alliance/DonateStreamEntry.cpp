class DonateStreamEntry
{
public:

    __int64 __fastcall DonateStreamEntry::DonateStreamEntry(__int64 a1)
    {
      _QWORD *v2; // x0
      _QWORD *v3; // x0
    
      StreamEntry::StreamEntry((StreamEntry *)a1);
      *(_QWORD *)a1 = off_1004705A0;
      *(_DWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 64) = 0;
      v2 = (_QWORD *)operator new(16);
      *v2 = 0;
      v2[1] = 0;
      *(_QWORD *)(a1 + 64) = v2;
      v3 = (_QWORD *)operator new(16);
      *v3 = 0;
      v3[1] = 0;
      *(_QWORD *)(a1 + 72) = v3;
      return a1;
    }

    // attributes: thunk
    void __fastcall DonateStreamEntry::DonateStreamEntry(DonateStreamEntry *this)
    {
      __ZN17DonateStreamEntryC2Ev((__int64)this);
    }

    __int64 __fastcall DonateStreamEntry::encode(__int64 a1, __int64 a2)
    {
      int v4; // w21
      const char *v5; // x2
      __int64 v6; // x22
      __int64 (__fastcall *v7)(__int64, __int64); // x2
    
      StreamEntry::encode();
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, *(unsigned int *)(a1 + 56));
      v4 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 12LL);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, (unsigned int)v4);
      if ( v4 >= 1 )
      {
        v6 = 0;
        do
          DonationContainer::encode(*(_QWORD **)(**(_QWORD **)(a1 + 64) + 8 * v6++), a2);
        while ( v4 != (_DWORD)v6 );
      }
      ByteStreamHelper::encodeSpellList(a2, *(_QWORD *)(a1 + 72), v5);
      v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL);
      if ( !*(_QWORD *)(a1 + 80) )
        return v7(a2, 0);
      v7(a2, 1);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 80));
    }

    __int64 __fastcall DonateStreamEntry::decode(__int64 a1, ByteStream *a2)
    {
      const char *v4; // x2
      int v5; // w21
      __int64 v6; // x8
      _DWORD *v7; // x9
      __int64 v8; // x23
      void *v9; // x22
      int i; // w23
      LogicLong **v11; // x22
      __int64 v12; // x1
      __int64 result; // x0
      LogicLong **v14; // [xsp+8h] [xbp-38h] BYREF
    
      StreamEntry::decode((StreamEntry *)a1, a2);
      *(_DWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 144LL))(a2);
      v5 = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 144LL))(a2);
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = (_DWORD *)(v6 + 12);
        if ( *(int *)(v6 + 12) >= 1 )
        {
          v8 = 0;
          do
          {
            v9 = *(void **)(*(_QWORD *)v6 + 8 * v8);
            if ( v9 )
            {
              DonationContainer::destruct(*(_QWORD *)(*(_QWORD *)v6 + 8 * v8));
              operator delete(v9);
              v6 = *(_QWORD *)(a1 + 64);
            }
            ++v8;
            v7 = (_DWORD *)(v6 + 12);
          }
          while ( v8 < *(int *)(v6 + 12) );
        }
        *v7 = 0;
      }
      if ( v5 >= 1 )
      {
        for ( i = 0; i < v5; ++i )
        {
          v11 = (LogicLong **)operator new(16);
          DonationContainer::DonationContainer(v11);
          v14 = v11;
          DonationContainer::decode(v11, a2);
          LogicArrayList<DonationContainer *>::add(*(_QWORD *)(a1 + 64), (__int64 *)&v14);
        }
      }
      v12 = *(_QWORD *)(a1 + 72);
      *(_DWORD *)(v12 + 12) = 0;
      ByteStreamHelper::decodeSpellList((__int64)a2, v12, v4);
      result = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 136LL))(a2);
      if ( (_DWORD)result )
      {
        result = (*(__int64 (__fastcall **)(ByteStream *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
        *(_QWORD *)(a1 + 80) = result;
      }
      return result;
    }

    __int64 __fastcall DonateStreamEntry::getTotalCapacity(__int64 a1)
    {
      return *(unsigned int *)(a1 + 56);
    }

    __int64 __fastcall DonateStreamEntry::getUsedCapacity(__int64 a1)
    {
      return LogicDonationHelper::getTotalDonationCapacity(*(_QWORD *)(a1 + 64));
    }

    void __fastcall DonateStreamEntry::destruct(__int64 a1)
    {
      int *v2; // x20
      void **v3; // x22
      __int64 v4; // x23
      void *v5; // x21
      _QWORD *v6; // x20
      void *v7; // x20
    
      StreamEntry::destruct((StreamEntry *)a1);
      v3 = (void **)(a1 + 64);
      v2 = *(int **)(a1 + 64);
      if ( v2 )
      {
        if ( v2[3] < 1 )
          goto LABEL_21;
        v4 = 0;
        do
        {
          v5 = *(void **)(*(_QWORD *)v2 + 8 * v4);
          if ( v5 )
          {
            DonationContainer::destruct(*(_QWORD *)(*(_QWORD *)v2 + 8 * v4));
            operator delete(v5);
            v2 = (int *)*v3;
          }
          ++v4;
        }
        while ( v4 < v2[3] );
        if ( v2 )
        {
    LABEL_21:
          if ( *(_QWORD *)v2 )
            operator delete[](*(_QWORD *)v2);
          operator delete(v2);
        }
        *v3 = 0;
      }
      v6 = *(_QWORD **)(a1 + 72);
      if ( v6 )
      {
        if ( *v6 )
          operator delete[](*v6);
        operator delete(v6);
      }
      *(_QWORD *)(a1 + 72) = 0;
      v7 = *(void **)(a1 + 80);
      if ( v7 )
      {
        String::~String();
        operator delete(v7);
      }
      *(_DWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *v3 = 0;
    }

    __int64 __fastcall DonateStreamEntry::getSmallestCapacityDelta(__int64 a1, __int64 a2, int a3)
    {
      int v4; // w0
      __int64 v5; // x21
      int v6; // w22
      __int64 v7; // x20
      int DonateCapacity; // w0
      int v9; // w2
    
      v4 = LogicMath::min((LogicMath *)*(unsigned int *)(*(_QWORD *)(a1 + 72) + 12LL), 1, a3);
      if ( v4 < 1 )
        return 0x7FFFFFFF;
      v5 = 0;
      v6 = v4;
      v7 = 0x7FFFFFFF;
      do
      {
        DonateCapacity = LogicSpellData::getDonateCapacity(*(InitState **)(**(_QWORD **)(a1 + 72) + 8 * v5));
        v7 = LogicMath::min((LogicMath *)v7, DonateCapacity, v9);
        ++v5;
      }
      while ( v6 != (_DWORD)v5 );
      return v7;
    }

    __int64 __fastcall DonateStreamEntry::getDonateCount(__int64 a1, __int64 a2, const char *a3)
    {
      return LogicDonationHelper::getDonateCount(*(_QWORD *)(a1 + 64), a2, a3);
    }

    __int64 __fastcall DonateStreamEntry::canDonateAnything(__int64 a1, __int64 a2, const char *a3, __int64 a4)
    {
      __int64 SenderAvatarId; // x0
      int TotalDonationCapacity; // w23
      __int64 v10; // x1
      int v11; // w2
    
      SenderAvatarId = StreamEntry::getSenderAvatarId(a1);
      if ( (LogicLong::equals(a2, SenderAvatarId) & 1) != 0 )
        return 0;
      TotalDonationCapacity = LogicDonationHelper::getTotalDonationCapacity(*(_QWORD *)(a1 + 64));
      if ( (signed int)(DonateStreamEntry::getSmallestCapacityDelta(a1, v10, v11) + TotalDonationCapacity) > *(_DWORD *)(a1 + 56) )
        return 0;
      else
        return LogicDonationHelper::canDonateAnything(*(_QWORD *)(a1 + 64), a2, a3, a4);
    }

    __int64 __fastcall DonateStreamEntry::canAddDonation(__int64 a1, __int64 a2, InitState *a3, __int64 a4, __int64 a5)
    {
      __int64 SenderAvatarId; // x0
      __int64 *v11; // x10
      __int64 v12; // x8
      __int64 v13; // x9
      __int64 v14; // x10
      signed int DonateCapacity; // w24
      int v16; // w25
    
      SenderAvatarId = StreamEntry::getSenderAvatarId(a1);
      if ( (LogicLong::equals(a2, SenderAvatarId) & 1) != 0 )
        return 0;
      v11 = *(__int64 **)(a1 + 72);
      v12 = *((int *)v11 + 3);
      if ( (int)v12 < 1 )
        return 0;
      v13 = 0;
      v14 = *v11;
      while ( *(InitState **)(v14 + 8 * v13) != a3 )
      {
        if ( ++v13 >= v12 )
          return 0;
      }
      if ( (v13 & 0x80000000) != 0 )
        return 0;
      DonateCapacity = LogicSpellData::getDonateCapacity(a3);
      v16 = *(_DWORD *)(a1 + 56);
      if ( DonateCapacity > (int)(v16 - LogicDonationHelper::getTotalDonationCapacity(*(_QWORD *)(a1 + 64))) )
        return 0;
      else
        return LogicDonationHelper::canAddDonation(*(_QWORD *)(a1 + 64), a2, (const char *)a3, a4, a5);
    }

    __int64 __fastcall DonateStreamEntry::addDonation(LogicRandom *this, const #1236 *a2, const InitState *a3)
    {
      return LogicDonationHelper::addDonation(*((_QWORD *)this + 8), (__int64)a2, (char *)a3);
    }

    __int64 __fastcall DonateStreamEntry::removeDonation(LogicRandom *this, const #1236 *a2, const InitState *a3)
    {
      return LogicDonationHelper::removeDonation(*((_QWORD *)this + 8), (__int64)a2, (const char *)a3);
    }

    __int64 __fastcall DonateStreamEntry::getMessage(LogicRandom *this)
    {
      return *((_QWORD *)this + 10);
    }

    void __fastcall DonateStreamEntry::~DonateStreamEntry(LogicRandom *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall DonateStreamEntry::~DonateStreamEntry(LogicRandom *this)
    {
      operator delete(this);
    }

    __int64 __fastcall DonateStreamEntry::getStreamEntryType(LogicRandom *this)
    {
      return 1;
    }

}; // end class DonateStreamEntry
