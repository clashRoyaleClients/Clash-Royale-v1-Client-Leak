class SelectableButtonList
{
public:

    void __fastcall SelectableButtonList::SelectableButtonList(SelectableButtonList *this)
    {
      *(_QWORD *)this = off_100476478;
      *((_DWORD *)this + 8) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 1) = 0;
    }

    void __fastcall SelectableButtonList::~SelectableButtonList(DataLoaderCSV *this)
    {
      void *v1; // x0
    
      *(_QWORD *)this = off_100476478;
      *((_DWORD *)this + 8) = 0;
      v1 = (void *)*((_QWORD *)this + 1);
      if ( v1 )
        operator delete(v1);
    }

    void __fastcall SelectableButtonList::~SelectableButtonList(DataLoaderCSV *this)
    {
      void *v2; // x0
    
      *(_QWORD *)this = off_100476478;
      *((_DWORD *)this + 8) = 0;
      v2 = (void *)*((_QWORD *)this + 1);
      if ( v2 )
        operator delete(v2);
      operator delete(this);
    }

    __int64 __fastcall SelectableButtonList::getSelectedIndex(DataLoaderCSV *this)
    {
      if ( *((_QWORD *)this + 1) == *((_QWORD *)this + 2) )
        return 0xFFFFFFFFLL;
      else
        return *((unsigned int *)this + 8);
    }

    __int64 __fastcall SelectableButtonList::buttonSelected(__int64 this, PlayerInfo *a2)
    {
      __int64 v3; // x20
      __int64 v4; // x8
      unsigned __int64 v5; // x9
      __int64 i; // x22
      PlayerInfo *v7; // x21
      __int64 v8; // x0
    
      v3 = this;
      v4 = *(_QWORD *)(this + 8);
      v5 = (unsigned __int64)(*(_QWORD *)(this + 16) - v4) >> 3;
      if ( (int)v5 >= 1 )
      {
        for ( i = (int)v5 - 1LL; ; --i )
        {
          v7 = *(PlayerInfo **)(v4 + 8 * i);
          this = (*(__int64 (__fastcall **)(PlayerInfo *))(*(_QWORD *)v7 + 360LL))(v7);
          if ( ((v7 == a2) ^ (unsigned int)this) == 1 )
          {
            v8 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8 * i);
            this = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v8 + 352LL))(v8, v7 == a2);
          }
          if ( v7 == a2 )
            *(_DWORD *)(v3 + 32) = i;
          if ( i + 1 < 2 )
            break;
          v4 = *(_QWORD *)(v3 + 8);
        }
      }
      return this;
    }

    __int64 __fastcall SelectableButtonList::addButton(DataLoaderCSV *this, PlayerInfo *a2)
    {
      char *v3; // x19
      void (__fastcall *v4)(PlayerInfo *, __int64); // x9
      PlayerInfo *v6; // [xsp+8h] [xbp-18h] BYREF
    
      v6 = a2;
      v3 = (char *)this + 8;
      v4 = *(void (__fastcall **)(PlayerInfo *, __int64))(*(_QWORD *)a2 + 352LL);
      if ( *((_QWORD *)this + 1) == *((_QWORD *)this + 2) )
      {
        v4(a2, 1);
        *((_DWORD *)this + 8) = 0;
      }
      else
      {
        v4(a2, 0);
      }
      return std::vector<SelectableButton *>::push_back(v3, &v6);
    }

    __int64 __fastcall SelectableButtonList::selectButtonIndex(__int64 this, int a2)
    {
      __int64 v2; // x19
      __int64 v3; // x8
      unsigned __int64 v4; // x9
      __int64 i; // x21
      __int64 v8; // x0
    
      v2 = this;
      v3 = *(_QWORD *)(this + 8);
      v4 = (unsigned __int64)(*(_QWORD *)(this + 16) - v3) >> 3;
      if ( (int)v4 >= 1 )
      {
        for ( i = (int)v4 - 1LL; ; --i )
        {
          this = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 8 * i) + 360LL))(*(_QWORD *)(v3 + 8 * i));
          if ( ((a2 == (_DWORD)i) ^ (unsigned int)this) == 1 )
          {
            v8 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * i);
            this = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v8 + 352LL))(v8, a2 == (_DWORD)i);
          }
          if ( a2 == (_DWORD)i )
            *(_DWORD *)(v2 + 32) = a2;
          if ( i + 1 < 2 )
            break;
          v3 = *(_QWORD *)(v2 + 8);
        }
      }
      return this;
    }

    __int64 __fastcall SelectableButtonList::getButtonCount(DataLoaderCSV *this)
    {
      return (*((_QWORD *)this + 2) - *((_QWORD *)this + 1)) >> 3;
    }

    __int64 __fastcall SelectableButtonList::getButton(DataLoaderCSV *this, int a2)
    {
      __int64 v2; // x8
    
      if ( a2 < 0 )
        return 0;
      v2 = *((_QWORD *)this + 1);
      if ( (int)((unsigned __int64)(*((_QWORD *)this + 2) - v2) >> 3) <= a2 )
        return 0;
      else
        return *(_QWORD *)(v2 + 8LL * a2);
    }

}; // end class SelectableButtonList
