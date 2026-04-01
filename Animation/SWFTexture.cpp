class SWFTexture
{
public:

    __int64 __fastcall SWFTexture::SWFTexture(__int64 a1)
    {
      GLImage::GLImage(a1);
      *(_BYTE *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 56) = 0;
      return a1;
    }

    __int64 __fastcall SWFTexture::~SWFTexture(__int64 a1)
    {
      __int64 Instance; // x0
    
      Instance = Stage::getInstance();
      if ( Instance )
        Stage::textureDestructed(Instance, a1);
      *(_BYTE *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 56) = 0;
      GLImage::~GLImage(a1);
      return a1;
    }

    __int64 __fastcall SWFTexture::~SWFTexture(__int64 a1)
    {
      SWFTexture::~SWFTexture(a1);
      return a1;
    }

    __int64 __fastcall SWFTexture::load(
            __int64 a1,
            size_t a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int v8; // w23
      int v9; // w26
      int v10; // w27
      __int64 v13; // x1
      __int64 v14; // x2
      __int64 v15; // x3
      __int64 v16; // x4
      __int64 v17; // x5
      unsigned int v18; // w6
      int Short; // w21
      __int64 v20; // x1
      __int64 v21; // x2
      __int64 v22; // x3
      __int64 v23; // x4
      __int64 v24; // x5
      unsigned int v25; // w6
      int v26; // w22
      int v27; // w8
      GLenum v28; // w24
      GLenum v29; // w25
      const String *FileName; // x0
      int v31; // w8
      bool v32; // w11
      int v33; // w23
      GLsizei v34; // w10
      unsigned int *v35; // x26
      __int16 v36; // w28
      __int64 Mipmap; // x26
      __int64 Error; // x0
      GLint v39; // w23
      GLsizei v40; // w28
      GLsizei v41; // w27
      const char *v42; // x8
      __int64 v43; // x0
      const char *v44; // x8
      bool v46; // [xsp+38h] [xbp-118h]
      int v47; // [xsp+40h] [xbp-110h]
      int v48; // [xsp+44h] [xbp-10Ch]
      int UnsignedChar; // [xsp+48h] [xbp-108h]
      int v50; // [xsp+4Ch] [xbp-104h]
      String v51; // [xsp+50h] [xbp-100h] BYREF
      String v52; // [xsp+68h] [xbp-E8h] BYREF
      String v53; // [xsp+80h] [xbp-D0h] BYREF
      __int64 v54[3]; // [xsp+98h] [xbp-B8h] BYREF
      String v55; // [xsp+B0h] [xbp-A0h] BYREF
      _BYTE v56[24]; // [xsp+C8h] [xbp-88h] BYREF
      String v57; // [xsp+E0h] [xbp-70h] BYREF
      char v58; // [xsp+FFh] [xbp-51h] BYREF
    
      v8 = a6;
      v9 = a5;
      v10 = a4;
      v48 = a3;
      UnsignedChar = SupercellSWF::readUnsignedChar(a2, a2, a3, a4, a5, a6, a7);
      Short = SupercellSWF::readShort(a2, v13, v14, v15, v16, v17, v18);
      v26 = SupercellSWF::readShort(a2, v20, v21, v22, v23, v24, v25);
      v27 = UnsignedChar - 2;
      v47 = v8;
      if ( (unsigned int)(UnsignedChar - 2) > 8 )
      {
        v29 = 6408;
        v28 = 5121;
        v50 = 4;
      }
      else
      {
        v50 = dword_1003EC0B0[v27];
        v28 = dword_1003EC0E0[v27];
        v29 = dword_1003EC110[v27];
      }
      FileName = (const String *)SupercellSWF::getFileName(a2);
      GLImage::setFileName((String *)a1, FileName);
      if ( v10 == 19 )
        v31 = 2;
      else
        v31 = 1;
      if ( v10 == 16 )
        v31 = 2;
      v58 = 0;
      if ( v10 == 1 || (v32 = 0, v33 = Short, v34 = v26, v10 == 16) )
      {
        v34 = v26 >> 1;
        v32 = v9 != 0;
        v33 = v9 ? Short >> 1 : Short;
        if ( !v9 )
          v34 = v26;
      }
      v46 = v32;
      if ( *(_BYTE *)(a1 + 64) )
      {
        if ( a7
          && (*(_DWORD *)(a1 + 56) != UnsignedChar
           || *(_DWORD *)(a1 + 48) != v33
           || *(_DWORD *)(a1 + 52) != v34
           || *(_DWORD *)(a1 + 60) != v10) )
        {
          v35 = (unsigned int *)SupercellSWF::getFileName(a2);
          String::substring(v35, 0, *v35 - 3, (__int64)v56);
          operator+((__int64)v56, "_tex.sc", (__int64)&v57);
          String::~String((__int64)v56);
          operator+((__int64)v35, " and ", (__int64)&v53);
          operator+(v54, &v53, &v57);
          operator+((__int64)v54, " not in sync", (__int64)&v55);
          Debugger::error(&v55);
        }
        v36 = v34;
        GLImage::bind(a1);
      }
      else
      {
        *(_DWORD *)(a1 + 56) = UnsignedChar;
        *(_DWORD *)(a1 + 48) = v33;
        *(_DWORD *)(a1 + 52) = v34;
        *(_DWORD *)(a1 + 60) = v10;
        v36 = v34;
        GLImage::createWithFormat((_DWORD *)a1, v33, v34, v29, v28, 0, 1, v31, &v58);
      }
      if ( !v58 || (Mipmap = 0, v48 ^ 1) )
      {
        *(_BYTE *)(a1 + 64) = 1;
        if ( *(_QWORD *)(a2 + 16) && *(_BYTE *)(a2 + 24) )
        {
          SupercellSWF::cacheByte(a2, UnsignedChar);
          SupercellSWF::cacheShort(a2, v33);
          SupercellSWF::cacheShort(a2, v36);
        }
        if ( !v47 )
          return 1;
        SWFTexture::loadTexture((SWFTexture *)a1, (SupercellSWF *)a2, Short, v26, v46, 0, v50, v28, 0);
        if ( v10 == 16 )
        {
          Mipmap = GLImage::generateMipmap();
          if ( (Mipmap & 1) == 0 && (v48 & 1) == 0 )
          {
            glTexParameteri(0xDE1u, 0x2800u, 9729);
            Error = glGetError();
            if ( (int)Error > 1279 )
            {
              v42 = "GL_INVALID_OPERATION ";
              switch ( (int)Error )
              {
                case 1280:
                  v42 = "GL_INVALID_ENUM ";
                  goto LABEL_52;
                case 1281:
                  v42 = "GL_INVALID_VALUE ";
                  goto LABEL_52;
                case 1282:
                  goto LABEL_52;
                case 1285:
                  v42 = "GL_OUT_OF_MEMORY ";
                  goto LABEL_52;
                default:
                  goto LABEL_50;
              }
            }
            if ( (_DWORD)Error )
            {
    LABEL_50:
              v42 = "";
              if ( (_DWORD)Error == 1286 )
                v42 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_52:
              String::format(
                (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                (__int64)&v52,
                v42,
                Error,
                Error,
                164,
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/SWFTexture.cpp");
              Debugger::error(&v52);
            }
            glTexParameteri(0xDE1u, 0x2801u, 9729);
            v43 = glGetError();
            if ( (int)v43 > 1279 )
            {
              v44 = "GL_INVALID_OPERATION ";
              switch ( (int)v43 )
              {
                case 1280:
                  v44 = "GL_INVALID_ENUM ";
                  goto LABEL_60;
                case 1281:
                  v44 = "GL_INVALID_VALUE ";
                  goto LABEL_60;
                case 1282:
                  goto LABEL_60;
                case 1285:
                  v44 = "GL_OUT_OF_MEMORY ";
                  goto LABEL_60;
                default:
                  goto LABEL_58;
              }
            }
            if ( (_DWORD)v43 )
            {
    LABEL_58:
              v44 = "";
              if ( (_DWORD)v43 == 1286 )
                v44 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_60:
              String::format(
                (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                (__int64)&v51,
                v44,
                v43,
                v43,
                165,
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/SWFTexture.cpp");
              Debugger::error(&v51);
            }
            return 1;
          }
        }
        else
        {
          Mipmap = 1;
          if ( v10 == 19 )
          {
            v39 = 1;
            Mipmap = 1;
            do
            {
              if ( Short >> v39 )
                v40 = Short >> v39;
              else
                v40 = 1;
              if ( v26 >> v39 )
                v41 = v26 >> v39;
              else
                v41 = 1;
              GLImage::doGlTexImage2D((GLImage *)0xDE1, v39, v29, v40, v41, 0, v29, v28, 0);
              SWFTexture::loadTexture((SWFTexture *)a1, (SupercellSWF *)a2, v40, v41, 0, v39++, v50, v28, 0);
            }
            while ( v40 > 1 || v41 > 1 );
          }
        }
      }
      return Mipmap;
    }

    __int64 __fastcall SWFTexture::loadTexture(
            __int64 result,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            char a5,
            __int64 a6,
            int a7,
            __int64 a8,
            unsigned __int8 a9)
    {
      switch ( a7 )
      {
        case 1:
          if ( (a5 & 1) != 0 )
            return SWFTexture::loadDownscaledTexture<unsigned char>(result, a2, a3, a4, a6, a8, a9);
          else
            return SWFTexture::loadTexture<unsigned char>(result, a2, a3, a4, a6, a8, a9);
        case 2:
          if ( (a5 & 1) != 0 )
            return SWFTexture::loadDownscaledTexture<short>(result, a2, a3, a4, a6, a8, a9);
          else
            return SWFTexture::loadTexture<short>(result, a2, a3, a4, a6, a8, a9);
        case 4:
          if ( (a5 & 1) != 0 )
            return SWFTexture::loadDownscaledTexture<int>(result, a2, a3, a4, a6, a8, a9);
          else
            return SWFTexture::loadTexture<int>(result, a2, a3, a4, a6, a8, a9);
      }
      return result;
    }

    void SWFTexture::getGLImage()
    {
      ;
    }

    __n128 __fastcall SWFTexture::loadTexture<int>(
            AvatarRankingEntry *a1,
            size_t a2,
            GLsizei a3,
            int a4,
            GLint a5,
            GLenum a6,
            char a7)
    {
      int v10; // w20
      int v11; // w21
      unsigned __int64 v12; // x9
      __int64 v13; // x0
      __int64 v14; // x3
      __int64 v15; // x4
      __int64 v16; // x5
      unsigned int v17; // w6
      char *v18; // x26
      GLint v19; // w28
      int v20; // w19
      int v21; // w8
      int v22; // w25
      int v23; // w8
      GLsizei v24; // w20
      int v25; // w22
    
      v10 = a4 / 4;
      if ( (a4 & 3) != 0 )
        v11 = v10 + 1;
      else
        v11 = a4 / 4;
      v12 = v11 * a3;
      if ( is_mul_ok(v12, 4u) )
        v13 = 4 * v12;
      else
        v13 = -1;
      v18 = (char *)operator new[](v13);
      if ( a4 >= 1 )
      {
        v19 = 0;
        v20 = a4;
        if ( (a4 & 3) != 0 )
          v21 = v10 + 1;
        else
          v21 = v10;
        v22 = v21 - a4;
        do
        {
          v23 = v22 + v19;
          if ( v22 + v19 <= 0 )
            v23 = 0;
          v24 = v11 - v23;
          if ( (a7 & 1) != 0 )
            SupercellSWF::readCompressedIntArray(a2, (unsigned int)(v24 * a3), (__int64)v18, v14, v15, v16, v17);
          else
            SupercellSWF::readIntArray(a2, (unsigned int)(v24 * a3), v18, v14, v15, v16, v17);
          v25 = v19 + v11;
          GLImage::updateSubImage(a1, v18, 0, v19, a3, v24, a6, 0, a5);
          if ( *(_QWORD *)(a2 + 16) && *(_BYTE *)(a2 + 24) )
          {
            if ( (a7 & 1) != 0 )
              SupercellSWF::cacheCompressedIntArray(a2);
            else
              SupercellSWF::cacheIntArray(a2, v24 * a3, v18);
          }
          v19 += v11;
        }
        while ( v25 < v20 );
      }
      return operator delete[](v18);
    }

    void __fastcall SWFTexture::loadDownscaledTexture<int>(
            AvatarRankingEntry *a1,
            size_t a2,
            __int64 a3,
            int a4,
            GLint a5,
            __int64 a6,
            char a7)
    {
      int v11; // w22
      int v12; // w25
      int v13; // w26
      int v14; // w20
      unsigned __int64 v15; // x9
      __int64 v16; // x0
      char *v17; // x19
      GLint v18; // w27
      int v19; // w8
      int v20; // w26
      __int128 v21; // q0
      int v22; // w8
      GLsizei v23; // w28
      int v24; // w8
      __int64 v25; // x25
      __int64 v26; // x3
      __int64 v27; // x4
      __int64 v28; // x5
      unsigned int v29; // w6
      uint64_t NativeTime; // x22
      int v31; // w25
      uint64_t v32; // x0
      float PassedTimeMs; // s8
      __int64 v34; // x8
      int v35; // [xsp+8h] [xbp-B8h]
      int v36; // [xsp+Ch] [xbp-B4h]
      int v37; // [xsp+14h] [xbp-ACh]
      GLsizei v40; // [xsp+28h] [xbp-98h]
      __int128 v42; // [xsp+30h] [xbp-90h]
      String v43; // [xsp+48h] [xbp-78h] BYREF
    
      if ( (int)a3 >= 0 )
        v11 = a3;
      else
        v11 = a3 + 1;
      if ( a4 >= 0 )
        v12 = a4;
      else
        v12 = a4 + 1;
      v13 = a4 / 16;
      if ( ((v12 >> 1) & 7) != 0 )
        v14 = v13 + 1;
      else
        v14 = a4 / 16;
      v15 = 2 * (int)a3 * v14;
      if ( is_mul_ok(v15, 4u) )
        v16 = 4 * v15;
      else
        v16 = -1;
      v17 = (char *)operator new[](v16);
      if ( a4 < 2 )
      {
        v34 = 0;
      }
      else
      {
        v18 = 0;
        v40 = v11 >> 1;
        v37 = v12 >> 1;
        if ( ((v12 >> 1) & 7) != 0 )
          v19 = v13 + 1;
        else
          v19 = v13;
        v36 = 2 * v19;
        v20 = 2 * v19 - a4;
        v35 = v19 - (v12 >> 1);
        v21 = 0u;
        do
        {
          v42 = v21;
          v22 = v35 + v18;
          if ( v35 + v18 <= 0 )
            v22 = 0;
          v23 = v14 - v22;
          if ( v20 <= 0 )
            v24 = 0;
          else
            v24 = v20;
          v25 = (unsigned int)((2 * v14 - v24) * a3);
          NativeTime = xTimer::getNativeTime();
          if ( (a7 & 1) != 0 )
            SupercellSWF::readCompressedIntArray(a2, v25, (__int64)v17, v26, v27, v28, v29);
          else
            SupercellSWF::readIntArray(a2, v25, v17, v26, v27, v28, v29);
          v31 = v18 + v14;
          v32 = xTimer::getNativeTime();
          PassedTimeMs = xTimer::getPassedTimeMs(NativeTime, v32);
          downscaleTexture<int>(a6, a3, (unsigned int)(2 * v23), v17, v17);
          GLImage::updateSubImage(a1, v17, 0, v18, v40, v23, a6, 0, a5);
          if ( *(_QWORD *)(a2 + 16) && *(_BYTE *)(a2 + 24) )
          {
            if ( (a7 & 1) != 0 )
              SupercellSWF::cacheCompressedIntArray(a2);
            else
              SupercellSWF::cacheIntArray(a2, v23 * v40, v17);
          }
          v21 = v42;
          *(float *)&v21 = *(float *)&v42 + PassedTimeMs;
          v20 += v36;
          v18 += v14;
        }
        while ( v31 < v37 );
        v34 = (unsigned int)(int)*(float *)&v21;
      }
      String::format((String *)"   File reads %d ms", (__int64)&v43, v34);
      Debugger::print(&v43);
      String::~String((__int64)&v43);
      operator delete[](v17);
    }

    __n128 __fastcall SWFTexture::loadTexture<short>(
            AvatarRankingEntry *a1,
            size_t a2,
            GLsizei a3,
            int a4,
            GLint a5,
            GLenum a6,
            char a7)
    {
      int v11; // w20
      int v12; // w21
      __int64 v13; // x0
      __int64 v14; // x3
      __int64 v15; // x4
      __int64 v16; // x5
      unsigned int v17; // w6
      char *v18; // x26
      GLint v19; // w28
      int v20; // w25
      int v21; // w8
      int v22; // w8
      GLsizei v23; // w20
      __int64 v24; // x1
      int v25; // w22
      int v27; // [xsp+Ch] [xbp-64h]
    
      v11 = a4 / 4;
      if ( (a4 & 3) != 0 )
        v12 = v11 + 1;
      else
        v12 = a4 / 4;
      if ( __CFADD__(v12 * a3, v12 * a3) )
        v13 = -1;
      else
        v13 = 2LL * v12 * a3;
      v18 = (char *)operator new[](v13);
      if ( a4 >= 1 )
      {
        v19 = 0;
        v20 = a4;
        if ( (a4 & 3) != 0 )
          v21 = v11 + 1;
        else
          v21 = v11;
        v27 = v21 - a4;
        do
        {
          v22 = v27 + v19;
          if ( v27 + v19 <= 0 )
            v22 = 0;
          v23 = v12 - v22;
          v24 = (unsigned int)((v12 - v22) * a3);
          if ( (a7 & 1) != 0 )
            SupercellSWF::readCompressedShortArray(a2, v24, (__int64)v18, v14, v15, v16, v17);
          else
            SupercellSWF::readShortArray(a2, v24, v18, v14, v15, v16, v17);
          v25 = v19 + v12;
          GLImage::updateSubImage(a1, v18, 0, v19, a3, v23, a6, 0, a5);
          if ( *(_QWORD *)(a2 + 16) && *(_BYTE *)(a2 + 24) )
          {
            if ( (a7 & 1) != 0 )
              SupercellSWF::cacheCompressedShortArray(a2);
            else
              SupercellSWF::cacheShortArray(a2, v23 * a3, v18);
          }
          v19 += v12;
        }
        while ( v25 < v20 );
      }
      return operator delete[](v18);
    }

    void __fastcall SWFTexture::loadDownscaledTexture<short>(
            AvatarRankingEntry *a1,
            size_t a2,
            __int64 a3,
            int a4,
            GLint a5,
            __int64 a6,
            char a7)
    {
      int v11; // w22
      int v12; // w25
      int v13; // w26
      int v14; // w20
      __int64 v15; // x0
      char *v16; // x19
      GLint v17; // w27
      int v18; // w8
      int v19; // w26
      __int128 v20; // q0
      int v21; // w8
      GLsizei v22; // w28
      int v23; // w8
      __int64 v24; // x25
      __int64 v25; // x3
      __int64 v26; // x4
      __int64 v27; // x5
      unsigned int v28; // w6
      uint64_t NativeTime; // x22
      int v30; // w25
      uint64_t v31; // x0
      float PassedTimeMs; // s8
      __int64 v33; // x8
      int v34; // [xsp+8h] [xbp-B8h]
      int v35; // [xsp+Ch] [xbp-B4h]
      int v36; // [xsp+14h] [xbp-ACh]
      GLsizei v39; // [xsp+28h] [xbp-98h]
      __int128 v41; // [xsp+30h] [xbp-90h]
      String v42; // [xsp+48h] [xbp-78h] BYREF
    
      if ( (int)a3 >= 0 )
        v11 = a3;
      else
        v11 = a3 + 1;
      if ( a4 >= 0 )
        v12 = a4;
      else
        v12 = a4 + 1;
      v13 = a4 / 16;
      if ( ((v12 >> 1) & 7) != 0 )
        v14 = v13 + 1;
      else
        v14 = a4 / 16;
      if ( __CFADD__(2 * (int)a3 * v14, 2 * (int)a3 * v14) )
        v15 = -1;
      else
        v15 = 4LL * (int)a3 * v14;
      v16 = (char *)operator new[](v15);
      if ( a4 < 2 )
      {
        v33 = 0;
      }
      else
      {
        v17 = 0;
        v39 = v11 >> 1;
        v36 = v12 >> 1;
        if ( ((v12 >> 1) & 7) != 0 )
          v18 = v13 + 1;
        else
          v18 = v13;
        v35 = 2 * v18;
        v19 = 2 * v18 - a4;
        v34 = v18 - (v12 >> 1);
        v20 = 0u;
        do
        {
          v41 = v20;
          v21 = v34 + v17;
          if ( v34 + v17 <= 0 )
            v21 = 0;
          v22 = v14 - v21;
          if ( v19 <= 0 )
            v23 = 0;
          else
            v23 = v19;
          v24 = (unsigned int)((2 * v14 - v23) * a3);
          NativeTime = xTimer::getNativeTime();
          if ( (a7 & 1) != 0 )
            SupercellSWF::readCompressedShortArray(a2, v24, (__int64)v16, v25, v26, v27, v28);
          else
            SupercellSWF::readShortArray(a2, v24, v16, v25, v26, v27, v28);
          v30 = v17 + v14;
          v31 = xTimer::getNativeTime();
          PassedTimeMs = xTimer::getPassedTimeMs(NativeTime, v31);
          downscaleTexture<short>(a6, a3, (unsigned int)(2 * v22), v16, v16);
          GLImage::updateSubImage(a1, v16, 0, v17, v39, v22, a6, 0, a5);
          if ( *(_QWORD *)(a2 + 16) && *(_BYTE *)(a2 + 24) )
          {
            if ( (a7 & 1) != 0 )
              SupercellSWF::cacheCompressedShortArray(a2);
            else
              SupercellSWF::cacheShortArray(a2, v22 * v39, v16);
          }
          v20 = v41;
          *(float *)&v20 = *(float *)&v41 + PassedTimeMs;
          v19 += v35;
          v17 += v14;
        }
        while ( v30 < v36 );
        v33 = (unsigned int)(int)*(float *)&v20;
      }
      String::format((String *)"   File reads %d ms", (__int64)&v42, v33);
      Debugger::print(&v42);
      String::~String((__int64)&v42);
      operator delete[](v16);
    }

    __n128 __fastcall SWFTexture::loadTexture<unsigned char>(
            AvatarRankingEntry *a1,
            size_t a2,
            GLsizei a3,
            int a4,
            GLint a5,
            GLenum a6,
            char a7)
    {
      int v11; // w20
      int v12; // w21
      __int64 v13; // x0
      __int64 v14; // x3
      __int64 v15; // x4
      __int64 v16; // x5
      unsigned int v17; // w6
      char *v18; // x26
      GLint v19; // w28
      int v20; // w25
      int v21; // w8
      int v22; // w8
      GLsizei v23; // w20
      __int64 v24; // x1
      int v25; // w22
      int v27; // [xsp+Ch] [xbp-64h]
    
      v11 = a4 / 4;
      if ( (a4 & 3) != 0 )
        v12 = v11 + 1;
      else
        v12 = a4 / 4;
      if ( v12 * a3 < 0LL )
        v13 = -1;
      else
        v13 = v12 * a3;
      v18 = (char *)operator new[](v13);
      if ( a4 >= 1 )
      {
        v19 = 0;
        v20 = a4;
        if ( (a4 & 3) != 0 )
          v21 = v11 + 1;
        else
          v21 = v11;
        v27 = v21 - a4;
        do
        {
          v22 = v27 + v19;
          if ( v27 + v19 <= 0 )
            v22 = 0;
          v23 = v12 - v22;
          v24 = (unsigned int)((v12 - v22) * a3);
          if ( (a7 & 1) != 0 )
            SupercellSWF::readCompressedByteArray(a2, v24, (__int64)v18, v14, v15, v16, v17);
          else
            SupercellSWF::readByteArray((jpeg_decoder_file_stream *)a2, v24, v18, v14, v15, v16, v17);
          v25 = v19 + v12;
          GLImage::updateSubImage(a1, v18, 0, v19, a3, v23, a6, 0, a5);
          if ( *(_QWORD *)(a2 + 16) && *(_BYTE *)(a2 + 24) )
          {
            if ( (a7 & 1) != 0 )
              SupercellSWF::cacheCompressedByteArray(a2);
            else
              SupercellSWF::cacheByteArray(a2, v23 * a3, v18);
          }
          v19 += v12;
        }
        while ( v25 < v20 );
      }
      return operator delete[](v18);
    }

    void __fastcall SWFTexture::loadDownscaledTexture<unsigned char>(
            AvatarRankingEntry *a1,
            size_t a2,
            __int64 a3,
            int a4,
            GLint a5,
            __int64 a6,
            char a7)
    {
      int v11; // w22
      int v12; // w25
      int v13; // w26
      int v14; // w20
      __int64 v15; // x0
      char *v16; // x19
      GLint v17; // w27
      int v18; // w8
      int v19; // w26
      __int128 v20; // q0
      int v21; // w8
      GLsizei v22; // w28
      int v23; // w8
      __int64 v24; // x25
      __int64 v25; // x3
      __int64 v26; // x4
      __int64 v27; // x5
      unsigned int v28; // w6
      uint64_t NativeTime; // x22
      int v30; // w25
      uint64_t v31; // x0
      float PassedTimeMs; // s8
      __int64 v33; // x8
      int v34; // [xsp+8h] [xbp-B8h]
      int v35; // [xsp+Ch] [xbp-B4h]
      int v36; // [xsp+14h] [xbp-ACh]
      GLsizei v39; // [xsp+28h] [xbp-98h]
      __int128 v41; // [xsp+30h] [xbp-90h]
      String v42; // [xsp+48h] [xbp-78h] BYREF
    
      if ( (int)a3 >= 0 )
        v11 = a3;
      else
        v11 = a3 + 1;
      if ( a4 >= 0 )
        v12 = a4;
      else
        v12 = a4 + 1;
      v13 = a4 / 16;
      if ( ((v12 >> 1) & 7) != 0 )
        v14 = v13 + 1;
      else
        v14 = a4 / 16;
      if ( v14 * (int)a3 >= 0 )
        v15 = 2 * v14 * (int)a3;
      else
        v15 = -1;
      v16 = (char *)operator new[](v15);
      if ( a4 < 2 )
      {
        v33 = 0;
      }
      else
      {
        v17 = 0;
        v39 = v11 >> 1;
        v36 = v12 >> 1;
        if ( ((v12 >> 1) & 7) != 0 )
          v18 = v13 + 1;
        else
          v18 = v13;
        v35 = 2 * v18;
        v19 = 2 * v18 - a4;
        v34 = v18 - (v12 >> 1);
        v20 = 0u;
        do
        {
          v41 = v20;
          v21 = v34 + v17;
          if ( v34 + v17 <= 0 )
            v21 = 0;
          v22 = v14 - v21;
          if ( v19 <= 0 )
            v23 = 0;
          else
            v23 = v19;
          v24 = (unsigned int)((2 * v14 - v23) * a3);
          NativeTime = xTimer::getNativeTime();
          if ( (a7 & 1) != 0 )
            SupercellSWF::readCompressedByteArray(a2, v24, (__int64)v16, v25, v26, v27, v28);
          else
            SupercellSWF::readByteArray((jpeg_decoder_file_stream *)a2, v24, v16, v25, v26, v27, v28);
          v30 = v17 + v14;
          v31 = xTimer::getNativeTime();
          PassedTimeMs = xTimer::getPassedTimeMs(NativeTime, v31);
          downscaleTexture<unsigned char>(a6, a3, (unsigned int)(2 * v22), v16, v16);
          GLImage::updateSubImage(a1, v16, 0, v17, v39, v22, a6, 0, a5);
          if ( *(_QWORD *)(a2 + 16) && *(_BYTE *)(a2 + 24) )
          {
            if ( (a7 & 1) != 0 )
              SupercellSWF::cacheCompressedByteArray(a2);
            else
              SupercellSWF::cacheByteArray(a2, v22 * v39, v16);
          }
          v20 = v41;
          *(float *)&v20 = *(float *)&v41 + PassedTimeMs;
          v19 += v35;
          v17 += v14;
        }
        while ( v30 < v36 );
        v33 = (unsigned int)(int)*(float *)&v20;
      }
      String::format((String *)"   File reads %d ms", (__int64)&v42, v33);
      Debugger::print(&v42);
      String::~String((__int64)&v42);
      operator delete[](v16);
    }

}; // end class SWFTexture
