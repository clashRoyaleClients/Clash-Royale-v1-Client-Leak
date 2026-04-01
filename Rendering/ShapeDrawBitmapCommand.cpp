class ShapeDrawBitmapCommand
{
public:

    __int64 __fastcall ShapeDrawBitmapCommand::ShapeDrawBitmapCommand(__int64 result)
    {
      *(_DWORD *)result = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      return result;
    }

    __int64 __fastcall ShapeDrawBitmapCommand::~ShapeDrawBitmapCommand(__int64 result)
    {
      *(_DWORD *)result = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      return result;
    }

    bool __fastcall ShapeDrawBitmapCommand::render(__int64 a1, float *a2, unsigned __int8 *a3, int a4)
    {
      float *v7; // x8
      float v8; // s3
      float v9; // s4
      float v10; // s0
      float v11; // s1
      float v12; // s2
      float v13; // s3
      int v14; // s4
      float v15; // s2
      float v16; // s3
      float v17; // s5
      float v18; // s6
      float v19; // s3
      int v20; // s5
      float v21; // s5
      float v22; // s7
      float v23; // s5
      float v24; // s7
      bool v25; // nf
      float v26; // s4
      float v27; // s5
      float v28; // s0
      float v29; // s6
      float v30; // s16
      float v31; // s17
      bool v32; // nf
      float v33; // s2
      float v34; // s0
      float v35; // s6
      float v36; // s8
      float v37; // s9
      float v38; // s0
      float v39; // s1
      float v40; // s10
      float v41; // s11
      int v42; // w24
      int v43; // w9
      float *v44; // x8
      float *v45; // x10
      float v46; // s0
      float v47; // s1
      float v48; // s2
      float v49; // s0
      float v50; // s1
      __int64 Instance; // x22
      int v52; // w8
      int v53; // w9
      int v54; // w13
      _DWORD *v55; // x11
      int v56; // w14
      __int64 v57; // x15
      __int64 v58; // x10
      _DWORD *v59; // x16
      int v60; // w13
      int v61; // w14
      int v62; // w13
      int v63; // w14
      int v64; // w12
      int v65; // w13
      int v66; // w17
      int v67; // w14
      int v68; // w12
      int v69; // w13
      int *v70; // x11
      _DWORD *v71; // x10
      int *v72; // x14
      int v73; // w15
      int v74; // w16
      int v75; // t1
      int v76; // t1
      bool v78; // [xsp+Fh] [xbp-51h] BYREF
    
      v7 = *(float **)(a1 + 8);
      v8 = *v7;
      v9 = v7[1];
      *(float *)&ShapeDrawBitmapCommand::render(Matrix2x3 const&,ColorTransform const&,int)::rotated = a2[4]
                                                                                                     + (float)((float)(*v7 * *a2) + (float)(v9 * a2[2]));
      v10 = *(float *)&ShapeDrawBitmapCommand::render(Matrix2x3 const&,ColorTransform const&,int)::rotated;
      v11 = a2[5] + (float)((float)(v8 * a2[1]) + (float)(v9 * a2[3]));
      *(float *)&dword_1004F9F7C = v11;
      v12 = v7[3];
      v13 = v7[4];
      *(float *)&v14 = a2[4] + (float)((float)(v12 * *a2) + (float)(v13 * a2[2]));
      dword_1004F9F80 = v14;
      v15 = a2[5] + (float)((float)(v12 * a2[1]) + (float)(v13 * a2[3]));
      dword_1004F9F84 = LODWORD(v15);
      v16 = v7[6];
      v17 = v7[7];
      v18 = a2[4] + (float)((float)(v16 * *a2) + (float)(v17 * a2[2]));
      *(float *)&dword_1004F9F88 = v18;
      v19 = a2[5] + (float)((float)(v16 * a2[1]) + (float)(v17 * a2[3]));
      dword_1004F9F8C = LODWORD(v19);
      if ( *(float *)&v14 > *(float *)&ShapeDrawBitmapCommand::render(Matrix2x3 const&,ColorTransform const&,int)::rotated )
        v20 = v14;
      else
        v20 = ShapeDrawBitmapCommand::render(Matrix2x3 const&,ColorTransform const&,int)::rotated;
      if ( *(float *)&v14 >= *(float *)&ShapeDrawBitmapCommand::render(Matrix2x3 const&,ColorTransform const&,int)::rotated )
      {
        v10 = *(float *)&v20;
        v14 = ShapeDrawBitmapCommand::render(Matrix2x3 const&,ColorTransform const&,int)::rotated;
      }
      if ( v15 > v11 )
        v21 = v15;
      else
        v21 = v11;
      v22 = v11;
      if ( v15 >= v11 )
      {
        v11 = v21;
        v15 = v22;
      }
      if ( v18 > v10 )
        v23 = v18;
      else
        v23 = v10;
      v24 = *(float *)&v14;
      v25 = v18 < *(float *)&v14;
      if ( v18 >= *(float *)&v14 )
        v26 = v23;
      else
        v26 = v10;
      if ( v25 )
        v27 = v18;
      else
        v27 = v24;
      v28 = v7[9];
      v29 = v7[10];
      if ( v19 > v11 )
        v30 = v19;
      else
        v30 = v11;
      v31 = v15;
      v32 = v19 < v15;
      v33 = a2[4] + (float)((float)(v28 * *a2) + (float)(v29 * a2[2]));
      *(float *)&dword_1004F9F90 = v33;
      v34 = v28 * a2[1];
      v35 = v29 * a2[3];
      if ( v32 )
        v36 = v11;
      else
        v36 = v30;
      if ( v32 )
        v37 = v19;
      else
        v37 = v31;
      v38 = a2[5] + (float)(v34 + v35);
      dword_1004F9F94 = LODWORD(v38);
      if ( v33 > v26 )
        v39 = v33;
      else
        v39 = v26;
      if ( v33 >= v27 )
        v40 = v39;
      else
        v40 = v26;
      if ( v33 >= v27 )
        v41 = v27;
      else
        v41 = v33;
      if ( v38 >= v37 )
      {
        if ( v38 > v36 )
          v36 = v38;
      }
      else
      {
        v37 = v38;
      }
      v42 = *(_DWORD *)a1;
      if ( *(int *)a1 >= 5 )
      {
        v43 = v42 - 4;
        v44 = v7 + 13;
        v45 = (float *)&unk_1004F9F9C;
        do
        {
          v46 = *(v44 - 1);
          v47 = *v44;
          v48 = a2[4] + (float)((float)(v46 * *a2) + (float)(*v44 * a2[2]));
          *(v45 - 1) = v48;
          v49 = a2[5] + (float)((float)(v46 * a2[1]) + (float)(v47 * a2[3]));
          *v45 = v49;
          if ( v48 > v40 )
            v50 = v48;
          else
            v50 = v40;
          if ( v48 < v41 )
            v41 = v48;
          else
            v40 = v50;
          if ( v49 >= v37 )
          {
            if ( v49 > v36 )
              v36 = v49;
          }
          else
          {
            v37 = v49;
          }
          --v43;
          v44 += 3;
          v45 += 2;
        }
        while ( v43 );
      }
      v78 = 0;
      Instance = Stage::getInstance((Stage *)a1);
      if ( (unsigned int)Stage::shapeStart(
                           (MappedFile *)Instance,
                           v41,
                           v37,
                           v40,
                           v36,
                           *(AvatarRankingEntry **)(a1 + 16),
                           a4,
                           &v78) )
      {
        Stage::addTriangles((Stage *)Instance, v42 - 2);
        v52 = *a3 | (unsigned __int16)(a3[1] << 8) | (a3[2] << 16) & 0xFFFFFF | (a3[3] << 24);
        v53 = a3[4] | (unsigned __int16)(a3[5] << 8) | (a3[6] << 16);
        v54 = dword_1004F9F7C;
        v55 = *(_DWORD **)(a1 + 8);
        v56 = v55[2];
        v57 = *(int *)(Instance + 396);
        v58 = *(_QWORD *)(Instance + 384);
        v59 = (_DWORD *)(v58 + 20 * v57);
        *v59 = ShapeDrawBitmapCommand::render(Matrix2x3 const&,ColorTransform const&,int)::rotated;
        v59[1] = v54;
        v59[2] = v56;
        v59[3] = v52;
        v59[4] = v53;
        v60 = dword_1004F9F84;
        v61 = v55[5];
        v59[5] = dword_1004F9F80;
        v59[6] = v60;
        v59[7] = v61;
        v59[8] = v52;
        v59[9] = v53;
        v62 = dword_1004F9F8C;
        v63 = v55[8];
        v59[10] = dword_1004F9F88;
        v59[11] = v62;
        v59[12] = v63;
        v59[13] = v52;
        v59[14] = v53;
        v64 = dword_1004F9F90;
        v65 = dword_1004F9F94;
        v66 = v55[11];
        v67 = v57 + 4;
        *(_DWORD *)(Instance + 396) = v57 + 4;
        v59[15] = v64;
        v59[16] = v65;
        v59[17] = v66;
        v59[18] = v52;
        v59[19] = v53;
        if ( v42 >= 5 )
        {
          v68 = v42 + v67 - 5;
          v69 = v42 - 4;
          v70 = v55 + 14;
          v71 = (_DWORD *)(v58 + 20LL * v67 + 8);
          v72 = (int *)&unk_1004F9F9C;
          do
          {
            v73 = *(v72 - 1);
            v75 = *v72;
            v72 += 2;
            v74 = v75;
            v76 = *v70;
            v70 += 3;
            *(v71 - 2) = v73;
            *(v71 - 1) = v74;
            *v71 = v76;
            v71[1] = v52;
            v71[2] = v53;
            --v69;
            v71 += 5;
          }
          while ( v69 );
          *(_DWORD *)(Instance + 396) = v68 + 1;
        }
      }
      return v78;
    }

    __int64 __fastcall ShapeDrawBitmapCommand::collisionRender(
            int *a1,
            __int128 *a2,
            unsigned __int8 *a3,
            double a4,
            double a5,
            double a6)
    {
      Stage *v7; // x0
      __int64 Instance; // x0
      __int64 v9; // x8
      int v10; // w9
      int v11; // w10
      float v12; // s1
      float v13; // s2
      float v14; // s0
      float v15; // s1
      int v16; // w11
      int v17; // w14
      int v18; // w15
      __int64 v19; // x10
      char v20; // w20
      int v21; // w13
      __int64 v22; // x9
      float *v23; // x14
      float v24; // s2
      __int64 v25; // x13
      float v26; // s3
      __int128 v28; // [xsp+0h] [xbp-50h] BYREF
      float v29[4]; // [xsp+10h] [xbp-40h]
      _BYTE v30[8]; // [xsp+20h] [xbp-30h]
    
      if ( ShapeDrawBitmapCommand::sm_accurateCollisionRender )
      {
        *(_QWORD *)v29 = *((_QWORD *)a2 + 2);
        v28 = *a2;
        Matrix2x3::inverse((DataLoaderShader *)&v28, *(double *)&v28, a5, a6);
        Instance = Stage::getInstance(v7);
        v9 = *a1;
        if ( (int)v9 < 1 )
        {
          v20 = 0;
        }
        else
        {
          v10 = 0;
          v11 = 0;
          v12 = *(float *)(Instance + 92);
          v13 = *(float *)(Instance + 96);
          v14 = v29[0] + (float)((float)(v12 * *(float *)&v28) + (float)(v13 * *((float *)&v28 + 2)));
          v15 = v29[1] + (float)((float)(v12 * *((float *)&v28 + 1)) + (float)(v13 * *((float *)&v28 + 3)));
          v16 = v9 - 1;
          do
          {
            v17 = !(v11 & 1);
            v18 = v10 & -v17 | v16 & -(v11 & 1);
            v10 += v17;
            v16 -= v11 & 1;
            v30[v18] = v11++;
          }
          while ( v11 < (int)v9 );
          v19 = 0;
          v20 = 0;
          v21 = v9 - 1;
          v22 = *((_QWORD *)a1 + 1);
          do
          {
            v23 = (float *)(v22 + 12LL * (unsigned __int8)v30[v19]);
            v24 = v23[1];
            v25 = (unsigned __int8)v30[v21];
            v26 = *(float *)(v22 + 12 * v25 + 4);
            if ( v24 > v15 != v26 > v15
              && v14 < (float)(*v23
                             + (float)((float)((float)(v15 - v24) * (float)(*(float *)(v22 + 12 * v25) - *v23))
                                     / (float)(v26 - v24))) )
            {
              v20 ^= 1u;
            }
            v21 = v19++;
          }
          while ( v19 < v9 );
        }
        Matrix2x3::~Matrix2x3((DataLoaderShader *)&v28);
      }
      else
      {
        v20 = ShapeDrawBitmapCommand::render((__int64)a1, (float *)a2, a3, 0);
      }
      return v20 & 1;
    }

    __int64 __fastcall ShapeDrawBitmapCommand::load(int *a1, SupercellSWF *a2, int a3, __int64 a4)
    {
      int UnsignedChar; // w22
      int v9; // w0
      __int64 Texture; // x0
      __int64 result; // x0
      int v12; // w22
      int v13; // w23
      __int64 *v14; // x8
      __int64 v15; // x8
      __int64 v16; // x25
      int *v17; // x26
      int v18; // s0
      int v19; // s0
      __int64 v20; // x22
      int *v21; // x23
      unsigned __int16 Short; // w21
      __int64 v23; // x8
      __int64 v24; // x21
      int *v25; // x25
      int v26; // w26
      bool v27; // vf
      int v28; // w8
      __int64 v29; // x9
      __int64 v30; // x10
      int v31; // w11
      __int64 v32; // x14
      _BYTE *v33; // x15
      __int64 v34; // x14
      _BYTE *v35; // x15
      __int64 v36; // x14
      _BYTE v37[4]; // [xsp+8h] [xbp-A8h] BYREF
      int v38; // [xsp+Ch] [xbp-A4h] BYREF
      _BYTE v39[88]; // [xsp+10h] [xbp-A0h] BYREF
      __int64 v40; // [xsp+68h] [xbp-48h] BYREF
    
      UnsignedChar = SupercellSWF::readUnsignedChar(a2);
      *((_QWORD *)a1 + 1) = a4;
      if ( a3 == 4 )
        v9 = 4;
      else
        v9 = SupercellSWF::readUnsignedChar(a2);
      *a1 = v9;
      Texture = SupercellSWF::getTexture(a2, UnsignedChar);
      result = SWFTexture::getGLImage(Texture);
      *((_QWORD *)a1 + 2) = result;
      v12 = *(_DWORD *)(result + 4);
      v13 = *(_DWORD *)(result + 8);
      v14 = (__int64 *)v37;
      do
      {
        *(_DWORD *)v14 = 0;
        *(__int64 *)((char *)v14 + 4) = 0;
        v14 = (__int64 *)((char *)v14 + 12);
      }
      while ( v14 != &v40 );
      LODWORD(v15) = *a1;
      if ( *a1 >= 1 )
      {
        v16 = 0;
        v17 = &v38;
        do
        {
          SupercellSWF::readTwip(a2);
          *(v17 - 1) = v18;
          result = SupercellSWF::readTwip(a2);
          *v17 = v19;
          v17 += 3;
          ++v16;
          v15 = *a1;
        }
        while ( v16 < v15 );
      }
      if ( a3 == 22 )
      {
        if ( (int)v15 < 1 )
          return result;
        v20 = 0;
        v21 = (int *)v39;
        do
        {
          Short = SupercellSWF::readShort(a2);
          result = SupercellSWF::readShort(a2);
          *v21 = Short | ((unsigned __int16)result << 16);
          v21 += 3;
          ++v20;
          v23 = *a1;
        }
        while ( v20 < v23 );
      }
      else
      {
        if ( (int)v15 < 1 )
          return result;
        v24 = 0;
        v25 = (int *)v39;
        do
        {
          v26 = (int)(0xFFFF * SupercellSWF::readShort(a2)) / v12;
          result = SupercellSWF::readShort(a2);
          *v25 = v26 | ((0xFFFF * (int)result / v13) << 16);
          v25 += 3;
          ++v24;
          v23 = *a1;
        }
        while ( v24 < v23 );
      }
      v27 = __OFSUB__((_DWORD)v23, 1);
      v28 = v23 - 1;
      if ( v28 < 0 == v27 )
      {
        v29 = 0;
        v30 = 0;
        v31 = 0;
        do
        {
          v32 = *((_QWORD *)a1 + 1);
          if ( (v30 & 1) != 0 )
          {
            v35 = &v37[12 * v28];
            v36 = v32 + v29;
            *(_DWORD *)(v36 + 8) = *((_DWORD *)v35 + 2);
            *(_QWORD *)v36 = *(_QWORD *)v35;
            --v28;
          }
          else
          {
            v33 = &v37[12 * v31];
            v34 = v32 + v29;
            *(_DWORD *)(v34 + 8) = *((_DWORD *)v33 + 2);
            *(_QWORD *)v34 = *(_QWORD *)v33;
            ++v31;
          }
          ++v30;
          v29 += 12;
        }
        while ( v30 < *a1 );
      }
      return result;
    }

    __int64 __fastcall ShapeDrawBitmapCommand::setXY(__int64 result, int a2, float a3, float a4)
    {
      float *v4; // x8
    
      v4 = (float *)(*(_QWORD *)(result + 8) + 12LL * a2);
      *v4 = a3;
      v4[1] = a4;
      return result;
    }

    float __fastcall ShapeDrawBitmapCommand::setUV(__int64 a1, int a2, float a3, float a4)
    {
      int v4; // w8
    
      v4 = (int)(float)(a3 * 65535.0);
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL * a2 + 8) = v4 | ((int)(float)(a4 * 65535.0) << 16);
      return a4 * 65535.0;
    }

    __int64 __fastcall ShapeDrawBitmapCommand::setTexture(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 16) = a2;
      return result;
    }

    int *__fastcall ShapeDrawBitmapCommand::copyValuesFrom(int *result, __int64 a2)
    {
      __int64 v2; // x8
      __int64 v3; // x9
      __int64 v4; // x8
      __int64 v5; // x9
      __int64 v6; // x8
      __int64 v7; // x9
      __int64 v8; // x8
      __int64 v9; // x9
      __int64 v10; // x8
      __int64 v11; // x9
      __int64 v12; // x10
      __int64 v13; // x11
    
      *((_QWORD *)result + 2) = *(_QWORD *)(a2 + 16);
      v2 = *((_QWORD *)result + 1);
      v3 = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v2 + 8) = *(_DWORD *)(v3 + 8);
      *(_QWORD *)v2 = *(_QWORD *)v3;
      v4 = *((_QWORD *)result + 1);
      v5 = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v4 + 20) = *(_DWORD *)(v5 + 20);
      *(_QWORD *)(v4 + 12) = *(_QWORD *)(v5 + 12);
      v6 = *((_QWORD *)result + 1);
      v7 = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v6 + 32) = *(_DWORD *)(v7 + 32);
      *(_QWORD *)(v6 + 24) = *(_QWORD *)(v7 + 24);
      v8 = *((_QWORD *)result + 1);
      v9 = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v8 + 44) = *(_DWORD *)(v9 + 44);
      *(_QWORD *)(v8 + 36) = *(_QWORD *)(v9 + 36);
      v10 = 4;
      v11 = 48;
      if ( *result >= 5 )
      {
        do
        {
          v12 = *((_QWORD *)result + 1) + v11;
          v13 = *(_QWORD *)(a2 + 8) + v11;
          *(_DWORD *)(v12 + 8) = *(_DWORD *)(v13 + 8);
          *(_QWORD *)v12 = *(_QWORD *)v13;
          ++v10;
          v11 += 12;
        }
        while ( v10 < *result );
      }
      return result;
    }

    __int64 __fastcall ShapeDrawBitmapCommand::getVertexCount(unsigned int *a1)
    {
      return *a1;
    }

    __int64 __fastcall ShapeDrawBitmapCommand::setData(__int64 result, const char *a2, __int64 a3)
    {
      String v3; // [xsp+18h] [xbp-28h] BYREF
    
      *(_QWORD *)(result + 8) = a2;
      *(_DWORD *)result = a3;
      if ( (int)a3 >= 513 )
      {
        String::getFormatted(
          (__int64 *)&v3.m_length,
          (String *)"ShapeDrawBitmapCommand has more than %i vertices: %i",
          a2,
          512,
          a3);
        Debugger::error(&v3);
      }
      return result;
    }

    __int64 __fastcall ShapeDrawBitmapCommand::getData(__int64 a1)
    {
      return *(_QWORD *)(a1 + 8);
    }

    float __fastcall ShapeDrawBitmapCommand::getX(__int64 a1, int a2)
    {
      return *(float *)(*(_QWORD *)(a1 + 8) + 12LL * a2);
    }

    float __fastcall ShapeDrawBitmapCommand::getY(__int64 a1, int a2)
    {
      return *(float *)(*(_QWORD *)(a1 + 8) + 12LL * a2 + 4);
    }

}; // end class ShapeDrawBitmapCommand
