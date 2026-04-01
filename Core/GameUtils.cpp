class GameUtils
{
public:

    GameButton *__fastcall GameUtils::createDebugButton(__int64 a1)
    {
      GameButton *v2; // x19
      void (__fastcall *v3)(GameButton *, __int64, __int64); // x21
      const char *v4; // x2
      __int64 MovieClip; // x0
    
      v2 = (GameButton *)operator new(264);
      GameButton::GameButton(v2);
      v3 = *(void (__fastcall **)(GameButton *, __int64, __int64))(*(_QWORD *)v2 + 280LL);
      MovieClip = ResourceManager::getMovieClip((ResourceManager *)"sc/debug.sc", "debug_menu_item", v4);
      v3(v2, MovieClip, 1);
      *(_BYTE *)(MovieClip::getTextFieldByName(*((_QWORD *)v2 + 12), CustomButton::DEFAULT_TEXT_INSTANCE_NAME) + 74) = 1;
      (*(void (__fastcall **)(GameButton *, __int64, _QWORD))(*(_QWORD *)v2 + 352LL))(v2, a1, 0);
      return v2;
    }

    float __fastcall GameUtils::localToLocal(float a1, float a2, __int64 a3, __int64 a4)
    {
      long double v5; // q1
      int v7; // [xsp+0h] [xbp-20h] BYREF
      _DWORD v8[3]; // [xsp+4h] [xbp-1Ch] BYREF
    
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      DisplayObject::localToGlobal(a1, a2);
      LODWORD(v5) = v8[1];
      DisplayObject::globalToLocal(a4, v8, &v7, *(float *)&v8[2], v5);
      return *(float *)v8;
    }

}; // end class GameUtils
