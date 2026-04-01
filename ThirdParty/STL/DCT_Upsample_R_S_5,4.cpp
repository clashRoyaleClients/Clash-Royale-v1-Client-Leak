class DCT_Upsample::R_S<5,4>
{
public:

    __int64 __fastcall DCT_Upsample::R_S<5,4>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w13
      int v4; // w14
      int v5; // w4
      int v6; // w5
      int v7; // w6
      int v8; // w7
      int v9; // w19
      int v10; // w20
      int v11; // w21
      int v12; // w22
      int v13; // w12
      int v14; // w23
      int v15; // w24
      int v16; // w13
      int v17; // w4
      int v18; // w25
      int v19; // w2
      int v20; // w26
      int v21; // w5
      int v22; // w6
      int v23; // w7
      int v24; // w15
      int v25; // w19
      int v26; // w14
      int v27; // w20
      int v28; // w21
      int v29; // w15
      int v30; // w5
      int v31; // w14
    
      v3 = a3[3];
      v4 = a3[27];
      v5 = a3[1];
      v6 = a3[9];
      v7 = a3[11];
      v8 = a3[17];
      v9 = a3[19];
      v10 = a3[25];
      v11 = a3[33];
      v12 = a3[35];
      v13 = -325 * v3 + 928 * v5;
      v14 = a3[2];
      v15 = a3[10];
      v16 = 526 * v3 - 75 * v5;
      v17 = a3[18];
      v18 = a3[26];
      v19 = a3[34];
      *(_DWORD *)(result + 16) = v14;
      v20 = -325 * v7 + 928 * v6;
      v21 = 526 * v7 - 75 * v6;
      v22 = -325 * v9 + 928 * v8;
      v23 = 526 * v9 - 75 * v8;
      v24 = -325 * v4 + 928 * v10;
      v25 = -325 * v12 + 928 * v11;
      v26 = 526 * v4 - 75 * v10;
      v27 = 526 * v12 - 75 * v11;
      v28 = (v20 + 512) >> 10;
      v29 = (v24 + 512) >> 10;
      v30 = (v21 + 512) >> 10;
      v31 = (v26 + 512) >> 10;
      *(_DWORD *)result = (v13 + 512) >> 10;
      *(_DWORD *)(result + 8) = (v25 + 512) >> 10;
      *(_DWORD *)(result + 20) = (810 * v18 + 426 * v15 + 512) >> 10;
      *(_DWORD *)(result + 24) = v19;
      *(_DWORD *)(result + 4) = (810 * v29 + 426 * v28 + 512) >> 10;
      *(_DWORD *)(result + 12) = (-99 * v29 + 23 * v28 + 512) >> 10;
      *(_DWORD *)(result + 28) = (-99 * v18 + 23 * v15 + 512) >> 10;
      *(_DWORD *)(result + 32) = (v16 + 512) >> 10;
      *(_DWORD *)(result + 36) = (810 * v31 + 426 * v30 + 512) >> 10;
      *(_DWORD *)(result + 40) = (v27 + 512) >> 10;
      *(_DWORD *)(result + 44) = (-99 * v31 + 23 * v30 + 512) >> 10;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
      *(_DWORD *)a2 = (-325 * v29 + 928 * v28 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = (v22 + 512) >> 10;
      *(_DWORD *)(a2 + 8) = (526 * v29 - 75 * v28 + 512) >> 10;
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 16) = (-325 * v18 + 928 * v15 + 512) >> 10;
      *(_DWORD *)(a2 + 20) = v17;
      *(_QWORD *)(a2 + 24) = (unsigned int)((526 * v18 - 75 * v15 + 512) >> 10);
      *(_DWORD *)(a2 + 32) = (-325 * v31 + 928 * v30 + 512) >> 10;
      *(_DWORD *)(a2 + 36) = (v23 + 512) >> 10;
      *(_DWORD *)(a2 + 40) = (526 * v31 - 75 * v30 + 512) >> 10;
      *(_DWORD *)(a2 + 60) = 0;
      *(_QWORD *)(a2 + 52) = 0;
      *(_QWORD *)(a2 + 44) = 0;
      return result;
    }

}; // end class DCT_Upsample::R_S<5,4>
