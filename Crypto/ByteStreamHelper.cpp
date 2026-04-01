class ByteStreamHelper
{
public:

    __int64 __fastcall ByteStreamHelper::readDataReference(#1317 *this, #1225 *a2)
    {
      SectorCommandMessage *GlobalID; // x0
    
      GlobalID = (SectorCommandMessage *)ByteStreamHelper::readGlobalID(this, a2);
      return LogicDataTables::getDataById(GlobalID);
    }

    __int64 __fastcall ByteStreamHelper::readGlobalID(__int64 a1)
    {
      SectorCommandMessage *v2; // x20
      int v3; // w1
    
      v2 = (SectorCommandMessage *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
      if ( !(_DWORD)v2 )
        return 0;
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
      return GlobalID::createGlobalID(v2, v3);
    }

    __int64 __fastcall ByteStreamHelper::writeConstantSizeIntArray(__int64 result, unsigned int *a2, int a3)
    {
      int v3; // w19
      __int64 v5; // x21
      unsigned int v6; // t1
    
      v3 = a3;
      v5 = result;
      if ( a3 >= 1 )
      {
        do
        {
          v6 = *a2++;
          result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 88LL))(v5, v6);
          --v3;
        }
        while ( v3 );
      }
      return result;
    }

    __int64 __fastcall ByteStreamHelper::readConstantSizeIntArray(__int64 result, _DWORD *a2, int a3)
    {
      int v3; // w19
      __int64 v5; // x21
    
      v3 = a3;
      v5 = result;
      if ( a3 >= 1 )
      {
        do
        {
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 152LL))(v5);
          *a2++ = result;
          --v3;
        }
        while ( v3 );
      }
      return result;
    }

    __int64 __fastcall ByteStreamHelper::encodeVector(__int64 a1, unsigned int *a2)
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, *a2);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, a2[1]);
    }

    __int64 __fastcall ByteStreamHelper::decodeVector(__int64 a1, _DWORD *a2)
    {
      __int64 result; // x0
    
      *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
      a2[1] = result;
      return result;
    }

    __int64 __fastcall ByteStreamHelper::encodeLogicLong(#1317 *this, #1226 *a2, const #1236 *a3)
    {
      void (__fastcall *v5)(#1317 *, __int64); // x21
      __int64 HigherInt; // x0
      __int64 LowerInt; // x1
      __int64 (__fastcall *v9)(#1317 *, __int64); // [xsp+8h] [xbp-28h]
    
      v5 = *(void (__fastcall **)(#1317 *, __int64))(*(_QWORD *)this + 88LL);
      HigherInt = LogicLong::getHigherInt(a2);
      v5(this, HigherInt);
      v9 = *(__int64 (__fastcall **)(#1317 *, __int64))(*(_QWORD *)this + 88LL);
      LowerInt = LogicLong::getLowerInt(a2);
      return v9(this, LowerInt);
    }

    __int64 __fastcall ByteStreamHelper::decodeLogicLong(__int64 a1, _DWORD *a2)
    {
      __int64 result; // x0
    
      *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
      a2[1] = result;
      return result;
    }

    __int64 __fastcall ByteStreamHelper::encodeIntList(__int64 a1, __int64 a2)
    {
      int v4; // w21
      __int64 result; // x0
      __int64 v6; // x22
    
      v4 = *(_DWORD *)(a2 + 12);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, (unsigned int)v4);
      if ( v4 >= 1 )
      {
        v6 = 0;
        do
          result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL))(
                     a1,
                     *(unsigned int *)(*(_QWORD *)a2 + 4 * v6++));
        while ( v4 != (_DWORD)v6 );
      }
      return result;
    }

    __int64 __fastcall ByteStreamHelper::decodeIntList(__int64 a1, __int64 a2)
    {
      int v4; // w21
      __int64 result; // x0
      int v6; // [xsp+Ch] [xbp-24h] BYREF
    
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
      result = LogicArrayList<int>::ensureCapacity(a2, v4);
      if ( v4 >= 1 )
      {
        do
        {
          v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
          result = LogicArrayList<int>::add(a2, &v6);
          --v4;
        }
        while ( v4 );
      }
      return result;
    }

    __int64 __fastcall ByteStreamHelper::writeDataReference(__int64 a1, AreaEffectObject *this)
    {
      __int64 v2; // x19
      SectorCommandMessage *GlobalID; // x20
      __int64 ClassID; // x21
      __int64 InstanceID; // x20
      __int64 (__fastcall *v6)(__int64, __int64); // x2
      __int64 v7; // x1
    
      v2 = a1;
      if ( this )
      {
        GlobalID = (SectorCommandMessage *)LogicData::getGlobalID(this);
        ClassID = GlobalID::getClassID(GlobalID);
        InstanceID = GlobalID::getInstanceID(GlobalID);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 88LL))(v2, ClassID);
        v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 88LL);
        a1 = v2;
        v7 = InstanceID;
      }
      else
      {
        v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 88LL);
        v7 = 0;
      }
      return v6(a1, v7);
    }

    __int64 __fastcall ByteStreamHelper::readDataReference(__int64 a1, int a2)
    {
      SectorCommandMessage *v4; // x21
      int v5; // w0
      SectorCommandMessage *GlobalID; // x0
    
      v4 = (SectorCommandMessage *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
      if ( !(_DWORD)v4 )
        return 0;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
      GlobalID = (SectorCommandMessage *)GlobalID::createGlobalID(v4, v5);
      return LogicDataTables::getDataById(GlobalID, a2);
    }

    __int64 __fastcall ByteStreamHelper::writeGlobalID(__int64 a1, SectorCommandMessage *a2)
    {
      __int64 v3; // x19
      __int64 ClassID; // x21
      __int64 InstanceID; // x20
      __int64 (__fastcall *v6)(__int64, __int64); // x2
      __int64 v7; // x1
    
      v3 = a1;
      if ( (_DWORD)a2 )
      {
        ClassID = GlobalID::getClassID(a2);
        InstanceID = GlobalID::getInstanceID(a2);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 88LL))(v3, ClassID);
        v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 88LL);
        a1 = v3;
        v7 = InstanceID;
      }
      else
      {
        v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 88LL);
        v7 = 0;
      }
      return v6(a1, v7);
    }

    __int64 __fastcall ByteStreamHelper::encodeSpellList(__int64 a1, __int64 a2, const char *a3)
    {
      __int64 v5; // x21
      long double v6; // q0
      __int64 result; // x0
      __int64 v8; // x22
    
      v5 = *(unsigned int *)(a2 + 12);
      *(__n128 *)&v6 = Debugger::doAssert((Debugger *)((int)v5 < 200), (bool)"encodeSpellList: list size too big.", a3);
      result = (*(__int64 (__fastcall **)(__int64, __int64, long double))(*(_QWORD *)a1 + 88LL))(a1, v5, v6);
      if ( (int)v5 >= 1 )
      {
        v8 = 0;
        do
          result = ByteStreamHelper::writeDataReference(a1, *(AreaEffectObject **)(*(_QWORD *)a2 + 8 * v8++));
        while ( (_DWORD)v5 != (_DWORD)v8 );
      }
      return result;
    }

    __int64 __fastcall ByteStreamHelper::decodeSpellList(__int64 a1, __int64 a2, const char *a3)
    {
      long double v5; // q0
      int v6; // w21
      const char *v7; // x2
      __int64 result; // x0
      __int64 DataReference; // [xsp+8h] [xbp-28h] BYREF
    
      *(__n128 *)&v5 = Debugger::doAssert(
                         (Debugger *)(*(_DWORD *)(a2 + 12) == 0),
                         (bool)"decodeSpellList: pSpellList should be empty",
                         a3);
      v6 = (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)a1 + 152LL))(a1, v5);
      Debugger::doAssert((Debugger *)(v6 < 200), (bool)"decodeSpellList: list size too big.", v7);
      result = LogicArrayList<LogicSpellData const*>::ensureCapacity(a2, v6);
      if ( v6 >= 1 )
      {
        do
        {
          DataReference = ByteStreamHelper::readDataReference(a1, 7);
          result = LogicArrayList<LogicSpellData const*>::add(a2, &DataReference);
          --v6;
        }
        while ( v6 );
      }
      return result;
    }

}; // end class ByteStreamHelper
