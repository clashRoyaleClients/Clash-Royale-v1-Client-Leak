class ChatInput
{
public:

    void __fastcall ChatInput::~ChatInput(#1394 *this)
    {
      *(_QWORD *)this = off_1004F1C10;
      GameInputField::~GameInputField(this);
    }

    void __fastcall ChatInput::~ChatInput(#1394 *this)
    {
      *(_QWORD *)this = off_1004F1C10;
      GameInputField::~GameInputField(this);
      operator delete(this);
    }

    // attributes: thunk
    __int64 __fastcall ChatInput::refreshText(#1394 *this)
    {
      return InputField::refreshText(this);
    }

}; // end class ChatInput
