class OutlineRenderer
{
public:

    __int64 __fastcall OutlineRenderer::OutlineRenderer(__int64 a1, __int64 a2)
    {
      Screen *v4; // x0
      Screen *Width; // x0
      Stage *Height; // x0
      #1265 *Instance; // x0
      __int64 v8; // x0
      __int64 v9; // x25
      int v10; // w23
      int v11; // w24
      GLuint *v12; // x1
      int v13; // w9
      int v14; // w10
      int v15; // w8
      char v16; // w10
      int v17; // w9
      int v18; // w12
      int v19; // w11
      __int64 v20; // x8
      Stage *Ibo; // x0
      int v22; // w8
      bool v23; // zf
      #1265 *v24; // x0
      GLuint *v25; // x22
      #1265 *v26; // x0
      #1206 *v27; // x22
      #1206 *v28; // x22
      __int64 v29; // x0
      Stage *isInitialized; // x0
      Stage *v31; // x0
      int v33; // [xsp+10h] [xbp-D0h]
      int v34; // [xsp+14h] [xbp-CCh]
      _BYTE __dst[80]; // [xsp+18h] [xbp-C8h] BYREF
      unsigned __int16 v36[4]; // [xsp+68h] [xbp-78h] BYREF
      int v37; // [xsp+70h] [xbp-70h]
    
      Sprite::Sprite((Sprite *)a1, 100);
      *(_QWORD *)a1 = off_100469168;
      *(_QWORD *)(a1 + 92) = 0;
      *(_DWORD *)(a1 + 100) = 0;
      *(_QWORD *)(a1 + 104) = a2;
      glGetIntegerv(0x8CA6u, (GLint *)(a1 + 92));
      Width = (Screen *)Screen::getWidth(v4);
      v34 = (int)Width;
      Height = (Stage *)Screen::getHeight(Width);
      v33 = (int)Height;
      if ( !OutlineRenderer::sm_pTargets )
      {
        Instance = (#1265 *)Stage::getInstance(Height);
        Stage::unbindRender(Instance);
        OutlineRenderer::sm_targetCount = 1;
        v8 = operator new[](16);
        v9 = 0;
        OutlineRenderer::sm_pTargets = v8;
        v10 = v33 >> 2;
        v11 = v34 >> 2;
        while ( 1 )
        {
          v12 = (GLuint *)(v8 + 16 * v9);
          v12[2] = v11;
          v12[3] = v10;
          glGenTextures(1, v12);
          glBindTexture(0xDE1u, *(_DWORD *)(OutlineRenderer::sm_pTargets + 16 * v9));
          glTexParameterf(0xDE1u, 0x2801u, 9729.0);
          glTexParameterf(0xDE1u, 0x2800u, 9729.0);
          glTexParameterf(0xDE1u, 0x2802u, 33071.0);
          glTexParameterf(0xDE1u, 0x2803u, 33071.0);
          if ( (unsigned int)GLImage::doGlTexImage2D((GLImage *)0xDE1, 0, 6408, v11, v10, 0, 6408, 32819, 0) )
          {
            glGenFramebuffers(1, (GLuint *)(OutlineRenderer::sm_pTargets + 16 * v9 + 4));
            glBindFramebuffer(0x8D40u, *(_DWORD *)(OutlineRenderer::sm_pTargets + 16 * v9 + 4));
            glFramebufferTexture2D(0x8D40u, 0x8CE0u, 0xDE1u, *(_DWORD *)(OutlineRenderer::sm_pTargets + 16 * v9), 0);
            OutlineRenderer::sm_blurUsed = glCheckFramebufferStatus(0x8D40u) == 36053;
          }
          v13 = v11 >> 1;
          v14 = 1;
          do
          {
            v15 = v14;
            v14 *= 2;
          }
          while ( v15 < v13 );
          v16 = v15 > v13;
          v17 = v10 >> 1;
          v18 = 1;
          do
          {
            v19 = v18;
            v18 *= 2;
          }
          while ( v19 < v17 );
          if ( !OutlineRenderer::sm_blurUsed )
            break;
          if ( ++v9 >= OutlineRenderer::sm_targetCount )
          {
            v20 = OutlineRenderer::sm_pTargets + 16LL * OutlineRenderer::sm_targetCount;
            dword_1004F6C5C = *(_DWORD *)(v20 - 8);
            dword_1004F6C60 = *(_DWORD *)(v20 - 4);
            glGenTextures(1, (GLuint *)&OutlineRenderer::sm_tmpBlurTarget);
            glBindTexture(0xDE1u, OutlineRenderer::sm_tmpBlurTarget);
            glTexParameterf(0xDE1u, 0x2801u, 9729.0);
            glTexParameterf(0xDE1u, 0x2800u, 9729.0);
            glTexParameterf(0xDE1u, 0x2802u, 33071.0);
            glTexParameterf(0xDE1u, 0x2803u, 33071.0);
            if ( (unsigned int)GLImage::doGlTexImage2D(
                                 (GLImage *)0xDE1,
                                 0,
                                 6408,
                                 dword_1004F6C5C,
                                 dword_1004F6C60,
                                 0,
                                 6408,
                                 32819,
                                 0) )
            {
              glGenFramebuffers(1, (GLuint *)&dword_1004F6C58);
              glBindFramebuffer(0x8D40u, dword_1004F6C58);
              glFramebufferTexture2D(0x8D40u, 0x8CE0u, 0xDE1u, OutlineRenderer::sm_tmpBlurTarget, 0);
              OutlineRenderer::sm_blurUsed = glCheckFramebufferStatus(0x8D40u) == 36053;
            }
            break;
          }
          v11 = v15 >> v16;
          v10 = v19 >> (v19 > v17);
          v8 = OutlineRenderer::sm_pTargets;
        }
      }
      glBindFramebuffer(0x8D40u, *(_DWORD *)(a1 + 92));
      v22 = (unsigned __int8)OutlineRenderer::sm_blurUsed;
      if ( OutlineRenderer::sm_pUnitQuad )
        v23 = 1;
      else
        v23 = OutlineRenderer::sm_blurUsed == 0;
      if ( !v23 )
      {
        v24 = (#1265 *)Stage::getInstance(Ibo);
        Stage::unbindRender(v24);
        v37 = 131075;
        *(_QWORD *)v36 = 0x1000200010000LL;
        memcpy(__dst, &unk_1003E5280, sizeof(__dst));
        v25 = (GLuint *)operator new(40);
        VertexBuffer::VertexBuffer(v25, __dst, 20, &VertexPosUv::attributeInfo, 2);
        OutlineRenderer::sm_pUnitQuad = (__int64)v25;
        Ibo = (Stage *)VertexBuffer::createIbo(v25, v36, 6u);
        *(_DWORD *)(OutlineRenderer::sm_pUnitQuad + 36) = 0;
        v22 = (unsigned __int8)OutlineRenderer::sm_blurUsed;
      }
      if ( !OutlineRenderer::sm_pBlitShader && v22 )
      {
        v26 = (#1265 *)Stage::getInstance(Ibo);
        Stage::unbindRender(v26);
        v27 = (#1206 *)operator new(40);
        Shader::Shader(v27);
        OutlineRenderer::sm_pBlitShader = (__int64)v27;
        Shader::load(
          v27,
          "#ifdef GL_ES\n"
          "#define pr highp\n"
          "#else\n"
          "#define pr\n"
          "#define highp\n"
          "#define mediump\n"
          "#define lowp\n"
          "#endif\n"
          "uniform mediump mat4 u_mvp;\n"
          "attribute mediump vec4 a_pos;\n"
          "attribute mediump vec2 a_uv0;\n"
          "varying mediump vec2 v_uv0;\n"
          "void main()\n"
          "{\n"
          "v_uv0 = a_uv0;\n"
          "gl_Position = u_mvp * a_pos;\n"
          "}\n",
          "#ifdef GL_ES\n"
          "#define pr highp\n"
          "#else\n"
          "#define pr\n"
          "#define highp\n"
          "#define mediump\n"
          "#define lowp\n"
          "#endif\n"
          "uniform lowp vec4 u_c;\n"
          "uniform lowp sampler2D texture0;\n"
          "varying lowp vec2 v_uv0;\n"
          "void main()\n"
          "{\n"
          "gl_FragColor = texture2D(texture0, v_uv0.xy).a * u_c;\n"
          "}\n",
          "");
        v28 = (#1206 *)operator new(40);
        Shader::Shader(v28);
        OutlineRenderer::sm_pBlurShader = (__int64)v28;
        Ibo = (Stage *)Shader::load(
                         v28,
                         "#ifdef GL_ES\n"
                         "#define pr highp\n"
                         "#else\n"
                         "#define pr\n"
                         "#define highp\n"
                         "#define mediump\n"
                         "#define lowp\n"
                         "#endif\n"
                         "uniform mediump mat4 u_mvp;\n"
                         "uniform mediump vec2 u_direction;\n"
                         "attribute mediump vec4 a_pos;\n"
                         "attribute mediump vec2 a_uv0;\n"
                         "varying lowp vec4 v_uv[4];\n"
                         "void main ()\n"
                         "{\n"
                         "\tgl_Position = u_mvp * a_pos;\n"
                         "\tv_uv[0].xy = a_uv0;\n"
                         "\tv_uv[0].zw = a_uv0 + u_direction * 1.0;\n"
                         "\tv_uv[1].xy = a_uv0 + u_direction * 2.0;\n"
                         "\tv_uv[1].zw = a_uv0 + u_direction * 3.0;\n"
                         "\tv_uv[2].xy = a_uv0 - u_direction * 1.0;\n"
                         "\tv_uv[2].zw = a_uv0 - u_direction * 2.0;\n"
                         "\tv_uv[3].xy = a_uv0 - u_direction * 3.0;\n"
                         "}\n",
                         "#ifdef GL_ES\n"
                         "#define pr highp\n"
                         "#else\n"
                         "#define pr\n"
                         "#define highp\n"
                         "#define mediump\n"
                         "#define lowp\n"
                         "#endif\n"
                         "uniform lowp sampler2D texture0;\n"
                         "varying lowp vec4 v_uv[4];\n"
                         "void main()\n"
                         "{\n"
                         "\thighp vec4 color = texture2D(texture0, v_uv[0].xy) * 0.383;\n"
                         "\tcolor += texture2D(texture0, v_uv[0].zw) * 0.242;\n"
                         "\tcolor += texture2D(texture0, v_uv[1].xy) * 0.061;\n"
                         "\tcolor += texture2D(texture0, v_uv[1].zw) * 0.006;\n"
                         "\tcolor += texture2D(texture0, v_uv[2].xy) * 0.242;\n"
                         "\tcolor += texture2D(texture0, v_uv[2].zw) * 0.061;\n"
                         "\tcolor += texture2D(texture0, v_uv[3].xy) * 0.006;\n"
                         "\tgl_FragColor = color;\n"
                         "}\n",
                         "");
      }
      v29 = Stage::getInstance(Ibo);
      isInitialized = (Stage *)Stage::isInitialized(v29);
      if ( ((unsigned __int8)isInitialized & 1) == 0 )
      {
        v31 = (Stage *)Stage::getInstance(isInitialized);
        Stage::init(v31, 0, 0, v34, v33);
      }
      return a1;
    }

    // attributes: thunk
    void __fastcall OutlineRenderer::OutlineRenderer(OutlineRenderer *this, __int64 a2)
    {
      __ZN15OutlineRendererC2EPK17LogicLocationData((__int64)this, a2);
    }

    void __fastcall OutlineRenderer::~OutlineRenderer(LogicCommandManager *this)
    {
      *(_QWORD *)this = off_100469168;
      *((_DWORD *)this + 27) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      *(_QWORD *)((char *)this + 92) = 0;
      Sprite::~Sprite(this);
    }

    void __fastcall OutlineRenderer::~OutlineRenderer(__int64 a1)
    {
      *(_QWORD *)a1 = off_100469168;
      *(_DWORD *)(a1 + 108) = 0;
      *(_QWORD *)(a1 + 100) = 0;
      *(_QWORD *)(a1 + 92) = 0;
      Sprite::~Sprite((Sprite *)a1);
      operator delete((void *)a1);
    }

    __int64 __fastcall OutlineRenderer::startRender(__int64 a1)
    {
      int v1; // w4
    
      glGetIntegerv(0x8CA6u, (GLint *)(a1 + 92));
      glBindFramebuffer(0x8D40u, *(_DWORD *)(OutlineRenderer::sm_pTargets + 4));
      glClear(0x4500u);
      return Renderer::setViewport(
               0,
               0,
               *(_DWORD *)(OutlineRenderer::sm_pTargets + 8),
               *(_DWORD *)(OutlineRenderer::sm_pTargets + 12),
               v1);
    }

    __int64 __fastcall OutlineRenderer::stopRender(GLuint *a1)
    {
      pthread_attr_t *OrthographicProjection; // x0
      __int64 v3; // x20
      __int64 v4; // x21
      __int64 ClientGlobals; // x0
      signed int v6; // w25
      int *v7; // x26
      int *v8; // x23
      int v9; // w4
      int v10; // w4
      long double v11; // q1
      pthread_attr_t *v12; // x0
      __int64 v13; // x0
      Screen *v14; // x0
      Screen *Width; // x0
      int v16; // w19
      int Height; // w0
      int v18; // w4
      unsigned int *v20; // [xsp+8h] [xbp-A8h]
      float v21; // [xsp+10h] [xbp-A0h] BYREF
      float v22; // [xsp+14h] [xbp-9Ch] BYREF
      float v23; // [xsp+18h] [xbp-98h] BYREF
      float v24; // [xsp+1Ch] [xbp-94h] BYREF
      _BYTE v25[64]; // [xsp+20h] [xbp-90h] BYREF
    
      OrthographicProjection = (pthread_attr_t *)xMatrix44::createOrthographicProjection(
                                                   (xMatrix44 *)a1,
                                                   0.0,
                                                   1.0,
                                                   1.0,
                                                   0.0,
                                                   -1.0,
                                                   1.0);
      v3 = OutlineRenderer::sm_targetCount - 1LL;
      v4 = OutlineRenderer::sm_pTargets;
      ClientGlobals = LogicDataTables::getClientGlobals(OrthographicProjection);
      a1[24] = *(_DWORD *)(ClientGlobals + 348);
      a1[25] = *(_DWORD *)(LogicDataTables::getClientGlobals((pthread_attr_t *)ClientGlobals) + 344LL);
      Shader::bind((Shader *)OutlineRenderer::sm_pBlurShader);
      v20 = (unsigned int *)(v4 + 16 * v3);
      if ( (int)a1[24] >= 1 )
      {
        v6 = 0;
        v7 = (int *)(v20 + 2);
        v8 = (int *)(v20 + 3);
        do
        {
          glBindFramebuffer(0x8D40u, dword_1004F6C58);
          glClear(0x4500u);
          Renderer::setViewport(0, 0, dword_1004F6C5C, dword_1004F6C60, v9);
          Shader::setTexture((Shader *)OutlineRenderer::sm_pBlurShader, *v20, "texture0", 0);
          Shader::setUniformMatrix(OutlineRenderer::sm_pBlurShader, "u_mvp", v25, 1);
          Shader::setUniformVector2(
            OutlineRenderer::sm_pBlurShader,
            "u_direction",
            *((float *)a1 + 25) / (float)*v7,
            COERCE_LONG_DOUBLE((unsigned __int128)0));
          Renderer::render(OutlineRenderer::sm_pUnitQuad, 0, 0xFFFFFFFFLL);
          glBindFramebuffer(0x8D40u, v20[1]);
          glClear(0x4500u);
          Renderer::setViewport(0, 0, *v7, *v8, v10);
          Shader::setTexture((Shader *)OutlineRenderer::sm_pBlurShader, OutlineRenderer::sm_tmpBlurTarget, "texture0", 0);
          Shader::setUniformMatrix(OutlineRenderer::sm_pBlurShader, "u_mvp", v25, 1);
          *(float *)&v11 = *((float *)a1 + 25) / (float)*v8;
          Shader::setUniformVector2(OutlineRenderer::sm_pBlurShader, "u_direction", 0.0, v11);
          Renderer::render(OutlineRenderer::sm_pUnitQuad, 0, 0xFFFFFFFFLL);
          ++v6;
        }
        while ( v6 < (int)a1[24] );
      }
      v12 = (pthread_attr_t *)Shader::unbind(OutlineRenderer::sm_pBlurShader);
      v13 = LogicDataTables::getClientGlobals(v12);
      col32ToFloatRGBA(*(_DWORD *)(v13 + 332), &v24, &v23, &v22, &v21);
      glBindFramebuffer(0x8D40u, a1[23]);
      Width = (Screen *)Screen::getWidth(v14);
      v16 = (int)Width;
      Height = Screen::getHeight(Width);
      Renderer::setViewport(0, 0, v16, Height, v18);
      Shader::bind((Shader *)OutlineRenderer::sm_pBlitShader);
      Shader::setTexture((Shader *)OutlineRenderer::sm_pBlitShader, *v20, "texture0", 0);
      Shader::setUniformMatrix(OutlineRenderer::sm_pBlitShader, "u_mvp", v25, 1);
      Shader::setUniformVector4(OutlineRenderer::sm_pBlitShader, "u_c", v24, v23, v22, v21);
      Renderer::render(OutlineRenderer::sm_pUnitQuad, 0, 0xFFFFFFFFLL);
      return Shader::unbind(OutlineRenderer::sm_pBlitShader);
    }

    __int64 __fastcall OutlineRenderer::setLocationData(__int64 this, const ChangeAllianceMemberRoleOkMessage *a2)
    {
      *(_QWORD *)(this + 104) = a2;
      return this;
    }

    __int64 __fastcall OutlineRenderer::render(Stage *a1, __int64 a2, __int64 a3, int a4, long double a5)
    {
      Stage *Instance; // x23
      __int64 v11; // x20
      Screen *v12; // x0
      Screen *Width; // x0
      int v14; // w19
      int Height; // w0
    
      if ( !OutlineRenderer::sm_blurUsed || !*((_QWORD *)a1 + 13) )
        return 0;
      Instance = (Stage *)Stage::getInstance(a1);
      Stage::renderBuckets(Instance);
      OutlineRenderer::startRender((__int64)a1);
      v11 = Sprite::render(a1, a2, a3, a4 | 0x1C0u, a5);
      Stage::renderBuckets(Instance);
      v12 = (Screen *)OutlineRenderer::stopRender((GLuint *)a1);
      Width = (Screen *)Screen::getWidth(v12);
      v14 = (int)Width;
      Height = Screen::getHeight(Width);
      Stage::init(Instance, 0, 0, v14, Height);
      return v11;
    }

    void OutlineRenderer::destructStatics()
    {
      void *v0; // x19
      void *v1; // x19
      void *v2; // x19
      __int64 v3; // x0
      __int64 v4; // x21
      __int64 v5; // x22
      __int64 v6; // x8
    
      OutlineRenderer::sm_blurUsed = 0;
      v0 = (void *)OutlineRenderer::sm_pBlurShader;
      if ( OutlineRenderer::sm_pBlurShader )
      {
        Shader::~Shader((Shader *)OutlineRenderer::sm_pBlurShader);
        operator delete(v0);
      }
      OutlineRenderer::sm_pBlurShader = 0;
      v1 = (void *)OutlineRenderer::sm_pBlitShader;
      if ( OutlineRenderer::sm_pBlitShader )
      {
        Shader::~Shader((Shader *)OutlineRenderer::sm_pBlitShader);
        operator delete(v1);
      }
      OutlineRenderer::sm_pBlitShader = 0;
      v2 = (void *)OutlineRenderer::sm_pUnitQuad;
      if ( OutlineRenderer::sm_pUnitQuad )
      {
        VertexBuffer::~VertexBuffer((#1409 *)OutlineRenderer::sm_pUnitQuad);
        operator delete(v2);
      }
      OutlineRenderer::sm_pUnitQuad = 0;
      if ( OutlineRenderer::sm_targetCount <= 0 )
      {
        v3 = OutlineRenderer::sm_pTargets;
      }
      else
      {
        v3 = OutlineRenderer::sm_pTargets;
        v4 = OutlineRenderer::sm_targetCount + 1LL;
        v5 = 16LL * OutlineRenderer::sm_targetCount - 16;
        do
        {
          glDeleteTextures(1, (const GLuint *)(v3 + v5));
          v6 = OutlineRenderer::sm_pTargets;
          *(_DWORD *)(OutlineRenderer::sm_pTargets + v5) = 0;
          glDeleteFramebuffers(1, (const GLuint *)(v6 + v5 + 4));
          v3 = OutlineRenderer::sm_pTargets;
          *(_DWORD *)(OutlineRenderer::sm_pTargets + v5 + 4) = 0;
          --v4;
          v5 -= 16;
        }
        while ( v4 > 1 );
      }
      if ( v3 )
        operator delete[](v3);
      OutlineRenderer::sm_pTargets = 0;
      OutlineRenderer::sm_targetCount = 0;
    }

}; // end class OutlineRenderer
