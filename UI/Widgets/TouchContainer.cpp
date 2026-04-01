class TouchContainer
{
public:

    void __fastcall TouchContainer::TouchContainer(TouchContainer *this)
    {
      *((_DWORD *)this + 1) = 0;
      *((_DWORD *)this + 2) = 0;
      *(_DWORD *)this = 0;
      memset((char *)this + 16, 0, 0x48u);
    }

    void __fastcall TouchContainer::~TouchContainer(ServerHelloMessage *this)
    {
      void *v2; // x0
      void *v3; // x8
      void *v4; // x0
    
      *((_DWORD *)this + 1) = 0;
      *((_DWORD *)this + 2) = 0;
      *(_DWORD *)this = 0;
      *((_QWORD *)this + 3) = *((_QWORD *)this + 2);
      v2 = (void *)*((_QWORD *)this + 5);
      *((_QWORD *)this + 6) = v2;
      v3 = (void *)*((_QWORD *)this + 8);
      *((_QWORD *)this + 9) = v3;
      if ( v3 )
      {
        operator delete(v3);
        v2 = (void *)*((_QWORD *)this + 5);
      }
      if ( v2 )
        operator delete(v2);
      v4 = (void *)*((_QWORD *)this + 2);
      if ( v4 )
        operator delete(v4);
    }

    void __fastcall TouchContainer::~TouchContainer(ServerHelloMessage *this)
    {
      TouchContainer::~TouchContainer(this);
    }

    _QWORD *__fastcall TouchContainer::childRemoved(_QWORD *this, const OutOfSyncMessage *a2, const Multitouch *a3)
    {
      _QWORD *v5; // x19
      __int64 v6; // x8
      __int64 v7; // x9
      unsigned __int64 v8; // x10
      __int64 v9; // x11
      __int64 v10; // x24
      __int64 v11; // x8
      __int64 v12; // x9
      unsigned __int64 v13; // x10
      __int64 v14; // x11
      __int64 v15; // x24
      __int64 v16; // x8
      __int64 v17; // x10
      unsigned __int64 v18; // x9
      __int64 v19; // x11
    
      v5 = this;
      v6 = *(this + 2);
      v7 = *(this + 3);
      v8 = (unsigned __int64)(v7 - v6) >> 3;
      if ( (int)v8 >= 1 )
      {
        v9 = 0;
        while ( *(const Multitouch **)(v6 + 8 * v9) != a3 )
        {
          if ( ++v9 >= (int)v8 )
            goto LABEL_14;
        }
        if ( (int)v8 > (int)v9 )
        {
          *(this + 3) = v7 + 8 * (((unsigned int)(v8 - 1 - v9) | 0x1FFFFFFF00000000LL) ^ 0xFFFFFFFFLL);
          LODWORD(v8) = v9;
        }
        if ( (int)v8 >= 1 )
        {
          v10 = (int)v8 - 1;
          while ( 1 )
          {
            if ( *(const OutOfSyncMessage **)(v6 + 8 * v10) != a2 )
            {
              this = (_QWORD *)Assert::report(
                                 (__int64)"m_vecTouchStartStack[startStackSize - 1] == pParent",
                                 0,
                                 (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/f"
                                          "lash/TouchContainer.cpp",
                                 31);
              if ( (_DWORD)this )
                break;
            }
            if ( !Assert::g_false )
              goto LABEL_14;
            v6 = v5[2];
          }
    LABEL_35:
          abort();
        }
      }
    LABEL_14:
      v11 = v5[5];
      v12 = v5[6];
      v13 = (unsigned __int64)(v12 - v11) >> 3;
      if ( (int)v13 >= 1 )
      {
        v14 = 0;
        while ( *(const Multitouch **)(v11 + 8 * v14) != a3 )
        {
          if ( ++v14 >= (int)v13 )
            goto LABEL_27;
        }
        if ( (int)v13 > (int)v14 )
        {
          v5[6] = v12 + 8 * (((unsigned int)(v13 - 1 - v14) | 0x1FFFFFFF00000000LL) ^ 0xFFFFFFFFLL);
          LODWORD(v13) = v14;
        }
        if ( (int)v13 >= 1 )
        {
          v15 = (int)v13 - 1;
          while ( 1 )
          {
            if ( *(const OutOfSyncMessage **)(v11 + 8 * v15) != a2 )
            {
              this = (_QWORD *)Assert::report(
                                 (__int64)"m_vecTouchMoveStack[moveStackSize - 1] == pParent",
                                 0,
                                 (__int64)"/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/f"
                                          "lash/TouchContainer.cpp",
                                 51);
              if ( (_DWORD)this )
                goto LABEL_35;
            }
            if ( !Assert::g_false )
              break;
            v11 = v5[5];
          }
        }
      }
    LABEL_27:
      v17 = v5[8];
      v16 = v5[9];
      v18 = (unsigned __int64)(v16 - v17) >> 3;
      if ( (int)v18 >= 1 )
      {
        v19 = 0;
        while ( *(const Multitouch **)(v17 + 8 * v19) != a3 )
        {
          if ( ++v19 >= (int)v18 )
            return this;
        }
        if ( (int)v18 > (int)v19 )
          v5[9] = v16 + 8 * (((unsigned int)(v18 - 1 - v19) | 0x1FFFFFFF00000000LL) ^ 0xFFFFFFFFLL);
      }
      return this;
    }

    __int64 __fastcall TouchContainer::displayObjectCapturedTouch(__int64 result, __int64 a2)
    {
      _QWORD *v3; // x19
      __int64 v4; // x8
      unsigned __int64 v5; // x9
      int v6; // w21
      __int64 v7; // x10
      int v8; // w22
      __int64 v9; // x9
      int v10; // w9
      __int64 v11; // x8
      unsigned __int64 v12; // x9
      int v13; // w21
      __int64 v14; // x10
      int v15; // w22
      __int64 v16; // x9
      int v17; // w9
      __int64 v18; // x8
      unsigned __int64 v19; // x9
      int v20; // w21
      __int64 v21; // x10
      int v22; // w20
      __int64 v23; // x9
      int v24; // w9
    
      v3 = (_QWORD *)result;
      v4 = *(_QWORD *)(result + 16);
      v5 = (unsigned __int64)(*(_QWORD *)(result + 24) - v4) >> 3;
      v6 = v5 - 1;
      if ( (int)v5 >= 1 )
      {
        v7 = 0;
        while ( *(_QWORD *)(v4 + 8 * v7) != a2 )
        {
          if ( ++v7 >= (int)v5 )
            goto LABEL_10;
        }
        v8 = v7 + 1;
        if ( (int)v5 > (int)v7 + 1 )
        {
          do
          {
            result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 8LL * v6) + 232LL))(
                       *(_QWORD *)(v4 + 8LL * v6),
                       *(unsigned int *)v3);
            v4 = v3[2];
            v9 = v3[3] - 8LL;
            v3[3] = v9;
            v10 = ((unsigned __int64)(v9 - v4) >> 3) - 1;
            if ( v6 >= v10 )
              v6 = v10;
          }
          while ( v6 >= v8 );
        }
      }
    LABEL_10:
      v11 = v3[5];
      v12 = (unsigned __int64)(v3[6] - v11) >> 3;
      v13 = v12 - 1;
      if ( (int)v12 >= 1 )
      {
        v14 = 0;
        while ( *(_QWORD *)(v11 + 8 * v14) != a2 )
        {
          if ( ++v14 >= (int)v12 )
            goto LABEL_19;
        }
        v15 = v14 + 1;
        if ( (int)v12 > (int)v14 + 1 )
        {
          do
          {
            result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 8LL * v13) + 232LL))(
                       *(_QWORD *)(v11 + 8LL * v13),
                       *(unsigned int *)v3);
            v11 = v3[5];
            v16 = v3[6] - 8LL;
            v3[6] = v16;
            v17 = ((unsigned __int64)(v16 - v11) >> 3) - 1;
            if ( v13 >= v17 )
              v13 = v17;
          }
          while ( v13 >= v15 );
        }
      }
    LABEL_19:
      v18 = v3[8];
      v19 = (unsigned __int64)(v3[9] - v18) >> 3;
      v20 = v19 - 1;
      if ( (int)v19 >= 1 )
      {
        v21 = 0;
        while ( *(_QWORD *)(v18 + 8 * v21) != a2 )
        {
          if ( ++v21 >= (int)v19 )
            return result;
        }
        v22 = v21 + 1;
        if ( (int)v19 > (int)v21 + 1 )
        {
          do
          {
            result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v18 + 8LL * v20) + 232LL))(
                       *(_QWORD *)(v18 + 8LL * v20),
                       *(unsigned int *)v3);
            v18 = v3[8];
            v23 = v3[9] - 8LL;
            v3[9] = v23;
            v24 = ((unsigned __int64)(v23 - v18) >> 3) - 1;
            if ( v20 >= v24 )
              v20 = v24;
          }
          while ( v20 >= v22 );
        }
      }
      return result;
    }

    _QWORD *__fastcall TouchContainer::validateStack(__int64 a1, _QWORD *a2)
    {
      __int64 v3; // x9
      __int64 v4; // x21
      _QWORD *result; // x0
      __int64 v6; // x23
      int v7; // w22
      __int64 v8; // x20
      __int64 v9; // x8
    
      v3 = a2[1];
      if ( *a2 != v3 )
      {
        v4 = *(_QWORD *)(*a2 + 8 * ((((v3 - *a2) << 29) - 0x100000000LL) >> 32));
        result = std::vector<Sprite *>::resize(a2, 0, 0);
        if ( v4 )
        {
          v6 = 0;
          v7 = -1;
          do
          {
            v8 = v6 + 1;
            result = std::vector<Sprite *>::resize(a2, v6 + 1, 0);
            if ( v6 >= 1 )
            {
              v9 = 8LL * v7;
              do
              {
                *(_QWORD *)(*a2 + 8 * v6) = *(_QWORD *)(*a2 + v9);
                v9 -= 8;
              }
              while ( v6-- > 1 );
            }
            *(_QWORD *)*a2 = v4;
            v4 = *(_QWORD *)(v4 + 48);
            ++v7;
            v6 = v8;
          }
          while ( v4 );
        }
      }
      return result;
    }

    __int64 __fastcall TouchContainer::touchPressed(__int64 a1, _DWORD *a2)
    {
      _QWORD *v4; // x23
      __int64 Instance; // x0
      __int64 ObjectsUnderPoint; // x0
      __int64 v7; // x0
      __int64 v8; // x8
      unsigned __int64 v9; // x9
      __int64 v10; // x24
      bool v11; // vf
      int v12; // w9
      __int64 v13; // x25
      __int64 v14; // x0
      __int64 v15; // x8
      unsigned __int64 v16; // x9
      int v17; // w23
    
      *(_DWORD *)(a1 + 4) = a2[13];
      *(_DWORD *)(a1 + 8) = a2[14];
      *(_DWORD *)a1 = a2[19];
      v4 = (_QWORD *)(a1 + 16);
      Instance = Stage::getInstance();
      ObjectsUnderPoint = Stage::getObjectsUnderPoint(Instance, *(float *)(a1 + 4), *(float *)(a1 + 8));
      v7 = std::vector<Sprite *>::operator=(v4, ObjectsUnderPoint);
      TouchContainer::validateStack(v7, v4);
      std::vector<Sprite *>::operator=(a1 + 40, v4);
      std::vector<Sprite *>::resize((_QWORD *)(a1 + 64), 0, 0);
      v8 = *(_QWORD *)(a1 + 16);
      v9 = (unsigned __int64)(*(_QWORD *)(a1 + 24) - v8) >> 3;
      v10 = 0;
      v11 = __OFSUB__((_DWORD)v9, 1);
      v12 = v9 - 1;
      if ( v12 < 0 == v11 )
      {
        do
        {
          v13 = v12;
          v14 = *(_QWORD *)(v8 + 8LL * v12);
          if ( (v10 & 1) != 0 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 240LL))(v14) )
            {
              (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(*v4 + 8 * v13) + 208LL))(
                *(_QWORD *)(*v4 + 8 * v13),
                a2);
              v10 = 1;
              break;
            }
            v10 = 1;
          }
          else
          {
            v10 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v14 + 208LL))(v14, a2);
          }
          v12 = v13 - 1;
          v8 = *(_QWORD *)(a1 + 16);
          if ( (int)v13 - 1 >= (int)(((unsigned __int64)(*(_QWORD *)(a1 + 24) - v8) >> 3) - 1) )
            v12 = ((unsigned __int64)(*(_QWORD *)(a1 + 24) - v8) >> 3) - 1;
        }
        while ( (v12 & 0x80000000) == 0 );
      }
      v15 = *(_QWORD *)(a1 + 40);
      v16 = (unsigned __int64)(*(_QWORD *)(a1 + 48) - v15) >> 3;
      v17 = v16 - 1;
      if ( (int)v16 >= 1 )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 8LL * v17) + 256LL))(
            *(_QWORD *)(v15 + 8LL * v17),
            (unsigned int)a2[19]);
          v15 = *(_QWORD *)(a1 + 40);
          if ( v17 - 1 >= (int)(((unsigned __int64)(*(_QWORD *)(a1 + 48) - v15) >> 3) - 1) )
            v17 = ((unsigned __int64)(*(_QWORD *)(a1 + 48) - v15) >> 3) - 1;
          else
            --v17;
        }
        while ( (v17 & 0x80000000) == 0 );
      }
      std::vector<Sprite *>::operator=(a1 + 64, a1 + 40);
      return v10;
    }

    __int64 __fastcall TouchContainer::refreshTouchInStates(unsigned int *a1, float a2, float a3)
    {
      __int64 Instance; // x0
      __int64 ObjectsUnderPoint; // x0
      __int64 v8; // x0
      __int64 result; // x0
      __int64 v10; // x8
      __int64 v11; // x11
      unsigned __int64 v12; // x9
      bool v13; // vf
      int v14; // w9
      __int64 v15; // x20
      __int64 v16; // x0
      __int64 v17; // x9
      __int64 v18; // x10
      unsigned __int64 v19; // x12
      int v20; // w20
      unsigned __int64 v21; // x11
      int v22; // w11
      __int64 v23; // x12
      int v24; // w14
      __int64 v25; // x13
    
      std::vector<Sprite *>::operator=(a1 + 16, a1 + 10);
      Instance = Stage::getInstance();
      ObjectsUnderPoint = Stage::getObjectsUnderPoint(Instance, a2, a3);
      v8 = std::vector<Sprite *>::operator=(a1 + 10, ObjectsUnderPoint);
      result = (__int64)TouchContainer::validateStack(v8, (_QWORD *)a1 + 5);
      v10 = *((_QWORD *)a1 + 5);
      v11 = *((_QWORD *)a1 + 6);
      v12 = (unsigned __int64)(v11 - v10) >> 3;
      v13 = __OFSUB__((_DWORD)v12, 1);
      v14 = v12 - 1;
      if ( v14 < 0 == v13 )
      {
        do
        {
          v15 = v14;
          result = Sprite::isTouchIn(*(_QWORD *)(v10 + 8LL * v14), *a1);
          if ( (result & 1) == 0 )
          {
            v16 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 8 * v15);
            result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 256LL))(v16, *a1);
          }
          v14 = v15 - 1;
          v10 = *((_QWORD *)a1 + 5);
          v11 = *((_QWORD *)a1 + 6);
          if ( (int)v15 - 1 >= (int)(((unsigned __int64)(v11 - v10) >> 3) - 1) )
            v14 = ((unsigned __int64)(v11 - v10) >> 3) - 1;
        }
        while ( (v14 & 0x80000000) == 0 );
      }
      v17 = *((_QWORD *)a1 + 8);
      v18 = *((_QWORD *)a1 + 9);
      v19 = (unsigned __int64)(v18 - v17) >> 3;
      v20 = v19 - 1;
      if ( (int)v19 >= 1 )
      {
        while ( 1 )
        {
          v21 = (unsigned __int64)(v11 - v10) >> 3;
          v13 = __OFSUB__((_DWORD)v21, 1);
          v22 = v21 - 1;
          if ( v22 < 0 != v13 )
            goto LABEL_17;
          v23 = *(_QWORD *)(v17 + 8LL * v20);
          v24 = v22;
          do
          {
            v25 = *(_QWORD *)(v10 + 8LL * v24--);
            if ( v24 >= v22 )
              v24 = v22;
          }
          while ( (v24 & 0x80000000) == 0 && v25 != v23 );
          if ( v25 != v23 )
          {
    LABEL_17:
            result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v17 + 8LL * v20) + 264LL))(
                       *(_QWORD *)(v17 + 8LL * v20),
                       *a1);
            v17 = *((_QWORD *)a1 + 8);
            v18 = *((_QWORD *)a1 + 9);
          }
          if ( v20 - 1 >= (int)(((unsigned __int64)(v18 - v17) >> 3) - 1) )
            v20 = ((unsigned __int64)(v18 - v17) >> 3) - 1;
          else
            --v20;
          if ( v20 < 0 )
            break;
          v10 = *((_QWORD *)a1 + 5);
          v11 = *((_QWORD *)a1 + 6);
        }
      }
      return result;
    }

    __int64 __fastcall TouchContainer::touchMoved(__int64 a1, __int64 a2)
    {
      float v4; // w8
      float v5; // s1
      __int64 v6; // x8
      unsigned __int64 v7; // x9
      int v8; // w21
    
      v4 = *(float *)(a2 + 52);
      *(float *)(a1 + 4) = v4;
      v5 = *(float *)(a2 + 56);
      *(float *)(a1 + 8) = v5;
      TouchContainer::refreshTouchInStates((unsigned int *)a1, v4, v5);
      v6 = *(_QWORD *)(a1 + 16);
      v7 = (unsigned __int64)(*(_QWORD *)(a1 + 24) - v6) >> 3;
      v8 = v7 - 1;
      if ( (int)v7 < 1 )
        return 0;
      while ( ((*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v6 + 8LL * v8) + 216LL))(
                 *(_QWORD *)(v6 + 8LL * v8),
                 a2)
             & 1) == 0 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        if ( v8 - 1 >= (int)(((unsigned __int64)(*(_QWORD *)(a1 + 24) - v6) >> 3) - 1) )
          v8 = ((unsigned __int64)(*(_QWORD *)(a1 + 24) - v6) >> 3) - 1;
        else
          --v8;
        if ( v8 < 0 )
          return 0;
      }
      return 1;
    }

    __int64 __fastcall TouchContainer::touchReleased(unsigned int *a1, __int64 a2)
    {
      __int64 v4; // x8
      unsigned __int64 v5; // x9
      __int64 v6; // x20
      int v7; // w22
      __int64 v8; // x0
      __int64 v9; // x8
      unsigned __int64 v10; // x9
      bool v11; // vf
      int v12; // w9
      __int64 v13; // x21
      __int64 v14; // x0
    
      v4 = *((_QWORD *)a1 + 2);
      v5 = (unsigned __int64)(*((_QWORD *)a1 + 3) - v4) >> 3;
      v6 = 0;
      v7 = v5 - 1;
      if ( (int)v5 >= 1 )
      {
        do
        {
          v8 = *(_QWORD *)(v4 + 8LL * v7);
          if ( (v6 & 1) != 0 )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 232LL))(v8, *a1);
            v6 = 1;
          }
          else
          {
            v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 224LL))(v8, a2);
          }
          v4 = *((_QWORD *)a1 + 2);
          if ( v7 - 1 >= (int)(((unsigned __int64)(*((_QWORD *)a1 + 3) - v4) >> 3) - 1) )
            v7 = ((unsigned __int64)(*((_QWORD *)a1 + 3) - v4) >> 3) - 1;
          else
            --v7;
        }
        while ( (v7 & 0x80000000) == 0 );
      }
      v9 = *((_QWORD *)a1 + 5);
      v10 = (unsigned __int64)(*((_QWORD *)a1 + 6) - v9) >> 3;
      v11 = __OFSUB__((_DWORD)v10, 1);
      v12 = v10 - 1;
      if ( v12 < 0 == v11 )
      {
        do
        {
          v13 = v12;
          if ( Sprite::isTouchIn(*(_QWORD *)(v9 + 8LL * v12), *a1) )
          {
            v14 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 8 * v13);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 264LL))(v14, *a1);
          }
          v12 = v13 - 1;
          v9 = *((_QWORD *)a1 + 5);
          if ( (int)v13 - 1 >= (int)(((unsigned __int64)(*((_QWORD *)a1 + 6) - v9) >> 3) - 1) )
            v12 = ((unsigned __int64)(*((_QWORD *)a1 + 6) - v9) >> 3) - 1;
        }
        while ( (v12 & 0x80000000) == 0 );
      }
      return v6;
    }

    __int64 __fastcall TouchContainer::touchCancelled(__int64 result)
    {
      unsigned int *v1; // x19
      __int64 v2; // x8
      unsigned __int64 v3; // x9
      int v4; // w20
      __int64 v5; // x8
      unsigned __int64 v6; // x9
      bool v7; // vf
      int v8; // w9
      __int64 v9; // x20
      __int64 v10; // x0
    
      v1 = (unsigned int *)result;
      v2 = *(_QWORD *)(result + 16);
      v3 = (unsigned __int64)(*(_QWORD *)(result + 24) - v2) >> 3;
      v4 = v3 - 1;
      if ( (int)v3 >= 1 )
      {
        do
        {
          result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 8LL * v4) + 232LL))(
                     *(_QWORD *)(v2 + 8LL * v4),
                     *v1);
          v2 = *((_QWORD *)v1 + 2);
          if ( v4 - 1 >= (int)(((unsigned __int64)(*((_QWORD *)v1 + 3) - v2) >> 3) - 1) )
            v4 = ((unsigned __int64)(*((_QWORD *)v1 + 3) - v2) >> 3) - 1;
          else
            --v4;
        }
        while ( (v4 & 0x80000000) == 0 );
      }
      v5 = *((_QWORD *)v1 + 5);
      v6 = (unsigned __int64)(*((_QWORD *)v1 + 6) - v5) >> 3;
      v7 = __OFSUB__((_DWORD)v6, 1);
      v8 = v6 - 1;
      if ( v8 < 0 == v7 )
      {
        do
        {
          v9 = v8;
          result = Sprite::isTouchIn(*(_QWORD *)(v5 + 8LL * v8), *v1);
          if ( (_DWORD)result )
          {
            v10 = *(_QWORD *)(*((_QWORD *)v1 + 5) + 8 * v9);
            result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 264LL))(v10, *v1);
          }
          v8 = v9 - 1;
          v5 = *((_QWORD *)v1 + 5);
          if ( (int)v9 - 1 >= (int)(((unsigned __int64)(*((_QWORD *)v1 + 6) - v5) >> 3) - 1) )
            v8 = ((unsigned __int64)(*((_QWORD *)v1 + 6) - v5) >> 3) - 1;
        }
        while ( (v8 & 0x80000000) == 0 );
      }
      return result;
    }

}; // end class TouchContainer
