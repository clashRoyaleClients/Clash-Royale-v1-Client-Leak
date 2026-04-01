class Shader
{
public:

    void __fastcall Shader::Shader(Shader *this)
    {
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      *(_QWORD *)this = 0;
    }

    GLuint *__fastcall Shader::unload(GLuint *this)
    {
      GLuint *v1; // x19
      __int64 Error; // x0
      const char *v3; // x1
      const char *v4; // x8
      const String *v5; // x1
      __int64 v6; // x0
      const char *v7; // x1
      const char *v8; // x8
      const String *v9; // x1
      __int64 v10; // x0
      const char *v11; // x1
      const char *v12; // x8
      const String *v13; // x1
      String v14; // [xsp+28h] [xbp-58h] BYREF
      String v15; // [xsp+40h] [xbp-40h] BYREF
      String v16; // [xsp+58h] [xbp-28h] BYREF
    
      v1 = this;
      if ( *this )
      {
        glDeleteShader(*(this + 2));
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
            425,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)&v16, v5);
        }
        DebugPerformanceHud::delGenID(3, v1[2]);
        glDeleteShader(v1[1]);
        v6 = glGetError();
        if ( (int)v6 > 1279 )
        {
          v8 = "GL_INVALID_OPERATION ";
          switch ( (int)v6 )
          {
            case 1280:
              v8 = "GL_INVALID_ENUM ";
              goto LABEL_17;
            case 1281:
              v8 = "GL_INVALID_VALUE ";
              goto LABEL_17;
            case 1282:
              goto LABEL_17;
            case 1285:
              v8 = "GL_OUT_OF_MEMORY ";
              goto LABEL_17;
            default:
              goto LABEL_15;
          }
        }
        if ( (_DWORD)v6 )
        {
    LABEL_15:
          v8 = "";
          if ( (_DWORD)v6 == 1286 )
            v8 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_17:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v7,
            v8,
            v6,
            v6,
            428,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)&v15, v9);
        }
        DebugPerformanceHud::delGenID(3, v1[1]);
        glDeleteProgram(*v1);
        v10 = glGetError();
        if ( (int)v10 > 1279 )
        {
          v12 = "GL_INVALID_OPERATION ";
          switch ( (int)v10 )
          {
            case 1280:
              v12 = "GL_INVALID_ENUM ";
              goto LABEL_25;
            case 1281:
              v12 = "GL_INVALID_VALUE ";
              goto LABEL_25;
            case 1282:
              goto LABEL_25;
            case 1285:
              v12 = "GL_OUT_OF_MEMORY ";
              goto LABEL_25;
            default:
              goto LABEL_23;
          }
        }
        if ( (_DWORD)v10 )
        {
    LABEL_23:
          v12 = "";
          if ( (_DWORD)v10 == 1286 )
            v12 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_25:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v11,
            v12,
            v10,
            v10,
            431,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)&v14, v13);
        }
        this = (GLuint *)DebugPerformanceHud::delGenID(4, *v1);
        v1[2] = 0;
        *(_QWORD *)v1 = 0;
      }
      return this;
    }

    __int64 __fastcall Shader::~Shader(__int64 a1)
    {
      Shader::unload((GLuint *)a1);
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = 0;
      return a1;
    }

    bool __fastcall Shader::load(__int64 a1, GLchar *a2, GLchar *a3, __int64 a4, const char **a5)
    {
      const char *v10; // x2
      int Shader; // w23
      const String *v12; // x2
      const char *v13; // x2
      int v14; // w22
      const String *v15; // x2
      _BOOL8 Program; // x19
      const char *v17; // x2
      _QWORD v19[3]; // [xsp+0h] [xbp-D0h] BYREF
      String v20; // [xsp+18h] [xbp-B8h] BYREF
      __int64 v21[3]; // [xsp+30h] [xbp-A0h] BYREF
      _QWORD v22[3]; // [xsp+48h] [xbp-88h] BYREF
      String v23; // [xsp+60h] [xbp-70h] BYREF
      __int64 v24[3]; // [xsp+78h] [xbp-58h] BYREF
    
      do
      {
        if ( !a2
          && (unsigned int)Assert::report(
                             (Assert *)"vsStr != NULL",
                             0,
                             "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp",
                             (const char *)0x128,
                             (int)a5) )
        {
          goto LABEL_7;
        }
      }
      while ( Assert::g_false );
      if ( !a3
        && (unsigned int)Assert::report(
                           (Assert *)"fsStr != NULL",
                           0,
                           "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp",
                           (const char *)0x129,
                           (int)a5) )
      {
    LABEL_7:
        abort();
      }
      String::operator=(&s_tempErrorLog, "-");
      Shader = ShaderUtility::loadShader((#1408 *)0x8B31, a2, v10);
      *(_DWORD *)(a1 + 4) = Shader;
      operator+(v22, "Failed at loading vertex shader ", &s_tempShaderFile);
      operator+(v22, ": ");
      operator+(v24, &v23, &s_tempErrorLog);
      Debugger::doAssert((Debugger *)(Shader != 0), (bool)v24, v12);
      String::~String();
      String::~String();
      String::~String();
      v14 = ShaderUtility::loadShader((#1408 *)0x8B30, a3, v13);
      *(_DWORD *)(a1 + 8) = v14;
      operator+(v19, "Failed at loading fragment shader ", &s_tempShaderFile);
      operator+(v19, ": ");
      operator+(v21, &v20, &s_tempErrorLog);
      Debugger::doAssert((Debugger *)(v14 != 0), (bool)v21, v15);
      String::~String();
      String::~String();
      String::~String();
      Program = ShaderUtility::createProgram(
                  (#1408 *)a1,
                  (unsigned int *)*(unsigned int *)(a1 + 4),
                  *(_DWORD *)(a1 + 8),
                  a4,
                  a5);
      Debugger::doAssert((Debugger *)(*(_DWORD *)a1 != 0), (bool)"Failed at loading shader program", v17);
      return Program;
    }

    bool __fastcall Shader::load(__int64 a1, GLchar *a2, GLchar *a3, const char *a4, int a5)
    {
      const char *v9; // x1
      const char *v10; // x2
      int Shader; // w21
      const String *v12; // x2
      const char *v13; // x2
      int v14; // w20
      const String *v15; // x2
      unsigned int v16; // w3
      int v17; // w4
      _BOOL8 Program; // x20
      const char *v19; // x2
      _QWORD v21[3]; // [xsp+0h] [xbp-D0h] BYREF
      String v22; // [xsp+18h] [xbp-B8h] BYREF
      __int64 v23[3]; // [xsp+30h] [xbp-A0h] BYREF
      _QWORD v24[3]; // [xsp+48h] [xbp-88h] BYREF
      String v25; // [xsp+60h] [xbp-70h] BYREF
      __int64 v26[3]; // [xsp+78h] [xbp-58h] BYREF
    
      do
      {
        if ( !a2
          && (unsigned int)Assert::report(
                             (Assert *)"vsStr != NULL",
                             0,
                             "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp",
                             (const char *)0x144,
                             a5) )
        {
          goto LABEL_10;
        }
      }
      while ( Assert::g_false );
      if ( !a3
        && (unsigned int)Assert::report(
                           (Assert *)"fsStr != NULL",
                           0,
                           "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp",
                           (const char *)0x145,
                           a5) )
      {
    LABEL_10:
        abort();
      }
      if ( a4 )
        v9 = a4;
      else
        v9 = "";
      String::operator=(&s_tempShaderFile, v9);
      String::operator=(&s_tempErrorLog, "-");
      Shader = ShaderUtility::loadShader((#1408 *)0x8B31, a2, v10);
      *(_DWORD *)(a1 + 4) = Shader;
      operator+(v24, "Failed at loading vertex shader ", &s_tempShaderFile);
      operator+(v24, ": ");
      operator+(v26, &v25, &s_tempErrorLog);
      Debugger::doAssert((Debugger *)(Shader != 0), (bool)v26, v12);
      String::~String();
      String::~String();
      String::~String();
      String::operator=(&s_tempErrorLog, "-");
      v14 = ShaderUtility::loadShader((#1408 *)0x8B30, a3, v13);
      *(_DWORD *)(a1 + 8) = v14;
      operator+(v21, "Failed at loading fragment shader ", &s_tempShaderFile);
      operator+(v21, ": ");
      operator+(v23, &v22, &s_tempErrorLog);
      Debugger::doAssert((Debugger *)(v14 != 0), (bool)v23, v15);
      String::~String();
      String::~String();
      String::~String();
      Program = ShaderUtility::createProgram(
                  (#1408 *)a1,
                  (unsigned int *)*(unsigned int *)(a1 + 4),
                  *(_DWORD *)(a1 + 8),
                  v16,
                  v17);
      Debugger::doAssert((Debugger *)(*(_DWORD *)a1 != 0), (bool)"Failed at loading shader program", v19);
      return Program;
    }

    __int64 __fastcall Shader::bind(GLuint *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
    {
      __int64 Error; // x0
      const char *v7; // x1
      const char *v8; // x8
      const String *v9; // x1
      _BYTE v11[24]; // [xsp+28h] [xbp-38h] BYREF
    
      do
      {
        if ( !*a1
          && (unsigned int)Assert::report(
                             (Assert *)"prog != 0",
                             0,
                             "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp",
                             (const char *)0x192,
                             a5) )
        {
          abort();
        }
      }
      while ( Assert::g_false );
      glUseProgram(*a1);
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v8 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v8 = "GL_INVALID_ENUM ";
            goto LABEL_11;
          case 1281:
            v8 = "GL_INVALID_VALUE ";
            goto LABEL_11;
          case 1282:
            goto LABEL_11;
          case 1285:
            v8 = "GL_OUT_OF_MEMORY ";
            goto LABEL_11;
          default:
            goto LABEL_9;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_9:
        v8 = "";
        if ( (_DWORD)Error == 1286 )
          v8 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_11:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v7,
          v8,
          Error,
          Error,
          403,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)v11, v9);
      }
      return DebugPerformanceHud::incrementValue(2, 1);
    }

    __int64 __fastcall Shader::unbind(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
    {
      __int64 Error; // x0
      const char *v7; // x1
      const char *v8; // x8
      const String *v9; // x1
      _BYTE v11[24]; // [xsp+28h] [xbp-38h] BYREF
    
      do
      {
        if ( !*a1
          && (unsigned int)Assert::report(
                             (Assert *)"prog != 0",
                             0,
                             "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp",
                             (const char *)0x19F,
                             a5) )
        {
          abort();
        }
      }
      while ( Assert::g_false );
      glUseProgram(0);
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v8 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v8 = "GL_INVALID_ENUM ";
            goto LABEL_11;
          case 1281:
            v8 = "GL_INVALID_VALUE ";
            goto LABEL_11;
          case 1282:
            goto LABEL_11;
          case 1285:
            v8 = "GL_OUT_OF_MEMORY ";
            goto LABEL_11;
          default:
            goto LABEL_9;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_9:
        v8 = "";
        if ( (_DWORD)Error == 1286 )
          v8 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_11:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v7,
          v8,
          Error,
          Error,
          416,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)v11, v9);
      }
      return DebugPerformanceHud::incrementValue(2, 1);
    }

    __int64 __fastcall Shader::setUniformMatrix(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
    {
      __int64 UniformLocation; // x0
    
      UniformLocation = Shader::getUniformLocation();
      return Shader::setUniformMatrix(UniformLocation, UniformLocation, a3, a4);
    }

    __int64 __fastcall Shader::getUniformLocation(GLuint *a1, const GLchar *a2)
    {
      __int64 UniformLocation; // x19
      __int64 Error; // x0
      const char *v4; // x1
      const char *v5; // x8
      const String *v6; // x1
      _BYTE v8[24]; // [xsp+18h] [xbp-28h] BYREF
    
      UniformLocation = glGetUniformLocation(*a1, a2);
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v5 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v5 = "GL_INVALID_ENUM ";
            goto LABEL_8;
          case 1281:
            v5 = "GL_INVALID_VALUE ";
            goto LABEL_8;
          case 1282:
            goto LABEL_8;
          case 1285:
            v5 = "GL_OUT_OF_MEMORY ";
            goto LABEL_8;
          default:
            goto LABEL_6;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_6:
        v5 = "";
        if ( (_DWORD)Error == 1286 )
          v5 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_8:
        String::format((String *)"Shader::getUniformLocation glGetError() = %s%i (0x%.8x)", v4, v5, Error, Error);
        Debugger::error((Debugger *)v8, v6);
      }
      return UniformLocation;
    }

    void __fastcall Shader::setUniformMatrix(__int64 a1, GLint a2, const GLfloat *a3, GLsizei a4)
    {
      __int64 Error; // x0
      const char *v5; // x1
      const char *v6; // x8
      const String *v7; // x1
      _BYTE v8[24]; // [xsp+28h] [xbp-28h] BYREF
    
      if ( a2 != -1 )
      {
        glUniformMatrix4fv(a2, a4, 0, a3);
        Error = glGetError();
        if ( (int)Error > 1279 )
        {
          v6 = "GL_INVALID_OPERATION ";
          switch ( (int)Error )
          {
            case 1280:
              v6 = "GL_INVALID_ENUM ";
              goto LABEL_9;
            case 1281:
              v6 = "GL_INVALID_VALUE ";
              goto LABEL_9;
            case 1282:
              goto LABEL_9;
            case 1285:
              v6 = "GL_OUT_OF_MEMORY ";
              goto LABEL_9;
            default:
              goto LABEL_7;
          }
        }
        if ( (_DWORD)Error )
        {
    LABEL_7:
          v6 = "";
          if ( (_DWORD)Error == 1286 )
            v6 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_9:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v5,
            v6,
            Error,
            Error,
            452,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)v8, v7);
        }
      }
    }

    __int64 __fastcall Shader::setUniformVector2(GLuint *a1, const GLchar *a2, long double a3, long double a4)
    {
      __int64 UniformLocation; // x1
    
      UniformLocation = Shader::getUniformLocation(a1, a2);
      return Shader::setUniformVector2(UniformLocation, UniformLocation, a3, a4);
    }

    void __fastcall Shader::setUniformVector2(GLfloat a1, GLfloat a2, __int64 a3, GLint a4)
    {
      __int64 Error; // x0
      const char *v5; // x1
      const char *v6; // x8
      const String *v7; // x1
      _BYTE v8[24]; // [xsp+28h] [xbp-28h] BYREF
    
      if ( a4 != -1 )
      {
        glUniform2f(a4, a1, a2);
        Error = glGetError();
        if ( (int)Error > 1279 )
        {
          v6 = "GL_INVALID_OPERATION ";
          switch ( (int)Error )
          {
            case 1280:
              v6 = "GL_INVALID_ENUM ";
              goto LABEL_9;
            case 1281:
              v6 = "GL_INVALID_VALUE ";
              goto LABEL_9;
            case 1282:
              goto LABEL_9;
            case 1285:
              v6 = "GL_OUT_OF_MEMORY ";
              goto LABEL_9;
            default:
              goto LABEL_7;
          }
        }
        if ( (_DWORD)Error )
        {
    LABEL_7:
          v6 = "";
          if ( (_DWORD)Error == 1286 )
            v6 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_9:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v5,
            v6,
            Error,
            Error,
            478,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)v8, v7);
        }
      }
    }

    __int64 __fastcall Shader::setUniformVector4(
            GLuint *a1,
            const GLchar *a2,
            long double a3,
            long double a4,
            long double a5,
            long double a6)
    {
      __int64 UniformLocation; // x1
    
      UniformLocation = Shader::getUniformLocation(a1, a2);
      return Shader::setUniformVector4(UniformLocation, UniformLocation, a3, a4, a5, a6);
    }

    void __fastcall Shader::setUniformVector4(GLfloat a1, GLfloat a2, GLfloat a3, GLfloat a4, __int64 a5, GLint a6)
    {
      __int64 Error; // x0
      const char *v7; // x1
      const char *v8; // x8
      const String *v9; // x1
      _BYTE v10[24]; // [xsp+28h] [xbp-28h] BYREF
    
      if ( a6 != -1 )
      {
        glUniform4f(a6, a1, a2, a3, a4);
        Error = glGetError();
        if ( (int)Error > 1279 )
        {
          v8 = "GL_INVALID_OPERATION ";
          switch ( (int)Error )
          {
            case 1280:
              v8 = "GL_INVALID_ENUM ";
              goto LABEL_9;
            case 1281:
              v8 = "GL_INVALID_VALUE ";
              goto LABEL_9;
            case 1282:
              goto LABEL_9;
            case 1285:
              v8 = "GL_OUT_OF_MEMORY ";
              goto LABEL_9;
            default:
              goto LABEL_7;
          }
        }
        if ( (_DWORD)Error )
        {
    LABEL_7:
          v8 = "";
          if ( (_DWORD)Error == 1286 )
            v8 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_9:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v7,
            v8,
            Error,
            Error,
            511,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)v10, v9);
        }
      }
    }

    __int64 __fastcall Shader::setTexture(GLuint *a1, GLuint a2, const GLchar *a3, GLint a4)
    {
      GLint UniformLocation; // w20
      __int64 Error; // x0
      const char *v8; // x1
      const char *v9; // x8
      const String *v10; // x1
      __int64 v11; // x0
      const char *v12; // x1
      const char *v13; // x8
      const String *v14; // x1
      __int64 result; // x0
      const char *v16; // x1
      const char *v17; // x8
      const String *v18; // x1
      _BYTE v19[24]; // [xsp+28h] [xbp-68h] BYREF
      _BYTE v20[24]; // [xsp+40h] [xbp-50h] BYREF
      _BYTE v21[24]; // [xsp+58h] [xbp-38h] BYREF
    
      UniformLocation = Shader::getUniformLocation(a1, a3);
      glActiveTexture(a4 + 33984);
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v9 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v9 = "GL_INVALID_ENUM ";
            goto LABEL_8;
          case 1281:
            v9 = "GL_INVALID_VALUE ";
            goto LABEL_8;
          case 1282:
            goto LABEL_8;
          case 1285:
            v9 = "GL_OUT_OF_MEMORY ";
            goto LABEL_8;
          default:
            goto LABEL_6;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_6:
        v9 = "";
        if ( (_DWORD)Error == 1286 )
          v9 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_8:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v8,
          v9,
          Error,
          Error,
          545,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)v21, v10);
      }
      glBindTexture(0xDE1u, a2);
      v11 = glGetError();
      if ( (int)v11 > 1279 )
      {
        v13 = "GL_INVALID_OPERATION ";
        switch ( (int)v11 )
        {
          case 1280:
            v13 = "GL_INVALID_ENUM ";
            goto LABEL_16;
          case 1281:
            v13 = "GL_INVALID_VALUE ";
            goto LABEL_16;
          case 1282:
            goto LABEL_16;
          case 1285:
            v13 = "GL_OUT_OF_MEMORY ";
            goto LABEL_16;
          default:
            goto LABEL_14;
        }
      }
      if ( (_DWORD)v11 )
      {
    LABEL_14:
        v13 = "";
        if ( (_DWORD)v11 == 1286 )
          v13 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_16:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v12,
          v13,
          v11,
          v11,
          546,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
        Debugger::error((Debugger *)v20, v14);
      }
      result = DebugPerformanceHud::incrementValue(3, 1);
      if ( UniformLocation != -1 )
      {
        glUniform1i(UniformLocation, a4);
        result = glGetError();
        if ( (int)result > 1279 )
        {
          v17 = "GL_INVALID_OPERATION ";
          switch ( (int)result )
          {
            case 1280:
              v17 = "GL_INVALID_ENUM ";
              goto LABEL_25;
            case 1281:
              v17 = "GL_INVALID_VALUE ";
              goto LABEL_25;
            case 1282:
              goto LABEL_25;
            case 1285:
              v17 = "GL_OUT_OF_MEMORY ";
              goto LABEL_25;
            default:
              goto LABEL_23;
          }
        }
        if ( (_DWORD)result )
        {
    LABEL_23:
          v17 = "";
          if ( (_DWORD)result == 1286 )
            v17 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_25:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v16,
            v17,
            result,
            result,
            553,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)v19, v18);
        }
      }
      return result;
    }

    void __fastcall Shader::setUniformInt1(__int64 a1, GLint a2, GLint a3)
    {
      __int64 Error; // x0
      const char *v4; // x1
      const char *v5; // x8
      const String *v6; // x1
      _BYTE v7[24]; // [xsp+28h] [xbp-28h] BYREF
    
      if ( a2 != -1 )
      {
        glUniform1i(a2, a3);
        Error = glGetError();
        if ( (int)Error > 1279 )
        {
          v5 = "GL_INVALID_OPERATION ";
          switch ( (int)Error )
          {
            case 1280:
              v5 = "GL_INVALID_ENUM ";
              goto LABEL_9;
            case 1281:
              v5 = "GL_INVALID_VALUE ";
              goto LABEL_9;
            case 1282:
              goto LABEL_9;
            case 1285:
              v5 = "GL_OUT_OF_MEMORY ";
              goto LABEL_9;
            default:
              goto LABEL_7;
          }
        }
        if ( (_DWORD)Error )
        {
    LABEL_7:
          v5 = "";
          if ( (_DWORD)Error == 1286 )
            v5 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_9:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v4,
            v5,
            Error,
            Error,
            576,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)v7, v6);
        }
      }
    }

    void __fastcall Shader::setUniformInt1(GLuint *a1, const GLchar *a2, GLint a3)
    {
      __int64 UniformLocation; // x0
    
      UniformLocation = Shader::getUniformLocation(a1, a2);
      Shader::setUniformInt1(UniformLocation, UniformLocation, a3);
    }

    void __fastcall Shader::setUniformFloat(GLfloat a1, __int64 a2, GLint a3)
    {
      __int64 Error; // x0
      const char *v4; // x1
      const char *v5; // x8
      const String *v6; // x1
      _BYTE v7[24]; // [xsp+28h] [xbp-28h] BYREF
    
      if ( a3 != -1 )
      {
        glUniform1f(a3, a1);
        Error = glGetError();
        if ( (int)Error > 1279 )
        {
          v5 = "GL_INVALID_OPERATION ";
          switch ( (int)Error )
          {
            case 1280:
              v5 = "GL_INVALID_ENUM ";
              goto LABEL_9;
            case 1281:
              v5 = "GL_INVALID_VALUE ";
              goto LABEL_9;
            case 1282:
              goto LABEL_9;
            case 1285:
              v5 = "GL_OUT_OF_MEMORY ";
              goto LABEL_9;
            default:
              goto LABEL_7;
          }
        }
        if ( (_DWORD)Error )
        {
    LABEL_7:
          v5 = "";
          if ( (_DWORD)Error == 1286 )
            v5 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_9:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            v4,
            v5,
            Error,
            Error,
            591,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Shader.cpp");
          Debugger::error((Debugger *)v7, v6);
        }
      }
    }

    void __fastcall Shader::setUniformFloat(GLuint *a1, const GLchar *a2, GLfloat a3)
    {
      __int64 UniformLocation; // x0
    
      UniformLocation = Shader::getUniformLocation(a1, a2);
      Shader::setUniformFloat(a3, UniformLocation, UniformLocation);
    }

}; // end class Shader
