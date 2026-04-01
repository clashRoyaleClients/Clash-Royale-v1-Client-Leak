class DataLoaderString
{
public:

    __int64 __fastcall DataLoaderString::load(__int64 this, #1328 *a2)
    {
      std::string *v3; // x20
      char U8; // w0
    
      if ( *((_DWORD *)a2 + 2) != *((_DWORD *)a2 + 6) )
      {
        v3 = (std::string *)(this + 8);
        do
        {
          U8 = InStream::readU8(a2);
          this = std::string::push_back(v3, U8);
        }
        while ( *((_DWORD *)a2 + 2) != *((_DWORD *)a2 + 6) );
      }
      return this;
    }

    void __fastcall DataLoaderString::~DataLoaderString(AllianceScreen *this)
    {
      __int64 v1; // x8
      unsigned int *v2; // x8
      int v3; // w9
    
      *(_QWORD *)this = off_1004755F0;
      v1 = *((_QWORD *)this + 1);
      if ( (_UNKNOWN *)(v1 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        v2 = (unsigned int *)(v1 - 8);
        do
          v3 = __ldaxr(v2);
        while ( __stlxr(v3 - 1, v2) );
        if ( v3 <= 0 )
          std::string::_Rep::_M_destroy();
      }
    }

    void __fastcall DataLoaderString::~DataLoaderString(AllianceScreen *this)
    {
      __int64 v2; // x8
      unsigned int *v3; // x8
      int v4; // w9
    
      *(_QWORD *)this = off_1004755F0;
      v2 = *((_QWORD *)this + 1);
      if ( (_UNKNOWN *)(v2 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        v3 = (unsigned int *)(v2 - 8);
        do
          v4 = __ldaxr(v3);
        while ( __stlxr(v4 - 1, v3) );
        if ( v4 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      operator delete(this);
    }

    __int64 __fastcall DataLoaderString::getType(AllianceScreen *this)
    {
      return 1;
    }

}; // end class DataLoaderString
