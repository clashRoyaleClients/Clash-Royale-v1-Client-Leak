class std::_Rb_tree<String,std::pair<String const,int>,std::_Select1st<std::pair<String const,int>>,std::less<String>,std::allocator<std::pair<String const,int>>>
{
public:

    void __fastcall std::_Rb_tree<String,std::pair<String const,int>,std::_Select1st<std::pair<String const,int>>,std::less<String>,std::allocator<std::pair<String const,int>>>::_M_erase(
            __int64 a1,
            __int64 a2)
    {
      __int64 v2; // x20
      __int64 v4; // x21
    
      v2 = a2;
      if ( a2 )
      {
        do
        {
          std::_Rb_tree<String,std::pair<String const,int>,std::_Select1st<std::pair<String const,int>>,std::less<String>,std::allocator<std::pair<String const,int>>>::_M_erase(
            a1,
            *(_QWORD *)(v2 + 24));
          v4 = *(_QWORD *)(v2 + 16);
          String::~String((String *)(v2 + 32));
          operator delete((void *)v2);
          v2 = v4;
        }
        while ( v4 );
      }
    }

}; // end class std::_Rb_tree<String,std::pair<String const,int>,std::_Select1st<std::pair<String const,int>>,std::less<String>,std::allocator<std::pair<String const,int>>>
