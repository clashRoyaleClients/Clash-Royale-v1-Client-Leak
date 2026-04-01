class std::vector<HTTPQueue::Item,std::allocator<HTTPQueue::Item>>
{
public:

    __int64 __fastcall std::vector<HTTPQueue::Item>::push_back(__int64 a1, _DWORD *a2)
    {
      __int64 v4; // x19
      __int64 result; // x0
    
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 == *(_QWORD *)(a1 + 16) )
        return std::vector<HTTPQueue::Item>::_M_insert_aux(a1, *(_QWORD *)(a1 + 8), a2);
      String::String(*(_QWORD *)(a1 + 8), a2);
      String::String(v4 + 24, a2 + 6);
      result = String::String(v4 + 48, a2 + 12);
      *(_QWORD *)(a1 + 8) += 72LL;
      return result;
    }

    void __fastcall std::vector<HTTPQueue::Item>::_M_erase_at_end(__int64 a1, __int64 a2)
    {
      __int64 v4; // x22
      __int64 v5; // x19
    
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 != a2 )
      {
        v5 = a2;
        do
        {
          String::~String(v5 + 48);
          String::~String(v5 + 24);
          String::~String(v5);
          v5 += 72;
        }
        while ( v4 != v5 );
      }
      *(_QWORD *)(a1 + 8) = a2;
    }

    char **__fastcall std::vector<HTTPQueue::Item>::~vector(char **a1)
    {
      char *v2; // x20
      char *v3; // x21
    
      v2 = *a1;
      v3 = a1[1];
      if ( *a1 != v3 )
      {
        do
        {
          String::~String((__int64)(v2 + 48));
          String::~String((__int64)(v2 + 24));
          String::~String((__int64)v2);
          v2 += 72;
        }
        while ( v3 != v2 );
        v2 = *a1;
      }
      if ( v2 )
        operator delete(v2);
      return a1;
    }

    void __fastcall std::vector<HTTPQueue::Item>::_M_insert_aux(__int64 *a1, String *a2, _DWORD *a3)
    {
      __int64 v6; // x20
      unsigned __int64 v7; // x8
      __int64 v8; // x25
      unsigned __int64 v9; // x9
      __int64 v10; // x20
      __int64 v11; // x22
      __int64 v12; // x23
      char *v13; // x21
      char *v14; // x22
      String v15; // [xsp+8h] [xbp-88h] BYREF
      String v16; // [xsp+20h] [xbp-70h] BYREF
      String v17; // [xsp+38h] [xbp-58h] BYREF
    
      v6 = a1[1];
      if ( v6 == a1[2] )
      {
        v7 = 0x8E38E38E38E38E39LL * ((v6 - *a1) >> 3);
        v8 = 0x38E38E38E38E38ELL;
        v9 = 1;
        if ( v7 )
        {
          if ( v7 == 0x38E38E38E38E38ELL )
            std::__throw_length_error("vector::_M_insert_aux");
          v9 = 0x1C71C71C71C71C72LL * ((v6 - *a1) >> 3);
        }
        if ( v9 >= v7 )
        {
          v8 = v9;
          if ( v9 > 0x38E38E38E38E38ELL )
            std::__throw_bad_alloc();
        }
        v10 = operator new(72 * v8);
        v11 = std::__uninitialized_copy_aux<HTTPQueue::Item *,HTTPQueue::Item *>(*a1, a2, v10);
        String::String(v11, a3);
        String::String(v11 + 24, a3 + 6);
        String::String(v11 + 48, a3 + 12);
        v12 = std::__uninitialized_copy_aux<HTTPQueue::Item *,HTTPQueue::Item *>(a2, a1[1], v11 + 72);
        v13 = (char *)*a1;
        v14 = (char *)a1[1];
        if ( (char *)*a1 != v14 )
        {
          do
          {
            String::~String((__int64)(v13 + 48));
            String::~String((__int64)(v13 + 24));
            String::~String((__int64)v13);
            v13 += 72;
          }
          while ( v14 != v13 );
          v13 = (char *)*a1;
        }
        if ( v13 )
          operator delete(v13);
        *a1 = v10;
        a1[1] = v12;
        a1[2] = v10 + 72 * v8;
      }
      else
      {
        String::String(a1[1], (_DWORD *)(v6 - 72));
        String::String(v6 + 24, (_DWORD *)(v6 - 48));
        String::String(v6 + 48, (_DWORD *)(v6 - 24));
        a1[1] += 72;
        String::String((__int64)&v15, a3);
        String::String((__int64)&v16, a3 + 6);
        String::String((__int64)&v17, a3 + 12);
        std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<HTTPQueue::Item *,HTTPQueue::Item *>(
          a2,
          a1[1] - 144,
          a1[1] - 72);
        String::operator=(a2, &v15);
        String::operator=(a2 + 1, &v16);
        String::operator=(a2 + 2, &v17);
        String::~String((__int64)&v17);
        String::~String((__int64)&v16);
        String::~String((__int64)&v15);
      }
    }

}; // end class std::vector<HTTPQueue::Item,std::allocator<HTTPQueue::Item>>
