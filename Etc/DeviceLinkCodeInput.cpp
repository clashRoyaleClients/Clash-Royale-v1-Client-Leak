class DeviceLinkCodeInput
{
public:

    InputField *__fastcall DeviceLinkCodeInput::DeviceLinkCodeInput(InputField *a1, TextField *a2, __int64 a3)
    {
      InputField::InputField(a1, a2);
      *(_QWORD *)a1 = off_10046E708;
      *((_QWORD *)a1 + 17) = 0;
      TextInput::setKeyboardType(a1, 0);
      *((_QWORD *)a1 + 17) = a3;
      return a1;
    }

    // attributes: thunk
    void __fastcall DeviceLinkCodeInput::DeviceLinkCodeInput(DeviceLinkCodeInput *this, TextField *a2, __int64 a3)
    {
      __ZN19DeviceLinkCodeInputC2EP9TextFieldP25DeviceLinkEnterCodeScreen(this, a2, a3);
    }

    void __fastcall DeviceLinkCodeInput::~DeviceLinkCodeInput(#1320 *this)
    {
      *(_QWORD *)this = off_10046E708;
      *((_QWORD *)this + 17) = 0;
      InputField::~InputField(this);
    }

    void __fastcall DeviceLinkCodeInput::~DeviceLinkCodeInput(#1320 *this)
    {
      *(_QWORD *)this = off_10046E708;
      *((_QWORD *)this + 17) = 0;
      InputField::~InputField(this);
      operator delete(this);
    }

    void __fastcall DeviceLinkCodeInput::refreshText(#1320 *this)
    {
      String v2; // [xsp+0h] [xbp-130h] BYREF
      String v3; // [xsp+18h] [xbp-118h] BYREF
      String v4; // [xsp+30h] [xbp-100h] BYREF
      String v5; // [xsp+48h] [xbp-E8h] BYREF
      String v6; // [xsp+60h] [xbp-D0h] BYREF
      String v7; // [xsp+78h] [xbp-B8h] BYREF
      String v8; // [xsp+90h] [xbp-A0h] BYREF
      String v9; // [xsp+A8h] [xbp-88h] BYREF
      String v10; // [xsp+C0h] [xbp-70h] BYREF
      String v11; // [xsp+D8h] [xbp-58h] BYREF
      String v12; // [xsp+F0h] [xbp-40h] BYREF
      String v13; // [xsp+108h] [xbp-28h] BYREF
    
      String::String(&v13, (const String *)((char *)this + 32));
      if ( v13.m_length < 9 )
      {
        if ( v13.m_length >= 5 )
        {
          String::substring(&v3, &v13, 0, 4);
          operator+(&v3, " ");
          String::substring(&v2, &v13, 4, (unsigned int)v13.m_length);
          operator+((__int64 *)&v5.m_length, &v4, &v2);
          String::operator=(&v13);
          String::~String();
          String::~String();
          String::~String();
          String::~String();
        }
      }
      else
      {
        String::substring(&v8, &v13, 0, 4);
        operator+(&v8, " ");
        String::substring(&v7, &v13, 4, 8);
        operator+((__int64 *)&v10.m_length, &v9, &v7);
        operator+(&v10, " ");
        String::substring(&v6, &v13, 8, (unsigned int)v13.m_length);
        operator+((__int64 *)&v12.m_length, &v11, &v6);
        String::operator=(&v13);
        String::~String();
        String::~String();
        String::~String();
        String::~String();
        String::~String();
        String::~String();
        String::~String();
      }
      TextField::setText(*((#1271 **)this + 10), &v13);
      String::~String();
    }

    __int64 __fastcall DeviceLinkCodeInput::markedText(#1271 **this, int a2, int a3)
    {
      int v3; // w8
      int v4; // w9
      int v5; // w8
      int v6; // w10
      bool v7; // cc
      int v8; // w1
    
      v3 = a3 + a2;
      if ( a3 + a2 <= 4 )
        v4 = a3;
      else
        v4 = a3 + 1;
      if ( v3 >= 9 )
        v4 = a3 + 2;
      if ( v3 <= 8 )
        v5 = a3;
      else
        v5 = a3 + 1;
      if ( a2 >= 5 )
        v6 = a2 + 1;
      else
        v6 = a2;
      if ( a2 < 5 )
        v5 = v4;
      v7 = a2 < 9;
      if ( a2 >= 9 )
        v8 = a2 + 2;
      else
        v8 = v6;
      if ( v7 )
        a3 = v5;
      return TextField::setHighlightRange(*(this + 10), v8, a3);
    }

    __int64 __fastcall DeviceLinkCodeInput::setCursorPosition(#1320 *this, int a2)
    {
      if ( *(int *)InputField::getInputText(this) >= 5 )
        a2 = *(_DWORD *)TextField::getStringObject(*((_QWORD *)this + 10));
      return InputField::setCursorPosition(this, a2);
    }

    __int64 __fastcall DeviceLinkCodeInput::okPressed(TextInput *this)
    {
      __int64 result; // x0
    
      TextInput::okPressed(this);
      result = *((_QWORD *)this + 17);
      if ( result )
        return DeviceLinkEnterCodeScreen::sendCode(result);
      return result;
    }

}; // end class DeviceLinkCodeInput
