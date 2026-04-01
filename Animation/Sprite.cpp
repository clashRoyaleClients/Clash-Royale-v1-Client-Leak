class Sprite
{
public:

    __int64 __fastcall Sprite::isScrollArea(OutOfSyncMessage *this)
    {
      return 0;
    }

    __int64 __fastcall Sprite::Sprite(__int64 a1, int a2)
    {
      int v4; // w21
    
      v4 = (unsigned __int16)a2;
      DisplayObject::DisplayObject(a1);
      *(_QWORD *)a1 = off_1004766F0;
      *(_DWORD *)(a1 + 88) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 64) = 0;
      if ( v4 != 0xFFFF )
      {
        do
        {
          if ( a2 < 0
            && (unsigned int)Assert::report(
                               (__int64)"initialCapacity >= 0",
                               0,
                               (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Sprite.cpp",
                               23) )
          {
            abort();
          }
        }
        while ( Assert::g_false );
        Sprite::allocateMemory((Sprite *)a1, a2);
      }
      return a1;
    }

    void __fastcall Sprite::allocateMemory(__int64 a1, int a2)
    {
      int v3; // w21
      __int64 v4; // x0
      __int64 v5; // x20
      __int64 v6; // x0
      int v7; // w8
      _QWORD *v8; // x9
      __int64 *v9; // x10
      __int64 v10; // t1
    
      if ( a2 <= 65534 )
        v3 = a2;
      else
        v3 = 65534;
      if ( v3 > *(unsigned __int16 *)(a1 + 66) )
      {
        if ( is_mul_ok(v3, 8u) )
          v4 = 8LL * v3;
        else
          v4 = -1;
        v5 = operator new[](v4);
        v6 = *(_QWORD *)(a1 + 72);
        if ( v6 )
        {
          v7 = *(unsigned __int16 *)(a1 + 70);
          if ( *(_WORD *)(a1 + 70) )
          {
            v8 = (_QWORD *)v5;
            v9 = *(__int64 **)(a1 + 72);
            do
            {
              v10 = *v9++;
              *v8++ = v10;
              --v7;
            }
            while ( v7 );
          }
          operator delete[](v6);
          *(_QWORD *)(a1 + 72) = 0;
        }
        *(_WORD *)(a1 + 66) = v3;
        *(_QWORD *)(a1 + 72) = v5;
      }
    }

    __int64 __fastcall Sprite::Sprite(__int64 a1, int a2)
    {
      Sprite::Sprite(a1, a2);
      return a1;
    }

    __int64 __fastcall Sprite::Sprite(__int64 a1)
    {
      DisplayObject::DisplayObject(a1);
      *(_QWORD *)a1 = off_1004766F0;
      *(_DWORD *)(a1 + 88) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 64) = 0;
      Sprite::allocateMemory(a1, 4);
      return a1;
    }

    __int64 __fastcall Sprite::~Sprite(__int64 a1)
    {
      __int64 v2; // x0
      void *v3; // x20
    
      *(_QWORD *)a1 = off_1004766F0;
      v2 = *(_QWORD *)(a1 + 72);
      if ( v2 )
        operator delete[](v2);
      *(_QWORD *)(a1 + 72) = 0;
      v3 = *(void **)(a1 + 80);
      if ( v3 )
      {
        Rect::~Rect(*(_QWORD **)(a1 + 80));
        operator delete(v3);
      }
      *(_DWORD *)(a1 + 88) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 64) = 0;
      DisplayObject::~DisplayObject(a1);
      return a1;
    }

    __int64 __fastcall Sprite::~Sprite(__int64 a1)
    {
      Sprite::~Sprite(a1);
      return a1;
    }

    void __fastcall Sprite::~Sprite(void *a1)
    {
      Sprite::~Sprite((__int64)a1);
      operator delete(a1);
    }

    __int64 __fastcall Sprite::addChild(unsigned __int16 *a1, __int64 a2)
    {
      return (*(__int64 (__fastcall **)(unsigned __int16 *, __int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, a2, a1[35]);
    }

    void __fastcall Sprite::addChildAt(__int64 a1, __int64 a2, int a3)
    {
      __int64 v6; // x0
      __int64 v7; // x1
      __int64 v8; // x8
      __int64 v9; // x10
      _QWORD *v10; // x11
      __int64 v11; // x12
      int v12; // w8
      int v13; // w8
      __int64 v14; // x9
      _QWORD *v15; // x11
      __int64 v16; // x12
      __int64 v17; // x9
      _QWORD *v18; // x10
      __int64 v19; // x11
    
      do
      {
        if ( a1 == a2
          && (unsigned int)Assert::report(
                             (__int64)"this != pDisplayObject",
                             0,
                             (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Sprite.cpp",
                             82) )
        {
          goto LABEL_32;
        }
      }
      while ( Assert::g_false );
      if ( (a3 < 0 || *(unsigned __int16 *)(a1 + 70) < a3)
        && (unsigned int)Assert::report(
                           (__int64)"index >= 0 && index <= m_numChildren",
                           0,
                           (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Sprite.cpp",
                           83)
        || !a2
        && (unsigned int)Assert::report(
                           (__int64)"pDisplayObject != NULL",
                           0,
                           (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Sprite.cpp",
                           84) )
      {
    LABEL_32:
        abort();
      }
      if ( *(__int16 *)(a1 + 66) == -1 )
        Sprite::modifiedChildInRender(a1, "addChildAt");
      v6 = *(_QWORD *)(a2 + 48);
      if ( !v6 )
        goto LABEL_14;
      v7 = *(unsigned int *)(a2 + 56);
      if ( v6 != a1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 184LL))(v6, v7);
    LABEL_14:
        v8 = *(unsigned __int16 *)(a1 + 70);
        if ( (_DWORD)v8 == *(unsigned __int16 *)(a1 + 66) )
        {
          Sprite::allocateMemory(a1, 2 * v8);
          v8 = *(unsigned __int16 *)(a1 + 70);
        }
        if ( (int)v8 > a3 )
        {
          v9 = v8;
          do
          {
            v10 = (_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v9);
            v11 = *(v10 - 1);
            *(_DWORD *)(v11 + 56) = v9--;
            *v10 = v11;
          }
          while ( v9 > a3 );
        }
        *(_QWORD *)(a2 + 48) = a1;
        *(_DWORD *)(a2 + 56) = a3;
        *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * a3) = a2;
        *(_WORD *)(a1 + 70) = v8 + 1;
        return;
      }
      v12 = *(unsigned __int16 *)(a1 + 70);
      if ( v12 <= a3 )
        v13 = v12 - 1;
      else
        v13 = a3 - ((int)v7 < a3);
      if ( (_DWORD)v7 != v13 )
      {
        v14 = (int)v7;
        if ( (int)v7 <= v13 )
        {
          if ( (int)v7 < v13 )
          {
            v17 = 8LL * (int)v7;
            do
            {
              v18 = (_QWORD *)(*(_QWORD *)(a1 + 72) + v17);
              v19 = v18[1];
              *(_DWORD *)(v19 + 56) = v7;
              *v18 = v19;
              LODWORD(v7) = v7 + 1;
              v17 += 8;
            }
            while ( v13 != (_DWORD)v7 );
          }
        }
        else
        {
          do
          {
            v15 = (_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v14);
            v16 = *(v15 - 1);
            *(_DWORD *)(v16 + 56) = v14--;
            *v15 = v16;
          }
          while ( v14 > v13 );
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * v13) = a2;
        *(_DWORD *)(a2 + 56) = v13;
      }
    }

    void __fastcall __noreturn Sprite::modifiedChildInRender(__int64 a1, __int64 a2)
    {
      __int64 ExportName; // x0
      __int64 v5; // x21
      double v6; // d8
      float v7; // s0
      String v8; // [xsp+30h] [xbp-60h] BYREF
      String v9; // [xsp+48h] [xbp-48h] BYREF
    
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) )
      {
        if ( MovieClip::getExportName(a1) )
        {
          ExportName = MovieClip::getExportName(a1);
          String::format((String *)"Sprite::%s while rendering. ExportName:%s", (__int64)&v9, a2, ExportName);
          Debugger::error(&v9);
        }
      }
      v5 = *(unsigned __int16 *)(a1 + 70);
      v6 = DisplayObject::getX(a1);
      v7 = DisplayObject::getY(a1);
      String::format(
        (String *)"Sprite::%s while rendering. m_numChildren: %d. pos: (%.2f, %.2f). m_type: %d. m_parentChildIndex: %d",
        (__int64)&v8,
        a2,
        v5,
        *(_QWORD *)&v6,
        v7,
        *(unsigned int *)(a1 + 60),
        *(unsigned int *)(a1 + 56));
      Debugger::error(&v8);
    }

    __int64 __fastcall Sprite::removeChild(__int16 *a1, const Multitouch *a2)
    {
      __int64 result; // x0
    
      if ( a1[33] == -1 )
        Sprite::modifiedChildInRender((__int64)a1, (__int64)"removeChild");
      result = Sprite::getChildIndex((OutOfSyncMessage *)a1, a2);
      if ( (_DWORD)result != -1 )
        return (*(__int64 (__fastcall **)(__int16 *, __int64))(*(_QWORD *)a1 + 184LL))(a1, result);
      return result;
    }

    __int64 __fastcall Sprite::getChildIndex(OutOfSyncMessage *this, OutOfSyncMessage **a2)
    {
      do
      {
        if ( !a2
          && (unsigned int)Assert::report(
                             (__int64)"pDisplayObject != NULL",
                             0,
                             (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Sprite.cpp",
                             358) )
        {
          abort();
        }
      }
      while ( Assert::g_false );
      if ( a2[6] == this )
        return *((unsigned int *)a2 + 14);
      else
        return 0xFFFFFFFFLL;
    }

    __int64 __fastcall Sprite::removeChildAt(OutOfSyncMessage *this, __int64 a2)
    {
      int v2; // w20
      __int64 v4; // x8
      const DisplayObject *v5; // x21
      Stage *Instance; // x0
      Stage *v7; // x22
      __int64 result; // x0
      unsigned __int16 v9; // w8
      __int64 v10; // x10
      _QWORD *v11; // x11
      __int64 v12; // x12
      String v13; // [xsp+18h] [xbp-38h] BYREF
    
      v2 = a2;
      if ( *((__int16 *)this + 33) == -1 )
        Sprite::modifiedChildInRender((__int64)this, (__int64)"removeChildAt");
      v4 = *((unsigned __int16 *)this + 35);
      if ( (unsigned int)v4 <= (unsigned int)a2 )
      {
        String::format((String *)"Sprite::removeChildAt invalid index: %d, m_numChildren: %d", (__int64)&v13, a2, v4);
        Debugger::error(&v13);
      }
      v5 = *(const DisplayObject **)(*((_QWORD *)this + 9) + 8LL * (int)a2);
      Instance = (Stage *)Stage::getInstance(this);
      v7 = Instance;
      if ( Instance )
        result = Stage::isInStage(Instance, this);
      else
        result = 0;
      *((_QWORD *)v5 + 6) = 0;
      *((_DWORD *)v5 + 14) = -1;
      v9 = *((_WORD *)this + 35) - 1;
      *((_WORD *)this + 35) = v9;
      if ( v9 > v2 )
      {
        v10 = 8LL * v2;
        do
        {
          v11 = (_QWORD *)(*((_QWORD *)this + 9) + v10);
          v12 = v11[1];
          *(_DWORD *)(v12 + 56) = v2;
          *v11 = v12;
          ++v2;
          v10 += 8;
        }
        while ( v9 != v2 );
      }
      *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * v9) = 0;
      if ( (_DWORD)result )
      {
        (*(void (__fastcall **)(const DisplayObject *))(*(_QWORD *)v5 + 32LL))(v5);
        return Stage::childRemoved(v7, this, v5);
      }
      return result;
    }

    bool __fastcall Sprite::isTouchPressed(OutOfSyncMessage *this, char a2)
    {
      return (*((unsigned __int16 *)this + 44) & (1 << a2)) != 0;
    }

    _WORD *__fastcall Sprite::cancelAllTouches(_WORD *this)
    {
      _WORD *v1; // x19
      unsigned __int16 v2; // w8
      __int64 v3; // x20
    
      v1 = this;
      v2 = *(this + 44);
      if ( v2 )
      {
        v3 = 1;
        do
        {
          if ( (v2 & (unsigned __int16)(1 << v3)) != 0 )
          {
            this = (_WORD *)(*(__int64 (__fastcall **)(_WORD *, __int64))(*(_QWORD *)v1 + 232LL))(v1, v3);
            v2 = v1[44];
          }
          v3 = (unsigned int)(v3 + 1);
        }
        while ( (int)v3 <= 15 && v2 );
      }
      return this;
    }

    __int64 __fastcall Sprite::removedFromStage(OutOfSyncMessage *this)
    {
      unsigned __int16 v2; // w8
      __int64 v3; // x20
      __int64 result; // x0
      int v5; // w20
      __int64 v6; // x21
      __int64 v7; // x0
    
      v2 = *((_WORD *)this + 45);
      if ( v2 )
      {
        v3 = 1;
        do
        {
          if ( (v2 & (unsigned __int16)(1 << v3)) != 0 )
          {
            (*(void (__fastcall **)(OutOfSyncMessage *, __int64))(*(_QWORD *)this + 232LL))(this, v3);
            v2 = *((_WORD *)this + 45);
          }
          v3 = (unsigned int)(v3 + 1);
        }
        while ( (int)v3 <= 15 && v2 );
      }
      result = (*(__int64 (__fastcall **)(OutOfSyncMessage *))(*(_QWORD *)this + 248LL))(this);
      v5 = *((unsigned __int16 *)this + 35);
      if ( *((_WORD *)this + 35) )
      {
        v6 = 0;
        do
        {
          v7 = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v6);
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
          ++v6;
        }
        while ( v5 != (_DWORD)v6 );
      }
      return result;
    }

    __int64 Sprite::touchMoved()
    {
      return 0;
    }

    __int64 __fastcall Sprite::touchCancelled(__int64 result, char a2)
    {
      _WORD *v3; // x19
      unsigned __int16 v4; // w8
      __int64 v5; // x21
    
      v3 = (_WORD *)result;
      v4 = *(_WORD *)(result + 90);
      if ( v4 )
      {
        v5 = 1;
        do
        {
          if ( (v4 & (unsigned __int16)(1 << v5)) != 0 )
          {
            result = (*(__int64 (__fastcall **)(_WORD *, __int64))(*(_QWORD *)v3 + 264LL))(v3, v5);
            v4 = v3[45];
          }
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (int)v5 <= 15 && v4 );
      }
      v3[44] &= ~(1 << a2);
      return result;
    }

    __int64 __fastcall Sprite::touchReleased(__int64 a1, __int64 a2)
    {
      *(_WORD *)(a1 + 88) &= ~(1 << *(_DWORD *)(a2 + 76));
      return 0;
    }

    __int64 __fastcall Sprite::touchPressed(_WORD *a1, __int64 a2)
    {
      __int64 v4; // x4
      __int64 v5; // x5
      __int64 v6; // x6
      __int64 v7; // x7
      char v9; // [xsp+0h] [xbp-30h]
    
      do
      {
        if ( (*(unsigned int (__fastcall **)(_WORD *, _QWORD))(*(_QWORD *)a1 + 192LL))(a1, *(unsigned int *)(a2 + 76))
          && (unsigned int)Assert::reportFormatted(
                             (__int64)"!isTouchPressed(t.id)",
                             (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Sprite.cpp",
                             347,
                             "Sprite::touchPressed called twice with same id without release or cancel",
                             v4,
                             v5,
                             v6,
                             v7,
                             v9) )
        {
          goto LABEL_7;
        }
      }
      while ( Assert::g_false );
      if ( (unsigned int)(*(_DWORD *)(a2 + 76) - 1) >= 0xF
        && (unsigned int)Assert::report(
                           (__int64)"t.id >= 1 && t.id < 16",
                           0,
                           (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Sprite.cpp",
                           348) )
      {
    LABEL_7:
        abort();
      }
      a1[44] |= 1 << *(_DWORD *)(a2 + 76);
      return 0;
    }

    __int64 __fastcall Sprite::render(
            __int64 a1,
            const DataLoaderShader *a2,
            unsigned __int8 *a3,
            unsigned int a4,
            long double a5)
    {
      __int16 v8; // w21
      int v9; // w20
      __int64 v10; // x22
      __int64 v11; // x24
      int v12; // w23
      _BYTE *v13; // x0
      __int64 v14; // x20
      _BYTE v16[8]; // [xsp+8h] [xbp-68h] BYREF
      _BYTE v17[28]; // [xsp+10h] [xbp-60h] BYREF
      unsigned int v18; // [xsp+2Ch] [xbp-44h] BYREF
    
      v18 = a4;
      v8 = *(_WORD *)(a1 + 66);
      *(_WORD *)(a1 + 66) = -1;
      Matrix2x3::Matrix2x3((Matrix2x3 *)v17, (const DataLoaderShader *)(a1 + 16), a2);
      ColorTransform::ColorTransform(v16, (unsigned __int8 *)(a1 + 9), a3, &v18);
      v9 = *(_DWORD *)(a1 + 40) & 0x1FF;
      v18 |= v9;
      v10 = *(unsigned __int16 *)(a1 + 70);
      if ( *(_WORD *)(a1 + 70) )
      {
        v11 = 0;
        v12 = 0;
        do
        {
          v13 = *(_BYTE **)(*(_QWORD *)(a1 + 72) + 8 * v11);
          if ( v13[8] )
            v12 |= (*(__int64 (__fastcall **)(_BYTE *, _BYTE *, _BYTE *, _QWORD, long double))(*(_QWORD *)v13 + 16LL))(
                     v13,
                     v17,
                     v16,
                     v18,
                     a5);
          ++v11;
        }
        while ( v11 < v10 );
        if ( (v12 & 1) != 0 )
          goto LABEL_9;
      }
      if ( *(_QWORD *)(a1 + 80) && (unsigned int)Sprite::hitAreaVisibleTest(a1, v17) )
      {
    LABEL_9:
        *(_DWORD *)(a1 + 40) = v18 & 0xFFFFFE00 | v9;
        v14 = 1;
      }
      else
      {
        v14 = 0;
      }
      *(_WORD *)(a1 + 66) = v8;
      ColorTransform::~ColorTransform();
      Matrix2x3::~Matrix2x3((DataLoaderShader *)v17);
      return v14;
    }

    __int64 __fastcall Sprite::hitAreaVisibleTest(Stage *a1, float *a2)
    {
      float *v2; // x8
      float v3; // s1
      float v4; // s2
      float v5; // s3
      float v6; // s5
      float v7; // s6
      float v8; // s7
      float v9; // s16
      float v10; // s17
      float v11; // s19
      float v12; // s20
      float v13; // s18
      float v14; // s0
      float v15; // s1
      float v16; // s21
      float v17; // s4
      float v18; // s17
      float v19; // s2
      float v20; // s1
      float v21; // s5
      float v22; // s18
      float v23; // s7
      float v24; // s4
      float v25; // s3
      float v26; // s2
      float v27; // s16
      float v28; // s16
      float v29; // s8
      float v30; // s9
      float v31; // s1
      float v32; // s0
      float v33; // s2
      float v34; // s10
      float v35; // s11
      MappedFile *Instance; // x0
    
      v2 = (float *)*((_QWORD *)a1 + 10);
      v3 = v2[1];
      v4 = v2[2];
      v5 = v2[3];
      v6 = a2[1];
      v7 = *v2 * *a2;
      v8 = a2[2];
      v9 = a2[3];
      v10 = v3 * v8;
      v11 = a2[4];
      v12 = a2[5];
      v13 = v11 + (float)(v7 + (float)(v3 * v8));
      v14 = *v2 * v6;
      v15 = v3 * v9;
      v16 = v12 + (float)(v14 + v15);
      v17 = v4 * *a2;
      v18 = v11 + (float)(v17 + v10);
      v19 = v4 * v6;
      v20 = v12 + (float)(v19 + v15);
      if ( v18 > v13 )
        v21 = v18;
      else
        v21 = v13;
      if ( v18 >= v13 )
        v18 = v13;
      else
        v21 = v13;
      if ( v20 > v16 )
        v22 = v20;
      else
        v22 = v16;
      if ( v20 >= v16 )
        v20 = v16;
      else
        v22 = v16;
      v23 = v5 * v8;
      v24 = v11 + (float)(v17 + v23);
      v25 = v5 * v9;
      v26 = v12 + (float)(v19 + v25);
      if ( v24 > v21 )
        v27 = v24;
      else
        v27 = v21;
      if ( v24 >= v18 )
      {
        v21 = v27;
        v24 = v18;
      }
      if ( v26 > v22 )
        v28 = v26;
      else
        v28 = v22;
      if ( v26 >= v20 )
        v29 = v28;
      else
        v29 = v22;
      if ( v26 >= v20 )
        v30 = v20;
      else
        v30 = v26;
      v31 = v11 + (float)(v7 + v23);
      v32 = v12 + (float)(v14 + v25);
      if ( v31 > v21 )
        v33 = v11 + (float)(v7 + v23);
      else
        v33 = v21;
      if ( v31 >= v24 )
        v34 = v33;
      else
        v34 = v21;
      if ( v31 >= v24 )
        v35 = v24;
      else
        v35 = v11 + (float)(v7 + v23);
      if ( v32 >= v30 )
      {
        if ( v32 > v29 )
          v29 = v32;
      }
      else
      {
        v30 = v32;
      }
      Instance = (MappedFile *)Stage::getInstance(a1);
      return Stage::isRectVisible(Instance, v35, v30, v34, v29);
    }

    __int64 __fastcall Sprite::collisionRender(__int64 a1, float *a2)
    {
      __int64 Instance; // x0
      __int64 v5; // x20
      __int16 v6; // w22
      float v7; // s0
      float v8; // s1
      float v9; // s2
      float v10; // s4
      float v11; // s3
      float v12; // s5
      float v13; // s0
      float v14; // s1
      float v15; // s0
      float v16; // s1
      int v17; // w21
      __int64 v18; // x21
      __int64 v19; // x23
      __int64 v20; // x24
      char v21; // w8
      _BYTE *v22; // x0
      float v24[6]; // [xsp+0h] [xbp-50h] BYREF
      __int64 v25; // [xsp+18h] [xbp-38h] BYREF
    
      if ( *(_BYTE *)(a1 + 64) )
      {
        Instance = Stage::getInstance((Stage *)a1);
        v5 = Instance;
        if ( (*(_DWORD *)(a1 + 40) & 0xFFFFFE00) == *(_DWORD *)(Instance + 32) )
        {
          v6 = *(_WORD *)(a1 + 66);
          *(_WORD *)(a1 + 66) = -1;
          v25 = a1;
          std::vector<Sprite *>::push_back(Instance + 8, &v25);
          Matrix2x3::Matrix2x3((Matrix2x3 *)v24, (const DataLoaderShader *)(a1 + 16), (const DataLoaderShader *)a2);
          v7 = *(float *)(a1 + 16);
          v8 = *(float *)(a1 + 20);
          v9 = *a2;
          v10 = a2[2];
          v24[0] = (float)(v7 * *a2) + (float)(v8 * v10);
          v11 = a2[1];
          v12 = a2[3];
          v24[1] = (float)(v7 * v11) + (float)(v8 * v12);
          v13 = *(float *)(a1 + 24);
          v14 = *(float *)(a1 + 28);
          v24[2] = (float)(v10 * v14) + (float)(v13 * v9);
          v24[3] = (float)(v12 * v14) + (float)(v13 * v11);
          v15 = *(float *)(a1 + 32);
          v16 = *(float *)(a1 + 36);
          v24[4] = a2[4] + (float)((float)(v9 * v15) + (float)(v16 * v10));
          v24[5] = a2[5] + (float)((float)(v11 * v15) + (float)(v16 * v12));
          if ( *(_QWORD *)(a1 + 80) )
          {
            v17 = Sprite::hitAreaTest(a1, v24);
            if ( (v17 & 1) == 0 && *(_QWORD *)(a1 + 80) && !*(_BYTE *)(a1 + 65) )
              goto LABEL_17;
          }
          else
          {
            v17 = 0;
          }
          v19 = *(unsigned __int16 *)(a1 + 70);
          if ( *(_WORD *)(a1 + 70) )
          {
            v20 = 0;
            v21 = v17;
            do
            {
              v22 = *(_BYTE **)(*(_QWORD *)(a1 + 72) + 8 * v20);
              if ( v22[8] )
                v21 = (*(__int64 (__fastcall **)(_BYTE *, float *))(*(_QWORD *)v22 + 24LL))(v22, v24) | v17;
              ++v20;
              v17 = v21 & 1;
            }
            while ( v20 < v19 );
          }
          if ( v17 )
          {
            v18 = 1;
    LABEL_18:
            *(_WORD *)(a1 + 66) = v6;
            Matrix2x3::~Matrix2x3((DataLoaderShader *)v24);
            return v18;
          }
    LABEL_17:
          v18 = 0;
          *(_QWORD *)(v5 + 16) -= 8LL;
          goto LABEL_18;
        }
      }
      return 0;
    }

    __int64 __fastcall Sprite::hitAreaTest(Stage *a1, float *a2)
    {
      float *v2; // x8
      float v3; // s1
      float v4; // s2
      float v5; // s3
      float v6; // s5
      float v7; // s6
      float v8; // s7
      float v9; // s16
      float v10; // s17
      float v11; // s19
      float v12; // s20
      float v13; // s18
      float v14; // s0
      float v15; // s1
      float v16; // s21
      float v17; // s4
      float v18; // s17
      float v19; // s2
      float v20; // s1
      float v21; // s5
      float v22; // s18
      float v23; // s7
      float v24; // s4
      float v25; // s3
      float v26; // s2
      float v27; // s16
      float v28; // s16
      float v29; // s8
      float v30; // s9
      float v31; // s1
      float v32; // s0
      float v33; // s2
      float v34; // s10
      float v35; // s11
      MappedFile *Instance; // x0
    
      v2 = (float *)*((_QWORD *)a1 + 10);
      v3 = v2[1];
      v4 = v2[2];
      v5 = v2[3];
      v6 = a2[1];
      v7 = *v2 * *a2;
      v8 = a2[2];
      v9 = a2[3];
      v10 = v3 * v8;
      v11 = a2[4];
      v12 = a2[5];
      v13 = v11 + (float)(v7 + (float)(v3 * v8));
      v14 = *v2 * v6;
      v15 = v3 * v9;
      v16 = v12 + (float)(v14 + v15);
      v17 = v4 * *a2;
      v18 = v11 + (float)(v17 + v10);
      v19 = v4 * v6;
      v20 = v12 + (float)(v19 + v15);
      if ( v18 > v13 )
        v21 = v18;
      else
        v21 = v13;
      if ( v18 >= v13 )
        v18 = v13;
      else
        v21 = v13;
      if ( v20 > v16 )
        v22 = v20;
      else
        v22 = v16;
      if ( v20 >= v16 )
        v20 = v16;
      else
        v22 = v16;
      v23 = v5 * v8;
      v24 = v11 + (float)(v17 + v23);
      v25 = v5 * v9;
      v26 = v12 + (float)(v19 + v25);
      if ( v24 > v21 )
        v27 = v24;
      else
        v27 = v21;
      if ( v24 >= v18 )
      {
        v21 = v27;
        v24 = v18;
      }
      if ( v26 > v22 )
        v28 = v26;
      else
        v28 = v22;
      if ( v26 >= v20 )
        v29 = v28;
      else
        v29 = v22;
      if ( v26 >= v20 )
        v30 = v20;
      else
        v30 = v26;
      v31 = v11 + (float)(v7 + v23);
      v32 = v12 + (float)(v14 + v25);
      if ( v31 > v21 )
        v33 = v11 + (float)(v7 + v23);
      else
        v33 = v21;
      if ( v31 >= v24 )
        v34 = v33;
      else
        v34 = v21;
      if ( v31 >= v24 )
        v35 = v24;
      else
        v35 = v11 + (float)(v7 + v23);
      if ( v32 >= v30 )
      {
        if ( v32 > v29 )
          v29 = v32;
      }
      else
      {
        v30 = v32;
      }
      Instance = (MappedFile *)Stage::getInstance(a1);
      return Stage::isRectVisibleInTouch(Instance, v35, v30, v34, v29);
    }

    unsigned __int16 *__fastcall Sprite::removeAllChildren(unsigned __int16 *this)
    {
      unsigned __int16 *v1; // x19
      __int64 v2; // x20
      int v3; // w8
    
      v1 = this;
      if ( *(this + 35) )
      {
        v2 = (unsigned int)*(this + 35) - 1;
        do
        {
          this = (unsigned __int16 *)(*(__int64 (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)v1 + 184LL))(
                                       v1,
                                       v2);
          if ( (_DWORD)v2 != v1[35] )
            Debugger::error(
              "Sprite::removeAllChildren(): removing child caused m_numChildren to change unexpectedly. Maybe triggered touch"
              " cancel events -> button cancel -> more children removed?");
          v3 = v2 + 1;
          v2 = (unsigned int)(v2 - 1);
        }
        while ( v3 > 1 );
      }
      return this;
    }

    bool __fastcall Sprite::isTouchInside(OutOfSyncMessage *this, float a2, float a3)
    {
      _BOOL8 v6; // x19
      Rect v8; // [xsp+0h] [xbp-30h] BYREF
      float v9; // [xsp+8h] [xbp-28h]
      float v10; // [xsp+Ch] [xbp-24h]
    
      if ( !*((_BYTE *)this + 64) )
        return 0;
      Rect::Rect(&v8);
      DisplayObject::getGlobalBounds(this, &v8);
      v6 = *(float *)&v8.top <= a2 && v9 >= a2 && *(float *)&v8.bottom <= a3 && v10 >= a3;
      Rect::~Rect(&v8);
      return v6;
    }

    __int64 __fastcall Sprite::setInteractiveRecursive(__int64 this, __int64 a2)
    {
      __int64 v3; // x20
      int v4; // w21
      __int64 v5; // x22
      __int64 v6; // x0
    
      v3 = this;
      *(_BYTE *)(this + 64) = a2;
      v4 = *(unsigned __int16 *)(this + 70);
      if ( *(_WORD *)(this + 70) )
      {
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 8 * v5);
          this = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 104LL))(v6, a2);
          ++v5;
        }
        while ( v4 != (_DWORD)v5 );
      }
      return this;
    }

    __int64 __fastcall Sprite::setVisibleRecursive(__int64 this, __int64 a2)
    {
      __int64 v3; // x20
      int v4; // w21
      __int64 v5; // x22
      __int64 v6; // x0
    
      v3 = this;
      *(_BYTE *)(this + 8) = a2;
      v4 = *(unsigned __int16 *)(this + 70);
      if ( *(_WORD *)(this + 70) )
      {
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 8 * v5);
          this = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 112LL))(v6, a2);
          ++v5;
        }
        while ( v4 != (_DWORD)v5 );
      }
      return this;
    }

    void __fastcall Sprite::setHitArea(OutOfSyncMessage *this, DataLoaderFlash *a2)
    {
      DataLoaderFlash *v4; // x21
    
      v4 = (DataLoaderFlash *)*((_QWORD *)this + 10);
      if ( v4 != a2 )
      {
        if ( v4 )
        {
          Rect::~Rect(*((_QWORD **)this + 10));
          operator delete(v4);
        }
        *((_QWORD *)this + 10) = a2;
      }
    }

    __int64 __fastcall Sprite::isSprite(OutOfSyncMessage *this)
    {
      return 1;
    }

    __int64 __fastcall Sprite::swapChildrenAt(__int64 this, int a2, int a3)
    {
      __int64 v3; // x8
      __int64 v4; // x9
      __int64 v5; // x10
    
      v3 = *(_QWORD *)(this + 72);
      v4 = *(_QWORD *)(v3 + 8LL * a2);
      v5 = *(_QWORD *)(v3 + 8LL * a3);
      *(_QWORD *)(v3 + 8LL * a2) = v5;
      *(_QWORD *)(*(_QWORD *)(this + 72) + 8LL * a3) = v4;
      *(_DWORD *)(v4 + 56) = a3;
      *(_DWORD *)(v5 + 56) = a2;
      return this;
    }

    bool __fastcall Sprite::wasVisibleLastFrame(OutOfSyncMessage *this)
    {
      __int64 Instance; // x0
    
      Instance = Stage::getInstance(this);
      return Instance && (*((_DWORD *)this + 10) & 0xFFFFFE00) == *(_DWORD *)(Instance + 32);
    }

    __int64 __fastcall Sprite::touchIn(
            __int64 result,
            int a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            __int64 a7,
            __int64 a8)
    {
      __int64 v9; // x19
      int v10; // w24
      char v11; // [xsp+0h] [xbp-40h]
    
      v9 = result;
      v10 = 1 << a2;
      do
      {
        if ( (*(_WORD *)(v9 + 90) & (unsigned __int16)v10) != 0 )
        {
          result = Assert::reportFormatted(
                     (__int64)"!isTouchIn(touchID)",
                     (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Sprite.cpp",
                     666,
                     "Sprite::touchIn id already found from list",
                     a5,
                     a6,
                     a7,
                     a8,
                     v11);
          if ( (_DWORD)result )
            goto LABEL_8;
        }
      }
      while ( Assert::g_false );
      if ( (unsigned int)(a2 - 1) >= 0xF )
      {
        result = Assert::report(
                   (__int64)"touchID >= 1 && touchID < 16",
                   0,
                   (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Sprite.cpp",
                   667);
        if ( (_DWORD)result )
    LABEL_8:
          abort();
      }
      *(_WORD *)(v9 + 90) |= v10;
      return result;
    }

    bool __fastcall Sprite::isTouchIn(__int64 a1, char a2)
    {
      return (*(unsigned __int16 *)(a1 + 90) & (1 << a2)) != 0;
    }

    __int64 __fastcall Sprite::touchOut(__int64 result, char a2)
    {
      *(_WORD *)(result + 90) &= ~(1 << a2);
      return result;
    }

    __int64 __fastcall Sprite::getTouchCount(__int64 a1)
    {
      return LogicMath::getBitsInInteger((NewsItem *)*(unsigned __int16 *)(a1 + 90));
    }

    __int64 __fastcall Sprite::getNumChildren(__int64 a1)
    {
      return *(unsigned __int16 *)(a1 + 70);
    }

}; // end class Sprite
