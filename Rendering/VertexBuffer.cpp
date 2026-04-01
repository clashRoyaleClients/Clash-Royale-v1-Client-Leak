class VertexBuffer
{
public:

    __int64 __fastcall VertexBuffer::VertexBuffer(__int64 a1, const void *a2, unsigned int a3, int *a4, unsigned int a5)
    {
      unsigned int v5; // w22
      size_t v10; // x24
      void *v11; // x0
      int v12; // w8
      int *v13; // x9
      int v14; // w11
      int v15; // t1
    
      v5 = a5;
      *(_DWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 36) = 5;
      *(_DWORD *)a1 = a5;
      v10 = 16LL * a5;
      v11 = (void *)operator new[](v10);
      *(_QWORD *)(a1 + 8) = v11;
      memcpy(v11, a4, v10);
      *(_DWORD *)(a1 + 16) = 0;
      if ( v5 )
      {
        v12 = 0;
        v13 = a4 + 2;
        do
        {
          v14 = *(v13 - 1);
          v15 = *v13;
          v13 += 4;
          v12 += VertexAttrType::g_size[v15] * v14;
          *(_DWORD *)(a1 + 16) = v12;
          --v5;
        }
        while ( v5 );
      }
      *(_QWORD *)(a1 + 28) = 0;
      VertexBuffer::createVbo((VertexBuffer *)a1, a2, a3);
      return a1;
    }

    __int64 __fastcall VertexBuffer::createVbo(GLuint *a1, const GLvoid *a2, GLuint a3)
    {
      GLuint *v6; // x21
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
    
      v6 = a1 + 7;
      if ( a1[7] )
        VertexBuffer::destroyVbo(a1);
      a1[5] = a3;
      glGenBuffers(1, v6);
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v9 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v9 = "GL_INVALID_ENUM ";
            goto LABEL_10;
          case 1281:
            v9 = "GL_INVALID_VALUE ";
            goto LABEL_10;
          case 1282:
            goto LABEL_10;
          case 1285:
            v9 = "GL_OUT_OF_MEMORY ";
            goto LABEL_10;
          default:
            goto LABEL_8;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_8:
        v9 = "";
        if ( (_DWORD)Error == 1286 )
          v9 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_10:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v8,
          v9,
          Error,
          Error,
          160,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/VertexBuffer.cpp");
        Debugger::error((Debugger *)v21, v10);
      }
      DebugPerformanceHud::addGenID(2, *v6);
      glBindBuffer(0x8892u, *v6);
      v11 = glGetError();
      if ( (int)v11 > 1279 )
      {
        v13 = "GL_INVALID_OPERATION ";
        switch ( (int)v11 )
        {
          case 1280:
            v13 = "GL_INVALID_ENUM ";
            goto LABEL_18;
          case 1281:
            v13 = "GL_INVALID_VALUE ";
            goto LABEL_18;
          case 1282:
            goto LABEL_18;
          case 1285:
            v13 = "GL_OUT_OF_MEMORY ";
            goto LABEL_18;
          default:
            goto LABEL_16;
        }
      }
      if ( (_DWORD)v11 )
      {
    LABEL_16:
        v13 = "";
        if ( (_DWORD)v11 == 1286 )
          v13 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_18:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v12,
          v13,
          v11,
          v11,
          162,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/VertexBuffer.cpp");
        Debugger::error((Debugger *)v20, v14);
      }
      glBufferData(0x8892u, a1[5] * a1[4], a2, 0x88E4u);
      result = glGetError();
      if ( (int)result > 1279 )
      {
        v17 = "GL_INVALID_OPERATION ";
        switch ( (int)result )
        {
          case 1280:
            v17 = "GL_INVALID_ENUM ";
            goto LABEL_26;
          case 1281:
            v17 = "GL_INVALID_VALUE ";
            goto LABEL_26;
          case 1282:
            goto LABEL_26;
          case 1285:
            v17 = "GL_OUT_OF_MEMORY ";
            goto LABEL_26;
          default:
            goto LABEL_24;
        }
      }
      if ( (_DWORD)result )
      {
    LABEL_24:
        v17 = "";
        if ( (_DWORD)result == 1286 )
          v17 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_26:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v16,
          v17,
          result,
          result,
          171,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/VertexBuffer.cpp");
        Debugger::error((Debugger *)v19, v18);
      }
      return result;
    }

    __int64 __fastcall VertexBuffer::VertexBuffer(__int64 a1, const void *a2, unsigned int a3, int *a4, unsigned int a5)
    {
      VertexBuffer::VertexBuffer(a1, a2, a3, a4, a5);
      return a1;
    }

    void __fastcall VertexBuffer::~VertexBuffer(GLuint *this)
    {
      __int64 v2; // x0
    
      VertexBuffer::destroyVbo(this);
      VertexBuffer::destroyIbo((VertexBuffer *)this);
      v2 = *((_QWORD *)this + 1);
      if ( v2 )
        operator delete[](v2);
      *this = 0;
      *(this + 8) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 1) = 0;
      *(this + 9) = 5;
    }

    __int64 __fastcall VertexBuffer::destroyVbo(__int64 buffers)
    {
      const GLuint *v1; // x19
      __int64 Error; // x0
      const char *v3; // x1
      const char *v4; // x8
      const String *v5; // x1
      String v6; // [xsp+28h] [xbp-28h] BYREF
    
      v1 = (const GLuint *)(buffers + 28);
      if ( *(_DWORD *)(buffers + 28) )
      {
        glDeleteBuffers(1, v1);
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
            200,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/VertexBuffer.cpp");
          Debugger::error((Debugger *)&v6, v5);
        }
        buffers = DebugPerformanceHud::delGenID(2, *v1);
        *v1 = 0;
      }
      return buffers;
    }

    __int64 __fastcall VertexBuffer::destroyIbo(__int64 result)
    {
      const GLuint *v1; // x19
      __int64 Error; // x0
      const char *v3; // x1
      const char *v4; // x8
      const String *v5; // x1
      String v6; // [xsp+28h] [xbp-28h] BYREF
    
      v1 = (const GLuint *)(result + 32);
      if ( *(_DWORD *)(result + 32) )
      {
        glDeleteBuffers(1, v1);
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
            254,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/VertexBuffer.cpp");
          Debugger::error((Debugger *)&v6, v5);
        }
        result = DebugPerformanceHud::delGenID(2, *v1);
        *v1 = 0;
      }
      return result;
    }

    void __fastcall VertexBuffer::~VertexBuffer(GLuint *this)
    {
      VertexBuffer::~VertexBuffer(this);
    }

    __int64 __fastcall VertexBuffer::createIbo(GLuint *buffers, const unsigned __int16 *a2, GLuint a3)
    {
      GLuint *v6; // x21
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
      String v19; // [xsp+28h] [xbp-68h] BYREF
      String v20; // [xsp+40h] [xbp-50h] BYREF
      String v21; // [xsp+58h] [xbp-38h] BYREF
    
      v6 = buffers + 8;
      if ( buffers[8] )
        VertexBuffer::destroyIbo((__int64)buffers);
      buffers[6] = a3;
      glGenBuffers(1, v6);
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v9 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v9 = "GL_INVALID_ENUM ";
            goto LABEL_10;
          case 1281:
            v9 = "GL_INVALID_VALUE ";
            goto LABEL_10;
          case 1282:
            goto LABEL_10;
          case 1285:
            v9 = "GL_OUT_OF_MEMORY ";
            goto LABEL_10;
          default:
            goto LABEL_8;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_8:
        v9 = "";
        if ( (_DWORD)Error == 1286 )
          v9 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_10:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v8,
          v9,
          Error,
          Error,
          215,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/VertexBuffer.cpp");
        Debugger::error((Debugger *)&v21, v10);
      }
      DebugPerformanceHud::addGenID(2, *v6);
      glBindBuffer(0x8893u, *v6);
      v11 = glGetError();
      if ( (int)v11 > 1279 )
      {
        v13 = "GL_INVALID_OPERATION ";
        switch ( (int)v11 )
        {
          case 1280:
            v13 = "GL_INVALID_ENUM ";
            goto LABEL_18;
          case 1281:
            v13 = "GL_INVALID_VALUE ";
            goto LABEL_18;
          case 1282:
            goto LABEL_18;
          case 1285:
            v13 = "GL_OUT_OF_MEMORY ";
            goto LABEL_18;
          default:
            goto LABEL_16;
        }
      }
      if ( (_DWORD)v11 )
      {
    LABEL_16:
        v13 = "";
        if ( (_DWORD)v11 == 1286 )
          v13 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_18:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v12,
          v13,
          v11,
          v11,
          217,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/VertexBuffer.cpp");
        Debugger::error((Debugger *)&v20, v14);
      }
      glBufferData(0x8893u, 2LL * buffers[6], a2, 0x88E4u);
      result = glGetError();
      if ( (int)result > 1279 )
      {
        v17 = "GL_INVALID_OPERATION ";
        switch ( (int)result )
        {
          case 1280:
            v17 = "GL_INVALID_ENUM ";
            goto LABEL_26;
          case 1281:
            v17 = "GL_INVALID_VALUE ";
            goto LABEL_26;
          case 1282:
            goto LABEL_26;
          case 1285:
            v17 = "GL_OUT_OF_MEMORY ";
            goto LABEL_26;
          default:
            goto LABEL_24;
        }
      }
      if ( (_DWORD)result )
      {
    LABEL_24:
        v17 = "";
        if ( (_DWORD)result == 1286 )
          v17 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_26:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          v16,
          v17,
          result,
          result,
          226,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/VertexBuffer.cpp");
        Debugger::error((Debugger *)&v19, v18);
      }
      return result;
    }

}; // end class VertexBuffer
