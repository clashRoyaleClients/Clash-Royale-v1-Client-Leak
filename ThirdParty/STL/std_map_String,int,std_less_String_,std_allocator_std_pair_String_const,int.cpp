class std::map<String,int,std::less<String>,std::allocator<std::pair<String const,int>>>
{
public:

    __int64 __fastcall std::map<String,int>::~map(__int64 a1)
    {
      std::_Rb_tree<String,std::pair<String const,int>,std::_Select1st<std::pair<String const,int>>,std::less<String>,std::allocator<std::pair<String const,int>>>::_M_erase();
      return a1;
    }

}; // end class std::map<String,int,std::less<String>,std::allocator<std::pair<String const,int>>>
