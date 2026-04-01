class std::vector<FacebookManager::Request,std::allocator<FacebookManager::Request>>
{
public:

    String *__fastcall std::vector<FacebookManager::Request>::push_back(__int64 a1, const String *a2)
    {
      String *v4; // x19
      String *result; // x0
    
      v4 = *(String **)(a1 + 8);
      if ( v4 == *(String **)(a1 + 16) )
        return (String *)std::vector<FacebookManager::Request>::_M_insert_aux(a1, *(_QWORD *)(a1 + 8), a2);
      String::String(*(String **)(a1 + 8), a2);
      String::String(v4 + 1, a2 + 1);
      String::String(v4 + 2, a2 + 2);
      result = String::String(v4 + 3, a2 + 3);
      v4[4].m_length = a2[4].m_length;
      *(_QWORD *)(a1 + 8) += 104LL;
      return result;
    }

    __int64 __fastcall std::vector<FacebookManager::Request>::erase(__int64 a1, __int64 a2)
    {
      __int64 v4; // x20
    
      v4 = a2 + 104;
      if ( a2 + 104 != *(_QWORD *)(a1 + 8) )
      {
        std::__copy<false,std::random_access_iterator_tag>::copy<FacebookManager::Request *,FacebookManager::Request *>(v4);
        v4 = *(_QWORD *)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = v4 - 104;
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      return a2;
    }

    void __fastcall std::vector<FacebookManager::Request>::_M_erase_at_end(__int64 a1, __int64 a2)
    {
      __int64 v4; // x22
      __int64 v5; // x19
    
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 != a2 )
      {
        v5 = a2;
        do
        {
          String::~String();
          String::~String();
          String::~String();
          String::~String();
          v5 += 104;
        }
        while ( v4 != v5 );
      }
      *(_QWORD *)(a1 + 8) = a2;
    }

    char **__fastcall std::vector<FacebookManager::Request>::~vector(char **a1)
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
          String::~String();
          String::~String();
          v2 += 104;
        }
        while ( v3 != v2 );
        v2 = *a1;
      }
      if ( v2 )
        operator delete(v2);
      return a1;
    }

    void __fastcall std::vector<FacebookManager::Request>::_M_insert_aux(__int64 *a1, String *a2, const String *a3)
    {
      String *v6; // x20
      unsigned __int64 v7; // x8
      __int64 v8; // x26
      unsigned __int64 v9; // x9
      __int64 v10; // x20
      String *v11; // x23
      __int64 v12; // x22
      char *v13; // x21
      char *v14; // x23
      String v15; // [xsp+8h] [xbp-A8h] BYREF
      String v16; // [xsp+20h] [xbp-90h] BYREF
      String v17; // [xsp+38h] [xbp-78h] BYREF
      String v18; // [xsp+50h] [xbp-60h] BYREF
      int m_length; // [xsp+68h] [xbp-48h]
    
      v6 = (String *)a1[1];
      if ( v6 == (String *)a1[2] )
      {
        v7 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v6 - *a1) >> 3);
        v8 = 0x276276276276276LL;
        v9 = 1;
        if ( v7 )
        {
          if ( v7 == 0x276276276276276LL )
            std::__throw_length_error("vector::_M_insert_aux");
          v9 = 0x9D89D89D89D89D8ALL * (((__int64)v6 - *a1) >> 3);
        }
        if ( v9 >= v7 )
        {
          v8 = v9;
          if ( v9 > 0x276276276276276LL )
            std::__throw_bad_alloc();
        }
        v10 = operator new(104 * v8);
        v11 = (String *)std::__uninitialized_copy_aux<FacebookManager::Request *,FacebookManager::Request *>(*a1, a2, v10);
        String::String(v11, a3);
        String::String(v11 + 1, a3 + 1);
        String::String(v11 + 2, a3 + 2);
        String::String(v11 + 3, a3 + 3);
        v11[4].m_length = a3[4].m_length;
        v12 = std::__uninitialized_copy_aux<FacebookManager::Request *,FacebookManager::Request *>(
                a2,
                a1[1],
                &v11[4].internal);
        v13 = (char *)*a1;
        v14 = (char *)a1[1];
        if ( (char *)*a1 != v14 )
        {
          do
          {
            String::~String();
            String::~String();
            String::~String();
            String::~String();
            v13 += 104;
          }
          while ( v14 != v13 );
          v13 = (char *)*a1;
        }
        if ( v13 )
          operator delete(v13);
        *a1 = v10;
        a1[1] = v12;
        a1[2] = v10 + 104 * v8;
      }
      else
      {
        String::String((String *)a1[1], (String *)((char *)v6 - 104));
        String::String(v6 + 1, (String *)((char *)v6 - 80));
        String::String(v6 + 2, (String *)((char *)v6 - 56));
        String::String(v6 + 3, (String *)((char *)v6 - 32));
        v6[4].m_length = *(_DWORD *)&v6[-1].m_iteratorCacheByteOffset;
        a1[1] += 104;
        String::String(&v15, a3);
        String::String(&v16, a3 + 1);
        String::String(&v17, a3 + 2);
        String::String(&v18, a3 + 3);
        m_length = a3[4].m_length;
        std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<FacebookManager::Request *,FacebookManager::Request *>(
          a2,
          a1[1] - 208,
          a1[1] - 104);
        String::operator=(a2);
        String::operator=(a2 + 1);
        String::operator=(a2 + 2);
        String::operator=(a2 + 3);
        a2[4].m_length = m_length;
        String::~String();
        String::~String();
        String::~String();
        String::~String();
      }
    }

}; // end class std::vector<FacebookManager::Request,std::allocator<FacebookManager::Request>>
