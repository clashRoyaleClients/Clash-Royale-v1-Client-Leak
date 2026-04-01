class FontFormatter
{
public:

    _QWORD *__fastcall FontFormatter::~FontFormatter(_QWORD *a1)
    {
      _QWORD *v2; // x0
      _QWORD *v3; // x20
    
      *a1 = &off_100475320;
      v2 = (_QWORD *)a1[4];
      if ( v2 )
      {
        do
        {
          v3 = (_QWORD *)v2[1];
          operator delete(v2);
          v2 = v3;
        }
        while ( v3 );
      }
      return a1;
    }

    _QWORD *__fastcall FontFormatter::~FontFormatter(_QWORD *a1)
    {
      _QWORD *v2; // x0
      _QWORD *v3; // x20
    
      *a1 = &off_100475320;
      v2 = (_QWORD *)a1[4];
      if ( v2 )
      {
        do
        {
          v3 = (_QWORD *)v2[1];
          operator delete(v2);
          v2 = v3;
        }
        while ( v3 );
      }
      return a1;
    }

    void __fastcall FontFormatter::~FontFormatter(_QWORD *a1)
    {
      _QWORD *v2; // x0
      _QWORD *v3; // x20
    
      *a1 = &off_100475320;
      v2 = (_QWORD *)a1[4];
      if ( v2 )
      {
        do
        {
          v3 = (_QWORD *)v2[1];
          operator delete(v2);
          v2 = v3;
        }
        while ( v3 );
      }
      operator delete(a1);
    }

}; // end class FontFormatter
