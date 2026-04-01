class SelectableButton
{
public:

    __int64 __fastcall SelectableButton::isSelected(PlayerInfo *this)
    {
      return *((unsigned __int8 *)this + 235);
    }

    void __fastcall SelectableButton::SelectableButton(SelectableButton *this, DataLoaderCSV *a2)
    {
      CustomButton::CustomButton((__int64)this);
      *(_QWORD *)this = off_1004762F0;
      *((_BYTE *)this + 235) = 0;
      *((_QWORD *)this + 30) = 0;
      if ( a2 )
      {
        *((_QWORD *)this + 30) = a2;
        SelectableButtonList::addButton(a2, this);
      }
    }

    void __fastcall SelectableButton::SelectableButton(SelectableButton *this, DataLoaderCSV *a2)
    {
      SelectableButton::SelectableButton(this, a2);
    }

    void __fastcall SelectableButton::~SelectableButton(PlayerInfo *this)
    {
      *(_QWORD *)this = off_1004762F0;
      *((_BYTE *)this + 235) = 0;
      *((_QWORD *)this + 30) = 0;
      CustomButton::~CustomButton(this);
    }

    void __fastcall SelectableButton::~SelectableButton(PlayerInfo *this)
    {
      *(_QWORD *)this = off_1004762F0;
      *((_BYTE *)this + 235) = 0;
      *((_QWORD *)this + 30) = 0;
      CustomButton::~CustomButton(this);
    }

    void __fastcall SelectableButton::~SelectableButton(PlayerInfo *this)
    {
      *(_QWORD *)this = off_1004762F0;
      *((_BYTE *)this + 235) = 0;
      *((_QWORD *)this + 30) = 0;
      CustomButton::~CustomButton(this);
      operator delete(this);
    }

    DataLoaderCSV *__fastcall SelectableButton::buttonPressed(PlayerInfo *this)
    {
      DataLoaderCSV *result; // x0
    
      result = (DataLoaderCSV *)*((_QWORD *)this + 30);
      if ( !result )
        return (DataLoaderCSV *)(*(__int64 (__fastcall **)(PlayerInfo *, bool))(*(_QWORD *)this + 352LL))(
                                  this,
                                  *((_BYTE *)this + 235) == 0);
      if ( !*((_BYTE *)this + 235) )
        return (DataLoaderCSV *)SelectableButtonList::buttonSelected(result, this);
      return result;
    }

    __int64 __fastcall SelectableButton::setMovieClip(__int64 a1)
    {
      CustomButton::setMovieClip(a1);
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
    }

    MovieClip *__fastcall SelectableButton::updateMovieClip(PlayerInfo *this)
    {
      MovieClip *result; // x0
      const char *v3; // x1
    
      result = (MovieClip *)*((_QWORD *)this + 12);
      if ( result )
      {
        if ( *((_BYTE *)this + 235) )
          v3 = "active";
        else
          v3 = "inactive";
        return (MovieClip *)MovieClip::gotoAndStop(result, v3);
      }
      return result;
    }

    _BYTE *__fastcall SelectableButton::setSelected(_BYTE *this, int a2)
    {
      if ( (unsigned __int8)*(this + 235) != a2 )
      {
        *(this + 235) = a2;
        return (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)this + 368LL))(this);
      }
      return this;
    }

}; // end class SelectableButton
