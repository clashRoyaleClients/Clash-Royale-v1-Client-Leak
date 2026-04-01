class GameConfigIphoneLandscape
{
public:

    void __fastcall GameConfigIphoneLandscape::~GameConfigIphoneLandscape(String **this)
    {
      GameConfig::~GameConfig(this);
    }

    void __fastcall GameConfigIphoneLandscape::~GameConfigIphoneLandscape(String **this)
    {
      GameConfig::~GameConfig(this);
      operator delete(this);
    }

    float __fastcall GameConfigIphoneLandscape::getCameraZoomMultiplier(LogicNpcData *this)
    {
      return 0.8;
    }

    float __fastcall GameConfigIphoneLandscape::getCameraFov(LogicNpcData *this)
    {
      return 21.0;
    }

    float __fastcall GameConfigIphoneLandscape::getStickVariableRangeLeft(LogicNpcData *this)
    {
      return 0.3;
    }

    float __fastcall GameConfigIphoneLandscape::getStickSizeFactor(LogicNpcData *this)
    {
      return 1.3;
    }

}; // end class GameConfigIphoneLandscape
