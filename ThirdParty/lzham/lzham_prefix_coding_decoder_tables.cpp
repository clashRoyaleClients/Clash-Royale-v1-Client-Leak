class lzham::prefix_coding::decoder_tables
{
public:

    __int64 __fastcall lzham::prefix_coding::decoder_tables::assign(__int64 a1, __int64 a2)
    {
      void *v4; // x21
      __int64 v5; // x22
      bool v6; // zf
      __int64 v7; // x8
      void *v8; // x0
      const void *v9; // x1
      size_t v10; // x2
      int v11; // w23
      int v12; // w24
      bool v13; // zf
      unsigned int v14; // w8
      __int64 v15; // x21
      _DWORD *v16; // x0
      int v17; // w21
      int v18; // w23
      bool v19; // zf
      __int64 result; // x0
      unsigned int v21; // w8
      __int64 v22; // x21
      __int64 v23; // x0
    
      if ( a1 == a2 )
        return 1;
      v4 = *(void **)(a1 + 168);
      v5 = *(_QWORD *)(a1 + 184);
      memcpy((void *)a1, (const void *)a2, 0xC0u);
      if ( v4 )
        v6 = v5 == 0;
      else
        v6 = 1;
      if ( !v6 )
      {
        v7 = *(unsigned int *)(a2 + 164);
        if ( (_DWORD)v7 == *(_DWORD *)(a1 + 164) && *(_DWORD *)(a2 + 176) == *(_DWORD *)(a1 + 176) )
        {
          *(_QWORD *)(a1 + 168) = v4;
          *(_QWORD *)(a1 + 184) = v5;
          memcpy(v4, *(const void **)(a2 + 168), 4 * v7);
          v8 = *(void **)(a1 + 184);
          v9 = *(const void **)(a2 + 184);
          v10 = 2LL * *(unsigned int *)(a1 + 176);
    LABEL_37:
          memcpy(v8, v9, v10);
          return 1;
        }
      }
      if ( v4 )
      {
        v11 = *((_DWORD *)v4 - 1);
        v12 = ~*((_DWORD *)v4 - 2);
        if ( v11 )
          v13 = v11 == v12;
        else
          v13 = 0;
        if ( !v13 )
          lzham_assert(
            "num && (num == ~num_check)",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.h",
            98);
        if ( v11 == v12 )
          lzham::lzham_free((__int64)v4 - 16);
      }
      *(_QWORD *)(a1 + 168) = 0;
      if ( *(_QWORD *)(a2 + 168) )
      {
        v14 = *(_DWORD *)(a1 + 164);
        if ( v14 )
          v15 = v14;
        else
          v15 = 1;
        v16 = (_DWORD *)lzham::lzham_malloc(4 * v15 + 16, 0);
        if ( !v16 )
        {
          *(_QWORD *)(a1 + 168) = 0;
          return 0;
        }
        v16[3] = v15;
        v16[2] = ~(_DWORD)v15;
        *(_QWORD *)(a1 + 168) = v16 + 4;
        memcpy(v16 + 4, *(const void **)(a2 + 168), 4LL * *(unsigned int *)(a1 + 164));
      }
      if ( v5 )
      {
        v17 = *(_DWORD *)(v5 - 4);
        v18 = ~*(_DWORD *)(v5 - 8);
        if ( v17 )
          v19 = v17 == v18;
        else
          v19 = 0;
        if ( !v19 )
          lzham_assert(
            "num && (num == ~num_check)",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_mem.h",
            98);
        if ( v17 == v18 )
          lzham::lzham_free(v5 - 16);
      }
      *(_QWORD *)(a1 + 184) = 0;
      result = 1;
      if ( *(_QWORD *)(a2 + 184) )
      {
        v21 = *(_DWORD *)(a1 + 176);
        if ( v21 )
          v22 = v21;
        else
          v22 = 1;
        v23 = lzham::lzham_malloc(2 * v22 + 16, 0);
        if ( !v23 )
        {
          *(_QWORD *)(a1 + 184) = 0;
          return 0;
        }
        *(_DWORD *)(v23 + 12) = v22;
        *(_DWORD *)(v23 + 8) = ~(_DWORD)v22;
        *(_QWORD *)(a1 + 184) = v23 + 16;
        v9 = *(const void **)(a2 + 184);
        v10 = 2LL * *(unsigned int *)(a1 + 176);
        v8 = (void *)(v23 + 16);
        goto LABEL_37;
      }
      return result;
    }

}; // end class lzham::prefix_coding::decoder_tables
