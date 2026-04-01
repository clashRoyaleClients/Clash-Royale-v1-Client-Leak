class Row<5>
{
public:

    int *__fastcall Row<5>::idct(int *result, __int16 *a2)
    {
      int v2; // w9
      int v3; // w10
      int v4; // w8
      int v5; // w13
      int v6; // w17
      int v7; // w1
      int v8; // w15
      int v9; // w11
      int v10; // w13
      int v11; // w1
      int v12; // w17
      int v13; // w14
      int v14; // w8
      int v15; // w16
      int v16; // w8
      int v17; // w9
      int v18; // w15
      int v19; // w1
      int v20; // w10
      int v21; // w11
    
      v2 = a2[3];
      v3 = a2[1];
      v4 = 9633 * (v3 + v2);
      v5 = a2[2];
      v6 = *a2;
      v7 = a2[4];
      v8 = 4433 * v5;
      v9 = 10703 * v5;
      v10 = v7 + v6;
      v11 = (v6 - v7) << 13;
      v12 = v8 + v11;
      v13 = v4 - 3196 * v3;
      v14 = v4 - 16069 * v2;
      v15 = v14 - 7373 * v3;
      v16 = v14 + 4177 * v2;
      v17 = v13 - 20995 * v2;
      v18 = v11 - v8 + 1024;
      v19 = (v10 << 13) - v9 + 1024;
      v12 += 1024;
      v20 = v13 + 4926 * v3;
      v21 = v9 + (v10 << 13) + 1024;
      *result = (v21 + v20) >> 11;
      result[7] = (v21 - v20) >> 11;
      result[1] = (v12 + v16) >> 11;
      result[6] = (v12 - v16) >> 11;
      result[2] = (v18 + v17) >> 11;
      result[5] = (v18 - v17) >> 11;
      result[3] = (v19 + v15) >> 11;
      result[4] = (v19 - v15) >> 11;
      return result;
    }

}; // end class Row<5>
