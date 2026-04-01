class Renderer
{
public:

    __int64 __fastcall Renderer::setViewport(GLint a1, GLint a2, GLsizei a3, GLsizei a4)
    {
      __int64 result; // x0
      const char *v5; // x1
      const char *v6; // x8
      const String *v7; // x1
      _BYTE v8[24]; // [xsp+28h] [xbp-28h] BYREF
    
      Renderer::g_vp = a1;
      Renderer::g_vp = a2;
      Renderer::g_vp = a3;
      Renderer::g_vp = a4;
      glViewport(a1, a2, a3, a4);
      result = glGetError();
      if ( (int)result > 1279 )
      {
        v6 = "GL_INVALID_OPERATION ";
        switch ( (int)result )
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
      if ( (_DWORD)result )
      {
    LABEL_6:
        v6 = "";
        if ( (_DWORD)result == 1286 )
          v6 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_8:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v5,
          v6,
          result,
          result,
          58,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Renderer.cpp");
        Debugger::error((Debugger *)v8, v7);
      }
      return result;
    }

    void __fastcall Renderer::clearColor(unsigned int a1)
    {
      GLfloat alpha; // [xsp+0h] [xbp-10h] BYREF
      GLfloat v2; // [xsp+4h] [xbp-Ch] BYREF
      GLfloat v3; // [xsp+8h] [xbp-8h] BYREF
      GLfloat v4; // [xsp+Ch] [xbp-4h] BYREF
    
      col32ToFloatRGBA(a1, &v4, &v3, &v2, &alpha);
      glClearColor(v4, v3, v2, alpha);
    }

    void __fastcall Renderer::clear(unsigned int a1)
    {
      glClear(((_WORD)a1 << 14) & 0x4000 | (((a1 >> 1) & 1) << 8) & 0xFFFFFBFF | (((a1 >> 2) & 1) << 10));
    }

    __int64 __fastcall Renderer::prepareRender(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
    {
      __int64 Error; // x0
      const char *v7; // x1
      const char *v8; // x8
      const String *v9; // x1
      __int64 result; // x0
      const char *v11; // x1
      const char *v12; // x8
      const String *v13; // x1
      unsigned __int64 v14; // x24
      __int64 v15; // x25
      unsigned __int64 i; // x26
      const char *v17; // x9
      const char *v18; // x9
      __int64 v19; // x27
      GLenum GLType; // w22
      GLuint v21; // w23
      __int64 v22; // x0
      const char *v23; // x1
      const String *v24; // x1
      const char *v25; // x1
      const String *v26; // x1
      _BYTE v27[24]; // [xsp+30h] [xbp-B0h] BYREF
      _BYTE v28[24]; // [xsp+48h] [xbp-98h] BYREF
      _BYTE v29[24]; // [xsp+60h] [xbp-80h] BYREF
      _BYTE v30[24]; // [xsp+78h] [xbp-68h] BYREF
    
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      do
      {
        if ( !a1[7]
          && (unsigned int)Assert::report(
                             (Assert *)"buf.hasVbo()",
                             0,
                             "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Renderer.cpp",
                             (const char *)0x5E,
                             a5) )
        {
          abort();
        }
      }
      while ( Assert::g_false );
      glBindBuffer(0x8892u, a1[7]);
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v8 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v8 = "GL_INVALID_ENUM ";
            goto LABEL_13;
          case 1281:
            v8 = "GL_INVALID_VALUE ";
            goto LABEL_13;
          case 1282:
            goto LABEL_13;
          case 1285:
            v8 = "GL_OUT_OF_MEMORY ";
            goto LABEL_13;
          default:
            goto LABEL_11;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_11:
        v8 = "";
        if ( (_DWORD)Error == 1286 )
          v8 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_13:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v7,
          v8,
          Error,
          Error,
          96,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Renderer.cpp");
        Debugger::error((Debugger *)v30, v9);
      }
      glBindBuffer(0x8893u, a1[8]);
      result = glGetError();
      if ( (int)result > 1279 )
      {
        v12 = "GL_INVALID_OPERATION ";
        switch ( (int)result )
        {
          case 1280:
            v12 = "GL_INVALID_ENUM ";
            goto LABEL_21;
          case 1281:
            v12 = "GL_INVALID_VALUE ";
            goto LABEL_21;
          case 1282:
            goto LABEL_21;
          case 1285:
            v12 = "GL_OUT_OF_MEMORY ";
            goto LABEL_21;
          default:
            goto LABEL_19;
        }
      }
      if ( (_DWORD)result )
      {
    LABEL_19:
        v12 = "";
        if ( (_DWORD)result == 1286 )
          v12 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_21:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v11,
          v12,
          result,
          result,
          97,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Renderer.cpp");
        Debugger::error((Debugger *)v29, v13);
      }
      v14 = *a1;
      if ( (_DWORD)v14 )
      {
        v15 = 0;
        for ( i = 0; i < v14; ++i )
        {
          v19 = *((_QWORD *)a1 + 1);
          GLType = VertexAttrType::getGLType(*(unsigned int *)(v19 + v15 + 8));
          v21 = *(_DWORD *)(v19 + v15 + 12);
          glEnableVertexAttribArray(v21);
          v22 = glGetError();
          if ( (int)v22 > 1279 )
          {
            v17 = "GL_INVALID_OPERATION ";
            switch ( (int)v22 )
            {
              case 1280:
                v17 = "GL_INVALID_ENUM ";
                goto LABEL_35;
              case 1281:
                v17 = "GL_INVALID_VALUE ";
                goto LABEL_35;
              case 1282:
                goto LABEL_35;
              case 1285:
                v17 = "GL_OUT_OF_MEMORY ";
                goto LABEL_35;
              default:
                goto LABEL_33;
            }
          }
          if ( (_DWORD)v22 )
          {
    LABEL_33:
            v17 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
            if ( (_DWORD)v22 != 1286 )
              v17 = "";
    LABEL_35:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v23,
              v17,
              v22,
              v22,
              109,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Renderer.cpp");
            Debugger::error((Debugger *)v28, v24);
          }
          glVertexAttribPointer(
            v21,
            *(_DWORD *)(v19 + v15 + 4),
            GLType,
            GLType != 5126,
            a1[4],
            (const GLvoid *)*(unsigned int *)(v19 + v15));
          result = glGetError();
          if ( (int)result > 1279 )
          {
            v18 = "GL_INVALID_OPERATION ";
            switch ( (int)result )
            {
              case 1280:
                v18 = "GL_INVALID_ENUM ";
                goto LABEL_43;
              case 1281:
                v18 = "GL_INVALID_VALUE ";
                goto LABEL_43;
              case 1282:
                goto LABEL_43;
              case 1285:
                v18 = "GL_OUT_OF_MEMORY ";
                goto LABEL_43;
              default:
                goto LABEL_41;
            }
          }
          if ( (_DWORD)result )
          {
    LABEL_41:
            v18 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
            if ( (_DWORD)result != 1286 )
              v18 = "";
    LABEL_43:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v25,
              v18,
              result,
              result,
              110,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Renderer.cpp");
            Debugger::error((Debugger *)v27, v26);
          }
          v15 += 16;
        }
      }
      return result;
    }

    __int64 __fastcall Renderer::renderPart(_DWORD *a1, GLint a2, __int64 a3)
    {
      unsigned int v6; // w20
      GLenum GLDrawmode; // w0
      int v8; // w8
      __int64 v9; // x0
      const char *v10; // x1
      const char *v11; // x8
      const String *v12; // x1
      __int64 Error; // x0
      const char *v14; // x1
      const char *v15; // x8
      const String *v16; // x1
      __int64 result; // x0
      _BYTE v18[24]; // [xsp+30h] [xbp-50h] BYREF
      _BYTE v19[24]; // [xsp+48h] [xbp-38h] BYREF
    
      v6 = a1[9];
      GLDrawmode = DrawMode::getGLDrawmode(v6);
      v8 = a1[8];
      if ( (a3 & 0x80000000) != 0 )
      {
        if ( !v8 )
        {
          a3 = (unsigned int)(a1[5] - a2);
    LABEL_15:
          glDrawArrays(GLDrawmode, a2, a3);
          Error = glGetError();
          if ( (int)Error > 1279 )
          {
            v15 = "GL_INVALID_OPERATION ";
            switch ( (int)Error )
            {
              case 1280:
                v15 = "GL_INVALID_ENUM ";
                goto LABEL_22;
              case 1281:
                v15 = "GL_INVALID_VALUE ";
                goto LABEL_22;
              case 1282:
                goto LABEL_22;
              case 1285:
                v15 = "GL_OUT_OF_MEMORY ";
                goto LABEL_22;
              default:
                goto LABEL_20;
            }
          }
          if ( (_DWORD)Error )
          {
    LABEL_20:
            v15 = "";
            if ( (_DWORD)Error == 1286 )
              v15 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_22:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v14,
              v15,
              Error,
              Error,
              134,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Renderer.cpp");
            Debugger::error((Debugger *)v18, v16);
          }
          goto LABEL_23;
        }
        a3 = (unsigned int)(a1[6] - a2);
      }
      else if ( !v8 )
      {
        goto LABEL_15;
      }
      glDrawElements(GLDrawmode, a3, 0x1403u, (const GLvoid *)(2LL * a2));
      v9 = glGetError();
      if ( (int)v9 > 1279 )
      {
        v11 = "GL_INVALID_OPERATION ";
        switch ( (int)v9 )
        {
          case 1280:
            v11 = "GL_INVALID_ENUM ";
            goto LABEL_13;
          case 1281:
            v11 = "GL_INVALID_VALUE ";
            goto LABEL_13;
          case 1282:
            goto LABEL_13;
          case 1285:
            v11 = "GL_OUT_OF_MEMORY ";
            goto LABEL_13;
          default:
            goto LABEL_11;
        }
      }
      if ( (_DWORD)v9 )
      {
    LABEL_11:
        v11 = "";
        if ( (_DWORD)v9 == 1286 )
          v11 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_13:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v10,
          v11,
          v9,
          v9,
          130,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Renderer.cpp");
        Debugger::error((Debugger *)v19, v12);
      }
    LABEL_23:
      result = DebugPerformanceHud::incrementValue(1, 1);
      if ( v6 != 3 )
        return DebugPerformanceHud::incrementValue(4, a3);
      return result;
    }

    __int64 __fastcall Renderer::render(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
    {
      GLint v6; // w20
    
      v6 = a2;
      Renderer::prepareRender(a1, a2, a3, a4, a5);
      Renderer::renderPart(a1, v6, a3);
      return Renderer::finishedRender(a1);
    }

    unsigned int *__fastcall Renderer::finishedRender(unsigned int *result)
    {
      unsigned int *v1; // x19
      unsigned __int64 v2; // x21
      unsigned __int64 v3; // x22
      __int64 v4; // x27
      const char *v5; // x9
      const char *v6; // x1
      const String *v7; // x1
      char v8[24]; // [xsp+28h] [xbp-68h] BYREF
    
      v1 = result;
      v2 = *result;
      if ( (_DWORD)v2 )
      {
        v3 = 0;
        v4 = 12;
        do
        {
          glDisableVertexAttribArray(*(_DWORD *)(*((_QWORD *)v1 + 1) + v4));
          result = (unsigned int *)glGetError();
          if ( (int)result > 1279 )
          {
            v5 = "GL_INVALID_OPERATION ";
            switch ( (int)result )
            {
              case 1280:
                v5 = "GL_INVALID_ENUM ";
                goto LABEL_13;
              case 1281:
                v5 = "GL_INVALID_VALUE ";
                goto LABEL_13;
              case 1282:
                goto LABEL_13;
              case 1285:
                v5 = "GL_OUT_OF_MEMORY ";
                goto LABEL_13;
              default:
                goto LABEL_10;
            }
          }
          if ( (_DWORD)result )
          {
    LABEL_10:
            if ( (_DWORD)result == 1286 )
              v5 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
            else
              v5 = "";
    LABEL_13:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              v6,
              v5,
              result,
              result,
              162,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/Renderer.cpp");
            Debugger::error((Debugger *)v8, v7);
          }
          ++v3;
          v4 += 16;
        }
        while ( v3 < v2 );
      }
      return result;
    }

    __int64 *__fastcall Renderer::getPixelMatrix(DataLoaderFactory *this)
    {
      return (__int64 *)xMatrix44::createOrthographicProjection(
                          this,
                          (float)Renderer::g_vp,
                          (float)(Renderer::g_vp + Renderer::g_vp),
                          (float)(Renderer::g_vp + Renderer::g_vp),
                          (float)Renderer::g_vp,
                          -1.0,
                          1.0);
    }

}; // end class Renderer
