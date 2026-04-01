class std::vector<double,std::allocator<double>>
{
public:

    void __fastcall std::vector<double>::_M_insert_aux(__int64 a1, char *__src, _QWORD *a3)
    {
      _QWORD *v6; // x8
      __int64 v7; // x19
      __int64 v8; // x9
      unsigned __int64 v9; // x8
      unsigned __int64 v10; // x25
      char *v11; // x22
      void *v12; // x23
      signed __int64 v13; // x24
      size_t v14; // x21
    
      v6 = *(_QWORD **)(a1 + 8);
      if ( v6 == *(_QWORD **)(a1 + 16) )
      {
        v8 = (__int64)v6 - *(_QWORD *)a1;
        v9 = v8 >> 3;
        v10 = 1;
        if ( v8 >> 3 )
        {
          if ( v9 == 0x1FFFFFFFFFFFFFFFLL )
            std::__throw_length_error("vector::_M_insert_aux");
          v10 = v8 >> 2;
        }
        if ( v10 >= v9 )
        {
          if ( v10 >> 61 )
            std::__throw_bad_alloc();
        }
        else
        {
          v10 = 0x1FFFFFFFFFFFFFFFLL;
        }
        v11 = (char *)operator new(8 * v10);
        v12 = *(void **)a1;
        v13 = (signed __int64)&__src[-*(_QWORD *)a1];
        memmove(v11, *(const void **)a1, v13);
        *(_QWORD *)&v11[v13 & 0xFFFFFFFFFFFFFFF8LL] = *a3;
        v14 = *(_QWORD *)(a1 + 8) - (_QWORD)__src;
        memmove(&v11[8 * (v13 >> 3) + 8], __src, v14);
        if ( v12 )
          operator delete(v12);
        *(_QWORD *)a1 = v11;
        *(_QWORD *)(a1 + 8) = &v11[8 * (v13 >> 3) + 8 + 8 * (v14 >> 3)];
        *(_QWORD *)(a1 + 16) = &v11[8 * v10];
      }
      else
      {
        *v6 = *(v6 - 1);
        *(_QWORD *)(a1 + 8) = v6 + 1;
        v7 = *a3;
        memmove((char *)v6 - (((char *)(v6 - 1) - __src) & 0xFFFFFFFFFFFFFFF8LL), __src, (char *)(v6 - 1) - __src);
        *(_QWORD *)__src = v7;
      }
    }

}; // end class std::vector<double,std::allocator<double>>
