class std::vector<BadgeItem *,std::allocator<BadgeItem *>>
{
public:

    __int64 __fastcall std::vector<BadgeItem *>::push_back(__int64 result, _QWORD *a2)
    {
      _QWORD *v3; // x1
    
      v3 = *(_QWORD **)(result + 8);
      if ( v3 == *(_QWORD **)(result + 16) )
        return std::vector<BadgeItem *>::_M_insert_aux(result, v3);
      *v3 = *a2;
      *(_QWORD *)(result + 8) += 8LL;
      return result;
    }

    void __fastcall std::vector<BadgeItem *>::_M_insert_aux(__int64 a1, char *__src, _QWORD *a3)
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

}; // end class std::vector<BadgeItem *,std::allocator<BadgeItem *>>
