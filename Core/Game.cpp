class Game
{
public:

    __int64 __fastcall Game::getAnytuneIniFilename(LogicGambleCommand *this)
    {
      return 0;
    }

    void __fastcall Game::startedFromNotification(LogicGambleCommand *this, const String *a2)
    {
      ;
    }

    __int64 __fastcall Game::canRender(LogicGambleCommand *this)
    {
      return 1;
    }

    void __fastcall Game::onReachabilityChanged(LogicGambleCommand *this)
    {
      ;
    }

    __int64 __fastcall Game::Game(__int64 result)
    {
      *(_QWORD *)result = off_100475720;
      *(_QWORD *)(result + 8) = 0;
      *(_WORD *)(result + 16) = 0;
      return result;
    }

    __int64 __fastcall Game::~Game(__int64 result)
    {
      *(_QWORD *)result = off_100475720;
      *(_QWORD *)(result + 8) = 0;
      *(_WORD *)(result + 16) = 0;
      return result;
    }

    __int64 __fastcall Game::~Game(__int64 result)
    {
      *(_QWORD *)result = off_100475720;
      *(_QWORD *)(result + 8) = 0;
      *(_WORD *)(result + 16) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall Game::~Game(void *a1)
    {
      operator delete(a1);
    }

    void Game::keyDown()
    {
      ;
    }

    void Game::keyUp()
    {
      ;
    }

    void Game::mouseWheel()
    {
      ;
    }

    void Game::charPressed()
    {
      ;
    }

    __int64 Game::backButtonPressed()
    {
      return 0;
    }

    void Game::configureSurface()
    {
      ;
    }

    void Game::onResize()
    {
      ;
    }

    void Game::keyboardSizeChanged()
    {
      ;
    }

    __int64 Game::handleURL()
    {
      return 0;
    }

    void Game::onMemoryWarning()
    {
      ;
    }

    __int64 Game::exitRequested()
    {
      return 1;
    }

}; // end class Game
