class GameInputField
{
public:

    InputField *__fastcall GameInputField::GameInputField(InputField *a1, TextField *a2, __int64 a3)
    {
      InputField *result; // x0
    
      result = InputField::InputField(a1, a2);
      *(_QWORD *)result = off_100471990;
      *((_BYTE *)a2 + 76) = 0;
      *((_QWORD *)result + 17) = a3;
      return result;
    }

    InputField *__fastcall GameInputField::GameInputField(InputField *a1, TextField *a2, __int64 a3)
    {
      InputField *result; // x0
    
      result = InputField::InputField(a1, a2);
      *(_QWORD *)result = off_100471990;
      *((_BYTE *)a2 + 76) = 0;
      *((_QWORD *)result + 17) = a3;
      return result;
    }

    void __fastcall GameInputField::~GameInputField(InputField *a1)
    {
      *(_QWORD *)a1 = off_100471990;
      *((_QWORD *)a1 + 17) = 0;
      InputField::~InputField(a1);
    }

    void __fastcall GameInputField::~GameInputField(InputField *a1)
    {
      *(_QWORD *)a1 = off_100471990;
      *((_QWORD *)a1 + 17) = 0;
      InputField::~InputField(a1);
    }

    void __fastcall GameInputField::~GameInputField(InputField *a1)
    {
      *(_QWORD *)a1 = off_100471990;
      *((_QWORD *)a1 + 17) = 0;
      InputField::~InputField(a1);
      operator delete(a1);
    }

    __int64 __fastcall GameInputField::okPressed(TextInput *a1)
    {
      __int64 result; // x0
    
      TextInput::okPressed(a1);
      result = (__int64)a1[4].var1;
      if ( result )
        return (*(__int64 (__fastcall **)(__int64, TextInput *))(*(_QWORD *)result + 304LL))(result, a1);
      return result;
    }

    __int64 __fastcall GameInputField::inputEnded(__int64 a1)
    {
      __int64 result; // x0
    
      InputField::inputEnded((#1279 *)a1);
      result = *(_QWORD *)(a1 + 136);
      if ( result )
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)result + 312LL))(result, a1);
      return result;
    }

    __int64 __fastcall GameInputField::touchReleasedExt(__int64 a1, __int64 a2)
    {
      __int64 TextField; // x21
      __int64 v5; // x20
      Rect v7[2]; // [xsp+0h] [xbp-30h] BYREF
    
      TextField = InputField::getTextField((#1279 *)a1);
      if ( !TextField )
        return 0;
      Rect::Rect(v7);
      DisplayObject::getGlobalBounds(TextField, v7);
      v5 = Rect::containsPoint((#1261 *)v7, *(float *)(a2 + 52), *(float *)(a2 + 56));
      if ( ((unsigned int)v5 ^ (*(_BYTE *)(a1 + 16) != 0)) == 1 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, v5);
      Rect::~Rect(v7);
      return v5;
    }

}; // end class GameInputField
