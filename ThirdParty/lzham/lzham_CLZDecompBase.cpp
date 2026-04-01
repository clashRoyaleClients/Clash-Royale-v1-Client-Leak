class lzham::CLZDecompBase
{
public:

    __int64 __fastcall lzham::CLZDecompBase::init_position_slots(__int64 result, unsigned int a2)
    {
      _DWORD *v3; // x19
      const char *v4; // x0
      int v5; // w2
    
      v3 = (_DWORD *)result;
      if ( a2 <= 0xE )
      {
        v4 = "dict_size_log2 >= LZHAM_MIN_DICT_SIZE_LOG2";
        v5 = 76;
        goto LABEL_5;
      }
      if ( a2 >= 0x1E )
      {
        v4 = "dict_size_log2 <= LZHAM_MAX_DICT_SIZE_LOG2_X64";
        v5 = 77;
    LABEL_5:
        result = lzham_assert(
                   v4,
                   "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecompbase.cpp",
                   v5);
      }
      *v3 = a2;
      v3[1] = 1 << a2;
      v3[2] = lzham::g_num_lzx_position_slots[a2 - 15];
      return result;
    }

}; // end class lzham::CLZDecompBase
