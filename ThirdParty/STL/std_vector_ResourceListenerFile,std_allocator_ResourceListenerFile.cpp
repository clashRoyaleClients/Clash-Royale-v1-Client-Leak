class std::vector<ResourceListenerFile,std::allocator<ResourceListenerFile>>
{
public:

    __int64 __fastcall std::vector<ResourceListenerFile>::push_back(__int64 a1, __int64 a2)
    {
      __int64 v4; // x21
      __int64 result; // x0
    
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 == *(_QWORD *)(a1 + 16) )
        return std::vector<ResourceListenerFile>::_M_insert_aux(a1, *(_QWORD *)(a1 + 8), a2);
      result = std::string::string(*(std::string **)(a1 + 8), (const std::string *)a2);
      *(_OWORD *)(v4 + 8) = *(_OWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 8) += 24LL;
      return result;
    }

    __int64 __fastcall std::vector<ResourceListenerFile>::resize(_QWORD *a1, unsigned __int64 a2, #1301 *a3)
    {
      if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)(a1[1] - *a1) >> 3) <= a2 )
        return std::vector<ResourceListenerFile>::_M_fill_insert();
      else
        return std::vector<ResourceListenerFile>::_M_erase_at_end(a1, *a1 + 24 * a2);
    }

    void *__fastcall std::vector<ResourceListenerFile>::pop_back(__int64 a1)
    {
      _QWORD *v1; // x9
      void *result; // x0
      unsigned int *v3; // x8
      int v4; // w9
    
      v1 = (_QWORD *)(*(_QWORD *)(a1 + 8) - 24LL);
      *(_QWORD *)(a1 + 8) = v1;
      result = (void *)(*v1 - 24LL);
      if ( result != &std::string::_Rep::_S_empty_rep_storage )
      {
        v3 = (unsigned int *)(*v1 - 8LL);
        do
          v4 = __ldaxr(v3);
        while ( __stlxr(v4 - 1, v3) );
        if ( v4 <= 0 )
          return (void *)std::string::_Rep::_M_destroy();
      }
      return result;
    }

    __int64 __fastcall std::vector<ResourceListenerFile>::_M_erase_at_end(__int64 result, _QWORD *a2)
    {
      __int64 v3; // x20
      _QWORD *v4; // x21
      _QWORD *v5; // x23
      unsigned int *v6; // x8
      int v7; // w9
    
      v3 = result;
      v4 = *(_QWORD **)(result + 8);
      if ( v4 != a2 )
      {
        v5 = a2;
        do
        {
          result = *v5 - 24LL;
          if ( (_UNKNOWN *)result != &std::string::_Rep::_S_empty_rep_storage )
          {
            v6 = (unsigned int *)(*v5 - 8LL);
            do
              v7 = __ldaxr(v6);
            while ( __stlxr(v7 - 1, v6) );
            if ( v7 <= 0 )
              result = std::string::_Rep::_M_destroy();
          }
          v5 += 3;
        }
        while ( v5 != v4 );
      }
      *(_QWORD *)(v3 + 8) = a2;
      return result;
    }

    __int64 __fastcall std::vector<ResourceListenerFile>::~vector(__int64 a1)
    {
      _QWORD *v2; // x20
      _QWORD *v3; // x21
      unsigned int *v4; // x8
      int v5; // w9
    
      v2 = *(_QWORD **)a1;
      v3 = *(_QWORD **)(a1 + 8);
      if ( *(_QWORD **)a1 != v3 )
      {
        do
        {
          if ( (_UNKNOWN *)(*v2 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
          {
            v4 = (unsigned int *)(*v2 - 8LL);
            do
              v5 = __ldaxr(v4);
            while ( __stlxr(v5 - 1, v4) );
            if ( v5 <= 0 )
              std::string::_Rep::_M_destroy();
          }
          v2 += 3;
        }
        while ( v2 != v3 );
        v2 = *(_QWORD **)a1;
      }
      if ( v2 )
        operator delete(v2);
      return a1;
    }

    void __fastcall std::vector<ResourceListenerFile>::_M_insert_aux(__int64 *a1, _QWORD *a2, __int64 a3)
    {
      __int64 v6; // x19
      unsigned int *v7; // x8
      int v8; // w9
      unsigned __int64 v9; // x8
      __int64 v10; // x25
      unsigned __int64 v11; // x9
      __int64 v12; // x19
      _QWORD *v13; // x24
      __int64 v14; // x21
      _QWORD *v15; // x27
      __int64 v16; // x28
      __int64 v17; // x26
      __int64 v18; // x24
      _QWORD *v19; // x21
      unsigned int *v20; // x8
      int v21; // w9
      __int64 v22; // [xsp+0h] [xbp-70h] BYREF
      __int128 v23; // [xsp+8h] [xbp-68h]
    
      v6 = a1[1];
      if ( v6 == a1[2] )
      {
        v9 = 0xAAAAAAAAAAAAAAABLL * ((v6 - *a1) >> 3);
        v10 = 0xAAAAAAAAAAAAAAALL;
        v11 = 1;
        if ( v9 )
        {
          if ( v9 == 0xAAAAAAAAAAAAAAALL )
            std::__throw_length_error("vector::_M_insert_aux");
          v11 = 0x5555555555555556LL * ((v6 - *a1) >> 3);
        }
        if ( v11 >= v9 )
        {
          v10 = v11;
          if ( v11 > 0xAAAAAAAAAAAAAAALL )
            std::__throw_bad_alloc();
        }
        v12 = operator new(24 * v10);
        v13 = (_QWORD *)*a1;
        v14 = v12;
        while ( v13 != a2 )
        {
          std::string::string((std::string *)v14, (const std::string *)v13);
          *(_OWORD *)(v14 + 8) = *(_OWORD *)(v13 + 1);
          v13 += 3;
          v14 += 24;
        }
        std::string::string((std::string *)v14, (const std::string *)a3);
        *(_OWORD *)(v14 + 8) = *(_OWORD *)(a3 + 8);
        v15 = (_QWORD *)a1[1];
        if ( a2 == v15 )
        {
          v18 = v14 + 24;
        }
        else
        {
          v16 = v14;
          v17 = v14 + 24;
          do
          {
            std::string::string((std::string *)(v16 + 24), (const std::string *)a2);
            *(_OWORD *)(v16 + 32) = *(_OWORD *)(a2 + 1);
            v18 = v16 + 48;
            a2 += 3;
            v16 = v17;
            v17 = v18;
          }
          while ( a2 != v15 );
          a2 = (_QWORD *)a1[1];
        }
        v19 = (_QWORD *)*a1;
        if ( (_QWORD *)*a1 != a2 )
        {
          do
          {
            if ( (_UNKNOWN *)(*v19 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
            {
              v20 = (unsigned int *)(*v19 - 8LL);
              do
                v21 = __ldaxr(v20);
              while ( __stlxr(v21 - 1, v20) );
              if ( v21 <= 0 )
                std::string::_Rep::_M_destroy();
            }
            v19 += 3;
          }
          while ( v19 != a2 );
          a2 = (_QWORD *)*a1;
        }
        if ( a2 )
          operator delete(a2);
        *a1 = v12;
        a1[1] = v18;
        a1[2] = v12 + 24 * v10;
      }
      else
      {
        std::string::string((std::string *)a1[1], (const std::string *)(v6 - 24));
        *(_OWORD *)(v6 + 8) = *(_OWORD *)(v6 - 16);
        a1[1] += 24;
        std::string::string((std::string *)&v22, (const std::string *)a3);
        v23 = *(_OWORD *)(a3 + 8);
        std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<ResourceListenerFile *,ResourceListenerFile *>(
          a2,
          a1[1] - 48,
          a1[1] - 24);
        std::string::assign((std::string *)a2, (const std::string *)&v22);
        *(_OWORD *)(a2 + 1) = v23;
        if ( (_UNKNOWN *)(v22 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v7 = (unsigned int *)(v22 - 8);
          do
            v8 = __ldaxr(v7);
          while ( __stlxr(v8 - 1, v7) );
          if ( v8 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
    }

    void __fastcall std::vector<ResourceListenerFile>::_M_fill_insert(
            __int64 *a1,
            __int64 a2,
            unsigned __int64 a3,
            __int64 a4)
    {
      __int64 v8; // x8
      __int64 v9; // x26
      unsigned __int64 v10; // x8
      unsigned __int64 v11; // x9
      bool v12; // cf
      unsigned __int64 v13; // x8
      __int64 v14; // x19
      _QWORD *v15; // x25
      __int64 v16; // x22
      __int64 v17; // x19
      unsigned __int64 v18; // x25
      __int64 v19; // x22
      unsigned __int64 v20; // x25
      __int64 v21; // x8
      unsigned __int64 v22; // x22
      __int64 v23; // x23
      unsigned __int64 v24; // x22
      __int64 v25; // x24
      __int64 v26; // x23
      unsigned __int64 v27; // x19
      _QWORD *v28; // x22
      unsigned int *v29; // x8
      int v30; // w9
      unsigned int *v31; // x8
      int v32; // w9
      __int64 v33; // [xsp+0h] [xbp-60h] BYREF
      __int128 v34; // [xsp+8h] [xbp-58h]
    
      if ( a3 )
      {
        v8 = a1[1];
        if ( 0xAAAAAAAAAAAAAAABLL * ((a1[2] - v8) >> 3) >= a3 )
        {
          std::string::string((std::string *)&v33, (const std::string *)a4);
          v34 = *(_OWORD *)(a4 + 8);
          v17 = a1[1];
          v18 = 0xAAAAAAAAAAAAAAABLL * ((v17 - a2) >> 3);
          if ( v18 <= a3 )
          {
            std::__uninitialized_fill_n_aux<ResourceListenerFile *,unsigned long,ResourceListenerFile>(
              a1[1],
              a3 - v18,
              &v33);
            v21 = a1[1];
            a1[1] = v21 + 24 * (a3 - v18);
            if ( a2 == v17 )
            {
              a1[1] = v21 + 24 * a3;
            }
            else
            {
              v22 = v21 + 24 * (a3 - v18);
              v23 = a2;
              do
              {
                std::string::string((std::string *)v22, (const std::string *)v23);
                *(_OWORD *)(v22 + 8) = *(_OWORD *)(v23 + 8);
                v23 += 24;
                v22 += 24LL;
              }
              while ( v23 != v17 );
              a1[1] += 8 * ((v17 - a2) >> 3);
              do
              {
                std::string::assign((std::string *)a2, (const std::string *)&v33);
                *(_OWORD *)(a2 + 8) = v34;
                a2 += 24;
              }
              while ( a2 != v17 );
            }
          }
          else
          {
            v19 = a1[1];
            v20 = v17 - 24 * a3;
            do
            {
              std::string::string((std::string *)v19, (const std::string *)v20);
              *(_OWORD *)(v19 + 8) = *(_OWORD *)(v20 + 8);
              v20 += 24LL;
              v19 += 24;
            }
            while ( v20 != v17 );
            a1[1] += 24 * a3;
            std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<ResourceListenerFile *,ResourceListenerFile *>(
              a2,
              v17 - 24 * a3,
              v17);
            v27 = a2 + 24 * a3;
            do
            {
              std::string::assign((std::string *)a2, (const std::string *)&v33);
              *(_OWORD *)(a2 + 8) = v34;
              a2 += 24;
            }
            while ( a2 != v27 );
          }
          if ( (_UNKNOWN *)(v33 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            v31 = (unsigned int *)(v33 - 8);
            do
              v32 = __ldaxr(v31);
            while ( __stlxr(v32 - 1, v31) );
            if ( v32 <= 0 )
              std::string::_Rep::_M_destroy();
          }
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
          v15 = (_QWORD *)*a1;
          v16 = v14;
          while ( v15 != (_QWORD *)a2 )
          {
            std::string::string((std::string *)v16, (const std::string *)v15);
            *(_OWORD *)(v16 + 8) = *(_OWORD *)(v15 + 1);
            v15 += 3;
            v16 += 24;
          }
          std::__uninitialized_fill_n_aux<ResourceListenerFile *,unsigned long,ResourceListenerFile>(v16, a3, a4);
          v24 = v16 + 24 * a3;
          v25 = a1[1];
          if ( a2 == v25 )
          {
            v26 = v24;
          }
          else
          {
            v26 = v24;
            do
            {
              std::string::string((std::string *)v26, (const std::string *)a2);
              *(_OWORD *)(v26 + 8) = *(_OWORD *)(a2 + 8);
              a2 += 24;
              v26 += 24;
            }
            while ( a2 != v25 );
            a2 = a1[1];
          }
          v28 = (_QWORD *)*a1;
          if ( *a1 != a2 )
          {
            do
            {
              if ( (_UNKNOWN *)(*v28 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
              {
                v29 = (unsigned int *)(*v28 - 8LL);
                do
                  v30 = __ldaxr(v29);
                while ( __stlxr(v30 - 1, v29) );
                if ( v30 <= 0 )
                  std::string::_Rep::_M_destroy();
              }
              v28 += 3;
            }
            while ( v28 != (_QWORD *)a2 );
            a2 = *a1;
          }
          if ( a2 )
            operator delete((void *)a2);
          *a1 = v14;
          a1[1] = v26;
          a1[2] = v14 + 24 * v9;
        }
      }
    }

}; // end class std::vector<ResourceListenerFile,std::allocator<ResourceListenerFile>>
