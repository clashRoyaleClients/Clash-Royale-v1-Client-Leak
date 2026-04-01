class std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>
{
public:

    __int64 __fastcall std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::find(
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
          while ( (NativeFontCache::CacheKey::operator<(v6 + 32, a2) & 1) != 0 )
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
      if ( v6 != v3 && !(unsigned int)NativeFontCache::CacheKey::operator<(a2, v6 + 32) )
        return v6;
      return v3;
    }

    void __fastcall std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_erase(
            __int64 a1,
            __int64 a2)
    {
      __int64 v2; // x20
      __int64 v4; // x21
    
      v2 = a2;
      if ( a2 )
      {
        do
        {
          std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_erase(
            a1,
            *(_QWORD *)(v2 + 24));
          v4 = *(_QWORD *)(v2 + 16);
          nti_free_font(*(CFTypeRef *)(v2 + 40));
          operator delete((void *)v2);
          v2 = v4;
        }
        while ( v4 );
      }
    }

    __int64 __fastcall std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_insert_unique(
            __int64 a1,
            __int64 a2)
    {
      __int64 v4; // x8
      __int64 v5; // x21
      _BOOL4 v6; // w0
      __int64 *v7; // x8
      __int64 v8; // x22
    
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        do
        {
          v5 = v4;
          v6 = NativeFontCache::CacheKey::operator<(a2, v4 + 32);
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
        return std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_insert(
                 a1,
                 0,
                 v5,
                 a2);
      v8 = std::_Rb_tree_decrement(v5);
    LABEL_10:
      if ( NativeFontCache::CacheKey::operator<(v8 + 32, a2) )
        return std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_insert(
                 a1,
                 0,
                 v5,
                 a2);
      return v8;
    }

    __int64 __fastcall std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_insert(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4)
    {
      __int64 v7; // x21
      _BOOL8 v8; // x23
      __int64 node; // x22
    
      v7 = a1 + 8;
      v8 = 1;
      if ( !a2 && v7 != a3 )
        v8 = NativeFontCache::CacheKey::operator<(a4, a3 + 32);
      node = std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_create_node(
               a1,
               a4);
      std::_Rb_tree_insert_and_rebalance(v8, node, a3, v7);
      ++*(_QWORD *)(a1 + 40);
      return node;
    }

    __int64 __fastcall std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>::_M_create_node(
            __int64 a1,
            __int64 a2)
    {
      __int64 v3; // x19
    
      v3 = operator new(80);
      *(_DWORD *)(v3 + 32) = *(_DWORD *)a2;
      *(_DWORD *)(v3 + 36) = *(_DWORD *)(a2 + 4);
      *(_QWORD *)(v3 + 40) = 0;
      *(_QWORD *)(v3 + 40) = nti_font_copy(*(const void **)(a2 + 8));
      *(_OWORD *)(v3 + 64) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v3 + 48) = *(_OWORD *)(a2 + 16);
      return v3;
    }

}; // end class std::_Rb_tree<NativeFontCache::CacheKey,std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>,std::_Select1st<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>,std::less<NativeFontCache::CacheKey>,std::allocator<std::pair<NativeFontCache::CacheKey const,NativeFontCache::CacheInfo>>>
