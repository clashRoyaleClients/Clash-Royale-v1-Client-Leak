class std::vector<LocalNotificationManager::NotifData,std::allocator<LocalNotificationManager::NotifData>>
{
public:

    _QWORD *__fastcall std::vector<LocalNotificationManager::NotifData>::resize(
            _QWORD *result,
            unsigned __int64 a2,
            __int64 a3)
    {
      _QWORD *v3; // x19
      _QWORD *v4; // x20
      unsigned __int64 v5; // x10
      __int64 v6; // x21
      __int64 v7; // x0
    
      v3 = result;
      v4 = (_QWORD *)result[1];
      v5 = ((__int64)v4 - *result) >> 5;
      if ( v5 <= a2 )
        return (_QWORD *)std::vector<LocalNotificationManager::NotifData>::_M_fill_insert(result, result[1], a2 - v5, a3);
      v6 = *result + 32 * a2;
      if ( v4 != (_QWORD *)v6 )
      {
        do
        {
          String::~String();
          result = (_QWORD *)(v7 + 32);
        }
        while ( v4 != result );
      }
      v3[1] = v6;
      return result;
    }

    String *__fastcall std::vector<LocalNotificationManager::NotifData>::push_back(__int64 a1, __int64 a2)
    {
      __int64 v4; // x21
      String *result; // x0
    
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 == *(_QWORD *)(a1 + 16) )
        return (String *)std::vector<LocalNotificationManager::NotifData>::_M_insert_aux(a1, *(_QWORD *)(a1 + 8), a2);
      result = String::String(*(String **)(a1 + 8), (const String *)a2);
      *(_QWORD *)(v4 + 24) = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a1 + 8) += 32LL;
      return result;
    }

    __int64 __fastcall std::vector<LocalNotificationManager::NotifData>::~vector(__int64 a1)
    {
      void *v2; // x0
      void *v3; // x20
      __int64 v4; // x0
    
      v2 = *(void **)a1;
      v3 = *(void **)(a1 + 8);
      if ( v2 != v3 )
      {
        do
          String::~String();
        while ( v3 != (void *)(v4 + 32) );
        v2 = *(void **)a1;
      }
      if ( v2 )
        operator delete(v2);
      return a1;
    }

    void __fastcall std::vector<LocalNotificationManager::NotifData>::_M_fill_insert(
            __int64 *a1,
            __int64 a2,
            unsigned __int64 a3,
            __int64 a4)
    {
      __int64 v8; // x8
      __int64 v9; // x8
      unsigned __int64 v10; // x8
      unsigned __int64 v11; // x9
      unsigned __int64 v12; // x25
      __int64 v13; // x20
      unsigned __int64 v14; // x24
      __int64 v15; // x25
      __int64 v16; // x8
      __int64 v17; // x23
      __int64 v18; // x25
      __int64 v19; // x22
      __int64 v20; // x20
      __int64 v21; // x27
      __int64 v22; // x24
      __int64 v23; // x26
      __int64 v24; // x24
      unsigned __int64 v25; // x26
      __int64 v26; // x28
      __int64 v27; // x27
      __int64 v28; // x23
      unsigned __int64 v29; // x20
      __int64 v30; // x0
      String v31; // [xsp+0h] [xbp-70h] BYREF
      __int64 v32; // [xsp+18h] [xbp-58h]
    
      if ( a3 )
      {
        v8 = a1[1];
        if ( (a1[2] - v8) >> 5 >= a3 )
        {
          String::String(&v31, (const String *)a4);
          v32 = *(_QWORD *)(a4 + 24);
          v13 = a1[1];
          v14 = (v13 - a2) >> 5;
          if ( v14 <= a3 )
          {
            std::__uninitialized_fill_n_aux<LocalNotificationManager::NotifData *,unsigned long,LocalNotificationManager::NotifData>(
              a1[1],
              a3 - v14,
              &v31);
            v16 = a1[1];
            v17 = v16 + 32 * (a3 - v14);
            a1[1] = v17;
            if ( a2 == v13 )
            {
              a1[1] = v16 + 32 * a3;
            }
            else
            {
              v18 = 0;
              do
              {
                v19 = a2 + v18;
                *(_QWORD *)&String::String((String *)(v17 + v18), (const String *)(a2 + v18))[1].m_length = *(_QWORD *)(a2 + v18 + 24);
                v18 += 32;
              }
              while ( v19 + 32 != v13 );
              a1[1] += 32 * v14;
              do
              {
                String::operator=((String *)a2);
                *(_QWORD *)(a2 + 24) = v32;
                a2 += 32;
              }
              while ( a2 != v13 );
            }
          }
          else
          {
            v15 = 0;
            do
            {
              *(_QWORD *)&String::String((String *)(v13 + v15), (const String *)(v13 - 32 * a3 + v15))[1].m_length = *(_QWORD *)(v13 - 32 * a3 + v15 + 24);
              v15 += 32;
            }
            while ( -32LL * a3 + v15 );
            a1[1] += 32 * a3;
            std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<LocalNotificationManager::NotifData *,LocalNotificationManager::NotifData *>(
              a2,
              v13 - 32 * a3,
              v13);
            v29 = a2 + 32 * a3;
            do
            {
              String::operator=((String *)a2);
              *(_QWORD *)(a2 + 24) = v32;
              a2 += 32;
            }
            while ( a2 != v29 );
          }
          String::~String();
        }
        else
        {
          v9 = v8 - *a1;
          if ( 0x7FFFFFFFFFFFFFFLL - (v9 >> 5) < a3 )
            std::__throw_length_error("vector::_M_fill_insert");
          v10 = v9 >> 5;
          if ( v10 >= a3 )
            v11 = v10;
          else
            v11 = a3;
          v12 = v10 + v11;
          if ( __CFADD__(v10, v11) )
          {
            v12 = 0x7FFFFFFFFFFFFFFLL;
          }
          else if ( v12 >> 59 )
          {
            std::__throw_bad_alloc();
          }
          v20 = operator new(32 * v12);
          v21 = *a1;
          v22 = v20;
          if ( *a1 != a2 )
          {
            v23 = 0;
            do
            {
              v24 = v21 + v23;
              *(_QWORD *)&String::String((String *)(v20 + v23), (const String *)(v21 + v23))[1].m_length = *(_QWORD *)(v21 + v23 + 24);
              v23 += 32;
            }
            while ( v24 + 32 != a2 );
            v22 = v20 + v23;
          }
          std::__uninitialized_fill_n_aux<LocalNotificationManager::NotifData *,unsigned long,LocalNotificationManager::NotifData>(
            v22,
            a3,
            a4);
          v25 = v22 + 32 * a3;
          v26 = a1[1];
          if ( a2 != v26 )
          {
            v27 = 0;
            do
            {
              v28 = a2 + v27;
              *(_QWORD *)&String::String((String *)(v25 + v27), (const String *)(a2 + v27))[1].m_length = *(_QWORD *)(a2 + v27 + 24);
              v27 += 32;
            }
            while ( v28 + 32 != v26 );
            a2 = a1[1];
            v25 = v22 + 32 * a3 + v27;
          }
          if ( *a1 != a2 )
          {
            do
              String::~String();
            while ( a2 != v30 + 32 );
            a2 = *a1;
          }
          if ( a2 )
            operator delete((void *)a2);
          *a1 = v20;
          a1[1] = v25;
          a1[2] = v20 + 32 * v12;
        }
      }
    }

    void __fastcall std::vector<LocalNotificationManager::NotifData>::_M_insert_aux(__int64 *a1, __int64 a2, __int64 a3)
    {
      String *v6; // x0
      String *v7; // x0
      __int64 v8; // x9
      unsigned __int64 v9; // x8
      unsigned __int64 v10; // x24
      __int64 v11; // x19
      __int64 v12; // x26
      __int64 v13; // x22
      __int64 v14; // x25
      __int64 v15; // x22
      __int64 v16; // x27
      __int64 v17; // x28
      __int64 v18; // x26
      __int64 v19; // x25
      __int64 v20; // x22
      String v21; // [xsp+0h] [xbp-70h] BYREF
      __int64 v22; // [xsp+18h] [xbp-58h]
    
      v6 = (String *)a1[1];
      if ( v6 == (String *)a1[2] )
      {
        v8 = (__int64)v6 - *a1;
        v9 = v8 >> 5;
        v10 = 1;
        if ( v8 >> 5 )
        {
          if ( v9 == 0x7FFFFFFFFFFFFFFLL )
            std::__throw_length_error("vector::_M_insert_aux");
          v10 = v8 >> 4;
        }
        if ( v10 >= v9 )
        {
          if ( v10 >> 59 )
            std::__throw_bad_alloc();
        }
        else
        {
          v10 = 0x7FFFFFFFFFFFFFFLL;
        }
        v11 = operator new(32 * v10);
        v12 = *a1;
        v13 = v11;
        if ( *a1 != a2 )
        {
          v14 = 0;
          do
          {
            v15 = v12 + v14;
            *(_QWORD *)&String::String((String *)(v11 + v14), (const String *)(v12 + v14))[1].m_length = *(_QWORD *)(v12 + v14 + 24);
            v14 += 32;
          }
          while ( v15 + 32 != a2 );
          v13 = v11 + v14;
        }
        String::String((String *)v13, (const String *)a3);
        *(_QWORD *)(v13 + 24) = *(_QWORD *)(a3 + 24);
        v16 = a1[1];
        if ( a2 == v16 )
        {
          v19 = v13 + 32;
        }
        else
        {
          v17 = v13;
          v18 = v13 + 32;
          do
          {
            String::String((String *)(v17 + 32), (const String *)a2);
            *(_QWORD *)(v17 + 56) = *(_QWORD *)(a2 + 24);
            v19 = v17 + 64;
            a2 += 32;
            v17 = v18;
            v18 = v19;
          }
          while ( a2 != v16 );
          a2 = a1[1];
        }
        v20 = *a1;
        if ( *a1 != a2 )
        {
          do
          {
            String::~String();
            v20 += 32;
          }
          while ( a2 != v20 );
          a2 = *a1;
        }
        if ( a2 )
          operator delete((void *)a2);
        *a1 = v11;
        a1[1] = v19;
        a1[2] = v11 + 32 * v10;
      }
      else
      {
        v7 = String::String(v6, (String *)((char *)v6 - 32));
        *(_QWORD *)&v7[1].m_length = *(_QWORD *)&v7[-1].m_iteratorCacheByteOffset;
        a1[1] += 32;
        String::String(&v21, (const String *)a3);
        v22 = *(_QWORD *)(a3 + 24);
        std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<LocalNotificationManager::NotifData *,LocalNotificationManager::NotifData *>(
          a2,
          a1[1] - 64,
          a1[1] - 32);
        String::operator=((String *)a2);
        *(_QWORD *)(a2 + 24) = v22;
        String::~String();
      }
    }

}; // end class std::vector<LocalNotificationManager::NotifData,std::allocator<LocalNotificationManager::NotifData>>
