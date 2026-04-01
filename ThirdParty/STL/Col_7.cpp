class Col<7>
{
public:

    _BYTE *__fastcall Col<7>::idct(_BYTE *result, int *a2)
    {
      int v2; // w14
      int v3; // w15
      int v4; // w16
      int v5; // w17
      int v6; // w2
      int v7; // w10
      int v8; // w8
      int v9; // w9
      int v10; // w15
      int v11; // w1
      int v12; // w13
      int v13; // w8
      int v14; // w14
      int v15; // w4
      int v16; // w11
      int v17; // w10
      int v18; // w12
      int v19; // w2
      int v20; // w15
      int v21; // w8
      int v22; // w11
      int v23; // w13
      int v24; // w14
      unsigned int v25; // w16
      int v26; // w2
      int v27; // w9
      int v28; // w11
      unsigned int v29; // w13
      unsigned int v30; // w4
      int v31; // w10
      unsigned int v32; // w9
      unsigned int v33; // w12
      char v34; // w1
      char v35; // w9
      char v36; // w9
      unsigned int v37; // w9
      char v38; // w11
      int v39; // w8
      unsigned int v40; // w9
      unsigned int v41; // w8
    
      v2 = a2[16];
      v3 = a2[48];
      v4 = a2[40];
      v5 = a2[8];
      v6 = a2[24];
      v7 = 9633 * (v5 + v4 + v6);
      v8 = 4433 * (v3 + v2);
      v9 = v8 - 15137 * v3;
      v10 = *a2;
      v11 = a2[32];
      v12 = v7 - 3196 * (v5 + v4);
      v13 = v8 + 6270 * v2;
      v14 = v11 + v10;
      v15 = v13 + ((v11 + v10) << 13);
      v16 = -20995 * (v6 + v4);
      v17 = v7 - 16069 * v6;
      v18 = v12 + 4926 * v5;
      v19 = v16 + 25172 * v6;
      v20 = v10 - v11;
      v21 = (v14 << 13) - v13;
      v22 = v16 + 16819 * v4 + v12;
      v23 = (v20 << 13) - v9 + 33685504;
      v24 = v15 + 33685504;
      v25 = (v23 + v22) >> 18;
      v26 = v19 + v17;
      v27 = v9 + (v20 << 13) + 33685504;
      v28 = v23 - v22;
      v29 = (v27 - v26) >> 18;
      v30 = (v15 + 33685504 + v18) >> 18;
      v31 = v17 - 7373 * v5;
      v32 = (v27 + v26) >> 18;
      v33 = (v24 - v18) >> 18;
      v34 = (int)~v30 >> 31;
      if ( v30 < 0x100 )
        v34 = v30;
      *result = v34;
      if ( v33 >= 0x100 )
        LOBYTE(v33) = (int)~v33 >> 31;
      result[56] = v33;
      if ( v32 >= 0x100 )
        LOBYTE(v32) = (int)~v32 >> 31;
      result[8] = v32;
      if ( v29 >= 0x100 )
        v35 = (int)~v29 >> 31;
      else
        v35 = v29;
      result[48] = v35;
      if ( v25 >= 0x100 )
        v36 = (int)~v25 >> 31;
      else
        v36 = v25;
      result[16] = v36;
      v37 = v28 >> 18;
      v38 = ~(v28 >> 18) >> 31;
      if ( v37 >= 0x100 )
        LOBYTE(v37) = v38;
      result[40] = v37;
      v39 = v21 + 33685504;
      v40 = (v39 + v31) >> 18;
      if ( v40 >= 0x100 )
        LOBYTE(v40) = (int)~v40 >> 31;
      result[24] = v40;
      v41 = (v39 - v31) >> 18;
      if ( v41 >= 0x100 )
        LOBYTE(v41) = (int)~v41 >> 31;
      result[32] = v41;
      return result;
    }

}; // end class Col<7>
