class DataIcon
{
public:

    void __fastcall DataIcon::DataIcon(DataIcon *this, const #916 *a2)
    {
      Sprite::Sprite(this);
      *(_QWORD *)this = off_10045FE48;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      DataIcon::setData(this, a2);
    }

    void __fastcall DataIcon::setData(LogicClientHome *this, const #916 *a2)
    {
      __int64 v4; // x0
      const String *IconSWF; // x21
      const String *IconExportName; // x0
      __int64 v7; // x0
      const String *v8; // x1
      String *v9; // x0
      __int64 Name; // x0
      const String *v11; // x1
      _QWORD v12[3]; // [xsp+20h] [xbp-50h] BYREF
      _QWORD v13[3]; // [xsp+38h] [xbp-38h] BYREF
    
      v4 = *((_QWORD *)this + 13);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 12) = a2;
      *((_QWORD *)this + 13) = 0;
      if ( a2 )
      {
        IconSWF = (const String *)LogicData::getIconSWF(a2);
        IconExportName = (const String *)LogicData::getIconExportName(a2);
        if ( IconSWF->m_length )
        {
          if ( IconExportName->m_length )
          {
            DataIcon::setIconClip(this, IconSWF, IconExportName);
            return;
          }
          Name = LogicData::getName(a2);
          operator+(v12, "data icon: export name is empty for ", Name);
          Debugger::warning((__siginfo *)v12, v11);
          v9 = (String *)v12;
        }
        else
        {
          v7 = LogicData::getName(a2);
          operator+(v13, "data icon: swf is empty for ", v7);
          Debugger::warning((__siginfo *)v13, v8);
          v9 = (String *)v13;
        }
        String::~String(v9);
      }
    }

    // attributes: thunk
    void __fastcall DataIcon::DataIcon(DataIcon *this, const #916 *a2)
    {
      __ZN8DataIconC2EPK9LogicData(this, a2);
    }

    void __fastcall DataIcon::DataIcon(DataIcon *this, const String *a2, const String *a3)
    {
      Sprite::Sprite(this, 1);
      *(_QWORD *)this = off_10045FE48;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      DataIcon::setIconClip(this, a2, a3);
      *((_BYTE *)this + 64) = 1;
    }

    // attributes: thunk
    void __fastcall DataIcon::DataIcon(DataIcon *this, const String *a2, const String *a3)
    {
      __ZN8DataIconC2ERK6StringS2_(this, a2, a3);
    }

    void __fastcall DataIcon::~DataIcon(LogicClientHome *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_10045FE48;
      v2 = *((_QWORD *)this + 13);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      Sprite::~Sprite(this);
    }

    // attributes: thunk
    void __fastcall DataIcon::~DataIcon(LogicClientHome *this)
    {
      __ZN8DataIconD2Ev(this);
    }

    void __fastcall DataIcon::~DataIcon(LogicClientHome *this)
    {
      DataIcon::~DataIcon(this);
      operator delete(this);
    }

    __int64 __fastcall DataIcon::setIconClip(LogicClientHome *this, String *a2, const String *a3)
    {
      __int64 v6; // x0
      MovieClip *MovieClip; // x0
    
      v6 = *((_QWORD *)this + 13);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *((_QWORD *)this + 13) = 0;
      MovieClip = (MovieClip *)ResourceManager::getMovieClip((ResourceManager *)a2, a3, a3);
      *((_QWORD *)this + 13) = MovieClip;
      MovieClip::gotoAndPlayFrameIndex(MovieClip, 0, -1);
      return (*(__int64 (__fastcall **)(LogicClientHome *, _QWORD))(*(_QWORD *)this + 160LL))(this, *((_QWORD *)this + 13));
    }

    __int64 __fastcall DataIcon::getIconClip(LogicClientHome *this)
    {
      return *((_QWORD *)this + 13);
    }

    void __fastcall DataIcon::replaceInstanceWithIcon(
            DisplayObject **this,
            #1257 *a2,
            String *a3,
            bool a4,
            long double a5,
            bool a6,
            bool a7,
            int a8,
            int a9)
    {
      internal_t *p_internal; // x25
      internal_t *pHeap; // x1
      const char *v16; // x1
      const #1249 *ChildByName; // x22
      __int64 ChildIndex; // x24
      float v19; // s8
      long double v20; // q0
      long double v21; // q8
      long double v22; // q9
      const String *v23; // x1
      __siginfo v24; // [xsp+8h] [xbp-68h] BYREF
    
      if ( a2 )
      {
        p_internal = &a3->internal;
        if ( a3->m_bytes + 1 > 8 )
          pHeap = (internal_t *)p_internal->pHeap;
        else
          pHeap = &a3->internal;
        ChildByName = (const #1249 *)MovieClip::getChildByName(a2, pHeap, a5);
        if ( ChildByName )
        {
          ChildIndex = Sprite::getChildIndex(a2, ChildByName);
          LODWORD(v19) = COERCE_UNSIGNED_INT128(DisplayObject::getX(ChildByName));
          v20 = DisplayObject::getY(ChildByName);
          DisplayObject::setPixelSnappedXY((DisplayObject *)this, v19, *(float *)&v20);
          DisplayObject::setPixelSnappedXY(*(this + 13), 0.0, 0.0);
          if ( a8 )
          {
            v21 = ((long double (__fastcall *)(const #1249 *))*(_QWORD *)(*(_QWORD *)ChildByName + 64LL))(ChildByName);
            v22 = ((long double (__fastcall *)(const #1249 *))*(_QWORD *)(*(_QWORD *)ChildByName + 72LL))(ChildByName);
            (*(void (__fastcall **)(_QWORD, long double))(*(_QWORD *)*(this + 13) + 48LL))(*(this + 13), v21);
            (*(void (__fastcall **)(_QWORD, long double))(*(_QWORD *)*(this + 13) + 56LL))(*(this + 13), v22);
          }
          (*(void (__fastcall **)(#1257 *, DisplayObject **, __int64))(*(_QWORD *)a2 + 168LL))(a2, this, ChildIndex);
          if ( a9 )
          {
            (*(void (__fastcall **)(#1257 *, const #1249 *))(*(_QWORD *)a2 + 176LL))(a2, ChildByName);
            (*(void (__fastcall **)(const #1249 *))(*(_QWORD *)ChildByName + 8LL))(ChildByName);
          }
        }
        else
        {
          if ( a3->m_bytes + 1 > 8 )
            p_internal = (internal_t *)p_internal->pHeap;
          String::getFormatted(
            (__int64 *)&v24.si_signo,
            (String *)"DataIcon::replaceInstanceWithIcon: instance name %s was not found",
            v16,
            p_internal);
          Debugger::warning(&v24, v23);
          String::~String((String *)&v24);
        }
      }
      else
      {
        Debugger::warning((__siginfo *)"DataIcon::replaceInstanceWithIcon: pClip is NULL", 0);
      }
    }

}; // end class DataIcon
