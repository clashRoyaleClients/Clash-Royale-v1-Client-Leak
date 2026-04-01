class LogicSpellAIBlackboard
{
public:

    __int64 __fastcall LogicSpellAIBlackboard::LogicSpellAIBlackboard(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_DWORD *)result = 3;
      *(_DWORD *)(result + 4) = 3;
      *(_DWORD *)(result + 8) = 10;
      *(_QWORD *)(result + 16) = a2;
      return result;
    }

    __int64 __fastcall LogicSpellAIBlackboard::destruct(__int64 this)
    {
      *(_QWORD *)(this + 16) = 0;
      *(_QWORD *)(this + 24) = 0;
      *(_QWORD *)this = 0x300000003LL;
      *(_DWORD *)(this + 8) = 10;
      return this;
    }

    __int64 __fastcall LogicSpellAIBlackboard::setState(__int64 this, int a2, int a3)
    {
      *(_DWORD *)(this + 24) = a2;
      *(_DWORD *)(this + 28) = a3 / 50;
      return this;
    }

    __int64 __fastcall LogicSpellAIBlackboard::tick(__int64 this)
    {
      int v1; // w8
      bool v2; // vf
    
      v1 = *(_DWORD *)(this + 28);
      v2 = __OFSUB__(v1--, 1);
      *(_DWORD *)(this + 28) = v1;
      if ( (v1 < 0) ^ v2 | (v1 == 0) )
        *(_QWORD *)(this + 24) = 0;
      return this;
    }

    bool __fastcall LogicSpellAIBlackboard::shouldDefend(tween::Quint *this)
    {
      return (*((_DWORD *)this + 6) & 0xFFFFFFFD) == 1;
    }

    bool __fastcall LogicSpellAIBlackboard::shouldAttack(tween::Quint *this)
    {
      return *((_DWORD *)this + 6) == 2;
    }

}; // end class LogicSpellAIBlackboard
