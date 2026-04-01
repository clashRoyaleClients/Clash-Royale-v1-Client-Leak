class DCT_Upsample::Matrix44
{
public:

    __int64 __fastcall DCT_Upsample::Matrix44::operator-=(__int64 result, __int64 a2)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      _DWORD *v4; // x12
    
      v2 = 0;
      v3 = a2 + 8;
      do
      {
        v4 = (_DWORD *)(result + v2);
        *v4 = *(_DWORD *)(result + v2) - *(_DWORD *)(a2 + v2);
        v4[1] = *(_DWORD *)(result + v2 + 4) - *(_DWORD *)(v3 + v2 - 4);
        v4[2] = *(_DWORD *)(result + v2 + 8) - *(_DWORD *)(v3 + v2);
        v4[3] = *(_DWORD *)(result + v2 + 12) - *(_DWORD *)(v3 + v2 + 4);
        v2 += 16;
      }
      while ( v2 != 64 );
      return result;
    }

    _WORD *__fastcall DCT_Upsample::Matrix44::add_and_store(_WORD *result, __int64 a2, __int64 a3)
    {
      __int64 i; // x8
    
      for ( i = 0; i != 64; i += 16 )
      {
        *result = *(_DWORD *)(a3 + i) + *(_DWORD *)(a2 + i);
        result[8] = *(_DWORD *)(a3 + i + 4) + *(_DWORD *)(a2 + i + 4);
        result[16] = *(_DWORD *)(a3 + i + 8) + *(_DWORD *)(a2 + i + 8);
        result[24] = *(_DWORD *)(a3 + i + 12) + *(_WORD *)(a2 + i + 12);
        ++result;
      }
      return result;
    }

    _WORD *__fastcall DCT_Upsample::Matrix44::sub_and_store(_WORD *result, __int64 a2, __int64 a3)
    {
      __int64 i; // x8
    
      for ( i = 0; i != 64; i += 16 )
      {
        *result = *(_DWORD *)(a2 + i) - *(_DWORD *)(a3 + i);
        result[8] = *(_DWORD *)(a2 + i + 4) - *(_DWORD *)(a3 + i + 4);
        result[16] = *(_DWORD *)(a2 + i + 8) - *(_DWORD *)(a3 + i + 8);
        result[24] = *(_WORD *)(a2 + i + 12) - *(_DWORD *)(a3 + i + 12);
        ++result;
      }
      return result;
    }

}; // end class DCT_Upsample::Matrix44
