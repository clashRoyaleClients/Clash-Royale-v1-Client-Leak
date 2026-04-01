class DCT_Upsample::P_Q<4,4>
{
public:

    __int64 __fastcall DCT_Upsample::P_Q<4,4>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w15
      int v4; // w13
      int v5; // w14
      int v6; // w16
      int v7; // w17
      int v8; // w3
      int v9; // w5
      int v10; // w6
      int v11; // w7
      int v12; // w19
      int v13; // w13
      int v14; // w20
      int v15; // w14
      int v16; // w21
      int v17; // w22
      int v18; // w2
      int v19; // w6
      int v20; // w16
      int v21; // w3
      int v22; // w5
      int v23; // w6
    
      v3 = a3[3];
      v4 = a3[27];
      v5 = a3[11];
      v6 = 810 * v5;
      v7 = a3[19];
      v8 = a3[25];
      v9 = -99 * v5;
      v10 = -99 * v4;
      v11 = 810 * v4;
      v12 = *a3;
      v13 = a3[8];
      v14 = a3[16];
      v15 = a3[24];
      v16 = a3[1];
      v17 = a3[9];
      v18 = a3[17];
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_DWORD *)result = v12;
      v19 = v10 + 23 * v8;
      v20 = (v6 + 426 * v17 + 512) >> 10;
      v21 = (v11 + 426 * v8 + 512) >> 10;
      v22 = (v9 + 23 * v17 + 512) >> 10;
      v23 = (v19 + 512) >> 10;
      *(_DWORD *)(result + 4) = (810 * v15 + 426 * v13 + 512) >> 10;
      *(_DWORD *)(result + 12) = (-99 * v15 + 23 * v13 + 512) >> 10;
      *(_DWORD *)(result + 16) = (810 * v3 + 426 * v16 + 512) >> 10;
      *(_DWORD *)(result + 48) = (-99 * v3 + 23 * v16 + 512) >> 10;
      *(_DWORD *)(result + 56) = 0;
      *(_DWORD *)(result + 20) = (810 * v21 + 426 * v20 + 512) >> 10;
      *(_DWORD *)(result + 28) = (-99 * v21 + 23 * v20 + 512) >> 10;
      *(_DWORD *)(result + 52) = (810 * v23 + 426 * v22 + 512) >> 10;
      *(_DWORD *)(result + 60) = (-99 * v23 + 23 * v22 + 512) >> 10;
      *(_DWORD *)a2 = (-325 * v15 + 928 * v13 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = v14;
      *(_DWORD *)(a2 + 8) = (526 * v15 - 75 * v13 + 512) >> 10;
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 16) = (-325 * v21 + 928 * v20 + 512) >> 10;
      *(_DWORD *)(a2 + 20) = (810 * v7 + 426 * v18 + 512) >> 10;
      *(_DWORD *)(a2 + 24) = (526 * v21 - 75 * v20 + 512) >> 10;
      *(_DWORD *)(a2 + 44) = 0;
      *(_QWORD *)(a2 + 36) = 0;
      *(_QWORD *)(a2 + 28) = 0;
      *(_DWORD *)(a2 + 48) = (-325 * v23 + 928 * v22 + 512) >> 10;
      *(_DWORD *)(a2 + 52) = (-99 * v7 + 23 * v18 + 512) >> 10;
      *(_QWORD *)(a2 + 56) = (unsigned int)((526 * v23 - 75 * v22 + 512) >> 10);
      return result;
    }

}; // end class DCT_Upsample::P_Q<4,4>
