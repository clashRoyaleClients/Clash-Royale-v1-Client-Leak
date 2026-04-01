class tween::Linear
{
public:

    float __fastcall tween::Linear::easeIn(BattleEventMessage *this, float a2, float a3, float a4, float a5)
    {
      return (float)((float)(a2 * a4) / a5) + a3;
    }

    float __fastcall tween::Linear::easeOut(BattleEventMessage *this, float a2, float a3, float a4, float a5)
    {
      return (float)((float)(a2 * a4) / a5) + a3;
    }

    float __fastcall tween::Linear::easeInOut(BattleEventMessage *this, float a2, float a3, float a4, float a5)
    {
      return (float)((float)(a2 * a4) / a5) + a3;
    }

    void tween::Linear::~Linear()
    {
      ;
    }

    // attributes: thunk
    void __fastcall tween::Linear::~Linear(void *a1)
    {
      operator delete(a1);
    }

}; // end class tween::Linear
