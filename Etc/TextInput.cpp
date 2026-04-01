class TextInput
{
public:

    __int64 __fastcall TextInput::TextInput(__int64 a1)
    {
      KeyInput *v2; // x0
    
      *(_QWORD *)a1 = off_100476D30;
      *(_BYTE *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 20) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 16) = 0;
      v2 = -[KeyInput init](+[KeyInput alloc](&OBJC_CLASS___KeyInput, "alloc"), "init");
      *(_QWORD *)(a1 + 8) = v2;
      -[KeyInput setM_pListener:](v2, "setM_pListener:", a1);
      return a1;
    }

    _QWORD *__fastcall TextInput::~TextInput(_QWORD *a1)
    {
      void *v2; // x20
    
      *a1 = off_100476D30;
      v2 = (void *)a1[1];
      objc_msgSend(v2, "setM_pListener:", 0);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 56LL))(a1, 0);
      objc_msgSend(v2, "release");
      return a1;
    }

    _QWORD *__fastcall TextInput::~TextInput(_QWORD *a1)
    {
      void *v2; // x20
    
      *a1 = off_100476D30;
      v2 = (void *)a1[1];
      objc_msgSend(v2, "setM_pListener:", 0);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 56LL))(a1, 0);
      objc_msgSend(v2, "release");
      return a1;
    }

    void __fastcall TextInput::~TextInput(_QWORD *a1)
    {
      void *v2; // x20
    
      *a1 = off_100476D30;
      v2 = (void *)a1[1];
      objc_msgSend(v2, "setM_pListener:", 0);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 56LL))(a1, 0);
      objc_msgSend(v2, "release");
      operator delete(a1);
    }

    id __fastcall TextInput::setText(__int64 a1, __int64 a2)
    {
      NSString *v4; // x0
      _QWORD *v5; // x2
      NSString *v6; // x20
    
      v4 = +[NSString alloc](&OBJC_CLASS___NSString, "alloc");
      v5 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v5 = (_QWORD *)*v5;
      v6 = -[NSString initWithUTF8String:](v4, "initWithUTF8String:", v5);
      objc_msgSend(*(id *)(a1 + 8), "setText:", v6);
      return -[NSString release](v6, "release");
    }

    TextInput *__fastcall TextInput::inputEnded(TextInput *this)
    {
      this->var2 = 0;
      return this;
    }

    void __fastcall TextInput::okPressed(TextInput *this)
    {
      ;
    }

    TextInput *__fastcall TextInput::activate(TextInput *this, _BOOL4 a2)
    {
      TextInput *v2; // x19
      void *var1; // x20
      void *v4; // x0
      const char *v5; // x1
    
      v2 = this;
      if ( a2 == this->var2 )
      {
        if ( a2 )
        {
          var1 = this->var1;
          objc_msgSend(var1, "hide");
          this = (TextInput *)objc_msgSend(var1, "show");
          v2->var2 = 1;
        }
      }
      else
      {
        v4 = this->var1;
        v2->var2 = a2;
        if ( a2 )
          v5 = "show";
        else
          v5 = "hide";
        return (TextInput *)objc_msgSend(v4, v5);
      }
      return this;
    }

    id __fastcall TextInput::setMaxTextLength(TextInput *this, int a2)
    {
      return objc_msgSend(this->var1, "setMaxTextLength:", a2);
    }

    id __fastcall TextInput::revert(TextInput *this)
    {
      return objc_msgSend(this->var1, "revert");
    }

    id __fastcall TextInput::setKeyboardType(__int64 a1, int a2)
    {
      id result; // x0
    
      result = *(id *)(a1 + 8);
      if ( a2 == 1 )
        return objc_msgSend(result, "setKeyboardType:", 0);
      if ( !a2 )
        return objc_msgSend(result, "setKeyboardType:", 1);
      return result;
    }

    __int64 __fastcall TextInput::setDefaultKeyboardType(__int64 result)
    {
      if ( (_DWORD)result == 1 )
      {
        s_defaultKeyboardType = 1;
      }
      else if ( !(_DWORD)result )
      {
        s_defaultKeyboardType = 0;
      }
      return result;
    }

    void __fastcall TextInput::textChanged(TextInput *this, const String *a2)
    {
      ;
    }

    void __fastcall TextInput::markedText(TextInput *this)
    {
      ;
    }

    void __fastcall TextInput::setCursorPosition(TextInput *this)
    {
      ;
    }

    __int64 __fastcall TextInput::visualOffset(__int64 a1, __int64 a2)
    {
      return a2;
    }

}; // end class TextInput
