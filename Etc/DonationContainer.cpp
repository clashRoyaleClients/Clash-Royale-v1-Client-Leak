class DonationContainer
{
public:

    _QWORD *__fastcall DonationContainer::DonationContainer(_QWORD *a1, __int64 a2)
    {
      _QWORD *v3; // x0
    
      a1[1] = a2;
      v3 = (_QWORD *)operator new(16);
      *v3 = 0;
      v3[1] = 0;
      *a1 = v3;
      return a1;
    }

    _QWORD *__fastcall DonationContainer::DonationContainer(_QWORD *a1)
    {
      LogicLong *v2; // x20
      _QWORD *v3; // x0
    
      *a1 = 0;
      a1[1] = 0;
      v2 = (LogicLong *)operator new(8);
      LogicLong::LogicLong(v2);
      a1[1] = v2;
      v3 = (_QWORD *)operator new(16);
      *v3 = 0;
      v3[1] = 0;
      *a1 = v3;
      return a1;
    }

    // attributes: thunk
    _QWORD *__fastcall DonationContainer::DonationContainer(_QWORD *a1)
    {
      return __ZN17DonationContainerC2Ev(a1);
    }

    __int64 __fastcall DonationContainer::encode(_QWORD *a1, __int64 a2)
    {
      int v4; // w21
      __int64 result; // x0
      __int64 v6; // x22
    
      LogicLong::encode(a1[1], a2);
      v4 = *(_DWORD *)(*a1 + 12LL);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, (unsigned int)v4);
      if ( v4 >= 1 )
      {
        v6 = 0;
        do
          result = ByteStreamHelper::writeDataReference(a2, *(AreaEffectObject **)(*(_QWORD *)*a1 + 8 * v6++));
        while ( v4 != (_DWORD)v6 );
      }
      return result;
    }

    __int64 __fastcall DonationContainer::decode(LogicLong **a1, ByteStream *a2)
    {
      __int64 result; // x0
      #1225 *v5; // x1
      int v6; // w21
      const char *v7; // x1
      __int64 DataReference; // [xsp+8h] [xbp-28h] BYREF
    
      LogicLong::decode(a1[1], a2);
      result = (*(__int64 (__fastcall **)(ByteStream *))(*(_QWORD *)a2 + 144LL))(a2);
      v6 = result;
      *((_DWORD *)*a1 + 3) = 0;
      if ( (int)result >= 1 )
      {
        do
        {
          DataReference = ByteStreamHelper::readDataReference(a2, v5);
          if ( !DataReference )
            Debugger::error((__siginfo *)"DonationContainer::decode() spell data is NULL", v7);
          result = LogicArrayList<LogicSpellData const*>::add((__int64)*a1, &DataReference);
          --v6;
        }
        while ( v6 );
      }
      return result;
    }

    void __fastcall DonationContainer::destruct(__int64 a1)
    {
      void *v2; // x0
      _QWORD *v3; // x20
    
      v2 = *(void **)(a1 + 8);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 8) = 0;
      v3 = *(_QWORD **)a1;
      if ( *(_QWORD *)a1 )
      {
        if ( *v3 )
          operator delete[](*v3);
        operator delete(v3);
      }
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
    }

    __int64 __fastcall DonationContainer::getAvatarId(__int64 a1)
    {
      return *(_QWORD *)(a1 + 8);
    }

    bool __fastcall DonationContainer::canAddUnit(__int64 a1, __int64 a2, __int64 a3, #1143 *a4)
    {
      int v4; // w19
    
      v4 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
      return v4 < (int)LogicArenaData::getSpellDonateLimit(a4);
    }

    bool __fastcall DonationContainer::isDonationLimitReached(__int64 a1, __int64 a2, #1143 *a3)
    {
      int v3; // w19
    
      v3 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
      return v3 >= (int)LogicArenaData::getSpellDonateLimit(a3);
    }

    __int64 *__fastcall DonationContainer::addUnit(__int64 *result, __int64 a2)
    {
      __int64 v2; // [xsp+8h] [xbp-8h] BYREF
    
      v2 = a2;
      if ( a2 )
        return (__int64 *)LogicArrayList<LogicSpellData const*>::add(*result, &v2);
      return result;
    }

    __int64 __fastcall DonationContainer::removeUnit(__int64 result, AreaEffectObject *a2)
    {
      __int64 **v3; // x19
      __int64 v4; // x21
      __int64 v5; // x23
      int GlobalID; // w22
    
      v3 = (__int64 **)result;
      if ( a2 )
      {
        v4 = *(int *)(*(_QWORD *)result + 12LL);
        v5 = 8LL * ((int)v4 - 1);
        while ( v4-- >= 1 )
        {
          GlobalID = LogicData::getGlobalID(*(AreaEffectObject **)(**v3 + v5));
          result = LogicData::getGlobalID(a2);
          v5 -= 8;
          if ( GlobalID == (_DWORD)result )
            return LogicArrayList<LogicSpellData const*>::remove(*v3, v4);
        }
      }
      return result;
    }

    __int64 __fastcall DonationContainer::getDonationCount(__int64 **a1, __int64 a2)
    {
      __int64 *v2; // x10
      __int64 v3; // x8
      __int64 v4; // x9
      __int64 result; // x0
      __int64 v6; // x10
    
      v2 = *a1;
      v3 = *((int *)*a1 + 3);
      if ( (int)v3 < 1 )
        return 0;
      v4 = 0;
      LODWORD(result) = 0;
      v6 = *v2;
      do
      {
        if ( *(_QWORD *)(v6 + 8 * v4) == a2 )
          result = (unsigned int)(result + 1);
        else
          result = (unsigned int)result;
        ++v4;
      }
      while ( v4 < v3 );
      return result;
    }

    __int64 __fastcall DonationContainer::getDonationCapacity(__int64 a1)
    {
      __int64 v2; // x19
      _QWORD *v3; // x8
      __int64 v4; // x21
    
      v2 = 0;
      v3 = *(_QWORD **)a1;
      if ( *(int *)(*(_QWORD *)a1 + 12LL) >= 1 )
      {
        v4 = 0;
        do
        {
          v2 = (unsigned int)LogicSpellData::getDonateCapacity(*(InitState **)(*v3 + 8 * v4++)) + (unsigned int)v2;
          v3 = *(_QWORD **)a1;
        }
        while ( v4 < *(int *)(*(_QWORD *)a1 + 12LL) );
      }
      return v2;
    }

}; // end class DonationContainer
