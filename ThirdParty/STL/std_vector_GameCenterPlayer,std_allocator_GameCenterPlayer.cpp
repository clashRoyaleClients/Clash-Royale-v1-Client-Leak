class std::vector<GameCenterPlayer,std::allocator<GameCenterPlayer>>
{
public:

    __int64 __fastcall std::vector<GameCenterPlayer>::resize(_QWORD *a1, unsigned __int64 a2)
    {
      if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)(a1[1] - *a1) >> 4) <= a2 )
        return std::vector<GameCenterPlayer>::_M_fill_insert();
      else
        return std::vector<GameCenterPlayer>::_M_erase_at_end(a1, *a1 + 48 * a2);
    }

    String *__fastcall std::vector<GameCenterPlayer>::push_back(__int64 a1, const String *a2)
    {
      String *v4; // x19
      String *result; // x0
    
      v4 = *(String **)(a1 + 8);
      if ( v4 == *(String **)(a1 + 16) )
        return (String *)std::vector<GameCenterPlayer>::_M_insert_aux(a1, *(_QWORD *)(a1 + 8), a2);
      String::String(*(String **)(a1 + 8), a2);
      result = String::String(v4 + 1, a2 + 1);
      *(_QWORD *)(a1 + 8) += 48LL;
      return result;
    }

    void __fastcall std::vector<GameCenterPlayer>::_M_erase_at_end(__int64 a1, __int64 a2)
    {
      __int64 v4; // x22
      __int64 v5; // x21
    
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 != a2 )
      {
        v5 = a2;
        do
        {
          String::~String();
          String::~String();
          v5 += 48;
        }
        while ( v4 != v5 );
      }
      *(_QWORD *)(a1 + 8) = a2;
    }

    char **__fastcall std::vector<GameCenterPlayer>::~vector(char **a1)
    {
      char *v2; // x20
      char *v3; // x21
    
      v2 = *a1;
      v3 = a1[1];
      if ( *a1 != v3 )
      {
        do
        {
          String::~String();
          String::~String();
          v2 += 48;
        }
        while ( v3 != v2 );
        v2 = *a1;
      }
      if ( v2 )
        operator delete(v2);
      return a1;
    }

    void __fastcall std::vector<GameCenterPlayer>::_M_fill_insert(__int64 *a1, String *a2, unsigned __int64 a3, String *a4)
    {
      __int64 v8; // x8
      __int64 v9; // x26
      unsigned __int64 v10; // x8
      unsigned __int64 v11; // x9
      bool v12; // cf
      unsigned __int64 v13; // x8
      __int64 v14; // x19
      String *v15; // x27
      __int64 v16; // x23
      __int64 v17; // x25
      String *v18; // x0
      const String *v19; // x23
      const String *v20; // x23
      unsigned __int64 v21; // x27
      __int64 v22; // x26
      const String *v23; // x19
      String *v24; // x0
      unsigned __int64 v25; // x24
      __int64 v26; // x28
      __int64 v27; // x22
      __int64 v28; // x26
      String *v29; // x0
      const String *v30; // x25
      unsigned __int64 v31; // x24
      const String *v32; // x28
      __int64 v33; // x27
      String *v34; // x0
      const String *v35; // x24
      String *v36; // x22
      String v37; // [xsp+10h] [xbp-80h] BYREF
      String v38; // [xsp+28h] [xbp-68h] BYREF
    
      if ( a3 )
      {
        v8 = a1[1];
        if ( 0xAAAAAAAAAAAAAAABLL * ((a1[2] - v8) >> 4) >= a3 )
        {
          String::String(&v37, a4);
          String::String(&v38, a4 + 1);
          v20 = (const String *)a1[1];
          v21 = 0xAAAAAAAAAAAAAAABLL * (((char *)v20 - (char *)a2) >> 4);
          if ( v21 <= a3 )
          {
            v25 = a3 - v21;
            std::__uninitialized_fill_n_aux<GameCenterPlayer *,unsigned long,GameCenterPlayer>((int)v20, a3 - v21, &v37);
            v26 = a1[1];
            v27 = v26 + 48 * (a3 - v21);
            a1[1] = v27;
            if ( a2 != v20 )
            {
              v28 = 0;
              do
              {
                v29 = String::String((String *)(v26 + 48 * v25 + v28 * 24), &a2[v28]);
                v30 = &a2[v28 + 1];
                String::String(v29 + 1, v30);
                v28 += 2;
              }
              while ( &v30[1] != v20 );
              v27 = a1[1];
            }
            a1[1] = v27 + 16 * (((char *)v20 - (char *)a2) >> 4);
            std::fill<GameCenterPlayer *,GameCenterPlayer>(a2, v20, &v37);
          }
          else
          {
            v22 = 0;
            v23 = &v20[-2 * a3];
            do
            {
              v24 = String::String((String *)&v20[v22], &v23[v22]);
              String::String(v24 + 1, &v23[v22 + 1]);
              v22 += 2;
            }
            while ( -48LL * a3 + v22 * 24 );
            a1[1] += 48 * a3;
            std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<GameCenterPlayer *,GameCenterPlayer *>(
              a2,
              &v20[-2 * a3],
              v20);
            std::fill<GameCenterPlayer *,GameCenterPlayer>(a2, &a2[2 * a3], &v37);
          }
          String::~String();
          String::~String();
        }
        else
        {
          v9 = 0x555555555555555LL;
          v10 = 0xAAAAAAAAAAAAAAABLL * ((v8 - *a1) >> 4);
          if ( 0x555555555555555LL - v10 < a3 )
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
            if ( v13 > 0x555555555555555LL )
              std::__throw_bad_alloc();
          }
          v14 = operator new(48 * v9);
          v15 = (String *)*a1;
          v16 = v14;
          if ( (String *)*a1 != a2 )
          {
            v17 = 0;
            do
            {
              v18 = String::String((String *)(v14 + v17 * 24), &v15[v17]);
              v19 = &v15[v17 + 1];
              String::String(v18 + 1, v19);
              v17 += 2;
            }
            while ( &v19[1] != a2 );
            v16 = v14 + v17 * 24;
          }
          std::__uninitialized_fill_n_aux<GameCenterPlayer *,unsigned long,GameCenterPlayer>(v16, a3, a4);
          v31 = v16 + 48 * a3;
          v32 = (const String *)a1[1];
          if ( a2 != v32 )
          {
            v33 = 0;
            do
            {
              v34 = String::String((String *)(v16 + 48 * a3 + v33 * 24), &a2[v33]);
              v35 = &a2[v33 + 1];
              String::String(v34 + 1, v35);
              v33 += 2;
            }
            while ( &v35[1] != v32 );
            a2 = (String *)a1[1];
            v31 = v16 + 48 * a3 + v33 * 24;
          }
          v36 = (String *)*a1;
          if ( (String *)*a1 != a2 )
          {
            do
            {
              String::~String();
              String::~String();
              v36 += 2;
            }
            while ( a2 != v36 );
            a2 = (String *)*a1;
          }
          if ( a2 )
            operator delete(a2);
          *a1 = v14;
          a1[1] = v31;
          a1[2] = v14 + 48 * v9;
        }
      }
    }

    void __fastcall std::vector<GameCenterPlayer>::_M_insert_aux(String **a1, String *a2, const String *a3)
    {
      String *v6; // x22
      unsigned __int64 v7; // x8
      __int64 v8; // x24
      unsigned __int64 v9; // x9
      __int64 v10; // x19
      String *v11; // x26
      String *v12; // x22
      __int64 v13; // x25
      String *v14; // x0
      const String *v15; // x22
      String *v16; // x27
      String *v17; // x28
      String *v18; // x26
      const String *v19; // x20
      String *v20; // x23
      String *v21; // x22
      String v22; // [xsp+0h] [xbp-80h] BYREF
      String v23; // [xsp+18h] [xbp-68h] BYREF
    
      v6 = a1[1];
      if ( v6 == a1[2] )
      {
        v7 = 0xAAAAAAAAAAAAAAABLL * (((char *)v6 - (char *)*a1) >> 4);
        v8 = 0x555555555555555LL;
        v9 = 1;
        if ( v7 )
        {
          if ( v7 == 0x555555555555555LL )
            std::__throw_length_error("vector::_M_insert_aux");
          v9 = 0x5555555555555556LL * (((char *)v6 - (char *)*a1) >> 4);
        }
        if ( v9 >= v7 )
        {
          v8 = v9;
          if ( v9 > 0x555555555555555LL )
            std::__throw_bad_alloc();
        }
        v10 = operator new(48 * v8);
        v11 = *a1;
        v12 = (String *)v10;
        if ( *a1 != a2 )
        {
          v13 = 0;
          do
          {
            v14 = String::String((String *)(v10 + v13 * 24), &v11[v13]);
            v15 = &v11[v13 + 1];
            String::String(v14 + 1, v15);
            v13 += 2;
          }
          while ( &v15[1] != a2 );
          v12 = (String *)(v10 + v13 * 24);
        }
        String::String(v12, a3);
        String::String(v12 + 1, a3 + 1);
        v16 = a1[1];
        if ( a2 == v16 )
        {
          v20 = v12 + 2;
        }
        else
        {
          v17 = v12;
          v18 = v12 + 2;
          do
          {
            String::String(v17 + 2, a2);
            v19 = a2 + 1;
            String::String(v17 + 3, v19);
            v20 = v17 + 4;
            a2 = (String *)&v19[1];
            v17 = v18;
            v18 = v20;
          }
          while ( a2 != v16 );
          a2 = a1[1];
        }
        v21 = *a1;
        if ( *a1 != a2 )
        {
          do
          {
            String::~String();
            String::~String();
            v21 += 2;
          }
          while ( a2 != v21 );
          a2 = *a1;
        }
        if ( a2 )
          operator delete(a2);
        *a1 = (String *)v10;
        a1[1] = v20;
        a1[2] = (String *)(v10 + 48 * v8);
      }
      else
      {
        String::String(a1[1], v6 - 2);
        String::String(v6 + 1, v6 - 1);
        a1[1] += 2;
        String::String(&v22, a3);
        String::String(&v23, a3 + 1);
        std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<GameCenterPlayer *,GameCenterPlayer *>(
          (__int64)a2,
          (__int64)&a1[1][-4],
          (__int64)&a1[1][-2]);
        String::operator=(a2);
        String::operator=(a2 + 1);
        String::~String();
        String::~String();
      }
    }

}; // end class std::vector<GameCenterPlayer,std::allocator<GameCenterPlayer>>
