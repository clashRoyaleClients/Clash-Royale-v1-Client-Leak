class DCT_Upsample::R_S<4,4>
{
public:

    __int64 __fastcall DCT_Upsample::R_S<4,4>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w12
      int v4; // w14
      int v5; // w4
      int v6; // w5
      int v7; // w6
      int v8; // w7
      int v9; // w19
      int v10; // w20
      int v11; // w21
      int v12; // w22
      int v13; // w13
      int v14; // w12
      int v15; // w4
      int v16; // w2
      int v17; // w15
      int v18; // w14
      int v19; // w19
      int v20; // w6
      int v21; // w15
      int v22; // w5
      int v23; // w14
    
      v3 = a3[3];
      v4 = a3[27];
      v5 = a3[1];
      v6 = a3[9];
      v7 = a3[11];
      v8 = a3[17];
      v9 = a3[25];
      v10 = a3[19];
      v11 = a3[2];
      v12 = a3[10];
      v13 = -325 * v3 + 928 * v5;
      v14 = 526 * v3 - 75 * v5;
      v15 = a3[18];
      v16 = a3[26];
      *(_DWORD *)(result + 16) = v11;
      *(_DWORD *)(result + 8) = 0;
      v17 = -325 * v4 + 928 * v9;
      *(_DWORD *)(result + 24) = 0;
      v18 = 526 * v4 - 75 * v9;
      v19 = 526 * v7;
      *(_DWORD *)result = (v13 + 512) >> 10;
      v20 = (-325 * v7 + 928 * v6 + 512) >> 10;
      v21 = (v17 + 512) >> 10;
      v22 = (v19 - 75 * v6 + 512) >> 10;
      v23 = (v18 + 512) >> 10;
      *(_DWORD *)(result + 20) = (810 * v16 + 426 * v12 + 512) >> 10;
      *(_DWORD *)(result + 28) = (-99 * v16 + 23 * v12 + 512) >> 10;
      *(_DWORD *)(result + 32) = (v14 + 512) >> 10;
      *(_DWORD *)(result + 40) = 0;
      *(_DWORD *)(result + 4) = (810 * v21 + 426 * v20 + 512) >> 10;
      *(_DWORD *)(result + 12) = (-99 * v21 + 23 * v20 + 512) >> 10;
      *(_DWORD *)(result + 36) = (810 * v23 + 426 * v22 + 512) >> 10;
      *(_DWORD *)(result + 44) = (-99 * v23 + 23 * v22 + 512) >> 10;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
      *(_DWORD *)a2 = (-325 * v21 + 928 * v20 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = (-325 * v10 + 928 * v8 + 512) >> 10;
      *(_DWORD *)(a2 + 8) = (526 * v21 - 75 * v20 + 512) >> 10;
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 16) = (-325 * v16 + 928 * v12 + 512) >> 10;
      *(_DWORD *)(a2 + 20) = v15;
      *(_QWORD *)(a2 + 24) = (unsigned int)((526 * v16 - 75 * v12 + 512) >> 10);
      *(_DWORD *)(a2 + 32) = (-325 * v23 + 928 * v22 + 512) >> 10;
      *(_DWORD *)(a2 + 36) = (526 * v10 - 75 * v8 + 512) >> 10;
      *(_DWORD *)(a2 + 40) = (526 * v23 - 75 * v22 + 512) >> 10;
      *(_DWORD *)(a2 + 60) = 0;
      *(_QWORD *)(a2 + 52) = 0;
      *(_QWORD *)(a2 + 44) = 0;
      return result;
    }

}; // end class DCT_Upsample::R_S<4,4>
