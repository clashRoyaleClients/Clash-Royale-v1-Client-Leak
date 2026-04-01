class ShadowRenderer
{
public:

    __int64 __fastcall ShadowRenderer::ShadowRenderer(__int64 a1, __int64 a2)
    {
      Screen *v4; // x0
      Screen *Width; // x0
      int v6; // w20
      Stage *Height; // x0
      int v8; // w21
      #1265 *Instance; // x0
      int v10; // w8
      #1265 *v11; // x0
      GLuint *v12; // x22
      #1265 *v13; // x0
      #1206 *v14; // x22
      __int64 v15; // x0
      Stage *isInitialized; // x0
      Stage *v17; // x0
      GLuint params; // [xsp+14h] [xbp-BCh] BYREF
      _QWORD v20[2]; // [xsp+18h] [xbp-B8h] BYREF
      int v21; // [xsp+28h] [xbp-A8h]
      float v22; // [xsp+2Ch] [xbp-A4h]
      int v23; // [xsp+30h] [xbp-A0h]
      int v24; // [xsp+34h] [xbp-9Ch]
      int v25; // [xsp+38h] [xbp-98h]
      int v26; // [xsp+3Ch] [xbp-94h]
      int v27; // [xsp+40h] [xbp-90h]
      float v28; // [xsp+44h] [xbp-8Ch]
      int v29; // [xsp+48h] [xbp-88h]
      int v30; // [xsp+4Ch] [xbp-84h]
      int v31; // [xsp+50h] [xbp-80h]
      float v32; // [xsp+54h] [xbp-7Ch]
      float v33; // [xsp+58h] [xbp-78h]
      int v34; // [xsp+5Ch] [xbp-74h]
      __int64 v35; // [xsp+60h] [xbp-70h]
      unsigned __int16 v36[4]; // [xsp+68h] [xbp-68h] BYREF
      int v37; // [xsp+70h] [xbp-60h]
    
      v4 = Sprite::Sprite((Sprite *)a1, 100);
      *(_QWORD *)a1 = off_10046F210;
      *(_DWORD *)(a1 + 92) = 0;
      *(_QWORD *)(a1 + 96) = a2;
      Width = (Screen *)Screen::getWidth(v4);
      v6 = (int)Width;
      Height = (Stage *)Screen::getHeight(Width);
      v8 = (int)Height;
      if ( !ShadowRenderer::sm_postProcessImageHalfRes )
      {
        Instance = (#1265 *)Stage::getInstance(Height);
        Stage::unbindRender(Instance);
        ShadowRenderer::sm_imageWidth = (int)(float)((float)v6 * 0.5);
        ShadowRenderer::sm_imageHeight = (int)(float)((float)v8 * 0.5);
        glGenTextures(1, (GLuint *)&ShadowRenderer::sm_postProcessImageHalfRes);
        glBindTexture(0xDE1u, ShadowRenderer::sm_postProcessImageHalfRes);
        glTexParameterf(0xDE1u, 0x2801u, 9729.0);
        glTexParameterf(0xDE1u, 0x2800u, 9729.0);
        glTexParameterf(0xDE1u, 0x2802u, 33071.0);
        glTexParameterf(0xDE1u, 0x2803u, 33071.0);
        Height = (Stage *)GLImage::doGlTexImage2D(
                            (GLImage *)0xDE1,
                            0,
                            6408,
                            ShadowRenderer::sm_imageWidth,
                            ShadowRenderer::sm_imageHeight,
                            0,
                            6408,
                            32819,
                            0);
        if ( (_DWORD)Height )
        {
          glGetIntegerv(0x8CA6u, (GLint *)&params);
          glGenFramebuffers(1, (GLuint *)&ShadowRenderer::sm_uFBOHandleHalfRes);
          glBindFramebuffer(0x8D40u, ShadowRenderer::sm_uFBOHandleHalfRes);
          glFramebufferTexture2D(0x8D40u, 0x8CE0u, 0xDE1u, ShadowRenderer::sm_postProcessImageHalfRes, 0);
          ShadowRenderer::sm_shadowUsed = glCheckFramebufferStatus(0x8D40u) == 36053;
          glBindFramebuffer(0x8D40u, params);
        }
      }
      v10 = (unsigned __int8)ShadowRenderer::sm_shadowUsed;
      if ( !ShadowRenderer::sm_pScreenQuad && ShadowRenderer::sm_shadowUsed )
      {
        v11 = (#1265 *)Stage::getInstance(Height);
        Stage::unbindRender(v11);
        v20[0] = 0;
        v20[1] = 0;
        v37 = 131075;
        v21 = 1065353216;
        *(_QWORD *)v36 = 0x1000200010000LL;
        v22 = (float)v6;
        v23 = 0;
        v24 = 0;
        v25 = 1065353216;
        v26 = 1065353216;
        v27 = 0;
        v28 = (float)v8;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v32 = (float)v6;
        v33 = (float)v8;
        v34 = 0;
        v35 = 1065353216;
        v12 = (GLuint *)operator new(40);
        VertexBuffer::VertexBuffer(v12, v20, 20, &VertexPosUv::attributeInfo, 2);
        ShadowRenderer::sm_pScreenQuad = (__int64)v12;
        Height = (Stage *)VertexBuffer::createIbo(v12, v36, 6u);
        *(_DWORD *)(ShadowRenderer::sm_pScreenQuad + 36) = 0;
        v10 = (unsigned __int8)ShadowRenderer::sm_shadowUsed;
      }
      if ( !ShadowRenderer::sm_pRenderToScreenShader && v10 )
      {
        v13 = (#1265 *)Stage::getInstance(Height);
        Stage::unbindRender(v13);
        v14 = (#1206 *)operator new(40);
        Shader::Shader(v14);
        ShadowRenderer::sm_pRenderToScreenShader = (__int64)v14;
        Height = (Stage *)Shader::load(
                            v14,
                            "#ifdef GL_ES\n"
                            "precision highp float;  \n"
                            "#endif\n"
                            "attribute vec4\ta_pos;\n"
                            "attribute vec2\ta_uv0;\n"
                            "uniform mat4\tmyPMVMatrix;\n"
                            "uniform vec2 u_offset;\n"
                            "varying vec2\tv_texCoord0;\n"
                            "varying vec2\tv_texCoord1;\n"
                            "varying vec2\tv_texCoord2;\n"
                            "varying vec2\tv_texCoord3;\n"
                            "void main(void)\n"
                            "{\n"
                            "gl_Position = myPMVMatrix * a_pos;\n"
                            "v_texCoord0 = a_uv0+u_offset;\n"
                            "v_texCoord1 = a_uv0+vec2(-u_offset.x, u_offset.y);\n"
                            "v_texCoord2 = a_uv0-u_offset;\n"
                            "v_texCoord3 = a_uv0+vec2(u_offset.x, -u_offset.y);\n"
                            "}",
                            "#ifdef GL_ES\n"
                            "precision mediump float;  \n"
                            "#endif\n"
                            "varying vec2 v_texCoord0;\n"
                            "varying vec2 v_texCoord1;\n"
                            "varying vec2 v_texCoord2;\n"
                            "varying vec2 v_texCoord3;\n"
                            "uniform vec4 u_c;\n"
                            "uniform sampler2D texture0;\n"
                            "uniform float u_clamp;\n"
                            "void main (void)\n"
                            "{\n"
                            "float aa = texture2D(texture0, v_texCoord0).a\n"
                            "+texture2D(texture0, v_texCoord1).a\n"
                            "+texture2D(texture0, v_texCoord2).a\n"
                            "+texture2D(texture0, v_texCoord3).a;\n"
                            "float c=min(aa, u_clamp);\n"
                            "gl_FragColor=u_c*c;\n"
                            "}",
                            "");
      }
      v15 = Stage::getInstance(Height);
      isInitialized = (Stage *)Stage::isInitialized(v15);
      if ( ((unsigned __int8)isInitialized & 1) == 0 )
      {
        v17 = (Stage *)Stage::getInstance(isInitialized);
        Stage::init(v17, 0, 0, v6, v8);
      }
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall ShadowRenderer::ShadowRenderer(__int64 a1, __int64 a2)
    {
      return __ZN14ShadowRendererC2EPK17LogicLocationData(a1, a2);
    }

    void __fastcall ShadowRenderer::~ShadowRenderer(__int64 a1)
    {
      *(_QWORD *)a1 = off_10046F210;
      ShadowRenderer::destructStatics((ShadowRenderer *)a1);
      *(_DWORD *)(a1 + 92) = 0;
      *(_QWORD *)(a1 + 96) = 0;
      Sprite::~Sprite((Sprite *)a1);
    }

    void ShadowRenderer::destructStatics()
    {
      void *v0; // x19
      void *v1; // x19
    
      v0 = (void *)ShadowRenderer::sm_pRenderToScreenShader;
      if ( ShadowRenderer::sm_pRenderToScreenShader )
      {
        Shader::~Shader((Shader *)ShadowRenderer::sm_pRenderToScreenShader);
        operator delete(v0);
      }
      ShadowRenderer::sm_pRenderToScreenShader = 0;
      ShadowRenderer::sm_shadowUsed = 0;
      v1 = (void *)ShadowRenderer::sm_pScreenQuad;
      if ( ShadowRenderer::sm_pScreenQuad )
      {
        VertexBuffer::~VertexBuffer((#1409 *)ShadowRenderer::sm_pScreenQuad);
        operator delete(v1);
      }
      ShadowRenderer::sm_pScreenQuad = 0;
      glDeleteTextures(1, (const GLuint *)&ShadowRenderer::sm_postProcessImageHalfRes);
      ShadowRenderer::sm_postProcessImageHalfRes = 0;
      glDeleteFramebuffers(1, (const GLuint *)&ShadowRenderer::sm_uFBOHandleHalfRes);
      ShadowRenderer::sm_uFBOHandleHalfRes = 0;
    }

    // attributes: thunk
    void __fastcall ShadowRenderer::~ShadowRenderer(__int64 a1)
    {
      __ZN14ShadowRendererD2Ev(a1);
    }

    void __fastcall ShadowRenderer::~ShadowRenderer(void *a1)
    {
      ShadowRenderer::~ShadowRenderer((__int64)a1);
      operator delete(a1);
    }

    __int64 __fastcall ShadowRenderer::startShadowRender(__int64 a1)
    {
      int v1; // w4
    
      glGetIntegerv(0x8CA6u, (GLint *)(a1 + 92));
      glBindFramebuffer(0x8D40u, ShadowRenderer::sm_uFBOHandleHalfRes);
      glClear(0x4500u);
      return Renderer::setViewport(0, 0, ShadowRenderer::sm_imageWidth, ShadowRenderer::sm_imageHeight, v1);
    }

    __int64 __fastcall ShadowRenderer::stopShadowRender(__int64 a1)
    {
      long double v1; // q9
      long double v2; // q10
      Screen *v4; // x0
      Screen *Width; // x0
      int v6; // w20
      int Height; // w0
      int v8; // w4
      float v9; // s11
      float v10; // s12
      float v11; // s13
      Stage *ShadowA; // x0
      float v13; // s14
      Stage *Instance; // x0
      float v16; // s8
      float v17; // s8
      float v18; // s15
      #1205 *v19; // x0
      __int64 v21[8]; // [xsp+0h] [xbp-90h] BYREF
    
      glBindFramebuffer(0x8D40u, *(_DWORD *)(a1 + 92));
      Width = (Screen *)Screen::getWidth(v4);
      v6 = (int)Width;
      Height = Screen::getHeight(Width);
      Renderer::setViewport(0, 0, v6, Height, v8);
      v9 = (float)(int)LogicLocationData::getShadowR(*(ChangeAllianceMemberRoleOkMessage **)(a1 + 96)) / 255.0;
      v10 = (float)(int)LogicLocationData::getShadowG(*(ChangeAllianceMemberRoleOkMessage **)(a1 + 96)) / 255.0;
      v11 = (float)(int)LogicLocationData::getShadowB(*(ChangeAllianceMemberRoleOkMessage **)(a1 + 96)) / 255.0;
      ShadowA = (Stage *)LogicLocationData::getShadowA(*(ChangeAllianceMemberRoleOkMessage **)(a1 + 96));
      v13 = (float)(int)ShadowA * 0.015625;
      if ( v9 != v10 || v9 != v11 )
      {
        Instance = (Stage *)Stage::getInstance(ShadowA);
        Stage::bindBlendMode(Instance, 128);
      }
      Shader::bind((Shader *)ShadowRenderer::sm_pRenderToScreenShader);
      Shader::setTexture(
        (Shader *)ShadowRenderer::sm_pRenderToScreenShader,
        ShadowRenderer::sm_postProcessImageHalfRes,
        "texture0",
        0);
      v16 = (float)ShadowRenderer::sm_imageWidth;
      v17 = 1.0
          / (float)((float)(v16
                          * (float)(int)LogicLocationData::getShadowOffsetX(*(ChangeAllianceMemberRoleOkMessage **)(a1 + 96)))
                  / 100.0);
      v18 = (float)ShadowRenderer::sm_imageHeight;
      *(float *)&v1 = 1.0
                    / (float)((float)(v18
                                    * (float)(int)LogicLocationData::getShadowOffsetY(*(ChangeAllianceMemberRoleOkMessage **)(a1 + 96)))
                            / 100.0);
      *(float *)&v2 = (float)((float)(int)LogicLocationData::getShadowClamp(*(ChangeAllianceMemberRoleOkMessage **)(a1 + 96))
                            * 4.0)
                    / 100.0;
      Shader::setUniformVector2(ShadowRenderer::sm_pRenderToScreenShader, "u_offset", v17, v1);
      v19 = (#1205 *)Shader::setUniformFloat(ShadowRenderer::sm_pRenderToScreenShader, "u_clamp", v2);
      Renderer::getPixelMatrix(v21, v19);
      Shader::setUniformMatrix(ShadowRenderer::sm_pRenderToScreenShader, "myPMVMatrix", v21, 1);
      Shader::setUniformVector4(
        ShadowRenderer::sm_pRenderToScreenShader,
        "u_c",
        v9 * 0.25,
        v10 * 0.25,
        v11 * 0.25,
        v13 * 0.25);
      Renderer::render(ShadowRenderer::sm_pScreenQuad, 0, 0xFFFFFFFFLL);
      return Shader::unbind(ShadowRenderer::sm_pRenderToScreenShader);
    }

    __int64 __fastcall ShadowRenderer::render(Stage *a1, __int64 a2, __int64 a3, int a4, long double a5)
    {
      Stage *Instance; // x19
      __int64 v11; // x21
      Screen *v12; // x0
      Screen *Width; // x0
      int v14; // w20
      int Height; // w0
    
      if ( !ShadowRenderer::sm_shadowUsed || !*((_QWORD *)a1 + 12) )
        return 0;
      Instance = (Stage *)Stage::getInstance(a1);
      if ( (Stage::isCalculatingBounds() & 1) != 0 )
        return 1;
      Stage::renderBuckets(Instance);
      ShadowRenderer::startShadowRender((__int64)a1);
      v11 = Sprite::render(a1, a2, a3, a4 | 0x1C0u, a5);
      Stage::renderBuckets(Instance);
      v12 = (Screen *)ShadowRenderer::stopShadowRender((__int64)a1);
      Width = (Screen *)Screen::getWidth(v12);
      v14 = (int)Width;
      Height = Screen::getHeight(Width);
      Stage::init(Instance, 0, 0, v14, Height);
      return v11;
    }

    __int64 __fastcall ShadowRenderer::setLocationData(__int64 this, const ChangeAllianceMemberRoleOkMessage *a2)
    {
      *(_QWORD *)(this + 96) = a2;
      return this;
    }

}; // end class ShadowRenderer
