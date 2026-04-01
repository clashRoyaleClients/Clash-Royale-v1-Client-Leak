class std::map<LogicSpellData const*,int,std::less<LogicSpellData const*>,std::allocator<std::pair<LogicSpellData const* const,int>>>
{
public:

    _QWORD *__fastcall std::map<LogicSpellData const*,int>::operator[](__int64 a1, __int64 *a2)
    {
      _QWORD *v2; // x11
      _QWORD *inserted; // x8
      _QWORD *v4; // x2
      __int64 v5; // x9
      __int64 v7; // [xsp+0h] [xbp-10h]
      int v8; // [xsp+8h] [xbp-8h]
    
      v2 = *(_QWORD **)(a1 + 16);
      inserted = (_QWORD *)(a1 + 8);
      if ( v2 )
      {
        v4 = (_QWORD *)(a1 + 8);
        do
        {
          inserted = v2;
          while ( inserted[4] < (unsigned __int64)*a2 )
          {
            inserted = (_QWORD *)inserted[3];
            if ( !inserted )
            {
              inserted = v4;
              goto LABEL_8;
            }
          }
          v2 = (_QWORD *)inserted[2];
          v4 = inserted;
        }
        while ( v2 );
      }
    LABEL_8:
      if ( inserted == (_QWORD *)(a1 + 8) )
      {
        v5 = *a2;
    LABEL_12:
        v7 = v5;
        v8 = 0;
        inserted = (_QWORD *)std::_Rb_tree<LogicSpellData const*,std::pair<LogicSpellData const* const,int>,std::_Select1st<std::pair<LogicSpellData const* const,int>>,std::less<LogicSpellData const*>,std::allocator<std::pair<LogicSpellData const* const,int>>>::_M_insert_unique(
                               a1,
                               inserted);
        return inserted + 5;
      }
      v5 = *a2;
      if ( (unsigned __int64)*a2 < inserted[4] )
        goto LABEL_12;
      return inserted + 5;
    }

}; // end class std::map<LogicSpellData const*,int,std::less<LogicSpellData const*>,std::allocator<std::pair<LogicSpellData const* const,int>>>
