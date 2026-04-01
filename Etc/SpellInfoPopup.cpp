class SpellInfoPopup
{
public:

    void __fastcall SpellInfoPopup::SpellInfoPopup(SpellInfoPopup *this, const TextField *a2, char a3, char a4)
    {
      LogicDataTables *isShowNewIcon; // x0
      LogicSpellPageOpenedCommand *v9; // x23
      __int64 SpellData; // x0
      vm_address_t *v11; // x0
      GameMode *Instance; // x0
      const LogicSoundData *ScrollCloseSound; // x0
    
      PopupBase::PopupBase(this);
      *(_QWORD *)this = off_100462AC0;
      *((_QWORD *)this + 12) = &off_100462C98;
      *((_QWORD *)this + 31) = 0;
      *((_BYTE *)this + 282) = 0;
      *((_WORD *)this + 140) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 30) = 0;
      if ( (int)LogicSpell::getShowNewCount(a2) > 0
        || *((_BYTE *)a2 + 32)
        || (isShowNewIcon = (LogicDataTables *)LogicSpell::isShowNewIcon(a2), (_DWORD)isShowNewIcon) )
      {
        v9 = (LogicSpellPageOpenedCommand *)operator new(48);
        LogicSpellPageOpenedCommand::LogicSpellPageOpenedCommand(v9);
        SpellData = LogicSpell::getSpellData(a2);
        v11 = (vm_address_t *)LogicSpellPageOpenedCommand::addSpell(v9, SpellData);
        Instance = (GameMode *)GameMode::getInstance(v11);
        isShowNewIcon = (LogicDataTables *)GameMode::addCommand(Instance, v9, 1);
      }
      *((_QWORD *)this + 34) = a2;
      *((_BYTE *)this + 280) = a3;
      *((_BYTE *)this + 281) = a4;
      ScrollCloseSound = (const LogicSoundData *)LogicDataTables::getScrollCloseSound(isShowNewIcon);
      PopupBase::setCloseSound(this, ScrollCloseSound);
      SpellInfoPopup::createSpellList(this);
      PopupBase::init(this);
    }

    void __fastcall SpellInfoPopup::createSpellList(ScrollArea *this)
    {
      int *Instance; // x0
      float v3; // s9
      float v4; // s8
      PageGUI *v5; // x20
      int PageCount; // w21
      MessageManager *v7; // x20
      int v8; // w0
      __int64 v9; // x0
      char v10; // w1
      const char *v11; // x1
      __int64 PageItemAt; // x20
      __int64 v13; // x20
      long double Width; // q0
      long double v15; // q0
      long double Height; // q0
      long double v17; // q0
      Rect v18[2]; // [xsp+40h] [xbp-50h] BYREF
    
      Instance = (int *)Stage::getInstance(this);
      v3 = (float)Instance[107];
      v4 = (float)*(int *)(Stage::getInstance((Stage *)Instance) + 432LL);
      v5 = (PageGUI *)operator new(152);
      PageGUI::PageGUI(v5, 0, 0, (int)v3, (int)v4);
      *((_QWORD *)this + 29) = v5;
      PageGUI::setWrapAroundEnabled((__int64)v5, 0);
      DisplayObject::setPixelSnappedXY(*((DisplayObject **)this + 29), v3 * -0.5, v4 * -0.5);
      (*(void (__fastcall **)(ScrollArea *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 29));
      DisplayObject::setPixelSnappedXY(this, v3 * 0.5, v4 * 0.5);
      SpellInfoPopup::addSpell(this, *((const TextField **)this + 34), *((_BYTE *)this + 280), *((_BYTE *)this + 281));
      PageCount = PageGUI::getPageCount(*((MessageManager **)this + 29));
      v7 = (MessageManager *)*((_QWORD *)this + 29);
      v8 = PageGUI::getPageCount(v7);
      if ( PageCount < 2 )
      {
        if ( v8 != 1 )
          goto LABEL_6;
        PageGUI::setCurrentPage(*((#1249 ***)this + 29), 0);
        v9 = *((_QWORD *)this + 29);
        v10 = 0;
      }
      else
      {
        PageGUI::setCurrentPage((#1249 **)v7, v8 - 1);
        v9 = *((_QWORD *)this + 29);
        v10 = 1;
      }
      PageGUI::setDragEnabled(v9, v10);
    LABEL_6:
      if ( (int)PageGUI::getPageCount(*((MessageManager **)this + 29)) < 1 )
        Debugger::error((__siginfo *)"failed to create spell info cards", v11);
      PageItemAt = PageGUI::getPageItemAt(*((MessageManager **)this + 29), 0);
      Rect::Rect(v18);
      DisplayObject::getBounds(PageItemAt, 0, v18);
      v13 = operator new(16);
      Rect::Rect((Rect *)v13);
      Width = Rect::getWidth(v18);
      *(float *)v13 = (float)(v3 - *(float *)&Width) * 0.5;
      v15 = Rect::getWidth(v18);
      *(float *)(v13 + 8) = (float)(v3 + *(float *)&v15) * 0.5;
      Height = Rect::getHeight(v18);
      *(float *)(v13 + 4) = (float)(v4 - *(float *)&Height) * 0.5;
      v17 = Rect::getHeight(v18);
      *(float *)(v13 + 12) = (float)(v4 + *(float *)&v17) * 0.5;
      Sprite::setHitArea(*((OutOfSyncMessage **)this + 29), (#1261 *)v13);
      Rect::~Rect(v18);
    }

    // attributes: thunk
    void __fastcall SpellInfoPopup::SpellInfoPopup(SpellInfoPopup *this, const TextField *a2, char a3, char a4)
    {
      __ZN14SpellInfoPopupC2EPK10LogicSpellbb(this, a2, a3, a4);
    }

    void __fastcall SpellInfoPopup::~SpellInfoPopup(ScrollArea *this)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
      _QWORD *v4; // x21
      __int64 v5; // x8
      __int64 v6; // x22
      __int64 v7; // x0
      __int64 v8; // x8
    
      *(_QWORD *)this = off_100462AC0;
      *((_QWORD *)this + 12) = &off_100462C98;
      v3 = (_QWORD *)((char *)this + 232);
      v2 = *((_QWORD *)this + 29);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 29) = 0;
      v4 = (_QWORD *)((char *)this + 248);
      v5 = *((int *)this + 65);
      if ( (int)v5 >= 1 )
      {
        v6 = v5 - 1;
        do
        {
          v7 = *(_QWORD *)(*v4 + 8 * v6);
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
          v8 = v6-- + 1;
        }
        while ( v8 > 1 );
      }
      *v3 = 0;
      v3[1] = 0;
      *(_QWORD *)((char *)this + 275) = 0;
      *(_QWORD *)((char *)this + 260) = 0;
      *(_QWORD *)((char *)this + 268) = 0;
      if ( *v4 )
        operator delete[](*v4);
      *v4 = 0;
      *((_QWORD *)this + 32) = 0;
      PopupBase::~PopupBase(this);
    }

    // attributes: thunk
    void __fastcall SpellInfoPopup::~SpellInfoPopup(ScrollArea *this)
    {
      __ZN14SpellInfoPopupD2Ev(this);
    }

    void __fastcall SpellInfoPopup::~SpellInfoPopup(ScrollArea *this)
    {
      SpellInfoPopup::~SpellInfoPopup(this);
      operator delete(this);
    }

    __int64 __fastcall SpellInfoPopup::addSpell(ScrollArea *this, const TextField *a2, const char *a3, bool a4)
    {
      bool v5; // w21
      Stage *v8; // x0
      int v9; // s8
      bool v10; // w24
      LogicFuseSpellsCommand *v11; // x23
      __int64 result; // x0
    
      v5 = (char)a3;
      Debugger::doAssert((Debugger *)(*((_QWORD *)this + 29) != 0), (bool)"", a3);
      v9 = *(_DWORD *)(Stage::getInstance(v8) + 432LL);
      if ( LogicSpell::isLevelMax(a2) || (v10 = v5, (LogicSpell::canUpgrade(a2) & 1) == 0) )
        v10 = 0;
      v11 = (LogicFuseSpellsCommand *)operator new(336);
      SpellInfoPopup::InfoCard::InfoCard(v11, this, a2, v5, v10, a4, -1);
      DisplayObject::setY(v11, (float)v9 * 0.5);
      PageGUI::addPage(*((MessageManager **)this + 29), v11, 0xFFFFFFFFLL);
      result = PageGUI::getPageCount(*((MessageManager **)this + 29));
      if ( (_DWORD)result == 1 )
        *((_QWORD *)this + 30) = v11;
      return result;
    }

    __int64 __fastcall SpellInfoPopup::getUpgradeButton(ScrollArea *this)
    {
      return *(_QWORD *)(*((_QWORD *)this + 30) + 248LL);
    }

    __int64 __fastcall SpellInfoPopup::getPopupType(ScrollArea *this)
    {
      return 0;
    }

    // attributes: thunk
    __int64 __fastcall SpellInfoPopup::touchMoved(__int64 a1, __int64 a2)
    {
      return Sprite::touchMoved(a1, a2);
    }

    // attributes: thunk
    __int64 __fastcall SpellInfoPopup::touchReleased(__int64 a1, __int64 a2)
    {
      return PopupBase::touchReleased(a1, a2);
    }

    // attributes: thunk
    __int64 __fastcall SpellInfoPopup::touchCancelled(ScrollArea *this, int a2)
    {
      return Sprite::touchCancelled(this, a2);
    }

    // attributes: thunk
    __int64 __fastcall SpellInfoPopup::buttonClicked(ScrollArea *this, #1251 *a2)
    {
      return GUIContainer::buttonClicked(this, a2);
    }

    void __usercall SpellInfoPopup::getTimeText(ScrollArea *this@<X0>, int a2@<W1>, bool a3@<W2>, __int64 *a4@<X8>)
    {
      const char *v5; // x1
      String *String; // x0
      String *v7; // x0
      String v8; // [xsp+0h] [xbp-40h] BYREF
      String v9; // [xsp+18h] [xbp-28h] BYREF
    
      if ( (_DWORD)this || ((a2 ^ 1) & 1) != 0 )
      {
        if ( (int)this % 1000 )
        {
          SpellInfoPopup::getDecimalValue((__int64 *)&v9.m_length, (ScrollArea *)(unsigned int)((int)this / 100), a2);
          String = (String *)StringTable::getString((#1308 *)"TID_TIME_SECS", v5);
          operator+(a4, &v9, String);
          v7 = &v9;
        }
        else
        {
          TimeUtil::getTimeStringWithSeconds((TimeUtil *)(unsigned int)((int)this / 1000), 0, a3);
          String::String((String *)a4, &v8);
          v7 = &v8;
        }
        String::~String(v7);
      }
      else
      {
        String::String((String *)a4, "");
      }
    }

    void __usercall SpellInfoPopup::getDecimalValue(
            __int64 *__return_ptr a1@<X8>,
            ScrollArea *this@<X0>,
            const char *a3@<X1>)
    {
      String *v4; // x22
      String *v5; // x20
      __int64 v6; // x21
      int v7; // w1
      int v8; // w1
      String *v9; // x0
      int v10; // w0
      const char *v11; // x1
      String *v12; // x21
      String *v13; // x20
      __int64 String; // x22
      int v15; // w1
      int v16; // w1
      String v17; // [xsp+30h] [xbp-150h] BYREF
      String v18; // [xsp+48h] [xbp-138h] BYREF
      String v19; // [xsp+60h] [xbp-120h] BYREF
      String v20; // [xsp+78h] [xbp-108h] BYREF
      String v21; // [xsp+90h] [xbp-F0h] BYREF
      String v22; // [xsp+A8h] [xbp-D8h] BYREF
      String v23; // [xsp+C0h] [xbp-C0h] BYREF
      String v24; // [xsp+D8h] [xbp-A8h] BYREF
      String v25; // [xsp+F0h] [xbp-90h] BYREF
      String v26; // [xsp+108h] [xbp-78h] BYREF
      String v27; // [xsp+120h] [xbp-60h] BYREF
      _QWORD v28[3]; // [xsp+138h] [xbp-48h] BYREF
    
      if ( ((unsigned int)this & 0x80000000) != 0 )
      {
        v10 = LogicMath::abs(this, (int)a3);
        v12 = (String *)(unsigned int)(v10 / 10);
        v13 = (String *)(unsigned int)(v10 % 10);
        if ( (_DWORD)v13 )
        {
          String = StringTable::getString((#1308 *)"TID_DECIMAL_FORMAT", v11);
          String::String(&v25, "<FULL>");
          String::valueOf(&v24, v12, v15);
          String::replace(&v26, String, &v25, &v24);
          String::String(&v23, "<DECIMAL>");
          String::valueOf(&v22, v13, v16);
          String::replace(&v27, &v26, &v23, &v22);
          operator+(a1, "-", &v27);
          String::~String(&v27);
          String::~String(&v22);
          String::~String(&v23);
          String::~String(&v26);
          String::~String(&v24);
          v9 = &v25;
        }
        else
        {
          String::valueOf(v28, (String *)(unsigned int)(v10 / 10), (int)v11);
          operator+(a1, "-", v28);
          v9 = (String *)v28;
        }
      }
      else
      {
        v4 = (String *)(unsigned int)((int)this / 10);
        v5 = (String *)(unsigned int)((int)this % 10);
        if ( !(_DWORD)v5 )
        {
          String::valueOf(a1, (String *)(unsigned int)((int)this / 10), (int)a3);
          return;
        }
        v6 = StringTable::getString((#1308 *)"TID_DECIMAL_FORMAT", a3);
        String::String(&v20, "<FULL>");
        String::valueOf(&v19, v4, v7);
        String::replace(&v21, v6, &v20, &v19);
        String::String(&v18, "<DECIMAL>");
        String::valueOf(&v17, v5, v8);
        String::replace(a1, &v21, &v18, &v17);
        String::~String(&v17);
        String::~String(&v18);
        String::~String(&v21);
        String::~String(&v19);
        v9 = &v20;
      }
      String::~String(v9);
    }

    void __usercall SpellInfoPopup::getDistanceText(ScrollArea *this@<X0>, const char *a2@<X1>, __int64 *a3@<X8>)
    {
      if ( (_DWORD)this || (((unsigned int)a2 ^ 1) & 1) != 0 )
      {
        if ( (int)this % 10 )
          SpellInfoPopup::getDecimalValue(a3, this, a2);
        else
          String::valueOf(a3, (String *)(unsigned int)((int)this / 10), (int)a2);
      }
      else
      {
        String::String((String *)a3, "");
      }
    }

    __int64 __fastcall SpellInfoPopup::update(ScrollArea *this, long double a2)
    {
      __int64 result; // x0
    
      PopupBase::update(this, *(float *)&a2);
      result = *((_QWORD *)this + 29);
      if ( result )
        return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 272LL))(result, a2);
      return result;
    }

    __int64 __fastcall SpellInfoPopup::allowClosingFromModalTapping(ScrollArea *this)
    {
      return 1;
    }

    __int64 __fastcall SpellInfoPopup::useModal(ScrollArea *this)
    {
      return 1;
    }

    String *__usercall SpellInfoPopup::getIconExportName@<X0>(ScrollArea *this@<X0>, String *a2@<X8>)
    {
      String *result; // x0
    
      switch ( (int)this )
      {
        case 1:
          result = String::String(a2, "icons_stats_dmg");
          break;
        case 2:
          result = String::String(a2, "icons_stats_deploy_time");
          break;
        case 3:
          result = String::String(a2, "icons_stats_range");
          break;
        case 5:
          result = String::String(a2, "icons_stats_dmg_dps");
          break;
        case 6:
        case 19:
          result = String::String(a2, "icons_stats_troop_count");
          break;
        case 8:
          result = String::String(a2, "icons_stats_dmg_area");
          break;
        case 9:
          result = String::String(a2, "icons_stats_hp");
          break;
        case 10:
          result = String::String(a2, "icons_stats_speed");
          break;
        case 12:
          result = String::String(a2, "icons_stats_troop");
          break;
        case 14:
          result = String::String(a2, "icons_stats_dmg_speed");
          break;
        case 15:
        case 17:
          result = String::String(a2, "icons_stats_target");
          break;
        case 16:
          result = String::String(a2, "icons_stats_radius");
          break;
        case 18:
        case 20:
          result = String::String(a2, "spell_stat_icon_cost");
          break;
        case 21:
          result = String::String(a2, "spell_stat_icon_target");
          break;
        default:
          result = String::String(a2, "illegal type");
          break;
      }
      return result;
    }

}; // end class SpellInfoPopup
