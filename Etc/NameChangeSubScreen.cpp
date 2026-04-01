class NameChangeSubScreen
{
public:

    __int64 __fastcall NameChangeSubScreen::isModal(LogicExpLevelData *this)
    {
      return 0;
    }

    void __fastcall NameChangeSubScreen::close(LogicExpLevelData *this)
    {
      ;
    }

    void __fastcall NameChangeSubScreen::NameChangeSubScreen(NameChangeSubScreen *this)
    {
      DropGUIContainer::DropGUIContainer(this);
      *(_QWORD *)this = off_10046C448;
      *((_QWORD *)this + 12) = &off_10046C5D0;
      String::String((String *)this + 8);
      String::String((String *)((char *)this + 224));
      String::operator=((char *)this + 192, "");
      *((_BYTE *)this + 216) = 0;
      String::operator=((char *)this + 224, "");
    }

    void __fastcall NameChangeSubScreen::~NameChangeSubScreen(LogicExpLevelData *this)
    {
      *(_QWORD *)this = off_10046C448;
      *((_QWORD *)this + 12) = &off_10046C5D0;
      String::operator=((char *)this + 192, "");
      *((_BYTE *)this + 216) = 0;
      String::operator=((char *)this + 224, "");
      String::~String();
      String::~String();
      DropGUIContainer::~DropGUIContainer(this);
    }

    // attributes: thunk
    void __fastcall NameChangeSubScreen::~NameChangeSubScreen(LogicExpLevelData *this)
    {
      __ZN19NameChangeSubScreenD2Ev(this);
    }

    void __fastcall NameChangeSubScreen::~NameChangeSubScreen(LogicExpLevelData *a1)
    {
      NameChangeSubScreen::~NameChangeSubScreen(a1);
      operator delete(a1);
    }

    __int64 __fastcall NameChangeSubScreen::getTitleTID(LogicExpLevelData *this)
    {
      return (__int64)this + 192;
    }

    __int64 __fastcall NameChangeSubScreen::setTitleTID(String *a1)
    {
      return String::operator=(a1 + 8);
    }

    __int64 __fastcall NameChangeSubScreen::setUseBack(__int64 this, char a2)
    {
      *(_BYTE *)(this + 216) = a2;
      return this;
    }

    void __fastcall NameChangeSubScreen::poppedBack(LogicExpLevelData *this)
    {
      ;
    }

    void __fastcall NameChangeSubScreen::update(LogicExpLevelData *this, float a2)
    {
      ;
    }

    __int64 __fastcall NameChangeSubScreen::keyDown(LogicExpLevelData *this)
    {
      return 0;
    }

}; // end class NameChangeSubScreen
