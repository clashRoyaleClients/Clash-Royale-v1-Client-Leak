class GameConfigIpad1stGenLandscape
{
public:

    void __fastcall GameConfigIpad1stGenLandscape::~GameConfigIpad1stGenLandscape(AllianceStreamContainer *this)
    {
      GameConfig::~GameConfig(this);
    }

    void __fastcall GameConfigIpad1stGenLandscape::~GameConfigIpad1stGenLandscape(AllianceStreamContainer *this)
    {
      GameConfig::~GameConfig(this);
      operator delete(this);
    }

    float __fastcall GameConfigIpad1stGenLandscape::getCameraZoomMultiplier(AllianceStreamContainer *this)
    {
      return 0.9;
    }

    float __fastcall GameConfigIpad1stGenLandscape::getCameraFov(AllianceStreamContainer *this)
    {
      return 23.0;
    }

    float __fastcall GameConfigIpad1stGenLandscape::getStickVariableRangeLeft(AllianceStreamContainer *this)
    {
      return 0.2;
    }

}; // end class GameConfigIpad1stGenLandscape
