class plcrash::BIT::async::dwarf_opstream
{
public:

    __int64 __fastcall plcrash::BIT::async::dwarf_opstream::init(
            unsigned __int64 *a1,
            __int64 a2,
            unsigned __int64 a3,
            unsigned __int64 a4,
            __int64 a5,
            __int64 a6)
    {
      int v9; // w0
      __int64 v10; // x20
      unsigned __int64 v11; // x0
    
      a1[1] = a2;
      a1[6] = a3;
      v9 = BITplcrash_async_address_apply_offset(a4, a5, a1 + 2);
      v10 = 5;
      if ( (a6 & 0x8000000000000000LL) == 0 && ((v9 ^ 1) & 1) == 0 )
      {
        v10 = 5;
        if ( (unsigned int)BITplcrash_async_address_apply_offset(a1[2], a6, a1 + 3) )
        {
          v11 = BITplcrash_async_mobject_remap_address(a2, a1[2], 0, a1[3] - a1[2]);
          a1[4] = v11;
          a1[5] = v11 + a1[3] - a1[2];
          *a1 = v11;
          if ( v11 )
            return 0;
          else
            return 5;
        }
      }
      return v10;
    }

}; // end class plcrash::BIT::async::dwarf_opstream
