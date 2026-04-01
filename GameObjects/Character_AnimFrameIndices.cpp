class Character::AnimFrameIndices
{
public:

    _DWORD *__fastcall Character::AnimFrameIndices::~AnimFrameIndices(_DWORD *result)
    {
      *result = -1;
      return result;
    }

    void __fastcall Character::AnimFrameIndices::init(_WORD *a1, __int64 a2, int a3)
    {
      const char *v6; // x1
      _BYTE v7[24]; // [xsp+8h] [xbp-68h] BYREF
      _BYTE v8[24]; // [xsp+20h] [xbp-50h] BYREF
      String v9; // [xsp+38h] [xbp-38h] BYREF
    
      String::String(&v9, "");
      switch ( a3 )
      {
        case 0:
          String::operator=(&v9, "deploy");
          goto LABEL_9;
        case 1:
          String::operator=(&v9, "hide");
          goto LABEL_9;
        case 2:
          String::operator=(&v9, "appear");
          goto LABEL_9;
        case 3:
          String::operator=(&v9, "generate");
          goto LABEL_9;
        case 4:
          String::operator=(&v9, "attack");
    LABEL_9:
          operator+(&v9, "_start");
          operator+(&v9, "_end");
          *a1 = MovieClip::getFrameIndex(a2, v8);
          a1[1] = MovieClip::getFrameIndex(a2, v7);
          String::~String();
          String::~String();
          break;
        default:
          Debugger::warning((__siginfo *)"AnimFrameIndices::init invalid t", v6);
          break;
      }
      String::~String();
    }

}; // end class Character::AnimFrameIndices
