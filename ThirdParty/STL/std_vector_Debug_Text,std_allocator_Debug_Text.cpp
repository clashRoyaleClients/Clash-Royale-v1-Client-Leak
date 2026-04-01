class std::vector<Debug::Text,std::allocator<Debug::Text>>
{
public:

    char **__fastcall std::vector<Debug::Text>::~vector(char **a1)
    {
      char *v2; // x20
      char *v3; // x21
    
      v2 = *a1;
      v3 = a1[1];
      if ( *a1 != v3 )
      {
        do
        {
          String::~String();
          v2 += 40;
        }
        while ( v3 != v2 );
        v2 = *a1;
      }
      if ( v2 )
        operator delete(v2);
      return a1;
    }

}; // end class std::vector<Debug::Text,std::allocator<Debug::Text>>
