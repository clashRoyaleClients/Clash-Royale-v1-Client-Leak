class std::map<String,CSVRow *,std::less<String>,std::allocator<std::pair<String const,CSVRow *>>>
{
public:

    __int64 __fastcall std::map<String,CSVRow *>::operator[](__int64 a1, const String *a2)
    {
      __int64 v4; // x0
      __int64 inserted; // x19
      String v7; // [xsp+0h] [xbp-40h] BYREF
      __int64 v8; // [xsp+18h] [xbp-28h]
    
      v4 = std::_Rb_tree<String,std::pair<String const,CSVRow *>,std::_Select1st<std::pair<String const,CSVRow *>>,std::less<String>,std::allocator<std::pair<String const,CSVRow *>>>::lower_bound();
      inserted = v4;
      if ( v4 == a1 + 8 || (unsigned int)String::operator<(a2, v4 + 32) )
      {
        String::String(&v7, a2);
        v8 = 0;
        inserted = std::_Rb_tree<String,std::pair<String const,CSVRow *>,std::_Select1st<std::pair<String const,CSVRow *>>,std::less<String>,std::allocator<std::pair<String const,CSVRow *>>>::_M_insert_unique(
                     a1,
                     inserted,
                     &v7);
        String::~String(&v7);
      }
      return inserted + 56;
    }

}; // end class std::map<String,CSVRow *,std::less<String>,std::allocator<std::pair<String const,CSVRow *>>>
