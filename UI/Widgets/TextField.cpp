class TextField
{
public:

    void __fastcall TextField::TextField(TextField *this)
    {
      DisplayObject::DisplayObject((__int64)this);
      *(_QWORD *)this = off_100476960;
      String::String((__int64)this + 88);
      String::String((__int64)this + 144);
      TextField::initializeMembers(this);
    }

    void __fastcall TextField::~TextField(VertexBuffer *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_100476960;
      v2 = *((_QWORD *)this + 23);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
      *((_QWORD *)this + 23) = 0;
      TextField::initializeMembers(this);
      String::~String((__int64)this + 144);
      String::~String((__int64)this + 88);
      DisplayObject::~DisplayObject((__int64)this);
    }

    void __fastcall TextField::~TextField(VertexBuffer *this)
    {
      TextField::~TextField(this);
    }

    void __fastcall TextField::~TextField(VertexBuffer *a1)
    {
      TextField::~TextField(a1);
      operator delete(a1);
    }

    __int64 __fastcall TextField::createTextField(int16x4_t *this, const _guard_variable_for_Assert *a2)
    {
      __int64 v3; // x19
      int8x16_t v4; // q0
      String *v5; // x1
      char v6; // w8
      __int16 v7; // w9
      const char *v8; // x1
      String v10; // [xsp+8h] [xbp-38h] BYREF
    
      v3 = operator new(224);
      TextField::TextField((TextField *)v3);
      v4 = (int8x16_t)vcvtq_f32_s32(vmovl_s16(*(this + 2)));
      *(_QWORD *)(v3 + 120) = v4.i64[0];
      *(_QWORD *)(v3 + 128) = vextq_s8(v4, v4, 8u).u64[0];
      *(_BYTE *)(v3 + 87) = *((_BYTE *)this + 42);
      v5 = (String *)*((_QWORD *)this + 1);
      if ( v5 )
        String::operator=((String *)(v3 + 88), v5);
      v6 = *((_BYTE *)this + 41);
      *(_BYTE *)(v3 + 82) = (v6 & 4) != 0;
      *(_BYTE *)(v3 + 83) = (v6 & 8) != 0;
      *(_DWORD *)(v3 + 64) = *((_DWORD *)this + 6);
      *(_DWORD *)(v3 + 68) = *((_DWORD *)this + 7);
      v7 = *((unsigned __int8 *)this + 43);
      *(_WORD *)(v3 + 116) = v7;
      *(_BYTE *)(v3 + 118) = v7;
      *(_BYTE *)(v3 + 84) = (v6 & 0x10) != 0;
      *(_BYTE *)(v3 + 81) = (v6 & 2) != 0;
      v8 = (const char *)*((_QWORD *)this + 4);
      if ( v8 )
      {
        String::String(&v10, v8, *((unsigned __int8 *)this + 40));
        String::operator=((String *)(v3 + 144), &v10);
        String::~String((__int64)&v10);
        v6 = *((_BYTE *)this + 41);
      }
      *(_BYTE *)(v3 + 74) = TextField::sm_showWarningsAboutLongTexts ^ 1;
      *(_BYTE *)(v3 + 80) = v6 & 1;
      *(_BYTE *)(v3 + 75) = (v6 & 0x20) != 0;
      return v3;
    }

    __int64 __fastcall TextField::setAlign(__int64 this, char a2)
    {
      *(_BYTE *)(this + 87) = a2;
      return this;
    }

    __int64 __fastcall TextField::render(VertexBuffer *this, DataLoaderShader *a2, BitmapFont *a3, int a4, float a5)
    {
      float v8; // s0
      __int64 Instance; // x0
      bool isCalculatingBounds; // w0
      __int64 v11; // x19
      _BYTE v13[8]; // [xsp+8h] [xbp-48h] BYREF
      _BYTE v14[28]; // [xsp+10h] [xbp-40h] BYREF
      int v15; // [xsp+2Ch] [xbp-24h] BYREF
    
      v15 = a4;
      Matrix2x3::Matrix2x3((Matrix2x3 *)v14, (VertexBuffer *)((char *)this + 16), a2);
      ColorTransform::ColorTransform(v13, (unsigned __int8 *)this + 9, (unsigned __int8 *)a3, &v15);
      v15 |= *((_DWORD *)this + 10);
      LODWORD(a3) = v15;
      v8 = fmod((float)(*((float *)this + 28) + a5), 1.0);
      *((float *)this + 28) = v8;
      Instance = Stage::getInstance();
      isCalculatingBounds = Stage::isCalculatingBounds(Instance);
      v11 = TextField::shapeRender(
              this,
              (const DataLoaderShader *)v14,
              (const BitmapFont *)v13,
              (int)a3,
              !isCalculatingBounds);
      ColorTransform::~ColorTransform();
      Matrix2x3::~Matrix2x3((DataLoaderShader *)v14);
      return v11;
    }

    bool __fastcall TextField::shapeRender(
            VertexBuffer *this,
            const DataLoaderShader *a2,
            const BitmapFont *a3,
            int a4,
            int a5)
    {
      float v9; // s0
      float v10; // s1
      float v11; // s3
      float v12; // s4
      float v13; // s5
      float v14; // s6
      float v15; // s7
      float v16; // s8
      float v17; // s17
      float v18; // s9
      float v19; // s13
      float v20; // s15
      float v21; // s1
      float v22; // s18
      float v23; // s10
      float v24; // s11
      float v25; // s12
      float v26; // s14
      int v27; // w21
      float v28; // s9
      float v29; // s11
      float v30; // s12
      float v31; // s14
      float v32; // s10
      __int64 Instance; // x0
      int v34; // w24
      float v35; // s0
      int v36; // w22
      float v37; // s8
      __int64 v38; // x0
      float v39; // s8
      int v40; // w0
      __int64 CachedFontFormatter; // x0
      __int64 v42; // x22
      float v43; // s14
      float TextLeft; // s0
      float v45; // s10
      float v46; // s8
      float v47; // s11
      float v48; // s12
      float v49; // s0
      float v50; // s1
      float v51; // s3
      float v52; // s4
      float v53; // s5
      float v54; // s6
      float v55; // s16
      float v56; // s17
      float v57; // s7
      float v58; // s0
      float v59; // s18
      bool v60; // cc
      float v61; // s20
      float v62; // s19
      float v63; // s20
      float v64; // s5
      float v65; // s4
      float v66; // s1
      float v67; // s6
      float v68; // s19
      float v69; // s7
      float v70; // s2
      float v71; // s16
      float v72; // s1
      float v73; // s1
      float v74; // s1
      float v75; // s2
      float v76; // s3
      float v77; // s4
      float v78; // s5
      float v79; // s5
      float v80; // s6
      float v81; // s6
      float v82; // s4
      float v83; // s0
      float v84; // s0
      __int64 v85; // x25
      unsigned int v86; // w8
      unsigned int v87; // w21
      unsigned int v88; // w9
      unsigned int v89; // w9
      unsigned int v90; // w26
      int v91; // w17
      unsigned int v92; // w9
      unsigned int v93; // w22
      unsigned __int64 v94; // x10
      unsigned int v95; // w27
      unsigned int v96; // w12
      unsigned int v97; // w13
      unsigned int v98; // w8
      unsigned int v99; // w16
      unsigned int v100; // w23
      int v101; // w9
      int v102; // w10
      int v103; // w9
      int v104; // w8
      MappedFile *v105; // x0
      __int64 v106; // x24
      int v107; // w28
      float v108; // s9
      __int64 v109; // x25
      char v110; // w23
      int v111; // w8
      float v112; // s0
      float v113; // s8
      __int64 v114; // x0
      float v115; // s15
      int v116; // w0
      float v117; // s3
      float v118; // s13
      float v119; // s14
      float v120; // s2
      float v121; // s1
      int v122; // w23
      unsigned int v123; // w8
      unsigned int v124; // w8
      unsigned int v125; // w8
      unsigned __int8 v126; // w25
      float v127; // s0
      float v128; // s1
      float v129; // s2
      float v130; // s4
      float v131; // s16
      float v132; // s5
      float *FontFormatter; // x26
      char v134; // w10
      int v135; // w21
      int v136; // w28
      int v137; // w22
      char v138; // w25
      float v139; // s0
      int v140; // w27
      internal_t *p_internal; // x8
      const char *v142; // x9
      int v143; // w0
      int v144; // w27
      float v145; // s0
      float v146; // s1
      float v147; // s2
      float v148; // s0
      float v149; // s1
      float v150; // s3
      float v151; // s4
      float v152; // s11
      float v153; // s10
      float v154; // s12
      float v155; // s15
      float v156; // s14
      float v157; // s13
      float v158; // s0
      float v159; // s9
      float v160; // s8
      unsigned __int16 v161; // w9
      unsigned __int16 v162; // w10
      unsigned __int16 v163; // w8
      unsigned __int16 v164; // w11
      unsigned int v165; // w14
      unsigned int v166; // w15
      unsigned int v167; // w13
      unsigned int v168; // w12
      float v169; // s7
      float v170; // s6
      float v171; // s2
      float v172; // s3
      float v173; // s5
      float v174; // s4
      float v175; // s0
      float v176; // s1
      __int64 v177; // x13
      unsigned __int16 v178; // w14
      int v179; // w9
      unsigned __int16 v180; // w15
      int v181; // w8
      int v182; // w11
      __int64 v183; // x12
      int v184; // w15
      __int64 v185; // x14
      int v186; // w15
      __int64 v187; // x12
      float v188; // s8
      float *v189; // x8
      float v190; // w25
      float v191; // s8
      float *v192; // x8
      float v193; // w8
      float *v194; // x9
      float v195; // w9
      float *v196; // x10
      float v197; // s8
      long double v198; // q0
      float v199; // s8
      long double v200; // q0
      int v201; // w0
      float v202; // s2
      float v203; // s3
      int v205; // [xsp+18h] [xbp-228h]
      int v206; // [xsp+1Ch] [xbp-224h]
      int v207; // [xsp+20h] [xbp-220h]
      unsigned int v208; // [xsp+24h] [xbp-21Ch]
      float v210; // [xsp+30h] [xbp-210h]
      float v211; // [xsp+34h] [xbp-20Ch]
      float v212; // [xsp+38h] [xbp-208h]
      float v213; // [xsp+3Ch] [xbp-204h]
      char v214; // [xsp+40h] [xbp-200h]
      int v215; // [xsp+44h] [xbp-1FCh]
      unsigned int v216; // [xsp+50h] [xbp-1F0h]
      float v217; // [xsp+54h] [xbp-1ECh]
      AvatarRankingEntry *v218; // [xsp+58h] [xbp-1E8h]
      float v219; // [xsp+64h] [xbp-1DCh]
      float v220; // [xsp+68h] [xbp-1D8h]
      float v221; // [xsp+6Ch] [xbp-1D4h]
      float v222; // [xsp+70h] [xbp-1D0h]
      float v223; // [xsp+80h] [xbp-1C0h]
      float v224; // [xsp+90h] [xbp-1B0h]
      unsigned int v225; // [xsp+A0h] [xbp-1A0h]
      float v226; // [xsp+A0h] [xbp-1A0h]
      float v227; // [xsp+B4h] [xbp-18Ch]
      float v228; // [xsp+B8h] [xbp-188h]
      float v229; // [xsp+BCh] [xbp-184h]
      float v230; // [xsp+C0h] [xbp-180h]
      float v231; // [xsp+C0h] [xbp-180h]
      float v232; // [xsp+C4h] [xbp-17Ch]
      unsigned int v233; // [xsp+C4h] [xbp-17Ch]
      float v234; // [xsp+C8h] [xbp-178h]
      __int16 v235; // [xsp+C8h] [xbp-178h]
      float v236; // [xsp+CCh] [xbp-174h]
      char v237; // [xsp+CCh] [xbp-174h]
      float v238; // [xsp+D0h] [xbp-170h]
      unsigned int v239; // [xsp+D0h] [xbp-170h]
      float v240; // [xsp+DCh] [xbp-164h]
      float v241; // [xsp+DCh] [xbp-164h]
      float v242; // [xsp+E0h] [xbp-160h]
      float v243; // [xsp+E0h] [xbp-160h]
      float v244; // [xsp+E0h] [xbp-160h]
      float v245; // [xsp+FCh] [xbp-144h]
      float v246; // [xsp+FCh] [xbp-144h]
      float v247; // [xsp+100h] [xbp-140h]
      float v248; // [xsp+100h] [xbp-140h]
      float PointSize; // [xsp+104h] [xbp-13Ch]
      unsigned __int8 v250[8]; // [xsp+108h] [xbp-138h] BYREF
      float v251; // [xsp+110h] [xbp-130h] BYREF
      float v252; // [xsp+114h] [xbp-12Ch] BYREF
      float v253; // [xsp+118h] [xbp-128h] BYREF
      float v254; // [xsp+11Ch] [xbp-124h] BYREF
      String v255; // [xsp+120h] [xbp-120h] BYREF
      String v256; // [xsp+138h] [xbp-108h] BYREF
      _WORD v257[2]; // [xsp+150h] [xbp-F0h] BYREF
      unsigned __int16 v258; // [xsp+154h] [xbp-ECh]
      unsigned __int16 v259; // [xsp+156h] [xbp-EAh]
      __int16 v260; // [xsp+158h] [xbp-E8h]
      __int16 v261; // [xsp+15Ah] [xbp-E6h]
      __int16 v262; // [xsp+15Ch] [xbp-E4h]
      __int16 v263; // [xsp+15Eh] [xbp-E2h]
      unsigned __int16 v264; // [xsp+160h] [xbp-E0h]
      unsigned __int8 v265; // [xsp+162h] [xbp-DEh]
      unsigned __int8 v266; // [xsp+163h] [xbp-DDh]
      unsigned __int8 v267; // [xsp+164h] [xbp-DCh]
      float v268; // [xsp+168h] [xbp-D8h] BYREF
      float v269; // [xsp+16Ch] [xbp-D4h] BYREF
      float v270; // [xsp+170h] [xbp-D0h] BYREF
      float v271; // [xsp+174h] [xbp-CCh] BYREF
      String v272; // [xsp+178h] [xbp-C8h] BYREF
      String v273; // [xsp+190h] [xbp-B0h] BYREF
      bool v274; // [xsp+1AFh] [xbp-91h] BYREF
    
      v9 = *((float *)this + 30);
      v10 = *((float *)this + 31);
      v11 = *((float *)a2 + 1);
      v12 = v9 * *(float *)a2;
      v13 = *((float *)a2 + 2);
      v14 = *((float *)a2 + 3);
      v15 = v10 * v13;
      v16 = v12 + (float)(v10 * v13);
      v17 = v10 * v14;
      v18 = (float)(v9 * v11) + (float)(v10 * v14);
      v20 = *((float *)a2 + 4);
      v19 = *((float *)a2 + 5);
      v21 = *((float *)this + 32);
      v22 = *((float *)this + 33);
      v242 = *(float *)a2 * v21;
      v23 = v15 + v242;
      v245 = v11 * v21;
      v24 = v17 + (float)(v11 * v21);
      v238 = v13 * v22;
      v240 = v14 * v22;
      v25 = v12 + (float)(v13 * v22);
      v26 = (float)(v9 * v11) + (float)(v14 * v22);
      v27 = *((unsigned __int8 *)this + 85) + *((_DWORD *)this + 36);
      if ( !*((_QWORD *)this + 17) && v27 >= 1 )
      {
        TextField::fetchFont(this);
        v21 = *((float *)this + 32);
        v9 = *((float *)this + 30);
      }
      v28 = v19 + v18;
      v212 = v28;
      v213 = v20 + v16;
      v247 = v20 + v23;
      v29 = v19 + v24;
      v30 = v20 + v25;
      v31 = v19 + v26;
      v32 = v21 - v9;
      Instance = Stage::getInstance();
      PointSize = Stage::getPointSize(Instance);
      v34 = a5 & ~(v27 == 1 && *((_BYTE *)this + 85) != 0);
      v35 = v28;
      v220 = v20 + v16;
      v221 = v28;
      v219 = v20 + v16;
      if ( !*((_QWORD *)this + 17) )
        goto LABEL_44;
      v35 = v28;
      v220 = v20 + v16;
      v221 = v28;
      v219 = v20 + v16;
      if ( !v34 )
        goto LABEL_44;
      v36 = *((unsigned __int8 *)this + 87);
      v37 = (float)*((__int16 *)this + 58);
      v38 = Stage::getInstance();
      v39 = v37 * Stage::getPointSize(v38);
      v40 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 88LL))(*((_QWORD *)this + 17));
      CachedFontFormatter = TextField::getCachedFontFormatter(
                              this,
                              v32 * PointSize,
                              v36,
                              v39 / (float)v40,
                              *((_BYTE *)this + 84));
      v42 = CachedFontFormatter;
      v219 = v213;
      v35 = v28;
      v220 = v213;
      v221 = v28;
      if ( CachedFontFormatter )
      {
        v230 = v31;
        v232 = v30;
        v234 = v29;
        v236 = v32;
        v43 = (*(float (__fastcall **)(__int64))(*(_QWORD *)CachedFontFormatter + 32LL))(CachedFontFormatter) / PointSize;
        TextLeft = CachedFontFormatter::getTextLeft(v42);
        v45 = *((float *)this + 31);
        v46 = (float)(TextLeft / PointSize) + *((float *)this + 30);
        v47 = *((float *)a2 + 4) + (float)((float)(v46 * *(float *)a2) + (float)(v45 * *((float *)a2 + 2)));
        v48 = *((float *)a2 + 5) + (float)((float)(v46 * *((float *)a2 + 1)) + (float)(v45 * *((float *)a2 + 3)));
        v49 = v46 + (float)(CachedFontFormatter::getTextWidth(v42) / PointSize);
        v50 = v43 + *((float *)this + 31);
        v51 = *((float *)a2 + 1);
        v52 = v49 * *(float *)a2;
        v53 = *((float *)a2 + 2);
        v54 = *((float *)a2 + 3);
        v55 = *((float *)a2 + 4);
        v56 = *((float *)a2 + 5);
        v57 = v55 + (float)(v52 + (float)(v45 * v53));
        v58 = v49 * v51;
        v59 = v56 + (float)(v58 + (float)(v45 * v54));
        v60 = v57 <= v47;
        if ( v57 < v47 )
          v61 = v55 + (float)(v52 + (float)(v45 * v53));
        else
          v61 = v47;
        if ( v57 <= v47 )
          v57 = v47;
        if ( v60 )
          v62 = v61;
        else
          v62 = v47;
        if ( v59 > v48 )
          v63 = v56 + (float)(v58 + (float)(v45 * v54));
        else
          v63 = v48;
        if ( v59 >= v48 )
          v59 = v48;
        else
          v63 = v48;
        v64 = v50 * v53;
        v65 = v55 + (float)(v52 + v64);
        v66 = v50 * v54;
        v35 = v56 + (float)(v58 + v66);
        if ( v65 > v57 )
          v67 = v65;
        else
          v67 = v57;
        if ( v65 >= v62 )
          v65 = v62;
        else
          v67 = v57;
        if ( v35 < v59 )
          v68 = v35;
        else
          v68 = v59;
        if ( v35 > v63 )
        {
          v69 = v59;
        }
        else
        {
          v35 = v63;
          v69 = v68;
        }
        v70 = v55 + (float)((float)(v46 * *(float *)a2) + v64);
        v71 = v56 + (float)((float)(v46 * v51) + v66);
        if ( v70 > v67 )
          v72 = v70;
        else
          v72 = v67;
        if ( v70 < v65 )
          v72 = v67;
        v220 = v72;
        v221 = v69;
        if ( v70 >= v65 )
          v73 = v65;
        else
          v73 = v70;
        v219 = v73;
        if ( v71 >= v69 )
        {
          v29 = v234;
          v32 = v236;
          v31 = v230;
          v30 = v232;
          if ( v71 > v35 )
            goto LABEL_82;
        }
        else
        {
          v221 = v71;
          v29 = v234;
          v32 = v236;
          v31 = v230;
          v30 = v232;
        }
    LABEL_44:
        v71 = v35;
        if ( v34 )
          goto LABEL_82;
      }
      v74 = v20 + (float)(v242 + v238);
      v75 = v19 + (float)(v245 + v240);
      v76 = v220;
      if ( v247 < v219 )
        v77 = v247;
      else
        v77 = v219;
      if ( v247 > v220 )
      {
        v76 = v247;
        v77 = v219;
      }
      if ( v29 > v35 )
        v78 = v29;
      else
        v78 = v35;
      if ( v29 < v221 )
      {
        v79 = v29;
      }
      else
      {
        v35 = v78;
        v79 = v221;
      }
      if ( v74 > v76 )
        v80 = v20 + (float)(v242 + v238);
      else
        v80 = v76;
      if ( v74 >= v77 )
      {
        v76 = v80;
        v74 = v77;
      }
      if ( v75 < v79 )
        v81 = v19 + (float)(v245 + v240);
      else
        v81 = v79;
      if ( v75 <= v35 )
        v71 = v35;
      else
        v71 = v19 + (float)(v245 + v240);
      if ( v75 <= v35 )
        v82 = v81;
      else
        v82 = v79;
      if ( v30 > v76 )
        v83 = v30;
      else
        v83 = v76;
      if ( v30 < v74 )
        v83 = v76;
      v220 = v83;
      v221 = v82;
      if ( v30 >= v74 )
        v84 = v74;
      else
        v84 = v30;
      v219 = v84;
      if ( v31 >= v82 )
      {
        if ( v31 > v71 )
          v71 = v31;
      }
      else
      {
        v221 = v31;
      }
    LABEL_82:
      v218 = 0;
      v85 = *((_QWORD *)this + 17);
      if ( v27 < 1 )
      {
        v217 = v71;
      }
      else
      {
        v217 = v71;
        if ( v85 )
          v218 = (AvatarRankingEntry *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v85 + 40LL))(v85);
      }
      v87 = *((_DWORD *)this + 16);
      v86 = *((_DWORD *)this + 17);
      if ( (a4 & 7) == 7 )
      {
        v88 = (11 * (unsigned __int8)*((_DWORD *)this + 16)
             + 59 * (unsigned __int8)BYTE1(*((_DWORD *)this + 16))
             + 30 * (unsigned int)(unsigned __int8)BYTE2(*((_DWORD *)this + 16)))
            / 0x64;
        v87 = v88 | v87 & 0xFF000000 | (v88 << 16) | (v88 << 8);
        v89 = (11 * (unsigned __int8)*((_DWORD *)this + 17)
             + 59 * (unsigned __int8)BYTE1(*((_DWORD *)this + 17))
             + 30 * (unsigned int)(unsigned __int8)BYTE2(*((_DWORD *)this + 17)))
            / 0x64;
        v86 = v89 | v86 & 0xFF000000 | (v89 << 16) | (v89 << 8);
      }
      v90 = *((unsigned __int8 *)a3 + 4);
      v91 = *((unsigned __int8 *)a3 + 5);
      v92 = a4 & 0xFFFFFFC0;
      v93 = *((unsigned __int8 *)a3 + 6);
      if ( v86 )
      {
        v94 = 2155905153LL * *((unsigned __int8 *)a3 + 3) * HIBYTE(v86);
        v95 = *((unsigned __int8 *)a3 + 3) * HIBYTE(v86) / 0xFFu;
        v96 = *(unsigned __int8 *)a3 * (unsigned int)BYTE2(v86) / 0xFF;
        v97 = *((unsigned __int8 *)a3 + 1) * (unsigned int)BYTE1(v86) / 0xFF;
        v98 = *((unsigned __int8 *)a3 + 2) * (unsigned int)(unsigned __int8)v86 / 0xFF;
        v99 = v93 + (unsigned __int8)v98;
        v100 = v92 | 0x10;
        v101 = (unsigned __int8)(v96 + v90);
        if ( v90 + (unsigned __int8)v96 > 0xFF )
          v101 = 255;
        v102 = (unsigned __int8)(v94 >> 39);
        v90 = v101 * v102 / 0xFFu;
        v103 = (unsigned __int8)(v97 + v91);
        if ( v91 + (unsigned int)(unsigned __int8)v97 > 0xFF )
          v103 = 255;
        v225 = v103 * v102 / 0xFFu;
        v104 = (unsigned __int8)(v98 + v93);
        if ( v99 > 0xFF )
          v104 = 255;
        v93 = v104 * v102 / 0xFFu;
      }
      else
      {
        LOBYTE(v225) = *((_BYTE *)a3 + 5);
        LOBYTE(v95) = 0;
        v100 = v92 | 8;
      }
      v216 = v100;
      v274 = 0;
      v105 = (MappedFile *)Stage::getInstance();
      v106 = (__int64)v105;
      if ( TextField::sm_renderOutlinesFirst )
        v107 = (unsigned __int8)v95 == 0;
      else
        v107 = 1;
      if ( !(unsigned int)Stage::shapeStart(v105, v219, v221, v220, v217, v218, v100, &v274) )
        return v274;
      if ( !v85 )
      {
        if ( !*((_BYTE *)this + 74) )
        {
          *((_BYTE *)this + 74) = 1;
          TextField::getTextForDebugger((__int64 *)&v272.m_length, this);
          operator+("no font set for TextField: ", (__int64)&v272, (__int64)&v273);
          Debugger::warning(&v273);
          String::~String((__int64)&v273);
          String::~String((__int64)&v272);
        }
        return v274;
      }
      if ( *((_BYTE *)this + 75) )
      {
        v108 = v31;
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v85 + 32LL))(v85) == 1 )
        {
          v109 = *((_QWORD *)this + 17);
          v110 = v90;
          v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v109 + 112LL))(v109);
          v111 = v90 - (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v109 + 88LL))(v109);
          LOBYTE(v90) = v110;
          v112 = (float)v111;
          goto LABEL_109;
        }
      }
      else
      {
        v108 = v31;
      }
      v112 = 0.0;
    LABEL_109:
      v243 = v112;
      v113 = (float)*((__int16 *)this + 58);
      v114 = Stage::getInstance();
      v115 = Stage::getPointSize(v114);
      v116 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 88LL))(*((_QWORD *)this + 17));
      v117 = v247 - v213;
      v118 = v29 - v212;
      v119 = v247 - v213;
      v246 = v30 - v213;
      v248 = v108 - v212;
      v120 = sqrtf((float)(v246 * v246) + (float)(v248 * v248));
      if ( sqrtf((float)(v119 * v119) + (float)(v118 * v118)) > 0.0 )
      {
        v119 = v117 / v32;
        v118 = v118 / v32;
      }
      v121 = *((float *)this + 33) - *((float *)this + 31);
      v227 = v121;
      if ( v120 > 0.0 )
      {
        v246 = v246 / v121;
        v248 = v248 / v121;
      }
      v122 = 0;
      v211 = (float)(v113 * v115) / (float)v116;
      v208 = HIBYTE(v87);
      v207 = BYTE2(v87);
      v206 = BYTE1(v87);
      v205 = (unsigned __int8)v87;
      v210 = v32 * PointSize;
      v228 = v243 / PointSize;
      do
      {
        if ( v107 == 1 )
        {
          v239 = *((unsigned __int8 *)a3 + 3) * v208 / 0xFF;
          v123 = *((unsigned __int8 *)a3 + 4) + (unsigned __int8)((unsigned int)*(unsigned __int8 *)a3 * v207 / 0xFF);
          if ( v123 > 0xFF )
            LOBYTE(v123) = -1;
          v237 = v123;
          v124 = *((unsigned __int8 *)a3 + 5) + (unsigned __int8)((unsigned int)*((unsigned __int8 *)a3 + 1) * v206 / 0xFF);
          if ( v124 > 0xFF )
            LOWORD(v124) = 255;
          v235 = v124;
          v125 = *((unsigned __int8 *)a3 + 6) + (unsigned __int8)((unsigned int)*((unsigned __int8 *)a3 + 2) * v205 / 0xFF);
          if ( v125 > 0xFF )
            v125 = 255;
          v233 = v125;
        }
        else
        {
          v233 = 0;
          v235 = 0;
          v237 = 0;
          LOBYTE(v239) = 0;
        }
        v215 = v107;
        if ( *((_BYTE *)this + 73) )
        {
          v126 = v90;
          v127 = ceilf(v213);
          v128 = ceilf(v212);
          if ( fabsf(v119 - PointSize) <= 0.01 )
            v129 = PointSize;
          else
            v129 = v119;
          if ( fabsf(v118 - PointSize) <= 0.01 )
            v130 = PointSize;
          else
            v130 = v118;
          v131 = v248;
          if ( fabsf(v246 - PointSize) <= 0.01 )
            v132 = PointSize;
          else
            v132 = v246;
          v231 = v127;
          v229 = v128;
          if ( fabsf(v248 - PointSize) <= 0.01 )
            v131 = PointSize;
          v248 = v131;
          v246 = v132;
          v118 = v130;
          v119 = v129;
        }
        else
        {
          v126 = v90;
          v231 = v213;
          v229 = v212;
        }
        v241 = v119;
        v244 = v118;
        v270 = 0.0;
        v271 = 0.0;
        v268 = 0.0;
        v269 = 0.0;
        FontFormatter = (float *)TextField::createFontFormatter(
                                   this,
                                   v210,
                                   *((unsigned __int8 *)this + 87),
                                   v211,
                                   *((_BYTE *)this + 84),
                                   *((_BYTE *)this + 78));
        TextField::updateCursorPosition(this);
        if ( (**(unsigned int (__fastcall ***)(float *, _WORD *))FontFormatter)(FontFormatter, v257) )
        {
          v134 = 0;
          v135 = 0;
          v136 = ((unsigned __int8)v95 << 24) | 0xFFFFFF;
          v137 = (((unsigned __int8)v93 << 16) | ((unsigned __int8)v225 << 8)) & 0xFFFFFF
               | v126
               | ((unsigned __int8)v95 << 24);
          v223 = 0.0;
          v222 = 0.0;
          v226 = 0.0;
          v224 = 0.0;
    LABEL_139:
          v214 = v134;
          v138 = v134;
          do
          {
            v139 = FontFormatter[3];
            if ( v139 != 0.0
              && (float)((float)(v139 / PointSize)
                       + (float)((*(float (__fastcall **)(float *))(*(_QWORD *)FontFormatter + 48LL))(FontFormatter)
                               / PointSize)) > v227
              && !*((_BYTE *)this + 74) )
            {
              *((_BYTE *)this + 74) = 1;
              v140 = *((unsigned __int8 *)this + 84);
              TextField::getTextForDebugger((__int64 *)&v255.m_length, this);
              p_internal = &v255.internal;
              if ( v255.m_bytes + 1 >= 9 )
                p_internal = (internal_t *)v255.internal.pHeap;
              v142 = "s.-line";
              if ( v140 )
                v142 = "m.-line";
              String::format((String *)"Long text in %s TextField: %s", (__int64)&v256, v142, p_internal);
              Debugger::warning(&v256);
              String::~String((__int64)&v256);
              String::~String((__int64)&v255);
            }
            v143 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)FontFormatter + 88LL))(FontFormatter);
            v144 = v143;
            if ( ((v122 ^ v143) & 1) != 0 )
            {
              if ( v143 )
              {
                v122 = 1;
                Stage::shapeStart((MappedFile *)v106, v219, v221, v220, v217, v218, 1u, &v274);
              }
              else
              {
                Stage::shapeStart((MappedFile *)v106, v219, v221, v220, v217, v218, v216, &v274);
                v122 = 0;
              }
            }
            v145 = FontFormatter[2];
            v146 = FontFormatter[3];
            v147 = (float)(v231 + (float)((float)(v246 * v146) / PointSize)) + (float)((float)(v119 * v145) / PointSize);
            v148 = (float)((float)(v229 + (float)((float)(v248 * v146) / PointSize)) + v228)
                 + (float)((float)(v118 * v145) / PointSize);
            v149 = (float)v260 / PointSize;
            v150 = (float)v261 / PointSize;
            v151 = (float)v262 / PointSize;
            v152 = v147 + (float)(v119 * v149);
            v153 = v246 * v150;
            v154 = v148 + (float)(v118 * v149);
            v155 = v248 * v150;
            v156 = v147 + (float)(v119 * v151);
            v157 = v148 + (float)(v118 * v151);
            v158 = (float)v263 / PointSize;
            v159 = v246 * v158;
            v160 = v248 * v158;
            Stage::addQuad(v106);
            v161 = v257[0];
            v162 = v257[1];
            v163 = v258;
            v164 = v259;
            v166 = v233;
            LOWORD(v165) = v235;
            LOBYTE(v167) = v237;
            LOBYTE(v168) = v239;
            if ( (_BYTE)v264 )
            {
              v168 = *((unsigned __int8 *)a3 + 3) * HIBYTE(v264) / 0xFFu;
              v167 = *((unsigned __int8 *)a3 + 4) + (unsigned __int8)(*(unsigned __int8 *)a3 * (unsigned int)v265 / 0xFF);
              if ( v167 > 0xFF )
                LOBYTE(v167) = -1;
              v165 = *((unsigned __int8 *)a3 + 5)
                   + (unsigned __int8)(*((unsigned __int8 *)a3 + 1) * (unsigned int)v266 / 0xFF);
              if ( v165 > 0xFF )
                LOWORD(v165) = 255;
              v166 = *((unsigned __int8 *)a3 + 6)
                   + (unsigned __int8)(*((unsigned __int8 *)a3 + 2) * (unsigned int)v267 / 0xFF);
              if ( v166 > 0xFF )
                v166 = 255;
            }
            v169 = v152 + v153;
            v170 = v154 + v155;
            v171 = v153 + v156;
            v172 = v155 + v157;
            v173 = v152 + v159;
            v174 = v154 + v160;
            v175 = v156 + v159;
            v176 = v157 + v160;
            if ( v144 )
            {
              v177 = *(int *)(v106 + 396);
              v178 = v257[0];
              v179 = v257[0] | (v259 << 16);
              v180 = v258;
              v181 = v258 | (v259 << 16);
              v182 = ((unsigned __int8)v168 << 24) | 0xFFFFFF;
              v183 = *(_QWORD *)(v106 + 384) + 20 * v177;
              *(float *)v183 = v169;
              *(float *)(v183 + 4) = v170;
              *(_DWORD *)(v183 + 8) = v178 | (v162 << 16);
              *(_DWORD *)(v183 + 12) = v182;
              *(_DWORD *)(v183 + 16) = v136;
              *(float *)(v183 + 20) = v173;
              *(float *)(v183 + 24) = v174;
              *(_DWORD *)(v183 + 28) = v179;
              *(_DWORD *)(v183 + 32) = v182;
              *(_DWORD *)(v183 + 36) = v136;
              *(float *)(v183 + 40) = v171;
              *(float *)(v183 + 44) = v172;
              *(_DWORD *)(v183 + 48) = v180 | (v162 << 16);
              *(_DWORD *)(v183 + 52) = v182;
              *(_DWORD *)(v183 + 56) = v136;
              *(_DWORD *)(v106 + 396) = v177 + 4;
              *(float *)(v183 + 60) = v175;
              *(float *)(v183 + 64) = v176;
              *(_DWORD *)(v183 + 68) = v181;
              *(_DWORD *)(v183 + 72) = v182;
              *(_DWORD *)(v183 + 76) = v136;
            }
            else
            {
              v184 = (v166 << 16) | (unsigned __int16)((_WORD)v165 << 8);
              v185 = *(int *)(v106 + 396);
              v186 = v184 & 0xFFFF00 | (unsigned __int8)v167 | ((unsigned __int8)v168 << 24);
              v187 = *(_QWORD *)(v106 + 384) + 20 * v185;
              *(float *)v187 = v169;
              *(float *)(v187 + 4) = v170;
              *(_DWORD *)(v187 + 8) = v161 | (v162 << 16);
              *(_DWORD *)(v187 + 12) = v186;
              *(_DWORD *)(v187 + 16) = v137;
              *(float *)(v187 + 20) = v173;
              *(float *)(v187 + 24) = v174;
              *(_DWORD *)(v187 + 28) = v161 | (v164 << 16);
              *(_DWORD *)(v187 + 32) = v186;
              *(_DWORD *)(v187 + 36) = v137;
              *(float *)(v187 + 40) = v171;
              *(float *)(v187 + 44) = v172;
              *(_DWORD *)(v187 + 48) = v163 | (v162 << 16);
              *(_DWORD *)(v187 + 52) = v186;
              *(_DWORD *)(v187 + 56) = v137;
              *(_DWORD *)(v106 + 396) = v185 + 4;
              *(float *)(v187 + 60) = v175;
              *(float *)(v187 + 64) = v176;
              *(_DWORD *)(v187 + 68) = v163 | (v164 << 16);
              *(_DWORD *)(v187 + 72) = v186;
              *(_DWORD *)(v187 + 76) = v137;
            }
            v119 = v241;
            v118 = v244;
            if ( (v138 & 1) != 0 && v135 != *((_DWORD *)this + 44) )
            {
              ++v135;
              v188 = FontFormatter[3];
              v254 = (float)(v188 + (*(float (__fastcall **)(float *))(*(_QWORD *)FontFormatter + 48LL))(FontFormatter))
                   / PointSize;
              v189 = &v268;
              if ( v223 < v254 )
                v189 = &v254;
              v190 = *v189;
              v268 = *v189;
              v191 = FontFormatter[2];
              v253 = (float)(v191 + (*(float (__fastcall **)(float *))(*(_QWORD *)FontFormatter + 64LL))(FontFormatter))
                   / PointSize;
              v192 = &v269;
              if ( v222 < v253 )
                v192 = &v253;
              v193 = *v192;
              v269 = v193;
              v252 = FontFormatter[3] / PointSize;
              v194 = &v271;
              if ( v252 < v226 )
                v194 = &v252;
              v195 = *v194;
              v271 = v195;
              v251 = FontFormatter[2] / PointSize;
              v196 = &v270;
              if ( v251 < v224 )
                v196 = &v251;
              v270 = *v196;
              v223 = v190;
              v222 = v193;
              v226 = v195;
              v224 = v270;
              v138 = 1;
            }
            else
            {
              if ( *((_DWORD *)FontFormatter + 5) == *((_DWORD *)this + 43) && *((int *)this + 44) >= 1 )
              {
                v197 = FontFormatter[3];
                v226 = v197 / PointSize;
                v271 = v197 / PointSize;
                v224 = FontFormatter[2] / PointSize;
                v270 = v224;
                v198 = ((long double (__fastcall *)(float *))*(_QWORD *)(*(_QWORD *)FontFormatter + 48LL))(FontFormatter);
                v223 = (float)(v197 + *(float *)&v198) / PointSize;
                v268 = v223;
                v199 = FontFormatter[2];
                v200 = ((long double (__fastcall *)(float *))*(_QWORD *)(*(_QWORD *)FontFormatter + 64LL))(FontFormatter);
                v222 = (float)(v199 + *(float *)&v200) / PointSize;
                v269 = v222;
                v201 = (**(__int64 (__fastcall ***)(float *, _WORD *))FontFormatter)(FontFormatter, v257);
                v134 = 1;
                v135 = 1;
                if ( v201 )
                  goto LABEL_139;
                goto LABEL_181;
              }
              v138 = 0;
            }
          }
          while ( (**(unsigned int (__fastcall ***)(float *, _WORD *))FontFormatter)(FontFormatter, v257) );
          if ( (v214 & 1) == 0 )
            goto LABEL_182;
    LABEL_181:
          ColorTransform::ColorTransform((__int64)v250);
          ColorTransform::setMulColor(v250, 0.85, 0.3, 0.3);
          ColorTransform::setAlpha((__int64)v250, 0.5);
          v202 = floorf(v224);
          v203 = floorf(v226);
          Stage::addHighlightRectangle(
            v106,
            (float *)a2,
            v250,
            *((float *)this + 30) + v202,
            *((float *)this + 31) + v203,
            ceilf(v222) - v202,
            ceilf(v223) - v203,
            2.5);
          ColorTransform::~ColorTransform();
        }
    LABEL_182:
        if ( v215 == 1 && *((_BYTE *)this + 85) )
          TextField::drawCursor(
            this,
            *((float *)this + 30) + *((float *)this + 52),
            *((float *)this + 31) + *((float *)this + 53),
            *((float *)this + 54),
            a2);
        LOBYTE(v95) = 0;
        LOBYTE(v90) = 0;
        LOBYTE(v225) = 0;
        LOBYTE(v93) = 0;
        v107 = v215 + 1;
      }
      while ( v215 + 1 < 2 );
      return v274;
    }

    bool __fastcall TextField::collisionRender(_BYTE *a1, const DataLoaderShader *a2)
    {
      _BOOL8 v3; // x19
      _BYTE v5[24]; // [xsp+8h] [xbp-28h] BYREF
    
      if ( !a1[72] )
        return 0;
      Matrix2x3::Matrix2x3((Matrix2x3 *)v5, (const DataLoaderShader *)(a1 + 16), a2);
      v3 = TextField::shapeRender((VertexBuffer *)a1, (const DataLoaderShader *)v5, (const BitmapFont *)(a1 + 9), 0, 0);
      Matrix2x3::~Matrix2x3((DataLoaderShader *)v5);
      return v3;
    }

    __int64 __fastcall TextField::fetchFont(__int64 this)
    {
      __int64 v1; // x19
      __int64 v2; // x20
      const char *v3; // x22
      const char *v4; // x1
      SelectableButton *SystemFont; // x21
    
      v1 = this;
      if ( !*(_QWORD *)(this + 136) )
      {
        v2 = FontManager::sm_pInstance;
        if ( FontManager::sm_pInstance )
        {
          if ( *(_BYTE *)(this + 80) )
          {
            v3 = (const char *)(this + 96);
            if ( *(_DWORD *)(this + 92) + 1 > 8 )
              v4 = *(const char **)v3;
            else
              v4 = (const char *)(this + 96);
            SystemFont = FontManager::getSystemFont(
                           (UdpSocket *)FontManager::sm_pInstance,
                           v4,
                           *(unsigned __int8 *)(this + 81));
            if ( SystemFont )
              goto LABEL_12;
          }
          else
          {
            v3 = (const char *)(this + 96);
          }
          if ( *(_DWORD *)(v1 + 92) + 1 > 8 )
            v3 = *(const char **)(v1 + 96);
          this = FontManager::getFont(
                   v2,
                   v3,
                   *(unsigned __int8 *)(v1 + 82),
                   *(unsigned __int8 *)(v1 + 83),
                   *(unsigned __int8 *)(v1 + 81));
          SystemFont = (SelectableButton *)this;
          if ( !this )
          {
            SystemFont = 0;
    LABEL_16:
            if ( *(SelectableButton **)(v1 + 136) != SystemFont )
            {
              *(_QWORD *)(v1 + 136) = SystemFont;
              *(_DWORD *)(v1 + 192) = -971227136;
            }
            return this;
          }
    LABEL_12:
          this = (*(__int64 (__fastcall **)(SelectableButton *))(*(_QWORD *)SystemFont + 72LL))(SystemFont);
          if ( (_DWORD)this && !*(_DWORD *)(v1 + 68) )
            *(_DWORD *)(v1 + 68) = -16777216;
          goto LABEL_16;
        }
      }
      return this;
    }

    __int64 __fastcall TextField::getCachedFontFormatter(VertexBuffer *this, float a2, int a3, float a4, int a5)
    {
      __int64 v6; // x0
    
      v6 = *((_QWORD *)this + 23);
      if ( !v6
        || *((float *)this + 48) != a2
        || *((unsigned __int8 *)this + 119) != a3
        || *((float *)this + 49) != a4
        || a5 != *((unsigned __int8 *)this + 79)
        || NativeFont::s_cacheSerial != *((_DWORD *)this + 50) )
      {
        return 0;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      return *((_QWORD *)this + 23);
    }

    void __usercall TextField::getTextForDebugger(__int64 *__return_ptr a1@<X8>, const String *this@<X0>)
    {
      _QWORD *v4; // x21
      const char *ExportName; // x0
      internal_t *pHeap; // x21
      __int64 v7; // x22
      internal_t *p_internal; // x8
      String v9; // [xsp+20h] [xbp-C0h] BYREF
      String v10; // [xsp+38h] [xbp-A8h] BYREF
      String v11; // [xsp+50h] [xbp-90h] BYREF
      String v12; // [xsp+68h] [xbp-78h] BYREF
      String v13; // [xsp+80h] [xbp-60h] BYREF
      String v14; // [xsp+98h] [xbp-48h] BYREF
    
      String::String((__int64)&v14);
      v4 = (_QWORD *)*((_QWORD *)this + 6);
      if ( v4 )
      {
        while ( !(*(unsigned int (__fastcall **)(_QWORD *))(*v4 + 120LL))(v4) || !MovieClip::getExportName((__int64)v4) )
        {
          v4 = (_QWORD *)v4[6];
          if ( !v4 )
            goto LABEL_9;
        }
        ExportName = (const char *)MovieClip::getExportName((__int64)v4);
        String::operator=(&v14, ExportName);
        MovieClip::getNameOfChild((__int64)v4, (__int64)this, &v13);
        if ( v13.m_length )
        {
          operator+(" InstanceName:", (__int64)&v13, (__int64)&v12);
          String::operator+=(&v14.m_length, &v12);
          String::~String((__int64)&v12);
        }
        String::~String((__int64)&v13);
      }
    LABEL_9:
      if ( v14.m_bytes + 1 > 8 )
        pHeap = (internal_t *)v14.internal.pHeap;
      else
        pHeap = &v14.internal;
      v7 = *((unsigned int *)this + 36);
      String::String(&v10, "\n");
      String::String(&v9, "\\n");
      String::replace(this + 6, &v10, &v9, &v11);
      if ( v11.m_bytes + 1 > 8 )
        p_internal = (internal_t *)v11.internal.pHeap;
      else
        p_internal = &v11.internal;
      String::format((String *)"<ExportName:%s StringLength:%d String:%s>", (__int64)a1, pHeap, v7, p_internal);
      String::~String((__int64)&v11);
      String::~String((__int64)&v9);
      String::~String((__int64)&v10);
      String::~String((__int64)&v14);
    }

    __int64 __fastcall TextField::createFontFormatter(
            VertexBuffer *this,
            long double a2,
            unsigned int a3,
            long double a4,
            __int64 a5,
            __int64 a6)
    {
      __int64 CachedFontFormatter; // x23
      __int64 v13; // x0
      __int64 v14; // x2
      __int64 v15; // x20
    
      CachedFontFormatter = TextField::getCachedFontFormatter(this, *(float *)&a2, a3, *(float *)&a4, a5);
      if ( !CachedFontFormatter )
      {
        v13 = *((_QWORD *)this + 23);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
        *((_QWORD *)this + 23) = 0;
        *((_DWORD *)this + 48) = LODWORD(a2);
        *((_DWORD *)this + 49) = LODWORD(a4);
        *((_BYTE *)this + 119) = a3;
        *((_BYTE *)this + 79) = a5;
        *((_DWORD *)this + 50) = NativeFont::s_cacheSerial;
        if ( a3 == 4 )
          v14 = 32;
        else
          v14 = a3;
        v15 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, __int64, __int64, long double, long double))(**((_QWORD **)this + 17) + 16LL))(
                *((_QWORD *)this + 17),
                (char *)this + 144,
                v14,
                a5,
                a6,
                a2,
                a4);
        CachedFontFormatter = operator new(88);
        CachedFontFormatter::CachedFontFormatter(CachedFontFormatter, v15, *((_DWORD *)this + 36));
        *((_QWORD *)this + 23) = CachedFontFormatter;
        if ( v15 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
          CachedFontFormatter = *((_QWORD *)this + 23);
        }
        *((_BYTE *)this + 86) = 0;
      }
      return CachedFontFormatter;
    }

    __int64 __fastcall TextField::updateCursorPosition(VertexBuffer *this)
    {
      float v2; // s10
      float v3; // s11
      __int64 Instance; // x0
      float PointSize; // s8
      int v6; // w20
      __int64 v7; // x0
      long double v8; // q0
      long double v9; // q9
      __int64 result; // x0
      float v11; // s10
      float v12; // s0
      long double v13; // q0
      __int64 v14; // x2
      float *v15; // x20
      int v16; // w21
      int v17; // w21
      int v18; // w0
      int v19; // w1
      _BYTE v21[24]; // [xsp+8h] [xbp-58h] BYREF
    
      v2 = *((float *)this + 32);
      v3 = *((float *)this + 30);
      Instance = Stage::getInstance();
      PointSize = Stage::getPointSize(Instance);
      v6 = *((__int16 *)this + 58);
      v7 = Stage::getInstance();
      *(float *)&v8 = Stage::getPointSize(v7);
      v9 = v8;
      result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 88LL))(*((_QWORD *)this + 17));
      if ( *((_BYTE *)this + 85) && !*((_BYTE *)this + 86) )
      {
        v11 = v2 - v3;
        *(float *)&v9 = (float)((float)v6 * *(float *)&v9) / (float)(int)result;
        switch ( *((_BYTE *)this + 87) )
        {
          case 0:
          case 4:
            *((_DWORD *)this + 52) = 0;
            break;
          case 1:
            v12 = v11 + -3.0;
            goto LABEL_7;
          case 2:
            v12 = v11 * 0.5;
    LABEL_7:
            *((float *)this + 52) = v12;
            break;
          default:
            break;
        }
        *((_DWORD *)this + 53) = 0;
        *((float *)this + 54) = ceilf(
                                  (float)(*(float *)&v9
                                        * (float)(*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 112LL))(*((_QWORD *)this + 17)))
                                / PointSize);
        if ( *((_BYTE *)this + 87) == 4 )
          v14 = 32;
        else
          v14 = *((unsigned __int8 *)this + 87);
        *(float *)&v13 = v11 * PointSize;
        v15 = (float *)(*(__int64 (__fastcall **)(_QWORD, char *, __int64, _QWORD, _QWORD, long double, long double))(**((_QWORD **)this + 17) + 16LL))(
                         *((_QWORD *)this + 17),
                         (char *)this + 144,
                         v14,
                         *((unsigned __int8 *)this + 84),
                         *((unsigned __int8 *)this + 78),
                         v13,
                         v9);
        v16 = -1;
        while ( (**(unsigned int (__fastcall ***)(float *, _BYTE *))v15)(v15, v21) )
        {
          if ( v16 != *((_DWORD *)v15 + 4) )
          {
            v17 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)v15 + 72LL))(v15);
            v18 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)v15 + 80LL))(v15);
            v19 = *((_DWORD *)this + 51);
            if ( v19 >= v17 && v19 <= v18 + v17 )
            {
              *((float *)this + 52) = (*(float (__fastcall **)(float *))(*(_QWORD *)v15 + 104LL))(v15) / PointSize;
              *((float *)this + 53) = v15[3] / PointSize;
              *((float *)this + 54) = (*(float (__fastcall **)(float *))(*(_QWORD *)v15 + 48LL))(v15) / PointSize;
            }
            v16 = *((_DWORD *)v15 + 4);
          }
        }
        *((_BYTE *)this + 86) = 1;
        return (*(__int64 (__fastcall **)(float *))(*(_QWORD *)v15 + 24LL))(v15);
      }
      return result;
    }

    void __fastcall TextField::drawCursor(VertexBuffer *this, float a2, float a3, float a4, const DataLoaderShader *a5)
    {
      float v6; // s4
      float v7; // s5
      float v8; // s6
      float v9; // s2
      float v10; // s7
      float v11; // s17
      float v12; // s5
      float v13; // s18
      float v14; // s19
      float v15; // s1
      float v16; // s20
      float v17; // s3
      float v18; // s16
      float v19; // s7
      float v20; // s17
      float v21; // s5
      float v22; // s0
      float v23; // s3
      float v24; // s12
      float v25; // s15
      float v26; // s1
      float v27; // s2
      float v28; // s13
      float v29; // s14
      float v30; // s8
      float v31; // s0
      float v32; // s1
      float v33; // s0
      float v34; // s1
      float v35; // s9
      float v36; // s0
      float v37; // s1
      float v38; // s10
      float v39; // s0
      float v40; // s1
      float v41; // s11
      __int64 Instance; // x19
      AvatarRankingEntry *GradientTexture; // x0
      float v44; // s0
      float v45; // s1
      float v46; // s1
      float v47; // s0
      int v48; // w20
      __int64 v49; // x8
      __int64 v50; // x9
      float v51; // [xsp+Ch] [xbp-64h]
      float v52; // [xsp+10h] [xbp-60h]
      float v53; // [xsp+14h] [xbp-5Ch]
      float v54; // [xsp+18h] [xbp-58h]
      bool v55; // [xsp+1Fh] [xbp-51h] BYREF
    
      v6 = *((float *)a5 + 1);
      v7 = *((float *)a5 + 2);
      v8 = *((float *)a5 + 3);
      v9 = a3 + a4;
      v10 = v9 * v7;
      v11 = *(float *)a5 * a2;
      v12 = v7 * a3;
      v13 = *((float *)a5 + 4);
      v14 = *((float *)a5 + 5);
      v15 = v8 * a3;
      v16 = (float)(a2 + 3.0) * v6;
      v17 = (float)(a2 + 3.0) * *(float *)a5;
      v18 = v11 + v10;
      v19 = v17 + v10;
      v20 = v13 + (float)(v11 + v12);
      v21 = v13 + (float)(v17 + v12);
      v52 = v20;
      v53 = v21;
      v22 = v6 * a2;
      v23 = v14 + (float)(v22 + v15);
      v51 = v23;
      v24 = v14 + (float)(v16 + v15);
      v25 = v13 + v19;
      v26 = v9 * v8;
      v27 = v16 + (float)(v9 * v8);
      v28 = v14 + v27;
      v29 = v13 + v18;
      v30 = v14 + (float)(v22 + v26);
      if ( (float)(v13 + v18) >= (float)(v13 + v19) )
        v31 = v13 + v19;
      else
        v31 = v13 + v18;
      if ( v21 >= v20 )
        v32 = v20;
      else
        v32 = v21;
      if ( v31 >= v32 )
        v31 = v32;
      v54 = v31;
      if ( v30 >= v28 )
        v33 = v14 + v27;
      else
        v33 = v30;
      if ( v24 >= v23 )
        v34 = v23;
      else
        v34 = v24;
      if ( v33 >= v34 )
        v35 = v34;
      else
        v35 = v33;
      if ( v20 >= v21 )
        v36 = v20;
      else
        v36 = v21;
      if ( v25 >= v29 )
        v37 = v13 + v19;
      else
        v37 = v13 + v18;
      if ( v36 >= v37 )
        v38 = v36;
      else
        v38 = v37;
      if ( v23 >= v24 )
        v39 = v23;
      else
        v39 = v24;
      if ( v28 >= v30 )
        v40 = v14 + v27;
      else
        v40 = v30;
      if ( v39 >= v40 )
        v41 = v39;
      else
        v41 = v40;
      Instance = Stage::getInstance();
      GradientTexture = (AvatarRankingEntry *)Stage::getGradientTexture(Instance);
      if ( (unsigned int)Stage::shapeStart((MappedFile *)Instance, v54, v35, v38, v41, GradientTexture, 1u, &v55) )
      {
        v44 = *((float *)this + 28);
        v45 = v44 / 0.15;
        if ( (float)(v44 / 0.15) < 0.0 )
          v45 = 0.0;
        if ( v45 > 1.0 )
          v45 = 1.0;
        v46 = (float)(v45 * v45) * (float)((float)(v45 * -2.0) + 3.0);
        v47 = (float)(v44 + -0.5) * 4.0;
        if ( v47 < 0.0 )
          v47 = 0.0;
        if ( v47 > 1.0 )
          v47 = 1.0;
        v48 = (int)(float)((float)(v46 - (float)((float)(v47 * v47) * (float)(3.0 - (float)(v47 + v47)))) * 255.0) << 24;
        Stage::addQuad(Instance);
        v49 = *(int *)(Instance + 396);
        v50 = *(_QWORD *)(Instance + 384) + 20 * v49;
        *(float *)v50 = v52;
        *(float *)(v50 + 4) = v51;
        *(_DWORD *)(v50 + 8) = 0xFFFF;
        *(_DWORD *)(v50 + 12) = v48;
        *(_DWORD *)(v50 + 16) = 0;
        *(float *)(v50 + 20) = v53;
        *(float *)(v50 + 24) = v24;
        *(_DWORD *)(v50 + 28) = 0xFFFF;
        *(_DWORD *)(v50 + 32) = v48;
        *(_DWORD *)(v50 + 36) = 0;
        *(float *)(v50 + 40) = v29;
        *(float *)(v50 + 44) = v30;
        *(_DWORD *)(v50 + 48) = 0xFFFF;
        *(_DWORD *)(v50 + 52) = v48;
        *(_DWORD *)(v50 + 56) = 0;
        *(_DWORD *)(Instance + 396) = v49 + 4;
        *(float *)(v50 + 60) = v25;
        *(float *)(v50 + 64) = v28;
        *(_DWORD *)(v50 + 68) = 0xFFFF;
        *(_DWORD *)(v50 + 72) = v48;
        *(_DWORD *)(v50 + 76) = 0;
      }
    }

    void __usercall TextField::decodeStringParams(VertexBuffer *this@<X0>, String *a2@<X1>, String *a3@<X8>)
    {
      __int64 v5; // x21
      int i; // w26
      __int64 v7; // x24
      __int64 v8; // x1
      __int64 v9; // x2
      __int64 v10; // x3
      int v11; // w4
      internal_t *pHeap; // x0
      int v13; // w0
      __int16 v14; // w25
      String v15; // [xsp+8h] [xbp-98h] BYREF
      String v16; // [xsp+20h] [xbp-80h] BYREF
      String v17; // [xsp+38h] [xbp-68h] BYREF
    
      if ( *((_BYTE *)this + 77) )
      {
        *((_BYTE *)this + 77) = 0;
        *((_WORD *)this + 58) = *((unsigned __int8 *)this + 118);
      }
      String::String((__int64)a3, a2);
      v5 = 0;
      for ( i = 0; i < 1000; ++i )
      {
        v5 = String::indexOf((__int64)a3, &STRING_PARAM_FONT, v5);
        if ( (_DWORD)v5 == -1 )
          break;
        String::String(&v17, "}");
        v7 = String::indexOf((__int64)a3, &v17, (unsigned int)(STRING_PARAM_FONT.m_length + v5));
        String::~String((__int64)&v17);
        if ( (_DWORD)v7 == -1 )
          break;
        if ( !((unsigned int)v5 | i) )
        {
          String::substring(
            (unsigned int *)a3,
            (const char *)(unsigned int)(STRING_PARAM_FONT.m_length + v5),
            v7,
            (__int64)&v16);
          if ( v16.m_bytes + 1 >= 9 )
            pHeap = (internal_t *)v16.internal.pHeap;
          else
            pHeap = &v16.internal;
          v13 = Utility::atoi(pHeap, v8, v9, v10, v11);
          v14 = v13;
          if ( (unsigned int)(v13 - 1) <= 0xC6 )
          {
            TextField::fetchFont((__int64)this);
            *((_BYTE *)this + 77) = 1;
            *((_WORD *)this + 58) = v14;
          }
          String::~String((__int64)&v16);
        }
        String::substring((unsigned int *)a3, (unsigned int)(v7 + 1), &v15);
        String::operator=(a3, &v15);
        String::~String((__int64)&v15);
      }
    }

    __int64 __fastcall TextField::setFontSize(__int64 this, __int16 a2)
    {
      *(_WORD *)(this + 116) = a2;
      return this;
    }

    void __fastcall TextField::setText(String *this, String *a2)
    {
      String v4; // [xsp+8h] [xbp-38h] BYREF
    
      if ( sm_allowStringParametersGlobal && *((_BYTE *)this + 76) )
      {
        TextField::decodeStringParams((VertexBuffer *)this, a2, &v4);
        if ( !String::equals((__int64)&v4, (__int64)(this + 6)) )
        {
          String::operator=(this + 6, &v4);
          *((_DWORD *)this + 48) = -971227136;
        }
        String::~String((__int64)&v4);
      }
      else if ( !String::equals((__int64)a2, (__int64)(this + 6)) )
      {
        String::operator=(this + 6, a2);
        *((_DWORD *)this + 48) = -971227136;
      }
      *((_DWORD *)this + 42) = -10000000;
      *((_BYTE *)this + 86) = 0;
    }

    __int64 __fastcall TextField::getStringObject(__int64 a1)
    {
      return a1 + 144;
    }

    void __fastcall TextField::setNumberText(String *a1, String *a2, int a3)
    {
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      if ( a1[7].m_length != (_DWORD)a2 )
      {
        a1[7].m_length = (int)a2;
        LogicStringUtil::intToString(a2, a3, (__int64 *)&v4.m_length);
        String::operator=(a1 + 6, &v4);
        String::~String((__int64)&v4);
        a1[8].m_length = -971227136;
      }
    }

    __int64 TextField::isTextField()
    {
      return 1;
    }

    float *__fastcall TextField::setBounds(float *result, float a2, float a3, float a4, float a5)
    {
      result[30] = a2;
      result[31] = a3;
      result[32] = a4;
      result[33] = a5;
      return result;
    }

    void __fastcall TextField::getTextWidth(__int64 a1)
    {
      long double v1; // q8
      __int64 Instance; // x0
      float v4; // s10
      __int64 v5; // x0
      long double v6; // q0
      __int64 FontFormatter; // x0
      __int64 v8[3]; // [xsp+0h] [xbp-60h] BYREF
      String v9; // [xsp+18h] [xbp-48h] BYREF
    
      if ( *(_QWORD *)(a1 + 136) || (TextField::fetchFont(a1), *(_QWORD *)(a1 + 136)) )
      {
        *(float *)&v1 = (float)*(__int16 *)(a1 + 116);
        Instance = Stage::getInstance();
        *(float *)&v1 = *(float *)&v1 * Stage::getPointSize(Instance);
        *(float *)&v1 = *(float *)&v1
                      / (float)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 88LL))(*(_QWORD *)(a1 + 136));
        v4 = *(float *)(a1 + 128) - *(float *)(a1 + 120);
        v5 = Stage::getInstance();
        *(float *)&v6 = v4 * Stage::getPointSize(v5);
        FontFormatter = TextField::createFontFormatter(
                          (VertexBuffer *)a1,
                          v6,
                          *(unsigned __int8 *)(a1 + 87),
                          v1,
                          *(unsigned __int8 *)(a1 + 84),
                          *(unsigned __int8 *)(a1 + 78));
        CachedFontFormatter::getTextWidth(FontFormatter);
      }
      else if ( !*(_BYTE *)(a1 + 74) )
      {
        *(_BYTE *)(a1 + 74) = 1;
        TextField::getTextForDebugger(v8, (const String *)a1);
        operator+("TextField::getTextWidth font not fetched, text: ", (__int64)v8, (__int64)&v9);
        Debugger::warning(&v9);
        String::~String((__int64)&v9);
        String::~String((__int64)v8);
      }
    }

    void __fastcall TextField::getTextHeight(__int64 a1)
    {
      long double v1; // q8
      __int64 Instance; // x0
      float v4; // s10
      __int64 v5; // x0
      long double v6; // q0
      __int64 FontFormatter; // x0
      __int64 v8[3]; // [xsp+0h] [xbp-60h] BYREF
      String v9; // [xsp+18h] [xbp-48h] BYREF
    
      if ( *(_QWORD *)(a1 + 136) || (TextField::fetchFont(a1), *(_QWORD *)(a1 + 136)) )
      {
        *(float *)&v1 = (float)*(__int16 *)(a1 + 116);
        Instance = Stage::getInstance();
        *(float *)&v1 = *(float *)&v1 * Stage::getPointSize(Instance);
        *(float *)&v1 = *(float *)&v1
                      / (float)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 88LL))(*(_QWORD *)(a1 + 136));
        v4 = *(float *)(a1 + 128) - *(float *)(a1 + 120);
        v5 = Stage::getInstance();
        *(float *)&v6 = v4 * Stage::getPointSize(v5);
        FontFormatter = TextField::createFontFormatter(
                          (VertexBuffer *)a1,
                          v6,
                          *(unsigned __int8 *)(a1 + 87),
                          v1,
                          *(unsigned __int8 *)(a1 + 84),
                          *(unsigned __int8 *)(a1 + 78));
        (*(float (__fastcall **)(__int64))(*(_QWORD *)FontFormatter + 32LL))(FontFormatter);
      }
      else if ( !*(_BYTE *)(a1 + 74) )
      {
        *(_BYTE *)(a1 + 74) = 1;
        TextField::getTextForDebugger(v8, (const String *)a1);
        operator+("TextField::getTextHeight font not fetched, text: ", (__int64)v8, (__int64)&v9);
        Debugger::warning(&v9);
        String::~String((__int64)&v9);
        String::~String((__int64)v8);
      }
    }

    int8x16_t __fastcall TextField::getTextFieldBounds(VertexBuffer *this, DataLoaderFlash *a2)
    {
      int8x16_t v2; // q0
      int8x16_t result; // q0
    
      v2 = *(int8x16_t *)((char *)this + 120);
      *(_QWORD *)a2 = v2.i64[0];
      result = vextq_s8(v2, v2, 8u);
      *((_QWORD *)a2 + 1) = result.i64[0];
      return result;
    }

    __int64 __fastcall TextField::getFont(__int64 a1)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 136);
      if ( !result )
      {
        TextField::fetchFont(a1);
        return *(_QWORD *)(a1 + 136);
      }
      return result;
    }

    __int64 __fastcall TextField::getNumberValue(VertexBuffer *this)
    {
      return *((unsigned int *)this + 42);
    }

    __int64 __fastcall TextField::getAlign(VertexBuffer *this)
    {
      return *((unsigned __int8 *)this + 87);
    }

    __int64 __fastcall TextField::getFontSize(VertexBuffer *this)
    {
      return (unsigned int)*((__int16 *)this + 58);
    }

    __int64 __fastcall TextField::getOriginalFontSize(VertexBuffer *this)
    {
      return *((unsigned __int8 *)this + 118);
    }

    float __fastcall TextField::getTextFieldWidth(VertexBuffer *this)
    {
      return *((float *)this + 32) - *((float *)this + 30);
    }

    float __fastcall TextField::getTextFieldHeight(VertexBuffer *this)
    {
      return *((float *)this + 33) - *((float *)this + 31);
    }

    float __fastcall TextField::setTextFieldWidth(VertexBuffer *this, float a2)
    {
      float result; // s0
    
      result = *((float *)this + 30) + a2;
      *((float *)this + 32) = result;
      return result;
    }

    __int64 __fastcall TextField::isMultiLine(VertexBuffer *this)
    {
      return *((unsigned __int8 *)this + 84);
    }

    __int64 __fastcall TextField::setInteractiveRecursive(__int64 this, char a2)
    {
      *(_BYTE *)(this + 72) = a2;
      return this;
    }

    __int64 __fastcall TextField::setMultiLine(__int64 this, char a2)
    {
      *(_BYTE *)(this + 84) = a2;
      return this;
    }

    __int64 __fastcall TextField::setHighlightRange(__int64 this, int a2, int a3)
    {
      *(_DWORD *)(this + 172) = a2;
      *(_DWORD *)(this + 176) = a3;
      return this;
    }

    __int64 __fastcall TextField::setCursorPosition(__int64 this, int a2)
    {
      *(_DWORD *)(this + 204) = a2;
      *(_BYTE *)(this + 86) = 0;
      return this;
    }

    __int64 __fastcall TextField::createFontFormatter(VertexBuffer *this)
    {
      long double v1; // q8
      __int64 Instance; // x0
      float v4; // s9
      __int64 v5; // x0
      long double v6; // q0
    
      *(float *)&v1 = (float)*((__int16 *)this + 58);
      Instance = Stage::getInstance();
      *(float *)&v1 = *(float *)&v1 * Stage::getPointSize(Instance);
      *(float *)&v1 = *(float *)&v1
                    / (float)(*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 88LL))(*((_QWORD *)this + 17));
      v4 = *((float *)this + 32) - *((float *)this + 30);
      v5 = Stage::getInstance();
      *(float *)&v6 = v4 * Stage::getPointSize(v5);
      return TextField::createFontFormatter(
               this,
               v6,
               *((unsigned __int8 *)this + 87),
               v1,
               *((unsigned __int8 *)this + 84),
               *((unsigned __int8 *)this + 78));
    }

    __int64 __fastcall TextField::visualOffset(VertexBuffer *this, int a2, int a3)
    {
      __int64 FontFormatter; // x0
      __int64 v7; // x8
      __int64 v8; // x9
      unsigned __int64 v9; // x11
      unsigned __int64 v10; // x10
      int *v11; // x12
      int v12; // w13
      int v13; // w9
      int v14; // w15
      int v15; // w16
      __int64 v16; // x11
      __int64 result; // x0
      bool v18; // zf
      unsigned int v19; // w9
      int v20; // w10
      int v21; // w11
      __int64 v22; // x8
      __int64 v23; // x8
    
      FontFormatter = *((_QWORD *)this + 23);
      if ( !FontFormatter )
        FontFormatter = TextField::createFontFormatter(this);
      if ( a2 < 0 )
        return 0xFFFFFFFFLL;
      v7 = *(_QWORD *)(FontFormatter + 64);
      v8 = *(_QWORD *)(FontFormatter + 72) - v7;
      if ( !v8 )
        return 0xFFFFFFFFLL;
      v9 = 0;
      v10 = 0xF0F0F0F0F0F0F0F1LL * (v8 >> 2);
      v11 = (int *)(v7 + 60);
      v12 = -1;
      v13 = -1;
      while ( 1 )
      {
        v14 = *v11 - a2;
        if ( *v11 == a2 )
          break;
        if ( v13 == -1 )
          goto LABEL_13;
        if ( v14 < 0 )
          v14 = a2 - *v11;
        v15 = v12 - a2;
        if ( v12 - a2 < 0 )
          v15 = a2 - v12;
        if ( v14 < v15 )
        {
    LABEL_13:
          v13 = v9;
          v12 = *v11;
        }
        ++v9;
        v11 += 17;
        if ( v9 >= v10 )
          goto LABEL_17;
      }
      v13 = v9;
    LABEL_17:
      if ( v13 < 0 )
      {
        if ( v13 == -1 )
          return 0xFFFFFFFFLL;
        v16 = v13;
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v16 = v13;
        result = *(unsigned int *)(v7 + 68LL * v13 + 60);
      }
      if ( *(_BYTE *)(v7 + 68 * v16 + 65) )
      {
        if ( a3 < 0 && !v13 )
        {
          v18 = (_DWORD)result == a2;
          result = 0xFFFFFFFFLL;
          if ( v18 )
          {
            v19 = *((_DWORD *)this + 36);
            if ( (int)v19 <= a2 )
              return 0xFFFFFFFFLL;
            else
              return v19;
          }
          return result;
        }
        v21 = *((_DWORD *)this + 36);
        if ( (a3 < 1 || v13 || v21 != a2) && ((a3 & 0x80000000) == 0 || v13 < 1 || v21 != a2) )
        {
          if ( a3 >= 1 && v13 == (_DWORD)v10 - 1 )
            return 0xFFFFFFFFLL;
          v23 = v7 + 68LL * (v13 + a3);
          result = *(unsigned int *)(v23 + 60);
          if ( !*(_BYTE *)(v23 + 65) )
            return (unsigned int)result + (a3 >= 0);
        }
      }
      else
      {
        if ( a3 < 0 && !v13 && (_DWORD)result == a2 )
          return 0xFFFFFFFFLL;
        v20 = v10 - 1;
        if ( a3 >= 1 && v13 == v20 )
        {
          v18 = (_DWORD)result == a2;
          result = 0xFFFFFFFFLL;
          if ( v18 )
          {
            if ( *((_DWORD *)this + 36) > a2 )
              return (unsigned int)(a2 + 1);
            else
              return 0xFFFFFFFFLL;
          }
        }
        else if ( (_DWORD)result + 1 != a2 || (a3 & 0x80000000) == 0 || v13 != v20 )
        {
          v22 = v7 + 68LL * (v13 + a3);
          result = *(unsigned int *)(v22 + 60);
          if ( *(_BYTE *)(v22 + 65) )
            return (unsigned int)result + ((unsigned int)a3 >> 31);
        }
      }
      return result;
    }

    _DWORD *__fastcall TextField::initializeMembers(VertexBuffer *this)
    {
      _DWORD *result; // x0
    
      *((_BYTE *)this + 77) = 0;
      *((_BYTE *)this + 118) = 0;
      *((_BYTE *)this + 80) = 0;
      *(_WORD *)((char *)this + 75) = 256;
      *((_BYTE *)this + 119) = 0;
      *((_BYTE *)this + 79) = 0;
      *((_DWORD *)this + 50) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_WORD *)this + 36) = 257;
      *((_QWORD *)this + 23) = 0;
      String::operator=((_DWORD *)this + 22, "");
      *((_DWORD *)this + 16) = 0;
      *((_DWORD *)this + 17) = 0;
      *((_DWORD *)this + 28) = 0;
      *(_DWORD *)((char *)this + 82) = 0;
      *((_DWORD *)this + 51) = 0x7FFFFFFF;
      *((_BYTE *)this + 86) = 0;
      *((_DWORD *)this + 52) = 0;
      *((_DWORD *)this + 53) = 0;
      *((_DWORD *)this + 54) = 0;
      *((_BYTE *)this + 87) = 0;
      *((_WORD *)this + 58) = 0;
      *((_BYTE *)this + 81) = 0;
      *((_BYTE *)this + 74) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 15) = 0;
      result = String::operator=((_DWORD *)this + 36, "");
      *((_QWORD *)this + 21) = 4284967296LL;
      *((_DWORD *)this + 44) = 0;
      *((_BYTE *)this + 78) = 0;
      return result;
    }

}; // end class TextField
