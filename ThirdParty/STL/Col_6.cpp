class Col<6>
{
public:

    _BYTE *__fastcall Col<6>::idct(_BYTE *result, int *a2)
    {
      int v2; // w12
      int v3; // w13
      int v4; // w14
      int v5; // w15
      int v6; // w16
      int v7; // w3
      int v8; // w4
      int v9; // w17
      int v10; // w12
      int v11; // w11
      int v12; // w10
      int v13; // w16
      int v14; // w9
      int v15; // w13
      int v16; // w15
      int v17; // w1
      int v18; // w15
      int v19; // w16
      int v20; // w1
      int v21; // w14
      int v22; // w17
      int v23; // w10
      unsigned int v24; // w14
      int v25; // w3
      int v26; // w15
      int v27; // w11
      int v28; // w12
      int v29; // w13
      int v30; // w1
      unsigned int v31; // w13
      unsigned int v32; // w10
      unsigned int v33; // w11
      char v34; // w10
      char v35; // w10
      int v36; // w10
      unsigned int v37; // w10
      unsigned int v38; // w8
    
      v2 = a2[40];
      v3 = a2[8];
      v4 = a2[24];
      v5 = v3 + v2;
      v6 = 9633 * (v3 + v2 + v4);
      v7 = a2[16];
      v8 = 4433 * v7;
      v7 *= 10703;
      v9 = -20995 * (v4 + v2);
      v10 = v9 + 16819 * v2;
      v11 = v6 - 3196 * v5;
      v12 = v6 - 16069 * v4;
      v13 = *a2;
      v14 = v12 - 7373 * v3;
      v15 = v11 + 4926 * v3;
      v16 = a2[32];
      v17 = v16 + *a2;
      v18 = v13 - v16;
      v19 = (v17 << 13) - v7;
      v20 = v7 + (v17 << 13) + 33685504;
      v21 = v9 + 25172 * v4;
      v22 = v8 + (v18 << 13) + 33685504;
      v23 = v21 + v12;
      v24 = (v22 - v23) >> 18;
      v25 = v20 + v15;
      v26 = (v18 << 13) - v8 + 33685504;
      v27 = v10 + v11;
      v28 = v26 - v27;
      v29 = v20 - v15;
      v30 = v25 >> 18;
      v31 = v29 >> 18;
      v32 = (v22 + v23) >> 18;
      v33 = (v26 + v27) >> 18;
      if ( (unsigned int)(v25 >> 18) >= 0x100 )
        LOBYTE(v30) = ~(v25 >> 18) >> 31;
      *result = v30;
      if ( v31 >= 0x100 )
        LOBYTE(v31) = (int)~v31 >> 31;
      result[56] = v31;
      if ( v32 >= 0x100 )
        LOBYTE(v32) = (int)~v32 >> 31;
      result[8] = v32;
      if ( v24 >= 0x100 )
        v34 = (int)~v24 >> 31;
      else
        v34 = v24;
      result[48] = v34;
      if ( v33 >= 0x100 )
        v35 = (int)~v33 >> 31;
      else
        v35 = v33;
      result[16] = v35;
      v36 = v28 >> 18;
      if ( (unsigned int)(v28 >> 18) >= 0x100 )
        LOBYTE(v36) = ~(v28 >> 18) >> 31;
      result[40] = v36;
      v37 = (v19 + 33685504 + v14) >> 18;
      if ( v37 >= 0x100 )
        LOBYTE(v37) = (int)~v37 >> 31;
      result[24] = v37;
      v38 = (v19 + 33685504 - v14) >> 18;
      if ( v38 >= 0x100 )
        LOBYTE(v38) = (int)~v38 >> 31;
      result[32] = v38;
      return result;
    }

}; // end class Col<6>
