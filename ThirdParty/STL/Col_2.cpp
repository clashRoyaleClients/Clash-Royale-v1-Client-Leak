class Col<2>
{
public:

    _BYTE *__fastcall Col<2>::idct(_BYTE *result, _DWORD *a2)
    {
      int v2; // w11
      int v3; // w13
      int v4; // w8
      int v5; // w10
      int v6; // w9
      int v7; // w12
      int v8; // w11
      int v9; // w14
      unsigned int v10; // w12
      unsigned int v11; // w9
      unsigned int v12; // w13
      unsigned int v13; // w14
      unsigned int v14; // w16
      char v15; // w9
      char v16; // w9
      char v17; // w9
      unsigned int v18; // w8
      unsigned int v19; // w8
      unsigned int v20; // w8
    
      v2 = a2[8];
      v3 = 9633 * v2;
      v4 = 6437 * v2;
      v5 = (*a2 << 13) + 33685504;
      v6 = 11363 * v2;
      v7 = v5 + 11363 * v2;
      v8 = 2260 * v2;
      v9 = v5 - v3;
      v10 = v7 >> 18;
      v11 = (v5 - v6) >> 18;
      v12 = (v5 + v3) >> 18;
      v13 = v9 >> 18;
      v14 = (v5 + v4) >> 18;
      if ( v10 >= 0x100 )
        LOBYTE(v10) = (int)~v10 >> 31;
      *result = v10;
      if ( v11 >= 0x100 )
        LOBYTE(v11) = (int)~v11 >> 31;
      result[56] = v11;
      if ( v12 >= 0x100 )
        v15 = (int)~v12 >> 31;
      else
        v15 = v12;
      result[8] = v15;
      if ( v13 >= 0x100 )
        v16 = (int)~v13 >> 31;
      else
        v16 = v13;
      result[48] = v16;
      if ( v14 >= 0x100 )
        v17 = (int)~v14 >> 31;
      else
        v17 = (v5 + v4) >> 18;
      result[16] = v17;
      v18 = (v5 - v4) >> 18;
      if ( v18 >= 0x100 )
        LOBYTE(v18) = (int)~v18 >> 31;
      result[40] = v18;
      v19 = (v5 + v8) >> 18;
      if ( v19 >= 0x100 )
        LOBYTE(v19) = (int)~v19 >> 31;
      result[24] = v19;
      v20 = (v5 - v8) >> 18;
      if ( v20 >= 0x100 )
        LOBYTE(v20) = (int)~v20 >> 31;
      result[32] = v20;
      return result;
    }

}; // end class Col<2>
