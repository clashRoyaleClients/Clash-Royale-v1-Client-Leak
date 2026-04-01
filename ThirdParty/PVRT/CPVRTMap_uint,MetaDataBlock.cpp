class CPVRTMap<uint,MetaDataBlock>
{
public:

    __int64 __fastcall CPVRTMap<unsigned int,MetaDataBlock>::operator[](__int64 a1, int a2)
    {
      unsigned __int64 v4; // x8
      __int64 v5; // x9
      __int64 v6; // x21
      __int64 v7; // x20
      __int64 v8; // x19
      _DWORD v10[4]; // [xsp+8h] [xbp-38h] BYREF
      void *v11; // [xsp+18h] [xbp-28h]
    
      v4 = *(unsigned int *)(a1 + 48);
      if ( (_DWORD)v4 )
      {
        v5 = 0;
        while ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v5) != a2 )
        {
          if ( ++v5 >= v4 )
            goto LABEL_8;
        }
      }
      else
      {
        LODWORD(v5) = 0;
      }
      if ( (_DWORD)v5 != (_DWORD)v4 )
        return *(_QWORD *)(a1 + 40) + 24LL * (unsigned int)v5;
    LABEL_8:
      v6 = *(unsigned int *)(a1 + 8);
      CPVRTArray<unsigned int>::SetCapacity(a1, (unsigned int)(v6 + 1));
      ++*(_DWORD *)(a1 + 8);
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v6) = a2;
      v10[0] = 0;
      v10[1] = 0;
      v10[2] = 0;
      v11 = 0;
      v7 = *(unsigned int *)(a1 + 32);
      CPVRTArray<MetaDataBlock>::SetCapacity(a1 + 24, (unsigned int)(v7 + 1));
      ++*(_DWORD *)(a1 + 32);
      MetaDataBlock::operator=(*(_QWORD *)(a1 + 40) + 24 * v7, v10);
      ++*(_DWORD *)(a1 + 48);
      v8 = *(_QWORD *)(a1 + 40) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 8) - 1);
      if ( v11 )
        operator delete[](v11);
      v11 = 0;
      return v8;
    }

    __int64 __fastcall CPVRTMap<unsigned int,MetaDataBlock>::CPVRTMap(__int64 a1)
    {
      *(_QWORD *)a1 = &off_1004F1FD0;
      *(_QWORD *)(a1 + 8) = 0x1000000000LL;
      *(_QWORD *)(a1 + 16) = operator new[](64);
      CPVRTArray<MetaDataBlock>::CPVRTArray(a1 + 24);
      *(_DWORD *)(a1 + 48) = 0;
      return a1;
    }

    __int64 __fastcall CPVRTMap<unsigned int,MetaDataBlock>::~CPVRTMap(__int64 a1)
    {
      __int64 v2; // x0
    
      *(_DWORD *)(a1 + 48) = 0;
      CPVRTArray<MetaDataBlock>::~CPVRTArray((_QWORD *)(a1 + 24));
      *(_QWORD *)a1 = &off_1004F1FD0;
      v2 = *(_QWORD *)(a1 + 16);
      if ( v2 )
        operator delete[](v2);
      return a1;
    }

}; // end class CPVRTMap<uint,MetaDataBlock>
