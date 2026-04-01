class std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>
{
public:

    __int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_erase(
            __int64 result,
            _QWORD *a2)
    {
      _QWORD *v2; // x20
      __int64 v3; // x19
      _QWORD *v4; // x21
    
      v2 = a2;
      v3 = result;
      if ( a2 )
      {
        do
        {
          std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_erase(
            v3,
            v2[3]);
          v4 = (_QWORD *)v2[2];
          result = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_destroy_node(
                     v3,
                     v2);
          v2 = v4;
        }
        while ( v4 );
      }
      return result;
    }

    void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_destroy_node(
            int a1,
            _QWORD *a2)
    {
      __int64 v3; // x8
      unsigned int *v4; // x8
      int v5; // w9
    
      v3 = a2[4];
      if ( (_UNKNOWN *)(v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        v4 = (unsigned int *)(v3 - 8);
        do
          v5 = __ldaxr(v4);
        while ( __stlxr(v5 - 1, v4) );
        if ( v5 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      operator delete(a2);
    }

    __int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::find(
            __int64 a1,
            __int64 a2)
    {
      __int64 v3; // x19
      __int64 v4; // x8
      __int64 v5; // x22
      __int64 v6; // x21
    
      v3 = a1 + 8;
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        v5 = a1 + 8;
        do
        {
          v6 = v4;
          while ( (std::string::compare(v6 + 32, a2) & 0x80000000) != 0 )
          {
            v6 = *(_QWORD *)(v6 + 24);
            if ( !v6 )
            {
              v6 = v5;
              goto LABEL_10;
            }
          }
          v4 = *(_QWORD *)(v6 + 16);
          v5 = v6;
        }
        while ( v4 );
      }
      else
      {
        v6 = a1 + 8;
      }
    LABEL_10:
      if ( v6 != v3 && (int)std::string::compare(a2, v6 + 32) >= 0 )
        return v6;
      return v3;
    }

    __int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::lower_bound(
            __int64 a1,
            __int64 a2)
    {
      __int64 v3; // x21
      __int64 v4; // x8
      __int64 v5; // x20
    
      v3 = a1 + 8;
      v4 = *(_QWORD *)(a1 + 16);
      if ( !v4 )
        return v3;
      do
      {
        v5 = v4;
        while ( (std::string::compare(v5 + 32, a2) & 0x80000000) != 0 )
        {
          v5 = *(_QWORD *)(v5 + 24);
          if ( !v5 )
            return v3;
        }
        v4 = *(_QWORD *)(v5 + 16);
        v3 = v5;
      }
      while ( v4 );
      return v5;
    }

    __int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_insert_unique(
            _QWORD *a1,
            _QWORD *a2,
            __int64 a3)
    {
      _QWORD *v4; // x21
      __int64 v6; // x22
      _QWORD *v7; // x0
      __int64 v8; // x1
      __int64 v10; // x2
    
      v4 = a2;
      if ( a2 == a1 + 1 )
      {
        if ( a1[5] )
        {
          v4 = (_QWORD *)a1[4];
          if ( (std::string::compare(v4 + 4, a3) & 0x80000000) != 0 )
            goto LABEL_10;
        }
        return std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_insert_unique(
                 a1,
                 a3);
      }
      if ( (std::string::compare(a3, a2 + 4) & 0x80000000) != 0 )
      {
        if ( v4 != (_QWORD *)a1[3] )
        {
          v6 = std::_Rb_tree_decrement(v4);
          if ( (std::string::compare(v6 + 32, a3) & 0x80000000) == 0 )
            return std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_insert_unique(
                     a1,
                     a3);
          if ( !*(_QWORD *)(v6 + 24) )
          {
            v8 = 0;
            v7 = a1;
            goto LABEL_20;
          }
        }
        v7 = a1;
        v8 = (__int64)v4;
        goto LABEL_17;
      }
      if ( (std::string::compare(v4 + 4, a3) & 0x80000000) == 0 )
        return (__int64)v4;
      if ( v4 != (_QWORD *)a1[4] )
      {
        v6 = std::_Rb_tree_increment(v4);
        if ( (std::string::compare(a3, v6 + 32) & 0x80000000) != 0 )
        {
          if ( v4[3] )
          {
            v7 = a1;
            v8 = v6;
    LABEL_20:
            v10 = v6;
            return std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_insert(
                     v7,
                     v8,
                     v10,
                     a3);
          }
          goto LABEL_10;
        }
        return std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_insert_unique(
                 a1,
                 a3);
      }
    LABEL_10:
      v8 = 0;
      v7 = a1;
    LABEL_17:
      v10 = (__int64)v4;
      return std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_insert(
               v7,
               v8,
               v10,
               a3);
    }

    __int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_insert(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4)
    {
      __int64 v7; // x21
      __int64 v8; // x23
      __int64 node; // x22
    
      v7 = a1 + 8;
      v8 = 1;
      if ( !a2 && v7 != a3 )
        v8 = (unsigned int)std::string::compare(a4, a3 + 32) >> 31;
      node = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_create_node(
               a1,
               a4);
      std::_Rb_tree_insert_and_rebalance(v8, node, a3, v7);
      ++*(_QWORD *)(a1 + 40);
      return node;
    }

    __int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_insert_unique(
            __int64 a1,
            __int64 a2)
    {
      __int64 v4; // x8
      __int64 v5; // x21
      int v6; // w0
      __int64 *v7; // x8
      __int64 v8; // x22
    
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        do
        {
          v5 = v4;
          v6 = std::string::compare(a2, v4 + 32);
          v7 = (__int64 *)(v5 + 16);
          if ( v6 >= 0 )
            v7 = (__int64 *)(v5 + 24);
          v4 = *v7;
        }
        while ( v4 );
        v8 = v5;
        if ( (v6 & 0x80000000) == 0 )
          goto LABEL_10;
      }
      else
      {
        v5 = a1 + 8;
      }
      if ( v5 == *(_QWORD *)(a1 + 24) )
        return std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_insert(
                 a1,
                 0,
                 v5,
                 a2);
      v8 = std::_Rb_tree_decrement(v5);
    LABEL_10:
      if ( (std::string::compare(v8 + 32, a2) & 0x80000000) != 0 )
        return std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_insert(
                 a1,
                 0,
                 v5,
                 a2);
      return v8;
    }

    __int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_create_node(
            __int64 a1,
            const std::string *a2)
    {
      __int64 v3; // x19
    
      v3 = operator new(48);
      std::string::string((std::string *)(v3 + 32), a2);
      *(_QWORD *)(v3 + 40) = *((_QWORD *)a2 + 1);
      return v3;
    }

    __int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::erase(
            __int64 a1,
            __int64 a2)
    {
      __int64 v4; // x21
      __int64 v5; // x0
      __int64 v6; // x19
    
      v4 = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::lower_bound(
             a1,
             a2);
      v5 = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::upper_bound(
             a1,
             a2);
      v6 = *(_QWORD *)(a1 + 40);
      std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::erase(
        a1,
        v4,
        v5);
      return v6 - *(_QWORD *)(a1 + 40);
    }

    void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::erase(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __int64 v4; // x22
      __int64 v7; // x23
      _QWORD *v8; // x0
    
      v4 = a2;
      if ( a2 == *(_QWORD *)(a1 + 24) && a3 == a1 + 8 )
      {
        std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_erase(
          a1,
          *(_QWORD **)(a1 + 16));
        *(_QWORD *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 24) = a3;
        *(_QWORD *)(a1 + 32) = a3;
        *(_QWORD *)(a1 + 40) = 0;
      }
      else if ( a2 != a3 )
      {
        do
        {
          v7 = std::_Rb_tree_increment(v4);
          v8 = (_QWORD *)std::_Rb_tree_rebalance_for_erase(v4, a1 + 8);
          std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_destroy_node(
            a1,
            v8);
          --*(_QWORD *)(a1 + 40);
          v4 = v7;
        }
        while ( v7 != a3 );
      }
    }

    __int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::upper_bound(
            __int64 a1,
            __int64 a2)
    {
      __int64 v3; // x21
      __int64 v4; // x8
      __int64 v5; // x20
    
      v3 = a1 + 8;
      v4 = *(_QWORD *)(a1 + 16);
      if ( !v4 )
        return v3;
      do
      {
        v5 = v4;
        while ( (std::string::compare(a2, v5 + 32) & 0x80000000) == 0 )
        {
          v5 = *(_QWORD *)(v5 + 24);
          if ( !v5 )
            return v3;
        }
        v4 = *(_QWORD *)(v5 + 16);
        v3 = v5;
      }
      while ( v4 );
      return v5;
    }

}; // end class std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>
