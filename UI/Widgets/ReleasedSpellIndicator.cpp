class ReleasedSpellIndicator
{
public:

    void __fastcall ReleasedSpellIndicator::ReleasedSpellIndicator(ReleasedSpellIndicator *this)
    {
      *((_DWORD *)this + 13) = 0;
      *((_BYTE *)this + 48) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
    }

    void __fastcall ReleasedSpellIndicator::~ReleasedSpellIndicator(DonateStreamItem *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
    
      v2 = *(_QWORD *)this;
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *(_QWORD *)this = 0;
      ReleasedSpellIndicator::destroyDummyObjects(this);
      v3 = *((_QWORD *)this + 5);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_DWORD *)this + 13) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      *(_QWORD *)this = 0;
      *(_QWORD *)((char *)this + 41) = 0;
      *(_QWORD *)((char *)this + 36) = 0;
      v4 = *((_QWORD *)this + 3);
      if ( v4 )
        operator delete[](v4);
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
    }

    _DWORD *__fastcall ReleasedSpellIndicator::destroyDummyObjects(_DWORD *this)
    {
      int v1; // w8
      int v2; // w19
      __int64 *v3; // x20
      __int64 v4; // x21
      int v5; // w8
    
      v1 = *(this + 9);
      v2 = v1 - 1;
      if ( v1 >= 1 )
      {
        v3 = (__int64 *)(this + 6);
        do
        {
          this = (_DWORD *)LogicArrayList<LogicGameObject *>::remove(v3, v2);
          v4 = (__int64)this;
          if ( this )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)this + 24LL))(this);
            this = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          }
          v5 = v2-- + 1;
        }
        while ( v5 > 1 );
      }
      return this;
    }

    // attributes: thunk
    void __fastcall ReleasedSpellIndicator::~ReleasedSpellIndicator(DonateStreamItem *this)
    {
      __ZN22ReleasedSpellIndicatorD2Ev(this);
    }

    __int64 __fastcall ReleasedSpellIndicator::update(DonateStreamItem *this, float a2)
    {
      float v4; // s0
    
      if ( *((_BYTE *)this + 48) )
        return 1;
      v4 = *((float *)this + 13) + a2;
      *((float *)this + 13) = v4;
      if ( v4 < 3.0 )
        return 0;
      ReleasedSpellIndicator::destroyDummyObjects(this);
      *((_BYTE *)this + 48) = 1;
      return 0;
    }

    _DWORD *__fastcall ReleasedSpellIndicator::setToRemoveState(_DWORD *this)
    {
      _DWORD *v1; // x19
    
      v1 = this;
      if ( !*((_BYTE *)this + 48) )
      {
        this = ReleasedSpellIndicator::destroyDummyObjects(this);
        *((_BYTE *)v1 + 48) = 1;
      }
      return this;
    }

}; // end class ReleasedSpellIndicator
