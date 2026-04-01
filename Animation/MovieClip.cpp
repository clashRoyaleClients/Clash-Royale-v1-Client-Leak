class MovieClip
{
public:

    void __fastcall MovieClip::~MovieClip(DataLoaderTexture *this)
    {
      __int64 v2; // x21
      __int64 *v3; // x20
      __int64 v4; // x8
      __int64 v5; // x22
      __int64 v6; // x0
    
      *(_QWORD *)this = off_100476498;
      v2 = *((__int16 *)this + 75);
      v3 = (__int64 *)((char *)this + 112);
      if ( v2 <= 0 )
      {
        v4 = *v3;
      }
      else
      {
        v4 = *v3;
        do
        {
          v5 = v2--;
          v6 = *(_QWORD *)(v4 + 8 * v2);
          do
          {
            if ( v6 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
              v4 = *v3;
            }
            *(_QWORD *)(v4 + 8 * v2) = 0;
            v4 = *v3;
            v6 = *(_QWORD *)(*v3 + 8 * v2);
          }
          while ( v6 );
        }
        while ( v5 >= 2 );
      }
      if ( v4 )
        operator delete[](v4);
      *((_QWORD *)this + 17) = 0;
      *((_WORD *)this + 75) = 0;
      *((_WORD *)this + 74) = 0;
      *((_WORD *)this + 72) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_WORD *)this + 73) = -1;
      v3[1] = 0;
      v3[2] = 0;
      *v3 = 0;
      *((_BYTE *)this + 69) = 1;
      Sprite::~Sprite(this);
    }

    void __fastcall MovieClip::~MovieClip(DataLoaderTexture *this)
    {
      MovieClip::~MovieClip(this);
    }

    void __fastcall MovieClip::~MovieClip(DataLoaderTexture *this)
    {
      MovieClip::~MovieClip(this);
      operator delete(this);
    }

    __int64 __fastcall MovieClip::createMovieClip(
            DataLoaderTexture *this,
            ResourceDataLoader *a2,
            const jpeg_decoder_file_stream *a3)
    {
      __int64 v5; // x20
      __int64 v6; // x25
      unsigned int v7; // s0
      __int64 v8; // x26
      __int64 v9; // x0
      __int64 v10; // x22
    
      MovieClipOriginal::createTimelineChildren(this, a2);
      v5 = operator new(152);
      Sprite::Sprite((Sprite *)v5, -1);
      *(_QWORD *)v5 = off_100476498;
      *(_WORD *)(v5 + 150) = 0;
      *(_WORD *)(v5 + 148) = 0;
      *(_WORD *)(v5 + 144) = 0;
      *(_QWORD *)(v5 + 96) = 0;
      *(_QWORD *)(v5 + 104) = 0;
      *(_WORD *)(v5 + 146) = -1;
      *(_QWORD *)(v5 + 112) = 0;
      *(_QWORD *)(v5 + 120) = 0;
      *(_QWORD *)(v5 + 128) = 0;
      *(_BYTE *)(v5 + 69) = 1;
      *(_QWORD *)(v5 + 136) = a2;
      Sprite::allocateMemory((Sprite *)v5, *((__int16 *)this + 30));
      v6 = *((unsigned __int16 *)this + 29);
      *(_WORD *)(v5 + 150) = v6;
      *(_QWORD *)(v5 + 112) = operator new[](8 * v6);
      if ( v6 )
      {
        v8 = 0;
        do
        {
          v9 = *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v8);
          v10 = (*(__int64 (__fastcall **)(__int64, ResourceDataLoader *))(*(_QWORD *)v9 + 16LL))(v9, a2);
          DisplayObject::setBlendMode(v10, BLEND_MODE_MAP[*(unsigned __int8 *)(*((_QWORD *)this + 3) + v8)]);
          *(_QWORD *)(*(_QWORD *)(v5 + 112) + 8 * v8) = v10;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 104LL))(v10, 1);
          ++v8;
        }
        while ( (_DWORD)v6 != (_DWORD)v8 );
      }
      *(_QWORD *)(v5 + 120) = *((_QWORD *)this + 5);
      *(_QWORD *)(v5 + 128) = *((_QWORD *)this + 6);
      *(_WORD *)(v5 + 148) = *((_WORD *)this + 28);
      LOBYTE(v7) = *((_BYTE *)this + 62);
      *(float *)(v5 + 108) = 1.0 / (float)v7;
      *(_WORD *)(v5 + 144) = -1;
      MovieClip::setFrame((DataLoaderTexture *)v5, 0);
      *(_QWORD *)(v5 + 96) = *((_QWORD *)this + 1);
      return v5;
    }

    __int64 __fastcall MovieClip::setFrame(__int64 this, int a2)
    {
      OutOfSyncMessage *v2; // x19
      __int64 v3; // x20
      __int64 v4; // x8
      __int16 *v5; // x23
      unsigned __int64 v6; // x24
      __int64 v7; // t1
      __int64 v8; // x21
      __int64 v9; // x22
      __int64 Matrix; // x0
      int8x16_t v11; // q0
      _BYTE *ColorTransform; // x0
      int v13; // w21
    
      v2 = (OutOfSyncMessage *)this;
      if ( *(unsigned __int16 *)(this + 146) == (unsigned __int16)a2 && *(_BYTE *)(this + 69) )
      {
        *(_BYTE *)(this + 69) = 0;
        *(_DWORD *)(this + 104) = 0;
      }
      if ( *(unsigned __int16 *)(this + 144) != (unsigned __int16)a2 )
      {
        v3 = 0;
        *(_WORD *)(this + 144) = a2;
        v4 = *(_QWORD *)(this + 128) + 16LL * a2;
        v5 = *(__int16 **)v4;
        v6 = *(_QWORD *)(v4 + 16);
        while ( (unsigned __int64)v5 < v6 )
        {
          v7 = *v5;
          v5 += 3;
          v8 = *(_QWORD *)(*((_QWORD *)v2 + 14) + 8 * v7);
          if ( v8 )
          {
            v9 = (unsigned __int16)*(v5 - 1);
            if ( (unsigned __int16)*(v5 - 2) == 0xFFFF )
            {
              *(_DWORD *)(v8 + 16) = 1065353216;
              *(_DWORD *)(v8 + 28) = 1065353216;
              *(_DWORD *)(v8 + 20) = 0;
              *(_DWORD *)(v8 + 24) = 0;
              *(_DWORD *)(v8 + 32) = 0;
              *(_DWORD *)(v8 + 36) = 0;
            }
            else
            {
              Matrix = SupercellSWF::getMatrix(*((_QWORD *)v2 + 17));
              v11 = *(int8x16_t *)Matrix;
              *(_QWORD *)(v8 + 16) = *(_QWORD *)Matrix;
              *(_QWORD *)(v8 + 24) = vextq_s8(v11, v11, 8u).u64[0];
              *(_DWORD *)(v8 + 32) = *(_DWORD *)(Matrix + 16);
              *(_DWORD *)(v8 + 36) = *(_DWORD *)(Matrix + 20);
            }
            if ( (_DWORD)v9 == 0xFFFF )
            {
              ColorTransform::reset(v8 + 9);
            }
            else
            {
              ColorTransform = (_BYTE *)SupercellSWF::getColorTransform(*((_QWORD *)v2 + 17), v9);
              ColorTransform::copyValuesFrom((_BYTE *)(v8 + 9), ColorTransform);
            }
            if ( *(OutOfSyncMessage **)(v8 + 48) != v2 || *(_DWORD *)(v8 + 56) != (_DWORD)v3 )
              (*(void (__fastcall **)(OutOfSyncMessage *, __int64, __int64))(*(_QWORD *)v2 + 168LL))(v2, v8, v3);
            v3 = (unsigned int)(v3 + 1);
          }
        }
        this = Sprite::getNumChildren(v2);
        if ( (int)this > (int)v3 )
        {
          v13 = this - 1;
          do
            this = Sprite::removeChildAt(v2, v13);
          while ( v13-- > (int)v3 );
        }
      }
      return this;
    }

    __int64 __fastcall MovieClip::render(__int64 a1, __int64 a2, __int64 a3, __int64 a4, long double a5)
    {
      float v10; // s0
      float v11; // s1
      int v12; // w9
      int v13; // w8
      __int16 v14; // w9
      int v15; // w10
      __int16 v16; // w11
      int v17; // w8
    
      if ( *(float *)&a5 > 0.0 )
      {
        v10 = *(float *)(a1 + 104);
        v11 = *(float *)(a1 + 108);
        if ( v10 >= v11 )
        {
          v12 = (int)(float)(v10 / v11);
          *(float *)(a1 + 104) = v10 - (float)(v11 * (float)v12);
          v13 = *(__int16 *)(a1 + 144);
          if ( *(_BYTE *)(a1 + 68) )
          {
            v14 = v13 + v12;
            v15 = *(__int16 *)(a1 + 146);
            if ( v14 <= v15 )
              v16 = v14;
            else
              v16 = *(_WORD *)(a1 + 146);
            if ( v13 < v15 )
              LOWORD(v17) = v16;
            else
              LOWORD(v17) = v14;
            v17 = (__int16)v17;
          }
          else
          {
            v17 = v13 + 1;
          }
          MovieClip::setFrame(a1, (__int16)(v17 % *(__int16 *)(a1 + 148)));
        }
        if ( *(_BYTE *)(a1 + 69) == 1 )
          *(float *)(a1 + 104) = *(float *)(a1 + 104) + *(float *)&a5;
      }
      return Sprite::render(a1, a2, a3, a4, a5);
    }

    __int64 __fastcall MovieClip::removeChildAt(__int64 a1, int a2)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      __int64 v4; // x10
    
      v2 = *(__int16 *)(a1 + 150);
      if ( v2 >= 1 )
      {
        v3 = 0;
        v4 = *(_QWORD *)(a1 + 112);
        while ( *(_QWORD *)(v4 + 8 * v3) != *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * a2) )
        {
          if ( ++v3 >= v2 )
            return Sprite::removeChildAt((OutOfSyncMessage *)a1, a2);
        }
        if ( (_DWORD)v3 != -1 )
          *(_QWORD *)(v4 + 8 * v3) = 0;
      }
      return Sprite::removeChildAt((OutOfSyncMessage *)a1, a2);
    }

    __int64 __fastcall MovieClip::getChildByName(__int64 a1, __int64 a2, long double a3)
    {
      int v3; // w8
      _QWORD *v4; // x1
    
      v3 = *(_DWORD *)(a2 + 4) + 1;
      v4 = (_QWORD *)(a2 + 8);
      if ( v3 > 8 )
        v4 = (_QWORD *)*v4;
      return MovieClip::getChildByName(a1, v4, a3);
    }

    __int64 __fastcall MovieClip::getChildByName(__int64 a1, const char *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
      __int64 v6; // x23
      const char *v7; // x0
    
      do
      {
        if ( !a2
          && (unsigned int)Assert::report(
                             (__int64)"pName != NULL",
                             0,
                             (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/MovieClip.cpp",
                             524) )
        {
          abort();
        }
      }
      while ( Assert::g_false );
      v4 = *(_QWORD *)(a1 + 120);
      if ( !v4 )
        return 0;
      v5 = *(__int16 *)(a1 + 150);
      if ( v5 < 1 )
        return 0;
      v6 = 0;
      while ( 1 )
      {
        v7 = *(const char **)(v4 + 8 * v6);
        if ( v7 )
        {
          if ( !strcasecmp(v7, a2) )
            break;
        }
        if ( ++v6 >= v5 )
          return 0;
      }
      return *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8 * v6);
    }

    void __usercall MovieClip::getNameOfChild(__int64 a1@<X0>, __int64 a2@<X1>, String *a3@<X8>)
    {
      __int64 v3; // x9
      __int64 v4; // x10
      __int64 v5; // x11
      const char *v6; // x1
    
      v3 = *(_QWORD *)(a1 + 120);
      if ( !v3 )
        goto LABEL_9;
      v4 = *(__int16 *)(a1 + 150);
      if ( v4 < 1 )
        goto LABEL_9;
      v5 = 0;
      while ( *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8 * v5) != a2 )
      {
        if ( ++v5 >= v4 )
          goto LABEL_9;
      }
      v6 = *(const char **)(v3 + 8 * v5);
      if ( v6 )
        String::String(a3, v6);
      else
    LABEL_9:
        String::String((__int64)a3, EMPTY_STRING);
    }

    __n128 __fastcall MovieClip::gotoAndPlay(MovieClip *a1, __int64 a2, __int64 a3)
    {
      int FrameIndex; // w21
      int v6; // w2
    
      FrameIndex = MovieClip::getFrameIndex(a1, a2);
      v6 = MovieClip::getFrameIndex(a1, a3);
      return MovieClip::gotoAndPlayFrameIndex(a1, FrameIndex, v6);
    }

    __int64 __fastcall MovieClip::getFrameIndex(__int64 a1, const char *a2)
    {
      __int64 v3; // x8
      __int64 v4; // x21
      __int64 v5; // x19
      const char **i; // x22
    
      if ( !a2 )
        return 0xFFFFFFFFLL;
      v3 = *(__int16 *)(a1 + 148);
      if ( v3 < 1 )
        return 0xFFFFFFFFLL;
      v4 = v3 + 1;
      v5 = (unsigned int)(v3 - 1);
      for ( i = (const char **)(*(_QWORD *)(a1 + 128) + 16 * v3 - 8); !*i || strcmp(*i, a2); i -= 2 )
      {
        --v4;
        v5 = (unsigned int)(v5 - 1);
        if ( v4 <= 1 )
          return 0xFFFFFFFFLL;
      }
      return v5;
    }

    __int64 __fastcall MovieClip::gotoAndPlayFrameIndex(__int64 result, int a2, int a3)
    {
      __int64 v5; // x19
    
      v5 = result;
      *(_WORD *)(result + 146) = a3;
      if ( (a2 & 0x80000000) == 0 && *(__int16 *)(result + 148) > a2 )
        result = MovieClip::setFrame(result, (__int16)a2);
      if ( a2 == a3 )
      {
        if ( !*(_BYTE *)(v5 + 69) )
          return result;
        *(_BYTE *)(v5 + 69) = 0;
      }
      else
      {
        if ( *(_BYTE *)(v5 + 69) == 1 )
          return result;
        *(_BYTE *)(v5 + 69) = 1;
      }
      *(_DWORD *)(v5 + 104) = 0;
      return result;
    }

    __int64 __fastcall MovieClip::gotoAndPlay(__int64 a1, __int64 a2, __int64 a3)
    {
      int v4; // w8
      const char *v5; // x1
      const char *v6; // x20
      int FrameIndex; // w21
      int v8; // w2
    
      v4 = *(_DWORD *)(a2 + 4) + 1;
      v5 = (const char *)(a2 + 8);
      if ( v4 > 8 )
        v5 = *(const char **)v5;
      v6 = (const char *)(a3 + 8);
      if ( *(_DWORD *)(a3 + 4) + 1 > 8 )
        v6 = *(const char **)v6;
      FrameIndex = MovieClip::getFrameIndex(a1, v5);
      v8 = MovieClip::getFrameIndex(a1, v6);
      return MovieClip::gotoAndPlayFrameIndex(a1, FrameIndex, v8);
    }

    __int64 __fastcall MovieClip::gotoAndStopFrameIndex(__int64 a1, int a2)
    {
      __int64 result; // x0
    
      result = MovieClip::gotoAndPlayFrameIndex(a1, a2, -1);
      if ( *(_BYTE *)(a1 + 69) )
      {
        *(_BYTE *)(a1 + 69) = 0;
        *(_DWORD *)(a1 + 104) = 0;
      }
      return result;
    }

    __int64 __fastcall MovieClip::gotoAndStop(__int64 a1, const char *a2)
    {
      int FrameIndex; // w0
      __int64 result; // x0
    
      FrameIndex = MovieClip::getFrameIndex(a1, a2);
      result = MovieClip::gotoAndPlayFrameIndex(a1, FrameIndex, -1);
      if ( *(_BYTE *)(a1 + 69) )
      {
        *(_BYTE *)(a1 + 69) = 0;
        *(_DWORD *)(a1 + 104) = 0;
      }
      return result;
    }

    __int64 __fastcall MovieClip::gotoAndStop(__int64 a1, __int64 a2)
    {
      int v2; // w8
      const char *v3; // x1
    
      v2 = *(_DWORD *)(a2 + 4) + 1;
      v3 = (const char *)(a2 + 8);
      if ( v2 > 8 )
        v3 = *(const char **)v3;
      return MovieClip::gotoAndStop(a1, v3);
    }

    __int64 __fastcall MovieClip::getFrameIndex(__int64 a1, __int64 a2)
    {
      int v2; // w8
      const char *v3; // x1
    
      v2 = *(_DWORD *)(a2 + 4) + 1;
      v3 = (const char *)(a2 + 8);
      if ( v2 > 8 )
        v3 = *(const char **)v3;
      return MovieClip::getFrameIndex(a1, v3);
    }

    bool __fastcall MovieClip::isPlaying(__int64 a1)
    {
      return *(_BYTE *)(a1 + 69) == 1;
    }

    __int64 __fastcall MovieClip::play(__int64 result)
    {
      if ( *(_BYTE *)(result + 69) != 1 )
      {
        *(_BYTE *)(result + 69) = 1;
        *(_DWORD *)(result + 104) = 0;
      }
      return result;
    }

    __int64 __fastcall MovieClip::pause(__int64 result)
    {
      if ( *(_BYTE *)(result + 69) == 1 )
      {
        *(_BYTE *)(result + 69) = 2;
        *(_DWORD *)(result + 104) = 0;
      }
      return result;
    }

    __int64 __fastcall MovieClip::stopAll(__int64 a1)
    {
      __int64 result; // x0
      __int64 v3; // x21
      int v4; // w22
      MovieClip *v5; // x20
    
      if ( *(_BYTE *)(a1 + 69) )
      {
        *(_BYTE *)(a1 + 69) = 0;
        *(_DWORD *)(a1 + 104) = 0;
      }
      result = Sprite::getNumChildren(a1);
      if ( (int)result >= 1 )
      {
        v3 = 0;
        v4 = result;
        do
        {
          v5 = *(MovieClip **)(*(_QWORD *)(a1 + 72) + 8 * v3);
          result = (*(__int64 (__fastcall **)(MovieClip *))(*(_QWORD *)v5 + 120LL))(v5);
          if ( (_DWORD)result )
            result = MovieClip::stopAll(v5);
          ++v3;
        }
        while ( v4 != (_DWORD)v3 );
      }
      return result;
    }

    __int64 __fastcall MovieClip::stop(__int64 result)
    {
      if ( *(_BYTE *)(result + 69) )
      {
        *(_BYTE *)(result + 69) = 0;
        *(_DWORD *)(result + 104) = 0;
      }
      return result;
    }

    __int64 __fastcall MovieClip::getTotalFrames(DataLoaderTexture *this)
    {
      return (unsigned int)*((__int16 *)this + 74);
    }

    __int64 __fastcall MovieClip::getCurrentFrame(DataLoaderTexture *this)
    {
      return (unsigned int)*((__int16 *)this + 72);
    }

    __int64 __fastcall MovieClip::setInteractiveRecursive(DataLoaderTexture *this, _BOOL8 a2)
    {
      __int64 result; // x0
      int v5; // w21
      __int64 v6; // x22
    
      result = Sprite::setInteractiveRecursive(this, a2);
      v5 = *((__int16 *)this + 75);
      if ( v5 >= 1 )
      {
        v6 = 0;
        do
        {
          result = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v6);
          if ( result )
            result = (*(__int64 (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)result + 104LL))(result, a2);
          ++v6;
        }
        while ( v5 != (_DWORD)v6 );
      }
      return result;
    }

    __int64 __fastcall MovieClip::changeTimelineChild(__int64 this, const char *__s2, Multitouch *a3)
    {
      __int64 v5; // x19
      __int64 v6; // x23
      __int64 v7; // x24
      __int64 v8; // x22
      int v9; // w2
      __int64 v10; // x8
      Multitouch *v11; // x21
      __int16 v12; // w20
      MovieClip *v13; // x0
      char *v14; // x21
      __int64 FrameDataLength; // x0
    
      v5 = this;
      do
      {
        if ( !__s2 )
        {
          this = Assert::report(
                   (__int64)"pInstanceName != NULL",
                   0,
                   (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/MovieClip.cpp",
                   789);
          if ( (_DWORD)this )
            abort();
        }
      }
      while ( Assert::g_false );
      v6 = *(_QWORD *)(v5 + 120);
      if ( v6 )
      {
        v7 = *(__int16 *)(v5 + 150);
        if ( v7 >= 1 )
        {
          v8 = 0;
          while ( 1 )
          {
            this = *(_QWORD *)(v6 + 8 * v8);
            if ( this )
            {
              this = strcmp((const char *)this, __s2);
              if ( !(_DWORD)this )
                break;
            }
            if ( ++v8 >= v7 )
              return this;
          }
          v10 = *(_QWORD *)(v5 + 112);
          v11 = *(Multitouch **)(v10 + 8 * v8);
          if ( v11 )
          {
            if ( v11 != a3 )
            {
              MovieClip::changeTimelineChild((DataLoaderTexture *)v5, *(Multitouch **)(v10 + 8 * v8), a3);
              return (*(__int64 (__fastcall **)(Multitouch *))(*(_QWORD *)v11 + 8LL))(v11);
            }
          }
          else
          {
            *(_QWORD *)(v10 + 8 * v8) = a3;
            v12 = *(_WORD *)(v5 + 144);
            v13 = *(MovieClip **)(v5 + 128);
            v14 = (char *)v13 + 16 * v12;
            FrameDataLength = MovieClip::getFrameDataLength(v13, (const MovieClipFrame *)(unsigned int)v12, v9);
            this = MovieClipFrame::containsTimelineChild(v14, (unsigned int)(__int16)v8, FrameDataLength);
            if ( (_DWORD)this )
            {
              *(_WORD *)(v5 + 144) = -1;
              return MovieClip::setFrame(v5, v12);
            }
          }
        }
      }
      return this;
    }

    __int64 __fastcall MovieClip::changeTimelineChild(__int64 this, int8x16_t *a2, Multitouch *a3)
    {
      _QWORD *v4; // x20
      __int64 v5; // x8
      __int64 v6; // x22
      __int64 v7; // x21
      int8x16_t v8; // q0
    
      v4 = (_QWORD *)this;
      v5 = *(__int16 *)(this + 150);
      if ( v5 >= 1 )
      {
        v6 = 0;
        while ( *(int8x16_t **)(*(_QWORD *)(this + 112) + 8 * v6) != a2 )
        {
          if ( ++v6 >= v5 )
            return this;
        }
        if ( (_DWORD)v6 != -1 )
        {
          v7 = a2[3].u32[2];
          if ( (_DWORD)v7 == -1 )
          {
            this = *((_QWORD *)a3 + 6);
            if ( this )
              this = (*(__int64 (__fastcall **)(__int64, Multitouch *))(*(_QWORD *)this + 176LL))(this, a3);
          }
          else
          {
            v8 = a2[1];
            *((_QWORD *)a3 + 2) = v8.i64[0];
            *((_QWORD *)a3 + 3) = vextq_s8(v8, v8, 8u).u64[0];
            *((_DWORD *)a3 + 8) = a2[2].i32[0];
            *((_DWORD *)a3 + 9) = a2[2].i32[1];
            ColorTransform::copyValuesFrom((_BYTE *)a3 + 9, &a2->i8[9]);
            (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 184LL))(v4, v7);
            this = (*(__int64 (__fastcall **)(_QWORD *, Multitouch *, __int64))(*v4 + 168LL))(v4, a3, v7);
          }
          *(_QWORD *)(v4[14] + 8 * v6) = a3;
        }
      }
      return this;
    }

    bool __fastcall MovieClip::isStopped(DataLoaderTexture *this)
    {
      return *((_BYTE *)this + 69) == 0;
    }

    __int64 __fastcall MovieClip::isMovieClip(DataLoaderTexture *this)
    {
      return 1;
    }

    __int64 __fastcall MovieClip::getMovieClipByName(DataLoaderTexture *this, const String *a2)
    {
      int v2; // w8
      internal_t *p_internal; // x1
      __int64 ChildByName; // x0
      __int64 v5; // x19
    
      v2 = a2->m_bytes + 1;
      p_internal = &a2->internal;
      if ( v2 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      ChildByName = MovieClip::getChildByName((__int64)this, (const char *)p_internal);
      v5 = ChildByName;
      if ( !ChildByName )
        return 0;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)ChildByName + 120LL))(ChildByName) )
        return v5;
      return 0;
    }

    __int64 __fastcall MovieClip::getMovieClipByName(DataLoaderTexture *this, const char *a2)
    {
      __int64 ChildByName; // x0
      __int64 v3; // x19
    
      ChildByName = MovieClip::getChildByName((__int64)this, a2);
      v3 = ChildByName;
      if ( !ChildByName )
        return 0;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)ChildByName + 120LL))(ChildByName) )
        return v3;
      return 0;
    }

    __int64 __fastcall MovieClip::getTextFieldByName(__int64 a1, __int64 a2)
    {
      int v2; // w8
      const char *v3; // x1
      __int64 ChildByName; // x0
      __int64 v5; // x19
    
      v2 = *(_DWORD *)(a2 + 4) + 1;
      v3 = (const char *)(a2 + 8);
      if ( v2 > 8 )
        v3 = *(const char **)v3;
      ChildByName = MovieClip::getChildByName(a1, v3);
      v5 = ChildByName;
      if ( !ChildByName )
        return 0;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)ChildByName + 128LL))(ChildByName) )
        return v5;
      return 0;
    }

    __int64 __fastcall MovieClip::getTextFieldByName(__int64 a1, const char *a2)
    {
      __int64 ChildByName; // x0
      __int64 v3; // x19
    
      ChildByName = MovieClip::getChildByName(a1, a2);
      v3 = ChildByName;
      if ( !ChildByName )
        return 0;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)ChildByName + 128LL))(ChildByName) )
        return v3;
      return 0;
    }

    __n128 __fastcall MovieClip::setText(MovieClip *a1, __int64 a2, const String *a3)
    {
      int v3; // w8
      const char *v4; // x1
    
      v3 = *(_DWORD *)(a2 + 4) + 1;
      v4 = (const char *)(a2 + 8);
      if ( v3 > 8 )
        v4 = *(const char **)v4;
      return MovieClip::setText(a1, v4, a3);
    }

    __int64 __fastcall MovieClip::setText(__int64 a1, const char *a2, const String *a3)
    {
      __int64 result; // x0
      VertexBuffer *v5; // x20
    
      result = MovieClip::getChildByName(a1, a2);
      v5 = (VertexBuffer *)result;
      if ( result )
      {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 128LL))(result);
        if ( (_DWORD)result )
          return TextField::setText(v5, a3);
      }
      return result;
    }

    __int64 __fastcall MovieClip::setNumberText(__int64 a1, const char *a2, int a3, bool a4)
    {
      __int64 result; // x0
      TextField *v7; // x21
    
      result = MovieClip::getChildByName(a1, a2);
      v7 = (TextField *)result;
      if ( result )
      {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 128LL))(result);
        if ( (_DWORD)result )
          return TextField::setNumberText(v7, a3, a4);
      }
      return result;
    }

    float __fastcall MovieClip::getMSPerFrame(__int64 a1)
    {
      return *(float *)(a1 + 108);
    }

    __int64 __fastcall MovieClip::setChildVisible(__int64 a1, const char *a2, char a3)
    {
      __int64 result; // x0
    
      result = MovieClip::getChildByName(a1, a2);
      if ( result )
        *(_BYTE *)(result + 8) = a3;
      return result;
    }

    __int64 __fastcall MovieClip::playOnce(__int64 a1)
    {
      return MovieClip::gotoAndPlayFrameIndex(a1, 0, *(__int16 *)(a1 + 148) - 1);
    }

    __int64 __fastcall MovieClip::playOnceRecursive(__int64 a1)
    {
      __int64 result; // x0
      int v3; // w21
      __int64 v4; // x22
      MovieClip *v5; // x20
    
      result = MovieClip::gotoAndPlayFrameIndex(a1, 0, *(__int16 *)(a1 + 148) - 1);
      v3 = *(__int16 *)(a1 + 150);
      if ( v3 >= 1 )
      {
        v4 = 0;
        do
        {
          v5 = *(MovieClip **)(*(_QWORD *)(a1 + 112) + 8 * v4);
          if ( v5 )
          {
            result = (*(__int64 (__fastcall **)(MovieClip *))(*(_QWORD *)v5 + 120LL))(v5);
            if ( (_DWORD)result )
              result = MovieClip::playOnceRecursive(v5);
          }
          ++v4;
        }
        while ( v3 != (_DWORD)v4 );
      }
      return result;
    }

    __int64 __fastcall MovieClip::resetTimelinePositionRecursive(__int64 a1)
    {
      __int64 result; // x0
      int v3; // w21
      __int64 v4; // x22
      MovieClip *v5; // x20
    
      result = MovieClip::gotoAndPlayFrameIndex(a1, 0, -1);
      v3 = *(__int16 *)(a1 + 150);
      if ( v3 >= 1 )
      {
        v4 = 0;
        do
        {
          v5 = *(MovieClip **)(*(_QWORD *)(a1 + 112) + 8 * v4);
          if ( v5 )
          {
            result = (*(__int64 (__fastcall **)(MovieClip *))(*(_QWORD *)v5 + 120LL))(v5);
            if ( (_DWORD)result )
              result = MovieClip::resetTimelinePositionRecursive(v5);
          }
          ++v4;
        }
        while ( v3 != (_DWORD)v4 );
      }
      return result;
    }

    __int64 __fastcall MovieClip::getTimelineChildCount(__int64 a1)
    {
      return (unsigned int)*(__int16 *)(a1 + 150);
    }

    __int64 __fastcall MovieClip::getTimelineChild(__int64 a1, int a2)
    {
      __int64 v4; // x0
    
      v4 = (a2 & 0x80000000) == 0 && *(__int16 *)(a1 + 150) > a2;
      Debugger::doAssert(v4, "MovieClip::getTimelineChild invalid index");
      return *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * a2);
    }

    __int64 __fastcall MovieClip::getTimelineChildInstanceName(__int64 a1, int a2)
    {
      __int64 v4; // x0
      __int64 v5; // x8
    
      v4 = (a2 & 0x80000000) == 0 && *(__int16 *)(a1 + 150) > a2;
      Debugger::doAssert(v4, "MovieClip::getTimelineChildInstanceName invalid index");
      v5 = *(_QWORD *)(a1 + 120);
      if ( v5 )
        return *(_QWORD *)(v5 + 8LL * a2);
      else
        return 0;
    }

    __int64 __fastcall MovieClip::getExportName(__int64 a1)
    {
      return *(_QWORD *)(a1 + 96);
    }

    __int64 __fastcall MovieClip::getSupercellSWF(__int64 a1)
    {
      return *(_QWORD *)(a1 + 136);
    }

    __int64 __fastcall MovieClip::getFrameDataLength(__int64 a1, int a2)
    {
      __int64 v2; // x19
    
      v2 = (*(_QWORD *)(a1 + 16LL * a2 + 16) - *(_QWORD *)(a1 + 16LL * a2)) >> 1;
      do
      {
        if ( (v2 & 0x80000000) != 0
          && (unsigned int)Assert::report(
                             (__int64)"count >= 0",
                             0,
                             (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/MovieClip.cpp",
                             1232) )
        {
          abort();
        }
      }
      while ( Assert::g_false );
      return v2;
    }

    float __fastcall MovieClip::getDuration(__int64 a1)
    {
      return *(float *)(a1 + 108) * (float)*(__int16 *)(a1 + 148);
    }

    float __fastcall MovieClip::getFrameTime(__int64 a1)
    {
      return *(float *)(a1 + 104);
    }

    __int64 __fastcall MovieClip::setFrameTime(__int64 result, float a2)
    {
      *(float *)(result + 104) = a2;
      return result;
    }

    __int64 __fastcall MovieClip::getFrameLabel(__int64 a1, int a2)
    {
      __int64 v4; // x0
    
      v4 = (a2 & 0x80000000) == 0 && *(__int16 *)(a1 + 148) > a2;
      Debugger::doAssert(v4, "");
      return *(_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL * a2 + 8);
    }

}; // end class MovieClip
