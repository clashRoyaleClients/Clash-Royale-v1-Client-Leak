class BlurRenderer
{
public:

    void __fastcall BlurRenderer::BlurRenderer(BlurRenderer *this)
    {
      Screen *v2; // x0
      Screen *Width; // x0
      Stage *Height; // x0
      #1265 *Instance; // x0
      __int64 v6; // x0
      __int64 v7; // x25
      int v8; // w23
      int v9; // w24
      GLuint *v10; // x1
      int v11; // w9
      int v12; // w10
      int v13; // w8
      char v14; // w10
      int v15; // w9
      int v16; // w12
      int v17; // w11
      __int64 v18; // x8
      Stage *Ibo; // x0
      int v20; // w8
      bool v21; // zf
      #1265 *v22; // x0
      GLuint *v23; // x22
      #1265 *v24; // x0
      #1206 *v25; // x22
      #1206 *v26; // x22
      __int64 v27; // x0
      Stage *isInitialized; // x0
      Stage *v29; // x0
      const void *v30; // [xsp+8h] [xbp-D8h]
      int v31; // [xsp+10h] [xbp-D0h]
      int v32; // [xsp+14h] [xbp-CCh]
      _BYTE __dst[80]; // [xsp+18h] [xbp-C8h] BYREF
      unsigned __int16 v34[4]; // [xsp+68h] [xbp-78h] BYREF
      int v35; // [xsp+70h] [xbp-70h]
    
      Sprite::Sprite(this, 100);
      *(_QWORD *)this = off_100462880;
      *(_QWORD *)((char *)this + 92) = 0;
      *(_QWORD *)((char *)this + 97) = 0;
      glGetIntegerv(0x8CA6u, (GLint *)this + 23);
      Width = (Screen *)Screen::getWidth(v2);
      v32 = (int)Width;
      Height = (Stage *)Screen::getHeight(Width);
      v31 = (int)Height;
      if ( !BlurRenderer::sm_pTargets )
      {
        Instance = (#1265 *)Stage::getInstance(Height);
        Stage::unbindRender(Instance);
        BlurRenderer::sm_targetCount = 1;
        v6 = operator new[](16);
        v7 = 0;
        BlurRenderer::sm_pTargets = v6;
        v8 = v31;
        v9 = v32;
        while ( 1 )
        {
          v10 = (GLuint *)(v6 + 16 * v7);
          v10[2] = v9;
          v10[3] = v8;
          glGenTextures(1, v10);
          glBindTexture(0xDE1u, *(_DWORD *)(BlurRenderer::sm_pTargets + 16 * v7));
          glTexParameterf(0xDE1u, 0x2801u, 9728.0);
          glTexParameterf(0xDE1u, 0x2800u, 9728.0);
          glTexParameterf(0xDE1u, 0x2802u, 33071.0);
          glTexParameterf(0xDE1u, 0x2803u, 33071.0);
          if ( (unsigned int)GLImage::doGlTexImage2D((GLImage *)0xDE1, 0, 6408, v9, v8, 0, 6408, 5121, 0, v30) )
          {
            glGenFramebuffers(1, (GLuint *)(BlurRenderer::sm_pTargets + 16 * v7 + 4));
            glBindFramebuffer(0x8D40u, *(_DWORD *)(BlurRenderer::sm_pTargets + 16 * v7 + 4));
            glFramebufferTexture2D(0x8D40u, 0x8CE0u, 0xDE1u, *(_DWORD *)(BlurRenderer::sm_pTargets + 16 * v7), 0);
            BlurRenderer::sm_blurUsed = glCheckFramebufferStatus(0x8D40u) == 36053;
          }
          v11 = v9 >> 1;
          v12 = 1;
          do
          {
            v13 = v12;
            v12 *= 2;
          }
          while ( v13 < v11 );
          v14 = v13 > v11;
          v15 = v8 >> 1;
          v16 = 1;
          do
          {
            v17 = v16;
            v16 *= 2;
          }
          while ( v17 < v15 );
          if ( !BlurRenderer::sm_blurUsed )
            break;
          if ( ++v7 >= BlurRenderer::sm_targetCount )
          {
            v18 = BlurRenderer::sm_pTargets + 16LL * BlurRenderer::sm_targetCount;
            dword_1004F5F74 = *(_DWORD *)(v18 - 8);
            dword_1004F5F78 = *(_DWORD *)(v18 - 4);
            glGenTextures(1, (GLuint *)&BlurRenderer::sm_tmpBlurTarget);
            glBindTexture(0xDE1u, BlurRenderer::sm_tmpBlurTarget);
            glTexParameterf(0xDE1u, 0x2801u, 9728.0);
            glTexParameterf(0xDE1u, 0x2800u, 9728.0);
            glTexParameterf(0xDE1u, 0x2802u, 33071.0);
            glTexParameterf(0xDE1u, 0x2803u, 33071.0);
            if ( (unsigned int)GLImage::doGlTexImage2D(
                                 (GLImage *)0xDE1,
                                 0,
                                 6408,
                                 dword_1004F5F74,
                                 dword_1004F5F78,
                                 0,
                                 6408,
                                 5121,
                                 0,
                                 v30) )
            {
              glGenFramebuffers(1, (GLuint *)&dword_1004F5F70);
              glBindFramebuffer(0x8D40u, dword_1004F5F70);
              glFramebufferTexture2D(0x8D40u, 0x8CE0u, 0xDE1u, BlurRenderer::sm_tmpBlurTarget, 0);
              BlurRenderer::sm_blurUsed = glCheckFramebufferStatus(0x8D40u) == 36053;
            }
            break;
          }
          v9 = v13 >> v14;
          v8 = v17 >> (v17 > v15);
          v6 = BlurRenderer::sm_pTargets;
        }
      }
      glBindFramebuffer(0x8D40u, *((_DWORD *)this + 23));
      v20 = (unsigned __int8)BlurRenderer::sm_blurUsed;
      if ( BlurRenderer::sm_pUnitQuad )
        v21 = 1;
      else
        v21 = BlurRenderer::sm_blurUsed == 0;
      if ( !v21 )
      {
        v22 = (#1265 *)Stage::getInstance(Ibo);
        Stage::unbindRender(v22);
        v35 = 131075;
        *(_QWORD *)v34 = 0x1000200010000LL;
        memcpy(__dst, &unk_1003E5154, sizeof(__dst));
        v23 = (GLuint *)operator new(40);
        VertexBuffer::VertexBuffer(v23, __dst, 20, &VertexPosUv::attributeInfo, 2);
        BlurRenderer::sm_pUnitQuad = (__int64)v23;
        Ibo = (Stage *)VertexBuffer::createIbo(v23, v34, 6u);
        *(_DWORD *)(BlurRenderer::sm_pUnitQuad + 36) = 0;
        v20 = (unsigned __int8)BlurRenderer::sm_blurUsed;
      }
      if ( !BlurRenderer::sm_pBlitShader && v20 )
      {
        v24 = (#1265 *)Stage::getInstance(Ibo);
        Stage::unbindRender(v24);
        v25 = (#1206 *)operator new(40);
        Shader::Shader(v25);
        BlurRenderer::sm_pBlitShader = (__int64)v25;
        Shader::load(
          v25,
          "#ifndef GL_ES\n"
          "#define highp\n"
          "#define mediump\n"
          "#define lowp\n"
          "#endif\n"
          "uniform highp mat4 u_mvp;\n"
          "attribute mediump vec4 a_pos;\n"
          "attribute mediump vec2 a_uv0;\n"
          "varying mediump vec2 v_uv0;\n"
          "void main()\n"
          "{\n"
          "v_uv0 = a_uv0;\n"
          "gl_Position = u_mvp * a_pos;\n"
          "}\n",
          "#ifndef GL_ES\n"
          "#define highp\n"
          "#define mediump\n"
          "#define lowp\n"
          "#endif\n"
          "uniform mediump sampler2D texture0;\n"
          "varying mediump vec2 v_uv0;\n"
          "void main()\n"
          "{\n"
          "gl_FragColor = texture2D(texture0, v_uv0.xy);\n"
          "}\n",
          "");
        v26 = (#1206 *)operator new(40);
        Shader::Shader(v26);
        BlurRenderer::sm_pBlurShader = (__int64)v26;
        Ibo = (Stage *)Shader::load(
                         v26,
                         "#ifndef GL_ES\n"
                         "#define highp\n"
                         "#define mediump\n"
                         "#define lowp\n"
                         "#endif\n"
                         "uniform highp mat4 u_mvp;\n"
                         "uniform mediump vec2 u_direction;\n"
                         "attribute highp vec4 a_pos;\n"
                         "attribute mediump vec2 a_uv0;\n"
                         "varying mediump vec4 v_uv[4];\n"
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
                         "#ifndef GL_ES\n"
                         "#define highp\n"
                         "#define mediump\n"
                         "#define lowp\n"
                         "#endif\n"
                         "uniform lowp sampler2D texture0;\n"
                         "varying mediump vec4 v_uv[4];\n"
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
      v27 = Stage::getInstance(Ibo);
      isInitialized = (Stage *)Stage::isInitialized(v27);
      if ( ((unsigned __int8)isInitialized & 1) == 0 )
      {
        v29 = (Stage *)Stage::getInstance(isInitialized);
        Stage::init(v29, 0, 0, v32, v31);
      }
      *((_BYTE *)this + 104) = 1;
    }

    __int64 __fastcall BlurRenderer::refresh(__int64 this)
    {
      *(_BYTE *)(this + 104) = 1;
      return this;
    }

    // attributes: thunk
    void __fastcall BlurRenderer::BlurRenderer(BlurRenderer *this)
    {
      __ZN12BlurRendererC2Ev(this);
    }

    void __fastcall BlurRenderer::~BlurRenderer(BadgeItem *this)
    {
      *(_QWORD *)this = off_100462880;
      *(_QWORD *)((char *)this + 97) = 0;
      *(_QWORD *)((char *)this + 92) = 0;
      Sprite::~Sprite(this);
    }

    void __fastcall BlurRenderer::~BlurRenderer(BadgeItem *this)
    {
      *(_QWORD *)this = off_100462880;
      *(_QWORD *)((char *)this + 97) = 0;
      *(_QWORD *)((char *)this + 92) = 0;
      Sprite::~Sprite(this);
      operator delete(this);
    }

    __int64 __fastcall BlurRenderer::startBlurRender(GLint *this)
    {
      int v1; // w4
    
      glGetIntegerv(0x8CA6u, this + 23);
      glBindFramebuffer(0x8D40u, *(_DWORD *)(BlurRenderer::sm_pTargets + 4));
      glClear(0x4000u);
      return Renderer::setViewport(
               0,
               0,
               *(_DWORD *)(BlurRenderer::sm_pTargets + 8),
               *(_DWORD *)(BlurRenderer::sm_pTargets + 12),
               v1);
    }

    __int64 __fastcall BlurRenderer::stopBlurRender(BadgeItem *this)
    {
      int v2; // w21
      __int64 v3; // x25
      __int64 v4; // x26
      __int64 v5; // x23
      int v6; // w4
      __int64 v7; // x20
      int v8; // w23
      unsigned int *v9; // x25
      int *v10; // x26
      int *v11; // x28
      int v12; // w4
      int v13; // w4
      long double v14; // q1
      Screen *v15; // x0
      Screen *Width; // x0
      int v17; // w19
      int Height; // w0
      int v19; // w4
    
      v2 = BlurRenderer::sm_targetCount;
      if ( BlurRenderer::sm_targetCount > 1 )
      {
        Shader::bind((Shader *)BlurRenderer::sm_pBlitShader);
        v3 = 1;
        if ( BlurRenderer::sm_targetCount >= 2 )
        {
          v4 = 0;
          do
          {
            v5 = BlurRenderer::sm_pTargets + v4;
            glBindFramebuffer(0x8D40u, *(_DWORD *)(BlurRenderer::sm_pTargets + v4 + 20));
            glClear(0x4500u);
            Renderer::setViewport(0, 0, *(_DWORD *)(v5 + 24), *(_DWORD *)(v5 + 28), v6);
            Shader::setTexture((Shader *)BlurRenderer::sm_pBlitShader, *(_DWORD *)v5, "texture0", 0);
            Shader::setUniformMatrix(BlurRenderer::sm_pBlitShader, "u_mvp", &unitOrthoMatrix, 1);
            Renderer::render(BlurRenderer::sm_pUnitQuad, 0, 0xFFFFFFFFLL);
            ++v3;
            v4 += 16;
          }
          while ( v3 < BlurRenderer::sm_targetCount );
        }
        Shader::unbind(BlurRenderer::sm_pBlitShader);
        v2 = BlurRenderer::sm_targetCount;
      }
      v7 = BlurRenderer::sm_pTargets;
      Shader::bind((Shader *)BlurRenderer::sm_pBlurShader);
      Shader::setUniformMatrix(BlurRenderer::sm_pBlurShader, "u_mvp", &unitOrthoMatrix, 1);
      if ( *((int *)this + 24) >= 1 )
      {
        v8 = 0;
        v9 = (unsigned int *)(v7 + 16 * (v2 - 1LL));
        v10 = (int *)(v9 + 2);
        v11 = (int *)(v9 + 3);
        do
        {
          glBindFramebuffer(0x8D40u, dword_1004F5F70);
          glClear(0x4000u);
          Renderer::setViewport(0, 0, dword_1004F5F74, dword_1004F5F78, v12);
          Shader::setTexture((Shader *)BlurRenderer::sm_pBlurShader, *v9, "texture0", 0);
          Shader::setUniformVector2(
            BlurRenderer::sm_pBlurShader,
            "u_direction",
            *((float *)this + 25) / (float)*v10,
            COERCE_LONG_DOUBLE((unsigned __int128)0));
          Renderer::render(BlurRenderer::sm_pUnitQuad, 0, 0xFFFFFFFFLL);
          glBindFramebuffer(0x8D40u, v9[1]);
          glClear(0x4000u);
          Renderer::setViewport(0, 0, *v10, *v11, v13);
          Shader::setTexture((Shader *)BlurRenderer::sm_pBlurShader, BlurRenderer::sm_tmpBlurTarget, "texture0", 0);
          *(float *)&v14 = *((float *)this + 25) / (float)*v11;
          Shader::setUniformVector2(BlurRenderer::sm_pBlurShader, "u_direction", 0.0, v14);
          Renderer::render(BlurRenderer::sm_pUnitQuad, 0, 0xFFFFFFFFLL);
          ++v8;
        }
        while ( v8 < *((_DWORD *)this + 24) );
      }
      Shader::unbind(BlurRenderer::sm_pBlurShader);
      glBindFramebuffer(0x8D40u, *((_DWORD *)this + 23));
      Width = (Screen *)Screen::getWidth(v15);
      v17 = (int)Width;
      Height = Screen::getHeight(Width);
      return Renderer::setViewport(0, 0, v17, Height, v19);
    }

    __int64 __fastcall BlurRenderer::blitResult(BadgeItem *this)
    {
      __int64 v1; // x19
    
      v1 = BlurRenderer::sm_pTargets + 16LL * BlurRenderer::sm_targetCount;
      Shader::bind((Shader *)BlurRenderer::sm_pBlitShader);
      Shader::setTexture((Shader *)BlurRenderer::sm_pBlitShader, *(_DWORD *)(v1 - 16), "texture0", 0);
      Shader::setUniformMatrix(BlurRenderer::sm_pBlitShader, "u_mvp", &unitOrthoMatrix, 1);
      Renderer::render(BlurRenderer::sm_pUnitQuad, 0, 0xFFFFFFFFLL);
      return Shader::unbind(BlurRenderer::sm_pBlitShader);
    }

    __int64 __fastcall BlurRenderer::setIterations(__int64 this, int a2)
    {
      *(_DWORD *)(this + 96) = a2;
      return this;
    }

    __int64 __fastcall BlurRenderer::setStrength(__int64 this, float a2)
    {
      *(float *)(this + 100) = a2;
      return this;
    }

    __int64 __fastcall BlurRenderer::render(BadgeItem *this, #1256 *a2, #1246 *a3, int a4, long double a5)
    {
      Stage *Instance; // x19
      BadgeItem *v11; // x0
      __int64 v12; // x20
      Screen *v13; // x0
      Screen *Width; // x0
      int v15; // w21
      int Height; // w0
    
      if ( !BlurRenderer::sm_blurUsed )
        return 0;
      Instance = (Stage *)Stage::getInstance(this);
      v11 = (BadgeItem *)Stage::renderBuckets(Instance);
      if ( *((_BYTE *)this + 104) )
      {
        BlurRenderer::startBlurRender((GLint *)this);
        v12 = Sprite::render(this, a2, a3, a4 | 0x1C0u, a5);
        Stage::renderBuckets(Instance);
        v11 = (BadgeItem *)BlurRenderer::stopBlurRender(this);
        *((_BYTE *)this + 104) = 0;
      }
      else
      {
        v12 = 0;
      }
      v13 = (Screen *)BlurRenderer::blitResult(v11);
      Width = (Screen *)Screen::getWidth(v13);
      v15 = (int)Width;
      Height = Screen::getHeight(Width);
      Stage::init(Instance, 0, 0, v15, Height);
      return v12;
    }

    void __fastcall BlurRenderer::destructStatics(BadgeItem *this)
    {
      void *v1; // x19
      void *v2; // x19
      void *v3; // x19
      __int64 v4; // x0
      __int64 v5; // x21
      __int64 v6; // x22
      __int64 v7; // x8
    
      BlurRenderer::sm_blurUsed = 0;
      v1 = (void *)BlurRenderer::sm_pBlurShader;
      if ( BlurRenderer::sm_pBlurShader )
      {
        Shader::~Shader((Shader *)BlurRenderer::sm_pBlurShader);
        operator delete(v1);
      }
      BlurRenderer::sm_pBlurShader = 0;
      v2 = (void *)BlurRenderer::sm_pBlitShader;
      if ( BlurRenderer::sm_pBlitShader )
      {
        Shader::~Shader((Shader *)BlurRenderer::sm_pBlitShader);
        operator delete(v2);
      }
      BlurRenderer::sm_pBlitShader = 0;
      v3 = (void *)BlurRenderer::sm_pUnitQuad;
      if ( BlurRenderer::sm_pUnitQuad )
      {
        VertexBuffer::~VertexBuffer((#1409 *)BlurRenderer::sm_pUnitQuad);
        operator delete(v3);
      }
      BlurRenderer::sm_pUnitQuad = 0;
      if ( BlurRenderer::sm_targetCount <= 0 )
      {
        v4 = BlurRenderer::sm_pTargets;
      }
      else
      {
        v4 = BlurRenderer::sm_pTargets;
        v5 = BlurRenderer::sm_targetCount + 1LL;
        v6 = 16LL * BlurRenderer::sm_targetCount - 16;
        do
        {
          glDeleteTextures(1, (const GLuint *)(v4 + v6));
          v7 = BlurRenderer::sm_pTargets;
          *(_DWORD *)(BlurRenderer::sm_pTargets + v6) = 0;
          glDeleteFramebuffers(1, (const GLuint *)(v7 + v6 + 4));
          v4 = BlurRenderer::sm_pTargets;
          *(_DWORD *)(BlurRenderer::sm_pTargets + v6 + 4) = 0;
          --v5;
          v6 -= 16;
        }
        while ( v5 > 1 );
      }
      if ( v4 )
        operator delete[](v4);
      BlurRenderer::sm_pTargets = 0;
      BlurRenderer::sm_targetCount = 0;
    }

}; // end class BlurRenderer
