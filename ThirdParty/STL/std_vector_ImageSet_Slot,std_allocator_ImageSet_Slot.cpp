class std::vector<ImageSet::Slot,std::allocator<ImageSet::Slot>>
{
public:

    __int64 __fastcall std::vector<ImageSet::Slot>::erase(__int64 a1, __int64 a2)
    {
      __int64 v4; // x0
    
      v4 = a2 + 56;
      if ( a2 + 56 != *(_QWORD *)(a1 + 8) )
      {
        std::__copy<false,std::random_access_iterator_tag>::copy<ImageSet::Slot *,ImageSet::Slot *>();
        v4 = *(_QWORD *)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = v4 - 56;
      String::~String(v4 - 48);
      return a2;
    }

    __int64 __fastcall std::vector<ImageSet::Slot>::push_back(__int64 a1, __int64 a2)
    {
      __int64 v4; // x21
      __int64 result; // x0
    
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 == *(_QWORD *)(a1 + 16) )
        return std::vector<ImageSet::Slot>::_M_insert_aux(a1, *(_QWORD *)(a1 + 8), a2);
      *(_QWORD *)v4 = *(_QWORD *)a2;
      result = String::String(v4 + 8, (_DWORD *)(a2 + 8));
      *(_QWORD *)(v4 + 48) = *(_QWORD *)(a2 + 48);
      *(_OWORD *)(v4 + 32) = *(_OWORD *)(a2 + 32);
      *(_QWORD *)(a1 + 8) += 56LL;
      return result;
    }

    char **__fastcall std::vector<ImageSet::Slot>::~vector(char **a1)
    {
      char *v2; // x20
      char *v3; // x21
    
      v2 = *a1;
      v3 = a1[1];
      if ( *a1 != v3 )
      {
        do
        {
          String::~String((__int64)(v2 + 8));
          v2 += 56;
        }
        while ( v3 != v2 );
        v2 = *a1;
      }
      if ( v2 )
        operator delete(v2);
      return a1;
    }

    void __fastcall std::vector<ImageSet::Slot>::_M_insert_aux(__int64 *a1, __int64 *a2, __int64 *a3)
    {
      __int64 v6; // x19
      unsigned __int64 v7; // x8
      __int64 v8; // x25
      unsigned __int64 v9; // x9
      __int64 v10; // x19
      _QWORD *v11; // x27
      __int64 v12; // x23
      __int64 v13; // x26
      _DWORD *v14; // x23
      __int64 *v15; // x27
      _QWORD *v16; // x28
      _QWORD *v17; // x24
      _QWORD *v18; // x20
      __int64 v19; // t1
      _QWORD *v20; // x26
      __int64 *v21; // x22
      __int64 v22; // [xsp+8h] [xbp-88h]
      String v23; // [xsp+10h] [xbp-80h] BYREF
      __int128 v24; // [xsp+28h] [xbp-68h]
      __int64 v25; // [xsp+38h] [xbp-58h]
    
      v6 = a1[1];
      if ( v6 == a1[2] )
      {
        v7 = 0x6DB6DB6DB6DB6DB7LL * ((v6 - *a1) >> 3);
        v8 = 0x492492492492492LL;
        v9 = 1;
        if ( v7 )
        {
          if ( v7 == 0x492492492492492LL )
            std::__throw_length_error("vector::_M_insert_aux");
          v9 = 0xDB6DB6DB6DB6DB6ELL * ((v6 - *a1) >> 3);
        }
        if ( v9 >= v7 )
        {
          v8 = v9;
          if ( v9 > 0x492492492492492LL )
            std::__throw_bad_alloc();
        }
        v10 = operator new(56 * v8);
        v11 = (_QWORD *)*a1;
        v12 = v10;
        if ( (__int64 *)*a1 != a2 )
        {
          v13 = 0;
          do
          {
            v14 = &v11[v13 + 1];
            *(_QWORD *)(v10 + v13 * 8) = v11[v13];
            String::String(v10 + v13 * 8 + 8, v14);
            *(_QWORD *)(v10 + v13 * 8 + 48) = v11[v13 + 6];
            *(_OWORD *)(v10 + v13 * 8 + 32) = *(_OWORD *)&v11[v13 + 4];
            v13 += 7;
          }
          while ( v14 + 12 != (_DWORD *)a2 );
          v12 = v10 + v13 * 8;
        }
        *(_QWORD *)v12 = *a3;
        String::String(v12 + 8, (_DWORD *)a3 + 2);
        *(_QWORD *)(v12 + 48) = a3[6];
        *(_OWORD *)(v12 + 32) = *((_OWORD *)a3 + 2);
        v15 = (__int64 *)a1[1];
        if ( a2 == v15 )
        {
          v20 = (_QWORD *)(v12 + 56);
        }
        else
        {
          v16 = (_QWORD *)v12;
          v17 = (_QWORD *)(v12 + 56);
          do
          {
            v19 = *a2;
            v18 = a2 + 1;
            *v17 = v19;
            String::String((__int64)(v16 + 8), v18);
            v16[13] = v18[5];
            *(_OWORD *)(v16 + 11) = *(_OWORD *)(v18 + 3);
            v20 = v16 + 14;
            a2 = v18 + 6;
            v16 = v17;
            v17 = v20;
          }
          while ( a2 != v15 );
          a2 = (__int64 *)a1[1];
        }
        v21 = (__int64 *)*a1;
        if ( (__int64 *)*a1 != a2 )
        {
          do
          {
            String::~String((__int64)(v21 + 1));
            v21 += 7;
          }
          while ( a2 != v21 );
          a2 = (__int64 *)*a1;
        }
        if ( a2 )
          operator delete(a2);
        *a1 = v10;
        a1[1] = (__int64)v20;
        a1[2] = v10 + 56 * v8;
      }
      else
      {
        *(_QWORD *)v6 = *(_QWORD *)(v6 - 56);
        String::String(v6 + 8, (_DWORD *)(v6 - 48));
        *(_QWORD *)(v6 + 48) = *(_QWORD *)(v6 - 8);
        *(_OWORD *)(v6 + 32) = *(_OWORD *)(v6 - 24);
        a1[1] += 56;
        v22 = *a3;
        String::String((__int64)&v23, (_DWORD *)a3 + 2);
        v25 = a3[6];
        v24 = *((_OWORD *)a3 + 2);
        std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<ImageSet::Slot *,ImageSet::Slot *>(
          a2,
          a1[1] - 112,
          a1[1] - 56);
        *a2 = v22;
        String::operator=((String *)(a2 + 1), &v23);
        a2[6] = v25;
        *((_OWORD *)a2 + 2) = v24;
        String::~String((__int64)&v23);
      }
    }

}; // end class std::vector<ImageSet::Slot,std::allocator<ImageSet::Slot>>
