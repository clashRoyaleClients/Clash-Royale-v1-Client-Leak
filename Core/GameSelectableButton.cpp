class GameSelectableButton
{
public:

    void __fastcall GameSelectableButton::GameSelectableButton(GameSelectableButton *this, #1255 *a2)
    {
      LogicDataTables *v3; // x0
    
      v3 = SelectableButton::SelectableButton(this, a2);
      *(_QWORD *)this = off_10046B068;
      *((_DWORD *)this + 62) = -831624408;
      *((_DWORD *)this + 63) = -831624408;
      *((_DWORD *)this + 64) = -831624408;
      *((_QWORD *)this + 33) = 0;
      *((_DWORD *)this + 15) = -3;
      *((_QWORD *)this + 33) = LogicDataTables::getDefaultButtonClickSound(v3);
    }

    // attributes: thunk
    void __fastcall GameSelectableButton::GameSelectableButton(GameSelectableButton *this, #1255 *a2)
    {
      __ZN20GameSelectableButtonC2EP20SelectableButtonList(this, a2);
    }

    void __fastcall GameSelectableButton::~GameSelectableButton(#1356 *this)
    {
      *(_QWORD *)this = off_10046B068;
      *((_DWORD *)this + 62) = -831624408;
      *((_DWORD *)this + 63) = -831624408;
      *((_DWORD *)this + 64) = -831624408;
      *((_QWORD *)this + 33) = 0;
      SelectableButton::~SelectableButton(this);
    }

    void __fastcall GameSelectableButton::~GameSelectableButton(#1356 *this)
    {
      *(_QWORD *)this = off_10046B068;
      *((_DWORD *)this + 62) = -831624408;
      *((_DWORD *)this + 63) = -831624408;
      *((_DWORD *)this + 64) = -831624408;
      *((_QWORD *)this + 33) = 0;
      SelectableButton::~SelectableButton(this);
      operator delete(this);
    }

    __int64 __fastcall GameSelectableButton::buttonPressed(#1356 *this)
    {
      __int64 v2; // x1
      __int64 result; // x0
    
      v2 = *((_QWORD *)this + 33);
      if ( v2 )
        SoundManager::playSound(SoundManager::sm_pInstance, v2, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
      SelectableButton::buttonPressed(this);
      result = CustomButton::getButtonListener(this);
      if ( result )
        return CustomButton::buttonPressed(this);
      return result;
    }

    __int64 __fastcall GameSelectableButton::updateMovieClip(#1356 *this)
    {
      SelectableButton::updateMovieClip(this);
      return GameSelectableButton::resetScaleValues(this);
    }

    void __fastcall GameSelectableButton::resetScaleValues(#1356 *this)
    {
      __int64 v2; // x20
      __int64 i; // x23
      __int64 v4; // x22
      String v5; // [xsp+8h] [xbp-48h] BYREF
    
      v2 = *((_QWORD *)this + 12);
      if ( v2 && (int)Sprite::getNumChildren(*((_QWORD *)this + 12)) >= 1 )
      {
        for ( i = 0; i < (int)Sprite::getNumChildren(v2); ++i )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * i);
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 128LL))(v4) )
          {
            MovieClip::getNameOfChild(&v5, v2, v4);
            if ( (String::startsWith(&v5, "TID_") & 1) != 0
              || (unsigned int)String::equals(&v5, CustomButton::DEFAULT_TEXT_INSTANCE_NAME) )
            {
              *((float *)this + 63) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
              *((float *)this + 64) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4);
              String::~String();
              return;
            }
            String::~String();
          }
        }
      }
    }

    void __fastcall GameSelectableButton::setText(#1356 *this, const char *a2, const String *a3)
    {
      #1271 *TextFieldByName; // x0
      const char *v6; // x1
      const String *v7; // x1
      String v8; // [xsp+8h] [xbp-28h] BYREF
    
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(*((_QWORD *)this + 12), a2);
      if ( TextFieldByName )
      {
        TextField::setText(TextFieldByName, a3);
      }
      else
      {
        String::format((String *)"GameSelectableButton::setText Unable to find TextField '%s'", v6, a2);
        Debugger::warning((__siginfo *)&v8, v7);
        String::~String();
      }
    }

}; // end class GameSelectableButton
