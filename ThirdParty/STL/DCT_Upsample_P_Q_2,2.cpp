class DCT_Upsample::P_Q<2,2>
{
public:

    __int64 __fastcall DCT_Upsample::P_Q<2,2>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w11
      int v4; // w12
      int v5; // w14
      int v6; // w16
      int v7; // w15
      int v8; // w11
    
      v3 = *a3;
      v4 = a3[1];
      v5 = a3[9];
      v6 = a3[8];
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_DWORD *)result = v3;
      *(_QWORD *)(result + 32) = 0;
      *(_DWORD *)(result + 56) = 0;
      *(_DWORD *)(result + 4) = (426 * v6 + 512) >> 10;
      v7 = (426 * v5 + 512) >> 10;
      *(_DWORD *)(result + 12) = (23 * v6 + 512) >> 10;
      *(_DWORD *)(result + 16) = (426 * v4 + 512) >> 10;
      *(_DWORD *)(result + 48) = (23 * v4 + 512) >> 10;
      *(_DWORD *)(result + 20) = (426 * v7 + 512) >> 10;
      *(_DWORD *)(result + 28) = (23 * v7 + 512) >> 10;
      v8 = (23 * v5 + 512) >> 10;
      *(_DWORD *)(result + 52) = (426 * v8 + 512) >> 10;
      *(_DWORD *)(result + 60) = (23 * v8 + 512) >> 10;
      *(_DWORD *)a2 = (928 * v6 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = 0;
      *(_QWORD *)(a2 + 8) = (unsigned int)((512 - 75 * v6) >> 10);
      *(_QWORD *)(a2 + 16) = (unsigned int)((928 * v7 + 512) >> 10);
      *(_DWORD *)(a2 + 24) = (512 - 75 * v7) >> 10;
      *(_DWORD *)(a2 + 44) = 0;
      *(_QWORD *)(a2 + 36) = 0;
      *(_QWORD *)(a2 + 28) = 0;
      *(_QWORD *)(a2 + 48) = (unsigned int)((928 * v8 + 512) >> 10);
      *(_QWORD *)(a2 + 56) = (unsigned int)((512 - 75 * v8) >> 10);
      return result;
    }

}; // end class DCT_Upsample::P_Q<2,2>
