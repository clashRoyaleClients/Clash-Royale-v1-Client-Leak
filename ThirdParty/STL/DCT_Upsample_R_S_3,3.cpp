class DCT_Upsample::R_S<3,3>
{
public:

    __int64 __fastcall DCT_Upsample::R_S<3,3>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w11
      int v4; // w13
      int v5; // w17
      int v6; // w3
      int v7; // w4
      int v8; // w2
      int v9; // w14
      int v10; // w13
    
      v3 = a3[1];
      v4 = a3[9];
      v5 = a3[17];
      v6 = a3[2];
      v7 = a3[10];
      v8 = a3[18];
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 24) = 0;
      *(_DWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
      *(_DWORD *)(result + 16) = v6;
      v9 = (928 * v4 + 512) >> 10;
      v10 = (512 - 75 * v4) >> 10;
      *(_DWORD *)result = (928 * v3 + 512) >> 10;
      *(_DWORD *)(result + 20) = (426 * v7 + 512) >> 10;
      *(_DWORD *)(result + 28) = (23 * v7 + 512) >> 10;
      *(_DWORD *)(result + 32) = (512 - 75 * v3) >> 10;
      *(_DWORD *)(result + 4) = (426 * v9 + 512) >> 10;
      *(_DWORD *)(result + 12) = (23 * v9 + 512) >> 10;
      *(_DWORD *)(result + 36) = (426 * v10 + 512) >> 10;
      *(_DWORD *)(result + 44) = (23 * v10 + 512) >> 10;
      *(_DWORD *)a2 = (928 * v9 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = (928 * v5 + 512) >> 10;
      *(_QWORD *)(a2 + 8) = (unsigned int)((512 - 75 * v9) >> 10);
      *(_DWORD *)(a2 + 16) = (928 * v7 + 512) >> 10;
      *(_DWORD *)(a2 + 20) = v8;
      *(_DWORD *)(a2 + 24) = (512 - 75 * v7) >> 10;
      *(_DWORD *)(a2 + 28) = 0;
      *(_DWORD *)(a2 + 32) = (928 * v10 + 512) >> 10;
      *(_DWORD *)(a2 + 36) = (512 - 75 * v5) >> 10;
      *(_DWORD *)(a2 + 40) = (512 - 75 * v10) >> 10;
      *(_DWORD *)(a2 + 60) = 0;
      *(_QWORD *)(a2 + 52) = 0;
      *(_QWORD *)(a2 + 44) = 0;
      return result;
    }

}; // end class DCT_Upsample::R_S<3,3>
