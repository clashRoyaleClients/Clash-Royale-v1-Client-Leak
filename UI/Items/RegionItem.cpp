class RegionItem
{
public:

    __int64 __fastcall RegionItem::RegionItem(__int64 a1, RegionItem *a2)
    {
      const String *v4; // x2
      MovieClip *MovieClip; // x21
      const LogicRegionData *v6; // x1
      const String *RegionName; // x0
      String v9; // [xsp+0h] [xbp-50h] BYREF
      String v10; // [xsp+18h] [xbp-38h] BYREF
    
      GameButton::GameButton((#1014 *)a1);
      *(_QWORD *)a1 = off_10045F980;
      *(_QWORD *)(a1 + 264) = a2;
      String::String(&v10, "sc/ui.sc");
      String::String(&v9, "generic_list_item");
      MovieClip = (MovieClip *)StringTable::getMovieClip((#1308 *)&v10, &v9, v4);
      String::~String(&v9);
      String::~String(&v10);
      (*(void (__fastcall **)(__int64, MovieClip *, __int64))(*(_QWORD *)a1 + 280LL))(a1, MovieClip, 1);
      RegionName = (const String *)RegionItem::getRegionName(a2, v6);
      MovieClip::setText(MovieClip, "txt", RegionName);
      *(_BYTE *)(a1 + 64) = 1;
      return a1;
    }

    __int64 __fastcall RegionItem::getRegionName(__int64 a1, const char *a2)
    {
      #1308 *TID; // x0
      const String *v4; // x1
    
      if ( !a1 )
        return StringTable::getString((#1308 *)"TID_REGION_ANY", a2);
      if ( *(int *)LogicData::getTID(a1) < 1 )
        return a1 + 104;
      TID = (#1308 *)LogicData::getTID(a1);
      return StringTable::getString(TID, v4);
    }

    void __fastcall RegionItem::~RegionItem(#1379 *this)
    {
      *(_QWORD *)this = off_10045F980;
      *((_QWORD *)this + 33) = 0;
      GameButton::~GameButton(this);
    }

    void __fastcall RegionItem::~RegionItem(#1379 *this)
    {
      *(_QWORD *)this = off_10045F980;
      *((_QWORD *)this + 33) = 0;
      GameButton::~GameButton(this);
      operator delete(this);
    }

}; // end class RegionItem
