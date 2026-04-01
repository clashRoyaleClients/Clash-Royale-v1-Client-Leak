class std::map<int,SFXSequenceInfo *,std::less<int>,std::allocator<std::pair<int const,SFXSequenceInfo *>>>
{
public:

    __int64 __fastcall std::map<int,SFXSequenceInfo *>::operator[](__int64 a1, int *a2)
    {
      __int64 v2; // x11
      __int64 inserted; // x8
      __int64 v4; // x2
      int v5; // w9
      int v7; // [xsp+0h] [xbp-10h]
      __int64 v8; // [xsp+8h] [xbp-8h]
    
      v2 = *(_QWORD *)(a1 + 16);
      inserted = a1 + 8;
      if ( v2 )
      {
        v4 = a1 + 8;
        do
        {
          inserted = v2;
          while ( *(_DWORD *)(inserted + 32) < *a2 )
          {
            inserted = *(_QWORD *)(inserted + 24);
            if ( !inserted )
            {
              inserted = v4;
              goto LABEL_8;
            }
          }
          v2 = *(_QWORD *)(inserted + 16);
          v4 = inserted;
        }
        while ( v2 );
      }
    LABEL_8:
      if ( inserted == a1 + 8 )
      {
        v5 = *a2;
    LABEL_12:
        v7 = v5;
        v8 = 0;
        inserted = std::_Rb_tree<int,std::pair<int const,SFXSequenceInfo *>,std::_Select1st<std::pair<int const,SFXSequenceInfo *>>,std::less<int>,std::allocator<std::pair<int const,SFXSequenceInfo *>>>::_M_insert_unique(
                     a1,
                     inserted);
        return inserted + 40;
      }
      v5 = *a2;
      if ( *a2 < *(_DWORD *)(inserted + 32) )
        goto LABEL_12;
      return inserted + 40;
    }

}; // end class std::map<int,SFXSequenceInfo *,std::less<int>,std::allocator<std::pair<int const,SFXSequenceInfo *>>>
