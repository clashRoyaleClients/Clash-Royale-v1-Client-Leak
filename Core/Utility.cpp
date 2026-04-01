class Utility
{
public:

    float __fastcall Utility::sqrt(float a1)
    {
      return sqrtf(a1);
    }

    __int64 __fastcall Utility::atoi(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
    {
      __int64 v6; // x9
      int v7; // w12
      int v8; // w8
      int v9; // w11
      int v10; // w12
    
      do
      {
        if ( !a1
          && (unsigned int)Assert::report(
                             (Assert *)"str != NULL",
                             0,
                             "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Utility.cpp",
                             (const char *)0x47,
                             a5) )
        {
          abort();
        }
      }
      while ( Assert::g_false );
      LODWORD(v6) = 0;
      LOBYTE(v7) = *a1;
      v8 = 1;
      if ( *a1 )
      {
        do
        {
          v9 = 0;
          v6 = (int)v6 + 1;
          while ( v9 || (unsigned __int8)v7 != 45 )
          {
            if ( (char)v7 >= 48 )
            {
              v10 = (char)v7 - 48;
              if ( v10 <= 9 )
              {
                v9 = v10 + 10 * v9;
                v7 = (unsigned __int8)a1[v6++];
                if ( v7 )
                  continue;
              }
            }
            return (unsigned int)(v9 * v8);
          }
          v9 = 0;
          LOBYTE(v7) = a1[v6];
          v8 = -1;
        }
        while ( (_BYTE)v7 );
      }
      else
      {
        v9 = 0;
      }
      return (unsigned int)(v9 * v8);
    }

}; // end class Utility
