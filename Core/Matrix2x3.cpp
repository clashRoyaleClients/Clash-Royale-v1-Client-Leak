class Matrix2x3
{
public:

    void __fastcall Matrix2x3::Matrix2x3(Matrix2x3 *this)
    {
      *((_DWORD *)this + 1) = 0;
      *(_DWORD *)this = 1065353216;
      *((_DWORD *)this + 2) = 0;
      *((_DWORD *)this + 3) = 1065353216;
      *((_QWORD *)this + 2) = 0;
    }

    void __fastcall Matrix2x3::Matrix2x3(Matrix2x3 *this, const DataLoaderShader *a2, const DataLoaderShader *a3)
    {
      float v3; // s2
      float v4; // s1
      float v5; // s3
      float v6; // s0
      float v7; // s2
      float v8; // s3
      float v9; // s2
      float v10; // s1
    
      v3 = *((float *)a2 + 1);
      v4 = *((float *)a3 + 2);
      *(float *)this = (float)(*(float *)a2 * *(float *)a3) + (float)(v3 * v4);
      v5 = *((float *)a3 + 3);
      *((float *)this + 1) = (float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(v3 * v5);
      v6 = *((float *)a2 + 2);
      v7 = *((float *)a2 + 3) * v5;
      v8 = *((float *)a3 + 1);
      *((float *)this + 3) = v7 + (float)(v6 * v8);
      v9 = *(float *)a3;
      *((float *)this + 2) = (float)(*((float *)a2 + 3) * v4) + (float)(v6 * *(float *)a3);
      v10 = *((float *)a2 + 5);
      *((float *)this + 4) = *((float *)a3 + 4)
                           + (float)((float)(*((float *)a2 + 4) * v9) + (float)(v10 * *((float *)a3 + 2)));
      *((float *)this + 5) = *((float *)a3 + 5)
                           + (float)((float)(*((float *)a2 + 4) * v8) + (float)(v10 * *((float *)a3 + 3)));
    }

    void __fastcall Matrix2x3::Matrix2x3(Matrix2x3 *this, const DataLoaderShader *a2, const DataLoaderShader *a3)
    {
      Matrix2x3::Matrix2x3(this, a2, a3);
    }

    void __fastcall Matrix2x3::~Matrix2x3(DataLoaderShader *this)
    {
      ;
    }

    float __fastcall Matrix2x3::inverse(DataLoaderShader *this, double a2, double a3, double a4)
    {
      float result; // s0
      float v5; // s1
      float32x4_t v6; // q3
      float v7; // s4
      float v8; // s5
      float v9; // s6
      float v10; // s4
      int8x16_t v11; // q3
    
      result = *(float *)this;
      v5 = *((float *)this + 1);
      v7 = *((float *)this + 2);
      v6.i32[0] = *((_DWORD *)this + 3);
      *(float *)&a4 = (float)(*(float *)this * v6.f32[0]) - (float)(v5 * v7);
      if ( *(float *)&a4 != 0.0 )
      {
        v8 = *((float *)this + 4);
        v9 = *((float *)this + 5);
        v6.f32[1] = -v5;
        v6.i64[1] = __PAIR64__(LODWORD(result), -v7);
        v10 = (float)((float)(v7 * v9) - (float)(v6.f32[0] * v8)) / *(float *)&a4;
        v11 = (int8x16_t)vdivq_f32(v6, (float32x4_t)vdupq_lane_s32(*(int32x2_t *)&a4, 0));
        *(_QWORD *)this = v11.i64[0];
        *((float *)this + 4) = v10;
        *((_QWORD *)this + 1) = vextq_s8(v11, v11, 8u).u64[0];
        result = (float)((float)(v5 * v8) - (float)(result * v9)) / *(float *)&a4;
        *((float *)this + 5) = result;
      }
      return result;
    }

    float __fastcall Matrix2x3::rotate(DataLoaderShader *this, float a2, float a3, float a4)
    {
      __float2 v7; // kr00_8
    
      v7 = __sincosf_stret((float)(a2 * 3.1416) / 180.0);
      *(float *)this = v7.__cosval * a3;
      *((float *)this + 1) = v7.__sinval * a4;
      *((float *)this + 2) = -(float)(v7.__sinval * a3);
      *((float *)this + 3) = v7.__cosval * a4;
      return v7.__cosval * a4;
    }

    float __fastcall Matrix2x3::rotateRadians(DataLoaderShader *this, float a2, float a3, float a4)
    {
      __float2 v7; // kr00_8
    
      v7 = __sincosf_stret(a2);
      *(float *)this = v7.__cosval * a3;
      *((float *)this + 1) = v7.__sinval * a4;
      *((float *)this + 2) = -(float)(v7.__sinval * a3);
      *((float *)this + 3) = v7.__cosval * a4;
      return v7.__cosval * a4;
    }

    int8x16_t __fastcall Matrix2x3::scaleMultiply(float32x4_t *this, float a2, float a3)
    {
      float32x4_t v3; // q3
      int8x16_t v4; // q0
      int8x16_t result; // q0
    
      v3.i64[0] = __PAIR64__(LODWORD(a3), LODWORD(a2));
      v3.i64[1] = __PAIR64__(LODWORD(a3), LODWORD(a2));
      v4 = (int8x16_t)vmulq_f32(*this, v3);
      this->i64[0] = v4.i64[0];
      result = vextq_s8(v4, v4, 8u);
      this->i64[1] = result.i64[0];
      return result;
    }

}; // end class Matrix2x3
