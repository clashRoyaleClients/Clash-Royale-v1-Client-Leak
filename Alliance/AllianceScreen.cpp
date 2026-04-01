class AllianceScreen
{
public:

    __int64 __fastcall AllianceScreen::getScreenType(AskForAvatarLocalRankingListMessage *this)
    {
      return *((unsigned int *)this + 47);
    }

    __int64 __fastcall AllianceScreen::shouldClose(AskForAvatarLocalRankingListMessage *this)
    {
      return *((unsigned __int8 *)this + 194);
    }

    __int64 __fastcall AllianceScreen::isScrollable(AskForAvatarLocalRankingListMessage *this)
    {
      return 0;
    }

    #1375 *__fastcall AllianceScreen::AllianceScreen(#1375 *a1, int a2, const String *a3, const String *a4)
    {
      #1375 *result; // x0
    
      result = DropGUIContainer::DropGUIContainer(a1, a3, a4);
      *(_QWORD *)result = off_10046E238;
      *((_QWORD *)result + 12) = &off_10046E3C8;
      *((_DWORD *)result + 47) = a2;
      *((_BYTE *)result + 194) = 0;
      *((_WORD *)result + 96) = 0;
      return result;
    }

    void __fastcall AllianceScreen::~AllianceScreen(AskForAvatarLocalRankingListMessage *this)
    {
      *(_QWORD *)this = off_10046E238;
      *((_QWORD *)this + 12) = &off_10046E3C8;
      *((_BYTE *)this + 194) = 0;
      *((_WORD *)this + 96) = 0;
      DropGUIContainer::~DropGUIContainer(this);
    }

    void __fastcall AllianceScreen::~AllianceScreen(AskForAvatarLocalRankingListMessage *this)
    {
      *(_QWORD *)this = off_10046E238;
      *((_QWORD *)this + 12) = &off_10046E3C8;
      *((_BYTE *)this + 194) = 0;
      *((_WORD *)this + 96) = 0;
      DropGUIContainer::~DropGUIContainer(this);
    }

    void __fastcall AllianceScreen::~AllianceScreen(AskForAvatarLocalRankingListMessage *this)
    {
      *(_QWORD *)this = off_10046E238;
      *((_QWORD *)this + 12) = &off_10046E3C8;
      *((_BYTE *)this + 194) = 0;
      *((_WORD *)this + 96) = 0;
      DropGUIContainer::~DropGUIContainer(this);
      operator delete(this);
    }

    __int64 __fastcall AllianceScreen::close(__int64 this)
    {
      *(_BYTE *)(this + 8) = 0;
      *(_BYTE *)(this + 194) = 1;
      return this;
    }

    void __fastcall AllianceScreen::update(AskForAvatarLocalRankingListMessage *this, float a2)
    {
      ;
    }

}; // end class AllianceScreen
