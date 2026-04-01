class DeviceLinkSubScreen
{
public:

    void __fastcall DeviceLinkSubScreen::DeviceLinkSubScreen(
            DeviceLinkSubScreen *this,
            const String *a2,
            const String *a3,
            const String *a4,
            char a5,
            String *a6)
    {
      const String *v8; // x3
    
      DropGUIContainer::DropGUIContainer(this, a2, a3);
      *(_QWORD *)this = off_10045E3A8;
      *((_QWORD *)this + 12) = &off_10045E530;
      String::String((String *)this + 8);
      String::String((String *)((char *)this + 224));
      String::operator=((char *)this + 192, "");
      *((_BYTE *)this + 216) = 0;
      String::operator=((char *)this + 224, "");
      String::operator=((String *)this + 8);
      *((_BYTE *)this + 216) = a5;
      String::operator=((String *)((char *)this + 224));
      EventTracker::sendEvent(
        (MovieClip *)&EventTracker::EVENT_LABEL_GAME,
        &EventTracker::EVENT_TYPE_DEVICE_LINKING,
        (const String *)((char *)this + 224),
        v8);
    }

    void __fastcall DeviceLinkSubScreen::~DeviceLinkSubScreen(UnlockAccountOkMessage *this)
    {
      String *v2; // x20
    
      *(_QWORD *)this = off_10045E3A8;
      *((_QWORD *)this + 12) = &off_10045E530;
      v2 = (String *)((char *)this + 192);
      String::operator=((char *)this + 192, "");
      *((_BYTE *)this + 216) = 0;
      String::operator=((char *)this + 224, "");
      String::~String((String *)((char *)this + 224));
      String::~String(v2);
      DropGUIContainer::~DropGUIContainer(this);
    }

    // attributes: thunk
    void __fastcall DeviceLinkSubScreen::~DeviceLinkSubScreen(UnlockAccountOkMessage *this)
    {
      __ZN19DeviceLinkSubScreenD2Ev(this);
    }

    void __fastcall DeviceLinkSubScreen::~DeviceLinkSubScreen(UnlockAccountOkMessage *this)
    {
      DeviceLinkSubScreen::~DeviceLinkSubScreen(this);
      operator delete(this);
    }

    __int64 __fastcall DeviceLinkSubScreen::getTitleTID(UnlockAccountOkMessage *this)
    {
      return (__int64)this + 192;
    }

    __int64 __fastcall DeviceLinkSubScreen::useBack(UnlockAccountOkMessage *this)
    {
      return *((unsigned __int8 *)this + 216);
    }

    void __fastcall DeviceLinkSubScreen::poppedBack(UnlockAccountOkMessage *this)
    {
      const String *v1; // x19
      const String *v2; // x4
      String v3; // [xsp+8h] [xbp-28h] BYREF
    
      v1 = (const String *)((char *)this + 224);
      String::String(&v3, "back");
      EventTracker::sendEvent(
        (MovieClip *)&EventTracker::EVENT_LABEL_GAME,
        &EventTracker::EVENT_TYPE_DEVICE_LINKING,
        v1,
        &v3,
        v2);
      String::~String(&v3);
    }

    __int64 __fastcall DeviceLinkSubScreen::isModal(UnlockAccountOkMessage *this)
    {
      return 0;
    }

    void __fastcall DeviceLinkSubScreen::close(UnlockAccountOkMessage *this)
    {
      ;
    }

    __int64 __fastcall DeviceLinkSubScreen::keyDown(UnlockAccountOkMessage *this)
    {
      return 0;
    }

    void __fastcall DeviceLinkSubScreen::update(UnlockAccountOkMessage *this, float a2)
    {
      ;
    }

}; // end class DeviceLinkSubScreen
