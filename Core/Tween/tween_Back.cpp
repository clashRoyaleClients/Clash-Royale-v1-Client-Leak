class tween::Back
{
public:

    float __fastcall tween::Back::easeIn(float a1, float a2, float a3, float a4)
    {
      return (float)((float)((float)(a1 / a4) * (float)((float)(a1 / a4) * a3))
                   * (float)((float)((float)(a1 / a4) * 2.7016) + -1.7016))
           + a2;
    }

    float __fastcall tween::Back::easeOut(float a1, float a2, float a3, float a4)
    {
      return (float)((float)((float)((float)((float)((float)(a1 / a4) + -1.0) * (float)((float)(a1 / a4) + -1.0))
                                   * (float)((float)((float)((float)(a1 / a4) + -1.0) * 2.7016) + 1.7016))
                           + 1.0)
                   * a3)
           + a2;
    }

    float __fastcall tween::Back::easeInOut(float a1, float a2, float a3, float a4)
    {
      float v4; // s0
      float v5; // s2
      float v6; // s0
    
      v4 = a1 / (float)(a4 * 0.5);
      v5 = a3 * 0.5;
      if ( v4 >= 1.0 )
        v6 = (float)((float)((float)(v4 + -2.0) * (float)(v4 + -2.0))
                   * (float)((float)((float)(v4 + -2.0) * 3.5949) + 2.5949))
           + 2.0;
      else
        v6 = (float)(v4 * v4) * (float)((float)(v4 * 3.5949) + -2.5949);
      return (float)(v5 * v6) + a2;
    }

    void tween::Back::~Back()
    {
      ;
    }

    // attributes: thunk
    void __fastcall tween::Back::~Back(void *a1)
    {
      operator delete(a1);
    }

}; // end class tween::Back
