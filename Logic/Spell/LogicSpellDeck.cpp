class LogicSpellDeck
{
public:

    void __fastcall LogicSpellDeck::LogicSpellDeck(LogicSpellDeck *this)
    {
      *((_QWORD *)this + 7) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 6) = 0;
      *(_QWORD *)this = off_10045E930;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 1) = 0;
    }

    _QWORD *__fastcall LogicSpellDeck::clone(AcceptChallengeMessage *this)
    {
      _QWORD *v2; // x19
      __int64 v3; // x21
      char *v4; // x20
      TextField *v5; // x0
    
      v2 = (_QWORD *)operator new(72);
      v3 = 0;
      *v2 = off_10045E930;
      v2[7] = 0;
      v2[8] = 0;
      v2[5] = 0;
      v2[6] = 0;
      v2[3] = 0;
      v2[4] = 0;
      v2[2] = 0;
      v4 = (char *)this + 8;
      v2[1] = 0;
      do
      {
        v5 = *(TextField **)&v4[v3 * 8];
        if ( v5 )
          v2[v3 + 1] = LogicSpell::clone(v5);
        ++v3;
      }
      while ( v3 != 8 );
      return v2;
    }

    TextField *__fastcall LogicSpellDeck::encode(AcceptChallengeMessage *this, #1226 *a2)
    {
      __int64 v4; // x21
      char *v5; // x22
      __int64 v6; // x21
      char *v7; // x20
      TextField *result; // x0
    
      v4 = 0;
      v5 = (char *)this + 8;
      do
      {
        (*(void (__fastcall **)(#1226 *, bool))(*(_QWORD *)a2 + 48LL))(a2, *(_QWORD *)&v5[v4] != 0);
        v4 += 8;
      }
      while ( v4 != 64 );
      v6 = 0;
      v7 = (char *)this + 8;
      do
      {
        result = *(TextField **)&v7[v6];
        if ( result )
          result = (TextField *)LogicSpell::encode(result, a2);
        v6 += 8;
      }
      while ( v6 != 64 );
      return result;
    }

    TextField *__fastcall LogicSpellDeck::decode(AcceptChallengeMessage *this, #1225 *a2)
    {
      __int64 v4; // x22
      char *v5; // x23
      TextField *v6; // x21
      TextField *v7; // x21
      __int64 v8; // x21
      char *v9; // x20
      TextField *result; // x0
    
      v4 = 0;
      v5 = (char *)this + 8;
      do
      {
        v6 = *(TextField **)&v5[8 * v4];
        if ( (*(unsigned int (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2) )
        {
          if ( !v6 )
          {
            v7 = (TextField *)operator new(48);
            LogicSpell::LogicSpell(v7);
            *(_QWORD *)&v5[8 * v4] = v7;
          }
        }
        else
        {
          if ( v6 )
          {
            LogicSpell::destruct(v6);
            operator delete(v6);
          }
          *(_QWORD *)&v5[8 * v4] = 0;
        }
        ++v4;
      }
      while ( v4 < 8 );
      v8 = 0;
      v9 = (char *)this + 8;
      do
      {
        result = *(TextField **)&v9[v8];
        if ( result )
          result = (TextField *)LogicSpell::decode(result, a2);
        v8 += 8;
      }
      while ( v8 != 64 );
      return result;
    }

    __int64 __fastcall LogicSpellDeck::load(AcceptChallengeMessage *this, const #1228 *a2)
    {
      __int64 result; // x0
      __int64 v5; // x21
      const #1234 *JSONObject; // x23
      TextField *v7; // x22
    
      result = LogicJSONArray::size(a2);
      if ( (int)result >= 1 )
      {
        v5 = 0;
        do
        {
          JSONObject = (const #1234 *)LogicJSONArray::getJSONObject(a2, v5);
          if ( (int)LogicJSONObject::getObjectCount(JSONObject) >= 1 )
          {
            v7 = (TextField *)operator new(48);
            LogicSpell::LogicSpell(v7);
            LogicSpell::load(v7, JSONObject);
            if ( (int)v5 > 7 )
            {
              LogicSpell::destruct(v7);
              operator delete(v7);
            }
            else
            {
              LogicSpellDeck::putSpellInEmptySlot(this, v5, v7);
            }
          }
          v5 = (unsigned int)(v5 + 1);
          result = LogicJSONArray::size(a2);
        }
        while ( (int)v5 < (int)result );
      }
      return result;
    }

    __int64 __fastcall LogicSpellDeck::putSpellInEmptySlot(__int64 this, const char *a2, TextField *a3)
    {
      const String *v3; // x1
      __int64 v4; // x21
      _QWORD *v5; // x21
      __int64 v6; // t1
      const String *v7; // x1
      String v8; // [xsp+10h] [xbp-50h] BYREF
      String v9; // [xsp+28h] [xbp-38h] BYREF
    
      if ( (unsigned int)a2 >= 8 )
      {
        String::format((String *)"LogicSpellDeck.putSpell out of bounds %d/%d", a2, a3, a2, 8);
        Debugger::error((Debugger *)&v9, v3);
      }
      v4 = this + 8LL * (int)a2;
      v6 = *(_QWORD *)(v4 + 8);
      v5 = (_QWORD *)(v4 + 8);
      if ( v6 )
      {
        String::format((String *)"LogicSpellDeck.putSpell trying to overwrite a spell at %d", a2, a3, a2);
        Debugger::error((Debugger *)&v8, v7);
      }
      *v5 = a3;
      return this;
    }

    LogicJSONArray *__fastcall LogicSpellDeck::save(AcceptChallengeMessage *this)
    {
      LogicJSONArray *v2; // x19
      __int64 v3; // x21
      char *v4; // x22
      TextField *v5; // x0
      __int64 v6; // x1
      LogicJSONArray *v7; // x0
      #1234 *v8; // x20
    
      v2 = (LogicJSONArray *)operator new(24);
      LogicJSONArray::LogicJSONArray(v2, 8);
      v3 = 0;
      v4 = (char *)this + 8;
      do
      {
        v5 = *(TextField **)&v4[8 * v3];
        if ( v5 )
        {
          v6 = LogicSpell::save(v5);
          v7 = v2;
        }
        else
        {
          v8 = (#1234 *)operator new(40);
          LogicJSONObject::LogicJSONObject(v8, 0);
          v7 = v2;
          v6 = (__int64)v8;
        }
        LogicJSONArray::add(v7, v6);
        ++v3;
      }
      while ( v3 < 8 );
      return v2;
    }

    void __fastcall LogicSpellDeck::clear(AcceptChallengeMessage *this)
    {
      __int64 v1; // x19
      char *v2; // x20
      TextField *v3; // x0
      void *v4; // x0
    
      v1 = 0;
      v2 = (char *)this + 8;
      do
      {
        v3 = *(TextField **)&v2[v1];
        if ( v3 )
        {
          LogicSpell::destruct(v3);
          v4 = *(void **)&v2[v1];
          if ( v4 )
            operator delete(v4);
          *(_QWORD *)&v2[v1] = 0;
        }
        v1 += 8;
      }
      while ( v1 != 64 );
    }

    void __fastcall LogicSpellDeck::destruct(AcceptChallengeMessage *this)
    {
      LogicSpellDeck::clear(this);
      *((_QWORD *)this + 7) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
    }

    __int64 __fastcall LogicSpellDeck::canBeInserted(AcceptChallengeMessage *this, const TextField *a2, int a3)
    {
      char *v5; // x8
      TextField *v6; // x21
      __int64 SpellData; // x22
      __int64 v8; // x0
      __int64 v9; // x22
      char *v10; // x23
      TextField *v11; // x20
      __int64 v12; // x21
      __int64 v13; // x0
    
      v5 = (char *)this + 8 * a3;
      v6 = (TextField *)*((_QWORD *)v5 + 1);
      if ( v6 )
      {
        SpellData = LogicSpell::getSpellData(*((TextField **)v5 + 1));
        v8 = LogicSpell::getSpellData(a2);
        if ( (unsigned int)LogicData::equals(SpellData, v8) )
        {
          if ( !(unsigned int)LogicSpell::equals(v6, a2) )
            return 1;
        }
      }
      v9 = 0;
      v10 = (char *)this + 8;
      while ( 1 )
      {
        v11 = *(TextField **)&v10[8 * v9];
        if ( v11 )
        {
          if ( (LogicSpell::equals(a2, *(const TextField **)&v10[8 * v9]) & 1) != 0 )
            break;
          v12 = LogicSpell::getSpellData(a2);
          v13 = LogicSpell::getSpellData(v11);
          if ( (LogicData::equals(v12, v13) & 1) != 0 )
            break;
        }
        if ( ++v9 >= 8 )
          return 1;
      }
      return 0;
    }

    __int64 __fastcall LogicSpellDeck::moveSpellFromCollection(
            AcceptChallengeMessage *this,
            const char *a2,
            #927 *a3,
            int a4)
    {
      const TextField *Spell; // x23
      const char *v9; // x1
      const String *v10; // x1
      char *v11; // x24
      TextField *v12; // x2
      _QWORD *v13; // x24
      TextField *v14; // t1
      __int64 result; // x0
      String v16; // [xsp+8h] [xbp-48h] BYREF
    
      Spell = (const TextField *)LogicSpellCollection::getSpell(a3, a4);
      if ( (LogicSpellDeck::canBeInserted(this, Spell, (int)a2) & 1) == 0 )
      {
        String::format(
          (String *)"LogicSpellDeck.moveSpellFromCollection canBeInserted returns false, should check it before trying to move.",
          v9);
        Debugger::error((Debugger *)&v16, v10);
      }
      v11 = (char *)this + 8 * (int)a2;
      v14 = (TextField *)*((_QWORD *)v11 + 1);
      v13 = v11 + 8;
      v12 = v14;
      *v13 = 0;
      if ( v14 )
      {
        result = LogicSpellCollection::swapSpells(a3, a4, v12);
        *v13 = result;
      }
      else
      {
        LogicSpellCollection::removeSpell(a3, a4);
        return LogicSpellDeck::putSpellInEmptySlot((__int64)this, a2, Spell);
      }
      return result;
    }

    __int64 __fastcall LogicSpellDeck::getSpell(AcceptChallengeMessage *this, const char *a2)
    {
      const String *v2; // x1
      String v4; // [xsp+18h] [xbp-28h] BYREF
    
      if ( (unsigned int)a2 >= 8 )
      {
        String::format((String *)"LogicSpellDeck.getSpell out of bounds %d/%d", a2, a2, 8);
        Debugger::error((Debugger *)&v4, v2);
      }
      return *((_QWORD *)this + (int)a2 + 1);
    }

    __int64 __fastcall LogicSpellDeck::size(AcceptChallengeMessage *this)
    {
      return 8;
    }

    __int64 __fastcall LogicSpellDeck::getSpellIdx(__int64 a1, __int64 a2)
    {
      __int64 result; // x0
      __int64 v4; // x8
    
      result = 0;
      v4 = a1 + 8;
      while ( *(_QWORD *)(v4 + 8 * result) != a2 )
      {
        if ( ++result >= 8 )
          return 0xFFFFFFFFLL;
      }
      return result;
    }

    __int64 __fastcall LogicSpellDeck::isFull(AcceptChallengeMessage *this)
    {
      __int64 v1; // x8
    
      v1 = 0;
      while ( *((_QWORD *)this + v1 + 1) )
      {
        if ( ++v1 > 7 )
          return 1;
      }
      return 0;
    }

    bool __fastcall LogicSpellDeck::isEmpty(AcceptChallengeMessage *this)
    {
      __int64 v1; // x9
      int v2; // w8
    
      v1 = 0;
      v2 = 0;
      do
      {
        if ( *(_QWORD *)((char *)this + v1 + 8) )
          ++v2;
        v1 += 8;
      }
      while ( v1 != 64 );
      return v2 == 0;
    }

    __int64 __fastcall LogicSpellDeck::getSpellCnt(__int64 this)
    {
      __int64 v1; // x8
      __int64 v2; // x9
      __int64 v3; // x8
    
      v1 = this;
      v2 = 0;
      LODWORD(this) = 0;
      v3 = v1 + 8;
      do
      {
        if ( *(_QWORD *)(v3 + v2) )
          this = (unsigned int)(this + 1);
        else
          this = (unsigned int)this;
        v2 += 8;
      }
      while ( v2 != 64 );
      return this;
    }

    __int64 __fastcall LogicSpellDeck::getSpellByData(AcceptChallengeMessage *this, const #895 *a2)
    {
      __int64 v3; // x21
      char *v4; // x22
      __int64 v5; // x20
      __int64 SpellData; // x0
    
      v3 = 0;
      v4 = (char *)this + 8;
      while ( 1 )
      {
        v5 = *(_QWORD *)&v4[8 * v3];
        if ( v5 )
        {
          SpellData = LogicSpell::getSpellData(*(TextField **)&v4[8 * v3]);
          if ( (LogicData::equals(a2, SpellData) & 1) != 0 )
            break;
        }
        if ( ++v3 >= 8 )
          return 0;
      }
      return v5;
    }

    __int64 __fastcall LogicSpellDeck::getSpellIdxByData(AcceptChallengeMessage *this, const #895 *a2)
    {
      __int64 v3; // x19
      char *v4; // x21
      TextField *v5; // x0
      __int64 SpellData; // x0
    
      v3 = 0;
      v4 = (char *)this + 8;
      while ( 1 )
      {
        v5 = *(TextField **)&v4[8 * v3];
        if ( v5 )
        {
          SpellData = LogicSpell::getSpellData(v5);
          if ( (LogicData::equals(a2, SpellData) & 1) != 0 )
            break;
        }
        if ( ++v3 >= 8 )
          return 0xFFFFFFFFLL;
      }
      return v3;
    }

    bool __fastcall LogicSpellDeck::containsSpellData(AcceptChallengeMessage *this, const #895 *a2)
    {
      return (unsigned int)LogicSpellDeck::getSpellIdxByData(this, a2) != -1;
    }

    __int64 __fastcall LogicSpellDeck::getSpellCount(AcceptChallengeMessage *this, const #895 *a2)
    {
      __int64 v3; // x21
      __int64 v4; // x20
      char *v5; // x22
      TextField *v6; // x0
      __int64 SpellData; // x0
    
      v3 = 0;
      v4 = 0;
      v5 = (char *)this + 8;
      do
      {
        v6 = *(TextField **)&v5[v3];
        if ( v6 )
        {
          SpellData = LogicSpell::getSpellData(v6);
          v4 = (unsigned int)LogicData::equals(a2, SpellData) + (unsigned int)v4;
        }
        v3 += 8;
      }
      while ( v3 != 64 );
      return v4;
    }

    TextField *__fastcall LogicSpellDeck::initForServerEvents(TextField *this, int a2, int a3)
    {
      __int64 v5; // x21
      char *v6; // x22
    
      if ( LogicServerEventCollector::ENABLED )
      {
        v5 = 0;
        v6 = (char *)this + 8;
        do
        {
          this = *(TextField **)&v6[v5];
          if ( this )
            this = (TextField *)LogicSpell::initForServerEvents(this, a2, a3);
          v5 += 8;
        }
        while ( v5 != 64 );
      }
      return this;
    }

    __int64 __fastcall LogicSpellDeck::setSpell(__int64 result, int a2, __int64 a3)
    {
      *(_QWORD *)(result + 8LL * a2 + 8) = a3;
      return result;
    }

    void __fastcall LogicSpellDeck::~LogicSpellDeck(AcceptChallengeMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicSpellDeck::~LogicSpellDeck(AcceptChallengeMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicSpellDeck
