class InputSystem
{
public:

    void __fastcall InputSystem::InputSystem(InputSystem *this)
    {
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      InputSystem::initializeMembers(this);
    }

    void __fastcall InputSystem::~InputSystem(LogicFreeWorkerCommand *this)
    {
      __int64 v2; // x0
    
      InputSystem::initializeMembers(this);
      v2 = *((_QWORD *)this + 4);
      if ( v2 )
        operator delete[](v2);
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
    }

    void __fastcall InputSystem::~InputSystem(LogicFreeWorkerCommand *this)
    {
      InputSystem::~InputSystem(this);
    }

    __int64 __fastcall InputSystem::addListener(__int64 a1, __int64 a2)
    {
      __int64 result; // x0
      __int64 v5; // x8
    
      result = DynArray<IInputListener *>::reserve(a1 + 32, (unsigned int)(*(_DWORD *)(a1 + 40) + 1));
      v5 = *(int *)(a1 + 40);
      *(_DWORD *)(a1 + 40) = v5 + 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v5) = a2;
      return result;
    }

    __int64 __fastcall InputSystem::removeListener(__int64 result, __int64 a2)
    {
      __int64 v3; // x19
      int v4; // w24
      int v5; // w23
      __int64 v6; // x21
      __int64 i; // x24
      int v8; // w22
      __int64 v9; // x24
    
      v3 = result;
      v4 = *(_DWORD *)(result + 40);
      v5 = v4 - 1;
      if ( v4 >= 1 )
      {
        v6 = 0;
        while ( 1 )
        {
          result = DynArray<IInputListener *>::operator[](v3 + 32, v6);
          if ( *(_QWORD *)result == a2 )
            break;
          v6 = (unsigned int)(v6 + 1);
          if ( (int)v6 >= v4 )
            return result;
        }
        for ( i = 124; i != 764; i += 80 )
          result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, *(unsigned int *)(v3 + i));
        if ( (int)v6 < v5 )
        {
          do
          {
            v8 = v6 + 1;
            v9 = *(_QWORD *)DynArray<IInputListener *>::operator[](v3 + 32, (unsigned int)(v6 + 1));
            result = DynArray<IInputListener *>::operator[](v3 + 32, v6);
            *(_QWORD *)result = v9;
            v6 = (unsigned int)(v6 + 1);
          }
          while ( v5 != v8 );
        }
        --*(_DWORD *)(v3 + 40);
      }
      return result;
    }

    __int64 __fastcall InputSystem::update(LogicFreeWorkerCommand *this)
    {
      Multitouch *TouchCount; // x0
      int *v3; // x4
      int v4; // w22
      Multitouch *v5; // x20
      _DWORD *v6; // x21
      __int64 v7; // x9
      __int64 v8; // x26
      char *v9; // x9
      char *v10; // x1
      int v11; // w9
      int v12; // w1
      int v14; // w1
      __int64 result; // x0
      __int64 v16; // x20
      __int64 v17; // x22
      char *v22; // x8
      int v23; // w9
      bool v24; // cc
      int v25; // w8
      char *v26; // x9
      unsigned __int64 v27; // [xsp+0h] [xbp-80h]
      __int64 v28; // [xsp+10h] [xbp-70h]
      unsigned int v29; // [xsp+2Ch] [xbp-54h] BYREF
      int v30; // [xsp+30h] [xbp-50h] BYREF
      int v31; // [xsp+34h] [xbp-4Ch] BYREF
      __int64 v32; // [xsp+38h] [xbp-48h]
    
      v32 = 0;
      TouchCount = (Multitouch *)Multitouch::getTouchCount(this);
      if ( (int)TouchCount <= 8 )
        v4 = (int)TouchCount;
      else
        v4 = 8;
      if ( v4 >= 1 )
      {
        v5 = 0;
        v6 = (_DWORD *)((char *)this + 768);
        while ( 2 )
        {
          TouchCount = (Multitouch *)Multitouch::getTouchWithId(v5, (unsigned int)&v31, &v30, (int *)&v29, v3);
          v7 = 0;
          while ( *((_DWORD *)this + v7) != v29 )
          {
            if ( ++v7 >= 8 )
              goto LABEL_11;
          }
          if ( (_DWORD)v7 != -1 )
            goto LABEL_16;
    LABEL_11:
          v7 = 0;
          while ( *((_DWORD *)this + v7) != -1 )
          {
            if ( ++v7 >= 8 )
              goto LABEL_27;
          }
          if ( (_DWORD)v7 == -1 )
            break;
    LABEL_16:
          v8 = (int)v7;
          v9 = (char *)this + 80 * (int)v7;
          v10 = v9 + 48;
          v11 = *((_DWORD *)v9 + 24);
          if ( (unsigned int)(v11 - 1) >= 2 )
          {
            if ( v11 )
              _ZF = v11 == 3;
            else
              _ZF = 1;
            if ( _ZF && *v6 != 8 )
            {
              *((_DWORD *)this + v8) = v29;
              InputSystem::touchPressed(this, v10, (unsigned int)(v8 + 1), (float)v31, (float)v30);
              TouchCount = (Multitouch *)Multitouch::touchConsumed((Multitouch *)v29, v14);
              *((_BYTE *)&v32 + v8) = 1;
              ++*((_DWORD *)this + 192);
            }
          }
          else
          {
            InputSystem::touchMoved(this, v10, (float)v31, (float)v30);
            TouchCount = (Multitouch *)Multitouch::touchConsumed((Multitouch *)v29, v12);
            *((_BYTE *)&v32 + v8) = 1;
          }
          v5 = (Multitouch *)(unsigned int)((_DWORD)v5 + 1);
          if ( (int)v5 < v4 )
            continue;
          break;
        }
      }
      v6 = (_DWORD *)((char *)this + 768);
    LABEL_27:
      result = Multitouch::clearConsumed(TouchCount);
      v16 = 0;
      v17 = 0;
      __asm { FMOV            V0.4S, #-1.0 }
      v28 = _Q0.i64[0];
      v27 = vextq_s8(_Q0, _Q0, 8u).u64[0];
      do
      {
        v22 = (char *)this + v16;
        v23 = *(_DWORD *)((char *)this + v16 + 96);
        if ( *((_BYTE *)&v32 + v17) )
          v24 = 1;
        else
          v24 = (unsigned int)(v23 - 1) > 1;
        if ( v24 )
        {
          if ( v23 == 3 )
          {
            v26 = (char *)this + v16;
            *((_QWORD *)v26 + 6) = 0;
            *((_QWORD *)v26 + 7) = 0;
            *(_QWORD *)(v26 + 100) = v28;
            *(_QWORD *)(v26 + 108) = v27;
            *((_DWORD *)v26 + 29) = -1082130432;
            *((_DWORD *)v26 + 30) = -1082130432;
            *((_DWORD *)v22 + 24) = 0;
            *((_DWORD *)v26 + 31) = -1;
            *((_QWORD *)v26 + 10) = 0;
            *((_QWORD *)v26 + 11) = 0;
            *((_QWORD *)v26 + 8) = 0;
            *((_QWORD *)v26 + 9) = 0;
            *((_DWORD *)this + v17) = -1;
          }
        }
        else
        {
          result = InputSystem::touchReleased(this, v22 + 48);
          v25 = *((_DWORD *)this + 192);
          if ( v25 )
            *v6 = v25 - 1;
        }
        ++v17;
        v16 += 80;
      }
      while ( v16 != 640 );
      return result;
    }

    uint64_t __fastcall InputSystem::touchPressed(__int64 a1, __int64 a2, int a3, float a4, float a5)
    {
      uint64_t result; // x0
      __int64 v11; // x21
      _QWORD *v12; // x0
    
      result = xTimer::getNativeTime();
      *(float *)(a2 + 52) = a4;
      *(float *)(a2 + 60) = a4;
      *(float *)(a2 + 68) = a4;
      *(float *)(a2 + 56) = a5;
      *(float *)(a2 + 64) = a5;
      *(float *)(a2 + 72) = a5;
      *(_QWORD *)(a2 + 24) = result;
      *(_DWORD *)(a2 + 48) = 1;
      *(_QWORD *)a2 = result;
      *(_QWORD *)(a2 + 8) = result;
      *(_DWORD *)(a2 + 76) = a3;
      if ( *(int *)(a1 + 40) >= 1 )
      {
        v11 = 0;
        do
        {
          v12 = (_QWORD *)DynArray<IInputListener *>::operator[](a1 + 32, v11);
          result = (**(__int64 (__fastcall ***)(_QWORD, __int64))*v12)(*v12, a2);
          if ( (_DWORD)result )
            break;
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (int)v11 < *(_DWORD *)(a1 + 40) );
      }
      return result;
    }

    uint64_t __fastcall InputSystem::touchMoved(uint64_t result, uint64_t *a2, float a3, float a4)
    {
      uint64_t v7; // x20
      uint64_t v8; // x8
      int v9; // w9
      __int64 v10; // x21
      _QWORD *v11; // x0
    
      v7 = result;
      if ( *((_DWORD *)a2 + 12) != 2 )
      {
        result = xTimer::getNativeTime();
        a2[4] = result;
        *((_DWORD *)a2 + 12) = 2;
      }
      if ( *((float *)a2 + 15) != a3 || *((float *)a2 + 16) != a4 )
      {
        result = xTimer::getNativeTime();
        v8 = *a2;
        *a2 = result;
        a2[1] = v8;
        v9 = *((_DWORD *)a2 + 14);
        *((_DWORD *)a2 + 15) = *((_DWORD *)a2 + 13);
        *((_DWORD *)a2 + 16) = v9;
        *((float *)a2 + 13) = a3;
        *((float *)a2 + 14) = a4;
        if ( *(int *)(v7 + 40) >= 1 )
        {
          v10 = 0;
          do
          {
            v11 = (_QWORD *)DynArray<IInputListener *>::operator[](v7 + 32, v10);
            result = (*(__int64 (__fastcall **)(_QWORD, uint64_t *))(*(_QWORD *)*v11 + 8LL))(*v11, a2);
            if ( (_DWORD)result )
              break;
            v10 = (unsigned int)(v10 + 1);
          }
          while ( (int)v10 < *(_DWORD *)(v7 + 40) );
        }
      }
      return result;
    }

    uint64_t __fastcall InputSystem::touchReleased(__int64 a1, uint64_t *a2)
    {
      uint64_t result; // x0
      uint64_t v5; // x8
      __int64 v6; // x21
      char v7; // w23
      __int64 v8; // x0
    
      result = xTimer::getNativeTime();
      v5 = *a2;
      *a2 = result;
      a2[1] = v5;
      a2[5] = result;
      *((_DWORD *)a2 + 12) = 3;
      if ( *(int *)(a1 + 40) >= 1 )
      {
        v6 = 0;
        v7 = 0;
        do
        {
          v8 = *(_QWORD *)DynArray<IInputListener *>::operator[](a1 + 32, v6);
          if ( (v7 & 1) != 0 )
          {
            result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, *((unsigned int *)a2 + 19));
            v7 = 1;
          }
          else
          {
            result = (*(__int64 (__fastcall **)(__int64, uint64_t *))(*(_QWORD *)v8 + 16LL))(v8, a2);
            v7 = result;
          }
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (int)v6 < *(_DWORD *)(a1 + 40) );
      }
      return result;
    }

    __int64 __fastcall InputSystem::initializeMembers(__int64 result)
    {
      __int64 v1; // x8
      __int64 v2; // x9
      unsigned __int64 v8; // d0
      __int64 v9; // x12
    
      v1 = 0;
      v2 = 0;
      *(_DWORD *)(result + 768) = 0;
      __asm { FMOV            V1.4S, #-1.0 }
      v8 = vextq_s8(_Q1, _Q1, 8u).u64[0];
      do
      {
        v9 = result + v2;
        *(_QWORD *)(v9 + 48) = 0;
        *(_QWORD *)(v9 + 56) = 0;
        *(_QWORD *)(v9 + 100) = _Q1.i64[0];
        *(_QWORD *)(v9 + 108) = v8;
        *(_DWORD *)(v9 + 116) = -1082130432;
        *(_DWORD *)(v9 + 120) = -1082130432;
        *(_DWORD *)(v9 + 96) = 0;
        *(_DWORD *)(v9 + 124) = -1;
        *(_QWORD *)(v9 + 80) = 0;
        *(_QWORD *)(v9 + 88) = 0;
        *(_QWORD *)(v9 + 64) = 0;
        *(_QWORD *)(v9 + 72) = 0;
        v2 += 80;
        *(_DWORD *)(result + v1) = -1;
        v1 += 4;
      }
      while ( v2 != 640 );
      *(_QWORD *)(result + 696) = 0;
      *(_QWORD *)(result + 688) = 0;
      *(_QWORD *)(result + 740) = _Q1.i64[0];
      *(_QWORD *)(result + 748) = v8;
      *(_DWORD *)(result + 756) = -1082130432;
      *(_DWORD *)(result + 760) = -1082130432;
      *(_DWORD *)(result + 764) = -1;
      *(_QWORD *)(result + 728) = 0;
      *(_QWORD *)(result + 720) = 0;
      *(_QWORD *)(result + 712) = 0;
      *(_QWORD *)(result + 704) = 0;
      *(_DWORD *)(result + 736) = 5;
      return result;
    }

}; // end class InputSystem
