class std::vector<ServerConnection::Account,std::allocator<ServerConnection::Account>>
{
public:

    void __fastcall std::vector<ServerConnection::Account>::resize(_QWORD *a1, unsigned __int64 a2, __int64 a3)
    {
      __int64 v4; // x20
      unsigned __int64 v5; // x10
      __int64 v6; // x21
      __int64 v7; // x22
    
      v4 = a1[1];
      v5 = 0xCCCCCCCCCCCCCCCDLL * ((v4 - *a1) >> 3);
      if ( v5 <= a2 )
      {
        std::vector<ServerConnection::Account>::_M_fill_insert(a1, a1[1], a2 - v5, a3);
      }
      else
      {
        v6 = *a1 + 40 * a2;
        if ( v4 != v6 )
        {
          v7 = *a1 + 40 * a2;
          do
          {
            String::~String((String *)(v7 + 16));
            v7 += 40;
          }
          while ( v4 != v7 );
        }
        a1[1] = v6;
      }
    }

    __int64 *__fastcall std::vector<ServerConnection::Account>::~vector(__int64 *a1)
    {
      __int64 v2; // x20
      __int64 v3; // x21
    
      v2 = *a1;
      v3 = a1[1];
      if ( *a1 != v3 )
      {
        do
        {
          String::~String((String *)(v2 + 16));
          v2 += 40;
        }
        while ( v3 != v2 );
        v2 = *a1;
      }
      if ( v2 )
        operator delete((void *)v2);
      return a1;
    }

