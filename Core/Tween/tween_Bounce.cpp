class tween::Bounce
{
public:

    float __fastcall tween::Bounce::easeIn(__int64 a1, float a2, float a3, float a4, float a5)
    {
      return (float)(a4
                   - (*(float (__fastcall **)(__int64, float, long double))(*(_QWORD *)a1 + 24LL))(
                       a1,
                       a5 - a2,
                       COERCE_LONG_DOUBLE((unsigned __int128)0)))
           + a3;
    }

    float __fastcall tween::Bounce::easeOut(float a1, float a2, float a3, float a4)
    {
      float v4; // s0
      float v5; // s0
      float v6; // s0
      float v7; // s3
    
      v4 = a1 / a4;
      if ( v4 >= 0.36364 )
      {
        if ( v4 >= 0.72727 )
        {
          if ( v4 >= 0.909090909 )
          {
            v6 = (float)(v4 + -0.95455) * (float)((float)(v4 + -0.95455) * 7.5625);
            v7 = 0.98438;
          }
          else
          {
            v6 = (float)(v4 + -0.81818) * (float)((float)(v4 + -0.81818) * 7.5625);
            v7 = 0.9375;
          }
        }
        else
        {
          v6 = (float)(v4 + -0.54545) * (float)((float)(v4 + -0.54545) * 7.5625);
          v7 = 0.75;
        }
        v5 = v6 + v7;
      }
      else
      {
        v5 = v4 * (float)(v4 * 7.5625);
      }
      return (float)(v5 * a3) + a2;
    }

    float __fastcall tween::Bounce::easeInOut(__int64 *a1, float a2, float a3, long double a4, float a5)
    {
      __int64 v6; // x8
      float v7; // s0
    
      v6 = *a1;
      if ( (float)(a5 * 0.5) <= a2 )
        v7 = (float)(*(float *)&a4 * 0.5)
           + (float)((*(float (__fastcall **)(float, long double, long double))(v6 + 24))(
                       (float)(a2 + a2) - a5,
                       COERCE_LONG_DOUBLE((unsigned __int128)0),
                       a4)
                   * 0.5);
      else
        v7 = (*(float (__fastcall **)(float, long double, long double))(v6 + 16))(
               a2 + a2,
               COERCE_LONG_DOUBLE((unsigned __int128)0),
               a4)
           * 0.5;
      return v7 + a3;
    }

    void tween::Bounce::~Bounce()
    {
      ;
    }

    // attributes: thunk
    void __fastcall tween::Bounce::~Bounce(void *a1)
    {
      operator delete(a1);
    }

}; // end class tween::Bounce
