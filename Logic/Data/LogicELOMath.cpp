class LogicELOMath
{
public:

    __int64 __fastcall LogicELOMath::calculateNewRating(int a1, int a2, int a3, int a4)
    {
      int v4; // w8
      __int64 v5; // x9
      __int64 v6; // x8
      int v7; // w8
      int v8; // w9
    
      v4 = a3 - a2;
      v5 = 2000;
      if ( a3 - a2 + 1000 <= 2000 )
        v5 = v4 + 1000;
      if ( v4 >= -1000 )
        v6 = v5;
      else
        v6 = 0;
      v7 = LogicELOMath::WIN_CHANCE_TABLE[v6];
      if ( a1 )
        v8 = 10000;
      else
        v8 = 0;
      return (unsigned int)((v8 - v7) * a4 / 10000 + a2);
    }

}; // end class LogicELOMath
