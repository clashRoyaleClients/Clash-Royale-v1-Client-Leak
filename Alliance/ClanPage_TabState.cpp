class ClanPage::TabState
{
public:

    void __fastcall ClanPage::TabState::~TabState(#1350 *this)
    {
      __int64 i; // x22
    
      for ( i = 48; i != -24; i -= 24 )
        String::~String((String *)((char *)this + i + 16));
    }

}; // end class ClanPage::TabState
