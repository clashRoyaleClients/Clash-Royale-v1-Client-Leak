class LogicSpellSet
{
public:

    void __fastcall LogicSpellSet::LogicSpellSet(LogicSpellSet *this, const #1143 *a2, const #907 *a3)
    {
      _QWORD *v6; // x0
      int v7; // w1
      __int64 Table; // x22
      int v9; // w1
      int v10; // w24
      __int64 v11; // x23
      _QWORD *v12; // x0
      int v13; // w20
      const #895 *Spell; // x0
      __int64 v15; // x21
      __int64 v16; // x22
      const #895 *v17; // x23
      _QWORD *v18; // [xsp+8h] [xbp-38h] BYREF
    
      v6 = (_QWORD *)operator new(16);
      *v6 = 0;
      v6[1] = 0;
      *(_QWORD *)this = v6;
      Table = LogicDataTables::getTable((LogicDataTables *)0xE, v7);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) >= 1 )
      {
        v10 = 0;
        do
        {
          v11 = *(_QWORD *)this;
          v12 = (_QWORD *)operator new(16);
          *v12 = 0;
          v12[1] = 0;
          v18 = v12;
          LogicArrayList<LogicArrayList*<LogicSpellData const*>>::add(v11, &v18);
          ++v10;
        }
        while ( v10 < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table) );
      }
      if ( a3 )
      {
        if ( (int)LogicSpellSetData::getSize(a3) >= 1 )
        {
          v13 = 0;
          do
          {
            Spell = (const #895 *)LogicSpellSetData::getSpell(a3, v13);
            LogicSpellSet::addSpell(this, Spell);
            ++v13;
          }
          while ( v13 < (int)LogicSpellSetData::getSize(a3) );
        }
      }
      else
      {
        v15 = LogicDataTables::getTable((LogicDataTables *)7, v9);
        if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15) >= 1 )
        {
          v16 = 0;
          do
          {
            v17 = (const #895 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 40LL))(v15, v16);
            if ( (unsigned int)LogicSpellData::isUnlockedInArena(v17, a2) )
              LogicSpellSet::addSpell(this, v17);
            v16 = (unsigned int)(v16 + 1);
          }
          while ( (int)v16 < (*(int (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15) );
        }
      }
    }

    __int64 __fastcall LogicSpellSet::addSpell(#1304 *this, const #895 *a2)
    {
      __int64 result; // x0
      #916 *Rarity; // x0
      int InstanceID; // w0
      const #895 *v7; // [xsp+8h] [xbp-18h] BYREF
    
      v7 = a2;
      result = LogicSpellData::isNotInUse(a2);
      if ( (result & 1) == 0 )
      {
        Rarity = (#916 *)LogicSpellData::getRarity(a2);
        InstanceID = LogicData::getInstanceID(Rarity);
        return LogicArrayList<LogicSpellData const*>::add(*(_QWORD *)(**(_QWORD **)this + 8LL * InstanceID), (__int64 *)&v7);
      }
      return result;
    }

    // attributes: thunk
    void __fastcall LogicSpellSet::LogicSpellSet(LogicSpellSet *this, const #1143 *a2, const #907 *a3)
    {
      __ZN13LogicSpellSetC2EPK14LogicArenaDataPK17LogicSpellSetData(this, a2, a3);
    }

    void __fastcall LogicSpellSet::destruct(__int64 **this)
    {
      __int64 *v2; // x20
      __int64 v3; // x21
      __int64 v4; // x8
      _QWORD *v5; // x20
    
      v2 = *this;
      if ( *((int *)*this + 3) >= 1 )
      {
        v3 = 0;
        do
        {
          v4 = *v2;
          v5 = *(_QWORD **)(*v2 + 8 * v3);
          if ( v5 )
          {
            if ( *v5 )
              operator delete[](*v5);
            operator delete(v5);
            v4 = **this;
          }
          *(_QWORD *)(v4 + 8 * v3++) = 0;
          v2 = *this;
        }
        while ( v3 < *((int *)*this + 3) );
      }
      if ( v2 )
      {
        if ( *v2 )
          operator delete[](*v2);
        operator delete(v2);
      }
      *this = 0;
    }

    __int64 __fastcall LogicSpellSet::getRandomSpell(#1304 *this, #1233 *a2, const #923 *a3)
    {
      __int64 v5; // x21
      int v6; // w1
      __int64 Name; // x0
      const String *v9; // x1
      String v10; // [xsp+8h] [xbp-38h] BYREF
    
      v5 = *(_QWORD *)(**(_QWORD **)this + 8LL * (int)LogicData::getInstanceID(a3));
      v6 = *(_DWORD *)(v5 + 12);
      if ( v6 )
        return *(_QWORD *)(*(_QWORD *)v5 + 8LL * (int)LogicMersenneTwisterRandom::rand(a2, v6));
      Name = LogicData::getName(a3);
      operator+(&v10, "LogicSpellSet::getRandomSpell() - No spell found for rarity: ", Name);
      Debugger::warning((__siginfo *)&v10, v9);
      String::~String(&v10);
      return 0;
    }

}; // end class LogicSpellSet
