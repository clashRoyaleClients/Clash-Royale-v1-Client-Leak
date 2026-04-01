class Row<8>
{
public:

    int *__fastcall Row<8>::idct(int *result, __int16 *a2)
    {
      int v2; // w17
      int v3; // w2
      int v4; // w3
      int v5; // w8
      int v6; // w4
      int v7; // w9
      int v8; // w2
      int v9; // w8
      int v10; // w10
      int v11; // w13
      int v12; // w17
      int v13; // w10
      int v14; // w13
      int v15; // w16
      int v16; // w11
      int v17; // w12
      int v18; // w3
      int v19; // w12
      int v20; // w2
      int v21; // w1
      int v22; // w4
      int v23; // w2
      int v24; // w10
      int v25; // w14
      int v26; // w1
      int v27; // w11
      int v28; // w15
      int v29; // w13
      int v30; // w10
      int v31; // w11
      int v32; // w9
      int v33; // w8
    
      v2 = a2[2];
      v3 = a2[6];
      v4 = a2[7];
      v5 = 4433 * (v3 + v2);
      v6 = a2[5];
      v7 = v5 - 15137 * v3;
      v8 = a2[1];
      v9 = v5 + 6270 * v2;
      v10 = a2[3];
      v11 = -20995 * (v10 + v6);
      v12 = v11 + 25172 * v10;
      v13 = v10 + v4;
      v14 = v11 + 16819 * v6;
      v15 = v8 + v6;
      v16 = 9633 * (v8 + v6 + v13);
      v17 = -7373 * (v8 + v4);
      v18 = v17 + 2446 * v4;
      v19 = v17 + 12299 * v8;
      v20 = *a2;
      v21 = a2[4];
      v22 = v21 + v20;
      v23 = (v20 - v21) << 13;
      v24 = v16 - 16069 * v13;
      v25 = v9 + (v22 << 13);
      v26 = v7 + v23;
      v27 = v16 - 3196 * v15;
      v28 = v18 + v24;
      v29 = v14 + v27;
      v30 = v12 + v24;
      v31 = v19 + v27;
      v32 = v23 - v7 + 1024;
      v33 = (v22 << 13) - v9 + 1024;
      result[2] = (v32 + v29) >> 11;
      result[5] = (v32 - v29) >> 11;
      *result = (v25 + 1024 + v31) >> 11;
      result[7] = (v25 + 1024 - v31) >> 11;
      result[1] = (v26 + 1024 + v30) >> 11;
      result[6] = (v26 + 1024 - v30) >> 11;
      result[3] = (v33 + v28) >> 11;
      result[4] = (v33 - v28) >> 11;
      return result;
    }

}; // end class Row<8>
