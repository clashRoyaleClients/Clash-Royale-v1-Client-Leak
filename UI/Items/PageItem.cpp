class PageItem
{
public:

    void __fastcall PageItem::PageItem(PageItem *this, const String *a2, const String *a3)
    {
      #1375 *v3; // x0
    
      v3 = DropGUIContainer::DropGUIContainer(this, a2, a3);
      *(_QWORD *)v3 = off_1004607A0;
      *((_QWORD *)v3 + 12) = &off_100460958;
      *((_DWORD *)v3 + 47) = 0;
      *((_BYTE *)v3 + 192) = 0;
      *((_BYTE *)v3 + 64) = 1;
    }

    void __fastcall PageItem::~PageItem(LogicProjectileData *this)
    {
      *(_QWORD *)this = off_1004607A0;
      *((_QWORD *)this + 12) = &off_100460958;
      *((_DWORD *)this + 47) = 0;
      *((_BYTE *)this + 192) = 0;
      DropGUIContainer::~DropGUIContainer(this);
    }

    void __fastcall PageItem::~PageItem(LogicProjectileData *this)
    {
      *(_QWORD *)this = off_1004607A0;
      *((_QWORD *)this + 12) = &off_100460958;
      *((_DWORD *)this + 47) = 0;
      *((_BYTE *)this + 192) = 0;
      DropGUIContainer::~DropGUIContainer(this);
    }

    void __fastcall PageItem::~PageItem(LogicProjectileData *this)
    {
      *(_QWORD *)this = off_1004607A0;
      *((_QWORD *)this + 12) = &off_100460958;
      *((_DWORD *)this + 47) = 0;
      *((_BYTE *)this + 192) = 0;
      DropGUIContainer::~DropGUIContainer(this);
      operator delete(this);
    }

    void *__fastcall PageItem::getAnalyticsName(LogicProjectileData *this)
    {
      return &PAGE_ITEM_DEFAULT_ANALYTICS_NAME;
    }

    void *__fastcall PageItem::getLocalizedName(LogicProjectileData *this)
    {
      return &PAGE_ITEM_DEFAULT_NAME;
    }

    __int64 __fastcall PageItem::stateChanged(BadgePopup *a1)
    {
      BadgePopup *Instance; // x0
    
      Instance = (BadgePopup *)GUI::getInstance(a1);
      return GUI::removePopover(Instance);
    }

    void __fastcall PageItem::update(LogicProjectileData *this, float a2)
    {
      ;
    }

    void __fastcall PageItem::onPeek(LogicProjectileData *this, float a2)
    {
      ;
    }

    __int64 __fastcall PageItem::isBlockingPageScroll(LogicProjectileData *this)
    {
      return 0;
    }

    __int64 __fastcall PageItem::getNotificationCount(LogicProjectileData *this)
    {
      return 0;
    }

    __int64 __fastcall PageItem::getGreenNotificationCount(LogicProjectileData *this)
    {
      return 0;
    }

    __int64 __fastcall PageItem::hasGreenNotifications(LogicProjectileData *this)
    {
      return 0;
    }

    __int64 __fastcall PageItem::showTopHUD(LogicProjectileData *this)
    {
      return 1;
    }

    __int64 __fastcall PageItem::createIcon(LogicProjectileData *this)
    {
      return 0;
    }

    __int64 __fastcall PageItem::showTabHighlightClip(LogicProjectileData *this)
    {
      return 0;
    }

    __int64 __fastcall PageItem::createTabHighlightClipIfNeeded(LogicProjectileData *this)
    {
      return 0;
    }

}; // end class PageItem
