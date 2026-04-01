class LogicReward
{
public:

    void __fastcall LogicReward::LogicReward(LogicReward *this)
    {
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
    }

    __int64 __fastcall LogicReward::encode(ChallengeFailedMessage *this, #1226 *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
    
      if ( *(_QWORD *)this )
      {
        v4 = *(unsigned int *)(*(_QWORD *)this + 12LL);
        (*(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 88LL))(a2, v4);
        if ( (int)v4 >= 1 )
        {
          v5 = 0;
          do
            LogicSpell::encode(*(AreaEffectObject ***)(**(_QWORD **)this + 8 * v5++), a2);
          while ( (_DWORD)v4 != (_DWORD)v5 );
        }
      }
      else
      {
        (*(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 88LL))(a2, 0xFFFFFFFFLL);
      }
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 2));
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 3));
    }

    __int64 __fastcall LogicReward::decode(int **this, #1225 *a2)
    {
      int *v4; // x21
      __int64 v5; // x23
      void *v6; // x22
      int v7; // w21
      int *v8; // x0
      int i; // w23
      LogicSpell *v10; // x22
      int v11; // w2
      __int64 result; // x0
      LogicSpell *v13; // [xsp+8h] [xbp-38h] BYREF
    
      v4 = *this;
      if ( *this )
      {
        if ( v4[3] < 1 )
          goto LABEL_18;
        v5 = 0;
        do
        {
          v6 = *(void **)(*(_QWORD *)v4 + 8 * v5);
          if ( v6 )
          {
            LogicSpell::destruct(*(TextField **)(*(_QWORD *)v4 + 8 * v5));
            operator delete(v6);
            v4 = *this;
          }
          ++v5;
        }
        while ( v5 < v4[3] );
        if ( v4 )
        {
    LABEL_18:
          if ( *(_QWORD *)v4 )
            operator delete[](*(_QWORD *)v4);
          operator delete(v4);
        }
      }
      *this = 0;
      v7 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      if ( v7 != -1 )
      {
        v8 = (int *)operator new(16);
        *(_QWORD *)v8 = 0;
        *((_QWORD *)v8 + 1) = 0;
        *this = v8;
        if ( v7 >= 1 )
        {
          for ( i = 0; i < v7; ++i )
          {
            v10 = (LogicSpell *)operator new(48);
            LogicSpell::LogicSpell(v10);
            v13 = v10;
            LogicArrayList<LogicSpell *>::add((__int64)*this, (__int64 *)&v13);
            LogicSpell::decode(v10, a2, v11);
          }
        }
      }
      *((_DWORD *)this + 2) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 3) = result;
      return result;
    }

    void __fastcall LogicReward::destroySpells(void **this)
    {
      _DWORD *v2; // x20
      int v3; // w22
      __int64 v4; // x23
      void *v5; // x21
    
      v2 = *this;
      if ( *this )
      {
        v3 = v2[3];
        if ( v3 < 1 )
          goto LABEL_14;
        v4 = 0;
        do
        {
          v5 = *(void **)(*(_QWORD *)v2 + 8 * v4);
          if ( v5 )
          {
            LogicSpell::destruct(*(TextField **)(*(_QWORD *)v2 + 8 * v4));
            operator delete(v5);
            v2 = *this;
          }
          ++v4;
        }
        while ( v3 != (_DWORD)v4 );
        if ( v2 )
        {
    LABEL_14:
          if ( *(_QWORD *)v2 )
            operator delete[](*(_QWORD *)v2);
          operator delete(v2);
        }
        *this = 0;
      }
    }

    void __fastcall LogicReward::destruct(void **this)
    {
      LogicReward::destroySpells(this);
      *this = 0;
      *(this + 1) = 0;
    }

    __int64 __fastcall LogicReward::compareSpells(ChallengeFailedMessage *this, TextField *a2, TextField *a3)
    {
      InitState *SpellData; // x0
      __int64 Rarity; // x21
      InitState *v7; // x0
      __int64 v8; // x22
      int SortOrder; // w0
      bool v10; // cc
    
      SpellData = (InitState *)LogicSpell::getSpellData(this);
      Rarity = LogicSpellData::getRarity(SpellData);
      v7 = (InitState *)LogicSpell::getSpellData(a2);
      v8 = LogicSpellData::getRarity(v7);
      LODWORD(Rarity) = LogicRarityData::getSortOrder(Rarity);
      SortOrder = LogicRarityData::getSortOrder(v8);
      v10 = (int)Rarity < SortOrder;
      if ( (_DWORD)Rarity == SortOrder )
        v10 = *((_DWORD *)this + 4) < *((_DWORD *)a2 + 4);
      if ( v10 )
        return 1;
      else
        return 0xFFFFFFFFLL;
    }

    __int64 __fastcall LogicReward::sortSpells(__int64 result, __int64 a2, TextField *a3)
    {
      _QWORD *v3; // x19
      int v4; // w8
      __int64 v5; // x20
      int v6; // w21
      __int64 v7; // x22
      __int64 v8; // x23
      _QWORD *v9; // x8
      __int64 v10; // x10
      __int64 v11; // x8
    
      v3 = (_QWORD *)result;
      v4 = *(_DWORD *)(result + 12);
      if ( v4 >= 2 )
      {
        v5 = 0;
        v6 = v4 - 1;
        v7 = 1;
        do
        {
          v8 = v5;
          do
          {
            result = LogicReward::compareSpells(
                       *(ChallengeFailedMessage **)(*v3 + 8 * v8 + 8),
                       *(TextField **)(*v3 + 8 * v8),
                       a3);
            if ( (int)result < 1 )
              break;
            v9 = (_QWORD *)(*v3 + 8 * v8);
            v10 = v9[1];
            v9[1] = *v9;
            *(_QWORD *)(*v3 + 8 * v8) = v10;
            v11 = v8-- + 1;
          }
          while ( v11 > 1 );
          ++v5;
        }
        while ( (_DWORD)v7++ != v6 );
      }
      return result;
    }

    void __fastcall LogicReward::setSpells(void **a1, __int64 a2, TextField *a3)
    {
      int v3; // w20
    
      v3 = (int)a3;
      if ( *a1 != (void *)a2 )
      {
        LogicReward::destroySpells(a1);
        *a1 = (void *)a2;
      }
      if ( a2 )
      {
        if ( ((v3 ^ 1) & 1) == 0 )
          LogicReward::sortSpells(a2, a2, a3);
      }
    }

    __int64 __fastcall LogicReward::clone(ChallengeFailedMessage *this)
    {
      __int64 v2; // x20
      _BYTE v4[48]; // [xsp+0h] [xbp-40h] BYREF
    
      v2 = operator new(16);
      *(_QWORD *)v2 = 0;
      *(_QWORD *)(v2 + 8) = 0;
      ByteStream::ByteStream((ByteStream *)v4, 128);
      LogicReward::encode(this, (#1226 *)v4);
      ByteStream::resetOffset((ByteStream *)v4);
      LogicReward::decode((int **)v2, (#1225 *)v4);
      ByteStream::destruct((#1225 *)v4);
      return v2;
    }

}; // end class LogicReward
