class GameState
{
public:

    float __fastcall GameState::getLoadingProgress(LogicCommand *this)
    {
      return 1.0;
    }

    String *__usercall GameState::getLoadingTitle@<X0>(String *a1@<X8>)
    {
      return String::String(a1, "");
    }

    void __fastcall GameState::debugDraw(LogicCommand *this)
    {
      ;
    }

    void __fastcall GameState::sleepEnd(LogicCommand *this, float a2)
    {
      ;
    }

    __int64 __fastcall GameState::keyDown(LogicCommand *this)
    {
      return 0;
    }

    __int64 __fastcall GameState::keyUp(LogicCommand *this)
    {
      return 0;
    }

    __int64 GameState::touchPressed()
    {
      return 0;
    }

    __int64 GameState::touchMoved()
    {
      return 0;
    }

    __int64 GameState::touchReleased()
    {
      return 0;
    }

    void __fastcall GameState::touchCancelled(LogicCommand *this)
    {
      ;
    }

    __int64 __fastcall GameState::setAlpha(LogicCommand *this, float a2)
    {
      return LOG("[WARNING] Setting alpha not supported for this game state!\n");
    }

}; // end class GameState
