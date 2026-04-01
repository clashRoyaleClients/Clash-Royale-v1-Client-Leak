class Stage
{
public:

    __int64 __fastcall Stage::Stage(__int64 a1)
    {
      __int64 v2; // x19
      #1336 *v3; // x22
      unsigned __int64 v4; // x8
      __int64 v5; // x9
      __int64 v6; // x8
      __int64 v7; // x0
      _DWORD *v8; // x21
      __int64 Error; // x0
      const char *v10; // x8
      __int64 v11; // x0
      const char *v12; // x8
      unsigned __int64 v13; // x21
      _BYTE *v14; // x22
      int v15; // w8
      int i; // w21
      String v18; // [xsp+28h] [xbp-498h] BYREF
      String v19; // [xsp+40h] [xbp-480h] BYREF
      _BYTE v20[257]; // [xsp+58h] [xbp-468h] BYREF
      _BYTE v21[7]; // [xsp+159h] [xbp-367h] BYREF
    
      *(_QWORD *)a1 = off_100476810;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      v2 = a1 + 184;
      GLImage::GLImage(a1 + 184);
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 280) = 0;
      *(_QWORD *)(a1 + 264) = 0;
      *(_QWORD *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      Stage::initializeMembers((Stage *)a1);
      Stage::increaseBucketCapacity((Stage *)a1, 150);
      v3 = (#1336 *)operator new(96);
      StageSprite::StageSprite(v3, 10);
      *(_QWORD *)(a1 + 176) = v3;
      *(_DWORD *)(a1 + 292) = 1065353216;
      Stage::updateStageSizeVariables((Stage *)a1);
      Stage::increaseVertexBucketCapacity((Stage *)a1, 0x8000);
      *(_DWORD *)(a1 + 380) = 4000;
      Stage::increaseBucketRectCapacity((Stage *)a1, 4000, 0);
      v4 = *(int *)(a1 + 380);
      v5 = (v4 * (unsigned __int128)0x10uLL) >> 64;
      v6 = 16 * v4;
      if ( v5 )
        v7 = -1;
      else
        v7 = v6;
      *(_QWORD *)(a1 + 368) = operator new[](v7);
      *(_BYTE *)(*(_QWORD *)(a1 + 176) + 64LL) = 1;
      *(_DWORD *)(a1 + 288) = 0;
      Stage::increaseLocalToGlobalCapacity((Stage *)a1, 20);
      v8 = (_DWORD *)(a1 + 516);
      glGenBuffers(1, (GLuint *)(a1 + 516));
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v10 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v10 = "GL_INVALID_ENUM ";
            goto LABEL_11;
          case 1281:
            v10 = "GL_INVALID_VALUE ";
            goto LABEL_11;
          case 1282:
            goto LABEL_11;
          case 1285:
            v10 = "GL_OUT_OF_MEMORY ";
            goto LABEL_11;
          default:
            goto LABEL_9;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_9:
        v10 = "";
        if ( (_DWORD)Error == 1286 )
          v10 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_11:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          (__int64)&v19,
          v10,
          Error,
          Error,
          46,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
        Debugger::error(&v19);
      }
      DebugPerformanceHud::addGenID(2, (unsigned int)*v8);
      glGenBuffers(1, (GLuint *)(a1 + 520));
      v11 = glGetError();
      if ( (int)v11 > 1279 )
      {
        v12 = "GL_INVALID_OPERATION ";
        switch ( (int)v11 )
        {
          case 1280:
            v12 = "GL_INVALID_ENUM ";
            goto LABEL_19;
          case 1281:
            v12 = "GL_INVALID_VALUE ";
            goto LABEL_19;
          case 1282:
            goto LABEL_19;
          case 1285:
            v12 = "GL_OUT_OF_MEMORY ";
            goto LABEL_19;
          default:
            goto LABEL_17;
        }
      }
      if ( (_DWORD)v11 )
      {
    LABEL_17:
        v12 = "";
        if ( (_DWORD)v11 == 1286 )
          v12 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_19:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          (__int64)&v18,
          v12,
          v11,
          v11,
          49,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
        Debugger::error(&v18);
      }
      DebugPerformanceHud::addGenID(2, *(unsigned int *)(a1 + 520));
      if ( !*v8 )
        Debugger::warning("Stage unable to generate VBO buffer");
      v13 = 0;
      v14 = v21;
      do
      {
        v15 = (int)(pow((float)((float)v13 / 255.0), 0.454545438) * 255.0);
        *(v14 - 257) = v15;
        *(v14 - 256) = -1;
        *(_WORD *)(v14 - 1) = (unsigned __int8)v15;
        ++v13;
        v14 += 2;
      }
      while ( v13 != 256 );
      GLImage::createWithFormat(v2, 256, 2, 6410, 5121, (__int64)v20, 1, 1);
      for ( i = 0; i < 6; ++i )
        Stage::loadDefaultShader((Stage *)a1, i);
      return a1;
    }

    void __fastcall Stage::increaseBucketCapacity(__int64 a1, int a2)
    {
      int v4; // w25
      __int64 v5; // x9
      bool v6; // cf
      __int64 v7; // x9
      __int64 v8; // x0
      _QWORD *v9; // x21
      __int64 v10; // x22
      _QWORD *v11; // x24
      __int64 v12; // x23
      char *v13; // x21
      char *v14; // x22
      __int64 v15; // x8
      int v16; // w8
      _QWORD *v17; // x9
      __int64 v18; // x8
      __int64 v19; // x22
    
      v4 = *(_DWORD *)(a1 + 236);
      if ( v4 < a2 )
      {
        v5 = 440LL * a2;
        v6 = __CFADD__(v5, 16);
        v7 = v5 + 16;
        if ( v6 )
          v7 = -1;
        if ( is_mul_ok(a2, 0x1B8u) )
          v8 = v7;
        else
          v8 = -1;
        v9 = (_QWORD *)operator new[](v8);
        *v9 = 440;
        v9[1] = a2;
        if ( a2 )
        {
          v10 = 0;
          do
          {
            StageDrawBucket::StageDrawBucket((StageDrawBucket *)&v9[v10 + 2]);
            v10 += 55;
          }
          while ( 55LL * a2 != v10 );
        }
        v11 = v9 + 2;
        v12 = *(_QWORD *)(a1 + 240);
        if ( v12 )
        {
          if ( v4 >= 1 )
          {
            v13 = (char *)(v9 + 2);
            v14 = *(char **)(a1 + 240);
            do
            {
              memcpy(v13, v14, 0x1B8u);
              --v4;
              v14 += 440;
              v13 += 440;
            }
            while ( v4 );
          }
          v15 = *(_QWORD *)(a1 + 400);
          if ( v15 )
            *(_QWORD *)(a1 + 400) = &v11[55 * (int)(1483715975 * ((unsigned __int64)(v15 - v12) >> 3))];
          v16 = *(_DWORD *)(a1 + 376);
          if ( v16 >= 1 )
          {
            v17 = *(_QWORD **)(a1 + 368);
            do
            {
              *v17 = &v11[55 * (int)(1483715975 * ((unsigned __int64)(*v17 - v12) >> 3))];
              v17 += 2;
              --v16;
            }
            while ( v16 );
          }
          v18 = *(_QWORD *)(v12 - 8);
          if ( v18 )
          {
            v19 = 440 * v18;
            do
            {
              StageDrawBucket::~StageDrawBucket((StageDrawBucket *)(v12 - 440 + v19));
              v19 -= 440;
            }
            while ( v19 );
          }
          operator delete[](v12 - 16);
          *(_QWORD *)(a1 + 240) = 0;
        }
        *(_QWORD *)(a1 + 240) = v11;
        *(_DWORD *)(a1 + 236) = a2;
      }
    }

    __int64 __fastcall Stage::setPointSize(float *a1, float a2)
    {
      a1[73] = a2;
      return Stage::updateStageSizeVariables((Stage *)a1);
    }

    void __fastcall Stage::increaseVertexBucketCapacity(__int64 a1, int a2)
    {
      __int64 v4; // x0
      void *v5; // x0
      void *v6; // x21
      __int64 v7; // x22
    
      if ( *(_DWORD *)(a1 + 392) < a2 )
      {
        if ( is_mul_ok(a2, 0x14u) )
          v4 = 20LL * a2;
        else
          v4 = -1;
        v5 = (void *)operator new[](v4);
        v6 = v5;
        v7 = *(_QWORD *)(a1 + 384);
        if ( v7 )
        {
          memcpy(v5, *(const void **)(a1 + 384), 20LL * *(int *)(a1 + 396));
          operator delete[](v7);
        }
        *(_QWORD *)(a1 + 384) = v6;
        *(_DWORD *)(a1 + 392) = a2;
      }
    }

    void __fastcall Stage::increaseBucketRectCapacity(__int64 a1, int a2, char a3)
    {
      __int64 v5; // x22
      __int64 v6; // x8
      __int64 v7; // x23
      __int64 v8; // x9
      bool v9; // cf
      __int64 v10; // x9
      __int64 v11; // x0
      _QWORD *v12; // x22
      __int64 v13; // x21
      const GameConfig *v14; // x21
      __int64 v15; // x23
      int v16; // w8
      unsigned __int64 v17; // x9
      _QWORD *v18; // x12
      __int64 v19; // x13
      int v20; // w22
      __int64 v21; // x23
      __int64 v22; // x8
      __int64 v23; // x24
    
      if ( *(_DWORD *)(a1 + 424) < a2 )
      {
        if ( (a3 & 1) == 0 )
        {
          v5 = *(_QWORD *)(a1 + 416);
          if ( v5 )
          {
            v6 = *(_QWORD *)(v5 - 8);
            if ( v6 )
            {
              v7 = 24 * v6;
              do
              {
                StageBucketRect::~StageBucketRect((StageBucketRect *)(v5 - 24 + v7));
                v7 -= 24;
              }
              while ( v7 );
            }
            operator delete[](v5 - 16);
          }
          *(_QWORD *)(a1 + 416) = 0;
        }
        v8 = 24LL * a2;
        v9 = __CFADD__(v8, 16);
        v10 = v8 + 16;
        if ( v9 )
          v10 = -1;
        if ( is_mul_ok(a2, 0x18u) )
          v11 = v10;
        else
          v11 = -1;
        v12 = (_QWORD *)operator new[](v11);
        *v12 = 24;
        v12[1] = a2;
        if ( a2 )
        {
          v13 = 0;
          do
          {
            StageBucketRect::StageBucketRect((StageBucketRect *)&v12[v13 + 2]);
            v13 += 3;
          }
          while ( 3LL * a2 != v13 );
        }
        v14 = (const GameConfig *)(v12 + 2);
        v15 = *(_QWORD *)(a1 + 416);
        if ( v15 )
        {
          v16 = *(_DWORD *)(a1 + 408);
          if ( v16 >= 1 )
          {
            v17 = 0;
            do
            {
              v18 = &v12[v17 / 8];
              v18[4] = *(_QWORD *)(v15 + v17 + 16);
              *((_OWORD *)v18 + 1) = *(_OWORD *)(v15 + v17);
              v19 = *(_QWORD *)(v15 + v17 + 16);
              if ( v19 )
                v18[4] = (char *)v14 + 24 * (int)(-1431655765 * ((unsigned __int64)(v19 - v15) >> 3));
              --v16;
              v17 += 24LL;
            }
            while ( v16 );
          }
          v20 = *(_DWORD *)(a1 + 232);
          if ( v20 >= 1 )
          {
            v21 = 0;
            do
            {
              StageDrawBucket::fixLastRect((SoundSystem::Impl *)(*(_QWORD *)(a1 + 240) + v21), v14);
              --v20;
              v21 += 440;
            }
            while ( v20 );
            v15 = *(_QWORD *)(a1 + 416);
          }
          if ( v15 )
          {
            v22 = *(_QWORD *)(v15 - 8);
            if ( v22 )
            {
              v23 = 24 * v22;
              do
              {
                StageBucketRect::~StageBucketRect((StageBucketRect *)(v15 - 24 + v23));
                v23 -= 24;
              }
              while ( v23 );
            }
            operator delete[](v15 - 16);
          }
          *(_QWORD *)(a1 + 416) = 0;
        }
        *(_QWORD *)(a1 + 416) = v14;
        *(_DWORD *)(a1 + 424) = a2;
      }
    }

    void __fastcall Stage::increaseLocalToGlobalCapacity(__int64 a1, int a2)
    {
      __int64 v4; // x22
      __int64 v5; // x0
      __int64 v6; // x21
      __int64 v7; // x0
      __int64 i; // x8
    
      v4 = *(int *)(a1 + 248);
      if ( (int)v4 < a2 )
      {
        if ( is_mul_ok(a2, 8u) )
          v5 = 8LL * a2;
        else
          v5 = -1;
        v6 = operator new[](v5);
        v7 = *(_QWORD *)(a1 + 256);
        if ( v7 )
        {
          if ( (int)v4 >= 1 )
          {
            for ( i = 0; i < v4; ++i )
              *(_QWORD *)(v6 + 8 * i) = *(_QWORD *)(v7 + 8 * i);
          }
          operator delete[](v7);
        }
        *(_QWORD *)(a1 + 256) = v6;
        *(_DWORD *)(a1 + 248) = a2;
      }
    }

    void __fastcall Stage::loadDefaultShader(__int64 a1, __int64 a2)
    {
      Shader *v4; // x20
      GLchar *v5; // x1
      GLchar *v6; // x2
      __int64 v7; // x4
      __int64 v8; // x23
      void *v9; // x21
      Shader **v10; // x23
      void *v11; // t1
      DataLoaderFactory *v12; // x0
      _BYTE v13[64]; // [xsp+10h] [xbp-B0h] BYREF
      String v14; // [xsp+50h] [xbp-70h] BYREF
      _QWORD v15[4]; // [xsp+68h] [xbp-58h] BYREF
    
      v15[0] = "a_position";
      v15[1] = "a_texCoord";
      v15[2] = "a_color";
      v15[3] = "a_color_2";
      v4 = (Shader *)operator new(40);
      Shader::Shader(v4);
      switch ( (int)a2 )
      {
        case 0:
          v5 = "#ifdef GL_ES\n"
               "precision highp float;\n"
               "#else\n"
               "#define highp \n"
               "#define mediump \n"
               "#define lowp \n"
               "#endif\n"
               "attribute vec4\ta_position;\n"
               "attribute highp vec2\ta_texCoord;\n"
               "attribute lowp vec4\ta_color;\n"
               "attribute lowp vec4\ta_color_2;\n"
               "uniform vec4\tmyPMVMatrix;\n"
               "varying highp vec2\tv_texCoord;\n"
               "varying lowp vec4 v_color;\n"
               "varying lowp vec4 v_color_2;\n"
               "void main(void)\n"
               "{\n"
               "const vec4 constantList = vec4(-1.0, 1.0, 0.0, 0.0);\n"
               "gl_Position = myPMVMatrix * a_position + constantList;\n"
               "v_texCoord = a_texCoord;\n"
               "v_color = (a_color * constantList.yyyz + constantList.zzzy) * a_color.a;\n"
               "v_color_2 = a_color_2 * a_color.a;\n"
               "}";
          v6 = "#ifdef GL_ES\n"
               "precision lowp float;\n"
               "#else\n"
               "#define highp \n"
               "#define mediump \n"
               "#define lowp \n"
               "#endif\n"
               "varying highp vec2 v_texCoord;\n"
               "varying lowp vec4 v_color;\n"
               "varying lowp vec4 v_color_2;\n"
               "uniform lowp sampler2D s_texture;\n"
               "void main (void)\n"
               "{\n"
               "vec4 tx = texture2D(s_texture, v_texCoord);\n"
               "gl_FragColor = tx * v_color + v_color_2 * tx.a;\n"
               "}";
          goto LABEL_11;
        case 1:
          v5 = "#ifdef GL_ES\n"
               "precision highp float;\n"
               "#else\n"
               "#define highp \n"
               "#define mediump \n"
               "#define lowp \n"
               "#endif\n"
               "attribute vec4\ta_position;\n"
               "attribute highp vec2\ta_texCoord;\n"
               "uniform vec4\tmyPMVMatrix;\n"
               "varying highp vec2\tv_texCoord;\n"
               "void main(void)\n"
               "{\n"
               "gl_Position = myPMVMatrix * a_position + vec4(-1.0, 1.0, 0.0, 0.0);\n"
               "v_texCoord = a_texCoord;\n"
               "}";
          v6 = "#ifdef GL_ES\n"
               "precision lowp float;\n"
               "#else\n"
               "#define highp \n"
               "#define mediump \n"
               "#define lowp \n"
               "#endif\n"
               "varying highp vec2 v_texCoord;\n"
               "uniform lowp sampler2D s_texture;\n"
               "void main (void)\n"
               "{\n"
               "gl_FragColor = texture2D(s_texture, v_texCoord);\n"
               "}";
          v7 = 2;
          break;
        case 2:
          v5 = "#ifdef GL_ES\n"
               "precision highp float;\n"
               "#else\n"
               "#define highp \n"
               "#define mediump \n"
               "#define lowp \n"
               "#endif\n"
               "attribute vec4\ta_position;\n"
               "attribute highp vec2\ta_texCoord;\n"
               "attribute lowp vec4\ta_color;\n"
               "uniform vec4\tmyPMVMatrix;\n"
               "varying highp vec2\tv_texCoord;\n"
               "varying lowp vec4 v_color;\n"
               "void main(void)\n"
               "{\n"
               "const vec4 constantList = vec4(-1.0, 1.0, 0.0, 0.0);\n"
               "gl_Position = myPMVMatrix * a_position + constantList;\n"
               "v_texCoord = a_texCoord;\n"
               "v_color = (a_color * constantList.yyyz + constantList.zzzy) * a_color.a;\n"
               "}";
          v6 = "#ifdef GL_ES\n"
               "precision lowp float;\n"
               "#else\n"
               "#define highp \n"
               "#define mediump \n"
               "#define lowp \n"
               "#endif\n"
               "varying highp vec2 v_texCoord;\n"
               "varying lowp vec4 v_color;\n"
               "uniform lowp sampler2D s_texture;\n"
               "void main (void)\n"
               "{\n"
               "gl_FragColor = texture2D(s_texture, v_texCoord) * v_color;\n"
               "}";
          goto LABEL_9;
        case 3:
          v5 = "#ifdef GL_ES\n"
               "precision highp float;\n"
               "#else\n"
               "#define highp \n"
               "#define mediump \n"
               "#define lowp \n"
               "#endif\n"
               "attribute vec4\ta_position;\n"
               "attribute highp vec2\ta_texCoord;\n"
               "attribute lowp vec4\ta_color;\n"
               "attribute lowp vec4\ta_color_2;\n"
               "uniform vec4\tmyPMVMatrix;\n"
               "varying highp vec2\tv_texCoord;\n"
               "varying lowp vec4 v_color;\n"
               "varying lowp vec4 v_color_2;\n"
               "void main(void)\n"
               "{\n"
               "const vec4 constantList = vec4(-1.0, 1.0, 0.0, 0.0);\n"
               "gl_Position = myPMVMatrix * a_position + constantList;\n"
               "v_texCoord = a_texCoord;\n"
               "v_color = (a_color * constantList.yyyz + constantList.zzzy) * a_color.a;\n"
               "v_color_2 = a_color_2 * a_color.a;\n"
               "}";
          v6 = "#ifdef GL_ES\n"
               "precision lowp float;\n"
               "#else\n"
               "#define highp \n"
               "#define mediump \n"
               "#define lowp \n"
               "#endif\n"
               "varying highp vec2 v_texCoord;\n"
               "varying lowp vec4 v_color;\n"
               "varying lowp vec4 v_color_2;\n"
               "uniform lowp sampler2D s_texture;\n"
               "void main (void)\n"
               "{\n"
               "lowp vec4 tx = texture2D(s_texture, v_texCoord);\n"
               "gl_FragColor.rgb = v_color.rgb * dot(tx.rgb, vec3(0.30, 0.59, 0.11)) + v_color_2.rgb * tx.a;\n"
               "gl_FragColor.a = v_color.a * tx.a;\n"
               "}";
          goto LABEL_11;
        case 4:
          v5 = "#ifdef GL_ES\n"
               "precision highp float;\n"
               "#else\n"
               "#define highp \n"
               "#define mediump \n"
               "#define lowp \n"
               "#endif\n"
               "attribute vec4\ta_position;\n"
               "attribute highp vec2\ta_texCoord;\n"
               "attribute lowp vec4\ta_color;\n"
               "uniform vec4\tmyPMVMatrix;\n"
               "varying highp vec2\tv_texCoord;\n"
               "varying lowp vec4 v_color;\n"
               "void main(void)\n"
               "{\n"
               "const vec4 constantList = vec4(-1.0, 1.0, 0.0, 0.0);\n"
               "gl_Position = myPMVMatrix * a_position + constantList;\n"
               "v_texCoord = a_texCoord;\n"
               "v_color = (a_color * constantList.yyyz + constantList.zzzy) * a_color.a;\n"
               "}";
          v6 = "#ifdef GL_ES\n"
               "precision lowp float;\n"
               "#else\n"
               "#define highp \n"
               "#define mediump \n"
               "#define lowp \n"
               "#endif\n"
               "varying highp vec2 v_texCoord;\n"
               "varying lowp vec4 v_color;\n"
               "uniform lowp sampler2D s_texture;\n"
               "void main (void)\n"
               "{\n"
               "gl_FragColor = texture2D(s_texture, v_texCoord).r * v_color;\n"
               "}";
    LABEL_9:
          v7 = 3;
          break;
        case 5:
          v5 = "#ifdef GL_ES\n"
               "precision highp float;\n"
               "#else\n"
               "#define highp \n"
               "#define mediump \n"
               "#define lowp \n"
               "#endif\n"
               "attribute vec4\ta_position;\n"
               "attribute highp vec2\ta_texCoord;\n"
               "attribute lowp vec4\ta_color;\n"
               "attribute lowp vec4\ta_color_2;\n"
               "uniform vec4\tmyPMVMatrix;\n"
               "varying highp vec2\tv_texCoord;\n"
               "varying lowp vec4 v_color;\n"
               "varying lowp vec4 v_color_2;\n"
               "void main(void)\n"
               "{\n"
               "const vec4 constantList = vec4(-1.0, 1.0, 0.0, 0.0);\n"
               "gl_Position = myPMVMatrix * a_position + constantList;\n"
               "v_texCoord = a_texCoord;\n"
               "v_color = (a_color * constantList.yyyz + constantList.zzzy) * a_color.a;\n"
               "v_color_2 = a_color_2;\n"
               "}";
          v6 = "#ifdef GL_ES\n"
               "precision lowp float;\n"
               "#else\n"
               "#define highp \n"
               "#define mediump \n"
               "#define lowp \n"
               "#endif\n"
               "varying highp vec2 v_texCoord;\n"
               "varying lowp vec4 v_color;\n"
               "varying lowp vec4 v_color_2;\n"
               "uniform lowp sampler2D s_texture;\n"
               "void main (void)\n"
               "{\n"
               "lowp vec2 tx = texture2D(s_texture, v_texCoord).rg;\n"
               "gl_FragColor = tx.r * v_color + tx.g * v_color_2;\n"
               "}";
    LABEL_11:
          v7 = 4;
          break;
        default:
          String::format((String *)"Stage::loadDefaultShader invalid index %d", (__int64)&v14, a2);
          Debugger::error(&v14);
      }
      Shader::load((__int64)v4, v5, v6, (__int64)v15, (const char **)v7);
      v8 = a1 + 8LL * (int)a2;
      v11 = *(void **)(v8 + 120);
      v10 = (Shader **)(v8 + 120);
      v9 = v11;
      if ( v11 )
      {
        Shader::~Shader((__int64)v9);
        operator delete(v9);
      }
      *v10 = v4;
      if ( *(_BYTE *)(a1 + 339) || *(int *)(a1 + 428) >= 1 )
      {
        v12 = (DataLoaderFactory *)Renderer::setViewport(
                                     (int)*(float *)(a1 + 44),
                                     (int)*(float *)(a1 + 48),
                                     (int)(float)(*(float *)(a1 + 52) - *(float *)(a1 + 44)),
                                     (int)(float)(*(float *)(a1 + 56) - *(float *)(a1 + 48)));
        Renderer::getPixelMatrix(v12);
        Stage::firstTimeShaderInit((Stage *)a1, v4, (const xMatrix44 *)v13);
      }
    }

    void __fastcall Stage::firstTimeShaderInit(
            __int64 a1,
            GLuint *a2,
            _DWORD *a3,
            __int64 a4,
            int a5,
            long double a6,
            long double a7,
            long double a8)
    {
      if ( *(GLuint **)(a1 + 168) != a2 )
      {
        *(_QWORD *)(a1 + 168) = a2;
        if ( a2 )
          Shader::bind(a2, (__int64)a2, (__int64)a3, a4, a5);
      }
      LODWORD(a6) = *a3;
      LODWORD(a7) = a3[5];
      LODWORD(a8) = 1.0;
      Shader::setUniformVector4(a2, "myPMVMatrix", a6, a7, a8, a8);
      Shader::setUniformInt1(a2, "s_texture", 0);
    }

    __int64 __fastcall Stage::~Stage(__int64 a1)
    {
      __int64 v2; // x0
      __int64 Error; // x0
      const char *v4; // x8
      __int64 v5; // x0
      const char *v6; // x8
      __n128 v7; // q0
      __int64 i; // x20
      __int64 v9; // x22
      void *v10; // x21
      __int64 j; // x20
      __int64 v12; // x22
      void *v13; // x21
      __int64 v14; // x0
      __int64 v15; // x23
      __int64 v16; // x8
      __int64 v17; // x22
      __int64 v18; // x8
      unsigned __int64 v19; // x9
      __int64 k; // x20
      void *v21; // x21
      __int64 v22; // x0
      __int64 v23; // x23
      __int64 v24; // x8
      __int64 v25; // x22
      __int64 v26; // x0
      void *v27; // x0
      void *v28; // x0
      void *v29; // x0
      String v31; // [xsp+30h] [xbp-60h] BYREF
      String v32; // [xsp+48h] [xbp-48h] BYREF
    
      *(_QWORD *)a1 = off_100476810;
      Stage::unbindRender((MappedFile *)a1);
      v2 = *(_QWORD *)(a1 + 368);
      if ( v2 )
        operator delete[](v2);
      *(_QWORD *)(a1 + 368) = 0;
      glDeleteBuffers(1, (const GLuint *)(a1 + 516));
      Error = glGetError();
      if ( (int)Error > 1279 )
      {
        v4 = "GL_INVALID_OPERATION ";
        switch ( (int)Error )
        {
          case 1280:
            v4 = "GL_INVALID_ENUM ";
            goto LABEL_10;
          case 1281:
            v4 = "GL_INVALID_VALUE ";
            goto LABEL_10;
          case 1282:
            goto LABEL_10;
          case 1285:
            v4 = "GL_OUT_OF_MEMORY ";
            goto LABEL_10;
          default:
            goto LABEL_8;
        }
      }
      if ( (_DWORD)Error )
      {
    LABEL_8:
        v4 = "";
        if ( (_DWORD)Error == 1286 )
          v4 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_10:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          (__int64)&v32,
          v4,
          Error,
          Error,
          407,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
        Debugger::error(&v32);
      }
      DebugPerformanceHud::delGenID(2, *(unsigned int *)(a1 + 516));
      glDeleteBuffers(1, (const GLuint *)(a1 + 520));
      v5 = glGetError();
      if ( (int)v5 > 1279 )
      {
        v6 = "GL_INVALID_OPERATION ";
        switch ( (int)v5 )
        {
          case 1280:
            v6 = "GL_INVALID_ENUM ";
            goto LABEL_18;
          case 1281:
            v6 = "GL_INVALID_VALUE ";
            goto LABEL_18;
          case 1282:
            goto LABEL_18;
          case 1285:
            v6 = "GL_OUT_OF_MEMORY ";
            goto LABEL_18;
          default:
            goto LABEL_16;
        }
      }
      if ( (_DWORD)v5 )
      {
    LABEL_16:
        v6 = "";
        if ( (_DWORD)v5 == 1286 )
          v6 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_18:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          (__int64)&v31,
          v6,
          v5,
          v5,
          410,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
        Debugger::error(&v31);
      }
      DebugPerformanceHud::delGenID(2, *(unsigned int *)(a1 + 520));
      for ( i = 0; i < 5; ++i )
      {
        v9 = a1 + 8 * i;
        v10 = *(void **)(v9 + 456);
        if ( v10 )
        {
          Shader::~Shader(*(_QWORD *)(v9 + 456));
          operator delete(v10);
        }
        *(_QWORD *)(v9 + 456) = 0;
      }
      for ( j = 0; j < 6; ++j )
      {
        v12 = a1 + 8 * j;
        v13 = *(void **)(v12 + 120);
        if ( v13 )
        {
          Shader::~Shader(*(_QWORD *)(v12 + 120));
          operator delete(v13);
        }
        *(_QWORD *)(v12 + 120) = 0;
      }
      v14 = *(_QWORD *)(a1 + 384);
      if ( v14 )
        v7 = operator delete[](v14);
      *(_QWORD *)(a1 + 384) = 0;
      v15 = *(_QWORD *)(a1 + 416);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 - 8);
        if ( v16 )
        {
          v17 = 24 * v16;
          do
          {
            StageBucketRect::~StageBucketRect((StageBucketRect *)(v15 - 24 + v17));
            v17 -= 24;
          }
          while ( v17 );
        }
        v7 = operator delete[](v15 - 16);
      }
      *(_QWORD *)(a1 + 416) = 0;
      v18 = *(_QWORD *)(a1 + 264);
      v19 = (unsigned __int64)(*(_QWORD *)(a1 + 272) - v18) >> 3;
      if ( (int)v19 >= 1 )
      {
        for ( k = (int)v19 - 1LL; ; --k )
        {
          v21 = *(void **)(v18 + 8 * k);
          if ( v21 )
          {
            TouchContainer::~TouchContainer(*(ServerHelloMessage **)(v18 + 8 * k));
            operator delete(v21);
          }
          if ( k + 1 < 2 )
            break;
          v18 = *(_QWORD *)(a1 + 264);
        }
      }
      v22 = *(_QWORD *)(a1 + 176);
      if ( v22 )
        (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v22 + 8LL))(v22, *(long double *)&v7);
      *(_QWORD *)(a1 + 176) = 0;
      v23 = *(_QWORD *)(a1 + 240);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 - 8);
        if ( v24 )
        {
          v25 = 440 * v24;
          do
          {
            StageDrawBucket::~StageDrawBucket((StageDrawBucket *)(v23 - 440 + v25));
            v25 -= 440;
          }
          while ( v25 );
        }
        operator delete[](v23 - 16);
      }
      *(_QWORD *)(a1 + 240) = 0;
      v26 = *(_QWORD *)(a1 + 256);
      if ( v26 )
        operator delete[](v26);
      *(_QWORD *)(a1 + 256) = 0;
      Stage::initializeMembers((Stage *)a1);
      v27 = *(void **)(a1 + 344);
      if ( v27 )
        operator delete(v27);
      v28 = *(void **)(a1 + 264);
      if ( v28 )
        operator delete(v28);
      GLImage::~GLImage(a1 + 184);
      v29 = *(void **)(a1 + 8);
      if ( v29 )
        operator delete(v29);
      return a1;
    }

    __int64 __fastcall Stage::unbindRender(__int64 this)
    {
      __int64 Error; // x0
      const char *v2; // x8
      __int64 v3; // x0
      const char *v4; // x8
      __int64 v5; // x0
      const char *v6; // x8
      __int64 v7; // x0
      const char *v8; // x8
      __int64 v9; // x0
      const char *v10; // x8
      const char *v11; // x8
      String v12; // [xsp+30h] [xbp-A0h] BYREF
      String v13; // [xsp+48h] [xbp-88h] BYREF
      String v14; // [xsp+60h] [xbp-70h] BYREF
      String v15; // [xsp+78h] [xbp-58h] BYREF
      String v16; // [xsp+90h] [xbp-40h] BYREF
      String v17; // [xsp+A8h] [xbp-28h] BYREF
    
      if ( *(_BYTE *)(this + 339) )
      {
        *(_BYTE *)(this + 339) = 0;
        glDisableVertexAttribArray(0);
        Error = glGetError();
        if ( (int)Error > 1279 )
        {
          v2 = "GL_INVALID_OPERATION ";
          switch ( (int)Error )
          {
            case 1280:
              v2 = "GL_INVALID_ENUM ";
              goto LABEL_9;
            case 1281:
              v2 = "GL_INVALID_VALUE ";
              goto LABEL_9;
            case 1282:
              goto LABEL_9;
            case 1285:
              v2 = "GL_OUT_OF_MEMORY ";
              goto LABEL_9;
            default:
              goto LABEL_7;
          }
        }
        if ( (_DWORD)Error )
        {
    LABEL_7:
          v2 = "";
          if ( (_DWORD)Error == 1286 )
            v2 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_9:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v17,
            v2,
            Error,
            Error,
            1326,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v17);
        }
        glDisableVertexAttribArray(1u);
        v3 = glGetError();
        if ( (int)v3 > 1279 )
        {
          v4 = "GL_INVALID_OPERATION ";
          switch ( (int)v3 )
          {
            case 1280:
              v4 = "GL_INVALID_ENUM ";
              goto LABEL_17;
            case 1281:
              v4 = "GL_INVALID_VALUE ";
              goto LABEL_17;
            case 1282:
              goto LABEL_17;
            case 1285:
              v4 = "GL_OUT_OF_MEMORY ";
              goto LABEL_17;
            default:
              goto LABEL_15;
          }
        }
        if ( (_DWORD)v3 )
        {
    LABEL_15:
          v4 = "";
          if ( (_DWORD)v3 == 1286 )
            v4 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_17:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v16,
            v4,
            v3,
            v3,
            1327,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v16);
        }
        glDisableVertexAttribArray(2u);
        v5 = glGetError();
        if ( (int)v5 > 1279 )
        {
          v6 = "GL_INVALID_OPERATION ";
          switch ( (int)v5 )
          {
            case 1280:
              v6 = "GL_INVALID_ENUM ";
              goto LABEL_25;
            case 1281:
              v6 = "GL_INVALID_VALUE ";
              goto LABEL_25;
            case 1282:
              goto LABEL_25;
            case 1285:
              v6 = "GL_OUT_OF_MEMORY ";
              goto LABEL_25;
            default:
              goto LABEL_23;
          }
        }
        if ( (_DWORD)v5 )
        {
    LABEL_23:
          v6 = "";
          if ( (_DWORD)v5 == 1286 )
            v6 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_25:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v15,
            v6,
            v5,
            v5,
            1328,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v15);
        }
        glDisableVertexAttribArray(3u);
        v7 = glGetError();
        if ( (int)v7 > 1279 )
        {
          v8 = "GL_INVALID_OPERATION ";
          switch ( (int)v7 )
          {
            case 1280:
              v8 = "GL_INVALID_ENUM ";
              goto LABEL_33;
            case 1281:
              v8 = "GL_INVALID_VALUE ";
              goto LABEL_33;
            case 1282:
              goto LABEL_33;
            case 1285:
              v8 = "GL_OUT_OF_MEMORY ";
              goto LABEL_33;
            default:
              goto LABEL_31;
          }
        }
        if ( (_DWORD)v7 )
        {
    LABEL_31:
          v8 = "";
          if ( (_DWORD)v7 == 1286 )
            v8 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_33:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v14,
            v8,
            v7,
            v7,
            1329,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v14);
        }
        glBindBuffer(0x8892u, 0);
        v9 = glGetError();
        if ( (int)v9 > 1279 )
        {
          v10 = "GL_INVALID_OPERATION ";
          switch ( (int)v9 )
          {
            case 1280:
              v10 = "GL_INVALID_ENUM ";
              goto LABEL_41;
            case 1281:
              v10 = "GL_INVALID_VALUE ";
              goto LABEL_41;
            case 1282:
              goto LABEL_41;
            case 1285:
              v10 = "GL_OUT_OF_MEMORY ";
              goto LABEL_41;
            default:
              goto LABEL_39;
          }
        }
        if ( (_DWORD)v9 )
        {
    LABEL_39:
          v10 = "";
          if ( (_DWORD)v9 == 1286 )
            v10 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_41:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v13,
            v10,
            v9,
            v9,
            1331,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v13);
        }
        glBindBuffer(0x8893u, 0);
        this = glGetError();
        if ( (int)this > 1279 )
        {
          v11 = "GL_INVALID_OPERATION ";
          switch ( (int)this )
          {
            case 1280:
              v11 = "GL_INVALID_ENUM ";
              goto LABEL_49;
            case 1281:
              v11 = "GL_INVALID_VALUE ";
              goto LABEL_49;
            case 1282:
              goto LABEL_49;
            case 1285:
              v11 = "GL_OUT_OF_MEMORY ";
              goto LABEL_49;
            default:
              goto LABEL_47;
          }
        }
        if ( (_DWORD)this )
        {
    LABEL_47:
          v11 = "";
          if ( (_DWORD)this == 1286 )
            v11 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_49:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v12,
            v11,
            this,
            this,
            1332,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v12);
        }
      }
      return this;
    }

    __int64 Stage::getInstance()
    {
      return Stage::sm_pInstance;
    }

    void __fastcall Stage::constructInstance(MappedFile *this)
    {
      __int64 v1; // x19
    
      if ( !Stage::sm_pInstance )
      {
        v1 = operator new(720);
        Stage::Stage(v1);
        Stage::sm_pInstance = v1;
      }
    }

    void Stage::destructInstance()
    {
      void *v0; // x19
    
      v0 = (void *)Stage::sm_pInstance;
      if ( Stage::sm_pInstance )
      {
        Stage::~Stage(Stage::sm_pInstance);
        operator delete(v0);
      }
      Stage::sm_pInstance = 0;
    }

    __int64 __fastcall Stage::init(__int64 a1, int a2, int a3, int a4, int a5)
    {
      float v6; // s8
      float v7; // s9
      float v8; // s2
      float v9; // s3
      __int64 Error; // x0
      __int64 v12; // x0
      const char *v13; // x8
      __int64 v14; // x0
      const char *v15; // x8
      __int64 v16; // x0
      const char *v17; // x8
      const char *v18; // x8
      __int64 v19; // x0
      const char *v20; // x8
      __int64 v21; // x0
      const char *v22; // x8
      __int64 v23; // x0
      const char *v24; // x8
      __int64 v25; // x0
      const char *v26; // x8
      __int64 v27; // x0
      const char *v28; // x8
      __int64 v29; // x0
      const char *v30; // x8
      __int64 v31; // x0
      const char *v32; // x8
      __int64 v33; // x0
      const char *v34; // x8
      DataLoaderFactory *v35; // x0
      __int64 v36; // x3
      int v37; // w4
      long double v38; // q0
      long double v39; // q1
      long double v40; // q2
      __int64 i; // x20
      __int64 result; // x0
      const char *v43; // x8
      String v44; // [xsp+28h] [xbp-1A8h] BYREF
      _DWORD v45[16]; // [xsp+40h] [xbp-190h] BYREF
      String v46; // [xsp+80h] [xbp-150h] BYREF
      String v47; // [xsp+98h] [xbp-138h] BYREF
      String v48; // [xsp+B0h] [xbp-120h] BYREF
      String v49; // [xsp+C8h] [xbp-108h] BYREF
      String v50; // [xsp+E0h] [xbp-F0h] BYREF
      String v51; // [xsp+F8h] [xbp-D8h] BYREF
      String v52; // [xsp+110h] [xbp-C0h] BYREF
      String v53; // [xsp+128h] [xbp-A8h] BYREF
      String v54; // [xsp+140h] [xbp-90h] BYREF
      String v55; // [xsp+158h] [xbp-78h] BYREF
      String v56; // [xsp+170h] [xbp-60h] BYREF
      String v57; // [xsp+188h] [xbp-48h] BYREF
    
      *(_BYTE *)(a1 + 339) = 1;
      *(float *)(a1 + 44) = (float)a2;
      *(float *)(a1 + 48) = (float)a3;
      v6 = *(float *)(a1 + 52);
      v7 = *(float *)(a1 + 56);
      *(float *)(a1 + 52) = (float)(a4 + a2);
      *(float *)(a1 + 56) = (float)(a5 + a3);
      Stage::updateStageSizeVariables((Stage *)a1);
      v8 = *(float *)(a1 + 52);
      v9 = *(float *)(a1 + 56);
      if ( v6 != v8 || v7 != v9 )
        *(_BYTE *)(a1 + 336) = 0;
      *(_WORD *)(a1 + 333) = 0;
      Stage::setClip((Stage *)a1, *(float *)(a1 + 44), *(float *)(a1 + 48), v8, v9, 1);
      glDisable(0xC11u);
      *(_QWORD *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 168) = 0;
      *(_DWORD *)(a1 + 328) = -1;
      Renderer::clearColor(*(_DWORD *)(a1 + 312));
      glDisable(0xB71u);
      glDisable(0xB44u);
      glDisable(0xBD0u);
      glDisable(0x8037u);
      glDisable(0xB90u);
      glDisable(0x809Eu);
      glDisable(0x80A0u);
      glDepthMask(0);
      *(_BYTE *)(a1 + 335) = 1;
      glEnable(0xBE2u);
      glBlendEquation(0x8006u);
      if ( *(_DWORD *)(a1 + 436) == 2 )
      {
        glBindBuffer(0x8892u, 0);
        Error = glGetError();
        if ( (int)Error > 1279 )
        {
          v13 = "GL_INVALID_OPERATION ";
          switch ( (int)Error )
          {
            case 1280:
              v13 = "GL_INVALID_ENUM ";
              goto LABEL_17;
            case 1281:
              v13 = "GL_INVALID_VALUE ";
              goto LABEL_17;
            case 1282:
              goto LABEL_17;
            case 1285:
              v13 = "GL_OUT_OF_MEMORY ";
              goto LABEL_17;
            default:
              goto LABEL_15;
          }
        }
        if ( (_DWORD)Error )
        {
    LABEL_15:
          v13 = "";
          if ( (_DWORD)Error == 1286 )
            v13 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_17:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v57,
            v13,
            Error,
            Error,
            503,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v57);
        }
        glBindBuffer(0x8893u, 0);
        v14 = glGetError();
        if ( (int)v14 > 1279 )
        {
          v17 = "GL_INVALID_OPERATION ";
          switch ( (int)v14 )
          {
            case 1280:
              v17 = "GL_INVALID_ENUM ";
              goto LABEL_33;
            case 1281:
              v17 = "GL_INVALID_VALUE ";
              goto LABEL_33;
            case 1282:
              goto LABEL_33;
            case 1285:
              v17 = "GL_OUT_OF_MEMORY ";
              goto LABEL_33;
            default:
              goto LABEL_31;
          }
        }
        if ( (_DWORD)v14 )
        {
    LABEL_31:
          v17 = "";
          if ( (_DWORD)v14 == 1286 )
            v17 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_33:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v56,
            v17,
            v14,
            v14,
            504,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v56);
        }
      }
      else
      {
        glBindBuffer(0x8892u, *(_DWORD *)(a1 + 516));
        v12 = glGetError();
        if ( (int)v12 > 1279 )
        {
          v15 = "GL_INVALID_OPERATION ";
          switch ( (int)v12 )
          {
            case 1280:
              v15 = "GL_INVALID_ENUM ";
              goto LABEL_25;
            case 1281:
              v15 = "GL_INVALID_VALUE ";
              goto LABEL_25;
            case 1282:
              goto LABEL_25;
            case 1285:
              v15 = "GL_OUT_OF_MEMORY ";
              goto LABEL_25;
            default:
              goto LABEL_23;
          }
        }
        if ( (_DWORD)v12 )
        {
    LABEL_23:
          v15 = "";
          if ( (_DWORD)v12 == 1286 )
            v15 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_25:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v55,
            v15,
            v12,
            v12,
            508,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v55);
        }
        glBindBuffer(0x8893u, *(_DWORD *)(a1 + 520));
        v16 = glGetError();
        if ( (int)v16 > 1279 )
        {
          v18 = "GL_INVALID_OPERATION ";
          switch ( (int)v16 )
          {
            case 1280:
              v18 = "GL_INVALID_ENUM ";
              goto LABEL_38;
            case 1281:
              v18 = "GL_INVALID_VALUE ";
              goto LABEL_38;
            case 1282:
              goto LABEL_38;
            case 1285:
              v18 = "GL_OUT_OF_MEMORY ";
              goto LABEL_38;
            default:
              goto LABEL_36;
          }
        }
        if ( (_DWORD)v16 )
        {
    LABEL_36:
          v18 = "";
          if ( (_DWORD)v16 == 1286 )
            v18 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_38:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v54,
            v18,
            v16,
            v16,
            509,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v54);
        }
      }
      glEnableVertexAttribArray(0);
      v19 = glGetError();
      if ( (int)v19 > 1279 )
      {
        v20 = "GL_INVALID_OPERATION ";
        switch ( (int)v19 )
        {
          case 1280:
            v20 = "GL_INVALID_ENUM ";
            goto LABEL_46;
          case 1281:
            v20 = "GL_INVALID_VALUE ";
            goto LABEL_46;
          case 1282:
            goto LABEL_46;
          case 1285:
            v20 = "GL_OUT_OF_MEMORY ";
            goto LABEL_46;
          default:
            goto LABEL_44;
        }
      }
      if ( (_DWORD)v19 )
      {
    LABEL_44:
        v20 = "";
        if ( (_DWORD)v19 == 1286 )
          v20 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_46:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          (__int64)&v53,
          v20,
          v19,
          v19,
          515,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
        Debugger::error(&v53);
      }
      glEnableVertexAttribArray(1u);
      v21 = glGetError();
      if ( (int)v21 > 1279 )
      {
        v22 = "GL_INVALID_OPERATION ";
        switch ( (int)v21 )
        {
          case 1280:
            v22 = "GL_INVALID_ENUM ";
            goto LABEL_54;
          case 1281:
            v22 = "GL_INVALID_VALUE ";
            goto LABEL_54;
          case 1282:
            goto LABEL_54;
          case 1285:
            v22 = "GL_OUT_OF_MEMORY ";
            goto LABEL_54;
          default:
            goto LABEL_52;
        }
      }
      if ( (_DWORD)v21 )
      {
    LABEL_52:
        v22 = "";
        if ( (_DWORD)v21 == 1286 )
          v22 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_54:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          (__int64)&v52,
          v22,
          v21,
          v21,
          518,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
        Debugger::error(&v52);
      }
      glEnableVertexAttribArray(2u);
      v23 = glGetError();
      if ( (int)v23 > 1279 )
      {
        v24 = "GL_INVALID_OPERATION ";
        switch ( (int)v23 )
        {
          case 1280:
            v24 = "GL_INVALID_ENUM ";
            goto LABEL_62;
          case 1281:
            v24 = "GL_INVALID_VALUE ";
            goto LABEL_62;
          case 1282:
            goto LABEL_62;
          case 1285:
            v24 = "GL_OUT_OF_MEMORY ";
            goto LABEL_62;
          default:
            goto LABEL_60;
        }
      }
      if ( (_DWORD)v23 )
      {
    LABEL_60:
        v24 = "";
        if ( (_DWORD)v23 == 1286 )
          v24 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_62:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          (__int64)&v51,
          v24,
          v23,
          v23,
          521,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
        Debugger::error(&v51);
      }
      glEnableVertexAttribArray(3u);
      v25 = glGetError();
      if ( (int)v25 > 1279 )
      {
        v26 = "GL_INVALID_OPERATION ";
        switch ( (int)v25 )
        {
          case 1280:
            v26 = "GL_INVALID_ENUM ";
            goto LABEL_70;
          case 1281:
            v26 = "GL_INVALID_VALUE ";
            goto LABEL_70;
          case 1282:
            goto LABEL_70;
          case 1285:
            v26 = "GL_OUT_OF_MEMORY ";
            goto LABEL_70;
          default:
            goto LABEL_68;
        }
      }
      if ( (_DWORD)v25 )
      {
    LABEL_68:
        v26 = "";
        if ( (_DWORD)v25 == 1286 )
          v26 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_70:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          (__int64)&v50,
          v26,
          v25,
          v25,
          524,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
        Debugger::error(&v50);
      }
      if ( *(_DWORD *)(a1 + 436) != 2 )
      {
        glVertexAttribPointer(0, 2, 0x1406u, 0, 20, 0);
        v27 = glGetError();
        if ( (int)v27 > 1279 )
        {
          v28 = "GL_INVALID_OPERATION ";
          switch ( (int)v27 )
          {
            case 1280:
              v28 = "GL_INVALID_ENUM ";
              goto LABEL_79;
            case 1281:
              v28 = "GL_INVALID_VALUE ";
              goto LABEL_79;
            case 1282:
              goto LABEL_79;
            case 1285:
              v28 = "GL_OUT_OF_MEMORY ";
              goto LABEL_79;
            default:
              goto LABEL_77;
          }
        }
        if ( (_DWORD)v27 )
        {
    LABEL_77:
          v28 = "";
          if ( (_DWORD)v27 == 1286 )
            v28 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_79:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v49,
            v28,
            v27,
            v27,
            528,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v49);
        }
        glVertexAttribPointer(1u, 2, 0x1403u, 1u, 20, (const GLvoid *)8);
        v29 = glGetError();
        if ( (int)v29 > 1279 )
        {
          v30 = "GL_INVALID_OPERATION ";
          switch ( (int)v29 )
          {
            case 1280:
              v30 = "GL_INVALID_ENUM ";
              goto LABEL_87;
            case 1281:
              v30 = "GL_INVALID_VALUE ";
              goto LABEL_87;
            case 1282:
              goto LABEL_87;
            case 1285:
              v30 = "GL_OUT_OF_MEMORY ";
              goto LABEL_87;
            default:
              goto LABEL_85;
          }
        }
        if ( (_DWORD)v29 )
        {
    LABEL_85:
          v30 = "";
          if ( (_DWORD)v29 == 1286 )
            v30 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_87:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v48,
            v30,
            v29,
            v29,
            529,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v48);
        }
        glVertexAttribPointer(2u, 4, 0x1401u, 1u, 20, (const GLvoid *)0xC);
        v31 = glGetError();
        if ( (int)v31 > 1279 )
        {
          v32 = "GL_INVALID_OPERATION ";
          switch ( (int)v31 )
          {
            case 1280:
              v32 = "GL_INVALID_ENUM ";
              goto LABEL_95;
            case 1281:
              v32 = "GL_INVALID_VALUE ";
              goto LABEL_95;
            case 1282:
              goto LABEL_95;
            case 1285:
              v32 = "GL_OUT_OF_MEMORY ";
              goto LABEL_95;
            default:
              goto LABEL_93;
          }
        }
        if ( (_DWORD)v31 )
        {
    LABEL_93:
          v32 = "";
          if ( (_DWORD)v31 == 1286 )
            v32 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_95:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v47,
            v32,
            v31,
            v31,
            530,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v47);
        }
        glVertexAttribPointer(3u, 4, 0x1401u, 1u, 20, (const GLvoid *)0x10);
        v33 = glGetError();
        if ( (int)v33 > 1279 )
        {
          v34 = "GL_INVALID_OPERATION ";
          switch ( (int)v33 )
          {
            case 1280:
              v34 = "GL_INVALID_ENUM ";
              goto LABEL_103;
            case 1281:
              v34 = "GL_INVALID_VALUE ";
              goto LABEL_103;
            case 1282:
              goto LABEL_103;
            case 1285:
              v34 = "GL_OUT_OF_MEMORY ";
              goto LABEL_103;
            default:
              goto LABEL_101;
          }
        }
        if ( (_DWORD)v33 )
        {
    LABEL_101:
          v34 = "";
          if ( (_DWORD)v33 == 1286 )
            v34 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_103:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v46,
            v34,
            v33,
            v33,
            531,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v46);
        }
      }
      if ( !*(_BYTE *)(a1 + 336) )
      {
        *(_BYTE *)(a1 + 336) = 1;
        v35 = (DataLoaderFactory *)Renderer::setViewport(
                                     (int)*(float *)(a1 + 44),
                                     (int)*(float *)(a1 + 48),
                                     (int)(float)(*(float *)(a1 + 52) - *(float *)(a1 + 44)),
                                     (int)(float)(*(float *)(a1 + 56) - *(float *)(a1 + 48)));
        Renderer::getPixelMatrix(v35);
        for ( i = 120; i != 168; i += 8 )
          Stage::firstTimeShaderInit(a1, *(GLuint **)(a1 + i), v45, v36, v37, v38, v39, v40);
      }
      glActiveTexture(0x84C0u);
      result = glGetError();
      if ( (int)result > 1279 )
      {
        v43 = "GL_INVALID_OPERATION ";
        switch ( (int)result )
        {
          case 1280:
            v43 = "GL_INVALID_ENUM ";
            goto LABEL_114;
          case 1281:
            v43 = "GL_INVALID_VALUE ";
            goto LABEL_114;
          case 1282:
            goto LABEL_114;
          case 1285:
            v43 = "GL_OUT_OF_MEMORY ";
            goto LABEL_114;
          default:
            goto LABEL_112;
        }
      }
      if ( (_DWORD)result )
      {
    LABEL_112:
        v43 = "";
        if ( (_DWORD)result == 1286 )
          v43 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
    LABEL_114:
        String::format(
          (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
          (__int64)&v44,
          v43,
          result,
          result,
          547,
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
        Debugger::error(&v44);
      }
      return result;
    }

    __int64 __fastcall Stage::updateStageSizeVariables(__int64 result, double a2)
    {
      int32x2_t v2; // d1
    
      LODWORD(a2) = *(_DWORD *)(result + 292);
      v2 = 0;
      if ( *(float *)&a2 != 0.0 )
        v2 = vcvt_s32_f32(
               vrndp_f32(
                 vdiv_f32(
                   vsub_f32(*(float32x2_t *)(result + 52), *(float32x2_t *)(result + 44)),
                   (float32x2_t)vdup_lane_s32(*(int32x2_t *)&a2, 0))));
      *(int32x2_t *)(result + 428) = v2;
      return result;
    }

    __int64 __fastcall Stage::setClip(__int64 result, int a2, float a3, float a4, float a5, float a6)
    {
      int v6; // w19
      __int64 v7; // x20
      float v8; // s16
      float v9; // s17
      float v10; // s8
      float v11; // s0
      float v12; // s6
      float v13; // s7
      float v14; // s1
      float v15; // s2
      float v16; // s3
      float v17; // s9
      float v18; // s2
      float v19; // s5
      float v20; // s1
      float v21; // s4
      int v22; // w22
      int v23; // w23
      bool v24; // zf
      int v25; // w8
      float v26; // s18
      float v27; // s19
      float v28; // s20
      float v29; // s21
      float v30; // s22
      int v31; // w8
      __int64 v32; // x21
      float v33; // s0
    
      v6 = a2;
      v7 = result;
      v9 = *(float *)(result + 44);
      v8 = *(float *)(result + 48);
      if ( v9 <= a3 )
        v10 = a3;
      else
        v10 = *(float *)(result + 44);
      if ( v8 <= a4 )
        v11 = a4;
      else
        v11 = *(float *)(result + 48);
      v13 = *(float *)(result + 52);
      v12 = *(float *)(result + 56);
      if ( v13 >= a5 )
        v14 = a5;
      else
        v14 = *(float *)(result + 52);
      if ( v12 >= a6 )
        v15 = a6;
      else
        v15 = *(float *)(result + 56);
      if ( v14 >= v10 )
        v16 = v14;
      else
        v16 = v10;
      if ( v15 >= v11 )
        v17 = v15;
      else
        v17 = v11;
      v19 = *(float *)(result + 68);
      v18 = *(float *)(result + 72);
      v21 = *(float *)(result + 60);
      v20 = *(float *)(result + 64);
      *(float *)(result + 60) = v10;
      *(float *)(result + 64) = v11;
      *(float *)(result + 68) = v16;
      *(float *)(result + 72) = v17;
      *(float *)(result + 76) = v10;
      *(float *)(result + 80) = v11;
      *(float *)(result + 84) = v16;
      v22 = (int)(float)(v16 - v10);
      *(float *)(result + 88) = v17;
      v23 = (int)(float)(v17 - v11);
      if ( v22 )
        v24 = v23 == 0;
      else
        v24 = 1;
      if ( v24 )
      {
        *(float *)(result + 76) = v13;
        v25 = 1;
        v26 = v12;
        *(float *)(result + 80) = v12;
        *(float *)(result + 84) = v13;
        v27 = v12;
        v28 = v13;
        v29 = v13;
        *(float *)(result + 88) = v12;
      }
      else
      {
        v25 = 0;
        v26 = v17;
        v27 = v11;
        v28 = v16;
        v29 = v10;
      }
      v30 = *(float *)(result + 292);
      *(float *)(result + 296) = v29 / v30;
      *(float *)(result + 308) = v28 / v30;
      *(float *)(result + 300) = v27 / v30;
      *(float *)(result + 304) = v26 / v30;
      if ( !*(_BYTE *)(result + 332) )
      {
        if ( v10 > v9 || v11 > v8 || v16 < v13 )
        {
          if ( (v25 & 1) != 0 )
            return result;
        }
        else
        {
          v6 = (unsigned __int8)a2 & (v17 < v12);
          if ( v17 < v12 && ((v25 ^ 1) & 1) == 0 )
            return result;
        }
        if ( *(unsigned __int8 *)(result + 333) != v6 || v6 && (v19 != v16 || v21 != v10 || v18 != v17 || v20 != v11) )
        {
          v31 = *(_DWORD *)(result + 232);
          if ( v31 == *(_DWORD *)(result + 236) )
          {
            Stage::increaseBucketCapacity(result, 5 * v31 / 4);
            v31 = *(_DWORD *)(v7 + 232);
          }
          *(_DWORD *)(v7 + 232) = v31 + 1;
          v32 = *(_QWORD *)(v7 + 240) + 440LL * v31;
          result = StageDrawBucket::initForUse((StageDrawBucket *)v32, 0, 0, *(_DWORD *)(v7 + 376), *(_DWORD *)(v7 + 396));
          *(_BYTE *)(v32 + 20) = 1;
          *(_BYTE *)(v32 + 21) = v6;
          v33 = *(float *)(v7 + 56) - v17;
          *(_DWORD *)(v32 + 24) = (int)v10;
          *(_DWORD *)(v32 + 28) = (int)v33;
          *(_DWORD *)(v32 + 32) = v22;
          *(_DWORD *)(v32 + 36) = v23;
          *(_DWORD *)(v7 + 512) = *(_DWORD *)(v7 + 232);
          *(_DWORD *)(v7 + 504) = 0;
          *(_QWORD *)(v7 + 496) = 0;
          *(_QWORD *)(v7 + 400) = 0;
          *(_BYTE *)(v7 + 333) = v6;
        }
      }
      return result;
    }

    void __fastcall Stage::setBackgroundColor(__int64 a1, unsigned int a2)
    {
      *(_DWORD *)(a1 + 312) = a2;
      Renderer::clearColor(a2);
    }

    __int64 __fastcall Stage::bindTexture(__int64 a1, AvatarRankingEntry *a2)
    {
      if ( a2 )
        GLImage::validate(a2);
      if ( *(AvatarRankingEntry **)(a1 + 104) == a2 )
        return 0;
      *(_QWORD *)(a1 + 104) = a2;
      if ( a2 )
        GLImage::bind((__int64)a2);
      return 1;
    }

    void __fastcall Stage::render(__int64 a1, _BOOL4 a2, long double a3)
    {
      int v6; // w21
      int v7; // w24
      int v8; // w23
      NativeFont *v9; // x0
      NativeFont *FontCacheWidth; // x0
      int v11; // w20
      int FontCacheHeight; // w0
      unsigned int v13; // w8
      int v14; // w9
      unsigned __int64 v15; // x21
      int v16; // w22
      NativeFont *v18; // x0
      int v19; // w2
      _DWORD v20[6]; // [xsp+8h] [xbp-58h] BYREF
    
      if ( !*(_BYTE *)(a1 + 339) )
        Debugger::warning("Stage::render m_initCalled = false");
      if ( a2 )
        Renderer::clear(7u);
      if ( *(_QWORD *)(a1 + 104) )
        *(_QWORD *)(a1 + 104) = 0;
      StageDrawBucket::sm_renderCount = 0;
      Stage::resetRenderVariables((Stage *)a1);
      v6 = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 32) = (v6 + 512) & 0xFFFFFE00;
      Matrix2x3::Matrix2x3((Matrix2x3 *)v20);
      v20[0] = *(_DWORD *)(a1 + 292);
      v20[3] = v20[0];
      v7 = NativeFont::s_cacheSerial;
      v8 = *(_DWORD *)(a1 + 448);
      *(_DWORD *)(a1 + 448) = 0;
      (*(void (__fastcall **)(_QWORD, _DWORD *, __int64, _QWORD, long double))(**(_QWORD **)(a1 + 176) + 16LL))(
        *(_QWORD *)(a1 + 176),
        v20,
        *(_QWORD *)(a1 + 176) + 9LL,
        *(unsigned int *)(a1 + 32),
        a3);
      if ( v7 == NativeFont::s_cacheSerial )
      {
        Stage::renderBuckets((Stage *)a1);
      }
      else
      {
        if ( !*(_BYTE *)(a1 + 337) )
        {
          *(_BYTE *)(a1 + 337) = 1;
          *(_DWORD *)(a1 + 32) = v6;
          Debugger::hudPrint((__siginfo *)"Stage::render again because font texture was full", (const char *)0xFFFFFFFFLL);
          Stage::render((Stage *)a1, 0.0, a2);
          *(_BYTE *)(a1 + 337) = 0;
          goto LABEL_32;
        }
        v9 = (NativeFont *)Stage::renderBuckets((Stage *)a1);
        FontCacheWidth = (NativeFont *)NativeFont::getFontCacheWidth(v9);
        v11 = (int)FontCacheWidth;
        if ( (int)FontCacheWidth >= 1 )
        {
          FontCacheHeight = NativeFont::getFontCacheHeight(FontCacheWidth);
          v13 = 2 * v11;
          if ( 2 * v11 > 2048 )
            v13 = 2048;
          if ( v11 > 2047 )
            v13 = v11;
          if ( 2 * FontCacheHeight <= 2048 )
            v14 = 2 * FontCacheHeight;
          else
            v14 = 2048;
          if ( FontCacheHeight <= 2047 )
            v15 = (unsigned int)v11;
          else
            v15 = v13;
          if ( FontCacheHeight <= 2047 )
            v16 = v14;
          else
            v16 = FontCacheHeight;
          if ( v11 != (_DWORD)v15 || FontCacheHeight != v16 )
          {
            Debugger::hudPrint((__siginfo *)"Stage::render font texture size increased", (const char *)0xFFFFFFFFLL);
            NativeFont::deconstructCache(v18);
            NativeFont::constructCache((SelectableButton *)v15, v16, v19);
          }
        }
      }
      if ( Stage::sm_debugBucketEndIndex != 0xFFFFFFF )
        *(_DWORD *)(a1 + 448) = v8;
    LABEL_32:
      Matrix2x3::~Matrix2x3((DataLoaderShader *)v20);
    }

    void *__fastcall Stage::resetRenderVariables(__int64 a1)
    {
      int v2; // w20
      __int64 v3; // x21
      void *result; // x0
    
      *(_DWORD *)(a1 + 512) = 0;
      *(_DWORD *)(a1 + 376) = 0;
      *(_QWORD *)(a1 + 404) = 0;
      *(_QWORD *)(a1 + 396) = 0;
      v2 = *(_DWORD *)(a1 + 232);
      if ( v2 >= 1 )
      {
        v3 = 0;
        do
        {
          StageDrawBucket::reset((SoundSystem::Impl *)(*(_QWORD *)(a1 + 240) + v3));
          --v2;
          v3 += 440;
        }
        while ( v2 );
      }
      *(_DWORD *)(a1 + 232) = 0;
      result = memset((void *)(a1 + 524), 0, 0xC0u);
      *(_QWORD *)(a1 + 496) = 0;
      *(_DWORD *)(a1 + 504) = -1;
      *(_DWORD *)(a1 + 508) = -1;
      *(_DWORD *)(a1 + 440) = 0;
      return result;
    }

    void *__fastcall Stage::renderBuckets(__int64 a1)
    {
      long double v1; // q8
      long double v2; // q9
      long double v3; // q10
      long double v4; // q11
      NativeFont *isContentValidationMode; // x0
      int v8; // w8
      int v9; // w9
      int v10; // w8
      int v11; // w25
      __int64 v12; // x19
      __int64 v13; // x8
      char *v14; // x14
      int *v15; // x28
      int v16; // w22
      __int64 v17; // x10
      __int64 Error; // x0
      __int64 v19; // x0
      const char *v20; // x9
      __int64 v21; // x0
      const char *v22; // x9
      __int64 v23; // x0
      const char *v24; // x9
      __int64 v25; // x0
      const char *v26; // x9
      const char *v27; // x9
      __int64 v28; // x0
      const char *v29; // x9
      __int64 v30; // x21
      char v31; // w24
      __int64 v32; // x27
      __int64 v33; // x11
      __int64 v34; // x15
      const char *v35; // x9
      const char *v36; // x9
      __int64 v37; // x22
      __int64 v38; // x26
      __int64 v39; // x25
      int *v40; // x22
      AvatarRankingEntry *Texture; // x28
      __int16 RenderConfig; // w26
      MovieClipFrame *v43; // x0
      MovieClipFrame *Instance; // x0
      MovieClipFrame *v45; // x0
      MovieClipFrame *isOverdrawEnabled; // x0
      DataLoaderFactory *v47; // x0
      __int64 v48; // x1
      __int64 v49; // x2
      __int64 v50; // x3
      int v51; // w4
      GLuint *v52; // x26
      char v53; // w8
      __int64 v54; // x0
      GLuint *Shader; // x0
      __int64 v56; // x1
      __int64 v57; // x2
      __int64 v58; // x3
      int v59; // w4
      char v60; // w8
      __int64 v61; // x0
      int v62; // w1
      int v63; // w0
      __int64 v64; // x0
      char *v65; // x0
      __int64 v66; // x0
      const char *v67; // x9
      __int64 v68; // x0
      const char *v69; // x9
      __int64 v70; // x0
      const char *v71; // x9
      __int64 v72; // x8
      __int64 v73; // x24
      __int64 v74; // x9
      __int64 v75; // x26
      __int64 v76; // x28
      __int64 v77; // x21
      bool v78; // zf
      int v79; // w25
      char *v80; // x22
      __int64 v81; // x12
      __int64 v82; // x10
      __int64 v83; // x9
      __int64 v84; // x19
      __int64 v85; // x27
      char *v86; // x12
      int v87; // w11
      char *v88; // x11
      int v89; // w12
      int v90; // w13
      char *v91; // x10
      char *v92; // x22
      int v93; // w23
      __int64 v94; // x9
      __int64 v95; // x19
      char *v96; // x12
      int v97; // w11
      char *v98; // x11
      int v99; // w12
      int v100; // w13
      char *v101; // x10
      int v102; // w8
      bool v103; // cc
      int v104; // w9
      int v105; // w8
      GLvoid *v106; // [xsp+90h] [xbp-260h]
      GLvoid *v107; // [xsp+98h] [xbp-258h]
      GLvoid *v108; // [xsp+A0h] [xbp-250h]
      GLvoid *ptr; // [xsp+B0h] [xbp-240h]
      int v110; // [xsp+B8h] [xbp-238h]
      char *data; // [xsp+C0h] [xbp-230h]
      int v112; // [xsp+C8h] [xbp-228h]
      int v113; // [xsp+D4h] [xbp-21Ch]
      int v114; // [xsp+D4h] [xbp-21Ch]
      __int64 v115; // [xsp+D8h] [xbp-218h]
      __int64 v116; // [xsp+E0h] [xbp-210h]
      char v117; // [xsp+ECh] [xbp-204h]
      int v118; // [xsp+F8h] [xbp-1F8h]
      __int64 v119; // [xsp+F8h] [xbp-1F8h]
      int v120; // [xsp+F8h] [xbp-1F8h]
      __int64 v121; // [xsp+100h] [xbp-1F0h]
      __int64 v122; // [xsp+100h] [xbp-1F0h]
      __int64 v123; // [xsp+100h] [xbp-1F0h]
      __int64 v124; // [xsp+108h] [xbp-1E8h]
      int v125; // [xsp+108h] [xbp-1E8h]
      char *indices; // [xsp+110h] [xbp-1E0h]
      __int64 v127; // [xsp+118h] [xbp-1D8h]
      String v128; // [xsp+120h] [xbp-1D0h] BYREF
      String v129; // [xsp+138h] [xbp-1B8h] BYREF
      String v130; // [xsp+150h] [xbp-1A0h] BYREF
      char v131[64]; // [xsp+168h] [xbp-188h] BYREF
      String v132; // [xsp+1A8h] [xbp-148h] BYREF
      String v133; // [xsp+1C0h] [xbp-130h] BYREF
      String v134; // [xsp+1D8h] [xbp-118h] BYREF
      String v135; // [xsp+1F0h] [xbp-100h] BYREF
      String v136; // [xsp+208h] [xbp-E8h] BYREF
      String v137; // [xsp+220h] [xbp-D0h] BYREF
      String v138; // [xsp+238h] [xbp-B8h] BYREF
      String v139; // [xsp+250h] [xbp-A0h] BYREF
      String v140; // [xsp+268h] [xbp-88h] BYREF
    
      isContentValidationMode = (NativeFont *)Debugger::isContentValidationMode();
      if ( (_DWORD)isContentValidationMode )
        return Stage::resetRenderVariables(a1);
      if ( (unsigned int)NativeFont::updateCache(isContentValidationMode) )
        *(_QWORD *)(a1 + 104) = 0;
      v8 = *(_DWORD *)(a1 + 396);
      if ( 2 * v8 > *(_DWORD *)(a1 + 392) )
      {
        v9 = 5 * v8 / 4;
        if ( v9 >= 0x10000 )
          v9 = 0xFFFF;
        Stage::increaseVertexBucketCapacity(a1, v9 + v8);
        v8 = *(_DWORD *)(a1 + 396);
      }
      v116 = v8;
      v115 = *(_QWORD *)(a1 + 384);
      ptr = (GLvoid *)(v115 + 20LL * v8);
      v110 = *(_DWORD *)(a1 + 232);
      v10 = *(_DWORD *)(a1 + 440);
      if ( (int)((unsigned __int64)(24LL * *(int *)(a1 + 424)) >> 1) < v10 )
        Stage::increaseBucketRectCapacity(a1, 2LL * (5 * v10 / 4) / 0x18uLL + 1, 0);
      v11 = 0;
      v12 = v110;
      v13 = v115 + 20 * v116;
      v14 = *(char **)(a1 + 416);
      data = v14;
      v108 = (GLvoid *)(v13 + 8);
      v106 = (GLvoid *)(v13 + 16);
      v107 = (GLvoid *)(v13 + 12);
      LODWORD(v1) = 1045220557;
      LODWORD(v2) = 1036831949;
      LODWORD(v3) = 1028443341;
      LODWORD(v4) = 1.0;
      v15 = &StageDrawBucket::sm_renderCount;
      v16 = -1;
      v17 = 0xFFFFFFFFLL;
      do
      {
        v112 = v11;
        v125 = 0;
        v72 = 0;
        v73 = v11;
        v127 = v11;
        LODWORD(v34) = v11;
        v74 = v17;
        do
        {
          if ( v73 >= v12 )
          {
            LODWORD(v32) = v72;
            v33 = v74;
            LODWORD(v34) = v110;
            break;
          }
          v34 = (unsigned int)(v34 + 1);
          v75 = 440 * v73 + 16;
          while ( 1 )
          {
            v76 = *(_QWORD *)(a1 + 240);
            v77 = *(int *)(v76 + v75 - 12);
            v78 = (_DWORD)v74 == -1;
            if ( (_DWORD)v74 == -1 )
              v79 = *(_DWORD *)(v76 + v75 - 4);
            else
              v79 = v16;
            if ( (_DWORD)v74 == -1 )
              LODWORD(v74) = *(_DWORD *)(v76 + v75 - 16);
            if ( !v78 )
              break;
            if ( (_DWORD)v77 - (_DWORD)v74 != *(_DWORD *)(v76 + v75 - 8) )
              goto LABEL_191;
            if ( (int)v77 > (int)v74 )
            {
              v120 = v34;
              v114 = v16;
              v92 = v14;
              v33 = (int)v74;
              v93 = v125;
              while ( 1 )
              {
                v94 = *(int *)(*(_QWORD *)(a1 + 368) + 16 * v33 + 8);
                v95 = v94 + 2;
                v32 = (unsigned int)(v94 + 2 + v72);
                if ( (int)v32 >= 0x10000 )
                  break;
                v123 = v33;
                v96 = &v92[2 * v93];
                *(_WORD *)v96 = v72;
                *((_WORD *)v96 + 1) = v72 + 1;
                *(_WORD *)&v92[2 * v93 + 4] = v72 + 2;
                v97 = v93 + 4;
                *((_WORD *)v96 + 3) = v72 + 3;
                if ( (int)v95 >= 5 )
                {
                  v98 = &v92[2 * v97];
                  v99 = v94 - 2;
                  v100 = v72 + 4;
                  do
                  {
                    *(_WORD *)v98 = v100;
                    v98 += 2;
                    --v99;
                    ++v100;
                  }
                  while ( v99 );
                  v97 = v93 + 2 + v94;
                }
                v101 = &v92[2 * v97];
                *(_WORD *)v101 = v94 + 2 + v72 - 1;
                v93 = v97 + 2;
                *((_WORD *)v101 + 1) = v94 + 2 + v72;
                memcpy(
                  (void *)(v115 + 20 * (v116 + (int)v72)),
                  (const void *)(*(_QWORD *)(a1 + 384) + 20LL * v79),
                  20 * v95);
                v79 += v95;
                v33 = v123 + 1;
                v72 = v32;
                if ( v123 + 1 >= v77 )
                {
                  v33 = 0xFFFFFFFFLL;
    LABEL_214:
                  v14 = v92;
                  LODWORD(v34) = v120;
                  goto LABEL_215;
                }
              }
              v32 = v72;
              v114 = v79;
              goto LABEL_214;
            }
    LABEL_192:
            *(_DWORD *)(v76 + v75) = 0;
            ++v73;
            v34 = (unsigned int)(v34 + 1);
            v75 += 440;
            LODWORD(v74) = -1;
            if ( v73 >= v12 )
            {
              LODWORD(v32) = v72;
              v33 = 0xFFFFFFFFLL;
              LODWORD(v34) = v110;
              v15 = &StageDrawBucket::sm_renderCount;
              v11 = v112;
              goto LABEL_221;
            }
          }
          v16 = -1;
    LABEL_191:
          if ( (int)v77 <= (int)v74 )
            goto LABEL_192;
          v114 = v16;
          v80 = v14;
          v33 = (int)v74;
          v81 = v76 + v75;
          v93 = v125;
          while ( 1 )
          {
            v82 = *(_QWORD *)(a1 + 368) + 16 * v33;
            v83 = *(int *)(v82 + 8);
            v84 = v83 + 2;
            if ( v81 - *(_QWORD *)v82 == 16 )
              break;
    LABEL_202:
            v79 += v84;
            if ( ++v33 >= v77 )
            {
              v33 = 0xFFFFFFFFLL;
              v32 = v72;
              goto LABEL_205;
            }
          }
          v85 = (unsigned int)(v84 + v72);
          if ( (int)v85 < 0x10000 )
          {
            v119 = v34;
            v122 = v33;
            v86 = &v80[2 * v93];
            *(_WORD *)v86 = v72;
            *((_WORD *)v86 + 1) = v72 + 1;
            *(_WORD *)&v80[2 * v93 + 4] = v72 + 2;
            v87 = v93 + 4;
            *((_WORD *)v86 + 3) = v72 + 3;
            if ( (int)v84 >= 5 )
            {
              v88 = &v80[2 * v87];
              v89 = v83 - 2;
              v90 = v72 + 4;
              do
              {
                *(_WORD *)v88 = v90;
                v88 += 2;
                --v89;
                ++v90;
              }
              while ( v89 );
              v87 = v93 + 2 + v83;
            }
            v91 = &v80[2 * v87];
            *(_WORD *)v91 = v84 + v72 - 1;
            v93 = v87 + 2;
            *((_WORD *)v91 + 1) = v84 + v72;
            memcpy((void *)(v115 + 20 * (v116 + (int)v72)), (const void *)(*(_QWORD *)(a1 + 384) + 20LL * v79), 20 * v84);
            v72 = v85;
            v34 = v119;
            v33 = v122;
            v81 = v76 + v75;
            goto LABEL_202;
          }
          v32 = v72;
          v114 = v79;
    LABEL_205:
          v14 = v80;
    LABEL_215:
          v102 = v93 - 2;
          v103 = v93 <= v125;
          v104 = v93 - 2 - v125;
          if ( v93 <= v125 )
            v102 = v93;
          v125 = v102;
          if ( v103 )
            v105 = 0;
          else
            v105 = v104;
          *(_DWORD *)(v76 + v75) = v105;
          ++v73;
          v74 = 0xFFFFFFFFLL;
          v72 = v32;
          v12 = v110;
          v15 = &StageDrawBucket::sm_renderCount;
          v16 = v114;
          v11 = v112;
        }
        while ( (_DWORD)v33 == -1 );
    LABEL_221:
        if ( !(_DWORD)v32 )
          return Stage::resetRenderVariables(a1);
        v118 = v34;
        v121 = v33;
        if ( *(_DWORD *)(a1 + 436) == 2 )
        {
          glVertexAttribPointer(0, 2, 0x1406u, 0, 20, ptr);
          Error = glGetError();
          if ( (int)Error > 1279 )
          {
            v20 = "GL_INVALID_OPERATION ";
            switch ( (int)Error )
            {
              case 1280:
                v20 = "GL_INVALID_ENUM ";
                goto LABEL_24;
              case 1281:
                v20 = "GL_INVALID_VALUE ";
                goto LABEL_24;
              case 1282:
                goto LABEL_24;
              case 1285:
                v20 = "GL_OUT_OF_MEMORY ";
                goto LABEL_24;
              default:
                goto LABEL_21;
            }
          }
          if ( (_DWORD)Error )
          {
    LABEL_21:
            if ( (_DWORD)Error == 1286 )
              v20 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
            else
              v20 = "";
    LABEL_24:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              (__int64)&v140,
              v20,
              Error,
              Error,
              1723,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
            Debugger::error(&v140);
          }
          glVertexAttribPointer(1u, 2, 0x1403u, 1u, 20, v108);
          v21 = glGetError();
          if ( (int)v21 > 1279 )
          {
            v24 = "GL_INVALID_OPERATION ";
            switch ( (int)v21 )
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
          if ( (_DWORD)v21 )
          {
    LABEL_39:
            if ( (_DWORD)v21 == 1286 )
              v24 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
            else
              v24 = "";
    LABEL_42:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              (__int64)&v139,
              v24,
              v21,
              v21,
              1724,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
            Debugger::error(&v139);
          }
          glVertexAttribPointer(2u, 4, 0x1401u, 1u, 20, v107);
          v25 = glGetError();
          if ( (int)v25 > 1279 )
          {
            v27 = "GL_INVALID_OPERATION ";
            switch ( (int)v25 )
            {
              case 1280:
                v27 = "GL_INVALID_ENUM ";
                goto LABEL_57;
              case 1281:
                v27 = "GL_INVALID_VALUE ";
                goto LABEL_57;
              case 1282:
                goto LABEL_57;
              case 1285:
                v27 = "GL_OUT_OF_MEMORY ";
                goto LABEL_57;
              default:
                goto LABEL_54;
            }
          }
          if ( (_DWORD)v25 )
          {
    LABEL_54:
            if ( (_DWORD)v25 == 1286 )
              v27 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
            else
              v27 = "";
    LABEL_57:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              (__int64)&v138,
              v27,
              v25,
              v25,
              1725,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
            Debugger::error(&v138);
          }
          v113 = v16;
          glVertexAttribPointer(3u, 4, 0x1401u, 1u, 20, v106);
          v28 = glGetError();
          if ( (int)v28 > 1279 )
          {
            v29 = "GL_INVALID_OPERATION ";
            switch ( (int)v28 )
            {
              case 1280:
                v29 = "GL_INVALID_ENUM ";
                goto LABEL_66;
              case 1281:
                v29 = "GL_INVALID_VALUE ";
                goto LABEL_66;
              case 1282:
                goto LABEL_66;
              case 1285:
                v29 = "GL_OUT_OF_MEMORY ";
                goto LABEL_66;
              default:
                goto LABEL_63;
            }
          }
          indices = data;
          if ( (_DWORD)v28 )
          {
    LABEL_63:
            if ( (_DWORD)v28 == 1286 )
              v29 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
            else
              v29 = "";
    LABEL_66:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              (__int64)&v137,
              v29,
              v28,
              v28,
              1726,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
            Debugger::error(&v137);
          }
        }
        else
        {
          glBufferData(0x8892u, 20 * (int)v32, ptr, 0x88E0u);
          v19 = glGetError();
          if ( (int)v19 > 1279 )
          {
            v22 = "GL_INVALID_OPERATION ";
            switch ( (int)v19 )
            {
              case 1280:
                v22 = "GL_INVALID_ENUM ";
                goto LABEL_33;
              case 1281:
                v22 = "GL_INVALID_VALUE ";
                goto LABEL_33;
              case 1282:
                goto LABEL_33;
              case 1285:
                v22 = "GL_OUT_OF_MEMORY ";
                goto LABEL_33;
              default:
                goto LABEL_30;
            }
          }
          if ( (_DWORD)v19 )
          {
    LABEL_30:
            if ( (_DWORD)v19 == 1286 )
              v22 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
            else
              v22 = "";
    LABEL_33:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              (__int64)&v136,
              v22,
              v19,
              v19,
              1732,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
            Debugger::error(&v136);
          }
          glBufferData(0x8893u, 2LL * v125, data, 0x88E0u);
          v23 = glGetError();
          if ( (int)v23 > 1279 )
          {
            v26 = "GL_INVALID_OPERATION ";
            switch ( (int)v23 )
            {
              case 1280:
                v26 = "GL_INVALID_ENUM ";
                goto LABEL_51;
              case 1281:
                v26 = "GL_INVALID_VALUE ";
                goto LABEL_51;
              case 1282:
                goto LABEL_51;
              case 1285:
                v26 = "GL_OUT_OF_MEMORY ";
                goto LABEL_51;
              default:
                goto LABEL_48;
            }
          }
          if ( (_DWORD)v23 )
          {
    LABEL_48:
            if ( (_DWORD)v23 == 1286 )
              v26 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
            else
              v26 = "";
    LABEL_51:
            String::format(
              (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
              (__int64)&v135,
              v26,
              v23,
              v23,
              1733,
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
            Debugger::error(&v135);
          }
          v113 = v16;
          indices = 0;
        }
        if ( v11 >= v118 )
          goto LABEL_172;
        v30 = 0;
        v117 = 0;
        v31 = 0;
        v124 = 440LL * v11;
        while ( 2 )
        {
          v37 = *(_QWORD *)(a1 + 240);
          v38 = v37 + v124 + v30;
          v39 = *(int *)(v38 + 16);
          if ( *(_BYTE *)(v38 + 20) )
            Debugger::doAssert((_DWORD)v39 == 0, "");
          if ( !(_DWORD)v39 )
          {
            if ( *(_BYTE *)(v38 + 20) )
            {
              if ( *(_BYTE *)(v37 + v124 + v30 + 21) )
              {
                if ( !*(_BYTE *)(a1 + 334) )
                {
                  glEnable(0xC11u);
                  v54 = glGetError();
                  if ( (int)v54 > 1279 )
                  {
                    v35 = "GL_INVALID_OPERATION ";
                    switch ( (int)v54 )
                    {
                      case 1280:
                        v35 = "GL_INVALID_ENUM ";
                        goto LABEL_116;
                      case 1281:
                        v35 = "GL_INVALID_VALUE ";
                        goto LABEL_116;
                      case 1282:
                        goto LABEL_116;
                      case 1285:
                        v35 = "GL_OUT_OF_MEMORY ";
                        goto LABEL_116;
                      default:
                        goto LABEL_113;
                    }
                  }
                  if ( (_DWORD)v54 )
                  {
    LABEL_113:
                    if ( (_DWORD)v54 == 1286 )
                      v35 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
                    else
                      v35 = "";
    LABEL_116:
                    String::format(
                      (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                      (__int64)&v134,
                      v35,
                      v54,
                      v54,
                      1766,
                      "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
                    Debugger::error(&v134);
                  }
                  *(_BYTE *)(a1 + 334) = 1;
                }
                glScissor(
                  *(_DWORD *)(v37 + v124 + v30 + 24),
                  *(_DWORD *)(v37 + v124 + v30 + 28),
                  *(_DWORD *)(v37 + v124 + v30 + 32),
                  *(_DWORD *)(v37 + v124 + v30 + 36));
                v66 = glGetError();
                if ( (int)v66 > 1279 )
                {
                  v67 = "GL_INVALID_OPERATION ";
                  switch ( (int)v66 )
                  {
                    case 1280:
                      v67 = "GL_INVALID_ENUM ";
                      goto LABEL_126;
                    case 1281:
                      v67 = "GL_INVALID_VALUE ";
                      goto LABEL_126;
                    case 1282:
                      goto LABEL_126;
                    case 1285:
                      v67 = "GL_OUT_OF_MEMORY ";
                      goto LABEL_126;
                    default:
                      goto LABEL_123;
                  }
                }
                if ( (_DWORD)v66 )
                {
    LABEL_123:
                  if ( (_DWORD)v66 == 1286 )
                    v67 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
                  else
                    v67 = "";
    LABEL_126:
                  String::format(
                    (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                    (__int64)&v133,
                    v67,
                    v66,
                    v66,
                    1770,
                    "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
                  Debugger::error(&v133);
                }
                v31 = 1;
              }
              else if ( *(_BYTE *)(a1 + 334) )
              {
                glDisable(0xC11u);
                v61 = glGetError();
                if ( (int)v61 > 1279 )
                {
                  v36 = "GL_INVALID_OPERATION ";
                  switch ( (int)v61 )
                  {
                    case 1280:
                      v36 = "GL_INVALID_ENUM ";
                      goto LABEL_132;
                    case 1281:
                      v36 = "GL_INVALID_VALUE ";
                      goto LABEL_132;
                    case 1282:
                      goto LABEL_132;
                    case 1285:
                      v36 = "GL_OUT_OF_MEMORY ";
                      goto LABEL_132;
                    default:
                      goto LABEL_129;
                  }
                }
                if ( (_DWORD)v61 )
                {
    LABEL_129:
                  if ( (_DWORD)v61 == 1286 )
                    v36 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
                  else
                    v36 = "";
    LABEL_132:
                  String::format(
                    (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
                    (__int64)&v132,
                    v36,
                    v61,
                    v61,
                    1778,
                    "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
                  Debugger::error(&v132);
                }
                *(_BYTE *)(a1 + 334) = 0;
                v117 = 1;
              }
            }
            goto LABEL_140;
          }
          if ( *v15 > Stage::sm_debugBucketEndIndex )
            goto LABEL_139;
          v40 = v15;
          Texture = (AvatarRankingEntry *)StageDrawBucket::getTexture(v38);
          RenderConfig = StageDrawBucket::getRenderConfig(v38);
          v43 = (MovieClipFrame *)Stage::bindTexture(a1, Texture);
          *(_BYTE *)(a1 + 38) = (_BYTE)v43;
          *(_BYTE *)(a1 + 40) = v31 & 1;
          *(_BYTE *)(a1 + 41) = v117 & 1;
          Instance = (MovieClipFrame *)DebugPerformanceHud::getInstance(v43);
          if ( Instance
            && (v45 = (MovieClipFrame *)DebugPerformanceHud::getInstance(Instance),
                isOverdrawEnabled = (MovieClipFrame *)DebugPerformanceHud::isOverdrawEnabled(v45),
                (_DWORD)isOverdrawEnabled) )
          {
            v47 = (DataLoaderFactory *)DebugPerformanceHud::getInstance(isOverdrawEnabled);
            v52 = (GLuint *)*((_QWORD *)v47 + 46);
            v15 = v40;
            if ( *(GLuint **)(a1 + 168) == v52 )
            {
              v53 = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 168) = v52;
              if ( v52 )
                v47 = (DataLoaderFactory *)Shader::bind(v52, v48, v49, v50, v51);
              v53 = 1;
            }
            *(_BYTE *)(a1 + 37) = v53;
            Renderer::getPixelMatrix(v47);
            Shader::setUniformVector4(v52, "u_color", v1, v2, v3, v4);
            Shader::setUniformMatrix((__int64)v52, (__int64)"u_mvp", (__int64)v131, 1);
            v62 = 64;
          }
          else
          {
            Shader = (GLuint *)Stage::getShader(a1, RenderConfig & 0x3F);
            v15 = v40;
            if ( *(GLuint **)(a1 + 168) == Shader )
            {
              v60 = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 168) = Shader;
              if ( Shader )
                Shader::bind(Shader, v56, v57, v58, v59);
              v60 = 1;
            }
            *(_BYTE *)(a1 + 37) = v60;
            v62 = RenderConfig & 0x1C0;
          }
          v63 = Stage::bindBlendMode((Stage *)a1, v62);
          *(_BYTE *)(a1 + 39) = v63;
          *(_DWORD *)(a1 + 444) = v39 - 2;
          *(_DWORD *)(a1 + 448) += *(unsigned __int8 *)(a1 + 37) + *(unsigned __int8 *)(a1 + 38) + v63;
          DebugPerformanceHud::incrementValue(1, 1);
          DebugPerformanceHud::incrementValue(4, (unsigned int)(v39 - 2));
          glDrawElements(5u, v39, 0x1403u, indices);
          if ( *(_DWORD *)(a1 + 436) )
          {
            v31 = 0;
            v117 = 0;
            goto LABEL_139;
          }
          v64 = glGetError();
          if ( (int)v64 <= 1281 )
          {
            if ( (_DWORD)v64 )
            {
              if ( (_DWORD)v64 == 1281 )
              {
                v65 = "Stage rendering error GL_INVALID_VALUE";
    LABEL_110:
                Debugger::error(v65);
              }
              goto LABEL_137;
            }
            v31 = 0;
            v117 = 0;
            *(_DWORD *)(a1 + 436) = 1;
    LABEL_139:
            ++*v15;
            indices += 2 * v39;
    LABEL_140:
            ++v127;
            v30 += 440;
            if ( v127 >= v118 )
              goto LABEL_172;
            continue;
          }
          break;
        }
        if ( (_DWORD)v64 == 1285 )
        {
          v65 = "Stage rendering error GL_OUT_OF_MEMORY";
          goto LABEL_110;
        }
        if ( (_DWORD)v64 != 1282 )
        {
    LABEL_137:
          String::format((String *)"Stage rendering error %d", (__int64)&v128, v64);
          Debugger::error(&v128);
        }
        Debugger::warning("Changing Stage render mode because of GL_INVALID_OPERATION");
        *(_DWORD *)(a1 + 436) = 2;
        glBindBuffer(0x8892u, 0);
        v68 = glGetError();
        if ( (int)v68 > 1279 )
        {
          v69 = "GL_INVALID_OPERATION ";
          switch ( (int)v68 )
          {
            case 1280:
              v69 = "GL_INVALID_ENUM ";
              goto LABEL_162;
            case 1281:
              v69 = "GL_INVALID_VALUE ";
              goto LABEL_162;
            case 1282:
              goto LABEL_162;
            case 1285:
              v69 = "GL_OUT_OF_MEMORY ";
              goto LABEL_162;
            default:
              goto LABEL_159;
          }
        }
        if ( (_DWORD)v68 )
        {
    LABEL_159:
          if ( (_DWORD)v68 == 1286 )
            v69 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
          else
            v69 = "";
    LABEL_162:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v130,
            v69,
            v68,
            v68,
            1853,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v130);
        }
        glBindBuffer(0x8893u, 0);
        v70 = glGetError();
        if ( (int)v70 > 1279 )
        {
          v71 = "GL_INVALID_OPERATION ";
          switch ( (int)v70 )
          {
            case 1280:
              v71 = "GL_INVALID_ENUM ";
              goto LABEL_171;
            case 1281:
              v71 = "GL_INVALID_VALUE ";
              goto LABEL_171;
            case 1282:
              goto LABEL_171;
            case 1285:
              v71 = "GL_OUT_OF_MEMORY ";
              goto LABEL_171;
            default:
              goto LABEL_168;
          }
        }
        if ( (_DWORD)v70 )
        {
    LABEL_168:
          if ( (_DWORD)v70 == 1286 )
            v71 = "GL_INVALID_FRAMEBUFFER_OPERATION ";
          else
            v71 = "";
    LABEL_171:
          String::format(
            (String *)"glGetError() = %s%i (0x%.8x) at line %i (%s)",
            (__int64)&v129,
            v71,
            v70,
            v70,
            1854,
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp");
          Debugger::error(&v129);
        }
    LABEL_172:
        v17 = v121;
        v11 = v118 - ((_DWORD)v121 != -1);
        v14 = data;
        v16 = v113;
      }
      while ( v11 < v110 );
      return Stage::resetRenderVariables(a1);
    }

    __int64 __fastcall Stage::addChild(MappedFile *this, Multitouch *a2)
    {
      return (*(__int64 (__fastcall **)(_QWORD, Multitouch *))(**((_QWORD **)this + 22) + 160LL))(
               *((_QWORD *)this + 22),
               a2);
    }

    bool __fastcall Stage::isRectVisible(MappedFile *this, float a2, float a3, float a4, float a5)
    {
      return *((float *)this + 19) < a4
          && *((float *)this + 20) < a5
          && *((float *)this + 21) > a2
          && *((float *)this + 22) > a3;
    }

    bool __fastcall Stage::isRectVisibleInTouch(MappedFile *this, float a2, float a3, float a4, float a5)
    {
      float v5; // s4
      bool v6; // cc
      float v7; // s0
      bool v8; // cc
      _BOOL8 result; // x0
    
      v5 = *((float *)this + 23);
      v6 = v5 < a2 || v5 > a4;
      result = 0;
      if ( !v6 )
      {
        v7 = *((float *)this + 24);
        v8 = v7 < a3 || v7 > a5;
        if ( !v8
          && v5 >= *((float *)this + 74)
          && v5 < *((float *)this + 77)
          && v7 >= *((float *)this + 75)
          && v7 < *((float *)this + 76) )
        {
          return 1;
        }
      }
      return result;
    }

    __int64 __fastcall Stage::shapeStart(
            MappedFile *this,
            float a2,
            float a3,
            float a4,
            float a5,
            AvatarRankingEntry *a6,
            unsigned int a7,
            bool *a8)
    {
      float *v16; // x8
      bool isRectVisibleInTouch; // w0
      unsigned int v18; // w21
      int v19; // w12
      int v20; // w11
      __int64 v21; // x8
      int v23; // w23
      float v24; // s0
      int v25; // w24
      int v26; // w25
      float v27; // s0
      int v28; // w9
      int v29; // w8
      int v30; // w26
      __int64 v31; // x9
      __int64 v32; // x10
      __int64 v33; // x22
      AvatarRankingEntry **v34; // x12
      __int64 v35; // x12
      int v36; // w11
      int v37; // w16
      int v38; // w17
      __int64 v39; // x1
      __int64 v40; // x2
      __int64 v41; // x4
      AvatarRankingEntry **v43; // x10
      int v44; // w9
      __int64 v45; // x9
      int v46; // w10
      __int64 v47; // x11
      __int64 *v48; // x17
      __int64 v49; // x0
      _DWORD *v50; // x2
      __int64 v51; // x3
      __int64 v52; // x3
      __int64 v53; // x4
      StageDrawBucket *v54; // x22
      int v55; // w8
      int v56; // w27
      __int64 v57; // x8
      int v58; // w14
      __int64 *v59; // x15
      __int64 v60; // x16
      _DWORD *v61; // x0
      __int64 v62; // x1
      __int64 v63; // x1
      __int64 v64; // x2
    
      if ( *((_BYTE *)this + 332) )
      {
        v16 = (float *)*((_QWORD *)this + 40);
        if ( v16 )
        {
          if ( *v16 > a2 )
            *v16 = a2;
          if ( v16[1] > a3 )
            v16[1] = a3;
          if ( v16[3] < a5 )
            v16[3] = a5;
          isRectVisibleInTouch = 0;
          if ( v16[2] < a4 )
            v16[2] = a4;
        }
        else
        {
          isRectVisibleInTouch = Stage::isRectVisibleInTouch(this, a2, a3, a4, a5);
        }
        v21 = 0;
        *a8 = isRectVisibleInTouch;
      }
      else if ( *((float *)this + 19) >= a4
             || *((float *)this + 20) >= a5
             || *((float *)this + 21) <= a2
             || *((float *)this + 22) <= a3 )
      {
        v21 = 0;
        *a8 = 0;
      }
      else
      {
        *a8 = 1;
        if ( a6 )
        {
          GLImage::validate(a6);
          if ( (a7 & 0x38) <= 7 )
            v18 = a7;
          else
            v18 = a7 & 0xFFFFFFF8;
          v19 = *((_DWORD *)this + 128);
          if ( v18 == *((_DWORD *)this + 126) && *((AvatarRankingEntry **)this + 62) == a6 )
          {
            v20 = *((_DWORD *)this + 127);
            v19 = v20;
          }
          else
          {
            *((_QWORD *)this + 62) = a6;
            *((_DWORD *)this + 126) = v18;
            v20 = -1;
            *((_DWORD *)this + 127) = -1;
          }
          if ( a2 >= 0.0 )
          {
            v24 = *((float *)this + 13);
            v23 = (int)(float)((float)(a2 * 8.0) / v24);
          }
          else
          {
            v23 = 0;
            v24 = *((float *)this + 13);
          }
          if ( v24 > a4 )
            v25 = (int)(float)((float)(a4 * 8.0) / v24);
          else
            v25 = 7;
          if ( a3 >= 0.0 )
          {
            v27 = *((float *)this + 14);
            v26 = (int)(float)((float)(a3 * 6.0) / v27);
          }
          else
          {
            v26 = 0;
            v27 = *((float *)this + 14);
          }
          v28 = (int)(float)((float)(a5 * 6.0) / v27);
          if ( v27 <= a5 )
            v28 = 5;
          v29 = (1 - v26 + v28) * (1 - v23 + v25);
          v30 = 8 * v28;
          v31 = *((int *)this + 58);
          if ( v19 >= (int)v31 )
          {
    LABEL_67:
            LODWORD(v33) = -1;
          }
          else
          {
            v32 = *((_QWORD *)this + 30);
            v33 = v19;
            v34 = (AvatarRankingEntry **)(v32 + 440LL * v19 + 48);
            while ( *(v34 - 1) != a6 || *(_DWORD *)v34 != v18 )
            {
              ++v33;
              v34 += 55;
              if ( v33 >= v31 )
                goto LABEL_67;
            }
            if ( v20 == -1 )
              *((_DWORD *)this + 127) = v33;
            v35 = 8 * v26;
            v36 = -1;
            v37 = v33;
            v38 = v23 + 8 * v26;
            do
            {
              v39 = v38;
              do
              {
                v40 = *((int *)this + v39 + 131);
                if ( (int)v40 > v37 )
                {
                  while ( 1 )
                  {
                    v41 = *(_QWORD *)(v32 + 440 * v40 + 8 * v39 + 56);
                    if ( v41 )
                      break;
    LABEL_56:
                    if ( --v40 <= v37 )
                      goto LABEL_60;
                  }
                  while ( *(float *)v41 >= a4
                       || *(float *)(v41 + 4) >= a5
                       || *(float *)(v41 + 8) <= a2
                       || *(float *)(v41 + 12) <= a3 )
                  {
                    v41 = *(_QWORD *)(v41 + 16);
                    if ( !v41 )
                      goto LABEL_56;
                  }
                  if ( (int)v40 > v36 )
                  {
                    v36 = v40;
                    v37 = v40;
                  }
                }
    LABEL_60:
                ;
              }
              while ( v39++ < v35 + v25 );
              v35 += 8;
              v38 += 8;
            }
            while ( v35 <= v30 );
            if ( v36 != -1 )
            {
              v43 = (AvatarRankingEntry **)(v32 + 440LL * v36 + 48);
              while ( *(v43 - 1) != a6 || *(_DWORD *)v43 != v18 )
              {
                ++v36;
                v43 += 55;
                if ( v36 >= (int)v31 )
                  goto LABEL_67;
              }
              LODWORD(v33) = v36;
            }
          }
          v44 = *((_DWORD *)this + 106);
          if ( *((_DWORD *)this + 102) + v29 > v44 )
            Stage::increaseBucketRectCapacity((__int64)this, v29 + 5 * v44 / 4, 1);
          if ( (_DWORD)v33 == -1 )
          {
            v55 = *((_DWORD *)this + 58);
            if ( v55 == *((_DWORD *)this + 59) )
              Stage::increaseBucketCapacity((__int64)this, 5 * v55 / 4);
            v56 = *((_DWORD *)this + 58);
            if ( *((_DWORD *)this + 127) == -1 )
              *((_DWORD *)this + 127) = v56;
            *((_DWORD *)this + 58) = v56 + 1;
            v54 = (StageDrawBucket *)(*((_QWORD *)this + 30) + 440LL * v56);
            StageDrawBucket::initForUse(v54, a6, v18, *((_DWORD *)this + 94), *((_DWORD *)this + 99));
            v57 = 8 * v26;
            v58 = v23 + 8 * v26;
            do
            {
              v59 = (__int64 *)((char *)v54 + 8 * v58 + 56);
              v60 = v58 - 1LL;
              v61 = (_DWORD *)((char *)this + 4 * v58 + 524);
              do
              {
                v62 = *((int *)this + 102);
                *((_DWORD *)this + 102) = v62 + 1;
                v63 = *((_QWORD *)this + 52) + 24 * v62;
                *(float *)v63 = a2;
                *(float *)(v63 + 4) = a3;
                *(float *)(v63 + 8) = a4;
                *(float *)(v63 + 12) = a5;
                v64 = *v59;
                *v59++ = v63;
                *(_QWORD *)(v63 + 16) = v64;
                *v61++ = v56;
                ++v60;
              }
              while ( v60 < v57 + v25 );
              v57 += 8;
              v58 += 8;
            }
            while ( v57 <= v30 );
          }
          else
          {
            v45 = *((_QWORD *)this + 30);
            v46 = v23 + 8 * v26;
            v47 = 8 * v26;
            do
            {
              v48 = (__int64 *)(v45 + 440LL * (int)v33 + 56 + 8LL * v46);
              v49 = v46 - 1LL;
              v50 = (_DWORD *)((char *)this + 4 * v46 + 524);
              do
              {
                v51 = *((int *)this + 102);
                *((_DWORD *)this + 102) = v51 + 1;
                v52 = *((_QWORD *)this + 52) + 24 * v51;
                *(float *)v52 = a2;
                *(float *)(v52 + 4) = a3;
                *(float *)(v52 + 8) = a4;
                *(float *)(v52 + 12) = a5;
                v53 = *v48;
                *v48 = v52;
                *(_QWORD *)(v52 + 16) = v53;
                if ( (int)v33 > *v50 )
                  *v50 = v33;
                ++v48;
                ++v50;
                ++v49;
              }
              while ( v49 < v47 + v25 );
              v47 += 8;
              v46 += 8;
            }
            while ( v47 <= v30 );
            v54 = (StageDrawBucket *)(v45 + 440LL * (int)v33);
          }
          *((_QWORD *)this + 50) = v54;
          Debugger::doAssert(*((_BYTE *)v54 + 20) == 0, "");
          return 1;
        }
        else
        {
          return 0;
        }
      }
      return v21;
    }

    __int64 __fastcall Stage::getRectIndex(__int64 a1, __int64 a2)
    {
      return -1431655765 * (unsigned int)((unsigned __int64)(a2 - *(_QWORD *)(a1 + 416)) >> 3);
    }

    __int64 __fastcall Stage::textureDestructed(__int64 result, __int64 a2)
    {
      if ( *(_QWORD *)(result + 104) == a2 )
        *(_QWORD *)(result + 104) = 0;
      return result;
    }

    TouchContainer *__fastcall Stage::displayObjectCapturedTouch(TouchContainer *result, int a2, const Sprite *a3)
    {
      TouchContainer *v5; // x21
      int v6; // w8
      __int64 i; // x22
    
      v5 = result;
      v6 = *((_DWORD *)result + 72);
      if ( v6 >= 1 )
      {
        for ( i = 0; i < v6; ++i )
        {
          result = *(TouchContainer **)(*((_QWORD *)v5 + 33) + 8 * i);
          if ( *(_DWORD *)result == a2 )
          {
            result = (TouchContainer *)TouchContainer::displayObjectCapturedTouch(result, a3);
            v6 = *((_DWORD *)v5 + 72);
          }
        }
      }
      return result;
    }

    __int64 __fastcall Stage::childRemoved(__int64 result, const OutOfSyncMessage *a2, const Multitouch *a3)
    {
      __int64 v5; // x21
      __int64 v6; // x22
    
      v5 = result;
      if ( *(int *)(result + 288) >= 1 )
      {
        v6 = 0;
        do
          result = TouchContainer::childRemoved(*(ServerHelloMessage **)(*(_QWORD *)(v5 + 264) + 8 * v6++), a2, a3);
        while ( v6 < *(int *)(v5 + 288) );
      }
      return result;
    }

    void __usercall Stage::calculateMatrixHierarchy(Stage *a1@<X0>, const DisplayObject *a2@<X1>, __int64 a3@<X8>)
    {
      float *v5; // x11
      float v6; // w8
      float v7; // w9
      float v8; // w12
      float v9; // w13
      float v10; // w10
      float v11; // w11
      float v12; // s1
      float v13; // s0
      float v14; // s2
      float v15; // s3
      __int64 v16; // x8
      __int64 v17; // x9
      float v18; // s4
      float *v19; // x10
      float v20; // s7
      float v21; // s6
      float v22; // s7
      float v23; // s16
      float v24; // s17
      float v25; // s16
      float v26; // s19
      __int64 v27; // x12
      float v28; // s2
      float v29; // s3
      float v30; // s0
      float v31; // [xsp+0h] [xbp-30h] BYREF
      float v32; // [xsp+4h] [xbp-2Ch]
      float v33; // [xsp+8h] [xbp-28h]
      float v34; // [xsp+Ch] [xbp-24h]
      float v35; // [xsp+10h] [xbp-20h]
      float v36; // [xsp+14h] [xbp-1Ch]
      int v37; // [xsp+1Ch] [xbp-14h] BYREF
    
      v37 = 0;
      Stage::createParentList(a1, a2, &v37, 0);
      Matrix2x3::Matrix2x3((Matrix2x3 *)&v31);
      Matrix2x3::Matrix2x3((Matrix2x3 *)a3);
      v5 = (float *)*((_QWORD *)a1 + 22);
      v6 = v5[4];
      v31 = v6;
      v7 = v5[7];
      v34 = v7;
      v8 = v5[5];
      v32 = v8;
      v9 = v5[6];
      v33 = v9;
      v10 = v5[8];
      v35 = v10;
      v11 = v5[9];
      v36 = v11;
      if ( v37 >= 1 )
      {
        v12 = v7;
        v13 = v8;
        v14 = v9;
        v15 = v6;
        v16 = *((_QWORD *)a1 + 32);
        v17 = v37 - 1LL;
        do
        {
          v18 = v10;
          v19 = *(float **)(v16 + 8 * v17);
          v20 = v19[5];
          v21 = (float)(v19[4] * v15) + (float)(v20 * v14);
          *(float *)a3 = v21;
          v22 = (float)(v19[4] * v13) + (float)(v20 * v12);
          *(float *)(a3 + 4) = v22;
          v23 = v19[6];
          v24 = (float)(v12 * v19[7]) + (float)(v23 * v13);
          *(float *)(a3 + 12) = v24;
          v25 = (float)(v14 * v19[7]) + (float)(v23 * v15);
          *(float *)(a3 + 8) = v25;
          v26 = v19[9];
          v27 = v17-- + 1;
          v28 = v18 + (float)((float)(v15 * v19[8]) + (float)(v26 * v14));
          *(float *)(a3 + 16) = v28;
          v29 = v19[8];
          v31 = v21;
          v34 = v24;
          v32 = v22;
          v33 = v25;
          v35 = v28;
          v10 = v28;
          v30 = v11 + (float)((float)(v13 * v29) + (float)(v26 * v12));
          *(float *)(a3 + 20) = v30;
          v36 = v30;
          v11 = v30;
          v12 = v24;
          v14 = v25;
          v15 = v21;
          v13 = v22;
        }
        while ( v27 > 1 );
      }
      Matrix2x3::~Matrix2x3((DataLoaderShader *)&v31);
    }

    void __fastcall Stage::createParentList(__int64 a1, __int64 a2, int *a3, __int64 a4)
    {
      __int64 v7; // x22
      __int64 v9; // x23
      int v10; // w8
      int v11; // w8
      bool v12; // zf
    
      **(_QWORD **)(a1 + 256) = a2;
      v7 = *(_QWORD *)(a2 + 48);
      if ( v7 == a4 || v7 == 0 )
      {
        v11 = 1;
      }
      else
      {
        v9 = 1;
        do
        {
          v10 = *(_DWORD *)(a1 + 248);
          if ( (_DWORD)v9 == v10 )
            Stage::increaseLocalToGlobalCapacity(a1, 5 * v10 / 4);
          v11 = v9 + 1;
          *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * v9) = v7;
          v7 = *(_QWORD *)(v7 + 48);
          v12 = v7 == a4 || v7 == 0;
          ++v9;
        }
        while ( !v12 );
      }
      *a3 = v11;
    }

    void __fastcall Stage::localToGlobal(Stage *a1, const DisplayObject *a2, float *a3, float *a4, float a5, float a6)
    {
      float v12[6]; // [xsp+8h] [xbp-68h] BYREF
    
      do
      {
        if ( !a2
          && (unsigned int)Assert::report(
                             (__int64)"pDisplayObject != NULL",
                             0,
                             (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp",
                             1102) )
        {
          goto LABEL_11;
        }
      }
      while ( Assert::g_false );
      if ( a3 == a4
        && (unsigned int)Assert::report(
                           (__int64)"pResultX != pResultY",
                           0,
                           (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp",
                           1103)
        || !a3
        && (unsigned int)Assert::report(
                           (__int64)"pResultX != NULL",
                           0,
                           (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp",
                           1104)
        || !a4
        && (unsigned int)Assert::report(
                           (__int64)"pResultY != NULL",
                           0,
                           (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp",
                           1105) )
      {
    LABEL_11:
        abort();
      }
      Stage::calculateMatrixHierarchy(a1, a2, (__int64)v12);
      *a3 = floorf(v12[4] + (float)((float)(v12[0] * a5) + (float)(v12[2] * a6)));
      *a4 = floorf(v12[5] + (float)((float)(v12[1] * a5) + (float)(v12[3] * a6)));
      Matrix2x3::~Matrix2x3((DataLoaderShader *)v12);
    }

    void __fastcall Stage::globalToLocal(Stage *a1, const DisplayObject *a2, float *a3, float *a4, float a5, float a6)
    {
      double v12; // d0
      double v13; // d1
      double v14; // d2
      float v15[6]; // [xsp+8h] [xbp-68h] BYREF
    
      do
      {
        if ( !a2
          && (unsigned int)Assert::report(
                             (__int64)"pDisplayObject != NULL",
                             0,
                             (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp",
                             1118) )
        {
          goto LABEL_11;
        }
      }
      while ( Assert::g_false );
      if ( a3 == a4
        && (unsigned int)Assert::report(
                           (__int64)"pResultX != pResultY",
                           0,
                           (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp",
                           1119)
        || !a3
        && (unsigned int)Assert::report(
                           (__int64)"pResultX != NULL",
                           0,
                           (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp",
                           1120)
        || !a4
        && (unsigned int)Assert::report(
                           (__int64)"pResultY != NULL",
                           0,
                           (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp",
                           1121) )
      {
    LABEL_11:
        abort();
      }
      Stage::calculateMatrixHierarchy(a1, a2, (__int64)v15);
      Matrix2x3::inverse((DataLoaderShader *)v15, v12, v13, v14);
      *a3 = v15[4] + (float)((float)(v15[0] * a5) + (float)(v15[2] * a6));
      *a4 = v15[5] + (float)((float)(v15[1] * a5) + (float)(v15[3] * a6));
      Matrix2x3::~Matrix2x3((DataLoaderShader *)v15);
    }

    __int64 __fastcall Stage::getObjectsUnderPoint(__int64 a1, float a2, float a3)
    {
      __int64 v4; // x19
      _BYTE v6[24]; // [xsp+8h] [xbp-28h] BYREF
    
      *(_BYTE *)(a1 + 332) = 1;
      *(float *)(a1 + 92) = a2;
      *(float *)(a1 + 96) = a3;
      v4 = a1 + 8;
      std::vector<Sprite *>::resize(a1 + 8, 0, 0);
      Matrix2x3::Matrix2x3((Matrix2x3 *)v6);
      (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 176) + 24LL))(*(_QWORD *)(a1 + 176), v6);
      *(_DWORD *)(a1 + 92) = 0;
      *(_DWORD *)(a1 + 96) = 0;
      *(_BYTE *)(a1 + 332) = 0;
      Matrix2x3::~Matrix2x3((DataLoaderShader *)v6);
      return v4;
    }

    __int64 __fastcall Stage::touchPressed(__int64 a1, _DWORD *a2)
    {
      __int64 v4; // x4
      __int64 v5; // x5
      __int64 v6; // x6
      __int64 v7; // x7
      int32x2_t v8; // d0
      int8x16_t v9; // q1
      __int64 v10; // x8
      __int64 v11; // x24
      __int64 v12; // x9
      ServerHelloMessage *v13; // x21
      __int64 result; // x0
      char v15; // [xsp+0h] [xbp-A0h]
      ServerHelloMessage *v16; // [xsp+8h] [xbp-98h] BYREF
      float __dst[20]; // [xsp+10h] [xbp-90h] BYREF
    
      memcpy(__dst, a2, sizeof(__dst));
      v8.i32[0] = *(_DWORD *)(a1 + 292);
      __dst[17] = __dst[17] / *(float *)v8.i32;
      v9 = (int8x16_t)vdivq_f32(*(float32x4_t *)&__dst[13], (float32x4_t)vdupq_lane_s32(v8, 0));
      *(_QWORD *)&__dst[13] = v9.i64[0];
      *(_QWORD *)&__dst[15] = vextq_s8(v9, v9, 8u).u64[0];
      __dst[18] = __dst[18] / *(float *)v8.i32;
      LODWORD(v10) = *(_DWORD *)(a1 + 288);
      if ( (int)v10 >= 1 )
      {
        v11 = 0;
        while ( 1 )
        {
          if ( **(_DWORD **)(*(_QWORD *)(a1 + 264) + 8 * v11) == a2[19]
            && (unsigned int)Assert::reportFormatted(
                               (__int64)"m_vecTouchContainers[i]->m_touchID != t.id",
                               (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/Stage.cpp",
                               1218,
                               "Stage::touchPressed called twice with same ID without release or cancel",
                               v4,
                               v5,
                               v6,
                               v7,
                               v15) )
          {
            abort();
          }
          if ( !Assert::g_false )
          {
            ++v11;
            v10 = *(int *)(a1 + 288);
            if ( v11 >= v10 )
              break;
          }
        }
      }
      v12 = *(_QWORD *)(a1 + 264);
      if ( (unsigned int)((unsigned __int64)(*(_QWORD *)(a1 + 272) - v12) >> 3) == (_DWORD)v10 )
      {
        v13 = (ServerHelloMessage *)operator new(88);
        TouchContainer::TouchContainer(v13);
        v16 = v13;
        std::vector<TouchContainer *>::push_back(a1 + 264, &v16);
        LODWORD(v10) = *(_DWORD *)(a1 + 288);
        v12 = *(_QWORD *)(a1 + 264);
      }
      **(_DWORD **)(v12 + 8LL * (int)v10) = a2[19];
      result = TouchContainer::touchPressed();
      ++*(_DWORD *)(a1 + 288);
      return result;
    }

    int *__fastcall Stage::touchCancelled(int *result, int a2)
    {
      int *v2; // x19
      __int64 v3; // x8
      __int64 v4; // x20
      __int64 v5; // x9
      __int64 v6; // x8
      __int64 v7; // x10
      _QWORD *v8; // x9
      __int64 v9; // x11
    
      v2 = result;
      v3 = result[72];
      if ( (int)v3 >= 1 )
      {
        v4 = 0;
        while ( 1 )
        {
          result = *(int **)(*((_QWORD *)v2 + 33) + 8 * v4);
          if ( *result == a2 )
            break;
          if ( ++v4 >= v3 )
            return result;
        }
        result = (int *)TouchContainer::touchCancelled((TouchContainer *)result);
        v5 = *((_QWORD *)v2 + 33);
        v6 = *(_QWORD *)(v5 + 8 * v4);
        --v2[72];
        v7 = (*((_QWORD *)v2 + 34) - v5) >> 3;
        if ( (int)v4 < (int)v7 - 1 )
        {
          do
          {
            v8 = (_QWORD *)(v5 + 8 * v4++);
            *v8 = v8[1];
            v5 = *((_QWORD *)v2 + 33);
            v9 = *((_QWORD *)v2 + 34) - v5;
          }
          while ( v4 < ((v9 << 29) - 0x100000000LL) >> 32 );
          v7 = v9 >> 3;
        }
        *(_QWORD *)(v5 + 8 * v7 - 8) = v6;
      }
      return result;
    }

    __int64 __fastcall Stage::touchMoved(__int64 a1, _DWORD *a2)
    {
      int32x2_t v4; // d0
      int8x16_t v5; // q1
      __int64 v6; // x8
      __int64 v7; // x9
      float v9[20]; // [xsp+0h] [xbp-60h] BYREF
    
      memcpy(v9, a2, sizeof(v9));
      v4.i32[0] = *(_DWORD *)(a1 + 292);
      v9[17] = v9[17] / *(float *)v4.i32;
      v5 = (int8x16_t)vdivq_f32(*(float32x4_t *)&v9[13], (float32x4_t)vdupq_lane_s32(v4, 0));
      *(_QWORD *)&v9[13] = v5.i64[0];
      *(_QWORD *)&v9[15] = vextq_s8(v5, v5, 8u).u64[0];
      v9[18] = v9[18] / *(float *)v4.i32;
      v6 = *(int *)(a1 + 288);
      if ( (int)v6 < 1 )
        return 0;
      v7 = 0;
      while ( **(_DWORD **)(*(_QWORD *)(a1 + 264) + 8 * v7) != a2[19] )
      {
        if ( ++v7 >= v6 )
          return 0;
      }
      return TouchContainer::touchMoved();
    }

    __int64 __fastcall Stage::touchReleased(__int64 a1, _DWORD *a2)
    {
      int32x2_t v4; // d0
      int8x16_t v5; // q1
      __int64 v6; // x8
      __int64 v7; // x21
      __int64 result; // x0
      __int64 v9; // x9
      __int64 v10; // x8
      __int64 v11; // x10
      _QWORD *v12; // x9
      __int64 v13; // x11
      float v14[20]; // [xsp+0h] [xbp-70h] BYREF
    
      memcpy(v14, a2, sizeof(v14));
      v4.i32[0] = *(_DWORD *)(a1 + 292);
      v14[17] = v14[17] / *(float *)v4.i32;
      v5 = (int8x16_t)vdivq_f32(*(float32x4_t *)&v14[13], (float32x4_t)vdupq_lane_s32(v4, 0));
      *(_QWORD *)&v14[13] = v5.i64[0];
      *(_QWORD *)&v14[15] = vextq_s8(v5, v5, 8u).u64[0];
      v14[18] = v14[18] / *(float *)v4.i32;
      v6 = *(int *)(a1 + 288);
      if ( (int)v6 < 1 )
        return 0;
      v7 = 0;
      while ( **(_DWORD **)(*(_QWORD *)(a1 + 264) + 8 * v7) != a2[19] )
      {
        if ( ++v7 >= v6 )
          return 0;
      }
      result = TouchContainer::touchReleased();
      v9 = *(_QWORD *)(a1 + 264);
      v10 = *(_QWORD *)(v9 + 8 * v7);
      --*(_DWORD *)(a1 + 288);
      v11 = (*(_QWORD *)(a1 + 272) - v9) >> 3;
      if ( (int)v7 < (int)v11 - 1 )
      {
        do
        {
          v12 = (_QWORD *)(v9 + 8 * v7++);
          *v12 = v12[1];
          v9 = *(_QWORD *)(a1 + 264);
          v13 = *(_QWORD *)(a1 + 272) - v9;
        }
        while ( v7 < ((v13 << 29) - 0x100000000LL) >> 32 );
        v11 = v13 >> 3;
      }
      *(_QWORD *)(v9 + 8 * v11 - 8) = v10;
      return result;
    }

    void __fastcall Stage::calculateDisplayObjectBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
    {
      __int64 v8; // x8
      __int64 v9; // x8
      __int64 v10; // x9
      __int64 v11; // kr00_8
      float v12; // s3
      float v13; // s4
      float v14; // s0
      float v15; // s1
      float *v16; // x10
      float v17; // s7
      float v18; // s16
      float v19; // s19
      float v20; // s4
      bool v21; // cc
      int8x16_t v22; // q0
      float v23; // s8
      float v24; // s0
      __int64 v25; // x8
      __int64 v26; // x9
      __int64 v27; // x9
      int8x16_t v28; // [xsp+0h] [xbp-90h] BYREF
      int v29; // [xsp+10h] [xbp-80h]
      int v30; // [xsp+14h] [xbp-7Ch]
      int v31; // [xsp+24h] [xbp-6Ch] BYREF
      __int128 v32; // [xsp+28h] [xbp-68h] BYREF
      __int64 v33; // [xsp+38h] [xbp-58h]
      __int128 v34; // [xsp+40h] [xbp-50h] BYREF
      float v35; // [xsp+50h] [xbp-40h]
      float v36; // [xsp+54h] [xbp-3Ch]
      __int64 v37; // [xsp+58h] [xbp-38h] BYREF
    
      v37 = a4;
      std::vector<Rect *>::push_back(a1 + 344, &v37);
      *(_BYTE *)(a1 + 332) = 1;
      *(_QWORD *)(a1 + 320) = a4;
      Matrix2x3::Matrix2x3((Matrix2x3 *)&v34);
      Matrix2x3::Matrix2x3((Matrix2x3 *)&v32);
      v8 = *(_QWORD *)(a1 + 176);
      v34 = *(_OWORD *)(v8 + 16);
      v35 = *(float *)(v8 + 32);
      v36 = *(float *)(v8 + 36);
      v31 = 0;
      if ( a3 )
      {
        Stage::createParentList(a1, a2, &v31, a3);
        if ( v31 - 1 >= 2 )
        {
          v9 = *(_QWORD *)(a1 + 256);
          v10 = v31 - 2;
          v11 = v34;
          v12 = *((float *)&v34 + 3);
          v13 = *((float *)&v34 + 2);
          v14 = v35;
          v15 = v36;
          do
          {
            v16 = *(float **)(v9 + 8 * v10);
            v17 = v16[5];
            *(float *)&v32 = (float)(v16[4] * *(float *)&v11) + (float)(v17 * v13);
            *((float *)&v32 + 1) = (float)(v16[4] * *((float *)&v11 + 1)) + (float)(v17 * v12);
            v18 = v16[6];
            *((float *)&v32 + 3) = (float)(v12 * v16[7]) + (float)(v18 * *((float *)&v11 + 1));
            *((float *)&v32 + 2) = (float)(v13 * v16[7]) + (float)(v18 * *(float *)&v11);
            v19 = v16[9];
            v14 = v14 + (float)((float)(*(float *)&v11 * v16[8]) + (float)(v19 * v13));
            *(float *)&v33 = v14;
            v20 = v16[8];
            v34 = v32;
            v35 = v14;
            v15 = v15 + (float)((float)(*((float *)&v11 + 1) * v20) + (float)(v19 * v12));
            *((float *)&v33 + 1) = v15;
            v36 = v15;
            v12 = *((float *)&v32 + 3);
            v13 = *((float *)&v32 + 2);
            v21 = v10-- <= 1;
            v11 = v32;
          }
          while ( !v21 );
        }
      }
      else
      {
        *(_QWORD *)&v32 = 1065353216;
        *((_QWORD *)&v32 + 1) = 0x3F80000000000000LL;
        v33 = 0;
      }
      *(_DWORD *)a4 = 1203982336;
      *(_DWORD *)(a4 + 4) = 1203982336;
      *(_QWORD *)(a4 + 8) = 0xC7C35000C7C35000LL;
      Matrix2x3::Matrix2x3((Matrix2x3 *)&v28);
      if ( !a3 )
      {
        v28 = *(int8x16_t *)(a2 + 16);
        v29 = *(_DWORD *)(a2 + 32);
        v30 = *(_DWORD *)(a2 + 36);
        *(_QWORD *)(a2 + 32) = 0;
      }
      (*(void (__fastcall **)(__int64, __int128 *, __int64, _QWORD, long double))(*(_QWORD *)a2 + 16LL))(
        a2,
        &v34,
        a2 + 9,
        *(unsigned int *)(a1 + 32),
        COERCE_LONG_DOUBLE((unsigned __int128)0));
      if ( !a3 )
      {
        v22 = v28;
        *(_QWORD *)(a2 + 16) = v28.i64[0];
        *(_QWORD *)(a2 + 24) = vextq_s8(v22, v22, 8u).u64[0];
        *(_DWORD *)(a2 + 32) = v29;
        *(_DWORD *)(a2 + 36) = v30;
      }
      if ( *(float *)a4 >= 100000.0 )
      {
        v23 = DisplayObject::getX(a2);
        v24 = DisplayObject::getY(a2);
        *(float *)a4 = v23;
        *(float *)(a4 + 4) = v24;
        *(float *)(a4 + 8) = v23;
        *(float *)(a4 + 12) = v24;
      }
      v25 = *(_QWORD *)(a1 + 344);
      v26 = *(_QWORD *)(a1 + 352) - 8LL;
      *(_QWORD *)(a1 + 352) = v26;
      v27 = v26 - v25;
      if ( (v27 & 0x7FFFFFFF8LL) != 0 )
      {
        *(_QWORD *)(a1 + 320) = *(_QWORD *)(v25 + 8 * (((v27 << 29) - 0x100000000LL) >> 32));
      }
      else
      {
        *(_QWORD *)(a1 + 320) = 0;
        *(_BYTE *)(a1 + 332) = 0;
      }
      Matrix2x3::~Matrix2x3((DataLoaderShader *)&v28);
      Matrix2x3::~Matrix2x3((DataLoaderShader *)&v32);
      Matrix2x3::~Matrix2x3((DataLoaderShader *)&v34);
    }

    __int64 __fastcall Stage::bindBlendMode(__int64 a1, __int16 a2)
    {
      int v3; // w19
      __int64 v4; // x19
      int v5; // w8
      GLenum v6; // w1
    
      v3 = a2 & 0x1C0;
      if ( v3 != 256 )
      {
        if ( *(_BYTE *)(a1 + 335) )
        {
          v5 = 0;
        }
        else
        {
          glEnable(0xBE2u);
          v5 = 1;
          *(_BYTE *)(a1 + 335) = 1;
        }
        if ( *(_DWORD *)(a1 + 328) != v3 )
        {
          *(_DWORD *)(a1 + 328) = v3;
          DebugPerformanceHud::incrementValue(5, 1);
          switch ( v3 )
          {
            case 192:
              v4 = 1;
              v6 = 769;
              break;
            case 128:
              glBlendFunc(0x306u, 0x303u);
              return 1;
            case 64:
              v4 = 1;
              v6 = 1;
              break;
            default:
              v4 = 1;
              v6 = 771;
              break;
          }
          glBlendFunc(1u, v6);
          return v4;
        }
        if ( v5 )
        {
          v4 = 1;
          DebugPerformanceHud::incrementValue(5, 1);
          return v4;
        }
        return 0;
      }
      *(_DWORD *)(a1 + 328) = 256;
      if ( !*(_BYTE *)(a1 + 335) )
        return 0;
      v4 = 1;
      DebugPerformanceHud::incrementValue(5, 1);
      *(_BYTE *)(a1 + 335) = 0;
      glDisable(0xBE2u);
      return v4;
    }

    __int64 __fastcall Stage::getShader(_QWORD *a1, int a2)
    {
      char v2; // w20
      int v4; // w8
      __int64 result; // x0
      int v6; // w9
      int v7; // w8
    
      v2 = a2;
      if ( !a2 )
        return a1[16];
      if ( a2 < 8 )
        goto LABEL_12;
      v4 = a2 & 0x7FFFFFF8;
      if ( (a2 & 0xFFFFFFF8) == 8 )
        return a1[19];
      if ( v4 == 16 )
        return a1[20];
      v6 = v4 - 24;
      v7 = v4 - 17;
      if ( v6 >= 0 )
        v7 = v6;
      result = a1[(v7 >> 3) + 57];
      if ( !result )
      {
        Debugger::warning("Requested custom shader was not added to stage");
    LABEL_12:
        if ( (v2 & 7) == 7 )
        {
          return a1[18];
        }
        else if ( (v2 & 3) == 1 )
        {
          return a1[17];
        }
        else
        {
          return a1[15];
        }
      }
      return result;
    }

    bool __fastcall Stage::clipRect(float *a1, int a2, float a3, float a4, float a5, float a6)
    {
      float v7; // s4
      float v8; // s0
      float v9; // s1
      float v10; // s2
      float v11; // s3
      float v12; // s4
      float v13; // s5
      float v14; // s6
      float v15; // s7
    
      v7 = a1[73];
      v8 = v7 * a3;
      v9 = v7 * a4;
      v10 = v7 * a5;
      v11 = v7 * a6;
      v12 = a1[15];
      v13 = a1[16];
      if ( v8 < v12 )
        v8 = a1[15];
      v14 = a1[17];
      v15 = a1[18];
      if ( v8 > v14 )
        v8 = a1[17];
      if ( v9 < v13 )
        v9 = a1[16];
      if ( v9 > v15 )
        v9 = a1[18];
      if ( v10 > v14 )
        v10 = a1[17];
      if ( v10 < v12 )
        v10 = a1[15];
      if ( v11 > v15 )
        v11 = a1[18];
      if ( v11 < v13 )
        v11 = a1[16];
      Stage::setClip((__int64)a1, a2, v8, v9, v10, v11);
      return a1[17] > a1[15] && a1[18] > a1[16];
    }

    float __fastcall Stage::getPointSize(__int64 a1)
    {
      return *(float *)(a1 + 292);
    }

    bool __fastcall Stage::isCalculatingBounds(__int64 a1)
    {
      return *(_QWORD *)(a1 + 320) != 0;
    }

    void __fastcall Stage::addTriangles(__int64 a1, int a2)
    {
      int v4; // w23
      int v5; // w24
      __int64 v6; // x0
      char *v7; // x21
      const void *v8; // x22
      __int64 v9; // x8
      char *v10; // x9
      int v11; // w9
    
      v4 = *(_DWORD *)(a1 + 376);
      if ( v4 == *(_DWORD *)(a1 + 380) )
      {
        v5 = 5 * v4 / 4;
        if ( is_mul_ok(v5, 0x10u) )
          v6 = 16LL * v5;
        else
          v6 = -1;
        v7 = (char *)operator new[](v6);
        v8 = *(const void **)(a1 + 368);
        memcpy(v7, v8, 16LL * v4);
        if ( v8 )
        {
          operator delete[](v8);
          v4 = *(_DWORD *)(a1 + 376);
        }
        *(_QWORD *)(a1 + 368) = v7;
        *(_DWORD *)(a1 + 380) = v5;
      }
      else
      {
        v7 = *(char **)(a1 + 368);
      }
      v9 = *(_QWORD *)(a1 + 400);
      v10 = &v7[16 * v4];
      *(_QWORD *)v10 = v9;
      *((_DWORD *)v10 + 2) = a2;
      *(_DWORD *)(a1 + 376) = v4 + 1;
      *(_DWORD *)(v9 + 4) = v4 + 1;
      ++*(_DWORD *)(v9 + 8);
      v11 = *(_DWORD *)(a1 + 392);
      if ( *(_DWORD *)(a1 + 396) + a2 + 2 > v11 )
        Stage::increaseVertexBucketCapacity(a1, a2 + 2 + 5 * v11 / 4);
      *(_DWORD *)(a1 + 440) += a2 + 4;
    }

    void __fastcall Stage::addQuad(__int64 a1)
    {
      int v2; // w22
      int v3; // w23
      __int64 v4; // x0
      char *v5; // x20
      const void *v6; // x21
      __int64 v7; // x8
      char *v8; // x9
      int v9; // w8
    
      v2 = *(_DWORD *)(a1 + 376);
      if ( v2 == *(_DWORD *)(a1 + 380) )
      {
        v3 = 5 * v2 / 4;
        if ( is_mul_ok(v3, 0x10u) )
          v4 = 16LL * v3;
        else
          v4 = -1;
        v5 = (char *)operator new[](v4);
        v6 = *(const void **)(a1 + 368);
        memcpy(v5, v6, 16LL * v2);
        if ( v6 )
        {
          operator delete[](v6);
          v2 = *(_DWORD *)(a1 + 376);
        }
        *(_QWORD *)(a1 + 368) = v5;
        *(_DWORD *)(a1 + 380) = v3;
      }
      else
      {
        v5 = *(char **)(a1 + 368);
      }
      *(_DWORD *)(a1 + 440) += 6;
      v7 = *(_QWORD *)(a1 + 400);
      v8 = &v5[16 * v2];
      *(_QWORD *)v8 = v7;
      *((_DWORD *)v8 + 2) = 2;
      *(_DWORD *)(a1 + 376) = v2 + 1;
      *(_DWORD *)(v7 + 4) = v2 + 1;
      ++*(_DWORD *)(v7 + 8);
      v9 = *(_DWORD *)(a1 + 392);
      if ( *(_DWORD *)(a1 + 396) + 4 > v9 )
        Stage::increaseVertexBucketCapacity(a1, 5 * v9 / 4 + 4);
    }

    void __fastcall Stage::addHighlightRectangle(
            __int64 a1,
            float *a2,
            unsigned __int8 *a3,
            float a4,
            float a5,
            float a6,
            float a7,
            float a8)
    {
      float v12; // s0
      float v13; // s1
      float v14; // s15
      float v15; // s14
      float v16; // s11
      float v17; // s12
      float v18; // s13
      float v19; // s8
      float v20; // s2
      float v21; // s7
      float v22; // s16
      float v23; // s3
      float v24; // s2
      float v25; // s6
      float v26; // s3
      float v27; // s4
      float v28; // s0
      float v29; // s1
      float v30; // s1
      float v31; // s5
      float v32; // s5
      float v33; // s3
      float v34; // s2
      float v35; // s3
      float v36; // s4
      float v37; // s0
      float v38; // s1
      float v39; // s8
      float v40; // s10
      float v41; // s5
      float v42; // s9
      float v43; // s2
      float v44; // s11
      float v45; // s4
      float v46; // s1
      unsigned __int8 v47; // w21
      unsigned __int8 v48; // w25
      unsigned __int8 v49; // w26
      unsigned __int8 v50; // w23
      int v51; // w22
      unsigned __int8 v52; // w27
      unsigned __int8 v53; // w28
      __int64 v54; // x8
      __int64 v55; // x9
      unsigned int v56; // w22
      int v57; // w21
      __int64 v58; // x8
      __int64 v59; // x9
      float v60; // w25
      float v61; // w26
      __int64 v62; // x8
      __int64 v63; // x9
      float v64; // w25
      float v65; // w26
      __int64 v66; // x8
      __int64 v67; // x9
      float v68; // w10
      float v69; // w11
      __int64 v70; // x8
      __int64 v71; // x9
      float v72; // [xsp+8h] [xbp-C8h]
      float v73; // [xsp+Ch] [xbp-C4h]
      float v74; // [xsp+Ch] [xbp-C4h]
      float v75; // [xsp+10h] [xbp-C0h]
      float v76; // [xsp+10h] [xbp-C0h]
      float v77; // [xsp+14h] [xbp-BCh]
      float v78; // [xsp+14h] [xbp-BCh]
      float v80; // [xsp+18h] [xbp-B8h]
      float v81; // [xsp+1Ch] [xbp-B4h]
      float v82; // [xsp+20h] [xbp-B0h]
      bool v83; // [xsp+27h] [xbp-A9h] BYREF
      float v84; // [xsp+28h] [xbp-A8h]
      float v85; // [xsp+2Ch] [xbp-A4h]
      float v86; // [xsp+30h] [xbp-A0h]
      float v87; // [xsp+34h] [xbp-9Ch]
      float v88; // [xsp+38h] [xbp-98h]
      float v89; // [xsp+3Ch] [xbp-94h]
    
      v75 = *a2;
      v12 = *a2 * a4;
      v77 = a2[2];
      v13 = v77 * a5;
      v14 = a2[4];
      v15 = v14 + (float)(v12 + v13);
      v89 = v15;
      v16 = a2[1];
      v73 = a2[3];
      v17 = a2[5];
      v18 = v17 + (float)((float)(v16 * a4) + (float)(v73 * a5));
      v88 = v18;
      v19 = a4 + a6;
      v20 = (float)(a4 + a6) * v75;
      v21 = v14 + (float)(v20 + v13);
      v22 = v17 + (float)((float)(v19 * v16) + (float)(v73 * a5));
      v81 = v22;
      v82 = v21;
      v72 = a5 + a7;
      v23 = (float)(a5 + a7) * v77;
      v24 = v14 + (float)(v20 + v23);
      v25 = v17 + (float)((float)(v19 * v16) + (float)(v72 * v73));
      v86 = v25;
      v87 = v24;
      v26 = v14 + (float)(v12 + v23);
      v27 = v17 + (float)((float)(v16 * a4) + (float)(v72 * v73));
      v84 = v27;
      v85 = v26;
      if ( v26 >= v24 )
        v28 = v24;
      else
        v28 = v26;
      if ( v21 >= v15 )
        v29 = v15;
      else
        v29 = v21;
      if ( v28 >= v29 )
        v28 = v29;
      if ( v27 >= v25 )
        v30 = v17 + (float)((float)(v19 * v16) + (float)(v72 * v73));
      else
        v30 = v17 + (float)((float)(v16 * a4) + (float)(v72 * v73));
      if ( v22 >= v18 )
        v31 = v17 + (float)((float)(v16 * a4) + (float)(v73 * a5));
      else
        v31 = v17 + (float)((float)(v19 * v16) + (float)(v73 * a5));
      if ( v30 >= v31 )
        v30 = v31;
      if ( v15 >= v21 )
        v32 = v15;
      else
        v32 = v21;
      if ( v24 < v26 )
        v24 = v26;
      if ( v32 >= v24 )
        v24 = v32;
      if ( v18 >= v22 )
        v33 = v17 + (float)((float)(v16 * a4) + (float)(v73 * a5));
      else
        v33 = v17 + (float)((float)(v19 * v16) + (float)(v73 * a5));
      if ( v25 >= v27 )
        v27 = v17 + (float)((float)(v19 * v16) + (float)(v72 * v73));
      if ( v33 < v27 )
        v33 = v27;
      if ( (unsigned int)Stage::shapeStart(
                           (MappedFile *)a1,
                           v28,
                           v30,
                           v24,
                           v33,
                           (AvatarRankingEntry *)(a1 + 184),
                           0x81u,
                           &v83) )
      {
        v34 = v19 - a8;
        v35 = (float)(a4 + a8) * v75;
        v36 = (float)(a5 + a8) * v77;
        v37 = (float)(a4 + a8) * v16;
        v38 = (float)(a5 + a8) * v73;
        v39 = v14 + (float)(v35 + v36);
        v40 = v17 + (float)(v37 + v38);
        v41 = v34 * v75;
        v42 = v14 + (float)((float)(v34 * v75) + v36);
        v43 = v34 * v16;
        v44 = v17 + (float)(v43 + v38);
        v45 = (float)(v72 - a8) * v77;
        v46 = (float)(v72 - a8) * v73;
        v74 = v17 + (float)(v43 + v46);
        v76 = v14 + (float)(v41 + v45);
        v78 = v17 + (float)(v37 + v46);
        v80 = v14 + (float)(v35 + v45);
        v47 = *a3;
        v48 = a3[1];
        v49 = a3[2];
        v50 = a3[3];
        v51 = a3[4];
        v52 = a3[5];
        v53 = a3[6];
        Stage::addQuad(a1);
        v54 = *(int *)(a1 + 396);
        v55 = *(_QWORD *)(a1 + 384) + 20 * v54;
        *(float *)v55 = v15;
        *(float *)(v55 + 4) = v18;
        v56 = v51 & 0xFF0000FF | (unsigned __int16)(v52 << 8) | (v53 << 16);
        v57 = v47 | (v50 << 24) | (unsigned __int16)(v48 << 8) | (v49 << 16);
        *(_DWORD *)(v55 + 8) = 429457408;
        *(_DWORD *)(v55 + 12) = v57;
        *(_DWORD *)(v55 + 16) = v56;
        *(float *)(v55 + 20) = v82;
        *(float *)(v55 + 24) = v81;
        *(_DWORD *)(v55 + 28) = 429457408;
        *(_DWORD *)(v55 + 32) = v57;
        *(_DWORD *)(v55 + 36) = v56;
        *(float *)(v55 + 40) = v39;
        *(float *)(v55 + 44) = v40;
        *(_DWORD *)(v55 + 48) = 2147477093;
        *(_DWORD *)(v55 + 52) = v57;
        *(_DWORD *)(v55 + 56) = v56;
        *(_DWORD *)(a1 + 396) = v54 + 4;
        *(float *)(v55 + 60) = v42;
        *(float *)(v55 + 64) = v44;
        *(_DWORD *)(v55 + 68) = 2147477093;
        *(_DWORD *)(v55 + 72) = v57;
        *(_DWORD *)(v55 + 76) = v56;
        Stage::addQuad(a1);
        v58 = *(int *)(a1 + 396);
        v59 = *(_QWORD *)(a1 + 384) + 20 * v58;
        *(_DWORD *)(v59 + 16) = v56;
        *(float *)v59 = v82;
        *(float *)(v59 + 4) = v81;
        *(_DWORD *)(v59 + 8) = 429457408;
        *(_DWORD *)(v59 + 12) = v57;
        v61 = v86;
        v60 = v87;
        *(_DWORD *)(v59 + 28) = 429457408;
        *(_DWORD *)(v59 + 32) = v57;
        *(_DWORD *)(v59 + 36) = v56;
        *(float *)(v59 + 40) = v42;
        *(float *)(v59 + 44) = v44;
        *(_DWORD *)(v59 + 48) = 2147477093;
        *(_DWORD *)(v59 + 52) = v57;
        *(_DWORD *)(v59 + 56) = v56;
        *(float *)(v59 + 20) = v60;
        *(float *)(v59 + 24) = v61;
        *(_DWORD *)(a1 + 396) = v58 + 4;
        *(float *)(v59 + 60) = v76;
        *(float *)(v59 + 64) = v74;
        *(_DWORD *)(v59 + 68) = 2147477093;
        *(_DWORD *)(v59 + 72) = v57;
        *(_DWORD *)(v59 + 76) = v56;
        Stage::addQuad(a1);
        v62 = *(int *)(a1 + 396);
        v63 = *(_QWORD *)(a1 + 384) + 20 * v62;
        *(_DWORD *)(v63 + 16) = v56;
        *(float *)v63 = v60;
        *(float *)(v63 + 4) = v61;
        *(_DWORD *)(v63 + 8) = 429457408;
        *(_DWORD *)(v63 + 12) = v57;
        v65 = v84;
        v64 = v85;
        *(_DWORD *)(v63 + 28) = 429457408;
        *(_DWORD *)(v63 + 32) = v57;
        *(_DWORD *)(v63 + 36) = v56;
        *(float *)(v63 + 40) = v76;
        *(float *)(v63 + 44) = v74;
        *(_DWORD *)(v63 + 48) = 2147477093;
        *(_DWORD *)(v63 + 52) = v57;
        *(_DWORD *)(v63 + 56) = v56;
        *(float *)(v63 + 20) = v64;
        *(float *)(v63 + 24) = v65;
        *(_DWORD *)(a1 + 396) = v62 + 4;
        *(float *)(v63 + 60) = v80;
        *(float *)(v63 + 64) = v78;
        *(_DWORD *)(v63 + 68) = 2147477093;
        *(_DWORD *)(v63 + 72) = v57;
        *(_DWORD *)(v63 + 76) = v56;
        Stage::addQuad(a1);
        v66 = *(int *)(a1 + 396);
        v67 = *(_QWORD *)(a1 + 384) + 20 * v66;
        *(_DWORD *)(v67 + 16) = v56;
        *(float *)v67 = v64;
        *(float *)(v67 + 4) = v65;
        *(_DWORD *)(v67 + 8) = 429457408;
        *(_DWORD *)(v67 + 12) = v57;
        v69 = v88;
        v68 = v89;
        *(_DWORD *)(v67 + 28) = 429457408;
        *(_DWORD *)(v67 + 32) = v57;
        *(_DWORD *)(v67 + 36) = v56;
        *(float *)(v67 + 40) = v80;
        *(float *)(v67 + 44) = v78;
        *(_DWORD *)(v67 + 48) = 2147477093;
        *(_DWORD *)(v67 + 52) = v57;
        *(_DWORD *)(v67 + 56) = v56;
        *(float *)(v67 + 20) = v68;
        *(float *)(v67 + 24) = v69;
        *(_DWORD *)(a1 + 396) = v66 + 4;
        *(float *)(v67 + 60) = v39;
        *(float *)(v67 + 64) = v40;
        *(_DWORD *)(v67 + 68) = 2147477093;
        *(_DWORD *)(v67 + 72) = v57;
        *(_DWORD *)(v67 + 76) = v56;
        Stage::addQuad(a1);
        v70 = *(int *)(a1 + 396);
        v71 = *(_QWORD *)(a1 + 384) + 20 * v70;
        *(float *)v71 = v39;
        *(float *)(v71 + 4) = v40;
        *(_DWORD *)(v71 + 8) = 2147477093;
        *(_DWORD *)(v71 + 12) = v57;
        *(_DWORD *)(v71 + 16) = v56;
        *(float *)(v71 + 20) = v42;
        *(float *)(v71 + 24) = v44;
        *(_DWORD *)(v71 + 28) = 2147477093;
        *(_DWORD *)(v71 + 32) = v57;
        *(_DWORD *)(v71 + 36) = v56;
        *(float *)(v71 + 40) = v80;
        *(float *)(v71 + 44) = v78;
        *(_DWORD *)(v71 + 48) = 2147477093;
        *(_DWORD *)(v71 + 52) = v57;
        *(_DWORD *)(v71 + 56) = v56;
        *(_DWORD *)(a1 + 396) = v70 + 4;
        *(float *)(v71 + 60) = v76;
        *(float *)(v71 + 64) = v74;
        *(_DWORD *)(v71 + 68) = 2147477093;
        *(_DWORD *)(v71 + 72) = v57;
        *(_DWORD *)(v71 + 76) = v56;
      }
    }

    __int64 __fastcall Stage::getGradientTexture(__int64 a1)
    {
      return a1 + 184;
    }

    __int64 __fastcall Stage::isInitialized(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 339);
    }

    __int64 __fastcall Stage::isInStage(__int64 a1, __int64 a2)
    {
      while ( a2 != *(_QWORD *)(a1 + 176) )
      {
        a2 = *(_QWORD *)(a2 + 48);
        if ( !a2 )
          return 0;
      }
      return 1;
    }

    void __fastcall Stage::validateBuckets(__int64 a1, __int64 a2)
    {
      __int64 v4; // x23
      __int64 v5; // x24
      __int64 Texture; // x0
      AvatarRankingEntry *v7; // x22
    
      if ( *(int *)(a1 + 232) >= 1 )
      {
        v4 = 0;
        v5 = 0;
        do
        {
          Texture = StageDrawBucket::getTexture(*(_QWORD *)(a1 + 240) + v4);
          v7 = (AvatarRankingEntry *)Texture;
          if ( Texture )
          {
            Debugger::doAssert(Texture != a2, "");
            GLImage::validate(v7);
          }
          ++v5;
          v4 += 440;
        }
        while ( v5 < *(int *)(a1 + 232) );
      }
    }

    void *__fastcall Stage::initializeMembers(__int64 a1)
    {
      void *result; // x0
    
      *(_QWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 160) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 496) = 0;
      *(_QWORD *)(a1 + 368) = 0;
      *(_QWORD *)(a1 + 376) = 0;
      result = memset((void *)(a1 + 512), 0, 0xCCu);
      *(_QWORD *)(a1 + 480) = 0;
      *(_QWORD *)(a1 + 488) = 0;
      *(_QWORD *)(a1 + 464) = 0;
      *(_QWORD *)(a1 + 472) = 0;
      *(_QWORD *)(a1 + 456) = 0;
      *(_DWORD *)(a1 + 444) = 0;
      *(_DWORD *)(a1 + 448) = 0;
      *(_QWORD *)(a1 + 504) = -1;
      *(_DWORD *)(a1 + 408) = 0;
      *(_QWORD *)(a1 + 400) = 0;
      *(_BYTE *)(a1 + 41) = 0;
      *(_DWORD *)(a1 + 37) = 0;
      *(_DWORD *)(a1 + 336) = 0;
      *(_QWORD *)(a1 + 424) = 0;
      *(_QWORD *)(a1 + 432) = 0;
      *(_QWORD *)(a1 + 416) = 0;
      *(_QWORD *)(a1 + 272) = *(_QWORD *)(a1 + 264);
      *(_QWORD *)(a1 + 384) = 0;
      *(_QWORD *)(a1 + 392) = 0;
      *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 344);
      *(_DWORD *)(a1 + 328) = -1;
      *(_DWORD *)(a1 + 292) = 1065353216;
      *(_BYTE *)(a1 + 335) = 0;
      *(_DWORD *)(a1 + 112) = 0;
      *(_DWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 84) = 0;
      *(_QWORD *)(a1 + 76) = 0;
      *(_QWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_QWORD *)(a1 + 296) = 0;
      *(_QWORD *)(a1 + 304) = 0;
      *(_DWORD *)(a1 + 312) = -8355712;
      *(_DWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 256) = 0;
      *(_BYTE *)(a1 + 333) = 0;
      *(_BYTE *)(a1 + 334) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      *(_DWORD *)(a1 + 92) = 0;
      *(_DWORD *)(a1 + 96) = 0;
      *(_BYTE *)(a1 + 332) = 0;
      *(_QWORD *)(a1 + 320) = 0;
      *(_DWORD *)(a1 + 288) = 0;
      *(_BYTE *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 440) = 0;
      *(_QWORD *)(a1 + 68) = 0;
      *(_QWORD *)(a1 + 60) = 0;
      *(_QWORD *)(a1 + 52) = 0;
      *(_QWORD *)(a1 + 44) = 0;
      *(_QWORD *)(a1 + 168) = 0;
      *(_QWORD *)(a1 + 176) = 0;
      return result;
    }

}; // end class Stage
