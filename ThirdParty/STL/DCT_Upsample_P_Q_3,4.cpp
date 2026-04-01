class DCT_Upsample::P_Q<3,4>
{
public:

    __int64 __fastcall DCT_Upsample::P_Q<3,4>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w12
      int v4; // w14
      int v5; // w17
      int v6; // w3
      int v7; // w4
      int v8; // w11
      int v9; // w5
      int v10; // w6
      int v11; // w13
      int v12; // w4
      int v13; // w2
      int v14; // w15
      int v15; // w14
    
      v3 = a3[3];
      v4 = a3[11];
      v5 = *a3;
      v6 = a3[16];
      v7 = a3[19];
      v8 = 810 * v7;
      v9 = a3[9];
      v10 = a3[8];
      v11 = -99 * v7;
      v12 = a3[1];
      v13 = a3[17];
      *(_DWORD *)result = v5;
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_DWORD *)(result + 56) = 0;
      *(_DWORD *)(result + 4) = (426 * v10 + 512) >> 10;
      *(_DWORD *)(result + 12) = (23 * v10 + 512) >> 10;
      v14 = (810 * v4 + 426 * v9 + 512) >> 10;
      v15 = (-99 * v4 + 23 * v9 + 512) >> 10;
      *(_DWORD *)(result + 16) = (810 * v3 + 426 * v12 + 512) >> 10;
      *(_DWORD *)(result + 48) = (-99 * v3 + 23 * v12 + 512) >> 10;
      *(_DWORD *)(result + 20) = (426 * v14 + 512) >> 10;
      *(_DWORD *)(result + 28) = (23 * v14 + 512) >> 10;
      *(_DWORD *)(result + 52) = (426 * v15 + 512) >> 10;
      *(_DWORD *)(result + 60) = (23 * v15 + 512) >> 10;
      *(_DWORD *)a2 = (928 * v10 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = v6;
      *(_QWORD *)(a2 + 8) = (unsigned int)((-75 * v10 + 512) >> 10);
      *(_DWORD *)(a2 + 16) = (928 * v14 + 512) >> 10;
      *(_DWORD *)(a2 + 20) = (v8 + 426 * v13 + 512) >> 10;
      *(_DWORD *)(a2 + 24) = (-75 * v14 + 512) >> 10;
      *(_DWORD *)(a2 + 44) = 0;
      *(_QWORD *)(a2 + 36) = 0;
      *(_QWORD *)(a2 + 28) = 0;
      *(_DWORD *)(a2 + 48) = (928 * v15 + 512) >> 10;
      *(_DWORD *)(a2 + 52) = (v11 + 23 * v13 + 512) >> 10;
      *(_QWORD *)(a2 + 56) = (unsigned int)((-75 * v15 + 512) >> 10);
      return result;
    }

}; // end class DCT_Upsample::P_Q<3,4>
