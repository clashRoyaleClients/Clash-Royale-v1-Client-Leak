class CreditsPopup
{
public:

    void __fastcall CreditsPopup::CreditsPopup(CreditsPopup *this)
    {
      TextField **v2; // x26
      __int64 TextFieldByName; // x0
      int v4; // w1
      __int64 Table; // x20
      __int64 i; // x21
      AreaEffectObject *v7; // x0
      String *Name; // x25
      Stage *v9; // x0
      __int64 Instance; // x0
      long double v11; // q0
      float v12; // s8
      DisplayObject *ChildByName; // x20
      #1271 *v14; // x20
      const char *v15; // x1
      void *String; // x21
      #1080 *v17; // x0
      __int64 v18; // x0
      const char *v19; // x1
      float v20; // s0
      bool v21; // w1
      String v22; // [xsp+20h] [xbp-180h] BYREF
      String v23; // [xsp+38h] [xbp-168h] BYREF
      String v24; // [xsp+50h] [xbp-150h] BYREF
      String v25; // [xsp+68h] [xbp-138h] BYREF
      String v26; // [xsp+80h] [xbp-120h] BYREF
      String v27; // [xsp+98h] [xbp-108h] BYREF
      String v28; // [xsp+B0h] [xbp-F0h] BYREF
      String v29; // [xsp+C8h] [xbp-D8h] BYREF
      String v30; // [xsp+E0h] [xbp-C0h] BYREF
      String v31; // [xsp+F8h] [xbp-A8h] BYREF
      String v32; // [xsp+110h] [xbp-90h] BYREF
      String v33; // [xsp+128h] [xbp-78h] BYREF
    
      String::String(&v33, "sc/ui.sc");
      String::String(&v32, "about_screen");
      PopupBase::PopupBase(this, &v33, &v32);
      String::~String(&v32);
      String::~String(&v33);
      *(_QWORD *)this = off_100464738;
      *((_QWORD *)this + 12) = &off_100464910;
      *((_QWORD *)this + 29) = 0;
      v2 = (TextField **)((char *)this + 232);
      *((_BYTE *)this + 248) = 0;
      *((_QWORD *)this + 30) = 0;
      TextFieldByName = MovieClip::getTextFieldByName(*((_QWORD *)this + 14), "Text");
      *((_QWORD *)this + 29) = TextFieldByName;
      *(_BYTE *)(TextFieldByName + 78) = 1;
      String::String(&v31, "");
      Table = LogicDataTables::getTable((LogicDataTables *)0x38, v4);
      for ( i = 0; (int)i < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table); i = (unsigned int)(i + 1) )
      {
        v7 = (AreaEffectObject *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, i);
        Name = (String *)LogicData::getName(v7);
        if ( (unsigned int)String::equals(Name, "_") )
        {
          operator+(&v31, "\n\n\n\n\n\n");
          String::operator=(&v31);
          String::~String(&v30);
        }
        else
        {
          operator+(&v31, "\n\n");
          String::operator=(&v31);
          String::~String(&v29);
          operator+((__int64 *)&v28.m_length, &v31, Name);
          String::operator=(&v31);
          String::~String(&v28);
        }
      }
      operator+(&v31, "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      String::operator=(&v31);
      String::~String(&v27);
      Instance = Stage::getInstance(v9);
      *(float *)&v11 = (float)*(int *)(Instance + 428);
      v12 = (float)*(int *)(Instance + 432);
      *((_DWORD *)this + 50) = LODWORD(v11);
      *((float *)this + 51) = v12;
      ChildByName = (DisplayObject *)MovieClip::getChildByName(*((_QWORD *)this + 14), "bg", v11);
      DisplayObject::setY(ChildByName, v12 * -0.5);
      DisplayObject::setHeight(ChildByName, v12);
      v14 = *v2;
      String = StringTable::getString((#1308 *)"TID_ABOUT", v15);
      String::String(&v24, "<names>");
      String::replace(&v25, String, &v24, &v31);
      v17 = (#1080 *)String::String(&v23, "<version>");
      v18 = GameMain::getInstance(v17);
      String::format((String *)"%d.%d.%d", v19, 2, 1306, *(unsigned int *)(v18 + 152));
      String::replace(&v26, &v25, &v23, &v22);
      TextField::setText(v14, &v26);
      String::~String(&v26);
      String::~String(&v22);
      String::~String(&v23);
      String::~String(&v25);
      String::~String(&v24);
      TextField::getTextHeight(*v2);
      *((float *)this + 60) = v12 * 0.5;
      *((float *)this + 61) = (float)((float)(v12 * 0.5) - v20) - v12;
      DisplayObject::setY(*((DisplayObject **)this + 29), v12 * 0.5);
      Application::setKeepScreenOn((Application *)1, v21);
      String::~String(&v31);
    }

    // attributes: thunk
    void __fastcall CreditsPopup::CreditsPopup(CreditsPopup *this)
    {
      __ZN12CreditsPopupC2Ev(this);
    }

    void __fastcall CreditsPopup::~CreditsPopup(DataIcon *this, bool a2)
    {
      *(_QWORD *)this = off_100464738;
      *((_QWORD *)this + 12) = &off_100464910;
      Application::setKeepScreenOn(0, a2);
      *((_BYTE *)this + 248) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 30) = 0;
      PopupBase::~PopupBase(this);
    }

    // attributes: thunk
    void __fastcall CreditsPopup::~CreditsPopup(DataIcon *this, bool a2)
    {
      __ZN12CreditsPopupD2Ev(this, a2);
    }

    void __fastcall CreditsPopup::~CreditsPopup(DataIcon *this, bool a2)
    {
      CreditsPopup::~CreditsPopup(this, a2);
      operator delete(this);
    }

    __int64 __fastcall CreditsPopup::update(DisplayObject **this, float a2)
    {
      __int64 result; // x0
      float v5; // s0
    
      result = PopupBase::update((MatchmakeFailedMessage *)this, a2);
      if ( !*((_BYTE *)this + 248) )
      {
        v5 = *((float *)this + 60) + (float)(a2 * -80.0);
        *((float *)this + 60) = v5;
        result = DisplayObject::setY(*(this + 29), v5);
        if ( *((float *)this + 60) < *((float *)this + 61) )
          return (*((__int64 (__fastcall **)(DisplayObject **))*this + 44))(this);
      }
      return result;
    }

    __int64 __fastcall CreditsPopup::buttonClicked(__int64 result, __int64 a2)
    {
      if ( *(_QWORD *)(result + 192) == a2 )
      {
        *(_BYTE *)(result + 248) = 1;
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 352LL))(result);
      }
      return result;
    }

    __int64 __fastcall CreditsPopup::touchReleased(__int64 a1, __int64 a2)
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
      return PopupBase::touchReleased(a1, a2);
    }

    __int64 CreditsPopup::getPopupType()
    {
      return 30;
    }

}; // end class CreditsPopup
