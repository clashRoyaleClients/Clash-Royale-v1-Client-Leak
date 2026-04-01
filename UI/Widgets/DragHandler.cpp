class DragHandler
{
public:

    _QWORD *__fastcall DragHandler::DragHandler(_QWORD *a1)
    {
      __int64 v2; // x9
      _DWORD *v3; // x10
    
      *a1 = off_1004758E0;
      *(_QWORD *)((char *)a1 + 52) = 0;
      *(_QWORD *)((char *)a1 + 28) = 0;
      *(_QWORD *)((char *)a1 + 20) = 0;
      v2 = 31;
      do
      {
        v3 = &a1[v2];
        *v3 = 0;
        v3[1] = 0;
        ++v2;
      }
      while ( v3 + 2 != (_DWORD *)(a1 + 35) );
      *(_QWORD *)((char *)a1 + 316) = 0;
      a1[35] = 0;
      a1[36] = 0;
      DragHandler::initializeMembers((AllianceJoinRequestPopup *)a1);
      return a1;
    }

    _QWORD *__fastcall DragHandler::DragHandler(_QWORD *a1)
    {
      DragHandler::DragHandler(a1);
      return a1;
    }

    __int64 __fastcall DragHandler::init(
            __int64 a1,
            long double a2,
            long double a3,
            long double a4,
            long double a5,
            long double a6,
            long double a7)
    {
      return (*(__int64 (__fastcall **)(__int64, long double, long double, long double, long double, long double, long double, long double, long double))(*(_QWORD *)a1 + 24LL))(
               a1,
               a2,
               a3,
               a4,
               a5,
               COERCE_LONG_DOUBLE((unsigned __int128)0),
               COERCE_LONG_DOUBLE((unsigned __int128)0),
               a6,
               a7);
    }

    __int64 __fastcall DragHandler::init(
            __int64 a1,
            long double a2,
            float a3,
            float a4,
            float a5,
            float a6,
            float a7,
            float a8,
            float a9)
    {
      float v12; // s10
      float v13; // s0
      float v14; // s11
      float v15; // s1
      float v16; // s1
      float v17; // s1
    
      *(float *)(a1 + 344) = a6;
      *(float *)(a1 + 348) = a7;
      *(float *)(a1 + 72) = a4;
      *(float *)(a1 + 76) = a5;
      if ( a8 <= 0.0 )
        v12 = 1.0;
      else
        v12 = a8;
      v13 = (float)(a4 * 0.5) + *(float *)&a2;
      if ( a9 <= 0.0 )
        v14 = 1.0;
      else
        v14 = a9;
      *(float *)(a1 + 80) = v12;
      *(float *)(a1 + 84) = v14;
      v15 = (float)(a5 * 0.5) + a3;
      *(float *)(a1 + 280) = v13;
      *(float *)(a1 + 284) = v15;
      *(float *)(a1 + 288) = v13;
      *(float *)(a1 + 292) = v15;
      if ( *(_BYTE *)(a1 + 362) || *(_BYTE *)(a1 + 363) )
      {
        *(float *)&a2 = DragHandler::getMidScreen(a1, 1);
        v17 = *(float *)(a1 + 292) - v16;
        *(float *)(a1 + 280) = (float)(*(float *)(a1 + 288) - *(float *)&a2) + *(float *)(a1 + 280);
        *(float *)(a1 + 284) = v17 + *(float *)(a1 + 284);
      }
      *(float *)&a2 = a4 / v12;
      if ( (float)(a4 / v12) >= (float)(a5 / v14) )
        *(float *)&a2 = a5 / v14;
      return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)a1 + 168LL))(a1, a2);
    }

    float __fastcall DragHandler::getMidScreen(__int64 a1)
    {
      __int64 v1; // x10
      int v2; // w9
      float v3; // s0
      float v4; // s1
      float v5; // s2
      float *v6; // x10
      float v7; // s3
      float v8; // s4
      float v9; // t1
      float v11; // [xsp+8h] [xbp-8h]
    
      v1 = *(_QWORD *)(a1 + 280);
      v11 = *(float *)&v1;
      v2 = *(_DWORD *)(a1 + 8);
      if ( v2 > 0 )
      {
        v3 = 1.0 / (float)(*(float *)(a1 + 296) * (float)v2);
        v4 = *((float *)&v1 + 1);
        v5 = *(float *)&v1;
        v6 = (float *)(a1 + 160);
        do
        {
          v7 = *(v6 - 5) - *(v6 - 1);
          v8 = *(v6 - 4);
          v9 = *v6;
          v6 += 20;
          v5 = v5 - (float)(v3 * v7);
          v4 = v4 - (float)(v3 * (float)(v8 - v9));
          --v2;
        }
        while ( v2 );
        v11 = v5;
      }
      DragHandler::checkBounds(*(float *)(a1 + 332));
      return v11;
    }

    __int64 __fastcall DragHandler::setScreenCoord(__int64 result, float a2, float a3)
    {
      *(float *)(result + 52) = a2;
      *(float *)(result + 56) = a3;
      return result;
    }

    __int64 __fastcall DragHandler::cancelAllTouches(__int64 result)
    {
      __int64 v1; // x19
      __int64 v2; // x20
    
      v1 = result;
      v2 = *(int *)(result + 8);
      if ( (int)v2 >= 1 )
      {
        do
          result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 72LL))(
                     v1,
                     *(unsigned int *)(v1 + 4 * v2 + 8));
        while ( v2-- > 1 );
      }
      return result;
    }

    _DWORD *__fastcall DragHandler::resetPanningSpeed(_DWORD *result)
    {
      __int64 i; // x8
    
      for ( i = 0; i != 8; i += 2 )
        *(_QWORD *)&result[i + 62] = 0;
      result[79] = 0;
      result[80] = 0;
      result[17] = 0;
      return result;
    }

    __int64 __fastcall DragHandler::enablePanning(__int64 result, char a2)
    {
      *(_BYTE *)(result + 359) = a2;
      return result;
    }

    __int64 __fastcall DragHandler::enablePinching(__int64 result, char a2)
    {
      *(_BYTE *)(result + 358) = a2;
      return result;
    }

    AllianceJoinRequestPopup *__fastcall DragHandler::~DragHandler(AllianceJoinRequestPopup *a1)
    {
      *(_QWORD *)a1 = off_1004758E0;
      DragHandler::initializeMembers(a1);
      return a1;
    }

    void __fastcall DragHandler::~DragHandler(AllianceJoinRequestPopup *a1)
    {
      *(_QWORD *)a1 = off_1004758E0;
      DragHandler::initializeMembers(a1);
      operator delete(a1);
    }

    float __fastcall DragHandler::updatePinchOffset(__int64 a1, float a2, float a3)
    {
      __int64 v3; // x8
      float32x2_t v4; // d2
      __int64 v5; // x9
      float32x2_t v6; // d4
      float32x2_t *v7; // x10
      float32x2_t v8; // t1
      float v9; // s0
      float v10; // s3
      float result; // s0
    
      v3 = *(int *)(a1 + 8);
      v4 = 0;
      if ( (int)v3 >= 1 )
      {
        v5 = 0;
        v6 = vmul_f32(*(float32x2_t *)(a1 + 72), (float32x2_t)0x3F0000003F000000LL);
        v7 = (float32x2_t *)(a1 + 140);
        v4 = 0;
        do
        {
          v8 = *v7;
          v7 += 10;
          v4 = vadd_f32(v4, vsub_f32(vsub_f32(v8, *(float32x2_t *)(a1 + 52)), v6));
          ++v5;
        }
        while ( v5 < v3 );
      }
      v4.f32[0] = (float)((float)(v4.f32[0] / (float)(int)v3) / a2) - (float)((float)(v4.f32[0] / (float)(int)v3) / a3);
      v9 = (float)((float)(v4.f32[1] / (float)(int)v3) / a2) - (float)((float)(v4.f32[1] / (float)(int)v3) / a3);
      v10 = v9 + *(float *)(a1 + 284);
      *(float *)(a1 + 280) = v4.f32[0] + *(float *)(a1 + 280);
      *(float *)(a1 + 284) = v10;
      *(float *)(a1 + 288) = v4.f32[0] + *(float *)(a1 + 288);
      result = v9 + *(float *)(a1 + 292);
      *(float *)(a1 + 292) = result;
      return result;
    }

    __int64 __fastcall DragHandler::checkBounds(__int64 a1, float *a2, int a3, float a4)
    {
      float v8; // s9
      float v9; // s0
      int v10; // w22
      float v11; // s1
      float v12; // s9
      __int64 result; // x0
      float v14; // s0
      float v15; // s1
    
      LODWORD(v8) = COERCE_UNSIGNED_INT128(DragHandler::getMinX());
      DragHandler::getMaxX(a1);
      v10 = *(unsigned __int8 *)(a1 + 358);
      if ( *(_BYTE *)(a1 + 358)
        || *(_BYTE *)(a1 + 361) && (float)(*(float *)(a1 + 72) / *(float *)(a1 + 296)) < *(float *)(a1 + 80) )
      {
        v11 = *a2;
        if ( !*(_BYTE *)(a1 + 356) || ((a3 ^ 1) & 1) != 0 )
        {
          if ( v11 < v8 )
          {
            v11 = v8 - (float)((float)(v8 - v11) * a4);
            *a2 = v11;
          }
          if ( v11 > v9 )
          {
            v11 = v9 - (float)((float)(v9 - v11) * a4);
            *a2 = v11;
          }
        }
        else
        {
          if ( v11 < v8 )
          {
            *a2 = v8;
            v11 = v8;
          }
          if ( v11 > v9 )
          {
            *a2 = v9;
            v11 = v9;
          }
        }
        if ( (float)((float)(v11 - v8) * (float)(v11 - v8)) < 0.001 )
        {
          *a2 = v8;
          v11 = v8;
        }
        if ( (float)((float)(v11 - v9) * (float)(v11 - v9)) < 0.001 )
          *a2 = v9;
      }
      else
      {
        *a2 = v8;
      }
      LODWORD(v12) = COERCE_UNSIGNED_INT128(DragHandler::getMinY(a1));
      result = DragHandler::getMaxY(a1);
      if ( v10 || *(_BYTE *)(a1 + 360) && (float)(*(float *)(a1 + 76) / *(float *)(a1 + 296)) < *(float *)(a1 + 84) )
      {
        v15 = a2[1];
        if ( !*(_BYTE *)(a1 + 356) || ((a3 ^ 1) & 1) != 0 )
        {
          if ( v15 < v12 )
          {
            v15 = v12 - (float)((float)(v12 - v15) * a4);
            a2[1] = v15;
          }
          if ( v15 > v14 )
          {
            v15 = v14 - (float)((float)(v14 - v15) * a4);
            a2[1] = v15;
          }
        }
        else
        {
          if ( v15 < v12 )
          {
            a2[1] = v12;
            v15 = v12;
          }
          if ( v15 > v14 )
          {
            a2[1] = v14;
            v15 = v14;
          }
        }
        if ( (float)((float)(v15 - v12) * (float)(v15 - v12)) < 0.001 )
        {
          a2[1] = v12;
          v15 = v12;
        }
        if ( (float)((float)(v15 - v14) * (float)(v15 - v14)) < 0.001 )
          a2[1] = v14;
      }
      else
      {
        a2[1] = v12;
      }
      return result;
    }

    float __fastcall DragHandler::getMinX(__int64 a1)
    {
      float v1; // s0
      float v2; // s1
      float v3; // s2
    
      if ( (*(_BYTE *)(a1 + 352) & 1) == 0 )
      {
        v1 = *(float *)(a1 + 72);
        v2 = *(float *)(a1 + 296);
        return *(float *)(a1 + 344) + (float)((float)(v1 * 0.5) / v2);
      }
      if ( *(_BYTE *)(a1 + 361) )
      {
        v1 = *(float *)(a1 + 72);
        v2 = *(float *)(a1 + 296);
        v3 = *(float *)(a1 + 80);
        if ( (float)(v1 / v2) < v3 )
          return *(float *)(a1 + 344) + (float)((float)(v1 * 0.5) / v2);
      }
      else
      {
        v3 = *(float *)(a1 + 80);
      }
      return *(float *)(a1 + 344) + (float)(v3 * 0.5);
    }

    float __fastcall DragHandler::getMaxX(__int64 a1)
    {
      float v1; // s0
      float v2; // s1
      float v3; // s2
      int v4; // w8
    
      if ( *(_BYTE *)(a1 + 361) )
      {
        v1 = *(float *)(a1 + 72);
        v2 = *(float *)(a1 + 296);
        v3 = *(float *)(a1 + 80);
        if ( (float)(v1 / v2) < v3 )
          return (float)(*(float *)(a1 + 344) + v3) + (float)((float)(v1 * -0.5) / v2);
      }
      v4 = *(_DWORD *)(a1 + 352);
      if ( (v4 & 1) != 0 )
        return *(float *)(a1 + 344) + (float)(*(float *)(a1 + 80) * 0.5);
      if ( (v4 & 8) == 0 )
      {
        v3 = *(float *)(a1 + 80);
        v1 = *(float *)(a1 + 72);
        v2 = *(float *)(a1 + 296);
        return (float)(*(float *)(a1 + 344) + v3) + (float)((float)(v1 * -0.5) / v2);
      }
      return DragHandler::getMinX(a1);
    }

    float __fastcall DragHandler::getMinY(__int64 a1)
    {
      float v1; // s0
      float v2; // s1
      float v3; // s2
    
      if ( (*(_BYTE *)(a1 + 352) & 2) == 0 )
      {
        v1 = *(float *)(a1 + 76);
        v2 = *(float *)(a1 + 296);
        return *(float *)(a1 + 348) + (float)((float)(v1 * 0.5) / v2);
      }
      if ( *(_BYTE *)(a1 + 360) )
      {
        v1 = *(float *)(a1 + 76);
        v2 = *(float *)(a1 + 296);
        v3 = *(float *)(a1 + 84);
        if ( (float)(v1 / v2) < v3 )
          return *(float *)(a1 + 348) + (float)((float)(v1 * 0.5) / v2);
      }
      else
      {
        v3 = *(float *)(a1 + 84);
      }
      return *(float *)(a1 + 348) + (float)(v3 * 0.5);
    }

    float __fastcall DragHandler::getMaxY(__int64 a1)
    {
      float v1; // s0
      float v2; // s1
      float v3; // s2
      int v4; // w8
    
      if ( *(_BYTE *)(a1 + 360) )
      {
        v1 = *(float *)(a1 + 76);
        v2 = *(float *)(a1 + 296);
        v3 = *(float *)(a1 + 84);
        if ( (float)(v1 / v2) < v3 )
          return (float)(*(float *)(a1 + 348) + v3) + (float)((float)(v1 * -0.5) / v2);
      }
      v4 = *(_DWORD *)(a1 + 352);
      if ( (v4 & 2) != 0 )
        return *(float *)(a1 + 348) + (float)(*(float *)(a1 + 84) * 0.5);
      if ( (v4 & 4) == 0 )
      {
        v3 = *(float *)(a1 + 84);
        v1 = *(float *)(a1 + 76);
        v2 = *(float *)(a1 + 296);
        return (float)(*(float *)(a1 + 348) + v3) + (float)((float)(v1 * -0.5) / v2);
      }
      return DragHandler::getMinY(a1);
    }

    __int64 __fastcall DragHandler::setMaxScale(__int64 result, float a2)
    {
      *(float *)(result + 300) = a2;
      return result;
    }

    __int64 __fastcall DragHandler::isTouchUsedForPanOrPinch(__int64 a1)
    {
      if ( *(_BYTE *)(a1 + 362) || *(_BYTE *)(a1 + 363) )
        return DragHandler::isAttachedID();
      else
        return 0;
    }

    __int64 __fastcall DragHandler::isAttachedID(__int64 a1, int a2)
    {
      __int64 v4; // x8
      __int64 v5; // x9
    
      do
      {
        if ( *(int *)(a1 + 8) >= 3 )
        {
          if ( (unsigned int)Assert::report(
                               (__int64)"m_attachedIDCnt <= 2",
                               0,
                               (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/DragHandler.cpp",
                               685) )
            abort();
        }
      }
      while ( Assert::g_false );
      v4 = *(int *)(a1 + 8);
      if ( (int)v4 < 1 )
        return 0;
      v5 = 0;
      while ( *(_DWORD *)(a1 + 12 + 4 * v5) != a2 )
      {
        if ( ++v5 >= v4 )
          return 0;
      }
      return 1;
    }

    __int64 __fastcall DragHandler::update(__int64 a1, long double a2)
    {
      float v4; // s0
      int v5; // w21
      int v6; // w22
      int v7; // w8
      float v8; // s10
      float v9; // s9
      int v10; // s1
      float MidScreen; // s0
      float v12; // s1
      float v13; // s2
      float32x2_t v14; // d0
      __int32 v15; // s1
      float32x2_t v16; // d0
      float v17; // s0
      float v18; // s1
      __int64 v19; // x8
      __int64 v20; // x9
      _DWORD *v21; // x10
      __int64 v22; // x8
      float v23; // s0
      float v24; // s1
      float v25; // s0
      float v26; // s0
      float v27; // s1
      __int64 v28; // x8
      int v29; // w8
      int v30; // w9
      int v31; // w8
      __int64 i; // x8
      float v33; // s0
      float v34; // s1
      float v35; // s10
      float v36; // s11
      float v37; // s9
      float v38; // s0
      float v39; // s0
      float v40; // s1
      float v41; // s0
      float v42; // s1
      float v43; // s10
      float v44; // s11
      float v45; // s9
      float v46; // s0
      float v47; // s1
      float v48; // s0
      float v49; // s2
      float v50; // s4
      float v51; // s1
      float v52; // s1
      float v53; // s2
      float v54; // s2
      __int64 result; // x0
      float v56; // s0
      float v57; // s0
      float v58; // s1
      float v59; // s0
      float v60; // s0
      float32x2_t v61; // d0
    
      v4 = *(float *)(a1 + 340) - *(float *)&a2;
      if ( v4 < 0.0 )
        v4 = 0.0;
      *(float *)(a1 + 340) = v4;
      if ( *(_BYTE *)(a1 + 357) )
        (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)a1 + 232LL))(a1, a2);
      v5 = *(unsigned __int8 *)(a1 + 362);
      v6 = *(unsigned __int8 *)(a1 + 363);
      v7 = *(_DWORD *)(a1 + 8);
      if ( v7 <= 1 )
      {
        *(_BYTE *)(a1 + 363) = 0;
        if ( !v7 )
        {
          if ( v5 )
          {
            v22 = 0;
            *(_QWORD *)(a1 + 316) = 0;
            v23 = 0.0;
            v24 = 0.0;
            do
            {
              v24 = *(float *)(a1 + v22 + 248) + v24;
              *(float *)(a1 + 316) = v24;
              v23 = *(float *)(a1 + v22 + 252) + v23;
              *(float *)(a1 + 320) = v23;
              v22 += 8;
            }
            while ( v22 != 32 );
            *(float *)(a1 + 316) = v24 * 0.25;
            *(float *)(a1 + 320) = v23 * 0.25;
    LABEL_76:
            *(_BYTE *)(a1 + 362) = 0;
            return 0;
          }
          v57 = *(float *)(a1 + 296);
          v58 = *(float *)(a1 + 304);
          if ( v57 >= v58 )
          {
            v58 = *(float *)(a1 + 300);
            if ( v57 <= v58
              || (v60 = v57 - (float)((float)((float)(v57 - v58) / (float)(*(float *)(a1 + 328) + -1.0)) * *(float *)&a2),
                  *(float *)(a1 + 296) = v60,
                  v60 >= (float)(v58 + 0.0001)) )
            {
    LABEL_74:
              *(float *)(a1 + 288) = *(float *)(a1 + 316) + *(float *)(a1 + 288);
              *(float *)(a1 + 292) = *(float *)(a1 + 320) + *(float *)(a1 + 292);
              DragHandler::checkBounds(a1, (float *)(a1 + 288), 1, *(float *)(a1 + 332));
              *(_DWORD *)(a1 + 280) = *(_DWORD *)(a1 + 288);
              *(_DWORD *)(a1 + 284) = *(_DWORD *)(a1 + 292);
              v61 = vmul_f32(*(float32x2_t *)(a1 + 316), (float32x2_t)vdup_n_s32(0x3F666666u));
              *(float32x2_t *)(a1 + 316) = v61;
              if ( vaddv_f32(vmul_f32(v61, v61)) < 0.01 )
                *(_QWORD *)(a1 + 316) = 0;
              goto LABEL_76;
            }
          }
          else
          {
            v59 = v57 + (float)((float)((float)(v58 - v57) / (float)(1.0 - *(float *)(a1 + 324))) * *(float *)&a2);
            *(float *)(a1 + 296) = v59;
            if ( v59 <= (float)(v58 + -0.0001) )
              goto LABEL_74;
          }
          *(float *)(a1 + 296) = v58;
          goto LABEL_74;
        }
      }
      v8 = *(float *)(a1 + 288);
      v9 = *(float *)(a1 + 292);
      if ( v5 )
      {
        *(float *)(a1 + 288) = DragHandler::getMidScreen(a1);
        *(_DWORD *)(a1 + 292) = v10;
        if ( *(_BYTE *)(a1 + 356) )
        {
          MidScreen = DragHandler::getMidScreen(a1);
          v13 = *(float *)(a1 + 288);
          if ( v13 == v8 )
          {
            *(float *)(a1 + 280) = (float)(v13 - MidScreen) + *(float *)(a1 + 280);
          }
          else
          {
            v25 = *(float *)(a1 + 292);
            if ( v25 == v9 )
              *(float *)(a1 + 284) = (float)(v25 - v12) + *(float *)(a1 + 284);
          }
        }
      }
      else
      {
        v14.f32[0] = DragHandler::getMidScreen(a1);
        v14.i32[1] = v15;
        v16 = vsub_f32(*(float32x2_t *)(a1 + 288), v14);
        v17 = vaddv_f32(vmul_f32(v16, v16));
        v18 = *(float *)(a1 + 60);
        if ( v18 <= 0.0 )
          v18 = *(float *)&DragHandler::DEFAULT_PANNING_THRESHOLD_PIXELS
              * *(float *)&DragHandler::DEFAULT_PANNING_THRESHOLD_PIXELS;
        if ( v17 > v18 && *(_BYTE *)(a1 + 359) )
        {
          *(_BYTE *)(a1 + 362) = 1;
          v19 = *(int *)(a1 + 8);
          if ( (int)v19 < 1 )
          {
    LABEL_26:
            if ( *(float *)(a1 + 340) == 0.0 )
            {
              v26 = *(float *)(a1 + 288) - v8;
              v27 = *(float *)(a1 + 292) - v9;
              if ( *(float *)(a1 + 68) == 0.0 || (float)((float)(v26 * v26) + (float)(v27 * v27)) >= 0.001 )
              {
                v28 = a1 + 8LL * *(int *)(a1 + 308);
                *(float *)(v28 + 248) = v26;
                *(float *)(v28 + 252) = v27;
                v29 = *(_DWORD *)(a1 + 308);
                v30 = v29 + 1;
                if ( v29 + 1 >= 0 )
                  v31 = v29 + 1;
                else
                  v31 = v29 + 4;
                *(_DWORD *)(a1 + 308) = v30 - (v31 & 0xFFFFFFFC);
              }
            }
            goto LABEL_35;
          }
          v20 = 0;
          v21 = (_DWORD *)(a1 + 160);
          do
          {
            *(v21 - 1) = *(v21 - 3);
            *v21 = *(v21 - 2);
            v21 += 20;
            ++v20;
          }
          while ( v20 < v19 );
        }
      }
      if ( *(_BYTE *)(a1 + 362) )
        goto LABEL_26;
      for ( i = 0; i != 32; i += 8 )
        *(_QWORD *)(a1 + i + 248) = 0;
    LABEL_35:
      if ( *(_DWORD *)(a1 + 8) == 2 )
      {
        if ( *(_BYTE *)(a1 + 363) )
          goto LABEL_44;
        if ( *(_BYTE *)(a1 + 358) )
        {
          v33 = *(float *)(a1 + 156) - *(float *)(a1 + 236);
          v34 = *(float *)(a1 + 160) - *(float *)(a1 + 240);
          v35 = *(float *)(a1 + 140) - *(float *)(a1 + 220);
          v36 = *(float *)(a1 + 144) - *(float *)(a1 + 224);
          v37 = Utility::sqrt((float)(v33 * v33) + (float)(v34 * v34));
          v38 = Utility::sqrt((float)(v35 * v35) + (float)(v36 * v36));
          v39 = (float)(v37 - v38) * (float)(v37 - v38);
          v40 = *(float *)(a1 + 64);
          if ( v40 <= 0.0 )
            v40 = *(float *)&DragHandler::DEFAULT_PINCHING_THRESHOLD_PIXELS
                * *(float *)&DragHandler::DEFAULT_PINCHING_THRESHOLD_PIXELS;
          if ( v39 > v40 || *(_BYTE *)(a1 + 362) )
            *(_BYTE *)(a1 + 363) = 1;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
          if ( *(_BYTE *)(a1 + 363) )
          {
    LABEL_44:
            v41 = *(float *)(a1 + 148) - *(float *)(a1 + 228);
            v42 = *(float *)(a1 + 152) - *(float *)(a1 + 232);
            v43 = *(float *)(a1 + 140) - *(float *)(a1 + 220);
            v44 = *(float *)(a1 + 144) - *(float *)(a1 + 224);
            v45 = Utility::sqrt((float)(v41 * v41) + (float)(v42 * v42));
            v46 = Utility::sqrt((float)(v43 * v43) + (float)(v44 * v44));
            v47 = 1.0;
            if ( v45 > 50.0 )
            {
              v47 = 1.0;
              if ( v46 > 50.0 )
                v47 = v46 / v45;
            }
            v48 = *(float *)(a1 + 296);
            v49 = *(float *)(a1 + 300);
            if ( v47 > 1.0 && v48 > v49 || v47 < 1.0 && v48 < *(float *)(a1 + 304) )
            {
              v50 = v47 + -1.0;
              if ( v47 <= 1.0 )
                v51 = 0.2;
              else
                v51 = 0.4;
              v47 = (float)(v50 * v51) + 1.0;
            }
            v52 = v47 * v48;
            *(float *)(a1 + 296) = v52;
            v53 = v49 * *(float *)(a1 + 328);
            if ( v52 > v53 )
            {
              *(float *)(a1 + 296) = v53;
              v52 = v53;
            }
            v54 = *(float *)(a1 + 304) * *(float *)(a1 + 324);
            if ( v52 < v54 )
            {
              *(float *)(a1 + 296) = v54;
              v52 = v54;
            }
            DragHandler::updatePinchOffset(a1, v48, v52);
            DragHandler::checkBounds(a1, (float *)(a1 + 288), 1, *(float *)(a1 + 336));
            *(_DWORD *)(a1 + 340) = 1036831949;
          }
        }
      }
      if ( !v6 && *(_BYTE *)(a1 + 363) || !v5 && *(_BYTE *)(a1 + 362) )
        return 1;
      result = 0;
      v56 = *(float *)(a1 + 68) - *(float *)&a2;
      if ( v56 < 0.0 )
        v56 = 0.0;
      *(float *)(a1 + 68) = v56;
      return result;
    }

    float __fastcall DragHandler::getX(float *a1)
    {
      return a1[72] + (float)((float)(a1[18] * -0.5) / a1[74]);
    }

    float __fastcall DragHandler::getY(float *a1)
    {
      return a1[73] + (float)((float)(a1[19] * -0.5) / a1[74]);
    }

    __int64 __fastcall DragHandler::touchPressed(_BYTE *a1, int *a2)
    {
      int v5; // w8
      int v6; // s1
      int v7; // w8
      int v8; // w9
      int IDIndex; // w0
    
      if ( (DragHandler::isAttachedID((__int64)a1, a2[19]) & 1) != 0 )
        return 0;
      v5 = *((_DWORD *)a1 + 2);
      if ( !v5 )
      {
        if ( !a1[359] )
        {
          v5 = 0;
          goto LABEL_9;
        }
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 88LL))(a1);
        v5 = *((_DWORD *)a1 + 2);
      }
      if ( v5 <= 1 )
      {
    LABEL_9:
        if ( a1[359] )
        {
          if ( v5 == 1 )
          {
            if ( a1[358] )
            {
              *((float *)a1 + 70) = DragHandler::getMidScreen((__int64)a1);
              *((_DWORD *)a1 + 71) = v6;
              v7 = *((_DWORD *)a1 + 35);
              v8 = *((_DWORD *)a1 + 36);
              *((_DWORD *)a1 + 39) = v7;
              *((_DWORD *)a1 + 40) = v8;
              *((_DWORD *)a1 + 37) = v7;
              *((_DWORD *)a1 + 38) = v8;
            }
          }
          DragHandler::attachID((DragHandler *)a1, a2[19]);
          IDIndex = DragHandler::getIDIndex(a1, (unsigned int)a2[19]);
          memcpy(&a1[80 * IDIndex + 88], a2, 0x50u);
          a1[357] = 0;
        }
      }
      return 1;
    }

    __int64 __fastcall DragHandler::attachID(__int64 a1, int a2)
    {
      __int64 result; // x0
    
      do
      {
        if ( *(int *)(a1 + 8) >= 2
          && (unsigned int)Assert::report(
                             (__int64)"m_attachedIDCnt < 2",
                             0,
                             (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/DragHandler.cpp",
                             696) )
        {
          goto LABEL_7;
        }
      }
      while ( Assert::g_false );
      result = DragHandler::isAttachedID(a1, a2);
      if ( (_DWORD)result )
      {
        result = Assert::report(
                   (__int64)"!isAttachedID(id)",
                   0,
                   (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/DragHandler.cpp",
                   697);
        if ( (_DWORD)result )
    LABEL_7:
          abort();
      }
      *(_DWORD *)(a1 + 4LL * (int)(*(_DWORD *)(a1 + 8))++ + 12) = a2;
      return result;
    }

    __int64 __fastcall DragHandler::getIDIndex(__int64 a1, int a2)
    {
      const char *v4; // x1
      int v5; // w8
      __int64 result; // x0
    
      do
      {
        if ( (DragHandler::isAttachedID(a1, a2) & 1) == 0
          && (unsigned int)Assert::report(
                             (__int64)"isAttachedID(id)",
                             0,
                             (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/DragHandler.cpp",
                             744) )
        {
          goto LABEL_13;
        }
      }
      while ( Assert::g_false );
      v5 = *(_DWORD *)(a1 + 8);
      if ( v5 >= 3 )
      {
        if ( (unsigned int)Assert::report(
                             (__int64)"m_attachedIDCnt<=2",
                             0,
                             (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/DragHandler.cpp",
                             745) )
    LABEL_13:
          abort();
        v5 = *(_DWORD *)(a1 + 8);
      }
      if ( v5 < 1 )
    LABEL_11:
        Debugger::error((__siginfo *)"DragHandler::getIDIndex", v4);
      result = 0;
      while ( *(_DWORD *)(a1 + 12 + 4 * result) != a2 )
      {
        if ( ++result >= v5 )
          goto LABEL_11;
      }
      return result;
    }

    __int64 __fastcall DragHandler::touchMoved(__int64 a1, int *a2)
    {
      _DWORD *v4; // x21
      int v5; // w22
      int v6; // w23
    
      if ( !(unsigned int)DragHandler::isAttachedID(a1, a2[19]) || !*(_BYTE *)(a1 + 359) )
        return 0;
      *(_BYTE *)(a1 + 357) = 0;
      v4 = (_DWORD *)(a1 + 80LL * (int)DragHandler::getIDIndex(a1, a2[19]));
      v5 = v4[39];
      v6 = v4[40];
      memcpy(v4 + 22, a2, 0x50u);
      v4[39] = v5;
      v4[40] = v6;
      *(_DWORD *)(a1 + 68) = 1017370378;
      return 1;
    }

    __int64 __fastcall DragHandler::touchCancelled(__int64 a1, int a2)
    {
      __int64 result; // x0
      int v5; // s1
    
      result = DragHandler::isAttachedID(a1, a2);
      if ( (_DWORD)result )
      {
        if ( *(_DWORD *)(a1 + 8) == 1 )
        {
          *(float *)(a1 + 280) = DragHandler::getMidScreen(a1);
          *(_DWORD *)(a1 + 284) = v5;
        }
        return DragHandler::removeId((DragHandler *)a1, a2);
      }
      return result;
    }

    __int64 __fastcall DragHandler::removeId(__int64 a1, int a2)
    {
      __int64 result; // x0
      const char *v5; // x1
      int v6; // w8
      __int64 v7; // x9
      __int64 v8; // x10
      __int64 v9; // x11
      __int64 v10; // x8
      unsigned __int64 v16; // d1
      int v17; // w8
      int v18; // w9
      __int64 v19; // [xsp+0h] [xbp-50h]
      unsigned __int64 v20; // [xsp+10h] [xbp-40h]
    
      do
      {
        result = DragHandler::isAttachedID(a1, a2);
        if ( (result & 1) == 0 )
        {
          result = Assert::report(
                     (__int64)"isAttachedID(id)",
                     0,
                     (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/DragHandler.cpp",
                     705);
          if ( (_DWORD)result )
            goto LABEL_17;
        }
      }
      while ( Assert::g_false );
      v6 = *(_DWORD *)(a1 + 8);
      if ( v6 >= 3 )
      {
        result = Assert::report(
                   (__int64)"m_attachedIDCnt <= 2",
                   0,
                   (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/DragHandler.cpp",
                   706);
        if ( (_DWORD)result )
    LABEL_17:
          abort();
        v6 = *(_DWORD *)(a1 + 8);
      }
      if ( v6 <= 0 )
    LABEL_11:
        Debugger::error((__siginfo *)"DragHandler::removeId", v5);
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v9 = a1 + 4 * v8;
        if ( *(_DWORD *)(v9 + 12) == a2 )
          break;
        ++v8;
        v7 += 80;
        if ( v8 >= v6 )
          goto LABEL_11;
      }
      *(_DWORD *)(v9 + 12) = -1;
      v10 = a1 + v7;
      *(_QWORD *)(v10 + 88) = 0;
      *(_QWORD *)(v10 + 96) = 0;
      __asm { FMOV            V0.4S, #-1.0 }
      *(_QWORD *)(v10 + 140) = _Q0.i64[0];
      v16 = vextq_s8(_Q0, _Q0, 8u).u64[0];
      *(_QWORD *)(v10 + 148) = v16;
      *(_DWORD *)(v10 + 156) = -1082130432;
      *(_DWORD *)(v10 + 160) = -1082130432;
      *(_DWORD *)(v10 + 136) = 0;
      *(_DWORD *)(v10 + 164) = -1;
      *(_QWORD *)(v10 + 120) = 0;
      *(_QWORD *)(v10 + 128) = 0;
      *(_QWORD *)(v10 + 104) = 0;
      *(_QWORD *)(v10 + 112) = 0;
      if ( *(_DWORD *)(a1 + 12) == -1 )
      {
        *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 16);
        v19 = _Q0.i64[0];
        v20 = v16;
        result = (__int64)memcpy((void *)(a1 + 88), (const void *)(a1 + 168), 0x50u);
        *(_DWORD *)(a1 + 16) = -1;
        *(_QWORD *)(a1 + 168) = 0;
        *(_QWORD *)(a1 + 176) = 0;
        *(_QWORD *)(a1 + 220) = v19;
        *(_QWORD *)(a1 + 228) = v20;
        *(_DWORD *)(a1 + 236) = -1082130432;
        *(_DWORD *)(a1 + 240) = -1082130432;
        *(_DWORD *)(a1 + 216) = 0;
        *(_DWORD *)(a1 + 244) = -1;
        *(_QWORD *)(a1 + 200) = 0;
        *(_QWORD *)(a1 + 208) = 0;
        *(_QWORD *)(a1 + 184) = 0;
        *(_QWORD *)(a1 + 192) = 0;
      }
      v17 = *(_DWORD *)(a1 + 8) - 1;
      *(_DWORD *)(a1 + 8) = v17;
      if ( v17 == 1 )
      {
        v18 = *(_DWORD *)(a1 + 144);
        *(_DWORD *)(a1 + 156) = *(_DWORD *)(a1 + 140);
        *(_DWORD *)(a1 + 160) = v18;
        *(_DWORD *)(a1 + 280) = *(_DWORD *)(a1 + 288);
        *(_DWORD *)(a1 + 284) = *(_DWORD *)(a1 + 292);
      }
      return result;
    }

    __int64 __fastcall DragHandler::touchReleased(__int64 a1, __int64 a2)
    {
      if ( !(unsigned int)DragHandler::isAttachedID(a1, *(_DWORD *)(a2 + 76)) )
        return 0;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, *(unsigned int *)(a2 + 76));
      return 1;
    }

    __int64 __fastcall DragHandler::setSpeed(__int64 this, float a2, float a3)
    {
      *(float *)(this + 316) = a2;
      *(float *)(this + 320) = a3;
      return this;
    }

    float __fastcall DragHandler::setPanningThreshold(AllianceJoinRequestPopup *this, float a2)
    {
      float result; // s0
    
      result = a2 * a2;
      *((float *)this + 15) = result;
      return result;
    }

    float __fastcall DragHandler::setPinchingThreshold(AllianceJoinRequestPopup *this, float a2)
    {
      float result; // s0
    
      result = a2 * a2;
      *((float *)this + 16) = result;
      return result;
    }

    __int64 __fastcall DragHandler::setMinScale(__int64 this, float a2)
    {
      if ( a2 > 1.0 )
        a2 = 1.0;
      *(float *)(this + 304) = a2;
      return this;
    }

    void __fastcall DragHandler::scrollToWithSpeed(
            AllianceJoinRequestPopup *this,
            long double a2,
            long double a3,
            long double a4,
            float a5)
    {
      float v10; // s0
    
      *((_DWORD *)this + 7) = LODWORD(a2);
      *((_DWORD *)this + 8) = LODWORD(a3);
      v10 = Utility::sqrt(
              (float)((float)(*((float *)this + 72) - *(float *)&a2) * (float)(*((float *)this + 72) - *(float *)&a2))
            + (float)((float)(*((float *)this + 73) - *(float *)&a3) * (float)(*((float *)this + 73) - *(float *)&a3)));
      if ( v10 > 0.0 )
        (*(void (__fastcall **)(AllianceJoinRequestPopup *, long double, long double, long double, float))(*(_QWORD *)this + 216LL))(
          this,
          a2,
          a3,
          a4,
          v10 / a5);
    }

    __int64 __fastcall DragHandler::scrollTo(__int64 this, float a2, float a3, float a4, float a5)
    {
      int v5; // w8
    
      *(_DWORD *)(this + 20) = *(_DWORD *)(this + 288);
      *(_DWORD *)(this + 24) = *(_DWORD *)(this + 292);
      v5 = *(_DWORD *)(this + 296);
      *(float *)(this + 40) = a4;
      *(_DWORD *)(this + 36) = v5;
      *(float *)(this + 28) = a2;
      *(float *)(this + 32) = a3;
      *(_DWORD *)(this + 48) = 0;
      *(float *)(this + 44) = a5;
      *(_BYTE *)(this + 357) = 1;
      return this;
    }

    __int64 __fastcall DragHandler::updateScrolling(AllianceJoinRequestPopup *this, float a2)
    {
      float v2; // s3
      float v3; // s2
      float v4; // s4
      float v5; // s0
      float v6; // s1
      float v7; // s3
    
      v2 = *((float *)this + 12) + a2;
      *((float *)this + 12) = v2;
      v3 = *((float *)this + 10);
      v4 = *((float *)this + 11);
      v5 = *((float *)this + 7);
      v6 = *((float *)this + 8);
      if ( v2 >= v4 )
      {
        *((_DWORD *)this + 12) = 0;
        *((_BYTE *)this + 357) = 0;
        return (*(__int64 (__fastcall **)(AllianceJoinRequestPopup *, float, float, float))(*(_QWORD *)this + 280LL))(
                 this,
                 v5,
                 v6,
                 v3);
      }
      else
      {
        v7 = 1.0 - (float)((float)(1.0 - (float)(v2 / v4)) * (float)(1.0 - (float)(v2 / v4)));
        return (*(__int64 (__fastcall **)(AllianceJoinRequestPopup *, float, float, float))(*(_QWORD *)this + 280LL))(
                 this,
                 *((float *)this + 5) + (float)(v7 * (float)(v5 - *((float *)this + 5))),
                 *((float *)this + 6) + (float)(v7 * (float)(v6 - *((float *)this + 6))),
                 *((float *)this + 9) + (float)(v7 * (float)(v3 - *((float *)this + 9))));
      }
    }

    bool __fastcall DragHandler::hasSpeed(AllianceJoinRequestPopup *this)
    {
      return !*((_BYTE *)this + 362)
          && !*((_BYTE *)this + 363)
          && vaddv_f32(vmul_f32(*(float32x2_t *)((char *)this + 316), *(float32x2_t *)((char *)this + 316))) > 0.0;
    }

    __int64 __fastcall DragHandler::setAlignment(__int64 this, int a2)
    {
      *(_DWORD *)(this + 352) = a2;
      return this;
    }

    __int64 __fastcall DragHandler::setPosition(AllianceJoinRequestPopup *this, float a2, float a3, float a4)
    {
      *((float *)this + 72) = a2;
      *((float *)this + 73) = a3;
      *((float *)this + 74) = a4;
      return DragHandler::checkBounds((__int64)this, (float *)this + 72, 1, 0.0);
    }

    __int64 __fastcall DragHandler::setTopPositionXY(AllianceJoinRequestPopup *this, float a2, float a3)
    {
      float v3; // s2
      float v4; // s3
      float v5; // s0
      float v6; // s5
      float v7; // s6
      float v8; // s1
      float v9; // s0
      float v10; // s2
      float v11; // s4
      float v12; // s1
      float v13; // s5
      float v14; // s2
      float v15; // s0
      float v16; // s3
    
      v3 = *((float *)this + 72);
      v4 = *((float *)this + 73);
      v5 = (float)(*((float *)this + 18) * 0.5) + a2;
      v6 = *((float *)this + 7);
      v7 = *((float *)this + 8);
      v8 = (float)(*((float *)this + 19) * 0.5) + a3;
      *((float *)this + 72) = v5;
      v9 = v5 - v3;
      v10 = *((float *)this + 5);
      v11 = *((float *)this + 6);
      *((float *)this + 73) = v8;
      v12 = v8 - v4;
      v13 = v6 + v9;
      v14 = v9 + v10;
      v15 = v9 + *((float *)this + 70);
      *((float *)this + 7) = v13;
      v16 = *((float *)this + 71);
      *((float *)this + 8) = v7 + v12;
      *((float *)this + 5) = v14;
      *((float *)this + 6) = v12 + v11;
      *((float *)this + 70) = v15;
      *((float *)this + 71) = v12 + v16;
      return DragHandler::checkBounds((__int64)this, (float *)this + 72, 1, 0.0);
    }

    float __fastcall DragHandler::getScreenMidX(AllianceJoinRequestPopup *this)
    {
      return *((float *)this + 72);
    }

    float __fastcall DragHandler::getScreenMidY(AllianceJoinRequestPopup *this)
    {
      return *((float *)this + 73);
    }

    __int64 __fastcall DragHandler::isInScrollMode(AllianceJoinRequestPopup *this)
    {
      return *((unsigned __int8 *)this + 357);
    }

    __int64 __fastcall DragHandler::setScale(__int64 this, float a2)
    {
      *(float *)(this + 296) = a2;
      return this;
    }

    __int64 __fastcall DragHandler::setLimitToBorders(__int64 this, int a2)
    {
      *(_BYTE *)(this + 356) = a2;
      if ( a2 )
        *(_DWORD *)(this + 324) = 1065353216;
      return this;
    }

    float __fastcall DragHandler::getMinScale(AllianceJoinRequestPopup *this)
    {
      return *((float *)this + 76);
    }

    float __fastcall DragHandler::getMaxScale(AllianceJoinRequestPopup *this)
    {
      return *((float *)this + 75);
    }

    int8x16_t __fastcall DragHandler::initializeMembers(AllianceJoinRequestPopup *this)
    {
      int8x16_t result; // q0
    
      *((_DWORD *)this + 17) = 0;
      *((_DWORD *)this + 78) = 0;
      *((_BYTE *)this + 356) = 0;
      *((_DWORD *)this + 86) = 0;
      *((_DWORD *)this + 87) = 0;
      *((_BYTE *)this + 357) = 0;
      *(_QWORD *)((char *)this + 44) = 0;
      *(_QWORD *)((char *)this + 36) = 0;
      *((_BYTE *)this + 358) = 1;
      *((_BYTE *)this + 363) = 0;
      *((_DWORD *)this + 77) = 0;
      *(_QWORD *)((char *)this + 300) = 0x3F8000003F800000LL;
      *((_QWORD *)this + 9) = 0;
      *((_QWORD *)this + 10) = 0;
      *(_DWORD *)((char *)this + 359) = 65793;
      *((_QWORD *)this + 11) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_DWORD *)this + 37) = -1082130432;
      *((_DWORD *)this + 38) = -1082130432;
      *((_DWORD *)this + 35) = -1082130432;
      *((_DWORD *)this + 36) = -1082130432;
      *((_DWORD *)this + 39) = -1082130432;
      *((_DWORD *)this + 40) = -1082130432;
      *((_DWORD *)this + 34) = 0;
      *((_DWORD *)this + 41) = -1;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 21) = 0;
      *((_QWORD *)this + 22) = 0;
      __asm { FMOV            V0.4S, #-1.0 }
      *(_QWORD *)((char *)this + 220) = _Q0.i64[0];
      result = vextq_s8(_Q0, _Q0, 8u);
      *(_QWORD *)((char *)this + 228) = result.i64[0];
      *((_DWORD *)this + 59) = -1082130432;
      *((_DWORD *)this + 60) = -1082130432;
      *((_DWORD *)this + 54) = 0;
      *((_DWORD *)this + 61) = -1;
      *((_QWORD *)this + 25) = 0;
      *((_QWORD *)this + 26) = 0;
      *((_QWORD *)this + 23) = 0;
      *((_QWORD *)this + 24) = 0;
      *((_DWORD *)this + 74) = 1065353216;
      *((_DWORD *)this + 2) = 0;
      *((_DWORD *)this + 3) = -1;
      *((_DWORD *)this + 4) = -1;
      *((_DWORD *)this + 15) = -1082130432;
      *((_DWORD *)this + 16) = -1082130432;
      *((_DWORD *)this + 85) = 0;
      *((_DWORD *)this + 83) = 1056964608;
      *((_DWORD *)this + 84) = 1061997773;
      *((_DWORD *)this + 81) = 1063675494;
      *((_DWORD *)this + 82) = 1067869798;
      *((_DWORD *)this + 88) = 3;
      return result;
    }

    __int64 __fastcall DragHandler::isPanning(AllianceJoinRequestPopup *this)
    {
      return *((unsigned __int8 *)this + 362);
    }

    __int64 __fastcall DragHandler::isPinching(AllianceJoinRequestPopup *this)
    {
      return *((unsigned __int8 *)this + 363);
    }

    float __fastcall DragHandler::getCenterLocation(AllianceJoinRequestPopup *this)
    {
      return *((float *)this + 72);
    }

    float __fastcall DragHandler::getScale(AllianceJoinRequestPopup *this)
    {
      return *((float *)this + 74);
    }

    __int64 __fastcall DragHandler::setPanningDamp(__int64 this, float a2)
    {
      *(float *)(this + 332) = a2;
      return this;
    }

    __int64 __fastcall DragHandler::setPinchingDamp(__int64 this, float a2)
    {
      *(float *)(this + 336) = a2;
      return this;
    }

    __int64 __fastcall DragHandler::isPinchEnabled(AllianceJoinRequestPopup *this)
    {
      return *((unsigned __int8 *)this + 358);
    }

    __int64 __fastcall DragHandler::isPanEnabled(AllianceJoinRequestPopup *this)
    {
      return *((unsigned __int8 *)this + 359);
    }

    float __fastcall DragHandler::getTotalWidth(AllianceJoinRequestPopup *this)
    {
      return *((float *)this + 20);
    }

    float __fastcall DragHandler::getTotalHeight(AllianceJoinRequestPopup *this)
    {
      return *((float *)this + 21);
    }

    float __fastcall DragHandler::getWindowWidth(AllianceJoinRequestPopup *this)
    {
      return *((float *)this + 18);
    }

    float __fastcall DragHandler::getWindowHeight(AllianceJoinRequestPopup *this)
    {
      return *((float *)this + 19);
    }

}; // end class DragHandler