    void __fastcall std::vector<ServerConnection::Account>::_M_fill_insert(
            __int64 *a1,
            String *a2,
            unsigned __int64 a3,
            __int64 *a4)
    {
      __int64 v8; // x8
      __int64 v9; // x25
      unsigned __int64 v10; // x8
      unsigned __int64 v11; // x9
      bool v12; // cf
      unsigned __int64 v13; // x8
      __int64 v14; // x20
      String *v15; // x27
      __int64 v16; // x23
      __int64 v17; // x26
      __int64 v18; // x8
      const String *v19; // x23
      const String *v20; // x23
      unsigned __int64 v21; // x25
      __int64 v22; // x25
      char *v23; // x27
      char *v24; // x8
      __int64 v25; // x27
      __int64 v26; // x26
      unsigned __int64 v27; // x28
      __int64 v28; // x8
      const String *v29; // x22
      unsigned __int64 v30; // x24
      const String *v31; // x28
      __int64 v32; // x27
      unsigned __int64 v33; // x26
      __int64 v34; // x8
      const String *v35; // x24
      String *v36; // x21
      String *v37; // x19
      __int64 v38; // x22
      String *p_m_iteratorCacheByteOffset; // x19
      __int64 v40; // [xsp+8h] [xbp-78h] BYREF
      int v41; // [xsp+10h] [xbp-70h]
      String v42; // [xsp+18h] [xbp-68h] BYREF
    
      if ( a3 )
      {
        v8 = a1[1];
        if ( 0xCCCCCCCCCCCCCCCDLL * ((a1[2] - v8) >> 3) >= a3 )
        {
          v41 = *((_DWORD *)a4 + 2);
          v40 = *a4;
          String::String(&v42, (const String *)(a4 + 2));
          v20 = (const String *)a1[1];
          v21 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v20 - (char *)a2) >> 3);
          if ( v21 <= a3 )
          {
            std::__uninitialized_fill_n_aux<ServerConnection::Account *,unsigned long,ServerConnection::Account>(
              a1[1],
              a3 - v21,
              &v40);
            v25 = a1[1];
            a1[1] = v25 + 40 * (a3 - v21);
            if ( a2 == v20 )
            {
              a1[1] = v25 + 40 * a3;
            }
            else
            {
              v26 = 0;
              v27 = v25 + 40 * (a3 - v21);
              do
              {
                v28 = v27 + v26;
                *(_DWORD *)(v28 + 8) = *(_DWORD *)&a2->internal.stack[v26];
                *(_QWORD *)v28 = *(_QWORD *)((char *)&a2->m_length + v26);
                v29 = (const String *)((char *)&a2->m_iteratorCacheByteOffset + v26);
                String::String((String *)(v27 + v26 + 16), v29);
                v26 += 40;
              }
              while ( &v29[1] != v20 );
              a1[1] += 8 * (((char *)v20 - (char *)a2) >> 3);
              do
              {
                LODWORD(a2->internal.pHeap) = v41;
                *(_QWORD *)&a2->m_length = v40;
                p_m_iteratorCacheByteOffset = (String *)&a2->m_iteratorCacheByteOffset;
                String::operator=(p_m_iteratorCacheByteOffset);
                a2 = p_m_iteratorCacheByteOffset + 1;
              }
              while ( a2 != v20 );
            }
          }
          else
          {
            v22 = 0;
            v23 = (char *)v20 - 40 * a3;
            do
            {
              v24 = (char *)v20 + v22;
              *((_DWORD *)v24 + 2) = *(_DWORD *)&v23[v22 + 8];
              *(_QWORD *)v24 = *(_QWORD *)&v23[v22];
              String::String((String *)((char *)&v20->m_iteratorCacheByteOffset + v22), (const String *)&v23[v22 + 16]);
              v22 += 40;
            }
            while ( -40LL * a3 + v22 );
            a1[1] += 40 * a3;
            std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<ServerConnection::Account *,ServerConnection::Account *>(
              a2,
              (char *)v20 - 40 * a3,
              v20);
            v36 = (String *)((char *)a2 + 40 * a3);
            do
            {
              LODWORD(a2->internal.pHeap) = v41;
              *(_QWORD *)&a2->m_length = v40;
              v37 = (String *)&a2->m_iteratorCacheByteOffset;
              String::operator=(v37);
              a2 = v37 + 1;
            }
            while ( a2 != v36 );
          }
          String::~String(&v42);
        }
        else
        {
          v9 = 0x666666666666666LL;
          v10 = 0xCCCCCCCCCCCCCCCDLL * ((v8 - *a1) >> 3);
          if ( 0x666666666666666LL - v10 < a3 )
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
            if ( v13 > 0x666666666666666LL )
              std::__throw_bad_alloc();
          }
          v14 = operator new(40 * v9);
          v15 = (String *)*a1;
          v16 = v14;
          if ( (String *)*a1 != a2 )
          {
            v17 = 0;
            do
            {
              v18 = v14 + v17;
              *(_DWORD *)(v18 + 8) = *(_DWORD *)&v15->internal.stack[v17];
              *(_QWORD *)v18 = *(_QWORD *)((char *)&v15->m_length + v17);
              v19 = (const String *)((char *)&v15->m_iteratorCacheByteOffset + v17);
              String::String((String *)(v14 + v17 + 16), v19);
              v17 += 40;
            }
            while ( &v19[1] != a2 );
            v16 = v14 + v17;
          }
          std::__uninitialized_fill_n_aux<ServerConnection::Account *,unsigned long,ServerConnection::Account>(v16, a3, a4);
          v30 = v16 + 40 * a3;
          v31 = (const String *)a1[1];
          if ( a2 != v31 )
          {
            v32 = 0;
            v33 = v16 + 40 * a3;
            do
            {
              v34 = v33 + v32;
              *(_DWORD *)(v34 + 8) = *(_DWORD *)&a2->internal.stack[v32];
              *(_QWORD *)v34 = *(_QWORD *)((char *)&a2->m_length + v32);
              v35 = (const String *)((char *)&a2->m_iteratorCacheByteOffset + v32);
              String::String((String *)(v33 + v32 + 16), v35);
              v32 += 40;
            }
            while ( &v35[1] != v31 );
            a2 = (String *)a1[1];
            v30 = v16 + 40 * a3 + v32;
          }
          v38 = *a1;
          if ( (String *)*a1 != a2 )
          {
            do
            {
              String::~String((String *)(v38 + 16));
              v38 += 40;
            }
            while ( a2 != (String *)v38 );
            a2 = (String *)*a1;
          }
          if ( a2 )
            operator delete(a2);
          *a1 = v14;
          a1[1] = v30;
          a1[2] = v14 + 40 * v9;
        }
      }
    }

}; // end class std::vector<ServerConnection::Account,std::allocator<ServerConnection::Account>>
