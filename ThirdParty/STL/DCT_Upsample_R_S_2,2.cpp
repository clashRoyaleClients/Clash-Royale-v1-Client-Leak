class DCT_Upsample::R_S<2,2>
{
public:

    __int64 __fastcall DCT_Upsample::R_S<2,2>::calc(__int64 result, __int64 a2, __int64 a3)
    {
      int v3; // w8
      int v4; // w14
      int v5; // w15
      int v6; // w8
    
      v3 = *(__int16 *)(a3 + 18);
      v4 = *(__int16 *)(a3 + 2);
      *(_DWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      v5 = 512 - 75 * v3;
      *(_DWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
      v6 = (928 * v3 + 512) >> 10;
      *(_DWORD *)result = (928 * v4 + 512) >> 10;
      *(_DWORD *)(result + 32) = (512 - 75 * v4) >> 10;
      *(_DWORD *)(result + 4) = (426 * v6 + 512) >> 10;
      *(_DWORD *)(result + 12) = (23 * v6 + 512) >> 10;
      *(_DWORD *)(result + 36) = (426 * (v5 >> 10) + 512) >> 10;
      *(_DWORD *)(result + 44) = (23 * (v5 >> 10) + 512) >> 10;
      *(_QWORD *)a2 = (unsigned int)((928 * v6 + 512) >> 10);
      *(_DWORD *)(a2 + 8) = (512 - 75 * v6) >> 10;
      *(_DWORD *)(a2 + 28) = 0;
      *(_QWORD *)(a2 + 20) = 0;
      *(_QWORD *)(a2 + 12) = 0;
      *(_QWORD *)(a2 + 32) = (unsigned int)((928 * (v5 >> 10) + 512) >> 10);
      *(_DWORD *)(a2 + 40) = (512 - 75 * (v5 >> 10)) >> 10;
      *(_DWORD *)(a2 + 60) = 0;
      *(_QWORD *)(a2 + 52) = 0;
      *(_QWORD *)(a2 + 44) = 0;
      return result;
    }

}; // end class DCT_Upsample::R_S<2,2>
