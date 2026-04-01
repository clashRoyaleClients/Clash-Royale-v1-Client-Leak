class DCT_Upsample::R_S<3,4>
{
public:

    __int64 __fastcall DCT_Upsample::R_S<3,4>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w12
      int v4; // w13
      int v5; // w17
      int v6; // w3
      int v7; // w4
      int v8; // w11
      int v9; // w5
      int v10; // w6
      int v11; // w14
      int v12; // w4
      int v13; // w2
      int v14; // w15
      int v15; // w13
    
      v3 = a3[3];
      v4 = a3[11];
      v5 = a3[1];
      v6 = a3[17];
      v7 = a3[19];
      v8 = -325 * v7;
      v9 = a3[9];
      v10 = a3[2];
      v11 = 526 * v7;
      v12 = a3[10];
      v13 = a3[18];
      *(_DWORD *)(result + 16) = v10;
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 24) = 0;
      *(_DWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
      *(_DWORD *)(result + 20) = (426 * v12 + 512) >> 10;
      *(_DWORD *)(result + 28) = (23 * v12 + 512) >> 10;
      v14 = (-325 * v4 + 928 * v9 + 512) >> 10;
      v15 = (526 * v4 - 75 * v9 + 512) >> 10;
      *(_DWORD *)result = (-325 * v3 + 928 * v5 + 512) >> 10;
      *(_DWORD *)(result + 32) = (526 * v3 - 75 * v5 + 512) >> 10;
      *(_DWORD *)(result + 4) = (426 * v14 + 512) >> 10;
      *(_DWORD *)(result + 12) = (23 * v14 + 512) >> 10;
      *(_DWORD *)(result + 36) = (426 * v15 + 512) >> 10;
      *(_DWORD *)(result + 44) = (23 * v15 + 512) >> 10;
      *(_DWORD *)a2 = (928 * v14 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = (v8 + 928 * v6 + 512) >> 10;
      *(_QWORD *)(a2 + 8) = (unsigned int)((-75 * v14 + 512) >> 10);
      *(_DWORD *)(a2 + 16) = (928 * v12 + 512) >> 10;
      *(_DWORD *)(a2 + 20) = v13;
      *(_QWORD *)(a2 + 24) = (unsigned int)((-75 * v12 + 512) >> 10);
      *(_DWORD *)(a2 + 32) = (928 * v15 + 512) >> 10;
      *(_DWORD *)(a2 + 36) = (v11 - 75 * v6 + 512) >> 10;
      *(_DWORD *)(a2 + 40) = (-75 * v15 + 512) >> 10;
      *(_DWORD *)(a2 + 60) = 0;
      *(_QWORD *)(a2 + 52) = 0;
      *(_QWORD *)(a2 + 44) = 0;
      return result;
    }

}; // end class DCT_Upsample::R_S<3,4>
