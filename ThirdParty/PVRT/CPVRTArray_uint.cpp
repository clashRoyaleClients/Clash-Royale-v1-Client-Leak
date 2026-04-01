class CPVRTArray<uint>
{
public:

    __int64 __fastcall CPVRTArray<unsigned int>::SetCapacity(__int64 a1, unsigned int a2)
    {
      unsigned int v3; // w8
      unsigned int v4; // w8
      __int64 v5; // x20
      __int64 v6; // x8
      unsigned int v7; // w9
      __int64 v8; // x0
      __int64 v9; // x10
    
      v3 = *(_DWORD *)(a1 + 12);
      if ( v3 < a2 )
      {
        v4 = 2 * v3;
        if ( v4 <= a2 )
          v5 = a2;
        else
          v5 = v4;
        v6 = operator new[](4 * v5);
        v7 = *(_DWORD *)(a1 + 8);
        v8 = *(_QWORD *)(a1 + 16);
        if ( v7 )
        {
          v9 = 0;
          do
          {
            *(_DWORD *)(v6 + 4 * v9) = *(_DWORD *)(v8 + 4 * v9);
            ++v9;
          }
          while ( (unsigned int)v9 < v7 );
          *(_DWORD *)(a1 + 12) = v5;
          *(_QWORD *)(a1 + 16) = v6;
          goto LABEL_10;
        }
        *(_DWORD *)(a1 + 12) = v5;
        *(_QWORD *)(a1 + 16) = v6;
        if ( v8 )
    LABEL_10:
          operator delete[](v8);
      }
      return 0;
    }

    _QWORD *__fastcall CPVRTArray<unsigned int>::~CPVRTArray(_QWORD *a1)
    {
      __int64 v2; // x0
    
      *a1 = &off_1004F1FD0;
      v2 = a1[2];
      if ( v2 )
        operator delete[](v2);
      return a1;
    }

    void __fastcall CPVRTArray<unsigned int>::~CPVRTArray(_QWORD *a1)
    {
      __int64 v2; // x0
    
      *a1 = &off_1004F1FD0;
      v2 = a1[2];
      if ( v2 )
        operator delete[](v2);
      operator delete(a1);
    }

    __int64 __fastcall CPVRTArray<unsigned int>::Remove(__int64 a1, unsigned int a2)
    {
      int v2; // w8
      unsigned int v3; // w8
      __int64 v5; // x8
      __int64 v6; // x9
      int *v7; // x10
      int v8; // t1
    
      v2 = *(_DWORD *)(a1 + 8);
      if ( !v2 )
        return 1;
      v3 = v2 - 1;
      if ( v3 == a2 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
      *(_DWORD *)(a1 + 8) = v3;
      if ( v3 > a2 )
      {
        v5 = *(_QWORD *)(a1 + 16);
        v6 = a2;
        v7 = (int *)(v5 + 4LL * (a2 + 1));
        do
        {
          v8 = *v7++;
          *(_DWORD *)(v5 + 4 * v6++) = v8;
        }
        while ( (unsigned int)v6 < *(_DWORD *)(a1 + 8) );
      }
      return 0;
    }

    __int64 __fastcall CPVRTArray<unsigned int>::RemoveLast(__int64 a1)
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

    void __fastcall CPVRTArray<unsigned int>::Copy<unsigned int>(__int64 a1, __int64 a2)
    {
      __int64 v4; // x22
      __int64 v5; // x0
      __int64 v6; // x20
      unsigned int v7; // w8
      __int64 v8; // x9
      __int64 v9; // x10
      __int64 v10; // x0
    
      v4 = *(unsigned int *)(a2 + 12);
      v5 = operator new[](4 * v4);
      v6 = v5;
      v7 = *(_DWORD *)(a2 + 8);
      if ( v7 )
      {
        v8 = 0;
        v9 = *(_QWORD *)(a2 + 16);
        do
        {
          *(_DWORD *)(v5 + 4 * v8) = *(_DWORD *)(v9 + 4 * v8);
          ++v8;
        }
        while ( (unsigned int)v8 < v7 );
      }
      v10 = *(_QWORD *)(a1 + 16);
      if ( v10 )
      {
        operator delete[](v10);
        v7 = *(_DWORD *)(a2 + 8);
        LODWORD(v4) = *(_DWORD *)(a2 + 12);
      }
      *(_QWORD *)(a1 + 16) = v6;
      *(_DWORD *)(a1 + 8) = v7;
      *(_DWORD *)(a1 + 12) = v4;
    }

}; // end class CPVRTArray<uint>
