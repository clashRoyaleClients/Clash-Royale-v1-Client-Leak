class GameConfig
{
public:

    void __fastcall GameConfig::GameConfig(GameConfig *this)
    {
      String *v2; // x20
    
      *(_QWORD *)this = off_1004F2258;
      v2 = (String *)((char *)this + 40);
      String::String((String *)((char *)this + 16));
      String::String(v2);
      String::String((String *)((char *)this + 64));
      String::String((String *)((char *)this + 88));
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 16) = 0;
      GameConfig::initializeMembers(this);
    }

    float __fastcall GameConfig::getStickMarginLeft(ChatInput *this)
    {
      return Screen::getDisplayFactor(this) * 20.0;
    }

    float __fastcall GameConfig::getStickMarginRight(ChatInput *this)
    {
      return Screen::getDisplayFactor(this) * 20.0;
    }

    float __fastcall GameConfig::getStickVariableRangeRight(ChatInput *this)
    {
      return 1.0;
    }

    float __fastcall GameConfig::getStickSizeFactor(ChatInput *this)
    {
      return 1.0;
    }

    float __fastcall GameConfig::getFps(ChatInput *this)
    {
      return 60.0;
    }

    __int64 __fastcall GameConfig::isMSAASupported(ChatInput *this)
    {
      return 0;
    }

    __int64 __fastcall GameConfig::isMSAAEnabled(ChatInput *this)
    {
      if ( *((_BYTE *)this + 8) )
        return (*(__int64 (__fastcall **)(ChatInput *))(*(_QWORD *)this + 80LL))(this);
      else
        return 0;
    }

    void __fastcall GameConfig::initializeMembers(ChatInput *this)
    {
      __int64 v2; // x21
      __int64 v3; // x22
      __int64 v4; // x20
    
      *((_DWORD *)this + 2) = 0;
      String::operator=((char *)this + 64, "");
      String::operator=((char *)this + 16, "");
      String::operator=((char *)this + 40, "");
      String::operator=((char *)this + 88, "");
      v2 = *((_QWORD *)this + 14);
      v3 = *((_QWORD *)this + 15);
      if ( v3 != v2 )
      {
        v4 = *((_QWORD *)this + 14);
        do
        {
          String::~String();
          v4 += 24;
        }
        while ( v3 != v4 );
      }
      *((_QWORD *)this + 15) = v2;
    }

    void __fastcall GameConfig::~GameConfig(ChatInput *this)
    {
      GameConfig::~GameConfig(this);
    }

    void __fastcall GameConfig::~GameConfig(ChatInput *this)
    {
      GameConfig::~GameConfig(this);
      operator delete(this);
    }

    float __fastcall GameConfig::getStickVariableRangeLeft(ChatInput *this)
    {
      return 1.0;
    }

    void __fastcall GameConfig::~GameConfig(String **this)
    {
      *this = (String *)off_1004F2258;
      GameConfig::initializeMembers((ChatInput *)this);
      std::vector<String>::~vector(this + 14);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
    }

}; // end class GameConfig
