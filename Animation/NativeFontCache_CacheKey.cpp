class NativeFontCache::CacheKey
{
public:

    bool __fastcall NativeFontCache::CacheKey::operator<(__int64 a1, __int64 a2)
    {
      unsigned int v2; // w8
      unsigned int v3; // w9
    
      v2 = *(_DWORD *)(a1 + 4);
      v3 = *(_DWORD *)(a2 + 4);
      if ( v2 != v3 )
        return v2 < v3;
      if ( *(_DWORD *)a1 == *(_DWORD *)a2 )
        return (unsigned int)nti_compare_font(*(const void **)(a1 + 8), *(const void **)(a2 + 8)) >> 31;
      return *(_DWORD *)a1 < *(_DWORD *)a2;
    }

}; // end class NativeFontCache::CacheKey
