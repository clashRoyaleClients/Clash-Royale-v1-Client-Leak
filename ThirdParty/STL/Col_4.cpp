class Col<4>
{
public:

    _BYTE *__fastcall Col<4>::idct(_BYTE *result, _DWORD *a2)
    {
      int v2; // w15
      int v3; // w16
      int v4; // w2
      int v5; // w10
      int v6; // w3
      int v7; // w11
      int v8; // w10
      int v9; // w9
      int v10; // w17
      int v11; // w1
      int v12; // w12
      int v13; // w14
      int v14; // w10
      int v15; // w16
      int v16; // w11
      int v17; // w13
      int v18; // w15
      unsigned int v19; // w16
      unsigned int v20; // w13
      unsigned int v21; // w14
      unsigned int v22; // w10
      unsigned int v23; // w11
      char v24; // w13
      char v25; // w10
      int v26; // w10
      int v27; // w8
      unsigned int v28; // w9
      unsigned int v29; // w8
    
      v2 = a2[24];
      v3 = a2[8];
      v4 = a2[16];
      v5 = 9633 * (v3 + v2);
      v6 = *a2 << 13;
      v7 = v5 - 3196 * v3;
      v8 = v5 - 16069 * v2;
      v9 = v6 - 10703 * v4;
      v10 = v6 - 4433 * v4 + 33685504;
      v11 = 4433 * v4 + v6 + 33685504;
      v12 = v8 - 7373 * v3;
      v13 = v7 + 4926 * v3;
      v14 = v8 + 4177 * v2;
      v15 = 10703 * v4 + v6 + 33685504;
      v16 = v7 - 20995 * v2;
      v17 = v15 - v13;
      v18 = v10 - v16;
      v19 = (v15 + v13) >> 18;
      v20 = v17 >> 18;
      v21 = (v11 + v14) >> 18;
      v22 = (v11 - v14) >> 18;
      v23 = (v10 + v16) >> 18;
      if ( v19 >= 0x100 )
        LOBYTE(v19) = (int)~v19 >> 31;
      *result = v19;
      if ( v20 >= 0x100 )
        LOBYTE(v20) = (int)~v20 >> 31;
      result[56] = v20;
      if ( v21 >= 0x100 )
        v24 = (int)~v21 >> 31;
      else
        v24 = v21;
      result[8] = v24;
      if ( v22 >= 0x100 )
        LOBYTE(v22) = (int)~v22 >> 31;
      result[48] = v22;
      if ( v23 >= 0x100 )
        v25 = (int)~v23 >> 31;
      else
        v25 = v23;
      result[16] = v25;
      v26 = v18 >> 18;
      if ( (unsigned int)(v18 >> 18) >= 0x100 )
        LOBYTE(v26) = ~(v18 >> 18) >> 31;
      result[40] = v26;
      v27 = v9 + 33685504;
      v28 = (v9 + 33685504 + v12) >> 18;
      if ( v28 >= 0x100 )
        LOBYTE(v28) = (int)~v28 >> 31;
      result[24] = v28;
      v29 = (v27 - v12) >> 18;
      if ( v29 >= 0x100 )
        LOBYTE(v29) = (int)~v29 >> 31;
      result[32] = v29;
      return result;
    }

}; // end class Col<4>
