class InputField
{
public:

    InputField *__fastcall InputField::InputField(InputField *a1, __int64 a2)
    {
      TextInput::TextInput((__int64)a1);
      *(_QWORD *)a1 = off_100476D98;
      String::String((__int64)a1 + 32);
      String::String((__int64)a1 + 56);
      Rect::Rect((_QWORD *)a1 + 11);
      *((_QWORD *)a1 + 14) = 0;
      *((_QWORD *)a1 + 15) = 0;
      *((_QWORD *)a1 + 16) = 0;
      InputField::initializeMembers(a1);
      *((_QWORD *)a1 + 10) = a2;
      TextField::fetchFont(a2);
      return a1;
    }

    InputField *__fastcall InputField::InputField(InputField *a1, __int64 a2)
    {
      InputField::InputField(a1, a2);
      return a1;
    }

    __int64 __fastcall InputField::~InputField(__int64 a1)
    {
      *(_QWORD *)a1 = off_100476D98;
      InputField::initializeMembers((InputField *)a1);
      std::vector<String>::~vector((String **)(a1 + 112));
      Rect::~Rect((_QWORD *)(a1 + 88));
      String::~String(a1 + 56);
      String::~String(a1 + 32);
      TextInput::~TextInput((_QWORD *)a1);
      return a1;
    }

    __int64 __fastcall InputField::~InputField(__int64 a1)
    {
      InputField::~InputField(a1);
      return a1;
    }

    void __fastcall InputField::~InputField(void *a1)
    {
      InputField::~InputField((__int64)a1);
      operator delete(a1);
    }

