class MetaDataBlock
{
public:

    __int64 __fastcall MetaDataBlock::operator=(__int64 a1, __int64 a2)
    {
      __int64 v4; // x0
      __int64 v5; // x21
      _BYTE *v6; // x0
      __int64 v7; // x8
    
      if ( a2 != a1 )
      {
        v4 = *(_QWORD *)(a1 + 16);
        if ( v4 )
          operator delete[](v4);
        *(_QWORD *)(a1 + 16) = 0;
        *(_DWORD *)a1 = *(_DWORD *)a2;
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
        v5 = *(unsigned int *)(a2 + 8);
        *(_DWORD *)(a1 + 8) = v5;
        if ( *(_QWORD *)(a2 + 16) )
        {
          v6 = (_BYTE *)operator new[](v5);
          *(_QWORD *)(a1 + 16) = v6;
          if ( (_DWORD)v5 )
          {
            *v6 = **(_BYTE **)(a2 + 16);
            v7 = 1;
            if ( *(_DWORD *)(a1 + 8) >= 2u )
            {
              do
              {
                *(_BYTE *)(*(_QWORD *)(a1 + 16) + v7) = *(_BYTE *)(*(_QWORD *)(a2 + 16) + v7);
                ++v7;
              }
              while ( (unsigned int)v7 < *(_DWORD *)(a1 + 8) );
            }
          }
        }
      }
      return a1;
    }

}; // end class MetaDataBlock
