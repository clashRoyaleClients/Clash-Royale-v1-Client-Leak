class StarHud
{
public:

    void __fastcall StarHud::StarHud(StarHud *this, int a2)
    {
      const char *v4; // x2
      __int64 v5; // x8
      char *v6; // x10
      const char *v7; // x1
      __int64 MovieClip; // x0
      __int64 MovieClipByName; // x20
    
      Sprite::Sprite(this, 1);
      v5 = 0;
      *(_QWORD *)this = off_100463328;
      *((_QWORD *)this + 16) = 0;
      *((_DWORD *)this + 29) = 0;
      *((_DWORD *)this + 34) = 0;
      *((_DWORD *)this + 30) = 0;
      do
      {
        v6 = (char *)this + v5;
        *((_DWORD *)v6 + 23) = -1;
        *((_DWORD *)v6 + 26) = -1;
        v5 += 4;
      }
      while ( v5 != 12 );
      if ( a2 )
        v7 = "printScore_player";
      else
        v7 = "printScore_enemy";
      MovieClip = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", v7, v4);
      *((_QWORD *)this + 16) = MovieClip;
      (*(void (__fastcall **)(StarHud *, __int64))(*(_QWORD *)this + 160LL))(this, MovieClip);
      MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 16), "star1");
      *((_DWORD *)this + 23) = MovieClip::getFrameIndex(MovieClipByName, "noStar");
      *((_DWORD *)this + 26) = MovieClip::getFrameIndex(MovieClipByName, "noStar_end");
      *((_DWORD *)this + 24) = MovieClip::getFrameIndex(MovieClipByName, "newStar");
      *((_DWORD *)this + 27) = MovieClip::getFrameIndex(MovieClipByName, "newStar_end");
      *((_DWORD *)this + 25) = MovieClip::getFrameIndex(MovieClipByName, "oldStar");
      *((_DWORD *)this + 28) = MovieClip::getFrameIndex(MovieClipByName, "oldStar_end");
      LODWORD(MovieClipByName) = MovieClip::getFrameIndex(*((_QWORD *)this + 16), "start");
      *((float *)this + 30) = (float)(int)MovieClipByName * MovieClip::getMSPerFrame(*((_QWORD *)this + 16));
      *((_BYTE *)this + 8) = 0;
    }

    // attributes: thunk
    void __fastcall StarHud::StarHud(StarHud *this, int a2)
    {
      __ZN7StarHudC2Eb(this, a2);
    }

    void __fastcall StarHud::~StarHud(#1349 *this)
    {
      __int64 v2; // x0
      __int64 v3; // x8
      char *v4; // x10
    
      *(_QWORD *)this = off_100463328;
      v2 = *((_QWORD *)this + 16);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v3 = 0;
      *((_QWORD *)this + 16) = 0;
      *((_DWORD *)this + 29) = 0;
      *((_DWORD *)this + 34) = 0;
      *((_DWORD *)this + 30) = 0;
      do
      {
        v4 = (char *)this + v3;
        *((_DWORD *)v4 + 23) = -1;
        *((_DWORD *)v4 + 26) = -1;
        v3 += 4;
      }
      while ( v3 != 12 );
      Sprite::~Sprite(this);
    }

    // attributes: thunk
    void __fastcall StarHud::~StarHud(#1349 *this)
    {
      __ZN7StarHudD2Ev(this);
    }

    void __fastcall StarHud::~StarHud(#1349 *this)
    {
      StarHud::~StarHud(this);
      operator delete(this);
    }

    MovieClip *__fastcall StarHud::setName(#1257 **this, const String *a2)
    {
      MovieClip *result; // x0
    
      result = (MovieClip *)MovieClip::getMovieClipByName(*(this + 16), "playerName");
      if ( result )
        return (MovieClip *)MovieClip::setText(result, "txt", a2);
      result = (MovieClip *)MovieClip::getMovieClipByName(*(this + 16), "enemyName");
      if ( result )
        return (MovieClip *)MovieClip::setText(result, "txt", a2);
      return result;
    }

    __int64 __fastcall StarHud::update(#1349 *this, double a2, const char *a3, int a4)
    {
      int v4; // w19
      float v5; // s8
      int v7; // w8
      _DWORD *v8; // x23
      int v9; // w25
      #1257 *v10; // x22
      int v11; // w24
      MovieClip *MovieClipByName; // x22
      int v13; // w1
      int v14; // w2
      const char *v15; // x1
      __int64 v16; // x23
      #1257 *v17; // x22
      MovieClip *v18; // x22
      float v19; // s8
      MovieClip **v20; // x22
      int v21; // w21
      __int64 result; // x0
      String v23; // [xsp+10h] [xbp-80h] BYREF
      String v24; // [xsp+28h] [xbp-68h] BYREF
    
      v4 = (int)a3;
      v5 = *(float *)&a2;
      v7 = *((_DWORD *)this + 34);
      if ( v7 > (int)a3 )
      {
        *((_DWORD *)this + 29) = 0;
        *((_BYTE *)this + 8) = 0;
        Debugger::hudPrint((__siginfo *)"star hud reverted.", (const char *)0xFFFFFFFFLL, a4);
        v7 = *((_DWORD *)this + 34);
      }
      v8 = (_DWORD *)((char *)this + 116);
      if ( v7 < v4 )
      {
        LODWORD(a2) = *v8;
        if ( *(float *)v8 == 0.0 )
        {
          v9 = 0;
          *((_DWORD *)this + 29) = 981668463;
          *((_BYTE *)this + 8) = 1;
          do
          {
            v10 = (#1257 *)*((_QWORD *)this + 16);
            v11 = v9 + 1;
            String::format((String *)"star%d", a3, a2, (unsigned int)(v9 + 1));
            MovieClipByName = (MovieClip *)MovieClip::getMovieClipByName(v10, &v24);
            String::~String(&v24);
            if ( MovieClipByName )
            {
              if ( v9 >= *((_DWORD *)this + 34) )
              {
                if ( v9 >= v4 )
                {
                  v13 = *((_DWORD *)this + 23);
                  v14 = *((_DWORD *)this + 26);
                }
                else
                {
                  v13 = *((_DWORD *)this + 24);
                  v14 = *((_DWORD *)this + 27);
                }
              }
              else
              {
                v13 = *((_DWORD *)this + 25);
                v14 = *((_DWORD *)this + 28);
              }
              *(_QWORD *)&a2 = MovieClip::gotoAndPlayFrameIndex(MovieClipByName, v13, v14).n128_u64[0];
            }
            ++v9;
          }
          while ( v11 < 3 );
        }
        else
        {
          Debugger::hudPrint((__siginfo *)"additional star", (const char *)0xFFFFFFFFLL, a4);
          LODWORD(v16) = *((_DWORD *)this + 34);
          while ( (int)v16 < v4 )
          {
            v17 = (#1257 *)*((_QWORD *)this + 16);
            v16 = (unsigned int)(v16 + 1);
            String::format((String *)"star%d", v15, v16);
            v18 = (MovieClip *)MovieClip::getMovieClipByName(v17, &v23);
            String::~String(&v23);
            if ( v18 )
              MovieClip::gotoAndPlayFrameIndex(v18, *((_DWORD *)this + 24), *((_DWORD *)this + 27));
          }
          v8 = (_DWORD *)((char *)this + 116);
          *((_DWORD *)this + 29) = *((_DWORD *)this + 30);
        }
      }
      if ( *(float *)v8 <= 0.0 )
      {
        v21 = 0;
        v20 = (MovieClip **)((char *)this + 128);
      }
      else
      {
        v19 = *(float *)v8 + v5;
        *(float *)v8 = v19;
        v20 = (MovieClip **)((char *)this + 128);
        v21 = (int)(float)(v19 / MovieClip::getMSPerFrame(*((_QWORD *)this + 16)));
      }
      MovieClip::gotoAndStopFrameIndex(*v20, v21);
      result = MovieClip::getTotalFrames(*v20);
      if ( v21 >= (int)result )
      {
        *v8 = 0;
        *((_BYTE *)this + 8) = 0;
      }
      *((_DWORD *)this + 34) = v4;
      return result;
    }

}; // end class StarHud
