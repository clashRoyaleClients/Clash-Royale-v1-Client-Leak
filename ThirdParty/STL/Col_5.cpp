class Col<5>
{
public:

    _BYTE *__fastcall Col<5>::idct(_BYTE *result, int *a2)
    {
      int v2; // w14
      int v3; // w15
      int v4; // w17
      int v5; // w16
      int v6; // w8
      int v7; // w9
      int v8; // w17
      int v9; // w1
      int v10; // w2
      int v11; // w8
      int v12; // w10
      int v13; // w9
      int v14; // w1
      int v15; // w17
      int v16; // w16
      int v17; // w11
      int v18; // w13
      int v19; // w9
      int v20; // w10
      int v21; // w14
      unsigned int v22; // w15
      unsigned int v23; // w12
      unsigned int v24; // w13
      unsigned int v25; // w9
      unsigned int v26; // w10
      char v27; // w12
      char v28; // w9
      int v29; // w9
      int v30; // w8
      unsigned int v31; // w9
      unsigned int v32; // w8
    
      v2 = a2[24];
      v3 = a2[8];
      v4 = a2[16];
      v5 = 4433 * v4;
      v6 = 10703 * v4;
      v7 = 9633 * (v3 + v2);
      v8 = *a2;
      v9 = a2[32];
      v10 = v6 + ((v9 + v8) << 13);
      v11 = ((v9 + v8) << 13) - v6;
      v12 = v7 - 3196 * v3;
      v13 = v7 - 16069 * v2;
      v14 = (v8 - v9) << 13;
      v15 = v5 + v14;
      v16 = v14 - v5 + 33685504;
      v15 += 33685504;
      v17 = v13 - 7373 * v3;
      v18 = v12 + 4926 * v3;
      v19 = v13 + 4177 * v2;
      v20 = v12 - 20995 * v2;
      v21 = v16 - v20;
      v22 = (v10 + 33685504 + v18) >> 18;
      v23 = (v10 + 33685504 - v18) >> 18;
      v24 = (v15 + v19) >> 18;
      v25 = (v15 - v19) >> 18;
      v26 = (v16 + v20) >> 18;
      if ( v22 >= 0x100 )
        LOBYTE(v22) = (int)~v22 >> 31;
      *result = v22;
      if ( v23 >= 0x100 )
        LOBYTE(v23) = (int)~v23 >> 31;
      result[56] = v23;
      if ( v24 >= 0x100 )
        v27 = (int)~v24 >> 31;
      else
        v27 = v24;
      result[8] = v27;
      if ( v25 >= 0x100 )
        LOBYTE(v25) = (int)~v25 >> 31;
      result[48] = v25;
      if ( v26 >= 0x100 )
        v28 = (int)~v26 >> 31;
      else
        v28 = v26;
      result[16] = v28;
      v29 = v21 >> 18;
      if ( (unsigned int)(v21 >> 18) >= 0x100 )
        LOBYTE(v29) = ~(v21 >> 18) >> 31;
      result[40] = v29;
      v30 = v11 + 33685504;
      v31 = (v30 + v17) >> 18;
      if ( v31 >= 0x100 )
        LOBYTE(v31) = (int)~v31 >> 31;
      result[24] = v31;
      v32 = (v30 - v17) >> 18;
      if ( v32 >= 0x100 )
        LOBYTE(v32) = (int)~v32 >> 31;
      result[32] = v32;
      return result;
    }

}; // end class Col<5>
