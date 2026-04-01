class GameButton
{
public:

    void __fastcall GameButton::GameButton(GameButton *this)
    {
      CustomButton::CustomButton(this);
      *(_QWORD *)this = off_10046BD08;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_DWORD *)this + 15) = -2;
      *((_QWORD *)this + 30) = LogicDataTables::getDefaultButtonClickSound();
    }

    __int64 __fastcall GameButton::setClickSound(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 240) = a2;
      return result;
    }

    // attributes: thunk
    void __fastcall GameButton::GameButton(GameButton *this)
    {
      __ZN10GameButtonC2Ev(this);
    }

    void __fastcall GameButton::~GameButton(DeviceLinkCodeReceivedScreen *this)
    {
      *(_QWORD *)this = off_10046BD08;
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 30) = 0;
      CustomButton::~CustomButton(this);
    }

    void __fastcall GameButton::~GameButton(CustomButton *a1)
    {
      *(_QWORD *)a1 = off_10046BD08;
      *((_QWORD *)a1 + 31) = 0;
      *((_QWORD *)a1 + 32) = 0;
      *((_QWORD *)a1 + 30) = 0;
      CustomButton::~CustomButton(a1);
    }

    void __fastcall GameButton::~GameButton(CustomButton *a1)
    {
      *(_QWORD *)a1 = off_10046BD08;
      *((_QWORD *)a1 + 31) = 0;
      *((_QWORD *)a1 + 32) = 0;
      *((_QWORD *)a1 + 30) = 0;
      CustomButton::~CustomButton(a1);
      operator delete(a1);
    }

    __int64 __fastcall GameButton::buttonPressed(CustomButton *a1)
    {
      __int64 v2; // x1
    
      v2 = *((_QWORD *)a1 + 30);
      if ( v2 )
        SoundManager::playSound(SoundManager::sm_pInstance, v2, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
      return CustomButton::buttonPressed(a1);
    }

    __int64 __fastcall GameButton::touchIn(CustomButton *a1, int a2)
    {
      __int64 result; // x0
    
      result = CustomButton::touchIn(a1, a2);
      if ( *((_BYTE *)a1 + 260) )
      {
        result = CustomButton::getButtonState(a1);
        if ( (_DWORD)result != 1 )
          return (*(__int64 (__fastcall **)(CustomButton *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
      }
      return result;
    }

    const char *__fastcall GameButton::getStateStartFrameLabel(__int64 a1, int a2)
    {
      if ( *(_BYTE *)(a1 + 263) )
        return "";
      if ( a2 || !*(_BYTE *)(a1 + 262) )
        return (const char *)CustomButton::getStateStartFrameLabel((#1251 *)a1, a2);
      return "IdleNotice";
    }

    const char *__fastcall GameButton::getStateEndFrameLabel(__int64 a1, int a2)
    {
      if ( *(_BYTE *)(a1 + 263) )
        return "";
      if ( a2 || !*(_BYTE *)(a1 + 262) )
        return (const char *)CustomButton::getStateEndFrameLabel((#1251 *)a1, a2);
      return "IdleNoticeEnd";
    }

    __int64 __fastcall GameButton::updateTimelineClip(__int64 a1, #1257 *a2, int a3)
    {
      __int64 result; // x0
    
      *(_BYTE *)(a1 + 234) = 0;
      result = CustomButton::updateTimelineClip((#1251 *)a1, a2, a3);
      if ( !a3 )
      {
        if ( *(_BYTE *)(a1 + 262) )
          *(_BYTE *)(a1 + 234) = 1;
      }
      return result;
    }

    __int64 __fastcall GameButton::setIdleNotice(__int64 result, int a2)
    {
      char v2; // w20
      __int64 v3; // x19
      __int64 ButtonState; // x1
    
      v2 = a2;
      v3 = result;
      if ( *(unsigned __int8 *)(result + 262) != a2 )
      {
        ButtonState = CustomButton::getButtonState((#1251 *)result);
        *(_BYTE *)(v3 + 262) = v2;
        *(_DWORD *)(v3 + 112) = -1;
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 304LL))(v3, ButtonState);
      }
      return result;
    }

    // attributes: thunk
    __int64 __fastcall GameButton::setState(GameButton *this, int a2)
    {
      return CustomButton::setState(this, a2);
    }

    __int64 __fastcall GameButton::setText(__int64 a1, __int64 a2, int a3)
    {
      #1395 *TextFieldByName; // x19
      __int64 result; // x0
      #1271 *v7; // x1
    
      TextFieldByName = (#1395 *)MovieClip::getTextFieldByName(
                                   *(_QWORD *)(a1 + 96),
                                   CustomButton::DEFAULT_TEXT_INSTANCE_NAME);
      result = MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, a2, 0);
      if ( a3 )
        return MovieClipHelper::setTextFieldVerticallyCentered(TextFieldByName, v7);
      return result;
    }

    void __fastcall GameButton::setText(__int64 a1, __int64 a2, const String *a3)
    {
      #1271 *TextFieldByName; // x0
      const char *v6; // x1
      const String *v7; // x1
      char v8; // [xsp+8h] [xbp-28h] BYREF
    
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 96), a2);
      if ( TextFieldByName )
      {
        TextField::setText(TextFieldByName, a3);
      }
      else
      {
        String::format((String *)"GameButton::setText Unable to find TextField '%s'", v6, a2);
        Debugger::warning((__siginfo *)&v8, v7);
        String::~String();
      }
    }

    void GameButton::sendAnalyticsEvent()
    {
      ;
    }

    void __fastcall GameButton::resetScaleValues(__int64 a1)
    {
      __int64 v2; // x20
      __int64 i; // x23
      __int64 v4; // x22
      String v5; // [xsp+8h] [xbp-48h] BYREF
    
      v2 = *(_QWORD *)(a1 + 96);
      if ( v2 && (int)Sprite::getNumChildren(*(_QWORD *)(a1 + 96)) >= 1 )
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
              *(float *)(a1 + 248) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
              *(float *)(a1 + 252) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4);
              String::~String();
              return;
            }
            String::~String();
          }
        }
      }
    }

    void __fastcall GameButton::centerAmountTextField(__int64 a1, TextField *a2, __int64 a3, long double a4)
    {
      #1249 *ChildByName; // x20
      float v7; // s8
      long double TextWidth; // q0
      float v9; // s8
      long double v10; // q0
      float v11; // s8
      long double v12; // q0
      Rect v13; // [xsp+0h] [xbp-50h] BYREF
      float v14; // [xsp+8h] [xbp-48h]
      Rect v15; // [xsp+10h] [xbp-40h] BYREF
      float v16; // [xsp+18h] [xbp-38h]
    
      ChildByName = (#1249 *)MovieClip::getChildByName(*(_QWORD *)(a1 + 96), a3, a4);
      if ( ChildByName )
      {
        Rect::Rect(&v15);
        DisplayObject::getBounds(ChildByName, *(_QWORD *)(a1 + 96), &v15);
        Rect::Rect(&v13);
        DisplayObject::getBounds(a2, *(_QWORD *)(a1 + 96), &v13);
        v7 = v14;
        TextWidth = TextField::getTextWidth(a2);
        v9 = (float)((float)((float)(v16 - (float)(v7 - *(float *)&TextWidth)) * -0.5) + 0.0)
           - (float)(v7 - *(float *)&TextWidth);
        v10 = DisplayObject::getX(ChildByName);
        v11 = floorf(v9);
        DisplayObject::setX(ChildByName, floorf(v11 + *(float *)&v10));
        v12 = DisplayObject::getX(a2);
        DisplayObject::setX(a2, floorf(v11 + *(float *)&v12));
        Rect::~Rect(&v13);
        Rect::~Rect(&v15);
      }
    }

    void __fastcall GameButton::setDiamondPriceText(__int64 a1, __int64 a2, TextField *a3, __int64 a4)
    {
      TextField *TextFieldByName; // x0
      int v8; // w3
      TextField *v9; // x22
      int v10; // w2
      long double v11; // q0
    
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(*(_QWORD *)(a1 + 96), a2);
      v9 = TextFieldByName;
      v10 = *(_DWORD *)(a1 + 256);
      if ( !v10 )
      {
        v10 = *((_DWORD *)TextFieldByName + 16);
        *(_DWORD *)(a1 + 256) = v10;
      }
      GameButton::setDiamondPriceText(TextFieldByName, a3, v10, v8);
      if ( a4 )
        GameButton::centerAmountTextField(a1, v9, a4, v11);
    }

    __int64 __fastcall GameButton::setDiamondPriceText(TextField *a1, int a2, int a3)
    {
      tween::Bounce *PlayerAvatar; // x0
      const char *v7; // x1
      int v8; // w8
      const String *String; // x1
    
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      if ( LogicClientAvatar::hasEnoughDiamonds(PlayerAvatar, a2, 0) )
        v8 = a3;
      else
        v8 = -65536;
      *((_DWORD *)a1 + 16) = v8;
      if ( a2 )
        return TextField::setNumberText(a1, a2, 1);
      String = (const String *)StringTable::getString((#1308 *)"TID_DIAMOND_BUTTON_FREE", v7);
      return TextField::setText(a1, String);
    }

    __int64 __fastcall GameButton::wobble(DeviceLinkCodeReceivedScreen *this)
    {
      (*(void (__fastcall **)(DeviceLinkCodeReceivedScreen *, _QWORD))(*(_QWORD *)this + 304LL))(this, 0);
      return (*(__int64 (__fastcall **)(DeviceLinkCodeReceivedScreen *, __int64))(*(_QWORD *)this + 304LL))(this, 2);
    }

}; // end class GameButton
