class CPVRTArray<CPVRTMap<uint,MetaDataBlock>>
{
public:

    __int64 __fastcall CPVRTArray<CPVRTMap<unsigned int,MetaDataBlock>>::Append(__int64 a1, __int64 a2)
    {
      __int64 v4; // x19
      __int64 v5; // x21
      __int64 v6; // x0
    
      v4 = *(unsigned int *)(a1 + 8);
      CPVRTArray<CPVRTMap<unsigned int,MetaDataBlock>>::SetCapacity();
      ++*(_DWORD *)(a1 + 8);
      v5 = *(_QWORD *)(a1 + 16);
      v6 = v5 + 56 * v4;
      if ( v6 != a2 )
      {
        CPVRTArray<unsigned int>::Copy<unsigned int>(v6, a2);
        CPVRTArray<MetaDataBlock>::Copy<MetaDataBlock>(v5 + 56 * v4 + 24, a2 + 24);
      }
      *(_DWORD *)(v5 + 56 * v4 + 48) = *(_DWORD *)(a2 + 48);
      return v4;
    }

    __int64 __fastcall CPVRTArray<CPVRTMap<unsigned int,MetaDataBlock>>::SetCapacity(__int64 a1, unsigned int a2)
    {
      unsigned int v4; // w24
      unsigned int v5; // w25
      __int64 v6; // x22
      _QWORD *v7; // x19
      unsigned __int64 v8; // x23
      __int64 v9; // x8
      __int64 v10; // x21
      _QWORD *v11; // x23
      unsigned int v12; // w8
      __int64 v13; // x24
      unsigned int i; // w25
      _QWORD *v15; // x26
      __int64 v16; // x22
      __int64 v17; // x8
      __int64 v18; // x21
    
      v4 = *(_DWORD *)(a1 + 12);
      if ( v4 < a2 )
      {
        v5 = 2 * v4;
        if ( 2 * v4 <= a2 )
          v6 = a2;
        else
          v6 = v5;
        v7 = (_QWORD *)operator new[](56 * v6 + 16);
        *v7 = 56;
        v7[1] = v6;
        if ( (_DWORD)v6 )
        {
          v8 = 0;
          if ( a2 <= 2 * v4 )
            v9 = v5;
          else
            v9 = a2;
          v10 = 56 * v9;
          do
          {
            CPVRTMap<unsigned int,MetaDataBlock>::CPVRTMap((__int64)&v7[v8 / 8 + 2]);
            v8 += 56LL;
          }
          while ( v10 != v8 );
        }
        v11 = v7 + 2;
        v12 = *(_DWORD *)(a1 + 8);
        if ( v12 )
        {
          v13 = 0;
          for ( i = 0; i < v12; ++i )
          {
            v15 = *(_QWORD **)(a1 + 16);
            if ( v15 != v11 )
            {
              CPVRTArray<unsigned int>::Copy<unsigned int>(&v7[v13 + 2], &v15[v13]);
              CPVRTArray<MetaDataBlock>::Copy<MetaDataBlock>(&v7[v13 + 5], &v15[v13 + 3]);
              v12 = *(_DWORD *)(a1 + 8);
            }
            LODWORD(v7[v13 + 8]) = v15[v13 + 6];
            v13 += 7;
          }
        }
        *(_DWORD *)(a1 + 12) = v6;
        v16 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = v11;
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 - 8);
          if ( v17 )
          {
            v18 = 56 * v17;
            do
            {
              CPVRTMap<unsigned int,MetaDataBlock>::~CPVRTMap(v16 - 56 + v18);
              v18 -= 56;
            }
            while ( v18 );
          }
          operator delete[](v16 - 16);
        }
      }
      return 0;
    }

}; // end class CPVRTArray<CPVRTMap<uint,MetaDataBlock>>
