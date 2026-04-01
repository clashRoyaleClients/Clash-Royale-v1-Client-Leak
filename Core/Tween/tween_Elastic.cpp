class tween::Elastic
{
public:

    long double __fastcall tween::Elastic::easeIn(float a1, long double a2, float a3, float a4)
    {
      long double v5; // q8
      float v6; // s0
      float v7; // s10
      float v8; // s13
      float v9; // s0
    
      v5 = a2;
      if ( a1 != 0.0 )
      {
        v6 = a1 / a4;
        if ( v6 == 1.0 )
        {
          *(float *)&v5 = *(float *)&a2 + a3;
        }
        else
        {
          v7 = a4 * 0.3;
          v8 = v6 + -1.0;
          v9 = a3 * exp2((float)((float)(v6 + -1.0) * 10.0));
          *(float *)&v5 = *(float *)&v5
                        + sin((float)((float)(v8 * a4) + (float)((float)(a4 * 0.3) * -0.25)) * -6.28318531 / v7) * v9;
        }
      }
      return v5;
    }

    long double __fastcall tween::Elastic::easeOut(float a1, long double a2, float a3, float a4)
    {
      long double v5; // q8
      float v6; // s10
      float v7; // s11
      double v8; // d13
      double v9; // d14
    
      v5 = a2;
      if ( a1 != 0.0 )
      {
        v6 = a1 / a4;
        if ( (float)(a1 / a4) == 1.0 )
        {
          *(float *)&v5 = *(float *)&a2 + a3;
        }
        else
        {
          v7 = a4 * 0.3;
          v8 = a3;
          v9 = a3 * exp2((float)(v6 * -10.0));
          *(float *)&v5 = *(float *)&v5
                        + v8
                        + v9 * sin((float)((float)(v6 * a4) + (float)((float)(a4 * 0.3) * -0.25)) * 6.28318531 / v7);
        }
      }
      return v5;
    }

    long double __fastcall tween::Elastic::easeInOut(float a1, long double a2, float a3, float a4)
    {
      long double v5; // q8
      float v6; // s0
      float v7; // s10
      float v8; // s12
      double v9; // d11
      float v10; // s13
      float v11; // s0
      double v12; // d0
      float v13; // s0
    
      v5 = a2;
      if ( a1 != 0.0 )
      {
        v6 = a1 / (float)(a4 * 0.5);
        if ( v6 == 2.0 )
        {
          *(float *)&v5 = *(float *)&a2 + a3;
        }
        else
        {
          v7 = a4 * 0.45;
          v8 = (float)(a4 * 0.45) * 0.25;
          v9 = a3;
          v10 = v6 + -1.0;
          if ( v6 >= 1.0 )
          {
            v13 = v9 * exp2((float)(v10 * -10.0));
            v12 = v9 + sin((float)((float)(v10 * a4) - v8) * 6.28318531 / v7) * v13 * 0.5;
          }
          else
          {
            v11 = v9 * exp2((float)(v10 * 10.0));
            v12 = sin((float)((float)(v10 * a4) - v8) * -6.28318531 / v7) * v11 * 0.5;
          }
          *(float *)&v5 = *(float *)&v5 + v12;
        }
      }
      return v5;
    }

    void tween::Elastic::~Elastic()
    {
      ;
    }

    // attributes: thunk
    void __fastcall tween::Elastic::~Elastic(void *a1)
    {
      operator delete(a1);
    }

}; // end class tween::Elastic
