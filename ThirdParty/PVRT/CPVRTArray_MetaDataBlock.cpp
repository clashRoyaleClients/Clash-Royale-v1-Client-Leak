class CPVRTArray<MetaDataBlock>
{
public:

    _QWORD *__fastcall CPVRTArray<MetaDataBlock>::CPVRTArray(_QWORD *a1)
    {
      _QWORD *v2; // x0
      _QWORD *v3; // x10
    
      *a1 = off_1004F2000;
      a1[1] = 0x1000000000LL;
      v2 = (_QWORD *)operator new[](400);
      *v2 = 24;
      v2[1] = 16;
      v3 = v2 + 2;
      do
      {
        *(_DWORD *)v3 = 0;
        *((_DWORD *)v3 + 1) = 0;
        *((_DWORD *)v3 + 2) = 0;
        v3[2] = 0;
        v3 += 3;
      }
      while ( v3 != v2 + 50 );
      a1[2] = v2 + 2;
      return a1;
    }

    __int64 __fastcall CPVRTArray<MetaDataBlock>::~CPVRTArray(__int64 a1)
    {
      CPVRTArray<MetaDataBlock>::~CPVRTArray();
      return a1;
    }

    void __fastcall CPVRTArray<MetaDataBlock>::~CPVRTArray(void *a1)
    {
      CPVRTArray<MetaDataBlock>::~CPVRTArray();
      operator delete(a1);
    }

    __int64 __fastcall CPVRTArray<MetaDataBlock>::Remove(__int64 a1, unsigned int a2)
    {
      unsigned int v2; // w20
      int v4; // w8
      unsigned int v5; // w8
      __int64 v7; // x21
      __int64 v8; // x22
    
      v2 = a2;
      v4 = *(_DWORD *)(a1 + 8);
      if ( !v4 )
        return 1;
      v5 = v4 - 1;
      if ( v5 == a2 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
      *(_DWORD *)(a1 + 8) = v5;
      if ( v5 > a2 )
      {
        v7 = 24LL * a2;
        v8 = 24LL * (a2 + 1);
        do
        {
          ++v2;
          MetaDataBlock::operator=(*(_QWORD *)(a1 + 16) + v7, *(_QWORD *)(a1 + 16) + v8);
          v7 += 24;
          v8 += 24;
        }
        while ( v2 < *(_DWORD *)(a1 + 8) );
      }
      return 0;
    }

    __int64 __fastcall CPVRTArray<MetaDataBlock>::RemoveLast(__int64 a1)
    {
      int v1; // w9
      __int64 v2; // x8
    
      v1 = *(_DWORD *)(a1 + 8);
      if ( !v1 )
        return 1;
      v2 = 0;
      *(_DWORD *)(a1 + 8) = v1 - 1;
      return v2;
    }

    _QWORD *__fastcall CPVRTArray<MetaDataBlock>::~CPVRTArray(_QWORD *a1)
    {
      __int64 v2; // x8
      __int64 v3; // x20
      __int64 v4; // x9
      __int64 v5; // x21
      __int64 v6; // x22
      __int64 v7; // x0
    
      *a1 = off_1004F2000;
      v2 = a1[2];
      if ( v2 )
      {
        v3 = v2 - 16;
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 )
        {
          v5 = v2 - 8;
          v6 = 24 * v4;
          do
          {
            v7 = *(_QWORD *)(v5 + v6);
            if ( v7 )
              operator delete[](v7);
            *(_QWORD *)(v5 + v6) = 0;
            v6 -= 24;
          }
          while ( v6 );
        }
        operator delete[](v3);
      }
      return a1;
    }

    void __fastcall CPVRTArray<MetaDataBlock>::Copy<MetaDataBlock>(__int64 a1, __int64 a2)
    {
      __int64 v4; // x21
      _QWORD *v5; // x0
      _QWORD *v6; // x22
      _QWORD *v7; // x9
      __int64 v8; // x21
      unsigned int v9; // w23
      _QWORD *v10; // x24
      unsigned int v11; // w8
      __int64 v12; // x9
      __int64 v13; // x21
      __int64 v14; // x8
      __int64 v15; // x23
      __int64 v16; // x24
      __int64 v17; // x0
      int v18; // w9
    
      v4 = *(unsigned int *)(a2 + 12);
      v5 = (_QWORD *)operator new[](24 * v4 + 16);
      *v5 = 24;
      v5[1] = v4;
      v6 = v5 + 2;
      if ( (_DWORD)v4 )
      {
        v7 = v5 + 2;
        do
        {
          *(_DWORD *)v7 = 0;
          *((_DWORD *)v7 + 1) = 0;
          *((_DWORD *)v7 + 2) = 0;
          v7[2] = 0;
          v7 += 3;
        }
        while ( v7 != &v6[3 * v4] );
      }
      if ( *(_DWORD *)(a2 + 8) )
      {
        v8 = 0;
        v9 = 0;
        v10 = v5 + 2;
        do
        {
          MetaDataBlock::operator=((__int64)&v10[v8], *(_QWORD *)(a2 + 16) + v8 * 8);
          ++v9;
          v11 = *(_DWORD *)(a2 + 8);
          v8 += 3;
        }
        while ( v9 < v11 );
      }
      else
      {
        v11 = 0;
      }
      v12 = *(_QWORD *)(a1 + 16);
      if ( v12 )
      {
        v13 = v12 - 16;
        v14 = *(_QWORD *)(v12 - 8);
        if ( v14 )
        {
          v15 = v12 - 8;
          v16 = 24 * v14;
          do
          {
            v17 = *(_QWORD *)(v15 + v16);
            if ( v17 )
              operator delete[](v17);
            *(_QWORD *)(v15 + v16) = 0;
            v16 -= 24;
          }
          while ( v16 );
        }
        operator delete[](v13);
        v11 = *(_DWORD *)(a2 + 8);
      }
      *(_QWORD *)(a1 + 16) = v6;
      v18 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a1 + 8) = v11;
      *(_DWORD *)(a1 + 12) = v18;
    }

    __int64 __fastcall CPVRTArray<MetaDataBlock>::SetCapacity(__int64 a1, unsigned int a2)
    {
      unsigned int v3; // w8
      unsigned int v4; // w8
      __int64 v5; // x20
      _QWORD *v6; // x0
      _QWORD *v7; // x21
      _QWORD *v8; // x9
      __int64 v9; // x22
      unsigned int v10; // w23
      _QWORD *v11; // x24
      __int64 v12; // x8
      __int64 v13; // x19
      __int64 v14; // x9
      __int64 v15; // x20
      __int64 v16; // x21
      __int64 v17; // x0
    
      v3 = *(_DWORD *)(a1 + 12);
      if ( v3 < a2 )
      {
        v4 = 2 * v3;
        if ( v4 <= a2 )
          v5 = a2;
        else
          v5 = v4;
        v6 = (_QWORD *)operator new[](24 * v5 + 16);
        *v6 = 24;
        v6[1] = v5;
        v7 = v6 + 2;
        if ( (_DWORD)v5 )
        {
          v8 = v6 + 2;
          do
          {
            *(_DWORD *)v8 = 0;
            *((_DWORD *)v8 + 1) = 0;
            *((_DWORD *)v8 + 2) = 0;
            v8[2] = 0;
            v8 += 3;
          }
          while ( v8 != &v7[3 * v5] );
        }
        if ( *(_DWORD *)(a1 + 8) )
        {
          v9 = 0;
          v10 = 0;
          v11 = v6 + 2;
          do
          {
            MetaDataBlock::operator=((__int64)&v11[v9], *(_QWORD *)(a1 + 16) + v9 * 8);
            ++v10;
            v9 += 3;
          }
          while ( v10 < *(_DWORD *)(a1 + 8) );
        }
        *(_DWORD *)(a1 + 12) = v5;
        v12 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = v7;
        if ( v12 )
        {
          v13 = v12 - 16;
          v14 = *(_QWORD *)(v12 - 8);
          if ( v14 )
          {
            v15 = v12 - 8;
            v16 = 24 * v14;
            do
            {
              v17 = *(_QWORD *)(v15 + v16);
              if ( v17 )
                operator delete[](v17);
              *(_QWORD *)(v15 + v16) = 0;
              v16 -= 24;
            }
            while ( v16 );
          }
          operator delete[](v13);
        }
      }
      return 0;
    }

}; // end class CPVRTArray<MetaDataBlock>
