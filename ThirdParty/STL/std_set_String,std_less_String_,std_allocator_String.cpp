class std::set<String,std::less<String>,std::allocator<String>>
{
public:

    __int64 __fastcall std::set<String>::~set(__int64 a1)
    {
      std::_Rb_tree<String,String,std::_Identity<String>,std::less<String>,std::allocator<String>>::_M_erase();
      return a1;
    }

}; // end class std::set<String,std::less<String>,std::allocator<String>>
