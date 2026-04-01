class lzham::symbol_codec
{
public:

    lzham::symbol_codec *__fastcall lzham::symbol_codec::symbol_codec(lzham::symbol_codec *a1)
    {
      *((_QWORD *)a1 + 9) = 0;
      *((_QWORD *)a1 + 13) = 0;
      *((_QWORD *)a1 + 14) = 0;
      *((_QWORD *)a1 + 11) = 0;
      *((_QWORD *)a1 + 12) = 0;
      *((_QWORD *)a1 + 10) = 0;
      lzham::symbol_codec::clear(a1);
      return a1;
    }

    __int64 __fastcall lzham::symbol_codec::clear(_QWORD *a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 result; // x0
      _QWORD *v5; // x19
      __int64 v6; // t1
    
      lzham::symbol_codec::reset((InputSystem *)a1);
      v2 = a1[9];
      if ( v2 )
      {
        lzham::lzham_free(v2);
        a1[9] = 0;
        a1[10] = 0;
      }
      v3 = a1[11];
      if ( v3 )
      {
        lzham::lzham_free(v3);
        a1[11] = 0;
        a1[12] = 0;
      }
      v6 = a1[13];
      v5 = a1 + 13;
      result = v6;
      if ( v6 )
      {
        result = lzham::lzham_free(result);
        *v5 = 0;
        v5[1] = 0;
      }
      return result;
    }

    lzham::symbol_codec *__fastcall lzham::symbol_codec::symbol_codec(lzham::symbol_codec *a1)
    {
      lzham::symbol_codec::symbol_codec(a1);
      return a1;
    }

    __int64 __fastcall lzham::symbol_codec::reset(__int64 this)
    {
      *(_DWORD *)(this + 164) = 0;
      *(_QWORD *)(this + 16) = 0;
      *(_QWORD *)(this + 24) = 0;
      *(_QWORD *)this = 0;
      *(_QWORD *)(this + 8) = 0;
      *(_QWORD *)(this + 56) = 0;
      *(_QWORD *)(this + 64) = 0;
      *(_DWORD *)(this + 136) = 0;
      *(_QWORD *)(this + 120) = 0;
      *(_QWORD *)(this + 128) = 0;
      if ( *(_DWORD *)(this + 80) )
        *(_DWORD *)(this + 80) = 0;
      if ( *(_DWORD *)(this + 96) )
        *(_DWORD *)(this + 96) = 0;
      if ( *(_DWORD *)(this + 112) )
        *(_DWORD *)(this + 112) = 0;
      *(_QWORD *)(this + 40) = 0;
      *(_QWORD *)(this + 48) = 0;
      *(_DWORD *)(this + 160) = 0;
      *(_QWORD *)(this + 144) = 0;
      *(_QWORD *)(this + 152) = 0;
      return this;
    }

    __int64 __fastcall lzham::symbol_codec::start_decoding(
            InputSystem *this,
            const unsigned __int8 *a2,
            __int64 a3,
            char a4,
            void (__fastcall *a5)(unsigned __int64, void *, const unsigned __int8 **, unsigned __int64 *, bool *),
            void *a6)
    {
      __int64 v6; // x8
    
      if ( !a3 )
        return 0;
      *((_DWORD *)this + 17) = 0;
      *(_QWORD *)this = a2;
      *((_QWORD *)this + 1) = a2;
      *((_QWORD *)this + 3) = a3;
      *((_QWORD *)this + 2) = &a2[a3];
      *((_QWORD *)this + 5) = a5;
      *((_QWORD *)this + 6) = a6;
      *((_BYTE *)this + 32) = a4;
      *((_QWORD *)this + 7) = 0;
      *((_DWORD *)this + 16) = 0;
      v6 = 1;
      *((_DWORD *)this + 41) = 2;
      return v6;
    }

    __int64 __fastcall lzham::symbol_codec::stop_decoding(__int64 a1)
    {
      __int64 result; // x0
    
      if ( *(_DWORD *)(a1 + 164) != 2 )
        lzham_assert(
          "m_mode == cDecoding",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_symbol_codec.cpp",
          1317);
      result = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
      *(_DWORD *)(a1 + 164) = 0;
      return result;
    }

}; // end class lzham::symbol_codec
