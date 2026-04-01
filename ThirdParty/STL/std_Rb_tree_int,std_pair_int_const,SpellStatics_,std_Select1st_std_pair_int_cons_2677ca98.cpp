class std::_Rb_tree<int,std::pair<int const,SpellStatics>,std::_Select1st<std::pair<int const,SpellStatics>>,std::less<int>,std::allocator<std::pair<int const,SpellStatics>>>
{
public:

    void __fastcall std::_Rb_tree<int,std::pair<int const,SpellStatics>,std::_Select1st<std::pair<int const,SpellStatics>>,std::less<int>,std::allocator<std::pair<int const,SpellStatics>>>::_M_erase(
            __int64 a1,
            _QWORD *a2)
    {
      _QWORD *v2; // x20
      _QWORD *v4; // x21
    
      v2 = a2;
      if ( a2 )
      {
        do
        {
          std::_Rb_tree<int,std::pair<int const,SpellStatics>,std::_Select1st<std::pair<int const,SpellStatics>>,std::less<int>,std::allocator<std::pair<int const,SpellStatics>>>::_M_erase(
            a1,
            v2[3]);
          v4 = (_QWORD *)v2[2];
          operator delete(v2);
          v2 = v4;
        }
        while ( v4 );
      }
    }

}; // end class std::_Rb_tree<int,std::pair<int const,SpellStatics>,std::_Select1st<std::pair<int const,SpellStatics>>,std::less<int>,std::allocator<std::pair<int const,SpellStatics>>>
