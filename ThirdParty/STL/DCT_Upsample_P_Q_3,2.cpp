class DCT_Upsample::P_Q<3,2>
{
public:

    __int64 __fastcall DCT_Upsample::P_Q<3,2>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w9
      int v4; // w14
      int v5; // w15
      int v6; // w16
      int v7; // w17
      int v8; // w2
      int v9; // w11
      int v10; // w9
    
      v3 = a3[9];
      v4 = *a3;
      v5 = a3[8];
      v6 = a3[16];
      v7 = a3[1];
      v8 = a3[17];
      *(_DWORD *)result = v4;
      *(_DWORD *)(result + 4) = (426 * v5 + 512) >> 10;
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 12) = (23 * v5 + 512) >> 10;
      *(_DWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_DWORD *)(result + 16) = (426 * v7 + 512) >> 10;
      *(_DWORD *)(result + 56) = 0;
      v9 = (426 * v3 + 512) >> 10;
      v10 = (23 * v3 + 512) >> 10;
      *(_DWORD *)(result + 48) = (23 * v7 + 512) >> 10;
      *(_DWORD *)(result + 20) = (426 * v9 + 512) >> 10;
      *(_DWORD *)(result + 28) = (23 * v9 + 512) >> 10;
      *(_DWORD *)(result + 52) = (426 * v10 + 512) >> 10;
      *(_DWORD *)(result + 60) = (23 * v10 + 512) >> 10;
      *(_DWORD *)a2 = (928 * v5 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = v6;
      *(_QWORD *)(a2 + 8) = (unsigned int)((512 - 75 * v5) >> 10);
      *(_DWORD *)(a2 + 16) = (928 * v9 + 512) >> 10;
      *(_DWORD *)(a2 + 20) = (426 * v8 + 512) >> 10;
      *(_DWORD *)(a2 + 24) = (512 - 75 * v9) >> 10;
      *(_DWORD *)(a2 + 44) = 0;
      *(_QWORD *)(a2 + 36) = 0;
      *(_QWORD *)(a2 + 28) = 0;
      *(_DWORD *)(a2 + 48) = (928 * v10 + 512) >> 10;
      *(_DWORD *)(a2 + 52) = (23 * v8 + 512) >> 10;
      *(_QWORD *)(a2 + 56) = (unsigned int)((512 - 75 * v10) >> 10);
      return result;
    }

}; // end class DCT_Upsample::P_Q<3,2>
