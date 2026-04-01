class plcrash::BIT::async::dwarf_cfa_state_iterator<uint,int>
{
public:

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned int,int>::dwarf_cfa_state_iterator(
            __int64 result,
            __int64 a2)
    {
      *(_QWORD *)(result + 8) = a2;
      *(_WORD *)result = -256;
      return result;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned int,int>::next(
            unsigned __int8 *a1,
            _DWORD *a2,
            _DWORD *a3,
            _DWORD *a4)
    {
      __int64 v4; // x9
      __int64 v5; // x8
      __int64 v6; // x10
      unsigned __int8 v7; // w9
      __int64 v8; // x11
      __int64 v10; // x8
    
      v4 = a1[1];
      if ( v4 == 255 )
      {
        v7 = *a1;
      }
      else
      {
        v5 = *((_QWORD *)a1 + 1);
        v6 = *(unsigned __int8 *)(v5 + 24 * v4 + 256);
        a1[1] = v6;
        if ( (_DWORD)v6 != 255 )
          goto LABEL_11;
        v7 = *a1 + 1;
        *a1 = v7;
      }
      if ( v7 > 0xDu )
        return 0;
      v5 = *((_QWORD *)a1 + 1);
      v8 = v5 + 14LL * *(unsigned __int8 *)(v5 + 234);
      while ( 1 )
      {
        v6 = *(unsigned __int8 *)(v8 + v7 + 150);
        if ( (_DWORD)v6 != 255 )
          break;
        *a1 = ++v7;
        if ( v7 >= 0xEu )
          return 0;
      }
      a1[1] = v6;
    LABEL_11:
      v10 = v5 + 24 * v6;
      *a2 = *(_DWORD *)(v10 + 248);
      *a4 = *(_QWORD *)(v10 + 240);
      *a3 = *(_DWORD *)(v10 + 252);
      return 1;
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned int,int>::next(
            unsigned __int8 *a1,
            _DWORD *a2,
            _DWORD *a3,
            _DWORD *a4)
    {
      return __ZN7plcrash3BIT5async24dwarf_cfa_state_iteratorIjiE4nextEPjPNS1_28plcrash_dwarf_cfa_reg_rule_tES4_(
               a1,
               a2,
               a3,
               a4);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned int,int>::dwarf_cfa_state_iterator(
            __int64 result,
            __int64 a2)
    {
      return __ZN7plcrash3BIT5async24dwarf_cfa_state_iteratorIjiEC1EPNS1_15dwarf_cfa_stateIjiEE(result, a2);
    }

}; // end class plcrash::BIT::async::dwarf_cfa_state_iterator<uint,int>
