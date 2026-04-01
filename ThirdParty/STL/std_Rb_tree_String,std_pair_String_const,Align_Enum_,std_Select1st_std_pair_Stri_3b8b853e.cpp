class std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>
{
public:

    void __fastcall std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_erase(
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
          std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_erase(
            a1,
            v2[3]);
          v4 = (_QWORD *)v2[2];
          String::~String();
          operator delete(v2);
          v2 = v4;
        }
        while ( v4 );
      }
    }

    __int64 __fastcall std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::lower_bound(
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
        while ( (String::operator<(v5 + 32, a2) & 1) != 0 )
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

    __int64 __fastcall std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_insert_unique(
            _QWORD *a1,
            _QWORD *a2,
            __int64 a3)
    {
      _QWORD *v4; // x21
      __int64 v6; // x22
      _QWORD *v7; // x0
      __int64 v8; // x1
      __int64 v9; // x2
    
      v4 = a2;
      if ( a2 != a1 + 1 )
      {
        if ( (unsigned int)String::operator<(a3, a2 + 4) )
        {
          if ( v4 == (_QWORD *)a1[3] )
          {
    LABEL_6:
            v7 = a1;
            v8 = (__int64)v4;
    LABEL_18:
            v9 = (__int64)v4;
            return std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_insert(
                     v7,
                     v8,
                     v9,
                     a3);
          }
          v6 = std::_Rb_tree_decrement(v4);
          if ( (unsigned int)String::operator<(v6 + 32, a3) )
          {
            if ( *(_QWORD *)(v6 + 24) )
              goto LABEL_6;
            v8 = 0;
            v7 = a1;
    LABEL_20:
            v9 = v6;
            return std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_insert(
                     v7,
                     v8,
                     v9,
                     a3);
          }
          return std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_insert_unique(
                   a1,
                   a3);
        }
        if ( !(unsigned int)String::operator<(v4 + 4, a3) )
          return (__int64)v4;
        if ( v4 == (_QWORD *)a1[4] )
        {
    LABEL_17:
          v8 = 0;
          v7 = a1;
          goto LABEL_18;
        }
        v6 = std::_Rb_tree_increment(v4);
        if ( (unsigned int)String::operator<(a3, v6 + 32) )
        {
          if ( v4[3] )
          {
            v7 = a1;
            v8 = v6;
            goto LABEL_20;
          }
          goto LABEL_17;
        }
        return std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_insert_unique(
                 a1,
                 a3);
      }
      if ( !a1[5] || !(unsigned int)String::operator<(a1[4] + 32LL, a3) )
        return std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_insert_unique(
                 a1,
                 a3);
      v8 = 0;
      v9 = a1[4];
      v7 = a1;
      return std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_insert(
               v7,
               v8,
               v9,
               a3);
    }

    __int64 __fastcall std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_insert(
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
        v8 = String::operator<(a4, a3 + 32);
      node = std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_create_node(
               a1,
               a4);
      std::_Rb_tree_insert_and_rebalance(v8, node, a3, v7);
      ++*(_QWORD *)(a1 + 40);
      return node;
    }

    __int64 __fastcall std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_insert_unique(
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
          v6 = String::operator<(a2, v4 + 32);
          v7 = (__int64 *)(v5 + 16);
          if ( !v6 )
            v7 = (__int64 *)(v5 + 24);
          v4 = *v7;
        }
        while ( v4 );
        v8 = v5;
        if ( !v6 )
          goto LABEL_10;
      }
      else
      {
        v5 = a1 + 8;
      }
      if ( v5 == *(_QWORD *)(a1 + 24) )
        return std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_insert(
                 a1,
                 0,
                 v5,
                 a2);
      v8 = std::_Rb_tree_decrement(v5);
    LABEL_10:
      if ( (unsigned int)String::operator<(v8 + 32, a2) )
        return std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_insert(
                 a1,
                 0,
                 v5,
                 a2);
      return v8;
    }

    __int64 __fastcall std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::_M_create_node(
            __int64 a1,
            const String *a2)
    {
      __int64 v3; // x19
    
      v3 = operator new(64);
      String::String((String *)(v3 + 32), a2);
      *(_DWORD *)(v3 + 56) = a2[1].m_length;
      return v3;
    }

    __int64 __fastcall std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::find(
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
          while ( (String::operator<(v6 + 32, a2) & 1) != 0 )
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
      if ( v6 != v3 && !(unsigned int)String::operator<(a2, v6 + 32) )
        return v6;
      return v3;
    }

}; // end class std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>
