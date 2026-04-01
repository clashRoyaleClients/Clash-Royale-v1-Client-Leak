class GLImage
{
public:

    __int64 __fastcall GLImage::GLImage(__int64 a1)
    {
      __int64 v2; // x20
    
      v2 = a1 + 24;
      String::String((String *)(a1 + 24));
      String::operator=(v2, "");
      *(_WORD *)a1 = 0;
      *(_QWORD *)(a1 + 12) = 0;
      *(_QWORD *)(a1 + 4) = 0;
      return a1;
    }

    __int64 __fastcall GLImage::GLImage(__int64 a1)
    {
      GLImage::GLImage(a1);
      return a1;
    }

    __int64 __fastcall GLImage::~GLImage(__int64 a1)
    {
      Stage *v2; // x0
      Stage *Instance; // x0
      __int64 v4; // x0
    
      v2 = (Stage *)GLImage::purge((GLImage *)a1);
      Instance = (Stage *)Stage::getInstance(v2);
      if ( Instance )
      {
        v4 = Stage::getInstance(Instance);
        Stage::validateBuckets(v4, a1);
      }
      String::operator=(a1 + 24, "");
      *(_WORD *)a1 = 0;
      *(_QWORD *)(a1 + 12) = 0;
      *(_QWORD *)(a1 + 4) = 0;
      String::~String();
      return a1;
    }

    __int64 __fastcall GLImage::purge(__int64 result)
    {
      const GLuint *v1; // x19
      __int64 Error; // x0
      const char *v3; // x1
      const char *v4; // x8
      const String *v5; // x1
      _BYTE v6[24]; // [xsp+28h] [xbp-28h] BYREF
    
      v1 = (const GLuint *)(result + 12);
      if ( *(_DWORD *)(result + 12) )
      {
        glDeleteTextures(1, v1);
        Error = glGetError();
        if ( (int)Error > 1279 )
        {
          v4 = "GL_INVALID_OPERATION ";
          switch ( (int)Error )
          {
            case 1280:
              v4 = "GL_INVALID_ENUM ";
              goto LABEL_9;
            case 1281:
              v4 = "GL_INVALID_VALUE ";
              goto LABEL_9;
            case 1282:
              goto LABEL_9;
            case 1285:
              v4 = "GL_OUT_OF_MEMORY ";
              goto LABEL_9;
            default:
              goto LABEL_7;
          }
        }
        if ( (_DWORD)Error )
        {
    LABEL_7:
          v4 = "";
          if ( (_DWORD)Error == 1286 )
            v4 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_9:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v3,
            v4,
            Error,
            Error,
            56,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
          Debugger::error((Debugger *)v6, v5);
        }
        result = DebugPerformanceHud::delGenID(0, *v1);
        *v1 = 0;
      }
      return result;
    }

    __int64 __fastcall GLImage::~GLImage(__int64 a1)
    {
      GLImage::~GLImage(a1);
      return a1;
    }

    __int64 __fastcall GLImage::create(__int64 a1, const char *a2, __int64 a3, __int64 a4)
    {
      xTimer *NativeTime; // x21
      const char *v9; // x1
      __int64 v10; // x0
      int v11; // w24
      unsigned int *v12; // x23
      int v13; // w24
      GLint v14; // w24
      GLint v15; // w22
      GLint v16; // w23
      const String *v17; // x1
      const char *v18; // x1
      MappedFile *v19; // x23
      const String *v20; // x1
      const String *v21; // x1
      double v22; // d0
      const char *v23; // x1
      const String *v24; // x1
      unsigned __int64 *pad; // x0
      const char *v27; // x1
      __int64 Size; // x0
      __int64 v29; // x23
      void *v30; // x24
      const String *v31; // x1
      int *v32; // x24
      GLsizei *v33; // x25
      __int64 v34; // x0
      void *pixels; // x23
      GLenum v36; // w26
      int v37; // w9
      __int64 i; // x8
      _BYTE *v39; // x11
      int v40; // w13
      int v41; // w15
      unsigned int v42; // w14
      double v43; // d0
      const char *v44; // x1
      const String *v45; // x1
      __int64 Error; // x0
      const char *v47; // x1
      const char *v48; // x8
      const String *v49; // x1
      __int64 v50; // x0
      const char *v51; // x1
      const char *v52; // x8
      const String *v53; // x1
      __int64 v54; // x0
      const char *v55; // x1
      const char *v56; // x8
      const String *v57; // x1
      __int64 v58; // x0
      const char *v59; // x1
      const char *v60; // x8
      const String *v61; // x1
      __int64 v62; // x0
      const char *v63; // x1
      const String *v64; // x1
      int v65; // w9
      int v66; // w8
      int v67; // w9
      _BYTE *v68; // x10
      unsigned __int8 *v69; // x11
      __int16 v70; // w12
      __int64 v71; // x0
      const char *v72; // x1
      const char *v73; // x8
      const String *v74; // x1
      GLint v75; // w27
      GLint v76; // w28
      __int64 v77; // x0
      const char *v78; // x1
      const char *v79; // x8
      const String *v80; // x1
      __int64 v81; // x0
      const char *v82; // x1
      const char *v83; // x8
      const String *v84; // x1
      __int64 v85; // x0
      const char *v86; // x1
      const char *v87; // x8
      const String *v88; // x1
      GLImage *v89; // x0
      const char *v90; // x1
      const char *v91; // x8
      const String *v92; // x1
      GLImage *v93; // x0
      uint64_t v94; // x0
      unsigned __int64 v95; // x2
      long double PassedTimeMs; // q0
      const char *v97; // x1
      const String *v98; // x1
      GLint param; // [xsp+38h] [xbp-228h]
      GLenum v100; // [xsp+3Ch] [xbp-224h]
      _BYTE v101[24]; // [xsp+40h] [xbp-220h] BYREF
      _BYTE v102[24]; // [xsp+58h] [xbp-208h] BYREF
      _BYTE v103[24]; // [xsp+70h] [xbp-1F0h] BYREF
      _BYTE v104[24]; // [xsp+88h] [xbp-1D8h] BYREF
      _BYTE v105[24]; // [xsp+A0h] [xbp-1C0h] BYREF
      _BYTE v106[24]; // [xsp+B8h] [xbp-1A8h] BYREF
      __siginfo v107; // [xsp+D0h] [xbp-190h] BYREF
      _BYTE v108[24]; // [xsp+140h] [xbp-120h] BYREF
      _BYTE v109[24]; // [xsp+158h] [xbp-108h] BYREF
      _BYTE v110[24]; // [xsp+170h] [xbp-F0h] BYREF
      _BYTE v111[24]; // [xsp+188h] [xbp-D8h] BYREF
      _BYTE v112[4]; // [xsp+1A0h] [xbp-C0h] BYREF
      int v113; // [xsp+1A4h] [xbp-BCh]
      int v114; // [xsp+1A8h] [xbp-B8h]
      __siginfo v115; // [xsp+1D8h] [xbp-88h] BYREF
    
      NativeTime = (xTimer *)xTimer::getNativeTime();
      GLImage::purge(a1);
      String::operator=(a1 + 24, a2);
      if ( strstr(a2, ".pvr") )
      {
        TitanInputFile::TitanInputFile((TitanInputFile *)v115.__pad, a2, "rb");
        if ( TitanInputFile::isOpen((LogicBuyResourcesCommand *)v115.__pad) )
        {
          LODWORD(v10) = TitanInputFile::getSize((FILE **)v115.__pad);
          v11 = v10;
          if ( (int)v10 < 0LL )
            v10 = -1;
          else
            v10 = (int)v10;
          v12 = (unsigned int *)operator new[](v10);
          if ( (unsigned int)TitanInputFile::read((FILE **)v115.__pad, v12, 1, v11) == v11 )
          {
            TitanInputFile::close((FILE **)v115.__pad);
            v13 = PVRTTextureLoadFromPointer(v12, (GLuint *)(a1 + 12), (__int64)v112, 1, 0, 0, 0);
            operator delete[](v12);
            if ( !v13 )
            {
              GLImage::bind((GLImage *)a1);
              if ( (_DWORD)a3 )
                v14 = 33071;
              else
                v14 = 10497;
              if ( (unsigned int)(a4 - 1) > 2 )
              {
                v16 = 9728;
                v15 = 9728;
              }
              else
              {
                v15 = dword_1003EB068[(int)a4 - 1];
                v16 = 9729;
              }
              glTexParameteri(0xDE1u, 0x2802u, v14);
              Error = glGetError();
              if ( (int)Error > 1279 )
              {
                v48 = "GL_INVALID_OPERATION ";
                switch ( (int)Error )
                {
                  case 1280:
                    v48 = "GL_INVALID_ENUM ";
                    goto LABEL_45;
                  case 1281:
                    v48 = "GL_INVALID_VALUE ";
                    goto LABEL_45;
                  case 1282:
                    goto LABEL_45;
                  case 1285:
                    v48 = "GL_OUT_OF_MEMORY ";
                    goto LABEL_45;
                  default:
                    goto LABEL_43;
                }
              }
              if ( (_DWORD)Error )
              {
    LABEL_43:
                v48 = "";
                if ( (_DWORD)Error == 1286 )
                  v48 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_45:
                String::format(
                  (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                  v47,
                  v48,
                  Error,
                  Error,
                  174,
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
                Debugger::error((Debugger *)v111, v49);
              }
              glTexParameteri(0xDE1u, 0x2803u, v14);
              v50 = glGetError();
              if ( (int)v50 > 1279 )
              {
                v52 = "GL_INVALID_OPERATION ";
                switch ( (int)v50 )
                {
                  case 1280:
                    v52 = "GL_INVALID_ENUM ";
                    goto LABEL_53;
                  case 1281:
                    v52 = "GL_INVALID_VALUE ";
                    goto LABEL_53;
                  case 1282:
                    goto LABEL_53;
                  case 1285:
                    v52 = "GL_OUT_OF_MEMORY ";
                    goto LABEL_53;
                  default:
                    goto LABEL_51;
                }
              }
              if ( (_DWORD)v50 )
              {
    LABEL_51:
                v52 = "";
                if ( (_DWORD)v50 == 1286 )
                  v52 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_53:
                String::format(
                  (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                  v51,
                  v52,
                  v50,
                  v50,
                  175,
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
                Debugger::error((Debugger *)v110, v53);
              }
              glTexParameteri(0xDE1u, 0x2800u, v16);
              v54 = glGetError();
              if ( (int)v54 > 1279 )
              {
                v56 = "GL_INVALID_OPERATION ";
                switch ( (int)v54 )
                {
                  case 1280:
                    v56 = "GL_INVALID_ENUM ";
                    goto LABEL_61;
                  case 1281:
                    v56 = "GL_INVALID_VALUE ";
                    goto LABEL_61;
                  case 1282:
                    goto LABEL_61;
                  case 1285:
                    v56 = "GL_OUT_OF_MEMORY ";
                    goto LABEL_61;
                  default:
                    goto LABEL_59;
                }
              }
              if ( (_DWORD)v54 )
              {
    LABEL_59:
                v56 = "";
                if ( (_DWORD)v54 == 1286 )
                  v56 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_61:
                String::format(
                  (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                  v55,
                  v56,
                  v54,
                  v54,
                  177,
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
                Debugger::error((Debugger *)v109, v57);
              }
              glTexParameteri(0xDE1u, 0x2801u, v15);
              v58 = glGetError();
              if ( (int)v58 > 1279 )
              {
                v60 = "GL_INVALID_OPERATION ";
                switch ( (int)v58 )
                {
                  case 1280:
                    v60 = "GL_INVALID_ENUM ";
                    goto LABEL_69;
                  case 1281:
                    v60 = "GL_INVALID_VALUE ";
                    goto LABEL_69;
                  case 1282:
                    goto LABEL_69;
                  case 1285:
                    v60 = "GL_OUT_OF_MEMORY ";
                    goto LABEL_69;
                  default:
                    goto LABEL_67;
                }
              }
              if ( (_DWORD)v58 )
              {
    LABEL_67:
                v60 = "";
                if ( (_DWORD)v58 == 1286 )
                  v60 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_69:
                String::format(
                  (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                  v59,
                  v60,
                  v58,
                  v58,
                  178,
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
                Debugger::error((Debugger *)v108, v61);
              }
              *(_DWORD *)(a1 + 4) = v114;
              *(_DWORD *)(a1 + 8) = v113;
              TitanInputFile::~TitanInputFile((FILE **)v115.__pad);
              goto LABEL_128;
            }
          }
          else
          {
            *(_QWORD *)&v22 = operator delete[](v12).n128_u64[0];
            String::format((String *)"GLImage: error reading file '%s'!", v23, v22, a2);
            Debugger::warning(&v115, v24);
            String::~String();
            TitanInputFile::close((FILE **)v115.__pad);
          }
        }
        else
        {
          String::format((String *)"GLImage: Could not load file '%s'", v9, a2);
          Debugger::warning((__siginfo *)&v115.si_addr, v21);
          String::~String();
        }
        pad = v115.__pad;
    LABEL_20:
        TitanInputFile::~TitanInputFile((FILE **)pad);
        return 0;
      }
      if ( strstr(a2, ".pkm") || strstr(a2, ".ktx") )
      {
        v19 = (MappedFile *)MappedFile::map((MappedFile *)(a1 + 24), v17);
        if ( v19 )
        {
          String::format((String *)"Using MappedFile to load %s", v18, a2);
          Debugger::print((Debugger *)&v107.__pad[5], v20);
          String::~String();
          GLImage::create(a1, *(_QWORD *)v19, *((unsigned int *)v19 + 2), a3, a4);
          MappedFile::~MappedFile(v19);
          operator delete(v19);
        }
        else
        {
          TitanInputFile::TitanInputFile((TitanInputFile *)&v107.__pad[4], a2, "rb");
          if ( !TitanInputFile::isOpen((LogicBuyResourcesCommand *)&v107.__pad[4]) )
          {
            String::format((String *)"GLImage: Could not load image file '%s'", v27, a2);
            Debugger::error((Debugger *)&v107.__pad[1], v31);
          }
          Size = TitanInputFile::getSize((FILE **)&v107.__pad[4]);
          v29 = Size;
          if ( (int)Size < 0LL )
            Size = -1;
          else
            Size = (int)Size;
          v30 = (void *)operator new[](Size);
          if ( (unsigned int)TitanInputFile::read((FILE **)&v107.__pad[4], v30, 1, v29) != (_DWORD)v29 )
          {
            *(_QWORD *)&v43 = operator delete[](v30).n128_u64[0];
            String::format((String *)"GLImage: error reading image file '%s'!", v44, v43, a2);
            Debugger::warning((__siginfo *)&v107.si_value, v45);
            String::~String();
            TitanInputFile::close((FILE **)&v107.__pad[4]);
            pad = &v107.__pad[4];
            goto LABEL_20;
          }
          TitanInputFile::close((FILE **)&v107.__pad[4]);
          TitanInputFile::~TitanInputFile((FILE **)&v107.__pad[4]);
          GLImage::create(a1, v30, v29, a3, a4);
          operator delete[](v30);
        }
      }
      else
      {
        HIDWORD(v107.si_addr) = 0;
        v32 = (int *)(a1 + 4);
        v33 = (GLsizei *)(a1 + 8);
        v34 = stbi_load(a2, a1 + 4, a1 + 8, (char *)&v107.si_addr + 4, 0);
        pixels = (void *)v34;
        if ( !v34 )
        {
          v62 = stbi_failure_reason();
          String::format((String *)"Could not load file '%s': %s\n", v63, a2, v62);
          Debugger::warning(&v107, v64);
          String::~String();
          return 0;
        }
        if ( (unsigned int)(HIDWORD(v107.si_addr) - 1) > 3 )
        {
          v36 = 6407;
        }
        else
        {
          v36 = dword_1003EB080[HIDWORD(v107.si_addr) - 1];
          if ( HIDWORD(v107.si_addr) == 4 )
          {
            if ( *(_BYTE *)(a1 + 1) )
            {
              v37 = 4 * *v32 * *v33;
              if ( v37 >= 1 )
              {
                for ( i = 0; i < v37; i += 4 )
                {
                  v39 = (_BYTE *)(v34 + i);
                  v40 = *(unsigned __int8 *)(v34 + i + 3);
                  v41 = *(unsigned __int8 *)(v34 + i + 2);
                  v42 = v40 * (unsigned int)*(unsigned __int8 *)(v34 + i + 1) / 0xFF;
                  *v39 = v40 * (unsigned int)*(unsigned __int8 *)(v34 + i) / 0xFF;
                  v39[1] = v42;
                  v39[2] = v40 * v41 / 0xFFu;
                }
              }
            }
          }
        }
        v65 = 5121;
        if ( *(_BYTE *)a1 && v36 - 6407 <= 1 )
        {
          v66 = *v33 * *v32 * HIDWORD(v107.si_addr);
          if ( v66 >= 1 )
          {
            v67 = 0;
            v68 = (_BYTE *)(v34 + 1);
            do
            {
              v69 = (unsigned __int8 *)(v34 + v67);
              v70 = (*v69 << 8) & 0xF800 | (8 * v69[1]) & 0x7FF;
              *(v68 - 1) = (v69[2] >> 3) & 0x1F | (32 * ((v69[1] >> 2) & 0x3F));
              *v68 = HIBYTE(v70);
              v67 += HIDWORD(v107.si_addr);
              v68 += 2;
            }
            while ( v67 < v66 );
          }
          v36 = 6407;
          v65 = 33635;
        }
        v100 = v65;
        *(_DWORD *)(a1 + 16) = v36;
        glGenTextures(1, (GLuint *)(a1 + 12));
        v71 = glGetError();
        if ( (int)v71 > 1279 )
        {
          v73 = "GL_INVALID_OPERATION ";
          switch ( (int)v71 )
          {
            case 1280:
              v73 = "GL_INVALID_ENUM ";
              goto LABEL_86;
            case 1281:
              v73 = "GL_INVALID_VALUE ";
              goto LABEL_86;
            case 1282:
              goto LABEL_86;
            case 1285:
              v73 = "GL_OUT_OF_MEMORY ";
              goto LABEL_86;
            default:
              goto LABEL_84;
          }
        }
        if ( (_DWORD)v71 )
        {
    LABEL_84:
          v73 = "";
          if ( (_DWORD)v71 == 1286 )
            v73 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_86:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v72,
            v73,
            v71,
            v71,
            413,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
          Debugger::error((Debugger *)v106, v74);
        }
        DebugPerformanceHud::addGenID(0, *(unsigned int *)(a1 + 12));
        GLImage::bind((GLImage *)a1);
        if ( (_DWORD)a3 )
          v75 = 33071;
        else
          v75 = 10497;
        if ( (unsigned int)(a4 - 1) > 2 )
        {
          param = 9728;
          v76 = 9728;
        }
        else
        {
          param = dword_1003EB068[(int)a4 - 1];
          v76 = 9729;
        }
        glTexParameteri(0xDE1u, 0x2802u, v75);
        v77 = glGetError();
        if ( (int)v77 > 1279 )
        {
          v79 = "GL_INVALID_OPERATION ";
          switch ( (int)v77 )
          {
            case 1280:
              v79 = "GL_INVALID_ENUM ";
              goto LABEL_100;
            case 1281:
              v79 = "GL_INVALID_VALUE ";
              goto LABEL_100;
            case 1282:
              goto LABEL_100;
            case 1285:
              v79 = "GL_OUT_OF_MEMORY ";
              goto LABEL_100;
            default:
              goto LABEL_98;
          }
        }
        if ( (_DWORD)v77 )
        {
    LABEL_98:
          v79 = "";
          if ( (_DWORD)v77 == 1286 )
            v79 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_100:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v78,
            v79,
            v77,
            v77,
            444,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
          Debugger::error((Debugger *)v105, v80);
        }
        glTexParameteri(0xDE1u, 0x2803u, v75);
        v81 = glGetError();
        if ( (int)v81 > 1279 )
        {
          v83 = "GL_INVALID_OPERATION ";
          switch ( (int)v81 )
          {
            case 1280:
              v83 = "GL_INVALID_ENUM ";
              goto LABEL_108;
            case 1281:
              v83 = "GL_INVALID_VALUE ";
              goto LABEL_108;
            case 1282:
              goto LABEL_108;
            case 1285:
              v83 = "GL_OUT_OF_MEMORY ";
              goto LABEL_108;
            default:
              goto LABEL_106;
          }
        }
        if ( (_DWORD)v81 )
        {
    LABEL_106:
          v83 = "";
          if ( (_DWORD)v81 == 1286 )
            v83 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_108:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v82,
            v83,
            v81,
            v81,
            445,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
          Debugger::error((Debugger *)v104, v84);
        }
        glTexParameteri(0xDE1u, 0x2800u, v76);
        v85 = glGetError();
        if ( (int)v85 > 1279 )
        {
          v87 = "GL_INVALID_OPERATION ";
          switch ( (int)v85 )
          {
            case 1280:
              v87 = "GL_INVALID_ENUM ";
              goto LABEL_116;
            case 1281:
              v87 = "GL_INVALID_VALUE ";
              goto LABEL_116;
            case 1282:
              goto LABEL_116;
            case 1285:
              v87 = "GL_OUT_OF_MEMORY ";
              goto LABEL_116;
            default:
              goto LABEL_114;
          }
        }
        if ( (_DWORD)v85 )
        {
    LABEL_114:
          v87 = "";
          if ( (_DWORD)v85 == 1286 )
            v87 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_116:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v86,
            v87,
            v85,
            v85,
            447,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
          Debugger::error((Debugger *)v103, v88);
        }
        glTexParameteri(0xDE1u, 0x2801u, param);
        v89 = (GLImage *)glGetError();
        if ( (int)v89 > 1279 )
        {
          v91 = "GL_INVALID_OPERATION ";
          switch ( (int)v89 )
          {
            case 1280:
              v91 = "GL_INVALID_ENUM ";
              goto LABEL_124;
            case 1281:
              v91 = "GL_INVALID_VALUE ";
              goto LABEL_124;
            case 1282:
              goto LABEL_124;
            case 1285:
              v91 = "GL_OUT_OF_MEMORY ";
              goto LABEL_124;
            default:
              goto LABEL_122;
          }
        }
        if ( (_DWORD)v89 )
        {
    LABEL_122:
          v91 = "";
          if ( (_DWORD)v89 == 1286 )
            v91 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_124:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v90,
            v91,
            v89,
            v89,
            448,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
          Debugger::error((Debugger *)v102, v92);
        }
        GLImage::setPixelStorei(v89, pixels, *v32, v36, v100);
        glTexImage2D(0xDE1u, 0, v36, *v32, *v33, 0, v36, v100, pixels);
        if ( (_DWORD)a4 == 2 )
          GLImage::generateMipmap(v93);
        DebugPerformanceHud::incrementValue(6, 1);
        stbi_image_free(pixels);
      }
    LABEL_128:
      v94 = xTimer::getNativeTime();
      PassedTimeMs = xTimer::getPassedTimeMs(NativeTime, v94, v95);
      String::format((String *)"Loading image %s took %d ms", v97, a2, (unsigned int)(int)*(float *)&PassedTimeMs);
      Debugger::print((Debugger *)v101, v98);
      String::~String();
      return *(unsigned int *)(a1 + 12);
    }

    __int64 __fastcall GLImage::bind(__int64 a1)
    {
      __int64 Error; // x0
      const char *v2; // x1
      const char *v3; // x8
      const String *v4; // x1
      _BYTE v6[24]; // [xsp+28h] [xbp-28h] BYREF
    
      glBindTexture(0xDE1u, *(_DWORD *)(a1 + 12));
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v3 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v3 = "GL_INVALID_ENUM ";
            goto LABEL_8;
          case 1281:
            v3 = "GL_INVALID_VALUE ";
            goto LABEL_8;
          case 1282:
            goto LABEL_8;
          case 1285:
            v3 = "GL_OUT_OF_MEMORY ";
            goto LABEL_8;
          default:
            goto LABEL_6;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_6:
        v3 = "";
        if ( (_DWORD)Error == 1286 )
          v3 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_8:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v2,
          v3,
          Error,
          Error,
          1130,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)v6, v4);
      }
      return DebugPerformanceHud::incrementValue(3, 1);
    }

    __int64 __fastcall GLImage::create(__int64 a1, unsigned __int8 *a2, __int64 a3, int a4, int a5)
    {
      const char *v10; // x1
      const String *v11; // x1
      GLImage *v12; // x0
      const char *v13; // x1
      unsigned int *v14; // x19
      GLint v15; // w23
      GLint v16; // w21
      GLint v17; // w22
      int v18; // w8
      unsigned int v19; // w24
      unsigned int v20; // w25
      const String *v21; // x1
      __int64 result; // x0
      int v23; // w3
      int v24; // w19
      GLImage *v25; // x0
      const char *v26; // x1
      GLImage *v27; // x0
      int v28; // w24
      GLImage *v29; // x0
      int v30; // w8
      GLImage *v31; // x0
      GLImage *v32; // x0
      int v33; // w8
      GLImage *v34; // x25
      GLImage *v35; // x0
      int v36; // w8
      int v37; // w28
      const char *v38; // x1
      char *pixels; // x21
      GLenum v40; // w24
      __int64 v41; // x0
      const char *v42; // x1
      const char *v43; // x8
      const String *v44; // x1
      GLint v45; // w28
      GLint v46; // w23
      GLint v47; // w27
      __int64 v48; // x0
      const char *v49; // x1
      const char *v50; // x8
      const String *v51; // x1
      __int64 v52; // x0
      const char *v53; // x1
      const char *v54; // x8
      const String *v55; // x1
      __int64 v56; // x0
      const char *v57; // x1
      const char *v58; // x8
      const String *v59; // x1
      GLImage *v60; // x0
      const char *v61; // x1
      const char *v62; // x8
      const String *v63; // x1
      GLenum v64; // w23
      int v65; // w9
      __int64 v66; // x8
      _BYTE *v67; // x10
      char *v68; // x11
      __int16 v69; // w12
      unsigned int v70; // w13
      GLImage *v71; // x0
      __int64 v72; // x0
      const char *v73; // x1
      const char *v74; // x8
      const String *v75; // x1
      __int64 v76; // x0
      const char *v77; // x1
      const char *v78; // x8
      const String *v79; // x1
      __int64 v80; // x0
      const char *v81; // x1
      const char *v82; // x8
      const String *v83; // x1
      __int64 v84; // x0
      const char *v85; // x1
      const char *v86; // x8
      const String *v87; // x1
      __int64 v88; // x0
      const char *v89; // x1
      const char *v90; // x8
      const String *v91; // x1
      __int64 v92; // x0
      const char *v93; // x1
      const char *v94; // x8
      const String *v95; // x1
      GLint v96; // w23
      GLint v97; // w22
      __int64 v98; // x0
      const char *v99; // x1
      const char *v100; // x8
      const String *v101; // x1
      __int64 v102; // x0
      const char *v103; // x1
      const char *v104; // x8
      const String *v105; // x1
      __int64 v106; // x0
      const char *v107; // x1
      const char *v108; // x8
      const String *v109; // x1
      __int64 v110; // x0
      const char *v111; // x1
      const char *v112; // x8
      const String *v113; // x1
      __int64 v114; // x0
      const char *v115; // x1
      const char *v116; // x8
      const String *v117; // x1
      const String *v118; // x1
      __int64 Error; // x0
      const char *v120; // x1
      const char *v121; // x8
      const String *v122; // x1
      GLint v123; // w27
      GLint v124; // w23
      GLint v125; // w22
      __int64 v126; // x0
      const char *v127; // x1
      const char *v128; // x8
      const String *v129; // x1
      __int64 v130; // x0
      const char *v131; // x1
      const char *v132; // x8
      const String *v133; // x1
      __int64 v134; // x0
      const char *v135; // x1
      const char *v136; // x8
      const String *v137; // x1
      __int64 v138; // x0
      const char *v139; // x1
      const char *v140; // x8
      const String *v141; // x1
      GLImage *v142; // x0
      const char *v143; // x1
      const char *v144; // x8
      const String *v145; // x1
      GLint v146; // w20
      int v147; // w26
      GLsizei v148; // w24
      GLsizei v149; // w25
      const char *v150; // x1
      GLsizei v151; // w27
      __int64 v152; // x8
      int v153; // w9
      unsigned __int8 *v154; // x28
      int i; // w22
      const char *v156; // x9
      __int64 v157; // x0
      const char *v158; // x1
      const String *v159; // x1
      int v160; // [xsp+40h] [xbp-320h]
      int v161; // [xsp+44h] [xbp-31Ch]
      int v162; // [xsp+48h] [xbp-318h]
      int v163; // [xsp+4Ch] [xbp-314h]
      int v164; // [xsp+50h] [xbp-310h]
      int v165; // [xsp+54h] [xbp-30Ch]
      char v166[24]; // [xsp+58h] [xbp-308h] BYREF
      char v167[24]; // [xsp+70h] [xbp-2F0h] BYREF
      char v168[24]; // [xsp+88h] [xbp-2D8h] BYREF
      char v169[24]; // [xsp+A0h] [xbp-2C0h] BYREF
      char v170[28]; // [xsp+B8h] [xbp-2A8h] BYREF
      int v171; // [xsp+D4h] [xbp-28Ch] BYREF
      char v172[24]; // [xsp+D8h] [xbp-288h] BYREF
      char v173[24]; // [xsp+F0h] [xbp-270h] BYREF
      char v174[24]; // [xsp+108h] [xbp-258h] BYREF
      char v175[24]; // [xsp+120h] [xbp-240h] BYREF
      char v176[24]; // [xsp+138h] [xbp-228h] BYREF
      char v177[24]; // [xsp+150h] [xbp-210h] BYREF
      char v178[24]; // [xsp+168h] [xbp-1F8h] BYREF
      char v179[28]; // [xsp+180h] [xbp-1E0h] BYREF
      int v180; // [xsp+19Ch] [xbp-1C4h] BYREF
      char v181[24]; // [xsp+1A0h] [xbp-1C0h] BYREF
      char v182[24]; // [xsp+1B8h] [xbp-1A8h] BYREF
      char v183[24]; // [xsp+1D0h] [xbp-190h] BYREF
      char v184[24]; // [xsp+1E8h] [xbp-178h] BYREF
      char v185[24]; // [xsp+200h] [xbp-160h] BYREF
      char v186[24]; // [xsp+218h] [xbp-148h] BYREF
      char v187[24]; // [xsp+230h] [xbp-130h] BYREF
      __siginfo v188; // [xsp+248h] [xbp-118h] BYREF
      char v189[4]; // [xsp+2C0h] [xbp-A0h] BYREF
      int v190; // [xsp+2C4h] [xbp-9Ch]
      int v191; // [xsp+2C8h] [xbp-98h]
      char v192[24]; // [xsp+2F8h] [xbp-68h] BYREF
    
      GLImage::purge(a1);
      String::format((String *)"GLImage::create, data length %d", v10, a3);
      Debugger::print((Debugger *)v192, v11);
      String::~String();
      if ( (int)a3 < 48 )
      {
        if ( (int)a3 < 16 )
        {
          if ( (int)a3 < 12 )
            goto LABEL_51;
          v18 = *a2;
    LABEL_27:
          if ( v18 != 171
            || a2[1] != 75
            || a2[2] != 84
            || a2[3] != 88
            || a2[4] != 32
            || a2[5] != 49
            || a2[6] != 49
            || a2[7] != 187
            || a2[8] != 13
            || a2[9] != 10
            || a2[10] != 26
            || a2[11] != 10 )
          {
            goto LABEL_51;
          }
          v23 = _byteswap_ulong(*((_DWORD *)a2 + 3));
          v180 = 28;
          v24 = v23;
          v25 = (GLImage *)GLImage::ktxRead32(v12, a2, &v180, v23);
          if ( (_DWORD)v25 != 36196 )
          {
            String::format((String *)"KTX contains other than GL_ETC1_RGB8_OES: %d", v26, v25);
            Debugger::error((Debugger *)v179, v118);
          }
          v180 += 4;
          v27 = (GLImage *)GLImage::ktxRead32(v25, a2, &v180, v24);
          v28 = (int)v27;
          v29 = (GLImage *)GLImage::ktxRead32(v27, a2, &v180, v24);
          if ( (_DWORD)v29 )
            v30 = (int)v29;
          else
            v30 = 1;
          v162 = v30;
          v31 = (GLImage *)GLImage::ktxRead32(v29, a2, &v180, v24);
          v32 = (GLImage *)GLImage::ktxRead32(v31, a2, &v180, v24);
          if ( (_DWORD)v32 )
            v33 = (int)v32;
          else
            v33 = 1;
          v164 = v33;
          v34 = (GLImage *)GLImage::ktxRead32(v32, a2, &v180, v24);
          v35 = (GLImage *)GLImage::ktxRead32(v34, a2, &v180, v24);
          if ( (_DWORD)v35 )
            v36 = (int)v35;
          else
            v36 = 1;
          v163 = v36;
          v37 = v24;
          if ( (int)GLImage::ktxRead32(v35, a2, &v180, v24) >= 1 )
            Debugger::error((__siginfo *)"KTX key value data read not implemented", v38);
          v14 = (unsigned int *)(a1 + 12);
          glGenTextures(1, (GLuint *)(a1 + 12));
          Error = glGetError();
          if ( (int)Error > 1279 )
          {
            v121 = "GL_INVALID_OPERATION ";
            switch ( (int)Error )
            {
              case 1280:
                v121 = "GL_INVALID_ENUM ";
                goto LABEL_248;
              case 1281:
                v121 = "GL_INVALID_VALUE ";
                goto LABEL_248;
              case 1282:
                goto LABEL_248;
              case 1285:
                v121 = "GL_OUT_OF_MEMORY ";
                goto LABEL_248;
              default:
                goto LABEL_246;
            }
          }
          if ( (_DWORD)Error )
          {
    LABEL_246:
            v121 = "";
            if ( (_DWORD)Error == 1286 )
              v121 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_248:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v120,
              v121,
              Error,
              Error,
              662,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
            Debugger::error((Debugger *)v178, v122);
          }
          DebugPerformanceHud::addGenID(0, *(unsigned int *)(a1 + 12));
          GLImage::bind(a1);
          if ( a4 )
            v123 = 33071;
          else
            v123 = 10497;
          switch ( a5 )
          {
            case 3:
              v125 = 9987;
              v124 = 9729;
              break;
            case 2:
              goto LABEL_257;
            case 1:
              if ( v163 != 1 )
              {
    LABEL_257:
                v125 = 9985;
                v124 = 9729;
              }
              else
              {
                v124 = 9729;
                v125 = 9729;
              }
              break;
            default:
              v124 = 9728;
              v125 = 9728;
              break;
          }
          *(_DWORD *)(a1 + 16) = 36196;
          *(_DWORD *)(a1 + 4) = v28;
          *(_DWORD *)(a1 + 8) = v162;
          glPixelStorei(0xCF5u, 4);
          v126 = glGetError();
          if ( (int)v126 > 1279 )
          {
            v128 = "GL_INVALID_OPERATION ";
            switch ( (int)v126 )
            {
              case 1280:
                v128 = "GL_INVALID_ENUM ";
                goto LABEL_267;
              case 1281:
                v128 = "GL_INVALID_VALUE ";
                goto LABEL_267;
              case 1282:
                goto LABEL_267;
              case 1285:
                v128 = "GL_OUT_OF_MEMORY ";
                goto LABEL_267;
              default:
                goto LABEL_265;
            }
          }
          if ( (_DWORD)v126 )
          {
    LABEL_265:
            v128 = "";
            if ( (_DWORD)v126 == 1286 )
              v128 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_267:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v127,
              v128,
              v126,
              v126,
              704,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
            Debugger::error((Debugger *)v177, v129);
          }
          glTexParameteri(0xDE1u, 0x2802u, v123);
          v130 = glGetError();
          if ( (int)v130 > 1279 )
          {
            v132 = "GL_INVALID_OPERATION ";
            switch ( (int)v130 )
            {
              case 1280:
                v132 = "GL_INVALID_ENUM ";
                goto LABEL_275;
              case 1281:
                v132 = "GL_INVALID_VALUE ";
                goto LABEL_275;
              case 1282:
                goto LABEL_275;
              case 1285:
                v132 = "GL_OUT_OF_MEMORY ";
                goto LABEL_275;
              default:
                goto LABEL_273;
            }
          }
          if ( (_DWORD)v130 )
          {
    LABEL_273:
            v132 = "";
            if ( (_DWORD)v130 == 1286 )
              v132 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_275:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v131,
              v132,
              v130,
              v130,
              706,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
            Debugger::error((Debugger *)v176, v133);
          }
          glTexParameteri(0xDE1u, 0x2803u, v123);
          v134 = glGetError();
          if ( (int)v134 > 1279 )
          {
            v136 = "GL_INVALID_OPERATION ";
            switch ( (int)v134 )
            {
              case 1280:
                v136 = "GL_INVALID_ENUM ";
                goto LABEL_283;
              case 1281:
                v136 = "GL_INVALID_VALUE ";
                goto LABEL_283;
              case 1282:
                goto LABEL_283;
              case 1285:
                v136 = "GL_OUT_OF_MEMORY ";
                goto LABEL_283;
              default:
                goto LABEL_281;
            }
          }
          if ( (_DWORD)v134 )
          {
    LABEL_281:
            v136 = "";
            if ( (_DWORD)v134 == 1286 )
              v136 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_283:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v135,
              v136,
              v134,
              v134,
              707,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
            Debugger::error((Debugger *)v175, v137);
          }
          glTexParameteri(0xDE1u, 0x2800u, v124);
          v138 = glGetError();
          if ( (int)v138 > 1279 )
          {
            v140 = "GL_INVALID_OPERATION ";
            switch ( (int)v138 )
            {
              case 1280:
                v140 = "GL_INVALID_ENUM ";
                goto LABEL_291;
              case 1281:
                v140 = "GL_INVALID_VALUE ";
                goto LABEL_291;
              case 1282:
                goto LABEL_291;
              case 1285:
                v140 = "GL_OUT_OF_MEMORY ";
                goto LABEL_291;
              default:
                goto LABEL_289;
            }
          }
          if ( (_DWORD)v138 )
          {
    LABEL_289:
            v140 = "";
            if ( (_DWORD)v138 == 1286 )
              v140 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_291:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v139,
              v140,
              v138,
              v138,
              709,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
            Debugger::error((Debugger *)v174, v141);
          }
          glTexParameteri(0xDE1u, 0x2801u, v125);
          v142 = (GLImage *)glGetError();
          if ( (int)v142 > 1279 )
          {
            v144 = "GL_INVALID_OPERATION ";
            switch ( (int)v142 )
            {
              case 1280:
                v144 = "GL_INVALID_ENUM ";
                goto LABEL_299;
              case 1281:
                v144 = "GL_INVALID_VALUE ";
                goto LABEL_299;
              case 1282:
                goto LABEL_299;
              case 1285:
                v144 = "GL_OUT_OF_MEMORY ";
                goto LABEL_299;
              default:
                goto LABEL_297;
            }
          }
          if ( (_DWORD)v142 )
          {
    LABEL_297:
            v144 = "";
            if ( (_DWORD)v142 == 1286 )
              v144 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_299:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v143,
              v144,
              v142,
              v142,
              710,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
            Debugger::error((Debugger *)v173, v145);
          }
          if ( v163 >= 1 )
          {
            v146 = 0;
            v160 = v28;
            v161 = v37;
            v147 = (int)v34;
            do
            {
              if ( v160 >> v146 )
                v148 = v160 >> v146;
              else
                v148 = 1;
              if ( v162 >> v146 )
                v149 = v162 >> v146;
              else
                v149 = 1;
              v142 = (GLImage *)GLImage::ktxRead32(v142, a2, &v180, v161);
              v151 = (int)v142;
              v152 = v180;
              v180 += (int)v142;
              if ( v164 >= 1 )
              {
                v153 = 0;
                v154 = &a2[v152];
                do
                {
                  v165 = v153;
                  if ( v147 >= 1 )
                  {
                    for ( i = 0; i < v147; ++i )
                    {
                      if ( (v151 & 3) != 0 )
                        Debugger::error((__siginfo *)"ERROR IN ALIGNMENT", v150);
                      glCompressedTexImage2D(i + 3553, v146, 0x8D64u, v148, v149, 0, v151, v154);
                      v157 = glGetError();
                      if ( (int)v157 > 1279 )
                      {
                        v156 = "GL_INVALID_OPERATION ";
                        switch ( (int)v157 )
                        {
                          case 1280:
                            v156 = "GL_INVALID_ENUM ";
                            goto LABEL_323;
                          case 1281:
                            v156 = "GL_INVALID_VALUE ";
                            goto LABEL_323;
                          case 1282:
                            goto LABEL_323;
                          case 1285:
                            v156 = "GL_OUT_OF_MEMORY ";
                            goto LABEL_323;
                          default:
                            goto LABEL_321;
                        }
                      }
                      if ( (_DWORD)v157 )
                      {
    LABEL_321:
                        v156 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
                        if ( (_DWORD)v157 != 1286 )
                          v156 = "";
    LABEL_323:
                        String::format(
                          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                          v158,
                          v156,
                          v157,
                          v157,
                          743,
                          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
                        Debugger::error((Debugger *)v172, v159);
                      }
                      v142 = (GLImage *)DebugPerformanceHud::incrementValue(6, 1);
                    }
                  }
                  v153 = v165 + 1;
                }
                while ( v165 + 1 < v164 );
              }
              ++v146;
            }
            while ( v146 < v163 );
          }
          return *v14;
        }
      }
      else if ( a2[44] == 80 && a2[45] == 86 && a2[46] == 82 && a2[47] == 33 )
      {
        v14 = (unsigned int *)(a1 + 12);
        if ( !(unsigned int)PVRTTextureLoadFromPointer(
                              (unsigned int *)a2,
                              (GLuint *)(a1 + 12),
                              (__int64)v189,
                              a4 == 1,
                              0,
                              0,
                              0) )
        {
          GLImage::bind(a1);
          if ( a4 )
            v15 = 33071;
          else
            v15 = 10497;
          if ( (unsigned int)(a5 - 1) > 2 )
          {
            v17 = 9728;
            v16 = 9728;
          }
          else
          {
            v16 = dword_1003EB068[a5 - 1];
            v17 = 9729;
          }
          glTexParameteri(0xDE1u, 0x2802u, v15);
          v72 = glGetError();
          if ( (int)v72 > 1279 )
          {
            v74 = "GL_INVALID_OPERATION ";
            switch ( (int)v72 )
            {
              case 1280:
                v74 = "GL_INVALID_ENUM ";
                goto LABEL_129;
              case 1281:
                v74 = "GL_INVALID_VALUE ";
                goto LABEL_129;
              case 1282:
                goto LABEL_129;
              case 1285:
                v74 = "GL_OUT_OF_MEMORY ";
                goto LABEL_129;
              default:
                goto LABEL_127;
            }
          }
          if ( (_DWORD)v72 )
          {
    LABEL_127:
            v74 = "";
            if ( (_DWORD)v72 == 1286 )
              v74 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_129:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v73,
              v74,
              v72,
              v72,
              539,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
            Debugger::error((Debugger *)&v188.__pad[6], v75);
          }
          glTexParameteri(0xDE1u, 0x2803u, v15);
          v76 = glGetError();
          if ( (int)v76 > 1279 )
          {
            v78 = "GL_INVALID_OPERATION ";
            switch ( (int)v76 )
            {
              case 1280:
                v78 = "GL_INVALID_ENUM ";
                goto LABEL_137;
              case 1281:
                v78 = "GL_INVALID_VALUE ";
                goto LABEL_137;
              case 1282:
                goto LABEL_137;
              case 1285:
                v78 = "GL_OUT_OF_MEMORY ";
                goto LABEL_137;
              default:
                goto LABEL_135;
            }
          }
          if ( (_DWORD)v76 )
          {
    LABEL_135:
            v78 = "";
            if ( (_DWORD)v76 == 1286 )
              v78 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_137:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v77,
              v78,
              v76,
              v76,
              540,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
            Debugger::error((Debugger *)&v188.__pad[3], v79);
          }
          glTexParameteri(0xDE1u, 0x2800u, v17);
          v80 = glGetError();
          if ( (int)v80 > 1279 )
          {
            v82 = "GL_INVALID_OPERATION ";
            switch ( (int)v80 )
            {
              case 1280:
                v82 = "GL_INVALID_ENUM ";
                goto LABEL_145;
              case 1281:
                v82 = "GL_INVALID_VALUE ";
                goto LABEL_145;
              case 1282:
                goto LABEL_145;
              case 1285:
                v82 = "GL_OUT_OF_MEMORY ";
                goto LABEL_145;
              default:
                goto LABEL_143;
            }
          }
          if ( (_DWORD)v80 )
          {
    LABEL_143:
            v82 = "";
            if ( (_DWORD)v80 == 1286 )
              v82 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_145:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v81,
              v82,
              v80,
              v80,
              542,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
            Debugger::error((Debugger *)v188.__pad, v83);
          }
          glTexParameteri(0xDE1u, 0x2801u, v16);
          v84 = glGetError();
          if ( (int)v84 > 1279 )
          {
            v86 = "GL_INVALID_OPERATION ";
            switch ( (int)v84 )
            {
              case 1280:
                v86 = "GL_INVALID_ENUM ";
                goto LABEL_153;
              case 1281:
                v86 = "GL_INVALID_VALUE ";
                goto LABEL_153;
              case 1282:
                goto LABEL_153;
              case 1285:
                v86 = "GL_OUT_OF_MEMORY ";
                goto LABEL_153;
              default:
                goto LABEL_151;
            }
          }
          if ( (_DWORD)v84 )
          {
    LABEL_151:
            v86 = "";
            if ( (_DWORD)v84 == 1286 )
              v86 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_153:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v85,
              v86,
              v84,
              v84,
              543,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
            Debugger::error((Debugger *)&v188.si_addr, v87);
          }
          *(_DWORD *)(a1 + 4) = v191;
          *(_DWORD *)(a1 + 8) = v190;
          return *v14;
        }
        return 0;
      }
      v18 = *a2;
      if ( v18 != 80 )
        goto LABEL_27;
      if ( a2[1] == 75 && a2[2] == 77 && a2[3] == 32 && a2[4] == 49 && a2[5] == 48 && !a2[6] && !a2[7] )
      {
        v19 = a2[9] | (a2[8] << 8);
        if ( (a2[13] | (a2[12] << 8)) <= v19 )
        {
          v20 = a2[11] | (a2[10] << 8);
          if ( (a2[15] | (a2[14] << 8)) <= v20 )
          {
            v14 = (unsigned int *)(a1 + 12);
            glGenTextures(1, (GLuint *)(a1 + 12));
            v88 = glGetError();
            if ( (int)v88 > 1279 )
            {
              v90 = "GL_INVALID_OPERATION ";
              switch ( (int)v88 )
              {
                case 1280:
                  v90 = "GL_INVALID_ENUM ";
                  goto LABEL_170;
                case 1281:
                  v90 = "GL_INVALID_VALUE ";
                  goto LABEL_170;
                case 1282:
                  goto LABEL_170;
                case 1285:
                  v90 = "GL_OUT_OF_MEMORY ";
                  goto LABEL_170;
                default:
                  goto LABEL_168;
              }
            }
            if ( (_DWORD)v88 )
            {
    LABEL_168:
              v90 = "";
              if ( (_DWORD)v88 == 1286 )
                v90 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_170:
              String::format(
                (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                v89,
                v90,
                v88,
                v88,
                572,
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
              Debugger::error((Debugger *)v187, v91);
            }
            DebugPerformanceHud::addGenID(0, *(unsigned int *)(a1 + 12));
            GLImage::bind(a1);
            glPixelStorei(0xCF5u, 4);
            v92 = glGetError();
            if ( (int)v92 > 1279 )
            {
              v94 = "GL_INVALID_OPERATION ";
              switch ( (int)v92 )
              {
                case 1280:
                  v94 = "GL_INVALID_ENUM ";
                  goto LABEL_178;
                case 1281:
                  v94 = "GL_INVALID_VALUE ";
                  goto LABEL_178;
                case 1282:
                  goto LABEL_178;
                case 1285:
                  v94 = "GL_OUT_OF_MEMORY ";
                  goto LABEL_178;
                default:
                  goto LABEL_176;
              }
            }
            if ( (_DWORD)v92 )
            {
    LABEL_176:
              v94 = "";
              if ( (_DWORD)v92 == 1286 )
                v94 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_178:
              String::format(
                (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                v93,
                v94,
                v92,
                v92,
                577,
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
              Debugger::error((Debugger *)v186, v95);
            }
            if ( a4 )
              v96 = 33071;
            else
              v96 = 10497;
            if ( a5 )
              v97 = 9729;
            else
              v97 = 9728;
            glTexParameteri(0xDE1u, 0x2802u, v96);
            v98 = glGetError();
            if ( (int)v98 > 1279 )
            {
              v100 = "GL_INVALID_OPERATION ";
              switch ( (int)v98 )
              {
                case 1280:
                  v100 = "GL_INVALID_ENUM ";
                  goto LABEL_192;
                case 1281:
                  v100 = "GL_INVALID_VALUE ";
                  goto LABEL_192;
                case 1282:
                  goto LABEL_192;
                case 1285:
                  v100 = "GL_OUT_OF_MEMORY ";
                  goto LABEL_192;
                default:
                  goto LABEL_190;
              }
            }
            if ( (_DWORD)v98 )
            {
    LABEL_190:
              v100 = "";
              if ( (_DWORD)v98 == 1286 )
                v100 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_192:
              String::format(
                (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                v99,
                v100,
                v98,
                v98,
                582,
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
              Debugger::error((Debugger *)v185, v101);
            }
            glTexParameteri(0xDE1u, 0x2803u, v96);
            v102 = glGetError();
            if ( (int)v102 > 1279 )
            {
              v104 = "GL_INVALID_OPERATION ";
              switch ( (int)v102 )
              {
                case 1280:
                  v104 = "GL_INVALID_ENUM ";
                  goto LABEL_200;
                case 1281:
                  v104 = "GL_INVALID_VALUE ";
                  goto LABEL_200;
                case 1282:
                  goto LABEL_200;
                case 1285:
                  v104 = "GL_OUT_OF_MEMORY ";
                  goto LABEL_200;
                default:
                  goto LABEL_198;
              }
            }
            if ( (_DWORD)v102 )
            {
    LABEL_198:
              v104 = "";
              if ( (_DWORD)v102 == 1286 )
                v104 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_200:
              String::format(
                (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                v103,
                v104,
                v102,
                v102,
                583,
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
              Debugger::error((Debugger *)v184, v105);
            }
            glTexParameteri(0xDE1u, 0x2800u, v97);
            v106 = glGetError();
            if ( (int)v106 > 1279 )
            {
              v108 = "GL_INVALID_OPERATION ";
              switch ( (int)v106 )
              {
                case 1280:
                  v108 = "GL_INVALID_ENUM ";
                  goto LABEL_208;
                case 1281:
                  v108 = "GL_INVALID_VALUE ";
                  goto LABEL_208;
                case 1282:
                  goto LABEL_208;
                case 1285:
                  v108 = "GL_OUT_OF_MEMORY ";
                  goto LABEL_208;
                default:
                  goto LABEL_206;
              }
            }
            if ( (_DWORD)v106 )
            {
    LABEL_206:
              v108 = "";
              if ( (_DWORD)v106 == 1286 )
                v108 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_208:
              String::format(
                (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                v107,
                v108,
                v106,
                v106,
                585,
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
              Debugger::error((Debugger *)v183, v109);
            }
            glTexParameteri(0xDE1u, 0x2801u, v97);
            v110 = glGetError();
            if ( (int)v110 > 1279 )
            {
              v112 = "GL_INVALID_OPERATION ";
              switch ( (int)v110 )
              {
                case 1280:
                  v112 = "GL_INVALID_ENUM ";
                  goto LABEL_216;
                case 1281:
                  v112 = "GL_INVALID_VALUE ";
                  goto LABEL_216;
                case 1282:
                  goto LABEL_216;
                case 1285:
                  v112 = "GL_OUT_OF_MEMORY ";
                  goto LABEL_216;
                default:
                  goto LABEL_214;
              }
            }
            if ( (_DWORD)v110 )
            {
    LABEL_214:
              v112 = "";
              if ( (_DWORD)v110 == 1286 )
                v112 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_216:
              String::format(
                (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                v111,
                v112,
                v110,
                v110,
                586,
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
              Debugger::error((Debugger *)v182, v113);
            }
            *(_DWORD *)(a1 + 16) = 36196;
            glCompressedTexImage2D(0xDE1u, 0, 0x8D64u, v19, v20, 0, 8 * (v19 >> 2) * (v20 >> 2), a2 + 16);
            v114 = glGetError();
            if ( (int)v114 > 1279 )
            {
              v116 = "GL_INVALID_OPERATION ";
              switch ( (int)v114 )
              {
                case 1280:
                  v116 = "GL_INVALID_ENUM ";
                  goto LABEL_224;
                case 1281:
                  v116 = "GL_INVALID_VALUE ";
                  goto LABEL_224;
                case 1282:
                  goto LABEL_224;
                case 1285:
                  v116 = "GL_OUT_OF_MEMORY ";
                  goto LABEL_224;
                default:
                  goto LABEL_222;
              }
            }
            if ( (_DWORD)v114 )
            {
    LABEL_222:
              v116 = "";
              if ( (_DWORD)v114 == 1286 )
                v116 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_224:
              String::format(
                (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                v115,
                v116,
                v114,
                v114,
                591,
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
              Debugger::error((Debugger *)v181, v117);
            }
            DebugPerformanceHud::incrementValue(6, 1);
            *(_DWORD *)(a1 + 4) = v19;
            *(_DWORD *)(a1 + 8) = v20;
            return *v14;
          }
        }
        String::format((String *)"GLImage: Something wrong with PKM original sizes", v13);
        Debugger::warning(&v188, v21);
        String::~String();
        return 0;
      }
    LABEL_51:
      pixels = (char *)stbi_load_from_memory(a2, a3, a1 + 4, a1 + 8, &v171, 0);
      result = 0;
      if ( !pixels )
        return result;
      if ( (unsigned int)(v171 - 1) > 3 )
        v40 = 6407;
      else
        v40 = dword_1003EB080[v171 - 1];
      v14 = (unsigned int *)(a1 + 12);
      glGenTextures(1, (GLuint *)(a1 + 12));
      v41 = glGetError();
      if ( (int)v41 > 1279 )
      {
        v43 = "GL_INVALID_OPERATION ";
        switch ( (int)v41 )
        {
          case 1280:
            v43 = "GL_INVALID_ENUM ";
            goto LABEL_62;
          case 1281:
            v43 = "GL_INVALID_VALUE ";
            goto LABEL_62;
          case 1282:
            goto LABEL_62;
          case 1285:
            v43 = "GL_OUT_OF_MEMORY ";
            goto LABEL_62;
          default:
            goto LABEL_60;
        }
      }
      if ( (_DWORD)v41 )
      {
    LABEL_60:
        v43 = "";
        if ( (_DWORD)v41 == 1286 )
          v43 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_62:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v42,
          v43,
          v41,
          v41,
          764,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)v170, v44);
      }
      DebugPerformanceHud::addGenID(0, *(unsigned int *)(a1 + 12));
      GLImage::bind(a1);
      if ( a4 )
        v45 = 33071;
      else
        v45 = 10497;
      if ( (unsigned int)(a5 - 1) > 2 )
      {
        v46 = 9728;
        v47 = 9728;
      }
      else
      {
        v46 = dword_1003EB068[a5 - 1];
        v47 = 9729;
      }
      glTexParameteri(0xDE1u, 0x2802u, v45);
      v48 = glGetError();
      if ( (int)v48 > 1279 )
      {
        v50 = "GL_INVALID_OPERATION ";
        switch ( (int)v48 )
        {
          case 1280:
            v50 = "GL_INVALID_ENUM ";
            goto LABEL_76;
          case 1281:
            v50 = "GL_INVALID_VALUE ";
            goto LABEL_76;
          case 1282:
            goto LABEL_76;
          case 1285:
            v50 = "GL_OUT_OF_MEMORY ";
            goto LABEL_76;
          default:
            goto LABEL_74;
        }
      }
      if ( (_DWORD)v48 )
      {
    LABEL_74:
        v50 = "";
        if ( (_DWORD)v48 == 1286 )
          v50 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_76:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v49,
          v50,
          v48,
          v48,
          795,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)v169, v51);
      }
      glTexParameteri(0xDE1u, 0x2803u, v45);
      v52 = glGetError();
      if ( (int)v52 > 1279 )
      {
        v54 = "GL_INVALID_OPERATION ";
        switch ( (int)v52 )
        {
          case 1280:
            v54 = "GL_INVALID_ENUM ";
            goto LABEL_84;
          case 1281:
            v54 = "GL_INVALID_VALUE ";
            goto LABEL_84;
          case 1282:
            goto LABEL_84;
          case 1285:
            v54 = "GL_OUT_OF_MEMORY ";
            goto LABEL_84;
          default:
            goto LABEL_82;
        }
      }
      if ( (_DWORD)v52 )
      {
    LABEL_82:
        v54 = "";
        if ( (_DWORD)v52 == 1286 )
          v54 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_84:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v53,
          v54,
          v52,
          v52,
          796,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)v168, v55);
      }
      glTexParameteri(0xDE1u, 0x2800u, v47);
      v56 = glGetError();
      if ( (int)v56 > 1279 )
      {
        v58 = "GL_INVALID_OPERATION ";
        switch ( (int)v56 )
        {
          case 1280:
            v58 = "GL_INVALID_ENUM ";
            goto LABEL_92;
          case 1281:
            v58 = "GL_INVALID_VALUE ";
            goto LABEL_92;
          case 1282:
            goto LABEL_92;
          case 1285:
            v58 = "GL_OUT_OF_MEMORY ";
            goto LABEL_92;
          default:
            goto LABEL_90;
        }
      }
      if ( (_DWORD)v56 )
      {
    LABEL_90:
        v58 = "";
        if ( (_DWORD)v56 == 1286 )
          v58 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_92:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v57,
          v58,
          v56,
          v56,
          798,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)v167, v59);
      }
      glTexParameteri(0xDE1u, 0x2801u, v46);
      v60 = (GLImage *)glGetError();
      if ( (int)v60 > 1279 )
      {
        v62 = "GL_INVALID_OPERATION ";
        switch ( (int)v60 )
        {
          case 1280:
            v62 = "GL_INVALID_ENUM ";
            goto LABEL_100;
          case 1281:
            v62 = "GL_INVALID_VALUE ";
            goto LABEL_100;
          case 1282:
            goto LABEL_100;
          case 1285:
            v62 = "GL_OUT_OF_MEMORY ";
            goto LABEL_100;
          default:
            goto LABEL_98;
        }
      }
      if ( (_DWORD)v60 )
      {
    LABEL_98:
        v62 = "";
        if ( (_DWORD)v60 == 1286 )
          v62 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_100:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v61,
          v62,
          v60,
          v60,
          799,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)v166, v63);
      }
      v64 = 5121;
      if ( v40 == 6407 && *(_BYTE *)a1 )
      {
        v65 = 3 * *(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 8);
        if ( v65 >= 1 )
        {
          v66 = 0;
          v67 = pixels + 1;
          do
          {
            v68 = &pixels[v66];
            v69 = ((unsigned __int8)pixels[v66] << 8) & 0xF800;
            v70 = (unsigned __int8)pixels[v66 + 1];
            v66 += 3;
            *(v67 - 1) = ((unsigned __int8)v68[2] >> 3) & 0x1F | (32 * ((v70 >> 2) & 0x3F));
            *v67 = (unsigned __int16)(v69 & 0xF800 | (8 * v70) & 0x7FF) >> 8;
            v67 += 2;
          }
          while ( v66 < v65 );
        }
        v64 = 33635;
      }
      *(_DWORD *)(a1 + 16) = v40;
      GLImage::setPixelStorei(v60, pixels, *(_DWORD *)(a1 + 4), v40, v64);
      glTexImage2D(0xDE1u, 0, v40, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 0, v40, v64, pixels);
      DebugPerformanceHud::incrementValue(6, 1);
      stbi_image_free(pixels);
      if ( a5 == 2 )
        GLImage::generateMipmap(v71);
      return *v14;
    }

    void __fastcall GLImage::setPixelStorei(__int64 a1, __int64 a2, char a3, int a4, int a5)
    {
      int v5; // w8
      char v6; // w8
      GLint v7; // w1
      int v8; // w9
      __int64 Error; // x0
      const char *v10; // x1
      const char *v11; // x8
      const String *v12; // x1
      _BYTE v13[24]; // [xsp+28h] [xbp-28h] BYREF
    
      if ( a2 )
      {
        if ( a5 == 5121 )
        {
          if ( (unsigned int)(a4 - 6407) > 3 )
            LOBYTE(v5) = 1;
          else
            v5 = dword_1003EB090[a4 - 6407];
        }
        else
        {
          LOBYTE(v5) = 2;
        }
        v6 = v5 * a3;
        if ( (a2 & 7) != 0 || (v6 & 7) != 0 )
        {
          if ( (a2 & 3) != 0 || (v6 & 3) != 0 )
          {
            if ( (v6 & 1) != 0 )
              v8 = 1;
            else
              v8 = 2;
            if ( (a2 & 1) != 0 )
              v7 = 1;
            else
              v7 = v8;
          }
          else
          {
            v7 = 4;
          }
        }
        else
        {
          v7 = 8;
        }
        glPixelStorei(0xCF5u, v7);
        Error = glGetError();
        if ( (int)Error > 1279 )
        {
          v11 = "GL_INVALID_OPERATION ";
          switch ( (int)Error )
          {
            case 1280:
              v11 = "GL_INVALID_ENUM ";
              goto LABEL_26;
            case 1281:
              v11 = "GL_INVALID_VALUE ";
              goto LABEL_26;
            case 1282:
              goto LABEL_26;
            case 1285:
              v11 = "GL_OUT_OF_MEMORY ";
              goto LABEL_26;
            default:
              goto LABEL_24;
          }
        }
        if ( (_DWORD)Error )
        {
    LABEL_24:
          v11 = "";
          if ( (_DWORD)Error == 1286 )
            v11 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_26:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v10,
            v11,
            Error,
            Error,
            1167,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
          Debugger::error((Debugger *)v13, v12);
        }
      }
    }

    __int64 __fastcall GLImage::doGlTexImage2D(
            GLImage *this,
            GLint a2,
            GLint a3,
            GLsizei a4,
            GLsizei a5,
            GLint a6,
            GLenum a7,
            GLenum a8,
            GLvoid *pixels)
    {
      glTexImage2D((GLenum)this, a2, a3, a4, a5, a6, a7, a8, pixels);
      return 1;
    }

    __int64 GLImage::generateMipmap()
    {
      __int64 Error; // x0
      const char *v1; // x1
      const char *v2; // x8
      const String *v3; // x1
      __int64 v4; // x0
      const char *v5; // x1
      const String *v6; // x1
      char v8; // [xsp+30h] [xbp-40h] BYREF
      _BYTE v9[24]; // [xsp+48h] [xbp-28h] BYREF
    
      glHint(0x8192u, 0x1102u);
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v2 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v2 = "GL_INVALID_ENUM ";
            goto LABEL_8;
          case 1281:
            v2 = "GL_INVALID_VALUE ";
            goto LABEL_8;
          case 1282:
            goto LABEL_8;
          case 1285:
            v2 = "GL_OUT_OF_MEMORY ";
            goto LABEL_8;
          default:
            goto LABEL_6;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_6:
        v2 = "";
        if ( (_DWORD)Error == 1286 )
          v2 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_8:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v1,
          v2,
          Error,
          Error,
          1269,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)v9, v3);
      }
      glGenerateMipmap(0xDE1u);
      v4 = glGetError();
      if ( !(_DWORD)v4 )
        return 1;
      String::format((String *)"generateMipmap error %d", v5, v4);
      Debugger::warning((__siginfo *)&v8, v6);
      String::~String();
      return 0;
    }

    __int64 __fastcall GLImage::ktxRead32(__int64 a1, __int64 a2, int *a3, int a4)
    {
      __int64 v4; // x8
      __int64 result; // x0
    
      v4 = *a3;
      if ( a4 == 16909060 )
        result = (*(unsigned __int8 *)(v4 + a2 + 3) << 24)
               | (*(unsigned __int8 *)(v4 + a2 + 2) << 16)
               | (*(unsigned __int8 *)(v4 + a2 + 1) << 8)
               | (unsigned int)*(unsigned __int8 *)(a2 + v4);
      else
        result = _byteswap_ulong(*(_DWORD *)(a2 + v4));
      *a3 = v4 + 4;
      return result;
    }

    __int64 __fastcall GLImage::create(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int64 a7)
    {
      __int64 v7; // x3
      char v9; // [xsp+Fh] [xbp-1h] BYREF
    
      if ( (unsigned int)(a4 - 1) > 3 )
        v7 = 6407;
      else
        v7 = (unsigned int)dword_1003EB080[a4 - 1];
      v9 = 0;
      return GLImage::createWithFormat(a1, a2, a3, v7, 5121, a5, a6, a7, &v9);
    }

    __int64 __fastcall GLImage::createWithFormat(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            __int64 a7,
            __int64 a8)
    {
      char v9; // [xsp+Fh] [xbp-1h] BYREF
    
      v9 = 0;
      return GLImage::createWithFormat(a1, a2, a3, a4, a5, a6, a7, a8, &v9);
    }

    __int64 __fastcall GLImage::createWithFormat(
            _DWORD *a1,
            GLsizei a2,
            GLsizei a3,
            GLenum a4,
            GLenum a5,
            const GLvoid *a6,
            int a7,
            int a8,
            _BYTE *a9)
    {
      unsigned int *v17; // x20
      __int64 Error; // x0
      const char *v19; // x1
      const char *v20; // x8
      const String *v21; // x1
      GLint v22; // w28
      GLint v23; // w27
      GLint v24; // w26
      __int64 v25; // x0
      const char *v26; // x1
      const char *v27; // x8
      const String *v28; // x1
      __int64 v29; // x0
      const char *v30; // x1
      const char *v31; // x8
      const String *v32; // x1
      __int64 v33; // x0
      const char *v34; // x1
      const char *v35; // x8
      const String *v36; // x1
      __int64 v37; // x0
      const char *v38; // x1
      const char *v39; // x8
      const String *v40; // x1
      _BYTE v42[24]; // [xsp+38h] [xbp-C8h] BYREF
      _BYTE v43[24]; // [xsp+50h] [xbp-B0h] BYREF
      _BYTE v44[24]; // [xsp+68h] [xbp-98h] BYREF
      _BYTE v45[24]; // [xsp+80h] [xbp-80h] BYREF
      _BYTE v46[24]; // [xsp+98h] [xbp-68h] BYREF
    
      GLImage::purge((__int64)a1);
      *a9 = 0;
      a1[1] = a2;
      a1[2] = a3;
      v17 = a1 + 3;
      a1[4] = a4;
      glGenTextures(1, a1 + 3);
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v20 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v20 = "GL_INVALID_ENUM ";
            goto LABEL_8;
          case 1281:
            v20 = "GL_INVALID_VALUE ";
            goto LABEL_8;
          case 1282:
            goto LABEL_8;
          case 1285:
            v20 = "GL_OUT_OF_MEMORY ";
            goto LABEL_8;
          default:
            goto LABEL_6;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_6:
        v20 = "";
        if ( (_DWORD)Error == 1286 )
          v20 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_8:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v19,
          v20,
          Error,
          Error,
          987,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)v46, v21);
      }
      DebugPerformanceHud::addGenID(0, (unsigned int)a1[3]);
      GLImage::bind((__int64)a1);
      if ( a7 )
        v22 = 33071;
      else
        v22 = 10497;
      if ( a8 == 1 )
      {
        v23 = 9729;
        v24 = 9729;
      }
      else if ( a8 == 2 )
      {
        v24 = 9985;
        v23 = 9729;
      }
      else
      {
        v23 = 9728;
        v24 = 9728;
      }
      glTexParameteri(0xDE1u, 0x2802u, v22);
      v25 = glGetError();
      if ( (int)v25 > 1279 )
      {
        v27 = "GL_INVALID_OPERATION ";
        switch ( (int)v25 )
        {
          case 1280:
            v27 = "GL_INVALID_ENUM ";
            goto LABEL_24;
          case 1281:
            v27 = "GL_INVALID_VALUE ";
            goto LABEL_24;
          case 1282:
            goto LABEL_24;
          case 1285:
            v27 = "GL_OUT_OF_MEMORY ";
            goto LABEL_24;
          default:
            goto LABEL_22;
        }
      }
      if ( (_DWORD)v25 )
      {
    LABEL_22:
        v27 = "";
        if ( (_DWORD)v25 == 1286 )
          v27 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_24:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v26,
          v27,
          v25,
          v25,
          1013,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)v45, v28);
      }
      glTexParameteri(0xDE1u, 0x2803u, v22);
      v29 = glGetError();
      if ( (int)v29 > 1279 )
      {
        v31 = "GL_INVALID_OPERATION ";
        switch ( (int)v29 )
        {
          case 1280:
            v31 = "GL_INVALID_ENUM ";
            goto LABEL_32;
          case 1281:
            v31 = "GL_INVALID_VALUE ";
            goto LABEL_32;
          case 1282:
            goto LABEL_32;
          case 1285:
            v31 = "GL_OUT_OF_MEMORY ";
            goto LABEL_32;
          default:
            goto LABEL_30;
        }
      }
      if ( (_DWORD)v29 )
      {
    LABEL_30:
        v31 = "";
        if ( (_DWORD)v29 == 1286 )
          v31 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_32:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v30,
          v31,
          v29,
          v29,
          1014,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)v44, v32);
      }
      glTexParameteri(0xDE1u, 0x2800u, v23);
      v33 = glGetError();
      if ( (int)v33 > 1279 )
      {
        v35 = "GL_INVALID_OPERATION ";
        switch ( (int)v33 )
        {
          case 1280:
            v35 = "GL_INVALID_ENUM ";
            goto LABEL_40;
          case 1281:
            v35 = "GL_INVALID_VALUE ";
            goto LABEL_40;
          case 1282:
            goto LABEL_40;
          case 1285:
            v35 = "GL_OUT_OF_MEMORY ";
            goto LABEL_40;
          default:
            goto LABEL_38;
        }
      }
      if ( (_DWORD)v33 )
      {
    LABEL_38:
        v35 = "";
        if ( (_DWORD)v33 == 1286 )
          v35 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_40:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v34,
          v35,
          v33,
          v33,
          1016,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)v43, v36);
      }
      glTexParameteri(0xDE1u, 0x2801u, v24);
      v37 = glGetError();
      if ( (int)v37 > 1279 )
      {
        v39 = "GL_INVALID_OPERATION ";
        switch ( (int)v37 )
        {
          case 1280:
            v39 = "GL_INVALID_ENUM ";
            goto LABEL_48;
          case 1281:
            v39 = "GL_INVALID_VALUE ";
            goto LABEL_48;
          case 1282:
            goto LABEL_48;
          case 1285:
            v39 = "GL_OUT_OF_MEMORY ";
            goto LABEL_48;
          default:
            goto LABEL_46;
        }
      }
      if ( (_DWORD)v37 )
      {
    LABEL_46:
        v39 = "";
        if ( (_DWORD)v37 == 1286 )
          v39 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_48:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v38,
          v39,
          v37,
          v37,
          1017,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)v42, v40);
      }
      GLImage::setPixelStorei(v37, (__int64)a6, a2, a4, a5);
      glTexImage2D(0xDE1u, 0, a4, a2, a3, 0, a4, a5, a6);
      DebugPerformanceHud::incrementValue(6, 1);
      if ( a6 && a8 == 2 && (GLImage::generateMipmap() & 1) == 0 )
        *a9 = 1;
      return *v17;
    }

    __int64 __fastcall GLImage::updateSubImage(
            AvatarRankingEntry *this,
            const char *a2,
            GLint a3,
            GLint a4,
            GLsizei a5,
            GLsizei a6,
            GLenum a7,
            int a8,
            GLint a9)
    {
      AvatarRankingEntry *v15; // x26
      __int64 Error; // x0
      const char *v17; // x1
      const char *v18; // x8
      const String *v19; // x1
      String v21; // [xsp+28h] [xbp-58h] BYREF
    
      v15 = this;
      if ( a8 )
        this = (AvatarRankingEntry *)GLImage::bind((__int64)this);
      GLImage::setPixelStorei((__int64)this, (__int64)a2, a5, *((_DWORD *)v15 + 4), a7);
      glTexSubImage2D(0xDE1u, a9, a3, a4, a5, a6, *((_DWORD *)v15 + 4), a7, a2);
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v18 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v18 = "GL_INVALID_ENUM ";
            goto LABEL_10;
          case 1281:
            v18 = "GL_INVALID_VALUE ";
            goto LABEL_10;
          case 1282:
            goto LABEL_10;
          case 1285:
            v18 = "GL_OUT_OF_MEMORY ";
            goto LABEL_10;
          default:
            goto LABEL_8;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_8:
        v18 = "";
        if ( (_DWORD)Error == 1286 )
          v18 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_10:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v17,
          v18,
          Error,
          Error,
          1104,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/GLImage.cpp");
        Debugger::error((Debugger *)&v21, v19);
      }
      return DebugPerformanceHud::incrementValue(6, 1);
    }

    __int64 __fastcall GLImage::setFileName(String *this, const String *a2)
    {
      return String::operator=(this + 1);
    }

    void __fastcall GLImage::validate(AvatarRankingEntry *this)
    {
      ;
    }

}; // end class GLImage
