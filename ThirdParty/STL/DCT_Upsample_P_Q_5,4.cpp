class DCT_Upsample::P_Q<5,4>
{
public:

    __int64 __fastcall DCT_Upsample::P_Q<5,4>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w13
      int v4; // w16
      int v5; // w4
      int v6; // w10
      int v7; // w12
      int v8; // w5
      int v9; // w11
      int v10; // w7
      int v11; // w19
      int v12; // w20
      int v13; // w21
      int v14; // w22
      int v15; // w23
      int v16; // w24
      int v17; // w2
      int v18; // w14
      int v19; // w6
      int v20; // w13
      int v21; // w5
    
      v3 = a3[11];
      v4 = a3[19];
      v5 = *a3;
      v6 = a3[8];
      v7 = a3[16];
      v8 = a3[27];
      v9 = a3[24];
      v10 = a3[3];
      v11 = a3[25];
      v12 = a3[32];
      v13 = a3[1];
      v14 = a3[9];
      v15 = a3[17];
      v16 = a3[33];
      v17 = a3[35];
      *(_DWORD *)result = v5;
      *(_DWORD *)(result + 8) = v12;
      v18 = (810 * v3 + 426 * v14 + 512) >> 10;
      v19 = (810 * v8 + 426 * v11 + 512) >> 10;
      v20 = (-99 * v3 + 23 * v14 + 512) >> 10;
      v21 = (-99 * v8 + 23 * v11 + 512) >> 10;
      *(_DWORD *)(result + 4) = (810 * v9 + 426 * v6 + 512) >> 10;
      *(_DWORD *)(result + 12) = (-99 * v9 + 23 * v6 + 512) >> 10;
      *(_DWORD *)(result + 16) = (810 * v10 + 426 * v13 + 512) >> 10;
      *(_DWORD *)(result + 20) = (810 * v19 + 426 * v18 + 512) >> 10;
      *(_DWORD *)(result + 24) = (810 * v17 + 426 * v16 + 512) >> 10;
      *(_DWORD *)(result + 28) = (-99 * v19 + 23 * v18 + 512) >> 10;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_DWORD *)(result + 48) = (-99 * v10 + 23 * v13 + 512) >> 10;
      *(_DWORD *)(result + 52) = (810 * v21 + 426 * v20 + 512) >> 10;
      *(_DWORD *)(result + 56) = (-99 * v17 + 23 * v16 + 512) >> 10;
      *(_DWORD *)(result + 60) = (-99 * v21 + 23 * v20 + 512) >> 10;
      *(_DWORD *)a2 = (-325 * v9 + 928 * v6 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = v7;
      *(_DWORD *)(a2 + 8) = (526 * v9 - 75 * v6 + 512) >> 10;
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 16) = (-325 * v19 + 928 * v18 + 512) >> 10;
      *(_DWORD *)(a2 + 20) = (810 * v4 + 426 * v15 + 512) >> 10;
      *(_DWORD *)(a2 + 24) = (526 * v19 - 75 * v18 + 512) >> 10;
      *(_DWORD *)(a2 + 44) = 0;
      *(_QWORD *)(a2 + 36) = 0;
      *(_QWORD *)(a2 + 28) = 0;
      *(_DWORD *)(a2 + 48) = (-325 * v21 + 928 * v20 + 512) >> 10;
      *(_DWORD *)(a2 + 52) = (-99 * v4 + 23 * v15 + 512) >> 10;
      *(_QWORD *)(a2 + 56) = (unsigned int)((526 * v21 - 75 * v20 + 512) >> 10);
      return result;
    }

}; // end class DCT_Upsample::P_Q<5,4>
