class ColorTransform
{
public:

    __int64 __fastcall ColorTransform::ColorTransform(__int64 result)
    {
      *(_DWORD *)result = -1;
      *(_WORD *)(result + 4) = 0;
      *(_BYTE *)(result + 6) = 0;
      return result;
    }

    _BYTE *__fastcall ColorTransform::ColorTransform(_BYTE *result, unsigned __int8 *a2, unsigned __int8 *a3, _DWORD *a4)
    {
      unsigned int v4; // kr00_4
      unsigned int v5; // w10
      unsigned int v6; // w11
      unsigned int v7; // w9
      unsigned int v8; // w8
      unsigned int v9; // w9
      unsigned int v10; // w10
    
      v4 = *a3 * *a2;
      *result = v4 / 0xFF;
      v5 = a3[1] * (unsigned int)a2[1] / 0xFF;
      result[1] = v5;
      v6 = a3[2] * (unsigned int)a2[2] / 0xFF;
      result[2] = v6;
      v7 = a3[3] * (unsigned int)a2[3] / 0xFF;
      result[3] = v7;
      if ( (unsigned __int8)(v4 / 0xFF) + (unsigned __int8)v7 + (unsigned __int8)v5 + (unsigned __int8)v6 != 1020 )
        *a4 |= 1u;
      v8 = a3[4] + a2[4];
      v9 = a3[5] + a2[5];
      v10 = a3[6] + a2[6];
      if ( v9 + v8 + v10 )
      {
        *a4 |= 3u;
        if ( v8 > 0xFF )
          LOBYTE(v8) = -1;
        if ( v9 > 0xFF )
          LOBYTE(v9) = -1;
        if ( v10 > 0xFF )
          LOBYTE(v10) = -1;
      }
      result[4] = v8;
      result[5] = v9;
      result[6] = v10;
      return result;
    }

    _BYTE *__fastcall ColorTransform::ColorTransform(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, _DWORD *a4)
    {
      ColorTransform::ColorTransform(a1, a2, a3, a4);
      return a1;
    }

    void ColorTransform::~ColorTransform()
    {
      ;
    }

    __int64 __fastcall ColorTransform::reset(__int64 result)
    {
      *(_BYTE *)(result + 4) = 0;
      *(_BYTE *)(result + 5) = 0;
      *(_BYTE *)(result + 6) = 0;
      *(_DWORD *)result = -1;
      return result;
    }

    _BYTE *__fastcall ColorTransform::copyValuesFrom(_BYTE *result, _BYTE *a2)
    {
      result[4] = a2[4];
      result[5] = a2[5];
      result[6] = a2[6];
      *result = *a2;
      result[1] = a2[1];
      result[2] = a2[2];
      result[3] = a2[3];
      return result;
    }

    float __fastcall ColorTransform::setMulColor(_BYTE *a1, float a2, float a3, float a4)
    {
      float v4; // s4
      float v5; // s0
      float v6; // s4
      float v7; // s1
      float v8; // s4
      float v9; // s0
      float result; // s0
    
      v4 = 0.0;
      if ( a2 >= 0.0 )
        v4 = a2;
      if ( a2 <= 1.0 )
        v5 = v4;
      else
        v5 = 1.0;
      v6 = 0.0;
      if ( a3 >= 0.0 )
        v6 = a3;
      if ( a3 <= 1.0 )
        v7 = v6;
      else
        v7 = 1.0;
      v8 = 0.0;
      if ( a4 >= 0.0 )
        v8 = a4;
      *a1 = (int)(float)(v5 * 255.0);
      if ( a4 <= 1.0 )
        v9 = v8;
      else
        v9 = 1.0;
      a1[1] = (int)(float)(v7 * 255.0);
      result = v9 * 255.0;
      a1[2] = (int)result;
      return result;
    }

    _BYTE *__fastcall ColorTransform::setAddColor(_BYTE *result, float a2, float a3, float a4)
    {
      int v4; // w8
      int v5; // w9
      int v6; // w10
    
      if ( a2 >= 0.0 )
      {
        v4 = (int)(float)(a2 * 255.0);
        if ( a2 > 1.0 )
          LOBYTE(v4) = -1;
      }
      else
      {
        LOBYTE(v4) = 0;
      }
      if ( a3 >= 0.0 )
      {
        v5 = (int)(float)(a3 * 255.0);
        if ( a3 > 1.0 )
          LOBYTE(v5) = -1;
      }
      else
      {
        LOBYTE(v5) = 0;
      }
      if ( a4 >= 0.0 )
      {
        v6 = (int)(float)(a4 * 255.0);
        if ( a4 > 1.0 )
          LOBYTE(v6) = -1;
      }
      else
      {
        LOBYTE(v6) = 0;
      }
      result[4] = v4;
      result[5] = v5;
      result[6] = v6;
      return result;
    }

    float __fastcall ColorTransform::setAlpha(__int64 a1, float a2)
    {
      float v2; // s2
      float v3; // s0
      float result; // s0
    
      v2 = 0.0;
      if ( a2 >= 0.0 )
        v2 = a2;
      if ( a2 <= 1.0 )
        v3 = v2;
      else
        v3 = 1.0;
      result = v3 * 255.0;
      *(_BYTE *)(a1 + 3) = (int)result;
      return result;
    }

}; // end class ColorTransform
