class lzham::elemental_vector
{
public:

    __int64 __fastcall lzham::elemental_vector::increase_capacity(
            __int64 a1,
            unsigned int a2,
            unsigned __int64 *a3,
            unsigned int a4,
            void (__fastcall *a5)(__int64, _QWORD, _QWORD),
            char a6)
    {
      int v9; // w23
      unsigned __int64 v12; // x26
      unsigned __int64 v13; // x8
      unsigned __int64 v14; // x9
      unsigned __int64 v15; // x9
      __int64 v16; // x0
      __int64 v17; // x23
      void *v18; // x1
      __int64 v19; // x0
      unsigned __int64 v21; // [xsp+10h] [xbp-160h] BYREF
      char __str[256]; // [xsp+18h] [xbp-158h] BYREF
    
      v9 = (int)a3;
      if ( *(_DWORD *)(a1 + 8) > *(_DWORD *)(a1 + 12) )
        lzham_assert(
          "m_size <= m_capacity",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.cpp",
          10);
      v12 = a2;
      if ( a2 >= 0x400000000uLL / a4 )
        lzham_assert(
          "min_new_capacity < (0x400000000ULL / element_size)",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.cpp",
          14);
      v13 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)v13 >= a2 )
        return 1;
      if ( v9 )
      {
        if ( a2 && ((a2 - 1) & a2) == 0 )
          goto LABEL_11;
        v14 = (a2 - 1LL) | (((unsigned __int64)a2 - 1) >> 32) | (((a2 - 1LL) | (((unsigned __int64)a2 - 1) >> 32)) >> 16);
        v15 = v14 | (v14 >> 8) | ((v14 | (v14 >> 8)) >> 4);
        v12 = ((unsigned int)((v15 | (v15 >> 2)) >> 1) | (unsigned int)v15 | (unsigned int)(v15 >> 2)) + 1;
      }
      if ( !v12 )
      {
        v12 = 0;
    LABEL_14:
        lzham_assert(
          "new_capacity && (new_capacity > m_capacity)",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.cpp",
          28);
        goto LABEL_15;
      }
    LABEL_11:
      if ( v12 <= v13 )
        goto LABEL_14;
    LABEL_15:
      if ( a5 )
      {
        v16 = lzham::lzham_malloc((lzham *)(v12 * a4), (unsigned __int64)&v21, a3);
        v17 = v16;
        if ( !v16 )
        {
          if ( (a6 & 1) == 0 )
          {
            sprintf_s(__str, 0, "vector: lzham_malloc() failed allocating %u bytes", v12 * a4);
            lzham_fail(
              "buf",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.cpp",
              56);
          }
          return 0;
        }
        a5(v16, *(_QWORD *)a1, *(unsigned int *)(a1 + 8));
        if ( *(_QWORD *)a1 )
          lzham::lzham_free(*(lzham **)a1, v18);
        *(_QWORD *)a1 = v17;
      }
      else
      {
        v19 = lzham::lzham_realloc(
                *(lzham **)a1,
                (void *)(v12 * a4),
                (unsigned __int64)&v21,
                (unsigned __int64 *)1,
                (bool)a5);
        if ( !v19 )
        {
          if ( (a6 & 1) == 0 )
          {
            sprintf_s(__str, 0, "vector: lzham_realloc() failed allocating %u bytes", v12 * a4);
            lzham_fail(
              "buf",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.cpp",
              42);
          }
          return 0;
        }
        *(_QWORD *)a1 = v19;
      }
      if ( v21 > v12 * a4 )
        v12 = v21 / a4;
      *(_DWORD *)(a1 + 12) = v12;
      return 1;
    }

}; // end class lzham::elemental_vector
