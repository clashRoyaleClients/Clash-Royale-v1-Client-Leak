class ShaderUtility
{
public:

    __int64 __fastcall ShaderUtility::loadShader(#1408 *this, GLchar *a2, const char *a3)
    {
      __int64 Shader; // x19
      __int64 Error; // x0
      const char *v5; // x1
      const char *v6; // x8
      const String *v7; // x1
      __int64 v8; // x0
      const char *v9; // x1
      const char *v10; // x8
      const String *v11; // x1
      __int64 v12; // x0
      const char *v13; // x1
      const char *v14; // x8
      const String *v15; // x1
      __int64 v16; // x0
      const char *v17; // x1
      const char *v18; // x8
      const String *v19; // x1
      __int64 v20; // x0
      const char *v21; // x1
      const char *v22; // x8
      const String *v23; // x1
      GLsizei v24; // w21
      __int64 v25; // x0
      GLchar *v26; // x20
      __int64 v27; // x0
      const char *v28; // x1
      const char *v29; // x8
      const String *v30; // x1
      const String *v31; // x1
      __int64 v32; // x0
      const char *v33; // x1
      const char *v34; // x8
      const String *v35; // x1
      String v37; // [xsp+30h] [xbp-110h] BYREF
      String v38; // [xsp+48h] [xbp-F8h] BYREF
      __siginfo v39; // [xsp+60h] [xbp-E0h] BYREF
      GLint params; // [xsp+CCh] [xbp-74h] BYREF
      String v41; // [xsp+D0h] [xbp-70h] BYREF
      String v42; // [xsp+E8h] [xbp-58h] BYREF
      String v43; // [xsp+100h] [xbp-40h] BYREF
      GLchar *string; // [xsp+118h] [xbp-28h] BYREF
    
      string = a2;
      Shader = glCreateShader((GLenum)this);
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v6 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v6 = "GL_INVALID_ENUM ";
            goto LABEL_8;
          case 1281:
            v6 = "GL_INVALID_VALUE ";
            goto LABEL_8;
          case 1282:
            goto LABEL_8;
          case 1285:
            v6 = "GL_OUT_OF_MEMORY ";
            goto LABEL_8;
          default:
            goto LABEL_6;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_6:
        v6 = "";
        if ( (_DWORD)Error == 1286 )
          v6 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_8:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v5,
          v6,
          Error,
          Error,
          54,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v43, v7);
      }
      if ( !(_DWORD)Shader )
        return 0;
      DebugPerformanceHud::addGenID(3, Shader);
      glShaderSource(Shader, 1, (const GLchar *const *)&string, 0);
      v8 = glGetError();
      if ( (int)v8 > 1279 )
      {
        v10 = "GL_INVALID_OPERATION ";
        switch ( (int)v8 )
        {
          case 1280:
            v10 = "GL_INVALID_ENUM ";
            goto LABEL_17;
          case 1281:
            v10 = "GL_INVALID_VALUE ";
            goto LABEL_17;
          case 1282:
            goto LABEL_17;
          case 1285:
            v10 = "GL_OUT_OF_MEMORY ";
            goto LABEL_17;
          default:
            goto LABEL_15;
        }
      }
      if ( (_DWORD)v8 )
      {
    LABEL_15:
        v10 = "";
        if ( (_DWORD)v8 == 1286 )
          v10 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_17:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v9,
          v10,
          v8,
          v8,
          61,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v42, v11);
      }
      glCompileShader(Shader);
      v12 = glGetError();
      if ( (int)v12 > 1279 )
      {
        v14 = "GL_INVALID_OPERATION ";
        switch ( (int)v12 )
        {
          case 1280:
            v14 = "GL_INVALID_ENUM ";
            goto LABEL_25;
          case 1281:
            v14 = "GL_INVALID_VALUE ";
            goto LABEL_25;
          case 1282:
            goto LABEL_25;
          case 1285:
            v14 = "GL_OUT_OF_MEMORY ";
            goto LABEL_25;
          default:
            goto LABEL_23;
        }
      }
      if ( (_DWORD)v12 )
      {
    LABEL_23:
        v14 = "";
        if ( (_DWORD)v12 == 1286 )
          v14 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_25:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v13,
          v14,
          v12,
          v12,
          62,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v41, v15);
      }
      glGetShaderiv(Shader, 0x8B81u, &params);
      v16 = glGetError();
      if ( (int)v16 > 1279 )
      {
        v18 = "GL_INVALID_OPERATION ";
        switch ( (int)v16 )
        {
          case 1280:
            v18 = "GL_INVALID_ENUM ";
            goto LABEL_33;
          case 1281:
            v18 = "GL_INVALID_VALUE ";
            goto LABEL_33;
          case 1282:
            goto LABEL_33;
          case 1285:
            v18 = "GL_OUT_OF_MEMORY ";
            goto LABEL_33;
          default:
            goto LABEL_31;
        }
      }
      if ( (_DWORD)v16 )
      {
    LABEL_31:
        v18 = "";
        if ( (_DWORD)v16 == 1286 )
          v18 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_33:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v17,
          v18,
          v16,
          v16,
          66,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v39.__pad[4], v19);
      }
      if ( !params )
      {
        HIDWORD(v39.__pad[3]) = 0;
        glGetShaderiv(Shader, 0x8B84u, (GLint *)&v39.__pad[3] + 1);
        v20 = glGetError();
        if ( (int)v20 > 1279 )
        {
          v22 = "GL_INVALID_OPERATION ";
          switch ( (int)v20 )
          {
            case 1280:
              v22 = "GL_INVALID_ENUM ";
              goto LABEL_42;
            case 1281:
              v22 = "GL_INVALID_VALUE ";
              goto LABEL_42;
            case 1282:
              goto LABEL_42;
            case 1285:
              v22 = "GL_OUT_OF_MEMORY ";
              goto LABEL_42;
            default:
              goto LABEL_40;
          }
        }
        if ( (_DWORD)v20 )
        {
    LABEL_40:
          v22 = "";
          if ( (_DWORD)v20 == 1286 )
            v22 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_42:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v21,
            v22,
            v20,
            v20,
            71,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)v39.__pad, v23);
        }
        v24 = HIDWORD(v39.__pad[3]);
        if ( SHIDWORD(v39.__pad[3]) >= 2 )
        {
          if ( (v39.__pad[3] & 0x8000000000000000LL) != 0LL )
            v25 = -1;
          else
            v25 = SHIDWORD(v39.__pad[3]);
          v26 = (GLchar *)operator new[](v25);
          glGetShaderInfoLog(Shader, v24, 0, v26);
          v27 = glGetError();
          if ( (int)v27 > 1279 )
          {
            v29 = "GL_INVALID_OPERATION ";
            switch ( (int)v27 )
            {
              case 1280:
                v29 = "GL_INVALID_ENUM ";
                goto LABEL_54;
              case 1281:
                v29 = "GL_INVALID_VALUE ";
                goto LABEL_54;
              case 1282:
                goto LABEL_54;
              case 1285:
                v29 = "GL_OUT_OF_MEMORY ";
                goto LABEL_54;
              default:
                goto LABEL_52;
            }
          }
          if ( (_DWORD)v27 )
          {
    LABEL_52:
            v29 = "";
            if ( (_DWORD)v27 == 1286 )
              v29 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_54:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v28,
              v29,
              v27,
              v27,
              75,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
            Debugger::error((Debugger *)&v39.si_addr, v30);
          }
          String::format((String *)"Shader::loadShader: %s", v28, v26);
          Debugger::warning(&v39, v31);
          String::~String();
          String::String(&v38, v26, SHIDWORD(v39.__pad[3]));
          String::operator=(&s_tempErrorLog);
          String::~String();
          operator delete[](v26);
        }
        glDeleteShader(Shader);
        v32 = glGetError();
        if ( (int)v32 > 1279 )
        {
          v34 = "GL_INVALID_OPERATION ";
          switch ( (int)v32 )
          {
            case 1280:
              v34 = "GL_INVALID_ENUM ";
              goto LABEL_63;
            case 1281:
              v34 = "GL_INVALID_VALUE ";
              goto LABEL_63;
            case 1282:
              goto LABEL_63;
            case 1285:
              v34 = "GL_OUT_OF_MEMORY ";
              goto LABEL_63;
            default:
              goto LABEL_61;
          }
        }
        if ( (_DWORD)v32 )
        {
    LABEL_61:
          v34 = "";
          if ( (_DWORD)v32 == 1286 )
            v34 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_63:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v33,
            v34,
            v32,
            v32,
            80,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)&v37, v35);
        }
        return 0;
      }
      return Shader;
    }

    bool __fastcall ShaderUtility::createProgram(#1408 *this, unsigned int *a2, GLuint a3, __int64 a4, const char **a5)
    {
      int v5; // w23
      GLuint v8; // w25
      __int64 Program; // x21
      __int64 Error; // x0
      const char *v12; // x1
      const char *v13; // x8
      const String *v14; // x1
      __int64 v15; // x0
      const char *v16; // x1
      const char *v17; // x8
      const String *v18; // x1
      __int64 v19; // x0
      const char *v20; // x1
      const char *v21; // x8
      const String *v22; // x1
      __int64 i; // x24
      const char *v24; // x9
      __int64 v25; // x0
      const char *v26; // x1
      const String *v27; // x1
      __int64 v28; // x0
      const char *v29; // x1
      const char *v30; // x8
      const String *v31; // x1
      __int64 v32; // x0
      const char *v33; // x1
      const char *v34; // x8
      const String *v35; // x1
      __int64 v36; // x0
      const char *v37; // x1
      const char *v38; // x8
      const String *v39; // x1
      GLsizei v40; // w23
      __int64 v41; // x0
      GLchar *v42; // x22
      __int64 v43; // x0
      const char *v44; // x1
      const char *v45; // x8
      const String *v46; // x1
      const String *v47; // x1
      __int64 v48; // x0
      const char *v49; // x1
      const char *v50; // x8
      const String *v51; // x1
      String v53; // [xsp+30h] [xbp-150h] BYREF
      __siginfo v54; // [xsp+48h] [xbp-138h] BYREF
      GLint params; // [xsp+B4h] [xbp-CCh] BYREF
      String v56; // [xsp+B8h] [xbp-C8h] BYREF
      String v57; // [xsp+D0h] [xbp-B0h] BYREF
      String v58; // [xsp+E8h] [xbp-98h] BYREF
      String v59; // [xsp+100h] [xbp-80h] BYREF
      String v60; // [xsp+118h] [xbp-68h] BYREF
    
      v5 = (int)a5;
      v8 = (unsigned int)a2;
      do
      {
        if ( !this
          && (unsigned int)Assert::report(
                             (Assert *)"outProg != NULL",
                             0,
                             "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp",
                             (const char *)0x5A,
                             (int)a5) )
        {
          abort();
        }
      }
      while ( Assert::g_false );
      Program = glCreateProgram();
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v13 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v13 = "GL_INVALID_ENUM ";
            goto LABEL_12;
          case 1281:
            v13 = "GL_INVALID_VALUE ";
            goto LABEL_12;
          case 1282:
            goto LABEL_12;
          case 1285:
            v13 = "GL_OUT_OF_MEMORY ";
            goto LABEL_12;
          default:
            goto LABEL_10;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_10:
        v13 = "";
        if ( (_DWORD)Error == 1286 )
          v13 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_12:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v12,
          v13,
          Error,
          Error,
          107,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v60, v14);
      }
      if ( !(_DWORD)Program )
        goto LABEL_91;
      DebugPerformanceHud::addGenID(4, Program);
      glAttachShader(Program, v8);
      v15 = glGetError();
      if ( (int)v15 > 1279 )
      {
        v17 = "GL_INVALID_OPERATION ";
        switch ( (int)v15 )
        {
          case 1280:
            v17 = "GL_INVALID_ENUM ";
            goto LABEL_21;
          case 1281:
            v17 = "GL_INVALID_VALUE ";
            goto LABEL_21;
          case 1282:
            goto LABEL_21;
          case 1285:
            v17 = "GL_OUT_OF_MEMORY ";
            goto LABEL_21;
          default:
            goto LABEL_19;
        }
      }
      if ( (_DWORD)v15 )
      {
    LABEL_19:
        v17 = "";
        if ( (_DWORD)v15 == 1286 )
          v17 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_21:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v16,
          v17,
          v15,
          v15,
          113,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v59, v18);
      }
      glAttachShader(Program, a3);
      v19 = glGetError();
      if ( (int)v19 > 1279 )
      {
        v21 = "GL_INVALID_OPERATION ";
        switch ( (int)v19 )
        {
          case 1280:
            v21 = "GL_INVALID_ENUM ";
            goto LABEL_29;
          case 1281:
            v21 = "GL_INVALID_VALUE ";
            goto LABEL_29;
          case 1282:
            goto LABEL_29;
          case 1285:
            v21 = "GL_OUT_OF_MEMORY ";
            goto LABEL_29;
          default:
            goto LABEL_27;
        }
      }
      if ( (_DWORD)v19 )
      {
    LABEL_27:
        v21 = "";
        if ( (_DWORD)v19 == 1286 )
          v21 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_29:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v20,
          v21,
          v19,
          v19,
          114,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v58, v22);
      }
      if ( v5 >= 1 )
      {
        for ( i = 0; i < v5; ++i )
        {
          glBindAttribLocation(Program, i, *(const GLchar **)(a4 + 8 * i));
          v25 = glGetError();
          if ( (int)v25 > 1279 )
          {
            v24 = "GL_INVALID_OPERATION ";
            switch ( (int)v25 )
            {
              case 1280:
                v24 = "GL_INVALID_ENUM ";
                goto LABEL_42;
              case 1281:
                v24 = "GL_INVALID_VALUE ";
                goto LABEL_42;
              case 1282:
                goto LABEL_42;
              case 1285:
                v24 = "GL_OUT_OF_MEMORY ";
                goto LABEL_42;
              default:
                goto LABEL_39;
            }
          }
          if ( (_DWORD)v25 )
          {
    LABEL_39:
            if ( (_DWORD)v25 == 1286 )
              v24 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
            else
              v24 = "";
    LABEL_42:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v26,
              v24,
              v25,
              v25,
              119,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
            Debugger::error((Debugger *)&v57, v27);
          }
        }
      }
      glLinkProgram(Program);
      v28 = glGetError();
      if ( (int)v28 > 1279 )
      {
        v30 = "GL_INVALID_OPERATION ";
        switch ( (int)v28 )
        {
          case 1280:
            v30 = "GL_INVALID_ENUM ";
            goto LABEL_51;
          case 1281:
            v30 = "GL_INVALID_VALUE ";
            goto LABEL_51;
          case 1282:
            goto LABEL_51;
          case 1285:
            v30 = "GL_OUT_OF_MEMORY ";
            goto LABEL_51;
          default:
            goto LABEL_49;
        }
      }
      if ( (_DWORD)v28 )
      {
    LABEL_49:
        v30 = "";
        if ( (_DWORD)v28 == 1286 )
          v30 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_51:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v29,
          v30,
          v28,
          v28,
          122,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v56, v31);
      }
      glGetProgramiv(Program, 0x8B82u, &params);
      v32 = glGetError();
      if ( (int)v32 > 1279 )
      {
        v34 = "GL_INVALID_OPERATION ";
        switch ( (int)v32 )
        {
          case 1280:
            v34 = "GL_INVALID_ENUM ";
            goto LABEL_59;
          case 1281:
            v34 = "GL_INVALID_VALUE ";
            goto LABEL_59;
          case 1282:
            goto LABEL_59;
          case 1285:
            v34 = "GL_OUT_OF_MEMORY ";
            goto LABEL_59;
          default:
            goto LABEL_57;
        }
      }
      if ( (_DWORD)v32 )
      {
    LABEL_57:
        v34 = "";
        if ( (_DWORD)v32 == 1286 )
          v34 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_59:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v33,
          v34,
          v32,
          v32,
          125,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v54.__pad[4], v35);
      }
      if ( !params )
      {
        HIDWORD(v54.__pad[3]) = 0;
        glGetProgramiv(Program, 0x8B84u, (GLint *)&v54.__pad[3] + 1);
        v36 = glGetError();
        if ( (int)v36 > 1279 )
        {
          v38 = "GL_INVALID_OPERATION ";
          switch ( (int)v36 )
          {
            case 1280:
              v38 = "GL_INVALID_ENUM ";
              goto LABEL_68;
            case 1281:
              v38 = "GL_INVALID_VALUE ";
              goto LABEL_68;
            case 1282:
              goto LABEL_68;
            case 1285:
              v38 = "GL_OUT_OF_MEMORY ";
              goto LABEL_68;
            default:
              goto LABEL_66;
          }
        }
        if ( (_DWORD)v36 )
        {
    LABEL_66:
          v38 = "";
          if ( (_DWORD)v36 == 1286 )
            v38 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_68:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v37,
            v38,
            v36,
            v36,
            130,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)v54.__pad, v39);
        }
        v40 = HIDWORD(v54.__pad[3]);
        if ( SHIDWORD(v54.__pad[3]) >= 2 )
        {
          if ( (v54.__pad[3] & 0x8000000000000000LL) != 0LL )
            v41 = -1;
          else
            v41 = SHIDWORD(v54.__pad[3]);
          v42 = (GLchar *)operator new[](v41);
          glGetProgramInfoLog(Program, v40, 0, v42);
          v43 = glGetError();
          if ( (int)v43 > 1279 )
          {
            v45 = "GL_INVALID_OPERATION ";
            switch ( (int)v43 )
            {
              case 1280:
                v45 = "GL_INVALID_ENUM ";
                goto LABEL_80;
              case 1281:
                v45 = "GL_INVALID_VALUE ";
                goto LABEL_80;
              case 1282:
                goto LABEL_80;
              case 1285:
                v45 = "GL_OUT_OF_MEMORY ";
                goto LABEL_80;
              default:
                goto LABEL_78;
            }
          }
          if ( (_DWORD)v43 )
          {
    LABEL_78:
            v45 = "";
            if ( (_DWORD)v43 == 1286 )
              v45 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_80:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v44,
              v45,
              v43,
              v43,
              134,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
            Debugger::error((Debugger *)&v54.si_addr, v46);
          }
          String::format((String *)"Shader::createProgram: %s", v44, v42);
          Debugger::warning(&v54, v47);
          String::~String();
          operator delete[](v42);
        }
        glDeleteProgram(Program);
        v48 = glGetError();
        if ( (int)v48 > 1279 )
        {
          v50 = "GL_INVALID_OPERATION ";
          switch ( (int)v48 )
          {
            case 1280:
              v50 = "GL_INVALID_ENUM ";
              goto LABEL_89;
            case 1281:
              v50 = "GL_INVALID_VALUE ";
              goto LABEL_89;
            case 1282:
              goto LABEL_89;
            case 1285:
              v50 = "GL_OUT_OF_MEMORY ";
              goto LABEL_89;
            default:
              goto LABEL_87;
          }
        }
        if ( (_DWORD)v48 )
        {
    LABEL_87:
          v50 = "";
          if ( (_DWORD)v48 == 1286 )
            v50 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_89:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v49,
            v50,
            v48,
            v48,
            138,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)&v53, v51);
        }
        DebugPerformanceHud::delGenID(4, Program);
    LABEL_91:
        LODWORD(Program) = 0;
      }
      *(_DWORD *)this = Program;
      return (_DWORD)Program != 0;
    }

    bool __fastcall ShaderUtility::createProgram(#1408 *this, unsigned int *a2, GLuint a3, unsigned int a4, int a5)
    {
      GLuint v6; // w23
      __int64 Program; // x20
      __int64 Error; // x0
      const char *v10; // x1
      const char *v11; // x8
      const String *v12; // x1
      __int64 v13; // x0
      const char *v14; // x1
      const char *v15; // x8
      const String *v16; // x1
      __int64 v17; // x0
      const char *v18; // x1
      const char *v19; // x8
      const String *v20; // x1
      __int64 v21; // x22
      const char *v22; // x8
      const GLchar *Name; // x0
      __int64 v24; // x0
      const char *v25; // x1
      const String *v26; // x1
      __int64 v27; // x0
      const char *v28; // x1
      const char *v29; // x8
      const String *v30; // x1
      __int64 v31; // x0
      const char *v32; // x1
      const char *v33; // x8
      const String *v34; // x1
      __int64 v35; // x0
      const char *v36; // x1
      const char *v37; // x8
      const String *v38; // x1
      GLsizei v39; // w23
      __int64 v40; // x0
      GLchar *v41; // x22
      __int64 v42; // x0
      const char *v43; // x1
      const char *v44; // x8
      const String *v45; // x1
      const String *v46; // x1
      __int64 v47; // x0
      const char *v48; // x1
      const char *v49; // x8
      const String *v50; // x1
      String v52; // [xsp+30h] [xbp-140h] BYREF
      __siginfo v53; // [xsp+48h] [xbp-128h] BYREF
      GLint params; // [xsp+B4h] [xbp-BCh] BYREF
      String v55; // [xsp+B8h] [xbp-B8h] BYREF
      String v56; // [xsp+D0h] [xbp-A0h] BYREF
      String v57; // [xsp+E8h] [xbp-88h] BYREF
      String v58; // [xsp+100h] [xbp-70h] BYREF
      String v59; // [xsp+118h] [xbp-58h] BYREF
    
      v6 = (unsigned int)a2;
      do
      {
        if ( !this
          && (unsigned int)Assert::report(
                             (Assert *)"outProg != NULL",
                             0,
                             "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp",
                             (const char *)0x99,
                             a5) )
        {
          abort();
        }
      }
      while ( Assert::g_false );
      Program = glCreateProgram();
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v11 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v11 = "GL_INVALID_ENUM ";
            goto LABEL_12;
          case 1281:
            v11 = "GL_INVALID_VALUE ";
            goto LABEL_12;
          case 1282:
            goto LABEL_12;
          case 1285:
            v11 = "GL_OUT_OF_MEMORY ";
            goto LABEL_12;
          default:
            goto LABEL_10;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_10:
        v11 = "";
        if ( (_DWORD)Error == 1286 )
          v11 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_12:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v10,
          v11,
          Error,
          Error,
          154,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v59, v12);
      }
      if ( !(_DWORD)Program )
        goto LABEL_88;
      DebugPerformanceHud::addGenID(4, Program);
      glAttachShader(Program, v6);
      v13 = glGetError();
      if ( (int)v13 > 1279 )
      {
        v15 = "GL_INVALID_OPERATION ";
        switch ( (int)v13 )
        {
          case 1280:
            v15 = "GL_INVALID_ENUM ";
            goto LABEL_21;
          case 1281:
            v15 = "GL_INVALID_VALUE ";
            goto LABEL_21;
          case 1282:
            goto LABEL_21;
          case 1285:
            v15 = "GL_OUT_OF_MEMORY ";
            goto LABEL_21;
          default:
            goto LABEL_19;
        }
      }
      if ( (_DWORD)v13 )
      {
    LABEL_19:
        v15 = "";
        if ( (_DWORD)v13 == 1286 )
          v15 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_21:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v14,
          v15,
          v13,
          v13,
          160,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v58, v16);
      }
      glAttachShader(Program, a3);
      v17 = glGetError();
      if ( (int)v17 > 1279 )
      {
        v19 = "GL_INVALID_OPERATION ";
        switch ( (int)v17 )
        {
          case 1280:
            v19 = "GL_INVALID_ENUM ";
            goto LABEL_29;
          case 1281:
            v19 = "GL_INVALID_VALUE ";
            goto LABEL_29;
          case 1282:
            goto LABEL_29;
          case 1285:
            v19 = "GL_OUT_OF_MEMORY ";
            goto LABEL_29;
          default:
            goto LABEL_27;
        }
      }
      if ( (_DWORD)v17 )
      {
    LABEL_27:
        v19 = "";
        if ( (_DWORD)v17 == 1286 )
          v19 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_29:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v18,
          v19,
          v17,
          v17,
          161,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v57, v20);
      }
      v21 = 0;
      do
      {
        Name = (const GLchar *)VertexAttr::getName(v21);
        glBindAttribLocation(Program, v21, Name);
        v24 = glGetError();
        if ( (int)v24 > 1279 )
        {
          v22 = "GL_INVALID_OPERATION ";
          switch ( (int)v24 )
          {
            case 1280:
              v22 = "GL_INVALID_ENUM ";
              goto LABEL_39;
            case 1281:
              v22 = "GL_INVALID_VALUE ";
              goto LABEL_39;
            case 1282:
              goto LABEL_39;
            case 1285:
              v22 = "GL_OUT_OF_MEMORY ";
              goto LABEL_39;
            default:
              goto LABEL_37;
          }
        }
        if ( (_DWORD)v24 )
        {
    LABEL_37:
          v22 = "";
          if ( (_DWORD)v24 == 1286 )
            v22 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_39:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v25,
            v22,
            v24,
            v24,
            167,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)&v56, v26);
        }
        v21 = (unsigned int)(v21 + 1);
      }
      while ( (int)v21 < 7 );
      glLinkProgram(Program);
      v27 = glGetError();
      if ( (int)v27 > 1279 )
      {
        v29 = "GL_INVALID_OPERATION ";
        switch ( (int)v27 )
        {
          case 1280:
            v29 = "GL_INVALID_ENUM ";
            goto LABEL_48;
          case 1281:
            v29 = "GL_INVALID_VALUE ";
            goto LABEL_48;
          case 1282:
            goto LABEL_48;
          case 1285:
            v29 = "GL_OUT_OF_MEMORY ";
            goto LABEL_48;
          default:
            goto LABEL_46;
        }
      }
      if ( (_DWORD)v27 )
      {
    LABEL_46:
        v29 = "";
        if ( (_DWORD)v27 == 1286 )
          v29 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_48:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v28,
          v29,
          v27,
          v27,
          173,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v55, v30);
      }
      glGetProgramiv(Program, 0x8B82u, &params);
      v31 = glGetError();
      if ( (int)v31 > 1279 )
      {
        v33 = "GL_INVALID_OPERATION ";
        switch ( (int)v31 )
        {
          case 1280:
            v33 = "GL_INVALID_ENUM ";
            goto LABEL_56;
          case 1281:
            v33 = "GL_INVALID_VALUE ";
            goto LABEL_56;
          case 1282:
            goto LABEL_56;
          case 1285:
            v33 = "GL_OUT_OF_MEMORY ";
            goto LABEL_56;
          default:
            goto LABEL_54;
        }
      }
      if ( (_DWORD)v31 )
      {
    LABEL_54:
        v33 = "";
        if ( (_DWORD)v31 == 1286 )
          v33 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_56:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v32,
          v33,
          v31,
          v31,
          176,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)&v53.__pad[4], v34);
      }
      if ( !params )
      {
        HIDWORD(v53.__pad[3]) = 0;
        glGetProgramiv(Program, 0x8B84u, (GLint *)&v53.__pad[3] + 1);
        v35 = glGetError();
        if ( (int)v35 > 1279 )
        {
          v37 = "GL_INVALID_OPERATION ";
          switch ( (int)v35 )
          {
            case 1280:
              v37 = "GL_INVALID_ENUM ";
              goto LABEL_65;
            case 1281:
              v37 = "GL_INVALID_VALUE ";
              goto LABEL_65;
            case 1282:
              goto LABEL_65;
            case 1285:
              v37 = "GL_OUT_OF_MEMORY ";
              goto LABEL_65;
            default:
              goto LABEL_63;
          }
        }
        if ( (_DWORD)v35 )
        {
    LABEL_63:
          v37 = "";
          if ( (_DWORD)v35 == 1286 )
            v37 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_65:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v36,
            v37,
            v35,
            v35,
            181,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)v53.__pad, v38);
        }
        v39 = HIDWORD(v53.__pad[3]);
        if ( SHIDWORD(v53.__pad[3]) >= 2 )
        {
          if ( (v53.__pad[3] & 0x8000000000000000LL) != 0LL )
            v40 = -1;
          else
            v40 = SHIDWORD(v53.__pad[3]);
          v41 = (GLchar *)operator new[](v40);
          glGetProgramInfoLog(Program, v39, 0, v41);
          v42 = glGetError();
          if ( (int)v42 > 1279 )
          {
            v44 = "GL_INVALID_OPERATION ";
            switch ( (int)v42 )
            {
              case 1280:
                v44 = "GL_INVALID_ENUM ";
                goto LABEL_77;
              case 1281:
                v44 = "GL_INVALID_VALUE ";
                goto LABEL_77;
              case 1282:
                goto LABEL_77;
              case 1285:
                v44 = "GL_OUT_OF_MEMORY ";
                goto LABEL_77;
              default:
                goto LABEL_75;
            }
          }
          if ( (_DWORD)v42 )
          {
    LABEL_75:
            v44 = "";
            if ( (_DWORD)v42 == 1286 )
              v44 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_77:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v43,
              v44,
              v42,
              v42,
              185,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
            Debugger::error((Debugger *)&v53.si_addr, v45);
          }
          String::format((String *)"%s", v43, v41);
          Debugger::warning(&v53, v46);
          String::~String();
          operator delete[](v41);
        }
        glDeleteProgram(Program);
        v47 = glGetError();
        if ( (int)v47 > 1279 )
        {
          v49 = "GL_INVALID_OPERATION ";
          switch ( (int)v47 )
          {
            case 1280:
              v49 = "GL_INVALID_ENUM ";
              goto LABEL_86;
            case 1281:
              v49 = "GL_INVALID_VALUE ";
              goto LABEL_86;
            case 1282:
              goto LABEL_86;
            case 1285:
              v49 = "GL_OUT_OF_MEMORY ";
              goto LABEL_86;
            default:
              goto LABEL_84;
          }
        }
        if ( (_DWORD)v47 )
        {
    LABEL_84:
          v49 = "";
          if ( (_DWORD)v47 == 1286 )
            v49 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_86:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v48,
            v49,
            v47,
            v47,
            189,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)&v52, v50);
        }
        DebugPerformanceHud::delGenID(4, Program);
    LABEL_88:
        LODWORD(Program) = 0;
      }
      *(_DWORD *)this = Program;
      return (_DWORD)Program != 0;
    }

}; // end class ShaderUtility
