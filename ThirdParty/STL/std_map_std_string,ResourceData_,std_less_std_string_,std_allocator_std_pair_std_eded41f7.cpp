class std::map<std::string,ResourceData *,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>
{
public:

    __int64 __fastcall std::map<std::string,ResourceData *>::~map(__int64 a1)
    {
      std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_erase(
        a1,
        *(_QWORD *)(a1 + 16));
      return a1;
    }

    __int64 __fastcall std::map<std::string,ResourceData *>::operator[](__int64 a1, const std::string *a2)
    {
      __int64 v4; // x0
      __int64 inserted; // x19
      unsigned int *v7; // x8
      int v8; // w9
      _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
    
      v4 = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::lower_bound();
      inserted = v4;
      if ( v4 == a1 + 8 || (std::string::compare(a2, v4 + 32) & 0x80000000) != 0 )
      {
        std::string::string((std::string *)v9, a2);
        v9[1] = 0;
        inserted = std::_Rb_tree<std::string,std::pair<std::string const,ResourceData *>,std::_Select1st<std::pair<std::string const,ResourceData *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>::_M_insert_unique(
                     a1,
                     inserted,
                     v9);
        if ( (_UNKNOWN *)(v9[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v7 = (unsigned int *)(v9[0] - 8LL);
          do
            v8 = __ldaxr(v7);
          while ( __stlxr(v8 - 1, v7) );
          if ( v8 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
      return inserted + 40;
    }

}; // end class std::map<std::string,ResourceData *,std::less<std::string>,std::allocator<std::pair<std::string const,ResourceData *>>>
