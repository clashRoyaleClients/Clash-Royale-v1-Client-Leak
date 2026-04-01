class MovieClipFrame
{
public:

    _QWORD *__fastcall MovieClipFrame::MovieClipFrame(_QWORD *result)
    {
      *result = 0;
      result[1] = 0;
      return result;
    }

    __int64 *__fastcall MovieClipFrame::~MovieClipFrame(__int64 *a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
    
      v2 = *a1;
      if ( v2 )
        operator delete[](v2);
      v3 = a1[1];
      if ( v3 )
        operator delete[](v3);
      *a1 = 0;
      a1[1] = 0;
      return a1;
    }

    __int64 *__fastcall MovieClipFrame::~MovieClipFrame(__int64 *a1)
    {
      MovieClipFrame::~MovieClipFrame(a1);
      return a1;
    }

    __int64 __fastcall MovieClipFrame::load(__int64 a1, SupercellSWF *a2)
    {
      __int64 Short; // x21
    
      Short = SupercellSWF::readShort(a2);
      *(_QWORD *)(a1 + 8) = SupercellSWF::readAscii(a2);
      return Short;
    }

    __int64 __fastcall MovieClipFrame::getAmountOfChildMemoryNeeded(_QWORD *a1, _QWORD *a2, int a3, int a4)
    {
      int v4; // w8
      int v5; // w9
      __int64 v6; // x11
      int v7; // w10
      __int64 v8; // x15
    
      v4 = 3 * a3;
      v5 = 3 * a4;
      if ( a3 < 1 )
      {
        v7 = 0;
      }
      else
      {
        v6 = 0;
        v7 = 0;
        do
        {
          if ( a4 >= 1 )
          {
            v8 = 0;
            while ( *(unsigned __int16 *)(*a2 + 2 * v6) != *(unsigned __int16 *)(*a1 + 2 * v8) )
            {
              v8 += 3;
              if ( v8 >= v5 )
                goto LABEL_9;
            }
            ++v7;
          }
    LABEL_9:
          v6 += 3;
        }
        while ( v6 < v4 );
      }
      return (unsigned int)(v5 + v4 - v7);
    }

    __int64 __fastcall MovieClipFrame::containsTimelineChild(_QWORD *a1, unsigned __int16 a2, int a3)
    {
      __int64 v3; // x8
    
      if ( a3 < 1 )
        return 0;
      v3 = 0;
      while ( *(unsigned __int16 *)(*a1 + 2 * v3) != a2 )
      {
        v3 += 3;
        if ( v3 >= a3 )
          return 0;
      }
      return 1;
    }

}; // end class MovieClipFrame
