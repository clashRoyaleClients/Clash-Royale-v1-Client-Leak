class Col<3>
{
public:

    _BYTE *__fastcall Col<3>::idct(_BYTE *result, int *a2)
    {
      int v2; // w12
      int v3; // w13
      int v4; // w14
      int v5; // w9
      int v6; // w15
      int v7; // w17
      int v8; // w10
      int v9; // w1
      int v10; // w13
      int v11; // w16
      int v12; // w11
      int v13; // w9
      int v14; // w12
      unsigned int v15; // w2
      int v16; // w11
      int v17; // w12
      unsigned int v18; // w11
      unsigned int v19; // w15
      unsigned int v20; // w16
      int v21; // w14
      unsigned int v22; // w12
      unsigned int v23; // w10
      char v24; // w12
      char v25; // w10
      char v26; // w10
      unsigned int v27; // w10
      unsigned int v28; // w8
    
      v2 = a2[16];
      v3 = *a2;
      v4 = 10703 * v2;
      v5 = a2[8];
      v6 = 11363 * v5;
      v7 = *a2 << 13;
      v8 = 9633 * v5;
      v9 = 10703 * v2 + v7;
      v2 *= 4433;
      v10 = v2 + (v3 << 13);
      v11 = 11363 * v5 + v9;
      v12 = 6437 * v5;
      v13 = 2260 * v5;
      v14 = v7 - v2;
      v15 = (v12 + 33685504 + v14) >> 18;
      v16 = 33685504 - v12 + v14;
      v17 = 33685504 - v6 + v9;
      v18 = v16 >> 18;
      v19 = (v8 + 33685504 + v10) >> 18;
      v20 = (v11 + 33685504) >> 18;
      v21 = v7 - v4;
      v22 = v17 >> 18;
      v23 = (33685504 - v8 + v10) >> 18;
      if ( v20 >= 0x100 )
        LOBYTE(v20) = (int)~v20 >> 31;
      *result = v20;
      if ( v22 >= 0x100 )
        LOBYTE(v22) = (int)~v22 >> 31;
      result[56] = v22;
      if ( v19 >= 0x100 )
        v24 = (int)~v19 >> 31;
      else
        v24 = v19;
      result[8] = v24;
      if ( v23 >= 0x100 )
        LOBYTE(v23) = (int)~v23 >> 31;
      result[48] = v23;
      if ( v15 >= 0x100 )
        v25 = (int)~v15 >> 31;
      else
        v25 = v15;
      result[16] = v25;
      if ( v18 >= 0x100 )
        v26 = (int)~v18 >> 31;
      else
        v26 = v18;
      result[40] = v26;
      v27 = (v13 + 33685504 + v21) >> 18;
      if ( v27 >= 0x100 )
        LOBYTE(v27) = (int)~v27 >> 31;
      result[24] = v27;
      v28 = (33685504 - v13 + v21) >> 18;
      if ( v28 >= 0x100 )
        LOBYTE(v28) = (int)~v28 >> 31;
      result[32] = v28;
      return result;
    }

}; // end class Col<3>
