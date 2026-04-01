class std::vector<AllianceMemberItem *,std::allocator<AllianceMemberItem *>>
{
public:

    _QWORD *__fastcall std::vector<AllianceMemberItem *>::resize(_QWORD *result, unsigned __int64 a2, __int64 a3)
    {
      __int64 v3; // [xsp+8h] [xbp-8h]
    
      v3 = a3;
      if ( (__int64)(result[1] - *result) >> 3 <= a2 )
        return (_QWORD *)std::vector<AllianceMemberItem *>::_M_fill_insert();
      result[1] = *result + 8 * a2;
      return result;
    }

    __int64 __fastcall std::vector<AllianceMemberItem *>::push_back(__int64 result, _QWORD *a2)
    {
      _QWORD *v3; // x1
    
      v3 = *(_QWORD **)(result + 8);
      if ( v3 == *(_QWORD **)(result + 16) )
        return std::vector<AllianceMemberItem *>::_M_insert_aux(result, v3);
      *v3 = *a2;
      *(_QWORD *)(result + 8) += 8LL;
      return result;
    }

    void __fastcall std::vector<AllianceMemberItem *>::_M_fill_insert(
            __int64 a1,
            char *a2,
            unsigned __int64 a3,
            __int64 *a4)
    {
      char *v6; // x19
      char *v8; // x22
      __int64 v9; // x8
      unsigned __int64 v10; // x8
      unsigned __int64 v11; // x9
      unsigned __int64 v12; // x25
      __int64 v13; // x25
      unsigned __int64 v14; // x23
      __int64 v15; // x23
      unsigned __int64 v16; // x9
      __int64 v17; // x9
      char *v18; // x22
      signed __int64 v19; // x24
      __int64 v20; // x26
      char *v21; // x8
      __int64 v22; // x9
      unsigned __int64 v23; // x10
      unsigned __int64 v24; // x23
      char *v25; // x0
      size_t v26; // x21
      _QWORD *v27; // x10
      void *v28; // x0
    
      v6 = a2;
      if ( a3 )
      {
        v8 = *(char **)(a1 + 8);
        if ( (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v8) >> 3 >= a3 )
        {
          v13 = *a4;
          v14 = (v8 - a2) >> 3;
          if ( v14 <= a3 )
          {
            v16 = v14 - a3;
            if ( v14 == a3 )
            {
              v17 = *(_QWORD *)(a1 + 8);
            }
            else
            {
              v27 = *(_QWORD **)(a1 + 8);
              do
              {
                *v27++ = v13;
                ++v16;
              }
              while ( v16 );
              v17 = *(_QWORD *)(a1 + 8);
            }
            v28 = (void *)(v17 + 8 * (a3 - v14));
            *(_QWORD *)(a1 + 8) = v28;
            memmove(v28, a2, v8 - a2);
            for ( *(_QWORD *)(a1 + 8) += 8 * v14; v8 != v6; v6 += 8 )
              *(_QWORD *)v6 = v13;
          }
          else
          {
            v15 = 8 * a3;
            memmove(*(void **)(a1 + 8), &v8[-8 * a3], 8 * a3);
            *(_QWORD *)(a1 + 8) += 8 * a3;
            memmove(&v8[-((&v8[-8 * a3] - v6) & 0xFFFFFFFFFFFFFFF8LL)], v6, &v8[-8 * a3] - v6);
            do
            {
              *(_QWORD *)v6 = v13;
              v6 += 8;
              v15 -= 8;
            }
            while ( v15 );
          }
        }
        else
        {
          v9 = (__int64)&v8[-*(_QWORD *)a1];
          if ( 0x1FFFFFFFFFFFFFFFLL - (v9 >> 3) < a3 )
            std::__throw_length_error("vector::_M_fill_insert");
          v10 = v9 >> 3;
          if ( v10 >= a3 )
            v11 = v10;
          else
            v11 = a3;
          v12 = v10 + v11;
          if ( __CFADD__(v10, v11) )
          {
            v12 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else if ( v12 >> 61 )
          {
            std::__throw_bad_alloc();
          }
          v18 = (char *)operator new(8 * v12);
          v19 = (signed __int64)&v6[-*(_QWORD *)a1];
          v20 = v19 >> 3;
          memmove(v18, *(const void **)a1, v19);
          v21 = &v18[v19 & 0xFFFFFFFFFFFFFFF8LL];
          v22 = *a4;
          v23 = a3;
          do
          {
            *(_QWORD *)v21 = v22;
            v21 += 8;
            --v23;
          }
          while ( v23 );
          v24 = v20 + a3;
          v25 = &v18[8 * v20 + 8 * a3];
          v26 = *(_QWORD *)(a1 + 8) - (_QWORD)v6;
          memmove(v25, v6, v26);
          if ( *(_QWORD *)a1 )
            operator delete(*(void **)a1);
          *(_QWORD *)a1 = v18;
          *(_QWORD *)(a1 + 8) = &v18[8 * v24 + 8 * (v26 >> 3)];
          *(_QWORD *)(a1 + 16) = &v18[8 * v12];
        }
      }
    }

    void __fastcall std::vector<AllianceMemberItem *>::_M_insert_aux(__int64 a1, char *__src, _QWORD *a3)
    {
      _QWORD *v6; // x8
      __int64 v7; // x8
      __int64 v8; // x19
      __int64 v9; // x9
      unsigned __int64 v10; // x8
      unsigned __int64 v11; // x25
      char *v12; // x22
      void *v13; // x23
      signed __int64 v14; // x24
      size_t v15; // x21
    
      v6 = *(_QWORD **)(a1 + 8);
      if ( v6 == *(_QWORD **)(a1 + 16) )
      {
        v9 = (__int64)v6 - *(_QWORD *)a1;
        v10 = v9 >> 3;
        v11 = 1;
        if ( v9 >> 3 )
        {
          if ( v10 == 0x1FFFFFFFFFFFFFFFLL )
            std::__throw_length_error("vector::_M_insert_aux");
          v11 = v9 >> 2;
        }
        if ( v11 >= v10 )
        {
          if ( v11 >> 61 )
            std::__throw_bad_alloc();
        }
        else
        {
          v11 = 0x1FFFFFFFFFFFFFFFLL;
        }
        v12 = (char *)operator new(8 * v11);
        v13 = *(void **)a1;
        v14 = (signed __int64)&__src[-*(_QWORD *)a1];
        memmove(v12, *(const void **)a1, v14);
        *(_QWORD *)&v12[v14 & 0xFFFFFFFFFFFFFFF8LL] = *a3;
        v15 = *(_QWORD *)(a1 + 8) - (_QWORD)__src;
        memmove(&v12[8 * (v14 >> 3) + 8], __src, v15);
        if ( v13 )
          operator delete(v13);
        *(_QWORD *)a1 = v12;
        *(_QWORD *)(a1 + 8) = &v12[8 * (v14 >> 3) + 8 + 8 * (v15 >> 3)];
        *(_QWORD *)(a1 + 16) = &v12[8 * v11];
      }
      else
      {
        *v6 = *(v6 - 1);
        v7 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v7 + 8;
        v8 = *a3;
        memmove((void *)(v7 - ((v7 - 8 - (_QWORD)__src) & 0xFFFFFFFFFFFFFFF8LL)), __src, v7 - 8 - (_QWORD)__src);
        *(_QWORD *)__src = v8;
      }
    }

}; // end class std::vector<AllianceMemberItem *,std::allocator<AllianceMemberItem *>>
