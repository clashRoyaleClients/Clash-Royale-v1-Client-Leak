class std::vector<String,std::allocator<String>>
{
public:

    String *__fastcall std::vector<String>::push_back(__int64 a1, String *a2)
    {
      String *result; // x0
    
      if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
        return (String *)std::vector<String>::_M_insert_aux(a1, *(String **)(a1 + 8));
      result = String::String(*(String **)(a1 + 8), a2);
      *(_QWORD *)(a1 + 8) += 24LL;
      return result;
    }

    String **__fastcall std::vector<String>::~vector(String **a1)
    {
      String *v2; // x0
      String *v3; // x20
      String *v4; // x0
    
      v2 = *a1;
      v3 = a1[1];
      if ( v2 != v3 )
      {
        do
        {
          String::~String(v2);
          v2 = v4 + 1;
        }
        while ( v3 != v2 );
        v2 = *a1;
      }
      if ( v2 )
        operator delete(v2);
      return a1;
    }

    void __fastcall std::vector<String>::_M_insert_aux(String **a1, String *a2, const String *a3)
    {
      String *v6; // x0
      unsigned __int64 v7; // x8
      __int64 v8; // x24
      unsigned __int64 v9; // x9
      __int64 v10; // x19
      String *v11; // x25
      signed __int64 v12; // x26
      String *v13; // x22
      unsigned __int64 v14; // x22
      String *v15; // x27
      String *v16; // x28
      String *v17; // x23
      String *v18; // x26
      String *v19; // x22
      String v20; // [xsp+8h] [xbp-68h] BYREF
    
      v6 = a1[1];
      if ( v6 == a1[2] )
      {
        v7 = 0xAAAAAAAAAAAAAAABLL * (((char *)v6 - (char *)*a1) >> 3);
        v8 = 0xAAAAAAAAAAAAAAALL;
        v9 = 1;
        if ( v7 )
        {
          if ( v7 == 0xAAAAAAAAAAAAAAALL )
            std::__throw_length_error("vector::_M_insert_aux");
          v9 = 0x5555555555555556LL * (((char *)v6 - (char *)*a1) >> 3);
        }
        if ( v9 >= v7 )
        {
          v8 = v9;
          if ( v9 > 0xAAAAAAAAAAAAAAALL )
            std::__throw_bad_alloc();
        }
        v10 = operator new(24 * v8);
        v11 = *a1;
        v12 = (char *)*a1 - (char *)a2;
        v13 = (String *)v10;
        if ( *a1 != a2 )
        {
          v14 = 0;
          do
          {
            String::String((String *)(v10 + v14), &v11[v14 / 0x18]);
            v14 += 24LL;
          }
          while ( v12 + v14 );
          v13 = (String *)(v10 + v14);
        }
        String::String(v13, a3);
        v15 = a1[1];
        if ( a2 == v15 )
        {
          v18 = v13 + 1;
        }
        else
        {
          v16 = v13;
          v17 = v13 + 1;
          do
          {
            String::String(v17, a2++);
            v18 = v16 + 2;
            v16 = v17;
            v17 = v18;
          }
          while ( v15 != a2 );
          a2 = a1[1];
        }
        v19 = *a1;
        if ( *a1 != a2 )
        {
          do
            String::~String(v19++);
          while ( a2 != v19 );
          a2 = *a1;
        }
        if ( a2 )
          operator delete(a2);
        *a1 = (String *)v10;
        a1[1] = v18;
        a1[2] = (String *)(v10 + 24 * v8);
      }
      else
      {
        String::String(v6, v6 - 1);
        ++a1[1];
        String::String(&v20, a3);
        std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<String *,String *>(a2, &a1[1][-2], &a1[1][-1]);
        String::operator=(a2);
        String::~String(&v20);
      }
    }

    __int64 __fastcall std::vector<String>::operator=(__int64 a1, __int64 *a2)
    {
      __int64 v4; // x3
      unsigned __int64 v5; // x20
      __int64 v6; // x21
      String *v7; // x0
      String **v8; // x22
      String *v9; // x23
      String *v10; // x0
      __int64 v11; // x8
      __int64 v12; // x9
      __int64 v13; // x21
      __int64 v14; // x10
      __int64 v15; // x23
      __int64 v16; // x24
      __int64 v17; // x25
      String *v18; // x0
      String *i; // x21
      String *v20; // x0
    
      if ( a2 != (__int64 *)a1 )
      {
        v4 = a2[1];
        v5 = 0xAAAAAAAAAAAAAAABLL * ((v4 - *a2) >> 3);
        if ( v5 <= 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3) )
        {
          v8 = (String **)(a1 + 8);
          if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3) >= v5 )
          {
            v18 = (String *)std::__copy<false,std::random_access_iterator_tag>::copy<String const*,String*>(
                              *a2,
                              a2[1],
                              *(String **)a1);
            for ( i = *v8; i != v18; v18 = v20 + 1 )
              String::~String(v18);
          }
          else
          {
            std::__copy<false,std::random_access_iterator_tag>::copy<String *,String *>(
              *a2,
              *a2 + 8 * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3),
              *(String **)a1);
            v11 = *a2;
            v12 = a2[1];
            v13 = *(_QWORD *)(a1 + 8);
            v14 = v13 - *(_QWORD *)a1;
            if ( v11 + (v14 & 0xFFFFFFFFFFFFFFF8LL) != v12 )
            {
              v15 = 0;
              v16 = v11 + 8 * (v14 >> 3);
              v17 = v16 - v12;
              do
              {
                String::String((String *)(v13 + v15), (const String *)(v16 + v15));
                v15 += 24;
              }
              while ( v17 + v15 );
            }
          }
        }
        else
        {
          v6 = std::vector<String>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<String const*,std::vector<String>>>(
                 a1,
                 0xAAAAAAAAAAAAAAABLL * ((v4 - *a2) >> 3));
          v8 = (String **)(a1 + 8);
          v7 = *(String **)a1;
          v9 = *(String **)(a1 + 8);
          if ( *(String **)a1 != v9 )
          {
            do
            {
              String::~String(v7);
              v7 = v10 + 1;
            }
            while ( v9 != v7 );
            v7 = *(String **)a1;
          }
          if ( v7 )
            operator delete(v7);
          *(_QWORD *)a1 = v6;
          *(_QWORD *)(a1 + 16) = v6 + 24 * v5;
        }
        *v8 = (String *)(*(_QWORD *)a1 + 24 * v5);
      }
      return a1;
    }

    __int64 __fastcall std::vector<String>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<String const*,std::vector<String>>>(
            __int64 a1,
            unsigned __int64 a2,
            __int64 a3,
            __int64 a4)
    {
      __int64 v6; // x19
      __int64 v7; // x22
      __int64 v8; // x21
    
      if ( a2 >= 0xAAAAAAAAAAAAAABLL )
        std::__throw_bad_alloc();
      v6 = operator new(24 * a2);
      v7 = a3 - a4;
      if ( a3 != a4 )
      {
        v8 = 0;
        do
        {
          String::String((String *)(v6 + v8), (const String *)(a3 + v8));
          v8 += 24;
        }
        while ( v7 + v8 );
      }
      return v6;
    }

    __int64 *__fastcall std::vector<String>::vector(__int64 *a1, __int64 *a2)
    {
      __int64 v4; // x8
      __int64 v5; // x22
      __int64 v6; // x20
      __int64 v7; // x23
      __int64 v8; // x21
    
      std::_Vector_base<String>::_Vector_base(a1, 0xAAAAAAAAAAAAAAABLL * ((a2[1] - *a2) >> 3), a2);
      v5 = *a2;
      v4 = a2[1];
      v6 = *a1;
      v7 = v5 - v4;
      if ( v5 != v4 )
      {
        v8 = 0;
        do
        {
          String::String((String *)(v6 + v8), (const String *)(v5 + v8));
          v8 += 24;
        }
        while ( v7 + v8 );
        v6 += v8;
      }
      a1[1] = v6;
      return a1;
    }

    void __fastcall std::vector<String>::resize(_QWORD *a1, unsigned __int64 a2, __int64 a3)
    {
      __int64 v4; // x20
      unsigned __int64 v5; // x10
      __int64 v6; // x22
      __int64 v7; // x21
    
      v4 = a1[1];
      v5 = 0xAAAAAAAAAAAAAAABLL * ((v4 - *a1) >> 3);
      if ( v5 <= a2 )
      {
        std::vector<String>::_M_fill_insert(a1, a1[1], a2 - v5, a3);
      }
      else
      {
        v6 = *a1 + 24 * a2;
        if ( v4 != v6 )
        {
          v7 = *a1 + 24 * a2;
          do
          {
            String::~String(v7);
            v7 += 24;
          }
          while ( v4 != v7 );
        }
        a1[1] = v6;
      }
    }

    String *__fastcall std::vector<String>::erase(__int64 a1, String *this)
    {
      String *v4; // x0
      __int64 v5; // x1
      __int64 v6; // x0
    
      v4 = this + 1;
      v5 = *(_QWORD *)(a1 + 8);
      if ( v4 != (String *)v5 )
      {
        std::__copy<false,std::random_access_iterator_tag>::copy<String *,String *>((__int64)v4, v5, this);
        v4 = *(String **)(a1 + 8);
      }
      v6 = (__int64)&v4[-1];
      *(_QWORD *)(a1 + 8) = v6;
      String::~String(v6);
      return this;
    }

    void __fastcall std::vector<String>::_M_fill_insert(__int64 *a1, String *a2, unsigned __int64 a3, _DWORD *a4)
    {
      __int64 v8; // x8
      __int64 v9; // x25
      unsigned __int64 v10; // x8
      unsigned __int64 v11; // x9
      bool v12; // cf
      unsigned __int64 v13; // x8
      __int64 v14; // x20
      String *v15; // x26
      __int64 v16; // x27
      __int64 v17; // x23
      unsigned __int64 v18; // x23
      __int64 v19; // x20
      unsigned __int64 v20; // x25
      __int64 v21; // x24
      unsigned __int64 v22; // x24
      __int64 v23; // x8
      __int64 v24; // x22
      unsigned __int64 v25; // x24
      unsigned __int64 v26; // x24
      String *v27; // x8
      char *v28; // x27
      unsigned __int64 v29; // x26
      __int64 v30; // x20
      __int64 v31; // x22
      String v32; // [xsp+8h] [xbp-68h] BYREF
    
      if ( a3 )
      {
        v8 = a1[1];
        if ( 0xAAAAAAAAAAAAAAABLL * ((a1[2] - v8) >> 3) >= a3 )
        {
          String::String((__int64)&v32, a4);
          v19 = a1[1];
          v20 = 0xAAAAAAAAAAAAAAABLL * ((v19 - (__int64)a2) >> 3);
          if ( v20 <= a3 )
          {
            v22 = a3 - v20;
            std::__uninitialized_fill_n_aux<String *,unsigned long,String>(a1[1], a3 - v20, &v32);
            v23 = a1[1];
            a1[1] = v23 + 24 * (a3 - v20);
            if ( a2 == (String *)v19 )
            {
              a1[1] = v23 + 24 * a3;
            }
            else
            {
              v24 = 0;
              v25 = v23 + 24 * v22;
              do
              {
                String::String(v25 + v24 * 24, &a2[v24].m_length);
                ++v24;
              }
              while ( (String *)((char *)&a2[v24] - v19) );
              a1[1] += 8 * ((v19 - (__int64)a2) >> 3);
              do
                String::operator=(a2++, &v32);
              while ( (String *)v19 != a2 );
            }
          }
          else
          {
            v21 = 0;
            do
            {
              String::String(v19 + v21, (_DWORD *)(v19 - 24 * a3 + v21));
              v21 += 24;
            }
            while ( -24LL * a3 + v21 );
            a1[1] += 24 * a3;
            std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<String *,String *>(
              (__int64)a2,
              v19 - 24 * a3,
              v19);
            v30 = 24 * a3;
            do
            {
              String::operator=(a2++, &v32);
              v30 -= 24;
            }
            while ( v30 );
          }
          String::~String((__int64)&v32);
        }
        else
        {
          v9 = 0xAAAAAAAAAAAAAAALL;
          v10 = 0xAAAAAAAAAAAAAAABLL * ((v8 - *a1) >> 3);
          if ( 0xAAAAAAAAAAAAAAALL - v10 < a3 )
            std::__throw_length_error("vector::_M_fill_insert");
          if ( v10 >= a3 )
            v11 = v10;
          else
            v11 = a3;
          v12 = __CFADD__(v10, v11);
          v13 = v10 + v11;
          if ( !v12 )
          {
            v9 = v13;
            if ( v13 > 0xAAAAAAAAAAAAAAALL )
              std::__throw_bad_alloc();
          }
          v14 = operator new(24 * v9);
          v15 = (String *)*a1;
          v16 = *a1 - (_QWORD)a2;
          v17 = v14;
          if ( (String *)*a1 != a2 )
          {
            v18 = 0;
            do
            {
              String::String(v14 + v18, &v15[v18 / 0x18].m_length);
              v18 += 24LL;
            }
            while ( v16 + v18 );
            v17 = v14 + v18;
          }
          std::__uninitialized_fill_n_aux<String *,unsigned long,String>(v17, a3, a4);
          v26 = v17 + 24 * a3;
          v27 = (String *)a1[1];
          v28 = (char *)((char *)a2 - (char *)v27);
          if ( a2 != v27 )
          {
            v29 = 0;
            do
            {
              String::String(v17 + 24 * a3 + v29, &a2[v29 / 0x18].m_length);
              v29 += 24LL;
            }
            while ( &v28[v29] );
            a2 = (String *)a1[1];
            v26 = v17 + 24 * a3 + v29;
          }
          v31 = *a1;
          if ( (String *)*a1 != a2 )
          {
            do
            {
              String::~String(v31);
              v31 += 24;
            }
            while ( a2 != (String *)v31 );
            a2 = (String *)*a1;
          }
          if ( a2 )
            operator delete(a2);
          *a1 = v14;
          a1[1] = v26;
          a1[2] = v14 + 24 * v9;
        }
      }
    }

}; // end class std::vector<String,std::allocator<String>>
