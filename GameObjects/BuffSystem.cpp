class BuffSystem
{
public:

    _QWORD *__fastcall BuffSystem::BuffSystem(_QWORD *result, __int64 a2, __int64 a3)
    {
      result[1] = 0;
      result[2] = 0;
      *result = 0;
      *result = a2;
      result[3] = a3;
      return result;
    }

    __int64 __fastcall BuffSystem::~BuffSystem(__int64 a1)
    {
      _QWORD *v2; // x19
      int v3; // w8
      __int64 v4; // x21
      __int64 v5; // x0
      void *v6; // x22
      int v7; // w8
      __int64 v8; // x0
    
      v2 = (_QWORD *)(a1 + 8);
      v3 = *(_DWORD *)(a1 + 20);
      v4 = (unsigned int)(v3 - 1);
      if ( v3 >= 1 )
      {
        do
        {
          v5 = LogicArrayList<Buff *>::remove(v2, v4);
          v6 = (void *)v5;
          if ( v5 )
          {
            Buff::~Buff(v5);
            operator delete(v6);
          }
          v7 = v4 + 1;
          v4 = (unsigned int)(v4 - 1);
        }
        while ( v7 > 1 );
      }
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 20) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 )
        operator delete[](v8);
      *v2 = 0;
      v2[1] = 0;
      return a1;
    }

    // attributes: thunk
    void __fastcall BuffSystem::~BuffSystem(__int64 this)
    {
      __ZN10BuffSystemD2Ev(this);
    }

    void __fastcall BuffSystem::update(__int64 a1, float a2)
    {
      __int64 BuffCount; // x19
      _QWORD *v5; // x20
      GameMode *Parent; // x22
      __int64 v7; // x23
      __int64 Buff; // x25
      __int64 BuffIndex; // x0
      LogicDeco *v10; // x24
      int v11; // w8
      __int64 v12; // x21
      __int64 v13; // x0
      void *v14; // x22
      bool v15; // cc
      LogicDeco *v16; // [xsp+8h] [xbp-58h] BYREF
    
      BuffCount = LogicCharacterBuffComponent::getBuffCount(*(FriendListMessage **)a1);
      v5 = (_QWORD *)(a1 + 8);
      Parent = (GameMode *)LogicComponent::getParent(*(Sprite **)a1);
      LogicArrayList<Buff *>::ensureCapacity(a1 + 8, BuffCount);
      if ( (int)BuffCount >= 1 )
      {
        v7 = 0;
        while ( 1 )
        {
          Buff = LogicCharacterBuffComponent::getBuff(*(FriendListMessage **)a1, v7);
          BuffIndex = BuffSystem::getBuffIndex(a1, Buff, v7);
          v16 = 0;
          if ( (_DWORD)BuffIndex == -1 )
            break;
          v10 = *(LogicDeco **)(*v5 + 8LL * (int)BuffIndex);
          v16 = v10;
          if ( (int)BuffIndex > (int)v7 )
          {
            LogicArrayList<Buff *>::remove(a1 + 8, BuffIndex);
    LABEL_7:
            LogicArrayList<Buff *>::add(a1 + 8, v7, &v16);
          }
          Buff::update(v10, a2);
          v7 = (unsigned int)(v7 + 1);
          if ( (int)v7 >= (int)BuffCount )
            goto LABEL_9;
        }
        v10 = (LogicDeco *)operator new(32);
        Buff::Buff((__int64)v10, Buff, Parent, *(ShutdownStartedMessage **)(a1 + 24));
        v16 = v10;
        goto LABEL_7;
      }
    LABEL_9:
      v11 = *(_DWORD *)(a1 + 20);
      if ( v11 > (int)BuffCount )
      {
        v12 = (unsigned int)(v11 - 1);
        do
        {
          v13 = LogicArrayList<Buff *>::remove(v5, v12);
          v14 = (void *)v13;
          if ( v13 )
          {
            Buff::~Buff(v13);
            operator delete(v14);
          }
          v15 = (int)v12 <= (int)BuffCount;
          v12 = (unsigned int)(v12 - 1);
        }
        while ( !v15 );
      }
    }

    __int64 __fastcall BuffSystem::getBuffIndex(__int64 a1, __int64 a2, int a3)
    {
      __int64 v5; // x22
      __int64 v6; // x19
    
      v5 = *(int *)(a1 + 20);
      if ( (int)v5 <= a3 )
        return 0xFFFFFFFFLL;
      v6 = a3;
      while ( Buff::getLogic(*(LogicDeco **)(*(_QWORD *)(a1 + 8) + 8 * v6)) != a2 )
      {
        if ( ++v6 >= v5 )
          return 0xFFFFFFFFLL;
      }
      return v6;
    }

}; // end class BuffSystem