    id __fastcall InputField::textChanged(__int64 a1, String *a2)
    {
      String *v4; // x21
      int v5; // w8
      __int64 v6; // x22
      __int64 v7; // x8
      __int64 v8; // x23
      int v9; // w0
      __int64 Font; // x0
    
      v4 = (String *)(a1 + 32);
      if ( a2->m_length > *(_DWORD *)(a1 + 32) )
      {
        v5 = -1431655765 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112)) >> 3);
        v6 = v5 + 1LL;
        v7 = 24LL * (v5 - 1);
        while ( --v6 >= 1 )
        {
          v8 = v7 - 24;
          v9 = String::contains(a2, (const String *)(*(_QWORD *)(a1 + 112) + v7));
          v7 = v8;
          if ( v9 )
            return TextInput::revert((TextInput *)a1);
        }
        Font = TextField::getFont(*(_QWORD *)(a1 + 80));
        if ( Font && ((*(__int64 (__fastcall **)(__int64, String *))(*(_QWORD *)Font + 24LL))(Font, a2) & 1) == 0 )
          return TextInput::revert((TextInput *)a1);
      }
      String::operator=(v4, a2);
      return (id)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
    }

    __int64 __fastcall InputField::markedText(LogicJSONNull *this, int a2, int a3)
    {
      return TextField::setHighlightRange(*((_QWORD *)this + 10), a2, a3);
    }

    __int64 __fastcall InputField::setText(__int64 a1, String *a2)
    {
      String::operator=((String *)(a1 + 32), a2);
      TextInput::setText(a1, (__int64)a2);
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
    }

    __int64 __fastcall InputField::getInputText(LogicJSONNull *this)
    {
      return (__int64)this + 32;
    }

    void __fastcall InputField::refreshText(__int64 a1)
    {
      TextField::setText(*(String **)(a1 + 80), (String *)(a1 + 32));
    }

    __int64 __fastcall InputField::update(__int64 this, float a2)
    {
      *(_BYTE *)(*(_QWORD *)(this + 80) + 85LL) = *(_BYTE *)(this + 16);
      return this;
    }

    __int64 __fastcall InputField::inputEnded(TextInput *this)
    {
      TextInput::inputEnded(this);
      return (*((__int64 (__fastcall **)(TextInput *))this->var0 + 12))(this);
    }

    __int64 __fastcall InputField::activate(TextInput *this, _BOOL4 a2)
    {
      TextInput::activate(this, a2);
      return (*((__int64 (__fastcall **)(TextInput *))this->var0 + 12))(this);
    }

    __int64 __fastcall InputField::getTextField(LogicJSONNull *this)
    {
      return *((_QWORD *)this + 10);
    }

    _QWORD *__fastcall InputField::addEmojiToForbiddenCharacters(__int64 a1)
    {
      __int64 v1; // x20
      __int64 v2; // x19
      _QWORD *result; // x0
      String v4; // [xsp+8h] [xbp-48h] BYREF
      _QWORD v5[2]; // [xsp+20h] [xbp-30h] BYREF
    
      v1 = 0;
      v2 = a1 + 112;
      do
      {
        StringBuilder::StringBuilder((StringBuilder *)v5);
        StringBuilder::appendCodePoint(
          (#1329 *)v5,
          InputField::addEmojiToForbiddenCharacters(void)::emoticonsCharacters[v1]);
        StringBuilder::createString((__int64)v5, &v4);
        std::vector<String>::push_back(v2, &v4);
        String::~String((__int64)&v4);
        result = StringBuilder::~StringBuilder(v5);
        ++v1;
      }
      while ( (unsigned int)v1 < 0x34D );
      return result;
    }

    String *__fastcall InputField::addForbiddenCharacter(__int64 a1, String *a2)
    {
      return std::vector<String>::push_back(a1 + 112, a2);
    }

    void __fastcall InputField::checkTextFits(__int64 a1, int a2, float a3)
    {
      float v6; // s0
      void (__fastcall *v7)(__int64, _BYTE *); // x21
      _BYTE v8[24]; // [xsp+8h] [xbp-48h] BYREF
    
      TextField::getTextHeight(*(_QWORD *)(a1 + 80));
      if ( v6 >= a3 )
      {
        TextInput::setMaxTextLength((TextInput *)a1, *(_DWORD *)(a1 + 32));
        if ( *(int *)(a1 + 32) >= 1 )
        {
          v7 = *(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 16LL);
          String::substring((unsigned int *)(a1 + 32), 0, (unsigned int)(*(_DWORD *)(a1 + 32) - 1), (__int64)v8);
          v7(a1, v8);
          String::~String((__int64)v8);
        }
      }
      else
      {
        TextInput::setMaxTextLength((TextInput *)a1, a2);
      }
    }

    __int64 __fastcall InputField::setCursorPosition(LogicJSONNull *this, int a2)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 10);
      if ( result )
        return TextField::setCursorPosition(result, a2);
      return result;
    }

    __int64 __fastcall InputField::visualOffset(__int64 a1, __int64 a2, int a3)
    {
      VertexBuffer *v3; // x0
    
      v3 = *(VertexBuffer **)(a1 + 80);
      if ( v3 )
        return TextField::visualOffset(v3, a2, a3);
      else
        return a2;
    }

    void __fastcall InputField::initializeMembers(__int64 a1)
    {
      __int64 v2; // x21
      __int64 v3; // x22
      __int64 v4; // x20
      String v5; // [xsp+8h] [xbp-38h] BYREF
    
      v2 = *(_QWORD *)(a1 + 112);
      v3 = *(_QWORD *)(a1 + 120);
      if ( v3 != v2 )
      {
        v4 = *(_QWORD *)(a1 + 112);
        do
        {
          String::~String(v4);
          v4 += 24;
        }
        while ( v3 != v4 );
      }
      *(_QWORD *)(a1 + 120) = v2;
      *(_DWORD *)(a1 + 104) = 0;
      String::String((__int64)&v5);
      String::operator=((String *)(a1 + 32), &v5);
      String::~String((__int64)&v5);
      *(_QWORD *)(a1 + 80) = 0;
    }

}; // end class InputField
