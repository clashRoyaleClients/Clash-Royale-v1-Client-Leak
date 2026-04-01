class SimpleBackgroundRenderer
{
public:

    Screen *__fastcall SimpleBackgroundRenderer::SimpleBackgroundRenderer(Screen *a1)
    {
      Screen *Width; // x0
      int v3; // w20
      Stage *Height; // x0
      int v5; // w21
      #1265 *Instance; // x0
      bool v7; // zf
      #1265 *v8; // x0
      GLuint *v9; // x22
      #1265 *v10; // x0
      #1206 *v11; // x22
      __int64 v12; // x0
      Stage *isInitialized; // x0
      Stage *v14; // x0
      GLuint params; // [xsp+14h] [xbp-CCh] BYREF
      _QWORD v17[2]; // [xsp+18h] [xbp-C8h] BYREF
      int v18; // [xsp+28h] [xbp-B8h]
      float v19; // [xsp+2Ch] [xbp-B4h]
      int v20; // [xsp+30h] [xbp-B0h]
      int v21; // [xsp+34h] [xbp-ACh]
      int v22; // [xsp+38h] [xbp-A8h]
      int v23; // [xsp+3Ch] [xbp-A4h]
      int v24; // [xsp+40h] [xbp-A0h]
      float v25; // [xsp+44h] [xbp-9Ch]
      int v26; // [xsp+48h] [xbp-98h]
      int v27; // [xsp+4Ch] [xbp-94h]
      int v28; // [xsp+50h] [xbp-90h]
      float v29; // [xsp+54h] [xbp-8Ch]
      float v30; // [xsp+58h] [xbp-88h]
      int v31; // [xsp+5Ch] [xbp-84h]
      __int64 v32; // [xsp+60h] [xbp-80h]
      unsigned __int16 v33[4]; // [xsp+68h] [xbp-78h] BYREF
      int v34; // [xsp+70h] [xbp-70h]
    
      *(_QWORD *)a1 = off_1004632C0;
      *((_DWORD *)a1 + 2) = 0;
      Width = (Screen *)Screen::getWidth(a1);
      v3 = (int)Width;
      Height = (Stage *)Screen::getHeight(Width);
      v5 = (int)Height;
      if ( !SimpleBackgroundRenderer::sm_postProcessImageHalfRes )
      {
        Instance = (#1265 *)Stage::getInstance(Height);
        Stage::unbindRender(Instance);
        SimpleBackgroundRenderer::sm_imageWidth = (int)(float)((float)v3 * 0.5);
        SimpleBackgroundRenderer::sm_imageHeight = (int)(float)((float)v5 * 0.5);
        glGenTextures(1, (GLuint *)&SimpleBackgroundRenderer::sm_postProcessImageHalfRes);
        glBindTexture(0xDE1u, SimpleBackgroundRenderer::sm_postProcessImageHalfRes);
        glTexParameterf(0xDE1u, 0x2801u, 9729.0);
        glTexParameterf(0xDE1u, 0x2800u, 9729.0);
        glTexParameterf(0xDE1u, 0x2802u, 33071.0);
        glTexParameterf(0xDE1u, 0x2803u, 33071.0);
        Height = (Stage *)GLImage::doGlTexImage2D(
                            (GLImage *)0xDE1,
                            0,
                            6408,
                            SimpleBackgroundRenderer::sm_imageWidth,
                            SimpleBackgroundRenderer::sm_imageHeight,
                            0,
                            6408,
                            32819,
                            0);
        if ( (_DWORD)Height )
        {
          glGetIntegerv(0x8CA6u, (GLint *)&params);
          glGenFramebuffers(1, (GLuint *)&SimpleBackgroundRenderer::sm_uFBOHandleHalfRes);
          glBindFramebuffer(0x8D40u, SimpleBackgroundRenderer::sm_uFBOHandleHalfRes);
          glFramebufferTexture2D(0x8D40u, 0x8CE0u, 0xDE1u, SimpleBackgroundRenderer::sm_postProcessImageHalfRes, 0);
          SimpleBackgroundRenderer::sm_simpleBgUsed = glCheckFramebufferStatus(0x8D40u) == 36053;
          glBindFramebuffer(0x8D40u, params);
        }
      }
      if ( SimpleBackgroundRenderer::sm_pScreenQuad )
        v7 = 1;
      else
        v7 = SimpleBackgroundRenderer::sm_simpleBgUsed == 0;
      if ( !v7 )
      {
        v8 = (#1265 *)Stage::getInstance(Height);
        Stage::unbindRender(v8);
        v17[0] = 0;
        v17[1] = 0;
        v34 = 131075;
        v18 = 1065353216;
        *(_QWORD *)v33 = 0x1000200010000LL;
        v19 = (float)v3;
        v20 = 0;
        v21 = 0;
        v22 = 1065353216;
        v23 = 1065353216;
        v24 = 0;
        v25 = (float)v5;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v29 = (float)v3;
        v30 = (float)v5;
        v31 = 0;
        v32 = 1065353216;
        v9 = (GLuint *)operator new(40);
        VertexBuffer::VertexBuffer(v9, v17, 20, &VertexPosUv::attributeInfo, 2);
        SimpleBackgroundRenderer::sm_pScreenQuad = (__int64)v9;
        Height = (Stage *)VertexBuffer::createIbo(v9, v33, 6u);
        *(_DWORD *)(SimpleBackgroundRenderer::sm_pScreenQuad + 36) = 0;
      }
      if ( !SimpleBackgroundRenderer::sm_pRenderBackgroundToScreenShader )
      {
        v10 = (#1265 *)Stage::getInstance(Height);
        Stage::unbindRender(v10);
        v11 = (#1206 *)operator new(40);
        Shader::Shader(v11);
        SimpleBackgroundRenderer::sm_pRenderBackgroundToScreenShader = (__int64)v11;
        Height = (Stage *)Shader::load(
                            v11,
                            "#ifdef GL_ES\n"
                            "precision highp float;  \n"
                            "#endif\n"
                            "attribute vec4\ta_pos;\n"
                            "attribute vec2\ta_uv0;\n"
                            "uniform mat4\tmyPMVMatrix;\n"
                            "varying vec2\tv_texCoord0;\n"
                            "void main(void)\n"
                            "{\n"
                            "gl_Position = myPMVMatrix*a_pos;\n"
                            "v_texCoord0 = a_uv0;\n"
                            "}",
                            "#ifdef GL_ES\n"
                            "precision mediump float;  \n"
                            "#endif\n"
                            "varying vec2 v_texCoord0;\n"
                            "uniform sampler2D texture0;\n"
                            "void main (void)\n"
                            "{\n"
                            "gl_FragColor=texture2D(texture0, v_texCoord0);\n"
                            "}",
                            "");
      }
      v12 = Stage::getInstance(Height);
      isInitialized = (Stage *)Stage::isInitialized(v12);
      if ( ((unsigned __int8)isInitialized & 1) == 0 )
      {
        v14 = (Stage *)Stage::getInstance(isInitialized);
        Stage::init(v14, 0, 0, v3, v5);
      }
      return a1;
    }

    // attributes: thunk
    void __fastcall SimpleBackgroundRenderer::SimpleBackgroundRenderer(SimpleBackgroundRenderer *this)
    {
      __ZN24SimpleBackgroundRendererC2Ev(this);
    }

    void __fastcall SimpleBackgroundRenderer::~SimpleBackgroundRenderer(xTimer *this)
    {
      void *v2; // x20
      void *v3; // x20
    
      *(_QWORD *)this = off_1004632C0;
      SimpleBackgroundRenderer::sm_simpleBgUsed = 0;
      v2 = (void *)SimpleBackgroundRenderer::sm_pScreenQuad;
      if ( SimpleBackgroundRenderer::sm_pScreenQuad )
      {
        VertexBuffer::~VertexBuffer((#1409 *)SimpleBackgroundRenderer::sm_pScreenQuad);
        operator delete(v2);
      }
      SimpleBackgroundRenderer::sm_pScreenQuad = 0;
      glDeleteTextures(1, (const GLuint *)&SimpleBackgroundRenderer::sm_postProcessImageHalfRes);
      SimpleBackgroundRenderer::sm_postProcessImageHalfRes = 0;
      glDeleteFramebuffers(1, (const GLuint *)&SimpleBackgroundRenderer::sm_uFBOHandleHalfRes);
      SimpleBackgroundRenderer::sm_uFBOHandleHalfRes = 0;
      v3 = (void *)SimpleBackgroundRenderer::sm_pRenderBackgroundToScreenShader;
      if ( SimpleBackgroundRenderer::sm_pRenderBackgroundToScreenShader )
      {
        Shader::~Shader((Shader *)SimpleBackgroundRenderer::sm_pRenderBackgroundToScreenShader);
        operator delete(v3);
      }
      SimpleBackgroundRenderer::sm_pRenderBackgroundToScreenShader = 0;
      *((_DWORD *)this + 2) = 0;
    }

    // attributes: thunk
    void __fastcall SimpleBackgroundRenderer::~SimpleBackgroundRenderer(xTimer *this)
    {
      __ZN24SimpleBackgroundRendererD2Ev(this);
    }

    void __fastcall SimpleBackgroundRenderer::~SimpleBackgroundRenderer(xTimer *this)
    {
      SimpleBackgroundRenderer::~SimpleBackgroundRenderer(this);
      operator delete(this);
    }

    __int64 __fastcall SimpleBackgroundRenderer::startBackgroundToTextureRender(GLint *this)
    {
      int v1; // w4
    
      glGetIntegerv(0x8CA6u, this + 2);
      glBindFramebuffer(0x8D40u, SimpleBackgroundRenderer::sm_uFBOHandleHalfRes);
      glClear(0x4500u);
      return Renderer::setViewport(
               0,
               0,
               SimpleBackgroundRenderer::sm_imageWidth,
               SimpleBackgroundRenderer::sm_imageHeight,
               v1);
    }

    __int64 __fastcall SimpleBackgroundRenderer::stopBackgroundToTextureRender(xTimer *this)
    {
      Screen *v1; // x0
      Screen *Width; // x0
      int v3; // w19
      int Height; // w0
      int v5; // w4
    
      glBindFramebuffer(0x8D40u, *((_DWORD *)this + 2));
      Width = (Screen *)Screen::getWidth(v1);
      v3 = (int)Width;
      Height = Screen::getHeight(Width);
      return Renderer::setViewport(0, 0, v3, Height, v5);
    }

    __int64 __fastcall SimpleBackgroundRenderer::drawBackgroundToScreen(xTimer *this)
    {
      Screen *Width; // x0
      int v2; // w19
      int Height; // w0
      int v4; // w4
      Stage *v5; // x0
      Stage *Instance; // x0
      #1205 *v7; // x0
      __int64 v9[8]; // [xsp+0h] [xbp-50h] BYREF
    
      Width = (Screen *)Screen::getWidth(this);
      v2 = (int)Width;
      Height = Screen::getHeight(Width);
      v5 = (Stage *)Renderer::setViewport(0, 0, v2, Height, v4);
      Instance = (Stage *)Stage::getInstance(v5);
      Stage::bindBlendMode(Instance, 0);
      Shader::bind((Shader *)SimpleBackgroundRenderer::sm_pRenderBackgroundToScreenShader);
      Shader::setTexture(
        (Shader *)SimpleBackgroundRenderer::sm_pRenderBackgroundToScreenShader,
        SimpleBackgroundRenderer::sm_postProcessImageHalfRes,
        "texture0",
        0);
      Renderer::getPixelMatrix(v9, v7);
      Shader::setUniformMatrix(SimpleBackgroundRenderer::sm_pRenderBackgroundToScreenShader, "myPMVMatrix", v9, 1);
      Renderer::render(SimpleBackgroundRenderer::sm_pScreenQuad, 0, 0xFFFFFFFFLL);
      return Shader::unbind(SimpleBackgroundRenderer::sm_pRenderBackgroundToScreenShader);
    }

    __int64 __fastcall SimpleBackgroundRenderer::getSimpleBackgroundEnabled(xTimer *this)
    {
      return (unsigned __int8)SimpleBackgroundRenderer::sm_simpleBgUsed;
    }

}; // end class SimpleBackgroundRenderer
