class Row<6>
{
public:

    int *__fastcall Row<6>::idct(int *result, __int16 *a2)
    {
      int v2; // w11
      int v3; // w12
      int v4; // w14
      int v5; // w15
      int v6; // w17
      int v7; // w1
      int v8; // w16
      int v9; // w8
      int v10; // w17
      int v11; // w14
      int v12; // w13
      int v13; // w1
      int v14; // w10
      int v15; // w9
      int v16; // w11
      int v17; // w9
      int v18; // w13
      int v19; // w8
      int v20; // w17
      int v21; // w12
      int v22; // w15
      int v23; // w14
      int v24; // w11
      int v25; // w9
    
      v2 = a2[5];
      v3 = a2[1];
      v4 = *a2;
      v5 = a2[3];
      v6 = a2[2];
      v7 = a2[4];
      v8 = 4433 * v6;
      v9 = 10703 * v6;
      v10 = v7 + v4;
      v11 = v4 - v7;
      v12 = 9633 * (v3 + v2 + v5);
      v13 = v12 - 3196 * (v3 + v2);
      v14 = v12 - 16069 * v5;
      v15 = -20995 * (v5 + v2);
      v16 = v15 + 16819 * v2;
      v17 = v15 + 25172 * v5;
      v18 = v9 + (v10 << 13);
      v19 = (v10 << 13) - v9 + 1024;
      v18 += 1024;
      v20 = v14 - 7373 * v3;
      v21 = v13 + 4926 * v3;
      v22 = v8 + (v11 << 13);
      v23 = (v11 << 13) - v8 + 1024;
      v22 += 1024;
      v24 = v16 + v13;
      v25 = v17 + v14;
      result[1] = (v22 + v25) >> 11;
      result[6] = (v22 - v25) >> 11;
      result[2] = (v23 + v24) >> 11;
      result[5] = (v23 - v24) >> 11;
      *result = (v18 + v21) >> 11;
      result[7] = (v18 - v21) >> 11;
      result[3] = (v19 + v20) >> 11;
      result[4] = (v19 - v20) >> 11;
      return result;
    }

}; // end class Row<6>
