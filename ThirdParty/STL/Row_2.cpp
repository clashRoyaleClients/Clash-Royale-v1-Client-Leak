class Row<2>
{
public:

    int8x16_t __fastcall Row<2>::idct(_QWORD *a1, __int16 *a2)
    {
      int32x4_t v2; // q0
      int32x4_t v3; // q3
      int8x16_t v4; // q2
      int8x16_t v5; // q0
      int8x16_t v6; // q0
      int8x16_t result; // q0
    
      v2 = vdupq_n_s32(a2[1]);
      v3 = vdupq_n_s32((*a2 << 13) | 0x400u);
      v4 = (int8x16_t)vrev64q_s32(vmulq_s32(v2, (int32x4_t)xmmword_1003EF9E0));
      v5 = (int8x16_t)vshrq_n_s32(vmlaq_s32(v3, v2, (int32x4_t)xmmword_1003EF9E0), 0xBu);
      *a1 = v5.i64[0];
      a1[1] = vextq_s8(v5, v5, 8u).u64[0];
      v6 = (int8x16_t)vshrq_n_s32(vsubq_s32(v3, (int32x4_t)vextq_s8(v4, v4, 8u)), 0xBu);
      a1[2] = v6.i64[0];
      result = vextq_s8(v6, v6, 8u);
      a1[3] = result.i64[0];
      return result;
    }

}; // end class Row<2>
