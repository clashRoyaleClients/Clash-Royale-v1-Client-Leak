class std::vector<Character::LoopingEffectState,std::allocator<Character::LoopingEffectState>>
{
public:

    __int64 __fastcall std::vector<Character::LoopingEffectState>::~vector(__int64 a1)
    {
      _DWORD *v2; // x0
      _DWORD *v3; // x8
      _DWORD *v4; // x10
    
      v2 = *(_DWORD **)a1;
      v3 = *(_DWORD **)(a1 + 8);
      if ( v2 != v3 )
      {
        v4 = v2;
        do
        {
          *v4 = -1;
          v4[1] = -1;
          *((_QWORD *)v4 + 1) = 0;
          v4 += 4;
        }
        while ( v4 != v3 );
      }
      if ( v2 )
        operator delete(v2);
      return a1;
    }

    void __fastcall std::vector<Character::LoopingEffectState>::_M_insert_aux(__int64 *a1, __int64 a2, int *a3)
    {
      char *v4; // x19
      _OWORD *v6; // x8
      __int64 v7; // x12
      int v8; // w8
      int v9; // w9
      __int64 v10; // x10
      _OWORD *v11; // x11
      __int64 v12; // x13
      __int64 v13; // x13
      __int64 v14; // x0
      __int64 v15; // x14
      __int64 v16; // x9
      unsigned __int64 v17; // x8
      unsigned __int64 v18; // x23
      __int64 v19; // x0
      __int64 v20; // x21
      _BYTE *v21; // x9
      _OWORD *v22; // x8
      __int64 v23; // x10
      _OWORD *v24; // x22
      char *v25; // x9
      _OWORD *v26; // x12
      char *v27; // x11
      __int128 v28; // t1
      _OWORD *v29; // x13
      void *v30; // x0
      char *v31; // x9
    
      v4 = (char *)a2;
      v6 = (_OWORD *)a1[1];
      if ( v6 == (_OWORD *)a1[2] )
      {
        v16 = (__int64)v6 - *a1;
        v17 = v16 >> 4;
        v18 = 1;
        if ( v16 >> 4 )
        {
          if ( v17 == 0xFFFFFFFFFFFFFFFLL )
            std::__throw_length_error("vector::_M_insert_aux");
          v18 = v16 >> 3;
        }
        if ( v18 >= v17 )
        {
          if ( v18 >> 60 )
            std::__throw_bad_alloc();
        }
        else
        {
          v18 = 0xFFFFFFFFFFFFFFFLL;
        }
        v19 = operator new(16 * v18);
        v20 = v19;
        v21 = (_BYTE *)*a1;
        v22 = (_OWORD *)v19;
        if ( (char *)*a1 != v4 )
        {
          v23 = 0;
          do
          {
            *(_OWORD *)(v19 + v23) = *(_OWORD *)&v21[v23];
            v23 += 16;
          }
          while ( v4 - v21 != v23 );
          v22 = (_OWORD *)(((v4 - 16 - v21) & 0xFFFFFFFFFFFFFFF0LL) + v19 + 16);
        }
        *v22 = *(_OWORD *)a3;
        v24 = v22 + 1;
        v25 = (char *)a1[1];
        if ( v4 != v25 )
        {
          v26 = v22;
          v27 = v4;
          do
          {
            v28 = *(_OWORD *)v27;
            v27 += 16;
            *v24 = v28;
            v29 = v26 + 2;
            v26 = v24;
            v24 = v29;
          }
          while ( v25 != v27 );
          v24 = (_OWORD *)((char *)v22 + ((v25 - 16 - v4) & 0xFFFFFFFFFFFFFFF0LL) + 32);
          v4 = (char *)a1[1];
        }
        v30 = (void *)*a1;
        if ( (char *)*a1 != v4 )
        {
          v31 = (char *)*a1;
          do
          {
            *(_DWORD *)v31 = -1;
            *((_DWORD *)v31 + 1) = -1;
            *((_QWORD *)v31 + 1) = 0;
            v31 += 16;
          }
          while ( v31 != v4 );
        }
        if ( v30 )
          operator delete(v30);
        *a1 = v20;
        a1[1] = (__int64)v24;
        a1[2] = v20 + 16 * v18;
      }
      else
      {
        *v6 = *(v6 - 1);
        v7 = a1[1];
        a1[1] = v7 + 16;
        v8 = *a3;
        v9 = a3[1];
        v10 = *((_QWORD *)a3 + 1);
        v11 = (_OWORD *)(v7 - 16);
        v12 = v7 - 16 - a2;
        if ( v12 >= 1 )
        {
          v13 = (v12 >> 4) + 1;
          v14 = v7 - 16;
          do
          {
            v15 = v7 - 32;
            *v11-- = *(_OWORD *)(v7 - 32);
            --v13;
            v7 = v14;
            v14 = v15;
          }
          while ( v13 > 1 );
        }
        *(_DWORD *)a2 = v8;
        *(_DWORD *)(a2 + 4) = v9;
        *(_QWORD *)(a2 + 8) = v10;
      }
    }

}; // end class std::vector<Character::LoopingEffectState,std::allocator<Character::LoopingEffectState>>
