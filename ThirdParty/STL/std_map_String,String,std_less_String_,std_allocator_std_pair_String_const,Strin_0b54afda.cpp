class std::map<String,String,std::less<String>,std::allocator<std::pair<String const,String>>>
{
public:

    __int64 __fastcall std::map<String,String>::operator[](__int64 a1, __int64 a2)
    {
      __int64 v4; // x0
      __int64 inserted; // x19
      String v7; // [xsp+8h] [xbp-68h] BYREF
      String v8; // [xsp+20h] [xbp-50h] BYREF
      String v9; // [xsp+38h] [xbp-38h] BYREF
    
      v4 = std::_Rb_tree<String,std::pair<String const,String>,std::_Select1st<std::pair<String const,String>>,std::less<String>,std::allocator<std::pair<String const,String>>>::lower_bound();
      inserted = v4;
      if ( v4 == a1 + 8 || (unsigned int)String::operator<(a2, v4 + 32) )
      {
        String::String(&v7);
        std::pair<String const,String>::pair(&v8, a2, &v7);
        inserted = std::_Rb_tree<String,std::pair<String const,String>,std::_Select1st<std::pair<String const,String>>,std::less<String>,std::allocator<std::pair<String const,String>>>::_M_insert_unique(
                     a1,
                     inserted,
                     &v8);
        String::~String(&v9);
        String::~String(&v8);
        String::~String(&v7);
      }
      return inserted + 56;
    }

}; // end class std::map<String,String,std::less<String>,std::allocator<std::pair<String const,String>>>
