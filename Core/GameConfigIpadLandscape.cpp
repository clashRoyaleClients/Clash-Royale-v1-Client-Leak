class GameConfigIpadLandscape
{
public:

    void __fastcall GameConfigIpadLandscape::~GameConfigIpadLandscape(String **this)
    {
      GameConfig::~GameConfig(this);
    }

    void __fastcall GameConfigIpadLandscape::~GameConfigIpadLandscape(String **this)
    {
      GameConfig::~GameConfig(this);
      operator delete(this);
    }

    float __fastcall GameConfigIpadLandscape::getCameraZoomMultiplier(BindFacebookAccountMessage *this)
    {
      return 0.9;
    }

    float __fastcall GameConfigIpadLandscape::getCameraFov(BindFacebookAccountMessage *this)
    {
      return 23.0;
    }

    float __fastcall GameConfigIpadLandscape::getStickVariableRangeLeft(BindFacebookAccountMessage *this)
    {
      return 0.2;
    }

    __int64 __fastcall GameConfigIpadLandscape::isMSAASupported(BindFacebookAccountMessage *this)
    {
      return 1;
    }

}; // end class GameConfigIpadLandscape
