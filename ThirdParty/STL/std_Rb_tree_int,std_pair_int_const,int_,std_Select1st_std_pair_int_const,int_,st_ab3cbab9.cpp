class std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>
{
public:

    void __fastcall std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(
            __int64 a1,
            _QWORD *a2)
    {
      _QWORD *v2; // x20
      _QWORD *v4; // x21
    
      v2 = a2;
      if ( a2 )
      {
        do
        {
          std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(
            a1,
            v2[3]);
          v4 = (_QWORD *)v2[2];
          operator delete(v2);
          v2 = v4;
        }
        while ( v4 );
      }
    }

    __int64 __fastcall std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::find(
            __int64 a1,
            _DWORD *a2)
    {
      __int64 result; // x0
      __int64 v4; // x10
      __int64 v5; // x8
      __int64 v6; // x2
    
      result = a1 + 8;
      v4 = *(_QWORD *)(a1 + 16);
      v5 = result;
      if ( v4 )
      {
        v6 = result;
        do
        {
          v5 = v4;
          while ( *(_DWORD *)(v5 + 32) < *a2 )
          {
            v5 = *(_QWORD *)(v5 + 24);
            if ( !v5 )
            {
              v5 = v6;
              goto LABEL_8;
            }
          }
          v4 = *(_QWORD *)(v5 + 16);
          v6 = v5;
        }
        while ( v4 );
      }
    LABEL_8:
      if ( v5 != result && *a2 >= *(_DWORD *)(v5 + 32) )
        return v5;
      return result;
    }

    __int64 __fastcall std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_insert_unique(
            _QWORD *a1,
            __int64 a2,
            _DWORD *a3)
    {
      __int64 v4; // x21
      _QWORD *v5; // x20
      int v6; // w9
      __int64 v7; // x0
      __int64 v8; // x8
      __int64 v9; // x1
      __int64 v10; // x2
    
      v4 = a2;
      v5 = a1;
      if ( (_QWORD *)a2 != a1 + 1 )
      {
        v6 = *(_DWORD *)(a2 + 32);
        if ( *a3 < v6 )
        {
          if ( a2 == a1[3] )
          {
    LABEL_6:
            a1 = v5;
            v9 = v4;
    LABEL_18:
            v10 = v4;
            return std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_insert(
                     a1,
                     v9,
                     v10,
                     a3);
          }
          v7 = std::_Rb_tree_decrement(a2);
          v8 = v7;
          if ( *(_DWORD *)(v7 + 32) < *a3 )
          {
            if ( *(_QWORD *)(v7 + 24) )
              goto LABEL_6;
            v9 = 0;
            a1 = v5;
    LABEL_20:
            v10 = v8;
            return std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_insert(
                     a1,
                     v9,
                     v10,
                     a3);
          }
          return std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_insert_unique(
                   v5,
                   a3);
        }
        if ( v6 >= *a3 )
          return v4;
        if ( a2 == a1[4] )
        {
    LABEL_17:
          v9 = 0;
          a1 = v5;
          goto LABEL_18;
        }
        v8 = std::_Rb_tree_increment(a2);
        if ( *a3 < *(_DWORD *)(v8 + 32) )
        {
          if ( *(_QWORD *)(v4 + 24) )
          {
            a1 = v5;
            v9 = v8;
            goto LABEL_20;
          }
          goto LABEL_17;
        }
        return std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_insert_unique(
                 v5,
                 a3);
      }
      if ( !a1[5] )
        return std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_insert_unique(
                 v5,
                 a3);
      v10 = a1[4];
      if ( *(_DWORD *)(v10 + 32) >= *a3 )
        return std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_insert_unique(
                 v5,
                 a3);
      v9 = 0;
      return std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_insert(
               a1,
               v9,
               v10,
               a3);
    }

    __int64 __fastcall std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_insert(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            _DWORD *a4)
    {
      __int64 v7; // x21
      _BOOL8 v8; // x23
      __int64 v9; // x24
    
      v7 = a1 + 8;
      v8 = 1;
      if ( !a2 && v7 != a3 )
        v8 = *a4 < *(_DWORD *)(a3 + 32);
      v9 = operator new(40);
      *(_QWORD *)(v9 + 32) = *(_QWORD *)a4;
      std::_Rb_tree_insert_and_rebalance(v8, v9, a3, v7);
      ++*(_QWORD *)(a1 + 40);
      return v9;
    }

    __int64 __fastcall std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_insert_unique(
            __int64 a1,
            int *a2)
    {
      __int64 v4; // x10
      int v5; // w8
      __int64 v6; // x21
      int v7; // w9
      __int64 *v8; // x10
      __int64 result; // x0
    
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        v5 = *a2;
        do
        {
          v6 = v4;
          v7 = *(_DWORD *)(v4 + 32);
          v8 = (__int64 *)(v4 + 16);
          if ( v5 >= v7 )
            v8 = (__int64 *)(v6 + 24);
          v4 = *v8;
        }
        while ( v4 );
        result = v6;
        if ( v5 >= v7 )
        {
    LABEL_11:
          if ( *(_DWORD *)(result + 32) >= *a2 )
            return result;
          return std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_insert(
                   a1,
                   0,
                   v6,
                   a2);
        }
      }
      else
      {
        v6 = a1 + 8;
      }
      if ( v6 != *(_QWORD *)(a1 + 24) )
      {
        result = std::_Rb_tree_decrement(v6);
        goto LABEL_11;
      }
      return std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_insert(
               a1,
               0,
               v6,
               a2);
    }

}; // end class std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>
