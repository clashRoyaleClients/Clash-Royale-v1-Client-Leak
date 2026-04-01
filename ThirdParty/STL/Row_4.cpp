class Row<4>
{
public:

    int *__fastcall Row<4>::idct(int *result, __int16 *a2)
    {
      int v2; // w14
      int v3; // w15
      int v4; // w17
      int v5; // w16
      int v6; // w8
      int v7; // w9
      int v8; // w11
      int v9; // w9
      int v10; // w12
      int v11; // w9
      int v12; // w17
      int v13; // w13
      int v14; // w1
      int v15; // w14
      int v16; // w16
      int v17; // w10
      int v18; // w8
    
      v2 = a2[3];
      v3 = a2[1];
      v4 = a2[2];
      v5 = 4433 * v4;
      v6 = 10703 * v4;
      v7 = 9633 * (v3 + v2);
      v8 = v7 - 3196 * v3;
      v9 = v7 - 16069 * v2;
      v10 = v9 - 7373 * v3;
      v11 = v9 + 4177 * v2;
      v12 = *a2;
      v13 = v8 - 20995 * v2;
      v14 = (v12 << 13) - v5 + 1024;
      v15 = (v12 << 13) - v6 + 1024;
      v16 = v5 + (v12 << 13) + 1024;
      v17 = v8 + 4926 * v3;
      v18 = v6 + (v12 << 13) + 1024;
      *result = (v18 + v17) >> 11;
      result[7] = (v18 - v17) >> 11;
      result[1] = (v16 + v11) >> 11;
      result[6] = (v16 - v11) >> 11;
      result[2] = (v14 + v13) >> 11;
      result[5] = (v14 - v13) >> 11;
      result[3] = (v15 + v10) >> 11;
      result[4] = (v15 - v10) >> 11;
      return result;
    }

}; // end class Row<4>
