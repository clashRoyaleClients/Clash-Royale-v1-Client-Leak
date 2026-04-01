class Col<1>
{
public:

    _BYTE *__fastcall Col<1>::idct(_BYTE *result, _DWORD *a2)
    {
      unsigned int v2; // w8
    
      v2 = (*a2 + 4112) >> 5;
      if ( v2 >= 0x100 )
        LOBYTE(v2) = (int)~v2 >> 31;
      *result = v2;
      result[8] = v2;
      result[16] = v2;
      result[24] = v2;
      result[32] = v2;
      result[40] = v2;
      result[48] = v2;
      result[56] = v2;
      return result;
    }

}; // end class Col<1>
