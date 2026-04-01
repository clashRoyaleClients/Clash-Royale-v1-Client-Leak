class tween::Expo
{
public:

    float __fastcall tween::Expo::easeIn(float a1, float a2, float a3, float a4)
    {
      if ( a1 == 0.0 )
        return a2;
      else
        return a2 + a3 * exp2((float)((float)((float)(a1 / a4) + -1.0) * 10.0));
    }

    float __fastcall tween::Expo::easeOut(float a1, float a2, float a3, float a4)
    {
      if ( a1 == a4 )
        return a2 + a3;
      else
        return a2 + a3 * (1.0 - exp2((float)((float)(a1 * -10.0) / a4)));
    }

    long double __fastcall tween::Expo::easeInOut(float a1, long double a2, float a3, float a4)
    {
      long double v4; // q8
      float v5; // s3
      double v6; // d9
      float v7; // s0
      double v8; // d0
    
      v4 = a2;
      if ( a1 != 0.0 )
      {
        if ( a1 == a4 )
        {
          *(float *)&v4 = *(float *)&a2 + a3;
        }
        else
        {
          v5 = a1 / (float)(a4 * 0.5);
          v6 = (float)(a3 * 0.5);
          v7 = v5 + -1.0;
          if ( v5 >= 1.0 )
            v8 = 2.0 - exp2((float)(v7 * -10.0));
          else
            v8 = exp2((float)(v7 * 10.0));
          *(float *)&v4 = *(float *)&v4 + v6 * v8;
        }
      }
      return v4;
    }

    void tween::Expo::~Expo()
    {
      ;
    }

    // attributes: thunk
    void __fastcall tween::Expo::~Expo(void *a1)
    {
      operator delete(a1);
    }

}; // end class tween::Expo
