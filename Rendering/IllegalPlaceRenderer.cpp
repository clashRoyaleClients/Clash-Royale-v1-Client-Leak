class IllegalPlaceRenderer
{
public:

    __int64 __fastcall IllegalPlaceRenderer::IllegalPlaceRenderer(__int64 a1, __int64 a2)
    {
      AllianceStreamMessage *v4; // x0
      AllianceStreamMessage *Instance; // x0
      Screen *Width; // x0
      int v7; // w20
      int Height; // w21
      const char *v9; // x2
      __int64 MovieClip; // x0
      #1265 *v11; // x0
      int v12; // w8
      #1265 *v13; // x0
      GLuint *v14; // x22
      #1265 *v15; // x0
      Titan *v16; // x22
      __int64 v17; // x0
      Stage *isInitialized; // x0
      Stage *v19; // x0
      GLuint params; // [xsp+14h] [xbp-BCh] BYREF
      _QWORD v22[2]; // [xsp+18h] [xbp-B8h] BYREF
      int v23; // [xsp+28h] [xbp-A8h]
      float v24; // [xsp+2Ch] [xbp-A4h]
      int v25; // [xsp+30h] [xbp-A0h]
      int v26; // [xsp+34h] [xbp-9Ch]
      int v27; // [xsp+38h] [xbp-98h]
      int v28; // [xsp+3Ch] [xbp-94h]
      int v29; // [xsp+40h] [xbp-90h]
      float v30; // [xsp+44h] [xbp-8Ch]
      int v31; // [xsp+48h] [xbp-88h]
      int v32; // [xsp+4Ch] [xbp-84h]
      int v33; // [xsp+50h] [xbp-80h]
      float v34; // [xsp+54h] [xbp-7Ch]
      float v35; // [xsp+58h] [xbp-78h]
      int v36; // [xsp+5Ch] [xbp-74h]
      __int64 v37; // [xsp+60h] [xbp-70h]
      unsigned __int16 v38[4]; // [xsp+68h] [xbp-68h] BYREF
      int v39; // [xsp+70h] [xbp-60h]
    
      v4 = Sprite::Sprite((Sprite *)a1, 100);
      *(_QWORD *)(a1 + 113) = 0;
      *(_QWORD *)(a1 + 108) = 0;
      *(_QWORD *)a1 = off_100470D50;
      *(_QWORD *)(a1 + 100) = 0;
      *(_QWORD *)(a1 + 92) = 0;
      *(_QWORD *)(a1 + 104) = a2;
      IllegalPlaceRenderer::sm_illegalPlaceUsed = 1;
      Instance = GameMain::getInstance(v4);
      *(_BYTE *)(a1 + 120) = *((_DWORD *)Instance + 30) == 2;
      Width = (Screen *)Screen::getWidth(Instance);
      v7 = (int)Width;
      Height = Screen::getHeight(Width);
      MovieClip = ResourceManager::getMovieClip((ResourceManager *)"sc/ui.sc", "tile_illegal", v9);
      *(_QWORD *)(a1 + 96) = MovieClip;
      *(_BYTE *)(MovieClip + 15) = -1;
      *(_WORD *)(MovieClip + 13) = -1;
      if ( !IllegalPlaceRenderer::sm_postProcessImageHalfRes )
      {
        if ( *(_BYTE *)(a1 + 120) )
        {
          v11 = (#1265 *)Stage::getInstance((Stage *)MovieClip);
          Stage::unbindRender(v11);
          IllegalPlaceRenderer::sm_imageWidth = (int)(float)((float)v7 * 0.5);
          IllegalPlaceRenderer::sm_imageHeight = (int)(float)((float)Height * 0.5);
          glGenTextures(1, (GLuint *)&IllegalPlaceRenderer::sm_postProcessImageHalfRes);
          glBindTexture(0xDE1u, IllegalPlaceRenderer::sm_postProcessImageHalfRes);
          glTexParameterf(0xDE1u, 0x2801u, 9729.0);
          glTexParameterf(0xDE1u, 0x2800u, 9729.0);
          glTexParameterf(0xDE1u, 0x2802u, 33071.0);
          glTexParameterf(0xDE1u, 0x2803u, 33071.0);
          MovieClip = GLImage::doGlTexImage2D(
                        (GLImage *)0xDE1,
                        0,
                        6408,
                        IllegalPlaceRenderer::sm_imageWidth,
                        IllegalPlaceRenderer::sm_imageHeight,
                        0,
                        6408,
                        32819,
                        0);
          if ( (_DWORD)MovieClip )
          {
            glGetIntegerv(0x8CA6u, (GLint *)&params);
            glGenFramebuffers(1, (GLuint *)&IllegalPlaceRenderer::sm_uFBOHandleHalfRes);
            glBindFramebuffer(0x8D40u, IllegalPlaceRenderer::sm_uFBOHandleHalfRes);
            glFramebufferTexture2D(0x8D40u, 0x8CE0u, 0xDE1u, IllegalPlaceRenderer::sm_postProcessImageHalfRes, 0);
            if ( glCheckFramebufferStatus(0x8D40u) != 36053 )
              IllegalPlaceRenderer::sm_illegalPlaceUsed = 0;
            glBindFramebuffer(0x8D40u, params);
          }
        }
      }
      v12 = (unsigned __int8)IllegalPlaceRenderer::sm_illegalPlaceUsed;
      if ( !IllegalPlaceRenderer::sm_pScreenQuad && IllegalPlaceRenderer::sm_illegalPlaceUsed )
      {
        v13 = (#1265 *)Stage::getInstance((Stage *)MovieClip);
        Stage::unbindRender(v13);
        v22[0] = 0;
        v22[1] = 0;
        v39 = 131075;
        v23 = 1065353216;
        *(_QWORD *)v38 = 0x1000200010000LL;
        v24 = (float)v7;
        v25 = 0;
        v26 = 0;
        v27 = 1065353216;
        v28 = 1065353216;
        v29 = 0;
        v30 = (float)Height;
        v31 = 0;
        v32 = 0;
        v33 = 0;
        v34 = (float)v7;
        v35 = (float)Height;
        v36 = 0;
        v37 = 1065353216;
        v14 = (GLuint *)operator new(40);
        VertexBuffer::VertexBuffer(v14, v22, 20, &VertexPosUv::attributeInfo, 2);
        IllegalPlaceRenderer::sm_pScreenQuad = (__int64)v14;
        MovieClip = VertexBuffer::createIbo(v14, v38, 6u);
        *(_DWORD *)(IllegalPlaceRenderer::sm_pScreenQuad + 36) = 0;
        v12 = (unsigned __int8)IllegalPlaceRenderer::sm_illegalPlaceUsed;
      }
      if ( !IllegalPlaceRenderer::sm_pRenderToScreenShader && v12 )
      {
        v15 = (#1265 *)Stage::getInstance((Stage *)MovieClip);
        Stage::unbindRender(v15);
        v16 = (Titan *)operator new(40);
        Shader::Shader(v16);
        IllegalPlaceRenderer::sm_pRenderToScreenShader = (__int64)v16;
        MovieClip = Shader::load(
                      v16,
                      "#ifdef GL_ES\n"
                      "precision highp float;  \n"
                      "#endif\n"
                      "attribute vec4\ta_pos;\n"
                      "attribute vec2\ta_uv0;\n"
                      "uniform mat4\tmyPMVMatrix;\n"
                      "uniform vec2 u_offset;\n"
                      "varying vec2\tv_texCoord00;\n"
                      "varying vec2\tv_texCoord02;\n"
                      "varying vec2\tv_texCoord11;\n"
                      "varying vec2\tv_texCoord20;\n"
                      "varying vec2\tv_texCoord22;\n"
                      "void main(void)\n"
                      "{\n"
                      "\tgl_Position = myPMVMatrix * a_pos;\n"
                      "\tv_texCoord00 = a_uv0+vec2(-u_offset.x, -u_offset.y);\n"
                      "\tv_texCoord02 = a_uv0+vec2(-u_offset.x, +u_offset.y);\n"
                      "\tv_texCoord11 = a_uv0;\n"
                      "\tv_texCoord20 = a_uv0+vec2(+u_offset.x, -u_offset.y);\n"
                      "\tv_texCoord22 = a_uv0+vec2(+u_offset.x, +u_offset.y);\n"
                      "}",
                      "#ifdef GL_ES\n"
                      "precision mediump float;  \n"
                      "#endif\n"
                      "varying vec2 v_texCoord00;\n"
                      "varying vec2 v_texCoord02;\n"
                      "varying vec2 v_texCoord11;\n"
                      "varying vec2 v_texCoord20;\n"
                      "varying vec2 v_texCoord22;\n"
                      "uniform vec4 u_c;\n"
                      "uniform sampler2D texture0;\n"
                      "void main (void)\n"
                      "{\n"
                      "\tfloat aa =\n"
                      "       - 0.214 * texture2D(texture0, v_texCoord00).r\n"
                      "\t\t- 0.214 * texture2D(texture0, v_texCoord02).r\n"
                      "\t\t+ 1.000 * texture2D(texture0, v_texCoord11).r\n"
                      "\t\t- 0.214 * texture2D(texture0, v_texCoord20).r\n"
                      "\t\t- 0.214 * texture2D(texture0, v_texCoord22).r;\n"
                      "\tfloat c = min(2.79 * aa, 1.0);\n"
                      "\tgl_FragColor = u_c * c;\n"
                      "}",
                      "");
      }
      v17 = Stage::getInstance((Stage *)MovieClip);
      isInitialized = (Stage *)Stage::isInitialized(v17);
      if ( ((unsigned __int8)isInitialized & 1) == 0 )
      {
        v19 = (Stage *)Stage::getInstance(isInitialized);
        Stage::init(v19, 0, 0, v7, Height);
      }
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall IllegalPlaceRenderer::IllegalPlaceRenderer(__int64 a1, __int64 a2)
    {
      return __ZN20IllegalPlaceRendererC2EP12RenderSystem(a1, a2);
    }

    void __fastcall IllegalPlaceRenderer::~IllegalPlaceRenderer(_QWORD *a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
    
      *a1 = off_100470D50;
      v2 = a1[12];
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      a1[12] = 0;
      v3 = a1[14];
      if ( v3 )
        operator delete[](v3);
      *(_QWORD *)((char *)a1 + 113) = 0;
      *(_QWORD *)((char *)a1 + 108) = 0;
      *(_QWORD *)((char *)a1 + 100) = 0;
      *(_QWORD *)((char *)a1 + 92) = 0;
      Sprite::~Sprite((Sprite *)a1);
    }

    // attributes: thunk
    void __fastcall IllegalPlaceRenderer::~IllegalPlaceRenderer(_QWORD *a1)
    {
      __ZN20IllegalPlaceRendererD2Ev(a1);
    }

    void __fastcall IllegalPlaceRenderer::~IllegalPlaceRenderer(_QWORD *a1)
    {
      IllegalPlaceRenderer::~IllegalPlaceRenderer(a1);
      operator delete(a1);
    }

    __int64 __fastcall IllegalPlaceRenderer::startRender(__int64 a1)
    {
      int v1; // w4
    
      glGetIntegerv(0x8CA6u, (GLint *)(a1 + 92));
      glBindFramebuffer(0x8D40u, IllegalPlaceRenderer::sm_uFBOHandleHalfRes);
      glClear(0x4500u);
      return Renderer::setViewport(0, 0, IllegalPlaceRenderer::sm_imageWidth, IllegalPlaceRenderer::sm_imageHeight, v1);
    }

    __int64 __fastcall IllegalPlaceRenderer::stopRender(__int64 a1)
    {
      long double v1; // q9
      Screen *v2; // x0
      Screen *Width; // x0
      int v4; // w19
      int Height; // w0
      int v6; // w4
      __int64 ClientGlobals; // x0
      Stage *v8; // x0
      Stage *Instance; // x0
      float v10; // s8
      DataLoaderFactory *v11; // x0
      __int64 v12; // x19
      __int64 v14[8]; // [xsp+0h] [xbp-70h] BYREF
      float v15; // [xsp+40h] [xbp-30h] BYREF
      float v16; // [xsp+44h] [xbp-2Ch] BYREF
      float v17; // [xsp+48h] [xbp-28h] BYREF
      float v18; // [xsp+4Ch] [xbp-24h] BYREF
    
      glBindFramebuffer(0x8D40u, *(_DWORD *)(a1 + 92));
      Width = (Screen *)Screen::getWidth(v2);
      v4 = (int)Width;
      Height = Screen::getHeight(Width);
      Renderer::setViewport(0, 0, v4, Height, v6);
      ClientGlobals = LogicDataTables::getClientGlobals();
      v8 = (Stage *)col32ToFloatRGBA(*(_DWORD *)(ClientGlobals + 328), &v18, &v17, &v16, &v15);
      Instance = (Stage *)Stage::getInstance(v8);
      Stage::bindBlendMode(Instance, 0);
      v10 = 2.0 / (float)IllegalPlaceRenderer::sm_imageWidth;
      *(float *)&v1 = 2.0 / (float)IllegalPlaceRenderer::sm_imageHeight;
      Shader::bind((Shader *)IllegalPlaceRenderer::sm_pRenderToScreenShader);
      Shader::setTexture(
        (Shader *)IllegalPlaceRenderer::sm_pRenderToScreenShader,
        IllegalPlaceRenderer::sm_postProcessImageHalfRes,
        "texture0",
        0);
      v11 = (DataLoaderFactory *)Shader::setUniformVector2(
                                   IllegalPlaceRenderer::sm_pRenderToScreenShader,
                                   "u_offset",
                                   v10,
                                   v1);
      v12 = IllegalPlaceRenderer::sm_pRenderToScreenShader;
      Renderer::getPixelMatrix(v14, v11);
      Shader::setUniformMatrix(v12, "myPMVMatrix", v14, 1);
      Shader::setUniformVector4(IllegalPlaceRenderer::sm_pRenderToScreenShader, "u_c", v18, v17, v16, v15);
      Renderer::render(IllegalPlaceRenderer::sm_pScreenQuad, 0, 0xFFFFFFFFLL);
      return Shader::unbind(IllegalPlaceRenderer::sm_pRenderToScreenShader);
    }

    __int64 __fastcall IllegalPlaceRenderer::render(
            __int64 a1,
            __int64 a2,
            const ColorTransform *a3,
            int a4,
            long double a5)
    {
      Stage *v8; // x0
      Stage *Instance; // x19
      __int64 v10; // x21
      Screen *v11; // x0
      Screen *Width; // x0
      int v13; // w20
      int Height; // w0
      _BYTE v16[12]; // [xsp+0h] [xbp-40h] BYREF
      int v17; // [xsp+Ch] [xbp-34h] BYREF
    
      v17 = a4;
      if ( !IllegalPlaceRenderer::sm_illegalPlaceUsed )
        return 0;
      v8 = ColorTransform::ColorTransform((ColorTransform *)v16, (const ColorTransform *)(a1 + 9), a3, &v17);
      Instance = (Stage *)Stage::getInstance(v8);
      if ( (Stage::isCalculatingBounds(Instance) & 1) != 0 )
      {
        v10 = 1;
      }
      else
      {
        Stage::renderBuckets(Instance);
        if ( *(_BYTE *)(a1 + 120) )
          IllegalPlaceRenderer::startRender(a1);
        v10 = IllegalPlaceRenderer::drawTiles(a1, a2, v16, (unsigned int)v17, a5);
        v11 = (Screen *)Stage::renderBuckets(Instance);
        if ( *(_BYTE *)(a1 + 120) )
          v11 = (Screen *)IllegalPlaceRenderer::stopRender(a1);
        Width = (Screen *)Screen::getWidth(v11);
        v13 = (int)Width;
        Height = Screen::getHeight(Width);
        Stage::init(Instance, 0, 0, v13, Height);
      }
      ColorTransform::~ColorTransform((ColorTransform *)v16);
      return v10;
    }

    __int64 __fastcall IllegalPlaceRenderer::drawTiles(
            __int64 a1,
            __int64 a2,
            const ColorTransform *a3,
            int a4,
            long double a5)
    {
      long double v5; // q9
      long double v6; // q11
      __int64 v11; // x24
      VisitHomeMessage *Instance; // x0
      UnbindFacebookAccountMessage *v13; // x22
      int v14; // w23
      int v15; // w22
      __int64 v16; // x4
      __int64 v17; // x8
      _BYTE *v18; // x9
      int v19; // w24
      __int64 v20; // x0
      __int64 v21; // x0
      __int64 v22; // x8
      _BYTE *v23; // x9
      int v24; // w8
      __int64 v25; // x9
      long double v26; // q1
      __int64 v27; // x10
      _BYTE *v28; // x11
      __int64 v30; // x0
      float v31; // s10
      float v32; // s0
      __int64 v33; // x27
      __int64 v34; // x26
      float v35; // s13
      __int64 v36; // x23
      __int64 v37; // x22
      __int64 v38; // x25
      __int64 v39; // x8
      float v40; // s0
      int v41; // w8
      float v43; // s1
      float v44; // s0
      float v45; // s0
      __int64 v47; // [xsp+8h] [xbp-B8h]
      int v48; // [xsp+10h] [xbp-B0h]
      float v49; // [xsp+18h] [xbp-A8h] BYREF
      float v50; // [xsp+1Ch] [xbp-A4h] BYREF
      _BYTE v51[12]; // [xsp+20h] [xbp-A0h] BYREF
      int v52; // [xsp+2Ch] [xbp-94h] BYREF
    
      v52 = a4;
      if ( !GameMode::getInstance()
        || (v11 = *(_QWORD *)(GameMode::getInstance() + 112),
            Instance = (VisitHomeMessage *)GameMode::getInstance(),
            GameMode::getBattleBottomAvatar(Instance),
            (v13 = *(UnbindFacebookAccountMessage **)(v11 + 168)) == 0) )
      {
        LOBYTE(v19) = 0;
        return v19 & 1;
      }
      v14 = (int)LogicBattle::getTilemapWidth(*(UnbindFacebookAccountMessage **)(v11 + 168)) >> 1;
      v48 = (int)LogicBattle::getTilemapHeight(v13) >> 1;
      v15 = v48 * v14;
      v16 = *(_QWORD *)(a1 + 112);
      if ( v16 )
      {
        if ( v15 >= 1 )
        {
          v17 = v48 * v14 + 1LL;
          v18 = (_BYTE *)(v16 + 8LL * v48 * v14 - 3);
          do
          {
            *v18 = 0;
            v18 -= 8;
            --v17;
          }
          while ( v17 > 1 );
          goto LABEL_15;
        }
      }
      else
      {
        if ( is_mul_ok(v15, 8u) )
          v20 = 8LL * v15;
        else
          v20 = -1;
        v21 = operator new[](v20);
        *(_QWORD *)(a1 + 112) = v21;
        if ( v15 >= 1 )
        {
          v22 = v48 * v14 + 1LL;
          v23 = (_BYTE *)(v21 + 8LL * v48 * v14 - 4);
          do
          {
            v23[1] = 0;
            *v23 = 0;
            *((_DWORD *)v23 - 1) = 1050924810;
            --v22;
            v23 -= 8;
          }
          while ( v22 > 1 );
    LABEL_15:
          IllegalPlaceRenderer::buildFreeTileMap();
          v24 = 0;
          v25 = *(_QWORD *)(a1 + 112) + 5LL;
          LODWORD(v26) = 1053609165;
          do
          {
            v27 = v15;
            v28 = (_BYTE *)(v25 + 8LL * (v15 - 1));
            while ( *v28 || !*(v28 - 1) )
            {
              v28 -= 8;
              if ( v27-- <= 1 )
                goto LABEL_25;
            }
            *(v28 - 1) = 0;
            *(float *)(v28 - 5) = -(float)((float)((float)v24++ * 0.018) + 0.4);
            v15 = v27 - 1;
          }
          while ( (int)v27 > 1 );
          goto LABEL_25;
        }
      }
      IllegalPlaceRenderer::buildFreeTileMap();
    LABEL_25:
      LODWORD(v5) = 1065688760;
      (*(void (__fastcall **)(_QWORD, long double, long double))(**(_QWORD **)(a1 + 96) + 40LL))(
        *(_QWORD *)(a1 + 96),
        v5,
        v26);
      ColorTransform::ColorTransform((ColorTransform *)v51, (const ColorTransform *)(*(_QWORD *)(a1 + 96) + 9LL), a3, &v52);
      ColorTransform::copyValuesFrom((ColorTransform *)(*(_QWORD *)(a1 + 96) + 9LL), (const ColorTransform *)v51);
      v30 = *(_QWORD *)(a1 + 96);
      if ( *(_BYTE *)(a1 + 120) )
      {
        (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v30 + 80LL))(v30, 1.0);
      }
      else
      {
        *(_BYTE *)(v30 + 13) = -1;
        *(_BYTE *)(v30 + 14) = 0;
        *(_BYTE *)(v30 + 15) = 0;
        *(_BYTE *)(v30 + 9) = -1;
        *(_WORD *)(v30 + 10) = 0;
        (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v30 + 80LL))(v30, 0.3);
      }
      LODWORD(v31) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(_QWORD))*(_QWORD *)(**(_QWORD **)(a1 + 96) + 96LL))(*(_QWORD *)(a1 + 96)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 88LL))(*(_QWORD *)(a1 + 96));
      if ( v14 < 1 )
      {
        LOBYTE(v19) = 0;
      }
      else
      {
        v33 = 0;
        v34 = 0;
        v19 = 0;
        v35 = v32 * 0.5;
        v47 = v14;
        v36 = 8LL * v14;
        do
        {
          if ( v48 >= 1 )
          {
            v37 = 0;
            v38 = v33;
            do
            {
              v39 = *(_QWORD *)(a1 + 112) + v38;
              v40 = *(float *)v39 + *(float *)&a5;
              *(float *)v39 = v40;
              v41 = *(unsigned __int8 *)(v39 + 4);
              if ( v40 < 0.32 || v41 != 0 )
              {
                v43 = 1.0;
                if ( v40 >= 0.32 )
                  goto LABEL_41;
                v44 = v40 / 0.32;
                v43 = 1.0 - v44;
                if ( v41 )
                  v43 = v44;
                if ( v43 >= 0.0 )
                {
    LABEL_41:
                  if ( v43 <= 1.0 )
                    v45 = v43;
                  else
                    v45 = 1.0;
                }
                else
                {
                  v45 = 0.0;
                }
                *(float *)&v6 = v45 * 1.04;
                (*(void (__fastcall **)(_QWORD, long double))(**(_QWORD **)(a1 + 96) + 40LL))(*(_QWORD *)(a1 + 96), v6);
                RenderSystem::getRenderCoordinate(
                  *(LogicJSONObject **)(a1 + 104),
                  (float)((float)(int)v34 + (float)(int)v34) + 1.0,
                  (float)((float)(int)v37 + (float)(int)v37) + 1.0,
                  0.0,
                  &v50,
                  &v49,
                  1);
                DisplayObject::setXY(
                  *(DisplayObject **)(a1 + 96),
                  v50 - (float)(v35 * *(float *)&v6),
                  v49 - (float)((float)(v31 * 0.5) * *(float *)&v6));
                v19 |= (*(__int64 (__fastcall **)(_QWORD, __int64, const ColorTransform *, _QWORD, long double))(**(_QWORD **)(a1 + 96) + 16LL))(
                         *(_QWORD *)(a1 + 96),
                         a2,
                         a3,
                         v52 | 0x1C0u,
                         a5);
              }
              ++v37;
              v38 += v36;
            }
            while ( v37 < v48 );
          }
          ++v34;
          v33 += 8;
        }
        while ( v34 < v47 );
      }
      ColorTransform::~ColorTransform((ColorTransform *)v51);
      return v19 & 1;
    }

    void IllegalPlaceRenderer::destructStatics()
    {
      void *v0; // x19
      void *v1; // x19
    
      v0 = (void *)IllegalPlaceRenderer::sm_pRenderToScreenShader;
      if ( IllegalPlaceRenderer::sm_pRenderToScreenShader )
      {
        Shader::~Shader((Shader *)IllegalPlaceRenderer::sm_pRenderToScreenShader);
        operator delete(v0);
      }
      IllegalPlaceRenderer::sm_pRenderToScreenShader = 0;
      IllegalPlaceRenderer::sm_illegalPlaceUsed = 0;
      v1 = (void *)IllegalPlaceRenderer::sm_pScreenQuad;
      if ( IllegalPlaceRenderer::sm_pScreenQuad )
      {
        VertexBuffer::~VertexBuffer((#1409 *)IllegalPlaceRenderer::sm_pScreenQuad);
        operator delete(v1);
      }
      IllegalPlaceRenderer::sm_pScreenQuad = 0;
      glDeleteTextures(1, (const GLuint *)&IllegalPlaceRenderer::sm_postProcessImageHalfRes);
      IllegalPlaceRenderer::sm_postProcessImageHalfRes = 0;
      glDeleteFramebuffers(1, (const GLuint *)&IllegalPlaceRenderer::sm_uFBOHandleHalfRes);
      IllegalPlaceRenderer::sm_uFBOHandleHalfRes = 0;
    }

    void __fastcall IllegalPlaceRenderer::buildFreeTileMap(
            __int64 a1,
            __int64 a2,
            int a3,
            int a4,
            __int64 a5,
            tween::Bounce *a6)
    {
      __int64 v10; // x0
      _QWORD *v11; // x20
      int v12; // w8
      int v13; // w24
      __int64 v14; // x25
      __int64 v15; // x26
      __int64 v16; // x27
      __int64 v17; // x28
      AllianceJoinFailedMessage *v18; // x21
      Font *CharacterData; // x22
      __int64 RealOwnerAccountId; // x23
      int NoDeploySizeW; // w23
      int NoDeploySizeH; // w0
      int v23; // w22
      bool v24; // zf
      _DWORD *Position; // x0
      int v26; // w10
      __int64 v27; // x11
      int v28; // w12
      int v29; // w8
      int v30; // w9
      int v31; // w12
      _BYTE *v32; // x14
      _BYTE *v33; // x15
      int v34; // w16
      __int64 v35; // x17
      __int64 v36; // [xsp+0h] [xbp-60h]
      __int64 AccountId; // [xsp+8h] [xbp-58h]
    
      AccountId = LogicClientAvatar::getAccountId(a6);
      LogicGameObjectManager::getGameObjects(*(LogicSpellListener **)(a2 + 64));
      v11 = (_QWORD *)v10;
      v12 = *(_DWORD *)(v10 + 12);
      v13 = v12 - 1;
      if ( v12 >= 1 )
      {
        v14 = 0;
        v15 = a3;
        v16 = a4;
        v36 = a5 + 5;
        v17 = 8LL * a3;
        do
        {
          v18 = *(AllianceJoinFailedMessage **)(*v11 + 8 * v14);
          if ( (*(unsigned int (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)v18 + 152LL))(v18) )
          {
            if ( (*(unsigned int (__fastcall **)(AllianceJoinFailedMessage *))(*(_QWORD *)v18 + 88LL))(v18) == 5 )
            {
              CharacterData = (Font *)LogicCharacter::getCharacterData(v18);
              if ( LogicCharacterData::isBuilding(CharacterData) || LogicCharacterData::isSummoner(CharacterData) )
              {
                RealOwnerAccountId = LogicGameObject::getRealOwnerAccountId(v18);
                if ( (int)LogicCharacterData::getNoDeploySizeW((__int64)CharacterData) >= 1
                  && (LogicLong::equals(RealOwnerAccountId, AccountId) & 1) == 0 )
                {
                  NoDeploySizeW = LogicCharacterData::getNoDeploySizeW((__int64)CharacterData);
                  NoDeploySizeH = LogicCharacterData::getNoDeploySizeH((__int64)CharacterData);
                  v23 = NoDeploySizeH;
                  v24 = !NoDeploySizeW || NoDeploySizeH == 0;
                  if ( !v24 )
                  {
                    Position = (_DWORD *)LogicGameObject::getPosition(v18);
                    v26 = Position[1];
                    LODWORD(v27) = (v26 - 500 * v23) / 1000;
                    v28 = (v26 + 500 * v23) / 1000;
                    if ( (int)v27 < v28 )
                    {
                      v29 = (*Position - 500 * NoDeploySizeW) / 1000;
                      v30 = (*Position + 500 * NoDeploySizeW) / 1000;
                      v27 = (int)v27;
                      v31 = v28 - 1;
                      v32 = (_BYTE *)(v36 + 8 * (v15 * (int)v27 + v29));
                      do
                      {
                        if ( v27 < v16 && (v27 & 0x8000000000000000LL) == 0 )
                        {
                          v33 = v32;
                          v34 = v30 - v29;
                          v35 = v29;
                          if ( v29 < v30 )
                          {
                            do
                            {
                              if ( (v35 & 0x8000000000000000LL) == 0 && v35 < v15 )
                              {
                                *v33 = 1;
                                if ( !*(v33 - 1) )
                                  *(v33 - 1) = 1;
                              }
                              ++v35;
                              --v34;
                              v33 += 8;
                            }
                            while ( v34 );
                          }
                        }
                        v32 += v17;
                        v24 = (_DWORD)v27++ == v31;
                      }
                      while ( !v24 );
                    }
                  }
                }
              }
            }
          }
          v24 = (_DWORD)v14++ == v13;
        }
        while ( !v24 );
      }
    }

}; // end class IllegalPlaceRenderer
