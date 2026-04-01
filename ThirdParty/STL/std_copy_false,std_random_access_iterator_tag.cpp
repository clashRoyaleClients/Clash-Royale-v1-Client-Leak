class std::__copy<false,std::random_access_iterator_tag>
{
public:

    String *__fastcall std::__copy<false,std::random_access_iterator_tag>::copy<String const*,String*>(
            __int64 a1,
            __int64 a2,
            String *this)
    {
      String *v3; // x19
      __int64 v4; // x20
      unsigned __int64 v5; // x8
      __int64 v6; // x9
      __int64 v7; // x22
      __int64 v8; // x23
      String *v9; // x21
    
      v3 = this;
      v4 = a1;
      if ( a2 - a1 >= 1 )
      {
        v5 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 3);
        v6 = -2;
        if ( (__int64)~v5 >= -2 && v5 != 1 )
          v6 = ~v5;
        v7 = v5 + v6 + 2;
        v8 = v5 + 1;
        v9 = this;
        do
        {
          String::operator=(v9);
          v4 += 24;
          ++v9;
          --v8;
        }
        while ( v8 > 1 );
        v3 += v7;
      }
      return v3;
    }

    String *__fastcall std::__copy<false,std::random_access_iterator_tag>::copy<String *,String *>(
            __int64 a1,
            __int64 a2,
            String *this)
    {
      String *v3; // x19
      __int64 v4; // x20
      unsigned __int64 v5; // x8
      __int64 v6; // x9
      __int64 v7; // x22
      __int64 v8; // x23
      String *v9; // x21
    
      v3 = this;
      v4 = a1;
      if ( a2 - a1 >= 1 )
      {
        v5 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 3);
        v6 = -2;
        if ( (__int64)~v5 >= -2 && v5 != 1 )
          v6 = ~v5;
        v7 = v5 + v6 + 2;
        v8 = v5 + 1;
        v9 = this;
        do
        {
          String::operator=(v9);
          v4 += 24;
          ++v9;
          --v8;
        }
        while ( v8 > 1 );
        v3 += v7;
      }
      return v3;
    }

    String *__fastcall std::__copy<false,std::random_access_iterator_tag>::copy<FacebookManager::Request *,FacebookManager::Request *>(
            __int64 a1,
            __int64 a2,
            String *a3)
    {
      String *v3; // x19
      __int64 v4; // x20
      __int64 v5; // x8
      __int64 v6; // x9
      __int64 v7; // x22
      __int64 v8; // x23
      String *v9; // x21
    
      v3 = a3;
      v4 = a1;
      if ( a2 - a1 >= 1 )
      {
        v5 = 0x4EC4EC4EC4EC4EC5LL * ((a2 - a1) >> 3);
        v6 = -2;
        if ( ~v5 >= -2 && v5 != 1 )
          v6 = ~v5;
        v7 = v5 + v6 + 2;
        v8 = v5 + 1;
        v9 = a3;
        do
        {
          FacebookManager::Request::operator=(v9, v4);
          v4 += 104;
          v9 = (String *)((char *)v9 + 104);
          --v8;
        }
        while ( v8 > 1 );
        return (String *)((char *)v3 + 104 * v7);
      }
      return v3;
    }

    __int64 __fastcall std::__copy<false,std::random_access_iterator_tag>::copy<ImageSet::Slot *,ImageSet::Slot *>(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __int64 v3; // x19
      __int64 v4; // x20
      __int64 v5; // x8
      __int64 v6; // x9
      __int64 v7; // x21
      __int64 v8; // x22
      __int64 v9; // x23
    
      v3 = a3;
      v4 = a1;
      if ( a2 - a1 >= 1 )
      {
        v5 = 0x6DB6DB6DB6DB6DB7LL * ((a2 - a1) >> 3);
        v6 = -2;
        if ( ~v5 >= -2 && v5 != 1 )
          v6 = ~v5;
        v7 = v5 + v6 + 2;
        v8 = v5 + 1;
        v9 = a3;
        do
        {
          *(_QWORD *)v9 = *(_QWORD *)v4;
          String::operator=((String *)(v9 + 8), (String *)(v4 + 8));
          *(_QWORD *)(v9 + 48) = *(_QWORD *)(v4 + 48);
          *(_OWORD *)(v9 + 32) = *(_OWORD *)(v4 + 32);
          --v8;
          v4 += 56;
          v9 += 56;
        }
        while ( v8 > 1 );
        v3 += 56 * v7;
      }
      return v3;
    }

}; // end class std::__copy<false,std::random_access_iterator_tag>
