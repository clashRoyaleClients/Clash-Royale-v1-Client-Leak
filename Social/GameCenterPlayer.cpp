class GameCenterPlayer
{
public:

    String *__fastcall GameCenterPlayer::operator=(String *a1)
    {
      String::operator=(a1);
      String::operator=(a1 + 1);
      return a1;
    }

}; // end class GameCenterPlayer
