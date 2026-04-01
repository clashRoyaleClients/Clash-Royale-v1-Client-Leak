class AllianceSearch::NumberEditButtons
{
public:

    void __fastcall AllianceSearch::NumberEditButtons::setButtons(#1400 *this, #1014 *a2, #1014 *a3)
    {
      MovieClip *v6; // x22
      MovieClip *v7; // x22
      String v8; // [xsp+0h] [xbp-50h] BYREF
      String v9; // [xsp+18h] [xbp-38h] BYREF
    
      CustomButton::enableContinuousPresses(a3, 1);
      CustomButton::enableContinuousPresses(a2, 1);
      v6 = (MovieClip *)*((_QWORD *)a3 + 12);
      String::String(&v9, "<");
      MovieClip::setText(v6, "txt", &v9);
      String::~String(&v9);
      v7 = (MovieClip *)*((_QWORD *)a2 + 12);
      String::String(&v8, ">");
      MovieClip::setText(v7, "txt", &v8);
      String::~String(&v8);
      *(_QWORD *)this = a2;
      *((_QWORD *)this + 1) = a3;
    }

    __int64 __fastcall AllianceSearch::NumberEditButtons::buttonPressed(#1400 *this, const #1251 *a2)
    {
      int v2; // w8
    
      if ( *((const #1251 **)this + 1) == a2 )
      {
        v2 = -*((_DWORD *)this + 9);
      }
      else
      {
        if ( *(const #1251 **)this != a2 )
          return 0;
        v2 = *((_DWORD *)this + 9);
      }
      if ( v2 )
      {
        AllianceSearch::NumberEditButtons::setValue(this, (#1237 *)(unsigned int)(*((_DWORD *)this + 8) + v2));
        return 1;
      }
      return 0;
    }

    __int64 __fastcall AllianceSearch::NumberEditButtons::setValue(#1400 *this, #1237 *a2, __int64 a3, int a4)
    {
      int v5; // w0
    
      v5 = LogicMath::clamp(a2, *((_DWORD *)this + 7), *((_DWORD *)this + 6), a4);
      *((_DWORD *)this + 8) = v5;
      (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)this + 1) + 152LL))(
        *((_QWORD *)this + 1),
        v5 == *((_DWORD *)this + 7));
      (*(void (**)(void))(**(_QWORD **)this + 152LL))();
      return TextField::setNumberText(*((TextField **)this + 2), *((_DWORD *)this + 8), 0);
    }

}; // end class AllianceSearch::NumberEditButtons
