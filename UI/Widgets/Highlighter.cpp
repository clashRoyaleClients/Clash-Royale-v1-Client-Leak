class Highlighter
{
public:

    void __fastcall Highlighter::Highlighter(Highlighter *this)
    {
      *((_DWORD *)this + 6) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      *(_QWORD *)this = 0;
    }

    void __fastcall Highlighter::~Highlighter(ProfilePicture *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)((char *)this + 20) = 0;
      *(_QWORD *)((char *)this + 12) = 0;
      v2 = *(_QWORD *)this;
      if ( v2 )
        operator delete[](v2);
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
    }

    __int64 __fastcall Highlighter::addTarget(__int64 a1, __int64 a2)
    {
      __int64 v3; // [xsp+8h] [xbp-8h] BYREF
    
      v3 = a2;
      if ( a2 )
        return LogicArrayList<DisplayObject *>::add(a1, &v3);
      else
        return Debugger::warning((__siginfo *)"trying to add NULL DisplayObject to Highlighter!", 0);
    }

    float *__fastcall Highlighter::start(float *this, float a2, float a3)
    {
      *(this + 4) = a2;
      *(this + 5) = a2;
      *(this + 6) = a3;
      return this;
    }

    void __fastcall Highlighter::update(ProfilePicture *this, float a2)
    {
      float v3; // s2
      float v4; // s1
      float v5; // s0
      float v6; // s0
      float v7; // s8
      __int64 v8; // x8
      __int64 v9; // x20
      __int64 v10; // x8
      float v11; // [xsp+0h] [xbp-30h]
    
      v3 = *((float *)this + 4);
      if ( v3 > 0.0 )
      {
        v4 = *((float *)this + 5);
        if ( v4 > 0.0 )
        {
          v5 = v3 - a2;
          *((float *)this + 4) = v5;
          if ( v5 >= 0.0 )
          {
            v7 = *((float *)this + 6);
            v6 = v7 * sinf((float)(v5 / v4) * 3.1416);
          }
          else
          {
            *((_DWORD *)this + 4) = 0;
            v6 = 0.0;
          }
          v11 = v6;
          v8 = *((int *)this + 3);
          if ( (int)v8 >= 1 )
          {
            v9 = v8 - 1;
            do
            {
              ColorTransform::setAddColor((ColorTransform *)(*(_QWORD *)(*(_QWORD *)this + 8 * v9) + 9LL), v6, v6, v11);
              v6 = v11;
              v10 = v9-- + 1;
            }
            while ( v10 > 1 );
          }
        }
      }
    }

}; // end class Highlighter
