class tween::Circ
{
public:

    float __fastcall tween::Circ::easeIn(float a1, float a2, float a3, float a4)
    {
      return a2 - a3 * (sqrt((float)(1.0 - (float)((float)(a1 / a4) * (float)(a1 / a4)))) + -1.0);
    }

    float __fastcall tween::Circ::easeOut(float a1, float a2, float a3, float a4)
    {
      return a2 + a3 * sqrt((float)(1.0 - (float)((float)((float)(a1 / a4) + -1.0) * (float)((float)(a1 / a4) + -1.0))));
    }

    float __fastcall tween::Circ::easeInOut(float a1, float a2, float a3, float a4)
    {
      float v4; // s0
      bool v5; // nf
      double v6; // d1
      double v7; // d4
      double v8; // d0
    
      v4 = a1 / (float)(a4 * 0.5);
      v5 = v4 < 1.0;
      v6 = a2;
      v7 = v6 + (float)(a3 * 0.5) * (sqrt((float)(1.0 - (float)(v4 * (float)(v4 + -2.0)))) + 1.0);
      v8 = v6 + (float)(a3 * -0.5) * (sqrt((float)(1.0 - (float)(v4 * v4))) + -1.0);
      if ( !v5 )
        return v7;
      return v8;
    }

    void tween::Circ::~Circ()
    {
      ;
    }

    // attributes: thunk
    void __fastcall tween::Circ::~Circ(void *a1)
    {
      operator delete(a1);
    }

}; // end class tween::Circ
