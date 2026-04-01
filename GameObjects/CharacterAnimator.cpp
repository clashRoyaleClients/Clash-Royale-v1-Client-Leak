class CharacterAnimator
{
public:

    __int64 __fastcall CharacterAnimator::CharacterAnimator(__int64 result)
    {
      __int64 i; // x8
    
      for ( i = 3; i > 0; --i )
        *(_QWORD *)(result + 8 * i) = 0;
      *(_DWORD *)result = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_DWORD *)(result + 40) = 1065353216;
      return result;
    }

    int *__fastcall CharacterAnimator::~CharacterAnimator(int *a1)
    {
      __int64 v2; // x21
      __int64 v3; // x20
      int *v4; // x22
      __int64 v5; // x0
      __int64 *v6; // x22
      __int64 v7; // t1
      __int64 v8; // x23
      __int64 v9; // x8
    
      v2 = 0;
      v3 = 3;
      do
      {
        v4 = &a1[2 * v2];
        v7 = *((_QWORD *)v4 + 1);
        v6 = (__int64 *)(v4 + 2);
        v5 = v7;
        if ( v7 )
        {
          if ( *a1 < 1 )
            goto LABEL_11;
          v8 = 0;
          do
          {
            v9 = *(_QWORD *)(v5 + 8 * v8);
            do
            {
              if ( v9 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
                v5 = *v6;
              }
              *(_QWORD *)(v5 + 8 * v8) = 0;
              v5 = *v6;
              v9 = *(_QWORD *)(*v6 + 8 * v8);
            }
            while ( v9 );
            ++v8;
          }
          while ( v8 < *a1 );
          if ( v5 )
    LABEL_11:
            operator delete[](v5);
        }
        *v6 = 0;
        ++v2;
      }
      while ( v2 != 3 );
      do
        *(_QWORD *)&a1[2 * v3--] = 0;
      while ( v3 > 0 );
      *a1 = 0;
      *((_QWORD *)a1 + 4) = 0;
      a1[10] = 1065353216;
      return a1;
    }

    // attributes: thunk
    void __fastcall CharacterAnimator::~CharacterAnimator(int *this)
    {
      __ZN17CharacterAnimatorD2Ev(this);
    }

    void __fastcall CharacterAnimator::init(__int64 a1, ResourceManager *a2, char *a3, __int64 a4, int a5)
    {
      __int64 SupercellSWF; // x23
      int v9; // w26
      int hasExportName; // w25
      __int64 v11; // x25
      __int64 v12; // x23
      __int64 v13; // x28
      _QWORD *v14; // x28
      __int64 i; // x22
      const String *v16; // x2
      String v18; // [xsp+10h] [xbp-80h] BYREF
      __int64 v19[3]; // [xsp+28h] [xbp-68h] BYREF
    
      *(_QWORD *)(a1 + 32) = a4;
      SupercellSWF = ResourceManager::getSupercellSWF(a2, 0, a3);
      v9 = 0;
      do
      {
        operator+(v19, (String *)a3);
        hasExportName = SupercellSWF::hasExportName(SupercellSWF, v19);
        if ( hasExportName )
          ++v9;
        String::~String();
      }
      while ( ((unsigned __int8)hasExportName & (v9 < 100)) != 0 );
      v11 = 0;
      *(_DWORD *)a1 = v9;
      if ( is_mul_ok(v9, 8u) )
        v12 = 8LL * v9;
      else
        v12 = -1;
      do
      {
        if ( (_DWORD)v11 != 1 || a5 )
        {
          v13 = a1 + 8 * v11;
          *(_QWORD *)(v13 + 8) = operator new[](v12);
          v14 = (_QWORD *)(v13 + 8);
          if ( v9 >= 1 )
          {
            for ( i = 0; i < v9; ++i )
            {
              operator+((__int64 *)&v18.m_length, (String *)a3);
              *(_QWORD *)(*v14 + 8 * i) = ResourceManager::getMovieClip(a2, &v18, v16);
              String::~String();
            }
          }
        }
        ++v11;
      }
      while ( v11 < 3 );
    }

    __int64 __fastcall CharacterAnimator::getClip(CharacterAnimator *a1, int a2, int a3, float a4)
    {
      bool v5; // [xsp+Fh] [xbp-1h] BYREF
    
      v5 = 0;
      return CharacterAnimator::getClip(a1, a2, a3, a4, &v5);
    }

    _DWORD *__fastcall CharacterAnimator::getClip(__int64 a1, __int64 a2, int a3, bool *a4, long double a5)
    {
      long double v5; // q9
      __int64 v9; // x22
      _QWORD *v10; // x22
      __int64 v11; // t1
      float v12; // s10
      long double Scale; // q0
      _DWORD *v14; // x20
      int v16; // [xsp+Ch] [xbp-44h] BYREF
    
      if ( !*(_DWORD *)a1 )
        return 0;
      v9 = a1 + 8LL * a3;
      v11 = *(_QWORD *)(v9 + 8);
      v10 = (_QWORD *)(v9 + 8);
      if ( !v11 )
        return 0;
      v12 = *(float *)(a1 + 40);
      v16 = 0;
      CharacterAnimator::getClipIndexAndScaleX(a1, &v16, a1 + 40, a2);
      LODWORD(v5) = *(_DWORD *)(a1 + 40);
      Scale = LogicCharacterData::getScale(*(_QWORD *)(a1 + 32));
      *(float *)&a5 = *(float *)&Scale * *(float *)&a5;
      *(float *)&v5 = *(float *)&v5 * *(float *)&a5;
      v14 = *(_DWORD **)(*v10 + 8LL * v16);
      v14[4] = 1065353216;
      v14[7] = 1065353216;
      v14[5] = 0;
      v14[6] = 0;
      v14[8] = 0;
      v14[9] = 0;
      (*(void (__fastcall **)(_DWORD *, long double))(*(_QWORD *)v14 + 48LL))(v14, v5);
      (*(void (__fastcall **)(_DWORD *, long double))(*(_QWORD *)v14 + 56LL))(v14, a5);
      *a4 = v12 != *(float *)&v5;
      return v14;
    }

    int *__fastcall CharacterAnimator::getClipIndexAndScaleX(int *result, int *a2, _DWORD *a3, int a4)
    {
      int v4; // w8
      int v5; // w9
      int v6; // w10
      bool v8; // zf
      int v9; // w8
    
      if ( *result <= 1 )
      {
        *a3 = 1065353216;
    LABEL_14:
        *a2 = 0;
        return result;
      }
      v4 = a4 % 360 * 2 * *result / 360 % (2 * *result);
      *a2 = v4;
      v5 = *result;
      v6 = *result - 1;
      if ( v4 == *result || v4 == v6 )
      {
        *a2 = v6;
      }
      else
      {
        if ( v4 )
          v8 = v4 == 2 * v5 - 1;
        else
          v8 = 1;
        if ( v8 )
          goto LABEL_14;
        *a3 = 1065353216;
        if ( v4 >= v5 )
        {
          v9 = v4 % v5;
          *a2 = v9;
          *a3 = -1082130432;
          *a2 = *result - 1 - v9;
        }
      }
      return result;
    }

    __int64 __fastcall CharacterAnimator::getDirectionCount(unsigned int *a1)
    {
      return *a1;
    }

    __int64 __fastcall CharacterAnimator::getAttackFrame(__int64 a1, _BYTE *a2, int a3, int a4, #1257 *a5, int a6, int a7)
    {
      int v12; // w25
      int TotalFrames; // w24
      int v14; // w8
      int v15; // w10
      int v16; // w8
      int v17; // w9
      int v18; // w11
      int v19; // w10
      __int64 result; // x0
      bool v21; // vf
      int v22; // w9
    
      v12 = a7 + a4;
      TotalFrames = MovieClip::getTotalFrames(a5);
      *a2 = 0;
      v14 = (int)(float)((float)(1000 * TotalFrames) * MovieClip::getMSPerFrame(a5));
      if ( v14 <= a3 )
        v15 = v14;
      else
        v15 = a3;
      v16 = v15 * a6 / TotalFrames;
      if ( !v16 )
        v16 = 1;
      v17 = a3 - v16;
      if ( v12 / a3 )
      {
        v18 = v15 - v16;
        v19 = v12 % a3;
        if ( v12 % a3 < v18 )
        {
          result = (unsigned int)(v19 * a6 / v16 + a6);
          goto LABEL_16;
        }
        v21 = __OFSUB__(v19, v17);
        v22 = v19 - v17;
        if ( v22 < 0 == v21 )
          goto LABEL_15;
    LABEL_14:
        result = 0;
        goto LABEL_16;
      }
      v21 = __OFSUB__(v12, v17);
      v22 = v12 - v17;
      if ( v22 < 0 != v21 )
        goto LABEL_14;
    LABEL_15:
      *a2 = 1;
      result = (unsigned int)(v22 * a6 / v16);
    LABEL_16:
      if ( a7 >= 1 )
        *a2 = 0;
      return result;
    }

}; // end class CharacterAnimator
