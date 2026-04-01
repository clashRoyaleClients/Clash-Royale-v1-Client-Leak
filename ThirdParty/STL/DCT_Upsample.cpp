class DCT_Upsample
{
public:

    int8x16_t __usercall DCT_Upsample::operator+@<Q0>(__int64 a1@<X0>, __int64 a2@<X1>, __int64 a3@<X8>)
    {
      __int64 i; // x9
      int8x16_t v4; // q0
      _QWORD *v5; // x10
      int8x16_t result; // q0
    
      for ( i = 0; i != 64; i += 16 )
      {
        v4 = (int8x16_t)vaddq_s32(*(int32x4_t *)(a2 + i), *(int32x4_t *)(a1 + i));
        v5 = (_QWORD *)(a3 + i);
        *v5 = v4.i64[0];
        result = vextq_s8(v4, v4, 8u);
        v5[1] = result.i64[0];
      }
      return result;
    }

}; // end class DCT_Upsample
