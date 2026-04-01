class tween::Cubic
{
public:

    float __fastcall tween::Cubic::easeIn(float a1, float a2, float a3, float a4)
    {
      return (float)((float)(a1 / a4) * (float)((float)(a1 / a4) * (float)((float)(a1 / a4) * a3))) + a2;
    }

    float __fastcall tween::Cubic::easeOut(float a1, float a2, float a3, float a4)
    {
      return (float)((float)((float)((float)((float)(a1 / a4) + -1.0)
                                   * (float)((float)((float)(a1 / a4) + -1.0) * (float)((float)(a1 / a4) + -1.0)))
                           + 1.0)
                   * a3)
           + a2;
    }

    float __fastcall tween::Cubic::easeInOut(float a1, float a2, float a3, float a4)
    {
      float v4; // s0
      float v5; // s2
      bool v6; // nf
      float v7; // s3
      float v8; // s0
    
      v4 = a1 / (float)(a4 * 0.5);
      v5 = a3 * 0.5;
      v6 = v4 < 1.0;
      v7 = v5 * (float)((float)((float)(v4 + -2.0) * (float)((float)(v4 + -2.0) * (float)(v4 + -2.0))) + 2.0);
      v8 = v4 * (float)(v4 * (float)(v5 * v4));
      if ( !v6 )
        v8 = v7;
      return v8 + a2;
    }

    void tween::Cubic::~Cubic()
    {
      ;
    }

    // attributes: thunk
    void __fastcall tween::Cubic::~Cubic(void *a1)
    {
      operator delete(a1);
    }

}; // end class tween::Cubic
