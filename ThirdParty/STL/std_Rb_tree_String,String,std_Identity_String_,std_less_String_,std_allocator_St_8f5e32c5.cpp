class std::_Rb_tree<String,String,std::_Identity<String>,std::less<String>,std::allocator<String>>
{
public:

    void __fastcall std::_Rb_tree<String,String,std::_Identity<String>,std::less<String>,std::allocator<String>>::_M_erase(
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
          std::_Rb_tree<String,String,std::_Identity<String>,std::less<String>,std::allocator<String>>::_M_erase(a1, v2[3]);
          v4 = (_QWORD *)v2[2];
          String::~String((__int64)(v2 + 4));
          operator delete(v2);
          v2 = v4;
        }
        while ( v4 );
      }
    }

    __int64 __fastcall std::_Rb_tree<String,String,std::_Identity<String>,std::less<String>,std::allocator<String>>::find(
            __int64 a1,
            __int64 a2)
    {
      __int64 v3; // x19
      __int64 v4; // x8
      __int64 v5; // x22
      __int64 v6; // x21
    
      v3 = a1 + 8;
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        v5 = a1 + 8;
        do
        {
          v6 = v4;
          while ( (String::operator<(v6 + 32, a2) & 1) != 0 )
          {
            v6 = *(_QWORD *)(v6 + 24);
            if ( !v6 )
            {
              v6 = v5;
              goto LABEL_10;
            }
          }
          v4 = *(_QWORD *)(v6 + 16);
          v5 = v6;
        }
        while ( v4 );
      }
      else
      {
        v6 = a1 + 8;
      }
    LABEL_10:
      if ( v6 != v3 && !(unsigned int)String::operator<(a2, v6 + 32) )
        return v6;
      return v3;
    }

}; // end class std::_Rb_tree<String,String,std::_Identity<String>,std::less<String>,std::allocator<String>>
