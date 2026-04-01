class Row<7>
{
public:

    int *__fastcall Row<7>::idct(int *result, __int16 *a2)
    {
      int v2; // w10
      int v3; // w11
      int v4; // w12
      int v5; // w14
      int v6; // w15
      int v7; // w17
      int v8; // w1
      int v9; // w2
      int v10; // w17
      int v11; // w16
      int v12; // w14
      int v13; // w10
      int v14; // w13
      int v15; // w16
      int v16; // w9
      int v17; // w8
      int v18; // w13
      int v19; // w8
      int v20; // w11
      int v21; // w1
      int v22; // w12
      int v23; // w8
      int v24; // w16
      int v25; // w9
      int v26; // w13
      int v27; // w10
    
      v2 = a2[2];
      v3 = a2[5];
      v4 = a2[1];
      v5 = a2[6];
      v6 = a2[3];
      v7 = *a2;
      v8 = a2[4];
      v9 = v8 + v7;
      v10 = v7 - v8;
      v11 = 4433 * (v5 + v2);
      v12 = v11 - 15137 * v5;
      v13 = v11 + 6270 * v2;
      v14 = 9633 * (v4 + v3 + v6);
      v15 = v14 - 3196 * (v4 + v3);
      v16 = v14 - 16069 * v6;
      v17 = -20995 * (v6 + v3);
      v18 = v17 + 25172 * v6;
      v19 = v17 + 16819 * v3;
      v20 = v13 + (v9 << 13);
      v21 = v16 - 7373 * v4;
      v22 = v15 + 4926 * v4;
      v23 = v19 + v15;
      v24 = v12 + (v10 << 13);
      v25 = v18 + v16;
      v26 = (v10 << 13) - v12 + 1024;
      v27 = (v9 << 13) - v13 + 1024;
      v20 += 1024;
      result[2] = (v26 + v23) >> 11;
      result[5] = (v26 - v23) >> 11;
      result[1] = (v24 + 1024 + v25) >> 11;
      result[6] = (v24 + 1024 - v25) >> 11;
      *result = (v20 + v22) >> 11;
      result[7] = (v20 - v22) >> 11;
      result[3] = (v27 + v21) >> 11;
      result[4] = (v27 - v21) >> 11;
      return result;
    }

}; // end class Row<7>
