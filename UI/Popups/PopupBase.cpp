class PopupBase
{
public:

    float __fastcall PopupBase::getWidth(MatchmakeFailedMessage *this)
    {
      return *((float *)this + 50);
    }

    float __fastcall PopupBase::getHeight(MatchmakeFailedMessage *this)
    {
      return *((float *)this + 51);
    }

    __int64 __fastcall PopupBase::keyDown(MatchmakeFailedMessage *this)
    {
      return 0;
    }

    void PopupBase::removeGameObjectReferences()
    {
      ;
    }

    __int64 PopupBase::canShowAchievemntCompleted()
    {
      return 1;
    }

    __int64 __fastcall PopupBase::hideGuiWhenTopMost(MatchmakeFailedMessage *this)
    {
      return 0;
    }

    __int64 __fastcall PopupBase::PopupBase(__int64 a1, const String *a2, const String *a3)
    {
      DropGUIContainer::DropGUIContainer((#1375 *)a1, a2, a3);
      *(_QWORD *)a1 = off_10046C250;
      *(_QWORD *)(a1 + 96) = &off_10046C428;
      *(_QWORD *)(a1 + 220) = 0;
      *(_BYTE *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      PopupBase::init((MatchmakeFailedMessage *)a1);
      return a1;
    }

    __int64 __fastcall PopupBase::init(MatchmakeFailedMessage *this)
    {
      __int64 result; // x0
      int v3; // w8
    
      result = (*(__int64 (__fastcall **)(MatchmakeFailedMessage *))(*(_QWORD *)this + 376LL))(this);
      v3 = *((_DWORD *)this + 56);
      if ( (_DWORD)result )
      {
        if ( v3 != 1 )
          *(_QWORD *)((char *)this + 220) = &_mh_execute_header;
        *((_DWORD *)this + 55) = -1082130432;
      }
      else if ( v3 != 2 )
      {
        *(_QWORD *)((char *)this + 220) = 0x200000000LL;
        return (*(__int64 (__fastcall **)(MatchmakeFailedMessage *, float))(*(_QWORD *)this + 40LL))(this, 1.0);
      }
      return result;
    }

    __int64 __fastcall PopupBase::PopupBase(__int64 a1)
    {
      DropGUIContainer::DropGUIContainer((#1375 *)a1);
      *(_QWORD *)a1 = off_10046C250;
      *(_QWORD *)(a1 + 96) = &off_10046C428;
      *(_QWORD *)(a1 + 220) = 0;
      *(_BYTE *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      PopupBase::init((MatchmakeFailedMessage *)a1);
      return a1;
    }

    MiniTimer *__fastcall PopupBase::setState(MiniTimer *result, int a2)
    {
      __int64 Instance; // x0
    
      if ( *((_DWORD *)result + 56) != a2 )
      {
        *((_DWORD *)result + 55) = 0;
        *((_DWORD *)result + 56) = a2;
        if ( a2 == 4 )
        {
          Instance = GUI::getInstance(result);
          return GUI::popupClosed(Instance);
        }
        else if ( a2 == 2 )
        {
          return (MiniTimer *)(*(__int64 (__fastcall **)(MiniTimer *, float))(*(_QWORD *)result + 40LL))(result, 1.0);
        }
      }
      return result;
    }

    __int64 __fastcall PopupBase::touchPressed(__int64 a1, __int64 a2)
    {
      Sprite::touchPressed(a1, a2);
      return 1;
    }

    __int64 __fastcall PopupBase::touchReleased(__int64 a1, __int64 a2)
    {
      Sprite::touchReleased(a1, a2);
      return 1;
    }

    void __fastcall PopupBase::~PopupBase(MatchmakeFailedMessage *this, __int64 a2, const char *a3)
    {
      *(_QWORD *)this = off_10046C250;
      *((_QWORD *)this + 12) = &off_10046C428;
      Debugger::doAssert((Debugger *)(*((_BYTE *)this + 216) == 0), (bool)"", a3);
      *(_QWORD *)((char *)this + 220) = 0;
      *((_BYTE *)this + 216) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_QWORD *)this + 26) = 0;
      *((_QWORD *)this + 24) = 0;
      DropGUIContainer::~DropGUIContainer(this);
    }

    // attributes: thunk
    void __fastcall PopupBase::~PopupBase(MatchmakeFailedMessage *this, __int64 a2, const char *a3)
    {
      __ZN9PopupBaseD2Ev(this, a2, a3);
    }

    void __fastcall PopupBase::~PopupBase(MatchmakeFailedMessage *this, __int64 a2, const char *a3)
    {
      PopupBase::~PopupBase(this, a2, a3);
      operator delete(this);
    }

    MiniTimer *__fastcall PopupBase::update(MiniTimer *this, long double a2)
    {
      MiniTimer *v2; // x19
      float v3; // s1
      float v4; // s0
      int v5; // w8
      float v6; // s0
      float v7; // s9
      __int64 (__fastcall *v8)(MiniTimer *, long double); // x1
    
      v2 = this;
      v3 = *((float *)this + 55);
      v4 = v3 + *(float *)&a2;
      if ( v3 < 0.0 )
        v4 = 0.0;
      *((float *)this + 55) = v4;
      v5 = *((_DWORD *)this + 56);
      if ( v5 == 3 )
      {
        if ( v4 >= 0.22 )
          return PopupBase::setState(this, 4);
      }
      else if ( v5 == 1 )
      {
        if ( v4 >= 0.24 )
        {
          *(_QWORD *)((char *)this + 220) = 0x200000000LL;
          v8 = *(__int64 (__fastcall **)(MiniTimer *, long double))(*(_QWORD *)this + 40LL);
          LODWORD(a2) = 1.0;
        }
        else
        {
          v6 = v4 / 0.24;
          v7 = (float)(1.0 - v6) * 0.025;
          *(float *)&a2 = sinf((float)(v6 * 3.1416) + (float)(v6 * 3.1416));
          v8 = *(__int64 (__fastcall **)(MiniTimer *, long double))(*(_QWORD *)v2 + 40LL);
          *(float *)&a2 = (float)(*(float *)&a2 * v7) + 1.0;
        }
        return (MiniTimer *)v8(v2, a2);
      }
      return this;
    }

    MiniTimer *__fastcall PopupBase::fadeOut(MatchmakeFailedMessage *this)
    {
      __int64 v2; // x1
      MiniTimer *result; // x0
    
      *((_BYTE *)this + 64) = 0;
      v2 = *((_QWORD *)this + 26);
      if ( v2 )
        SoundManager::playSound(SoundManager::sm_pInstance, v2, 0xFFFFFFFFLL, 1.0, COERCE_LONG_DOUBLE((unsigned __int128)0));
      result = (MiniTimer *)(*(__int64 (__fastcall **)(MatchmakeFailedMessage *))(*(_QWORD *)this + 384LL))(this);
      if ( !(_DWORD)result )
        return PopupBase::setState(this, 4);
      if ( *((_DWORD *)this + 56) != 3 )
        *(_QWORD *)((char *)this + 220) = 0x300000000LL;
      return result;
    }

    bool __fastcall PopupBase::isFadingOut(MatchmakeFailedMessage *this)
    {
      return *((_DWORD *)this + 56) == 3;
    }

    bool __fastcall PopupBase::hasFadedOut(MatchmakeFailedMessage *this)
    {
      return *((_DWORD *)this + 56) == 4;
    }

    __int64 __fastcall PopupBase::isFadeInEnabled(MatchmakeFailedMessage *this)
    {
      return 1;
    }

    __int64 __fastcall PopupBase::isFadeOutEnabled(MatchmakeFailedMessage *this)
    {
      return 0;
    }

    __int64 __fastcall PopupBase::isBackButtonVisible(MatchmakeFailedMessage *this)
    {
      return 0;
    }

    void __fastcall PopupBase::backButtonPressed(MatchmakeFailedMessage *this)
    {
      ;
    }

    __int64 __fastcall PopupBase::allowClosingFromModalTapping(MatchmakeFailedMessage *this)
    {
      return 1;
    }

    __int64 __fastcall PopupBase::modalClose(MatchmakeFailedMessage *this)
    {
      return (*(__int64 (__fastcall **)(MatchmakeFailedMessage *))(*(_QWORD *)this + 352LL))(this);
    }

    __int64 __fastcall PopupBase::setCloseSound(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 208) = a2;
      return result;
    }

    __int64 __fastcall PopupBase::useModal(MatchmakeFailedMessage *this)
    {
      return 1;
    }

}; // end class PopupBase
