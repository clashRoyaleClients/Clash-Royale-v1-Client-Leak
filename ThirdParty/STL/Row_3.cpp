class Row<3>
{
public:

    int *__fastcall Row<3>::idct(int *result, __int16 *a2)
    {
      int v2; // w14
      int v3; // w15
      int v4; // w8
      int v5; // w17
      int v6; // w9
      int v7; // w10
      int v8; // w11
      int v9; // w1
      int v10; // w12
      int v11; // w14
      int v12; // w10
      int v13; // w15
    
      v2 = a2[1];
      v3 = a2[2];
      v4 = 10703 * v3;
      v5 = *a2 << 13;
      v6 = 2260 * v2;
      v7 = 6437 * v2;
      v8 = 9633 * v2;
      v9 = 4433 * v3 + v5;
      v10 = 11363 * v2;
      v11 = 6437 * v2 + 4433 * v3;
      v12 = v7 + v5 - 4433 * v3;
      v13 = 10703 * v3 + v5;
      result[5] = ((v5 | 0x400) - v11) >> 11;
      result[6] = (1024 - v8 + v9) >> 11;
      result[7] = (1024 - v10 + v13) >> 11;
      result[2] = (v12 + 1024) >> 11;
      *result = (v10 + v13 + 1024) >> 11;
      result[1] = (v8 + v9 + 1024) >> 11;
      result[3] = (v6 + v5 - v4 + 1024) >> 11;
      result[4] = ((v5 | 0x400) - (v6 + v4)) >> 11;
      return result;
    }

}; // end class Row<3>
