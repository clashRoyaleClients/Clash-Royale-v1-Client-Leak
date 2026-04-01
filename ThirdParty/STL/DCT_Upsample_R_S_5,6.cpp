class DCT_Upsample::R_S<5,6>
{
public:

    __int64 __fastcall DCT_Upsample::R_S<5,6>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w10
      int v4; // w15
      int v5; // w17
      int v6; // w3
      int v7; // w4
      int v8; // w5
      int v9; // w7
      int v10; // w20
      int v11; // w21
      int v12; // w22
      int v13; // w23
      int v14; // w24
      int v15; // w25
      int v16; // w26
      int v17; // w27
      int v18; // w16
      int v19; // w14
      int v20; // w6
      int v21; // w19
      int v22; // w30
      int v23; // w11
      int v24; // w3
      int v25; // w4
      int v26; // w12
      int v27; // w13
      int v28; // w2
    
      v3 = a3[3];
      v4 = a3[11];
      v5 = a3[1];
      v6 = a3[5];
      v7 = a3[9];
      v8 = a3[19];
      v9 = a3[13];
      v10 = a3[27];
      v11 = a3[17];
      v12 = a3[21];
      v13 = a3[25];
      v14 = a3[29];
      v15 = a3[33];
      v16 = a3[35];
      v17 = a3[37];
      v18 = -325 * v3 + 928 * v5 + 218 * v6;
      v19 = 526 * v3 - 75 * v5 + 787 * v6;
      v20 = a3[10];
      v21 = a3[26];
      v22 = (-325 * v4 + 928 * v7 + 218 * v9 + 512) >> 10;
      v23 = (-325 * v10 + 928 * v13 + 218 * v14 + 512) >> 10;
      v24 = (526 * v4 - 75 * v7 + 787 * v9 + 512) >> 10;
      v25 = (526 * v10 - 75 * v13 + 787 * v14 + 512) >> 10;
      v26 = a3[2];
      v27 = a3[18];
      v28 = a3[34];
      *(_DWORD *)result = (v18 + 512) >> 10;
      *(_DWORD *)(result + 4) = (810 * v23 + 426 * v22 + 512) >> 10;
      *(_DWORD *)(result + 8) = (-325 * v16 + 928 * v15 + 218 * v17 + 512) >> 10;
      *(_DWORD *)(result + 12) = (-99 * v23 + 23 * v22 + 512) >> 10;
      *(_DWORD *)(result + 16) = v26;
      *(_DWORD *)(result + 20) = (810 * v21 + 426 * v20 + 512) >> 10;
      *(_DWORD *)(result + 24) = v28;
      *(_DWORD *)(result + 28) = (-99 * v21 + 23 * v20 + 512) >> 10;
      *(_DWORD *)(result + 32) = (v19 + 512) >> 10;
      *(_DWORD *)(result + 36) = (810 * v25 + 426 * v24 + 512) >> 10;
      *(_DWORD *)(result + 40) = (526 * v16 - 75 * v15 + 787 * v17 + 512) >> 10;
      *(_DWORD *)(result + 44) = (-99 * v25 + 23 * v24 + 512) >> 10;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
      *(_DWORD *)a2 = (-325 * v23 + 928 * v22 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = (-325 * v8 + 928 * v11 + 218 * v12 + 512) >> 10;
      *(_DWORD *)(a2 + 8) = (526 * v23 - 75 * v22 + 512) >> 10;
      *(_DWORD *)(a2 + 16) = (-325 * v21 + 928 * v20 + 512) >> 10;
      *(_DWORD *)(a2 + 20) = v27;
      *(_DWORD *)(a2 + 24) = (526 * v21 - 75 * v20 + 512) >> 10;
      *(_DWORD *)(a2 + 32) = (-325 * v25 + 928 * v24 + 512) >> 10;
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 28) = 0;
      *(_DWORD *)(a2 + 36) = (526 * v8 - 75 * v11 + 787 * v12 + 512) >> 10;
      *(_DWORD *)(a2 + 40) = (526 * v25 - 75 * v24 + 512) >> 10;
      *(_DWORD *)(a2 + 60) = 0;
      *(_QWORD *)(a2 + 52) = 0;
      *(_QWORD *)(a2 + 44) = 0;
      return result;
    }

}; // end class DCT_Upsample::R_S<5,6>
