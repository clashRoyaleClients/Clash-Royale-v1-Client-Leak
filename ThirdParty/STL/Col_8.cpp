class Col<8>
{
public:

    _BYTE *__fastcall Col<8>::idct(_BYTE *result, int *a2)
    {
      int v2; // w13
      int v3; // w14
      int v4; // w15
      int v5; // w16
      int v6; // w17
      int v7; // w2
      int v8; // w4
      int v9; // w5
      int v10; // w8
      int v11; // w9
      int v12; // w8
      int v13; // w13
      int v14; // w14
      int v15; // w13
      int v16; // w16
      int v17; // w10
      int v18; // w17
      int v19; // w12
      int v20; // w15
      int v21; // w1
      int v22; // w11
      int v23; // w15
      int v24; // w10
      int v25; // w16
      int v26; // w2
      int v27; // w8
      int v28; // w13
      unsigned int v29; // w1
      int v30; // w17
      int v31; // w11
      int v32; // w9
      int v33; // w14
      int v34; // w9
      unsigned int v35; // w14
      unsigned int v36; // w16
      int v37; // w10
      unsigned int v38; // w12
      unsigned int v39; // w11
      char v40; // w13
      char v41; // w11
      char v42; // w11
      unsigned int v43; // w9
      int v44; // w8
      unsigned int v45; // w9
      unsigned int v46; // w8
    
      v2 = a2[48];
      v3 = a2[16];
      v4 = a2[56];
      v5 = a2[40];
      v6 = a2[24];
      v7 = a2[8];
      v8 = v6 + v4;
      v9 = v7 + v5;
      v10 = 4433 * (v2 + v3);
      v11 = v10 - 15137 * v2;
      v12 = v10 + 6270 * v3;
      v13 = -20995 * (v6 + v5);
      v14 = v13 + 16819 * v5;
      v15 = v13 + 25172 * v6;
      v16 = -7373 * (v7 + v4);
      v17 = 9633 * (v9 + v6 + v4);
      v18 = *a2;
      v19 = v16 + 2446 * v4;
      v20 = a2[32];
      v21 = v20 + *a2;
      v22 = v17 - 3196 * v9;
      v23 = v18 - v20;
      v24 = v17 - 16069 * v8;
      v25 = v16 + 12299 * v7 + v22;
      v26 = v12 + (v21 << 13) + 33685504;
      v27 = (v21 << 13) - v12;
      v28 = v15 + v24;
      v29 = (v26 + v25) >> 18;
      v30 = v11 + (v23 << 13) + 33685504;
      v31 = v14 + v22;
      v32 = (v23 << 13) - v11 + 33685504;
      v33 = v32 + v31;
      v34 = v32 - v31;
      v35 = v33 >> 18;
      v36 = (v26 - v25) >> 18;
      v37 = v19 + v24;
      v38 = (v30 - v28) >> 18;
      v39 = (v30 + v28) >> 18;
      v40 = (int)~v36 >> 31;
      if ( v29 >= 0x100 )
        LOBYTE(v29) = (int)~v29 >> 31;
      *result = v29;
      if ( v36 < 0x100 )
        v40 = v36;
      result[56] = v40;
      if ( v39 >= 0x100 )
        LOBYTE(v39) = (int)~v39 >> 31;
      result[8] = v39;
      if ( v38 >= 0x100 )
        v41 = (int)~v38 >> 31;
      else
        v41 = v38;
      result[48] = v41;
      if ( v35 >= 0x100 )
        v42 = (int)~v35 >> 31;
      else
        v42 = v35;
      result[16] = v42;
      v43 = v34 >> 18;
      if ( v43 >= 0x100 )
        LOBYTE(v43) = (int)~v43 >> 31;
      result[40] = v43;
      v44 = v27 + 33685504;
      v45 = (v44 + v37) >> 18;
      if ( v45 >= 0x100 )
        LOBYTE(v45) = (int)~v45 >> 31;
      result[24] = v45;
      v46 = (v44 - v37) >> 18;
      if ( v46 >= 0x100 )
        LOBYTE(v46) = (int)~v46 >> 31;
      result[32] = v46;
      return result;
    }

}; // end class Col<8>
