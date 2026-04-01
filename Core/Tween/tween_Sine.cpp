class tween::Sine
{
public:

    float __fastcall tween::Sine::easeIn(float a1, float a2, float a3, float a4)
    {
      return a2 + a3 - a3 * cos((float)(a1 / a4) * 1.57079633);
    }

    float __fastcall tween::Sine::easeOut(float a1, float a2, float a3, float a4)
    {
      return a2 + a3 * sin((float)(a1 / a4) * 1.57079633);
    }

    float __fastcall tween::Sine::easeInOut(float a1, float a2, float a3, float a4)
    {
      return a2 + (float)(a3 * -0.5) * (cos(a1 * 3.14159265 / a4) + -1.0);
    }

    void tween::Sine::~Sine()
    {
      ;
    }

    // attributes: thunk
    void __fastcall tween::Sine::~Sine(void *a1)
    {
      operator delete(a1);
    }

}; // end class tween::Sine
