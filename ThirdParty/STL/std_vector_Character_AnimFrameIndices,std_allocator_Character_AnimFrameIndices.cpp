class std::vector<Character::AnimFrameIndices,std::allocator<Character::AnimFrameIndices>>
{
public:

    Character::AnimFrameIndices **__fastcall std::vector<Character::AnimFrameIndices>::~vector(
            Character::AnimFrameIndices **a1)
    {
      Character::AnimFrameIndices *v2; // x0
      Character::AnimFrameIndices *v3; // x20
      __int64 v4; // x0
    
      v2 = *a1;
      v3 = a1[1];
      if ( v2 != v3 )
      {
        do
        {
          Character::AnimFrameIndices::~AnimFrameIndices(v2);
          v2 = (Character::AnimFrameIndices *)(v4 + 4);
        }
        while ( v3 != v2 );
        v2 = *a1;
      }
      if ( v2 )
        operator delete(v2);
      return a1;
    }

    _QWORD *__fastcall std::vector<Character::AnimFrameIndices>::resize(_QWORD *result, unsigned __int64 a2)
    {
      _DWORD *v3; // x1
      __int64 v4; // x8
      _DWORD *v5; // x10
    
      v3 = (_DWORD *)result[1];
      if ( ((__int64)v3 - *result) >> 2 <= a2 )
        return (_QWORD *)std::vector<Character::AnimFrameIndices>::_M_fill_insert();
      v4 = *result + 4 * a2;
      if ( v3 != (_DWORD *)v4 )
      {
        v5 = (_DWORD *)(*result + 4 * a2);
        do
          *v5++ = -1;
        while ( v5 != v3 );
      }
      result[1] = v4;
      return result;
    }

    void __fastcall std::vector<Character::AnimFrameIndices>::_M_fill_insert(
            __int64 *a1,
            char *a2,
            unsigned __int64 a3,
            int *a4)
    {
      char *v6; // x19
      char *v8; // x9
      __int64 v9; // x8
      unsigned __int64 v10; // x8
      unsigned __int64 v11; // x9
      unsigned __int64 v12; // x24
      int v13; // w8
      unsigned __int64 v14; // x10
      __int64 v15; // x11
      char *v16; // x10
      __int64 v17; // x10
      __int64 v18; // x10
      char *v19; // x9
      __int64 v20; // x9
      unsigned __int64 v21; // x12
      __int64 v22; // x12
      __int64 v23; // x0
      __int64 v24; // x22
      char *v25; // x9
      unsigned __int64 v26; // x8
      _DWORD *v27; // x10
      int *v28; // x9
      unsigned __int64 v29; // x10
      _DWORD *v30; // x23
      char *v31; // x9
      char *v32; // x11
      int v33; // t1
      _DWORD *v34; // x0
      char *v35; // x9
      _DWORD *v36; // x13
      _DWORD *v37; // x11
      char *v38; // x12
      int v39; // t1
    
      v6 = a2;
      if ( a3 )
      {
        v8 = (char *)a1[1];
        if ( (a1[2] - (__int64)v8) >> 2 >= a3 )
        {
          v13 = *a4;
          v14 = (v8 - a2) >> 2;
          if ( v14 <= a3 )
          {
            v21 = v14 - a3;
            if ( v14 == a3 )
            {
              v22 = a1[1];
            }
            else
            {
              v36 = (_DWORD *)a1[1];
              do
              {
                *v36++ = v13;
                ++v21;
              }
              while ( v21 );
              v22 = a1[1];
            }
            v37 = (_DWORD *)(v22 + 4 * (a3 - v14));
            a1[1] = (__int64)v37;
            if ( a2 == v8 )
            {
              a1[1] = v22 + 4 * a3;
            }
            else
            {
              v38 = a2;
              do
              {
                v39 = *(_DWORD *)v38;
                v38 += 4;
                *v37++ = v39;
              }
              while ( v8 != v38 );
              a1[1] += 4 * v14;
              do
              {
                *(_DWORD *)v6 = v13;
                v6 += 4;
              }
              while ( v8 != v6 );
            }
          }
          else
          {
            v15 = 0;
            v16 = &v8[-4 * a3];
            do
            {
              *(_DWORD *)&v8[v15] = *(_DWORD *)&v16[v15];
              v15 += 4;
            }
            while ( -4LL * a3 + v15 );
            a1[1] += 4 * a3;
            v17 = v16 - a2;
            if ( v17 >= 1 )
            {
              v18 = (v17 >> 2) + 1;
              v19 = v8 - 4;
              do
              {
                *(_DWORD *)v19 = *(_DWORD *)&v19[-4 * a3];
                v19 -= 4;
                --v18;
              }
              while ( v18 > 1 );
            }
            v20 = 4 * a3;
            do
            {
              *(_DWORD *)v6 = v13;
              v6 += 4;
              v20 -= 4;
            }
            while ( v20 );
          }
        }
        else
        {
          v9 = (__int64)&v8[-*a1];
          if ( 0x3FFFFFFFFFFFFFFFLL - (v9 >> 2) < a3 )
            std::__throw_length_error("vector::_M_fill_insert");
          v10 = v9 >> 2;
          if ( v10 >= a3 )
            v11 = v10;
          else
            v11 = a3;
          v12 = v10 + v11;
          if ( __CFADD__(v10, v11) )
          {
            v12 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else if ( v12 >> 62 )
          {
            std::__throw_bad_alloc();
          }
          v23 = operator new(4 * v12);
          v24 = v23;
          v25 = (char *)*a1;
          v26 = v23;
          if ( (char *)*a1 != v6 )
          {
            v27 = 0;
            do
            {
              *(_DWORD *)((char *)v27 + v23) = *(_DWORD *)((char *)v27 + (_QWORD)v25);
              ++v27;
            }
            while ( (_DWORD *)(v6 - v25) != v27 );
            v26 = ((v6 - 4 - v25) & 0xFFFFFFFFFFFFFFFCLL) + v23 + 4;
          }
          v28 = (int *)v26;
          v29 = a3;
          do
          {
            *v28++ = *a4;
            --v29;
          }
          while ( v29 );
          v30 = (_DWORD *)(v26 + 4 * a3);
          v31 = (char *)a1[1];
          if ( v6 != v31 )
          {
            v32 = v6;
            do
            {
              v33 = *(_DWORD *)v32;
              v32 += 4;
              *v30++ = v33;
            }
            while ( v31 != v32 );
            v30 = (_DWORD *)(v26 + 4 * (a3 + ((unsigned __int64)(v31 - 4 - v6) >> 2)) + 4);
            v6 = (char *)a1[1];
          }
          v34 = (_DWORD *)*a1;
          if ( (char *)*a1 != v6 )
          {
            v35 = (char *)*a1;
            do
            {
              *(_DWORD *)v35 = -1;
              v35 += 4;
            }
            while ( v35 != v6 );
          }
          if ( v34 )
            operator delete(v34);
          *a1 = v24;
          a1[1] = (__int64)v30;
          a1[2] = v24 + 4 * v12;
        }
      }
    }

}; // end class std::vector<Character::AnimFrameIndices,std::allocator<Character::AnimFrameIndices>>
