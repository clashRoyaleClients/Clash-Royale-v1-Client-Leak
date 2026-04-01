class DCT_Upsample::R_S<3,2>
{
public:

    __int64 __fastcall DCT_Upsample::R_S<3,2>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w8
      int v4; // w14
      int v5; // w16
      int v6; // w11
      int v7; // w8
    
      v3 = a3[9];
      v4 = a3[1];
      v5 = a3[17];
      *(_DWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_DWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
      v6 = (928 * v3 + 512) >> 10;
      v7 = (512 - 75 * v3) >> 10;
      *(_DWORD *)result = (928 * v4 + 512) >> 10;
      *(_DWORD *)(result + 32) = (512 - 75 * v4) >> 10;
      *(_DWORD *)(result + 4) = (426 * v6 + 512) >> 10;
      *(_DWORD *)(result + 12) = (23 * v6 + 512) >> 10;
      *(_DWORD *)(result + 36) = (426 * v7 + 512) >> 10;
      *(_DWORD *)(result + 44) = (23 * v7 + 512) >> 10;
      *(_DWORD *)a2 = (928 * v6 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = (928 * v5 + 512) >> 10;
      *(_DWORD *)(a2 + 8) = (512 - 75 * v6) >> 10;
      *(_DWORD *)(a2 + 28) = 0;
      *(_QWORD *)(a2 + 20) = 0;
      *(_QWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 32) = (928 * v7 + 512) >> 10;
      *(_DWORD *)(a2 + 36) = (512 - 75 * v5) >> 10;
      *(_DWORD *)(a2 + 40) = (512 - 75 * v7) >> 10;
      *(_DWORD *)(a2 + 60) = 0;
      *(_QWORD *)(a2 + 52) = 0;
      *(_QWORD *)(a2 + 44) = 0;
      return result;
    }

}; // end class DCT_Upsample::R_S<3,2>
