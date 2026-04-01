class BadgeItem
{
public:

    void __fastcall BadgeItem::BadgeItem(BadgeItem *this, const #1018 *a2)
    {
      #1308 *IconSWF; // x21
      const String *IconExportName; // x0
      const String *v6; // x2
      __int64 MovieClip; // x0
    
      GameButton::GameButton(this);
      *(_QWORD *)this = off_10045EB20;
      *((_QWORD *)this + 33) = a2;
      IconSWF = (#1308 *)LogicData::getIconSWF(a2);
      IconExportName = (const String *)LogicData::getIconExportName(a2);
      MovieClip = StringTable::getMovieClip(IconSWF, IconExportName, v6);
      (*(void (__fastcall **)(BadgeItem *, __int64, __int64))(*(_QWORD *)this + 280LL))(this, MovieClip, 1);
      *((_BYTE *)this + 64) = 1;
    }

    void __fastcall BadgeItem::~BadgeItem(#1378 *this)
    {
      *(_QWORD *)this = off_10045EB20;
      *((_QWORD *)this + 33) = 0;
      GameButton::~GameButton(this);
    }

    void __fastcall BadgeItem::~BadgeItem(#1378 *this)
    {
      *(_QWORD *)this = off_10045EB20;
      *((_QWORD *)this + 33) = 0;
      GameButton::~GameButton(this);
      operator delete(this);
    }

}; // end class BadgeItem
