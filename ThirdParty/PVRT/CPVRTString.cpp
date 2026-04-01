class CPVRTString
{
public:

    _QWORD *__fastcall CPVRTString::CPVRTString(_QWORD *a1)
    {
      *a1 = off_100475870;
      a1[2] = 0;
      a1[3] = 1;
      a1[1] = calloc(1u, 1u);
      return a1;
    }

    _QWORD *__fastcall CPVRTString::~CPVRTString(_QWORD *a1)
    {
      void *v2; // x0
    
      *a1 = off_100475870;
      v2 = (void *)a1[1];
      if ( v2 )
      {
        free(v2);
        a1[1] = 0;
      }
      return a1;
    }

    void __fastcall CPVRTString::~CPVRTString(_QWORD *a1)
    {
      void *v2; // x0
    
      *a1 = off_100475870;
      v2 = (void *)a1[1];
      if ( v2 )
        free(v2);
      operator delete(a1);
    }

}; // end class CPVRTString
