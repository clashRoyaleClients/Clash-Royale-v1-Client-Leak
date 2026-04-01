class std::_Vector_base<FacebookFriend *,std::allocator<FacebookFriend *>>
{
public:

    __int64 *__fastcall std::_Vector_base<FacebookFriend *>::_Vector_base(__int64 *a1, unsigned __int64 a2)
    {
      __int64 v4; // x0
    
      a1[1] = 0;
      a1[2] = 0;
      *a1 = 0;
      if ( a2 )
      {
        if ( a2 >> 61 )
          std::__throw_bad_alloc();
        v4 = operator new(8 * a2);
        *a1 = v4;
        a1[1] = v4;
        a1[2] = v4 + 8 * a2;
      }
      return a1;
    }

}; // end class std::_Vector_base<FacebookFriend *,std::allocator<FacebookFriend *>>
