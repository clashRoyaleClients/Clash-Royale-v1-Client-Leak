class LogicSpellCollection
{
public:

    void __fastcall LogicSpellCollection::LogicSpellCollection(LogicSpellCollection *this)
    {
      *((_DWORD *)this + 4) = 0;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
    }

    __int64 __fastcall LogicSpellCollection::encode(GameInputField *this, #1226 *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
    
      v4 = *((unsigned int *)this + 3);
      (*(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 88LL))(a2, v4);
      if ( (int)v4 >= 1 )
      {
        v5 = 0;
        do
          LogicSpell::encode(*(AreaEffectObject ***)(*(_QWORD *)this + 8 * v5++), a2);
        while ( (_DWORD)v4 != (_DWORD)v5 );
      }
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 4));
    }

    __int64 __fastcall LogicSpellCollection::decode(__int64 a1, char *a2)
    {
      const String *v4; // x1
      int v5; // w21
      int i; // w23
      LogicSpell *v7; // x22
      int v8; // w2
      __int64 result; // x0
      LogicSpell *v10; // [xsp+10h] [xbp-50h] BYREF
      String v11; // [xsp+18h] [xbp-48h] BYREF
    
      if ( *(int *)(a1 + 12) >= 1 )
      {
        String::format(
          (String *)"LogicSpellCollection.decode Trying to decode when already %d spells in collection",
          a2,
          *(unsigned int *)(a1 + 12));
        Debugger::error((Debugger *)&v11, v4);
      }
      v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      LogicArrayList<LogicSpell *>::ensureCapacity(a1, v5);
      if ( v5 >= 1 )
      {
        for ( i = 0; i < v5; ++i )
        {
          v7 = (LogicSpell *)operator new(48);
          LogicSpell::LogicSpell(v7);
          v10 = v7;
          LogicArrayList<LogicSpell *>::add(a1, (__int64 *)&v10);
          LogicSpell::decode(v7, (#1225 *)a2, v8);
        }
      }
      result = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 16) = result;
      return result;
    }

    __int64 __fastcall LogicSpellCollection::addSpell(GameInputField *this, TextField *a2)
    {
      __int64 v4; // x22
      __int64 i; // x23
      AreaEffectObject *SpellData; // x0
      __int64 GlobalID; // x0
      const char *v8; // x1
      const String *v9; // x1
      String v11; // [xsp+10h] [xbp-50h] BYREF
      TextField *v12; // [xsp+28h] [xbp-38h] BYREF
    
      v12 = a2;
      v4 = *((int *)this + 3);
      if ( (int)v4 >= 1 )
      {
        for ( i = 0; i < v4; ++i )
        {
          if ( (unsigned int)LogicSpell::equals(a2, *(const TextField **)(*(_QWORD *)this + 8 * i)) )
          {
            SpellData = (AreaEffectObject *)LogicSpell::getSpellData(a2);
            GlobalID = LogicData::getGlobalID(SpellData);
            String::format(
              (String *)"LogicSpellCollection.addSpell Trying to add spell that already exists in collection, data:%d",
              v8,
              GlobalID);
            Debugger::error((Debugger *)&v11, v9);
          }
        }
      }
      return LogicArrayList<LogicSpell *>::add((__int64)this, (__int64 *)&v12);
    }

    // attributes: thunk
    __int64 __fastcall LogicSpellCollection::removeSpell(GameInputField *this, int a2)
    {
      return LogicArrayList<LogicSpell *>::remove(this, a2);
    }

    __int64 __fastcall LogicSpellCollection::getSpell(GameInputField *this, int a2)
    {
      return *(_QWORD *)(*(_QWORD *)this + 8LL * a2);
    }

    void __fastcall LogicSpellCollection::destruct(GameInputField *this)
    {
      int v2; // w8
      int v3; // w20
      TextField *v4; // x0
      TextField *v5; // x21
      int v6; // w8
    
      v2 = *((_DWORD *)this + 3);
      v3 = v2 - 1;
      if ( v2 >= 1 )
      {
        do
        {
          v4 = (TextField *)LogicArrayList<LogicSpell *>::remove(this, v3);
          v5 = v4;
          if ( v4 )
          {
            LogicSpell::destruct(v4);
            operator delete(v5);
          }
          v6 = v3-- + 1;
        }
        while ( v6 > 1 );
      }
      *(_QWORD *)((char *)this + 12) = 0;
    }

    __int64 __fastcall LogicSpellCollection::swapSpells(GameInputField *this, int a2, TextField *a3)
    {
      __int64 v6; // x23
      __int64 i; // x24
      AreaEffectObject *SpellData; // x0
      __int64 GlobalID; // x0
      const char *v10; // x1
      const String *v11; // x1
      __int64 result; // x0
      String v13; // [xsp+8h] [xbp-48h] BYREF
    
      v6 = *((int *)this + 3);
      if ( (int)v6 >= 1 )
      {
        for ( i = 0; i < v6; ++i )
        {
          if ( (unsigned int)LogicSpell::equals(a3, *(const TextField **)(*(_QWORD *)this + 8 * i)) )
          {
            SpellData = (AreaEffectObject *)LogicSpell::getSpellData(a3);
            GlobalID = LogicData::getGlobalID(SpellData);
            String::format(
              (String *)"LogicSpellCollection.swapSpells Trying to add spell that already exists in collection, data:%d",
              v10,
              GlobalID);
            Debugger::error((Debugger *)&v13, v11);
          }
        }
      }
      result = *(_QWORD *)(*(_QWORD *)this + 8LL * a2);
      *(_QWORD *)(*(_QWORD *)this + 8LL * a2) = a3;
      return result;
    }

    __int64 __fastcall LogicSpellCollection::getLatestCreateTime(GameInputField *this, __int64 a2, int a3)
    {
      int v4; // w20
      __int64 v5; // x21
      __int64 v6; // x8
    
      v4 = *((_DWORD *)this + 3);
      if ( v4 < 1 )
        return 0xFFFFFFFFLL;
      v5 = 0;
      LODWORD(v6) = -1;
      do
        v6 = LogicMath::max((LogicMath *)*(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 8 * v5++) + 12LL), v6, a3);
      while ( v4 != (_DWORD)v5 );
      return v6;
    }

    TextField *__fastcall LogicSpellCollection::getSpellByData(GameInputField *this, const InitState *a2)
    {
      __int64 v4; // x22
      __int64 v5; // x23
      TextField *v6; // x21
      __int64 SpellData; // x0
    
      v4 = *((int *)this + 3);
      if ( (int)v4 < 1 )
        return 0;
      v5 = 0;
      while ( 1 )
      {
        v6 = *(TextField **)(*(_QWORD *)this + 8 * v5);
        SpellData = LogicSpell::getSpellData(v6);
        if ( LogicData::equals(SpellData, (__int64)a2) )
          break;
        if ( ++v5 >= v4 )
          return 0;
      }
      return v6;
    }

    __int64 __fastcall LogicSpellCollection::getSpellIdxByData(GameInputField *this, const InitState *a2)
    {
      __int64 v4; // x22
      __int64 v5; // x19
      __int64 SpellData; // x0
    
      v4 = *((int *)this + 3);
      if ( (int)v4 < 1 )
        return 0xFFFFFFFFLL;
      v5 = 0;
      while ( 1 )
      {
        SpellData = LogicSpell::getSpellData(*(TextField **)(*(_QWORD *)this + 8 * v5));
        if ( LogicData::equals(SpellData, (__int64)a2) )
          break;
        if ( ++v5 >= v4 )
          return 0xFFFFFFFFLL;
      }
      return v5;
    }

    __int64 __fastcall LogicSpellCollection::getSpellCount(GameInputField *this, const InitState *a2)
    {
      int v4; // w22
      __int64 v5; // x23
      __int64 v6; // x21
      __int64 SpellData; // x0
    
      v4 = *((_DWORD *)this + 3);
      if ( v4 < 1 )
        return 0;
      v5 = 0;
      LODWORD(v6) = 0;
      do
      {
        SpellData = LogicSpell::getSpellData(*(TextField **)(*(_QWORD *)this + 8 * v5));
        v6 = (unsigned int)(LogicData::equals(SpellData, (__int64)a2) + (_DWORD)v6);
        ++v5;
      }
      while ( v4 != (_DWORD)v5 );
      return v6;
    }

    _QWORD *__fastcall LogicSpellCollection::setSpell(_QWORD *this, int a2, TextField *a3)
    {
      *(_QWORD *)(*this + 8LL * a2) = a3;
      return this;
    }

    __int64 __fastcall LogicSpellCollection::getCurrentSort(GameInputField *this)
    {
      return *((unsigned int *)this + 4);
    }

}; // end class LogicSpellCollection
