class CPVRTMap<uint,CPVRTMap<uint,MetaDataBlock>>
{
public:

    __int64 __fastcall CPVRTMap<unsigned int,CPVRTMap<unsigned int,MetaDataBlock>>::operator[](__int64 a1, int a2)
    {
      unsigned __int64 v4; // x8
      __int64 v5; // x9
      __int64 v6; // x21
      __int64 v7; // x19
      _BYTE v9[56]; // [xsp+8h] [xbp-58h] BYREF
    
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
        return *(_QWORD *)(a1 + 40) + 56LL * (unsigned int)v5;
    LABEL_8:
      v6 = *(unsigned int *)(a1 + 8);
      CPVRTArray<unsigned int>::SetCapacity(a1, (unsigned int)(v6 + 1));
      ++*(_DWORD *)(a1 + 8);
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v6) = a2;
      CPVRTMap<unsigned int,MetaDataBlock>::CPVRTMap(v9);
      CPVRTArray<CPVRTMap<unsigned int,MetaDataBlock>>::Append(a1 + 24, v9);
      ++*(_DWORD *)(a1 + 48);
      v7 = *(_QWORD *)(a1 + 40) + 56LL * (unsigned int)(*(_DWORD *)(a1 + 8) - 1);
      CPVRTMap<unsigned int,MetaDataBlock>::~CPVRTMap(v9);
      return v7;
    }

}; // end class CPVRTMap<uint,CPVRTMap<uint,MetaDataBlock>>
