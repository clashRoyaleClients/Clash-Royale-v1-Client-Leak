class GUIContainer
{
public:

    void __fastcall GUIContainer::GUIContainer(GUIContainer *this)
    {
      Sprite::Sprite(this, 1);
      *(_QWORD *)this = off_100476068;
      *((_QWORD *)this + 12) = &off_1004761A8;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      String::String((__int64)this + 144);
      String::operator=((_DWORD *)this + 36, "");
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 16) = *((_QWORD *)this + 15);
      *((_BYTE *)this + 104) = 1;
      *((_BYTE *)this + 64) = 1;
    }

    String *__fastcall GUIContainer::setAnalyticsName(String *this, String *a2)
    {
      return String::operator=(this + 6, a2);
    }

    void __fastcall GUIContainer::GUIContainer(GUIContainer *this, const String *a2, String *a3)
    {
      __int64 MovieClip; // x0
    
      Sprite::Sprite(this, 1);
      *(_QWORD *)this = off_100476068;
      *((_QWORD *)this + 12) = &off_1004761A8;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
      String::String((__int64)this + 144);
      String::operator=((_DWORD *)this + 36, "");
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 16) = *((_QWORD *)this + 15);
      *((_BYTE *)this + 104) = 1;
      *((_BYTE *)this + 64) = 1;
      String::operator=((String *)this + 6, a3);
      MovieClip = ResourceManager::getMovieClip((__int64)a2, (__int64)a3);
      (*(void (__fastcall **)(GUIContainer *, __int64))(*(_QWORD *)this + 272LL))(this, MovieClip);
    }

    void __fastcall GUIContainer::~GUIContainer(LZMAReader *this)
    {
      __int64 v2; // x0
      void *v3; // x0
    
      *(_QWORD *)this = off_100476068;
      *((_QWORD *)this + 12) = &off_1004761A8;
      GUIContainer::destructButtons(this);
      v2 = *((_QWORD *)this + 14);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      String::operator=((_DWORD *)this + 36, "");
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 16) = *((_QWORD *)this + 15);
      *((_BYTE *)this + 104) = 1;
      String::~String((__int64)this + 144);
      v3 = (void *)*((_QWORD *)this + 15);
      if ( v3 )
        operator delete(v3);
      Sprite::~Sprite(this);
    }

    _QWORD *__fastcall GUIContainer::destructButtons(_QWORD *this)
    {
      _QWORD *v1; // x19
      __int64 v2; // x8
      unsigned __int64 v3; // x9
      __int64 i; // x20
    
      v1 = this;
      v2 = *(this + 15);
      v3 = (unsigned __int64)(*(this + 16) - v2) >> 3;
      if ( (int)v3 >= 1 )
      {
        for ( i = (int)v3 - 1LL; ; --i )
        {
          this = *(_QWORD **)(v2 + 8 * i);
          if ( this )
            this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*this + 8LL))(this);
          if ( i + 1 < 2 )
            break;
          v2 = v1[15];
        }
        v2 = v1[15];
      }
      v1[16] = v2;
      return this;
    }

    void __fastcall GUIContainer::~GUIContainer(LZMAReader *this)
    {
      GUIContainer::~GUIContainer(this);
    }

    void __fastcall GUIContainer::~GUIContainer(LZMAReader *this)
    {
      GUIContainer::~GUIContainer(this);
      operator delete(this);
    }

    __int64 __fastcall GUIContainer::setMovieClip(_QWORD *a1, __int64 a2)
    {
      __int64 v4; // x0
    
      v4 = a1[14];
      if ( v4 != a2 && v4 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      a1[14] = a2;
      *(_BYTE *)(a2 + 64) = 1;
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 160LL))(a1, a2);
    }

    __int64 __fastcall GUIContainer::addButton(LZMAReader *this, const char *a2, long double a3)
    {
      __int64 ChildByName; // x21
      __int64 v6; // x20
      int v7; // w8
      const char *ExportName; // x0
      String v10; // [xsp+10h] [xbp-70h] BYREF
      String v11; // [xsp+28h] [xbp-58h] BYREF
      String v12; // [xsp+40h] [xbp-40h] BYREF
      __int64 v13; // [xsp+58h] [xbp-28h] BYREF
    
      ChildByName = MovieClip::getChildByName(*((_QWORD *)this + 14), a2, a3);
      if ( ChildByName )
      {
        v6 = (*(__int64 (__fastcall **)(LZMAReader *))(*(_QWORD *)this + 296LL))(this);
        v7 = *((unsigned __int8 *)this + 104);
        *(_BYTE *)(v6 + 233) = v7;
        if ( v7 )
        {
          String::String(&v10, a2);
          CustomButton::setAnalyticsName((String *)v6, &v10);
          String::~String((__int64)&v10);
        }
        MovieClip::changeTimelineChild(*((DataLoaderTexture **)this + 14), (Multitouch *)ChildByName, (Multitouch *)v6);
        *(_DWORD *)(ChildByName + 20) = 0;
        *(_DWORD *)(ChildByName + 16) = 1065353216;
        *(_DWORD *)(ChildByName + 24) = 0;
        *(_QWORD *)(ChildByName + 28) = 1065353216;
        *(_DWORD *)(ChildByName + 36) = 0;
        ColorTransform::reset(ChildByName + 9);
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 288LL))(v6, ChildByName, 1);
        v13 = v6;
        CustomButton::setButtonListener(v6, (__int64)this + 96);
        std::vector<CustomButton *>::push_back((__int64)this + 120, &v13);
      }
      else
      {
        String::format((String *)"Unable to find instanceName %s to create a button in ", (__int64)&v12, a2);
        if ( *((_DWORD *)this + 36) )
        {
          String::operator+=(&v12.m_length, (_DWORD *)this + 36);
        }
        else if ( MovieClip::getExportName(*((_QWORD *)this + 14)) )
        {
          ExportName = (const char *)MovieClip::getExportName(*((_QWORD *)this + 14));
          String::String(&v11, ExportName);
          String::operator+=(&v12.m_length, &v11);
          String::~String((__int64)&v11);
        }
        Debugger::warning(&v12);
        String::~String((__int64)&v12);
        return 0;
      }
      return v6;
    }

    __int64 __fastcall GUIContainer::addButtonManually(LZMAReader *this, lzham *a2)
    {
      lzham *v4; // [xsp+8h] [xbp-18h] BYREF
    
      v4 = a2;
      CustomButton::setButtonListener((__int64)a2, (__int64)this + 96);
      return std::vector<CustomButton *>::push_back((__int64)this + 120, &v4);
    }

    void __fastcall GUIContainer::buttonClicked(LZMAReader *this, lzham *a2)
    {
      ;
    }

    __int64 __fastcall GUIContainer::createButton(LZMAReader *this)
    {
      __int64 v1; // x19
    
      v1 = operator new(240);
      CustomButton::CustomButton(v1);
      return v1;
    }

    void __fastcall GUIContainer::setText(LZMAReader *this, const char *a2, const String *a3, int a4)
    {
      VertexBuffer *TextFieldByName; // x0
      String v8; // [xsp+8h] [xbp-38h] BYREF
    
      TextFieldByName = (VertexBuffer *)MovieClip::getTextFieldByName(*((_QWORD *)this + 14), a2);
      if ( TextFieldByName )
      {
        TextField::setText(TextFieldByName, a3);
      }
      else if ( a4 )
      {
        String::format((String *)"Unable to find TextField with instance name %s", (__int64)&v8, a2);
        Debugger::warning(&v8);
        String::~String((__int64)&v8);
      }
    }

    __int64 __fastcall GUIContainer::getTextField(LZMAReader *this, const char *a2)
    {
      return MovieClip::getTextFieldByName(*((_QWORD *)this + 14), a2);
    }

    void __fastcall GUIContainer::setNumberText(LZMAReader *this, const char *a2, int a3, bool a4)
    {
      TextField *TextFieldByName; // x0
      String v8; // [xsp+8h] [xbp-38h] BYREF
    
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(*((_QWORD *)this + 14), a2);
      if ( TextFieldByName )
      {
        TextField::setNumberText(TextFieldByName, a3, a4);
      }
      else
      {
        String::format((String *)"Unable to find TextField with instance name %s", (__int64)&v8, a2);
        Debugger::warning(&v8);
        String::~String((__int64)&v8);
      }
    }

    __int64 __fastcall GUIContainer::getAnalyticsName(LZMAReader *this)
    {
      return (__int64)this + 144;
    }

    __int64 __fastcall GUIContainer::getMovieClip(LZMAReader *this)
    {
      return *((_QWORD *)this + 14);
    }

}; // end class GUIContainer
