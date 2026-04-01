class AttackRadiusSprite
{
public:

    void __fastcall AttackRadiusSprite::AttackRadiusSprite(
            AttackRadiusSprite *this,
            float a2,
            float a3,
            float a4,
            float a5,
            float a6)
    {
      const char *v12; // x1
      __int64 DataLoader; // x0
    
      Sprite::Sprite(this);
      *((_BYTE *)this + 112) = 0;
      *(_QWORD *)this = off_1004609C0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 19) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      *((float *)this + 23) = a2;
      *((float *)this + 24) = a3;
      *((float *)this + 25) = a4;
      *((float *)this + 26) = a5;
      *((float *)this + 27) = a6;
      DataLoader = ResourceManager::getDataLoader((ResourceManager *)"image/range.png", v12);
      if ( DataLoader )
        *((_QWORD *)this + 15) = *(_QWORD *)(DataLoader + 8);
      if ( a6 == 0.0 )
      {
        AttackRadiusSprite::initCircleShape(this);
      }
      else if ( *((float *)this + 23) <= 0.0 )
      {
        AttackRadiusSprite::initArcShape(this);
      }
      else
      {
        AttackRadiusSprite::initTruncatedArcShape(this);
      }
    }

    __int64 __fastcall AttackRadiusSprite::initCircleShape(#1344 *this)
    {
      long double v1; // q8
      char *v3; // x20
      void *v4; // x21
      __int64 v5; // x8
      float v6; // s1
      float v7; // s2
      float v8; // s1
      __int64 v9; // x0
      void *v10; // x23
      __int64 v11; // x0
      __int64 result; // x0
      long double v13; // q1
      float v14; // s0
    
      v3 = (char *)this + 128;
      v4 = (void *)*((_QWORD *)this + 16);
      v5 = *((_QWORD *)this + 15);
      v6 = *((float *)this + 24);
      v7 = v6 - (float)*(int *)(v5 + 8);
      v8 = v6 * 0.5;
      if ( v7 <= v8 )
        *(float *)&v1 = v8;
      else
        *(float *)&v1 = (float)*(int *)(v5 + 8);
      if ( v4 )
      {
        ShapeDrawBitmapCommand::~ShapeDrawBitmapCommand(*((ShapeDrawBitmapCommand **)this + 16));
        operator delete(v4);
      }
      v9 = *((_QWORD *)this + 17);
      if ( v9 )
        operator delete[](v9);
      v10 = (void *)*((_QWORD *)this + 18);
      if ( v10 )
      {
        ShapeDrawBitmapCommand::~ShapeDrawBitmapCommand(*((ShapeDrawBitmapCommand **)this + 18));
        operator delete(v10);
      }
      v11 = *((_QWORD *)this + 19);
      if ( v11 )
        operator delete[](v11);
      result = createCircle(
                 (char *)this + 136,
                 v3,
                 *((_QWORD *)this + 15),
                 *((float *)this + 24),
                 v1,
                 *((float *)this + 25));
      v14 = *((float *)this + 23);
      if ( v14 > 0.0 )
      {
        *(float *)&v13 = -*(float *)&v1;
        return createCircle((char *)this + 152, (char *)this + 144, *((_QWORD *)this + 15), v14, v13, *((float *)this + 25));
      }
      return result;
    }

    __int64 __fastcall AttackRadiusSprite::initTruncatedArcShape(#1344 *this)
    {
      float v2; // s1
      float v3; // s2
      float v4; // s9
      float v5; // s10
      int v6; // w22
      int v7; // w23
      float v8; // s11
      double v9; // d8
      double v10; // d9
      float v11; // s12
      void *v12; // x0
      void *v13; // x20
      int v14; // w20
      __int64 v15; // x0
      __int64 v16; // x0
      __int64 v17; // x9
      ShapeDrawBitmapCommand *v18; // x21
      float v19; // s8
      float v20; // s14
      float v21; // s15
      __double2 v22; // kr00_16
      float v23; // s10
      float v24; // s13
      __double2 v25; // kr10_16
      int v26; // w24
      int v27; // w20
      float v28; // s8
      float v29; // s12
      float v30; // s14
      float v31; // s15
      int v32; // w25
      int v33; // w22
      float v34; // s9
      __double2 v35; // kr20_16
      float cosval; // s2
      float v37; // s3
      float v38; // s1
      float v39; // s0
      float v40; // s1
      float v41; // s3
      float v42; // s2
      bool v43; // nf
      float v44; // s9
      float v45; // s10
      ShapeDrawBitmapCommand *v46; // x21
      ShapeDrawBitmapCommand *v47; // x21
      int v48; // w20
      int v49; // w20
      __double2 v50; // kr30_16
      float v51; // s13
      long double v52; // q0
      long double v53; // q1
      __double2 v54; // kr40_16
      float v55; // s12
      float v56; // s14
      float v57; // s15
      float v58; // s8
      int v59; // w24
      float v60; // s9
      __double2 v61; // kr50_16
      float v62; // s2
      float v63; // s3
      float v64; // s1
      float v65; // s0
      float v66; // s1
      float v67; // s3
      float v68; // s2
      bool v69; // nf
      float v70; // s9
      float v71; // s10
      ShapeDrawBitmapCommand *v72; // x21
      ShapeDrawBitmapCommand *v73; // x21
      bool v74; // vf
      ShapeDrawBitmapCommand *v75; // x21
      int v76; // w22
      long double v77; // q0
      float v78; // s8
      long double v79; // q0
      ShapeDrawBitmapCommand *v80; // x20
      long double v81; // q0
      long double v82; // q1
      float v83; // s8
      long double v84; // q0
      float v86; // [xsp+84h] [xbp-9Ch]
      float v87; // [xsp+88h] [xbp-98h]
      float v88; // [xsp+8Ch] [xbp-94h]
      float v89; // [xsp+90h] [xbp-90h]
      float v90; // [xsp+94h] [xbp-8Ch]
      float v91; // [xsp+98h] [xbp-88h]
      float v92; // [xsp+98h] [xbp-88h]
      float v93; // [xsp+9Ch] [xbp-84h]
    
      v2 = *((float *)this + 23);
      v3 = *((float *)this + 24);
      if ( (float)(v3 - (float)*(int *)(*((_QWORD *)this + 15) + 8LL)) <= (float)(v3 * 0.5) )
        v4 = v3 * 0.5;
      else
        v4 = (float)*(int *)(*((_QWORD *)this + 15) + 8LL);
      v5 = *((float *)this + 27);
      v6 = (int)(float)((float)((float)(v3 * v5) / 48.0) + 0.99);
      v7 = (int)(float)((float)((float)(v2 * v5) / 48.0) + 0.99);
      v89 = v5 / (float)v6;
      v90 = v5 / (float)v7;
      if ( v89 > 0.098175 )
      {
        v6 = (int)(float)((float)(v5 / 0.098175) + 0.99);
        v89 = v5 / (float)v6;
      }
      v91 = v3 - v4;
      v8 = v2 + v4;
      if ( v90 > 0.098175 )
      {
        v7 = (int)(float)((float)(v5 / 0.098175) + 0.99);
        v90 = v5 / (float)v7;
      }
      v9 = asin((float)(v4 / v91));
      v10 = asin((float)(v4 / v8));
      v11 = *((float *)this + 26);
      v12 = (void *)*((_QWORD *)this + 17);
      if ( v12 )
        operator delete(v12);
      *((_QWORD *)this + 17) = 0;
      v13 = (void *)*((_QWORD *)this + 16);
      if ( v13 )
      {
        ShapeDrawBitmapCommand::~ShapeDrawBitmapCommand(*((ShapeDrawBitmapCommand **)this + 16));
        operator delete(v13);
      }
      v14 = 2 * (v7 + v6) + 6;
      *((_QWORD *)this + 16) = 0;
      if ( is_mul_ok(v14, 0xCu) )
        v15 = 12LL * v14;
      else
        v15 = -1;
      v16 = operator new[](v15);
      if ( 2 * (v7 + v6) != -6 )
      {
        v17 = v16;
        do
        {
          *(_DWORD *)v17 = 0;
          *(_QWORD *)(v17 + 4) = 0;
          v17 += 12;
        }
        while ( v17 != v16 + 12LL * v14 );
      }
      *((_QWORD *)this + 17) = v16;
      v18 = (ShapeDrawBitmapCommand *)operator new(24);
      ShapeDrawBitmapCommand::ShapeDrawBitmapCommand(v18);
      v93 = (float)(v11 + (float)(v5 * -0.5)) + 0.7854;
      v19 = v9;
      v20 = v10;
      v21 = v5 + v93;
      *((_QWORD *)this + 16) = v18;
      ShapeDrawBitmapCommand::setTexture(v18, *((_QWORD *)this + 15));
      ShapeDrawBitmapCommand::setData(*((_QWORD *)this + 16), *((_QWORD *)this + 17), (unsigned int)(2 * (v7 + v6) + 6));
      v88 = v19 + v93;
      v22 = __sincos_stret((float)(v19 + v93));
      v23 = *((float *)this + 25);
      v24 = v21 - v19;
      v25 = __sincos_stret((float)(v21 - v19));
      if ( v6 < 0 )
      {
        v49 = 0;
      }
      else
      {
        v86 = v21;
        v87 = v10;
        v26 = 0;
        v27 = 0;
        v29 = v91 * v22.__sinval / v23;
        v31 = v91 * v25.__sinval / v23;
        v32 = 2 * v6;
        v33 = v6 + 1;
        while ( 1 )
        {
          v34 = v93 + (float)(v89 * (float)v26);
          v35 = __sincos_stret(v34);
          cosval = v35.__cosval;
          v37 = v35.__sinval / v23;
          v38 = *((float *)this + 24);
          v39 = cosval * v38;
          v40 = v38 * v37;
          v41 = v91 * v37;
          v42 = v91 * cosval;
          if ( v34 > v24 )
          {
            v41 = v31;
            v30 = v91 * v25.__cosval;
            v42 = v30;
          }
          v43 = v34 < v88;
          v44 = v34 >= v88 ? v41 : v29;
          if ( v43 )
          {
            v28 = v91 * v22.__cosval;
            v45 = v28;
          }
          else
          {
            v45 = v42;
          }
          v46 = (ShapeDrawBitmapCommand *)*((_QWORD *)this + 16);
          ShapeDrawBitmapCommand::setXY(v46, v27, v39, v40);
          ShapeDrawBitmapCommand::setUV(v46, v27, 0.0, 0.0);
          v47 = (ShapeDrawBitmapCommand *)*((_QWORD *)this + 16);
          v48 = v27 + 1;
          ShapeDrawBitmapCommand::setXY(v47, v48, v45, v44);
          ShapeDrawBitmapCommand::setUV(v47, v48, 0.0, 1.0);
          if ( v33 == ++v26 )
            break;
          v23 = *((float *)this + 25);
          v27 = v48 + 1;
        }
        v49 = v32 + 2;
        v23 = *((float *)this + 25);
        v21 = v86;
        v20 = v87;
      }
      v92 = v20 + v93;
      v50 = __sincos_stret((float)(v20 + v93));
      v51 = v21 - v20;
      v54 = __sincos_stret((float)(v21 - v20));
      *(double *)&v53 = v54.__cosval;
      *(double *)&v52 = v54.__sinval;
      if ( (v7 & 0x80000000) == 0 )
      {
        v56 = v8 * v50.__sinval / v23;
        v58 = v8 * v54.__sinval / v23;
        v59 = v49 + 2 * v7 - 2;
        while ( 1 )
        {
          v60 = v93 + (float)(v90 * (float)v7);
          v61 = __sincos_stret(v60);
          v62 = v61.__cosval;
          v63 = v61.__sinval / v23;
          v64 = *((float *)this + 23);
          v65 = v62 * v64;
          v66 = v64 * v63;
          v67 = v8 * v63;
          v68 = v8 * v62;
          if ( v60 > v51 )
          {
            v67 = v58;
            v57 = v8 * v54.__cosval;
            v68 = v57;
          }
          v69 = v60 < v92;
          v70 = v60 >= v92 ? v67 : v56;
          if ( v69 )
          {
            v55 = v8 * v50.__cosval;
            v71 = v55;
          }
          else
          {
            v71 = v68;
          }
          v72 = (ShapeDrawBitmapCommand *)*((_QWORD *)this + 16);
          ShapeDrawBitmapCommand::setXY(v72, v49, v65, v66);
          ShapeDrawBitmapCommand::setUV(v72, v49, 0.0, 0.0);
          v73 = (ShapeDrawBitmapCommand *)*((_QWORD *)this + 16);
          ShapeDrawBitmapCommand::setXY(v73, v49 | 1, v71, v70);
          ShapeDrawBitmapCommand::setUV(v73, v49 | 1, 0.0, 1.0);
          v74 = __OFSUB__(v7--, 1);
          if ( v7 < 0 != v74 )
            break;
          v49 += 2;
          v23 = *((float *)this + 25);
        }
        v49 = v59 + 4;
      }
      v75 = (ShapeDrawBitmapCommand *)*((_QWORD *)this + 16);
      v76 = v49 | 1;
      v77 = ShapeDrawBitmapCommand::getX(v75, 0, v52, v53);
      v78 = *(float *)&v77;
      v79 = ShapeDrawBitmapCommand::getY(*((_QWORD *)this + 16), 0);
      ShapeDrawBitmapCommand::setXY(v75, v49, v78, *(float *)&v79);
      ShapeDrawBitmapCommand::setUV(v75, v49, 0.0, 0.0);
      v80 = (ShapeDrawBitmapCommand *)*((_QWORD *)this + 16);
      LODWORD(v83) = COERCE_UNSIGNED_INT128(ShapeDrawBitmapCommand::getX(v80, 1, v81, v82));
      v84 = ShapeDrawBitmapCommand::getY(*((_QWORD *)this + 16), 1);
      ShapeDrawBitmapCommand::setXY(v80, v76, v83, *(float *)&v84);
      return ShapeDrawBitmapCommand::setUV(v80, v76, 0.0, 1.0);
    }

    __int64 __fastcall AttackRadiusSprite::initArcShape(#1344 *this)
    {
      float v2; // s11
      float v3; // s1
      float v4; // s0
      float v5; // s9
      int v6; // w23
      double v7; // d8
      float v8; // s10
      void *v9; // x0
      void *v10; // x20
      int v11; // w22
      int v12; // w20
      __int64 v13; // x0
      __int64 v14; // x0
      __int64 v15; // x9
      ShapeDrawBitmapCommand *v16; // x21
      float v17; // s12
      float v18; // s11
      __double2 v19; // kr00_16
      float v20; // s10
      float v21; // s14
      __double2 v22; // kr10_16
      int v23; // w24
      int v24; // w20
      float v25; // s13
      float v26; // s8
      float v27; // s15
      float v28; // s12
      int v29; // w23
      float v30; // s9
      __double2 v31; // kr20_16
      float cosval; // s2
      float v33; // s3
      float v34; // s1
      float v35; // s0
      float v36; // s1
      float v37; // s3
      float v38; // s2
      bool v39; // nf
      float v40; // s9
      float v41; // s10
      ShapeDrawBitmapCommand *v42; // x21
      ShapeDrawBitmapCommand *v43; // x21
      int v44; // w20
      int v45; // w20
      ShapeDrawBitmapCommand *v46; // x21
      ShapeDrawBitmapCommand *v47; // x21
      int v48; // w23
      __double2 v49; // kr30_16
      float v50; // s2
      float v51; // s1
      ShapeDrawBitmapCommand *v52; // x21
      int v53; // w20
      long double v54; // q0
      long double v55; // q1
      long double v56; // q0
      float v57; // s9
      long double v58; // q0
      ShapeDrawBitmapCommand *v59; // x21
      long double v60; // q0
      long double v61; // q1
      float v62; // s9
      long double v63; // q0
      float v65; // [xsp+80h] [xbp-80h]
      float v66; // [xsp+84h] [xbp-7Ch]
      float v67; // [xsp+88h] [xbp-78h]
      float v68; // [xsp+8Ch] [xbp-74h]
    
      v2 = (float)*(int *)(*((_QWORD *)this + 15) + 8LL);
      v3 = *((float *)this + 24);
      if ( (float)(v3 - v2) <= (float)(v3 * 0.5) )
        v4 = v3 * 0.5;
      else
        v4 = (float)*(int *)(*((_QWORD *)this + 15) + 8LL);
      v68 = v3 - v4;
      v5 = *((float *)this + 27);
      v6 = (int)(float)((float)((float)(v3 * v5) / 48.0) + 0.99);
      v67 = v5 / (float)v6;
      if ( v67 > 0.098175 )
      {
        v6 = (int)(float)((float)(v5 / 0.098175) + 0.99);
        v67 = v5 / (float)v6;
      }
      v7 = asin((float)(v4 / v68));
      v8 = *((float *)this + 26);
      v9 = (void *)*((_QWORD *)this + 17);
      if ( v9 )
        operator delete(v9);
      *((_QWORD *)this + 17) = 0;
      v10 = (void *)*((_QWORD *)this + 16);
      if ( v10 )
      {
        ShapeDrawBitmapCommand::~ShapeDrawBitmapCommand(*((ShapeDrawBitmapCommand **)this + 16));
        operator delete(v10);
      }
      v11 = 2 * v6;
      v12 = 2 * v6 + 6;
      *((_QWORD *)this + 16) = 0;
      if ( is_mul_ok(v12, 0xCu) )
        v13 = 12LL * v12;
      else
        v13 = -1;
      v14 = operator new[](v13);
      if ( 2 * v6 != -6 )
      {
        v15 = v14;
        do
        {
          *(_DWORD *)v15 = 0;
          *(_QWORD *)(v15 + 4) = 0;
          v15 += 12;
        }
        while ( v15 != v14 + 12LL * v12 );
      }
      v65 = v2;
      *((_QWORD *)this + 17) = v14;
      v16 = (ShapeDrawBitmapCommand *)operator new(24);
      ShapeDrawBitmapCommand::ShapeDrawBitmapCommand(v16);
      v66 = (float)(v8 + (float)(v5 * -0.5)) + 0.7854;
      v17 = v7;
      *((_QWORD *)this + 16) = v16;
      ShapeDrawBitmapCommand::setTexture(v16, *((_QWORD *)this + 15));
      ShapeDrawBitmapCommand::setData(*((_QWORD *)this + 16), *((_QWORD *)this + 17), (unsigned int)(v11 + 6));
      v18 = v17 + v66;
      v19 = __sincos_stret((float)(v17 + v66));
      v20 = *((float *)this + 25);
      v21 = (float)(v5 + v66) - v17;
      v22 = __sincos_stret(v21);
      if ( v6 < 0 )
      {
        v45 = 0;
      }
      else
      {
        v23 = 0;
        v24 = 0;
        v26 = v68 * v19.__sinval / v20;
        v28 = v68 * v22.__sinval / v20;
        v29 = v6 + 1;
        while ( 1 )
        {
          v30 = v66 + (float)(v67 * (float)v23);
          v31 = __sincos_stret(v30);
          cosval = v31.__cosval;
          v33 = v31.__sinval / v20;
          v34 = *((float *)this + 24);
          v35 = cosval * v34;
          v36 = v34 * v33;
          v37 = v68 * v33;
          v38 = v68 * cosval;
          if ( v30 > v21 )
          {
            v37 = v28;
            v27 = v68 * v22.__cosval;
            v38 = v27;
          }
          v39 = v30 < v18;
          v40 = v30 >= v18 ? v37 : v26;
          if ( v39 )
          {
            v25 = v68 * v19.__cosval;
            v41 = v25;
          }
          else
          {
            v41 = v38;
          }
          v42 = (ShapeDrawBitmapCommand *)*((_QWORD *)this + 16);
          ShapeDrawBitmapCommand::setXY(v42, v24, v35, v36);
          ShapeDrawBitmapCommand::setUV(v42, v24, 0.0, 0.0);
          v43 = (ShapeDrawBitmapCommand *)*((_QWORD *)this + 16);
          v44 = v24 + 1;
          ShapeDrawBitmapCommand::setXY(v43, v44, v41, v40);
          ShapeDrawBitmapCommand::setUV(v43, v44, 0.0, 1.0);
          if ( v29 == ++v23 )
            break;
          v20 = *((float *)this + 25);
          v24 = v44 + 1;
        }
        v45 = v11 + 2;
      }
      v46 = (ShapeDrawBitmapCommand *)*((_QWORD *)this + 16);
      ShapeDrawBitmapCommand::setXY(v46, v45, 0.0, 0.0);
      ShapeDrawBitmapCommand::setUV(v46, v45, 0.0, 0.0);
      v47 = (ShapeDrawBitmapCommand *)*((_QWORD *)this + 16);
      v48 = v45 + 2;
      v49 = __sincos_stret((float)(*((float *)this + 26) + 0.7854));
      v50 = v65 * v49.__cosval;
      v51 = v65 * v49.__sinval / *((float *)this + 25);
      ShapeDrawBitmapCommand::setXY(v47, v45 | 1, v50, v51);
      ShapeDrawBitmapCommand::setUV(v47, v45 | 1, 0.0, 1.0);
      v52 = (ShapeDrawBitmapCommand *)*((_QWORD *)this + 16);
      v53 = v45 + 3;
      v56 = ShapeDrawBitmapCommand::getX(v52, 0, v54, v55);
      v57 = *(float *)&v56;
      v58 = ShapeDrawBitmapCommand::getY(*((_QWORD *)this + 16), 0);
      ShapeDrawBitmapCommand::setXY(v52, v48, v57, *(float *)&v58);
      ShapeDrawBitmapCommand::setUV(v52, v48, 0.0, 0.0);
      v59 = (ShapeDrawBitmapCommand *)*((_QWORD *)this + 16);
      LODWORD(v62) = COERCE_UNSIGNED_INT128(ShapeDrawBitmapCommand::getX(v59, 1, v60, v61));
      v63 = ShapeDrawBitmapCommand::getY(*((_QWORD *)this + 16), 1);
      ShapeDrawBitmapCommand::setXY(v59, v53, v62, *(float *)&v63);
      return ShapeDrawBitmapCommand::setUV(v59, v53, 0.0, 1.0);
    }

    // attributes: thunk
    void __fastcall AttackRadiusSprite::AttackRadiusSprite(
            AttackRadiusSprite *this,
            float a2,
            float a3,
            float a4,
            float a5,
            float a6)
    {
      __ZN18AttackRadiusSpriteC2Efffff(this, a2, a3, a4, a5, a6);
    }

    void __fastcall AttackRadiusSprite::~AttackRadiusSprite(#1344 *this)
    {
      void *v2; // x20
      __int64 v3; // x0
      void *v4; // x20
      __int64 v5; // x0
    
      *(_QWORD *)this = off_1004609C0;
      DisplayObject::removeFromParent(this);
      v2 = (void *)*((_QWORD *)this + 16);
      if ( v2 )
      {
        ShapeDrawBitmapCommand::~ShapeDrawBitmapCommand(*((ShapeDrawBitmapCommand **)this + 16));
        operator delete(v2);
      }
      v3 = *((_QWORD *)this + 17);
      if ( v3 )
        operator delete[](v3);
      v4 = (void *)*((_QWORD *)this + 18);
      if ( v4 )
      {
        ShapeDrawBitmapCommand::~ShapeDrawBitmapCommand(*((ShapeDrawBitmapCommand **)this + 18));
        operator delete(v4);
      }
      v5 = *((_QWORD *)this + 19);
      if ( v5 )
        operator delete[](v5);
      *((_DWORD *)this + 23) = 0;
      *((_DWORD *)this + 24) = 0;
      *(_QWORD *)((char *)this + 100) = 1065353216;
      *((_DWORD *)this + 27) = 0;
      *((_BYTE *)this + 112) = 0;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 19) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 15) = 0;
      Sprite::~Sprite(this);
    }

    // attributes: thunk
    void __fastcall AttackRadiusSprite::~AttackRadiusSprite(#1344 *this)
    {
      __ZN18AttackRadiusSpriteD2Ev(this);
    }

    void __fastcall AttackRadiusSprite::~AttackRadiusSprite(#1344 *this)
    {
      AttackRadiusSprite::~AttackRadiusSprite(this);
      operator delete(this);
    }

    __int64 __fastcall AttackRadiusSprite::render(#1344 *this, #1256 *a2, #1246 *a3, int a4, float a5)
    {
      __int64 v7; // x19
      __int64 v8; // x0
      _BYTE v10[8]; // [xsp+8h] [xbp-38h] BYREF
      _BYTE v11[28]; // [xsp+10h] [xbp-30h] BYREF
      int v12; // [xsp+2Ch] [xbp-14h] BYREF
    
      v12 = a4;
      Matrix2x3::Matrix2x3((#1256 *)v11, (#1344 *)((char *)this + 16), a2);
      ColorTransform::ColorTransform((ColorTransform *)v10, (#1344 *)((char *)this + 9), a3, &v12);
      v12 |= *((_DWORD *)this + 10);
      v7 = ShapeDrawBitmapCommand::render(*((_QWORD *)this + 16), v11, v10);
      v8 = *((_QWORD *)this + 18);
      if ( v8 )
        v7 = (unsigned int)v7 | (unsigned int)ShapeDrawBitmapCommand::render(v8, v11, v10);
      ColorTransform::~ColorTransform((ColorTransform *)v10);
      Matrix2x3::~Matrix2x3((#1256 *)v11);
      return v7;
    }

}; // end class AttackRadiusSprite
