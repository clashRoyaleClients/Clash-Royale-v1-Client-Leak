class tween::Quad
{
public:

    float __fastcall tween::Quad::easeIn(float a1, float a2, float a3, float a4)
    {
      return (float)((float)(a1 / a4) * (float)((float)(a1 / a4) * a3)) + a2;
    }

    float __fastcall tween::Quad::easeOut(float a1, float a2, float a3, float a4)
    {
      return a2 - (float)((float)((float)(a1 / a4) * a3) * (float)((float)(a1 / a4) + -2.0));
    }

    float __fastcall tween::Quad::easeInOut(float a1, float a2, float a3, float a4)
    {
      float v4; // s0
      bool v5; // nf
      float v6; // s3
      float v7; // s0
    
      v4 = a1 / (float)(a4 * 0.5);
      v5 = v4 < 1.0;
      v6 = (float)(a3 * -0.5) * (float)((float)((float)(v4 + -3.0) * (float)(v4 + -1.0)) + -1.0);
      v7 = (float)(a3 * 0.5) * (float)(v4 * v4);
      if ( !v5 )
        v7 = v6;
      return v7 + a2;
    }

    void tween::Quad::~Quad()
    {
      ;
    }

    // attributes: thunk
    void __fastcall tween::Quad::~Quad(void *a1)
    {
      operator delete(a1);
    }

}; // end class tween::Quad
