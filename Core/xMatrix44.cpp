class xMatrix44
{
public:

    void xMatrix44::xMatrix44()
    {
      ;
    }

    long double __usercall xMatrix44::createOrthographicProjection@<Q0>(
            __int64 a1@<X8>,
            float a2@<S0>,
            float a3@<S1>,
            float a4@<S2>,
            float a5@<S3>,
            float a6@<S4>,
            float a7@<S5>)
    {
      long double result; // q0
      unsigned __int64 v8; // d1
    
      *(float *)a1 = 2.0 / (float)(a3 - a2);
      *(float *)(a1 + 48) = (float)-(float)(a2 + a3) / (float)(a3 - a2);
      *(float *)(a1 + 20) = 2.0 / (float)(a5 - a4);
      *(float *)(a1 + 52) = (float)-(float)(a4 + a5) / (float)(a5 - a4);
      *(float *)(a1 + 40) = -2.0 / (float)(a7 - a6);
      *(float *)(a1 + 56) = (float)-(float)(a6 + a7) / (float)(a7 - a6);
      *(_QWORD *)(a1 + 4) = 0;
      v8 = vextq_s8((int8x16_t)0, (int8x16_t)0, 8u).u64[0];
      *(_QWORD *)(a1 + 12) = v8;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 32) = v8;
      *(_DWORD *)(a1 + 44) = 0;
      *(_DWORD *)(a1 + 60) = 1065353216;
      *(_OWORD *)&result = 0u;
      return result;
    }

}; // end class xMatrix44
