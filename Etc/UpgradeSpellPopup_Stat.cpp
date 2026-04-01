class UpgradeSpellPopup::Stat
{
public:

    void __fastcall UpgradeSpellPopup::Stat::update(_QWORD *a1, float a2)
    {
      LogicPageOpenedCommand *v4; // x0
      __int64 Instance; // x20
      int v6; // w1
      float v7; // s1
      float v8; // s0
      float v9; // s0
      float v10; // s1
      String *v11; // x20
      int v12; // w1
      bool v13; // w2
      String *v14; // x21
      const char *v15; // x1
      bool v16; // w2
      __int64 v17; // x21
      int v18; // w9
      internal_t *p_internal; // x8
      internal_t *pHeap; // x9
      LogicPageOpenedCommand *v21; // x0
      __int64 v22; // x21
      String v23; // [xsp+10h] [xbp-F0h] BYREF
      String v24; // [xsp+28h] [xbp-D8h] BYREF
      String v25; // [xsp+40h] [xbp-C0h] BYREF
      __int64 v26[3]; // [xsp+58h] [xbp-A8h] BYREF
      String v27; // [xsp+70h] [xbp-90h] BYREF
      __int64 v28[3]; // [xsp+88h] [xbp-78h] BYREF
      String v29; // [xsp+A0h] [xbp-60h] BYREF
      String v30; // [xsp+B8h] [xbp-48h] BYREF
    
      if ( *((float *)a1 + 10) < 0.0 )
      {
        *((_DWORD *)a1 + 10) = 0;
        MovieClip::gotoAndPlay((MovieClip *)*a1, 0, "stop");
        *(_BYTE *)(*a1 + 8LL) = 1;
        Instance = HomeScreen::getInstance(v4);
        String::String(&v30, "upgradeCard_stat_appear");
        HomeScreen::addEffectAt(
          Instance,
          &v30,
          *a1,
          COERCE_LONG_DOUBLE((unsigned __int128)0),
          COERCE_LONG_DOUBLE((unsigned __int128)0));
        String::~String();
      }
      if ( (unsigned int)MovieClip::isStopped((#1257 *)*a1) )
      {
        v7 = *((float *)a1 + 11);
        v8 = *((float *)a1 + 10) + a2;
        *((float *)a1 + 10) = v8;
        v9 = v8 / v7;
        if ( v9 >= 0.0 )
        {
          if ( v9 <= 1.0 )
            v10 = v9;
          else
            v10 = 1.0;
          if ( v9 > 1.0 )
            v9 = 1.0;
        }
        else
        {
          v10 = 0.0;
          v9 = 0.0;
        }
        v11 = (String *)(unsigned int)(int)(float)((float)((float)*((int *)a1 + 4)
                                                         + (float)((float)(v10 * v9)
                                                                 * (float)(*((_DWORD *)a1 + 5) - *((_DWORD *)a1 + 4))))
                                                 + 0.5);
        String::valueOf(&v29, v11, v6);
        if ( *((_DWORD *)a1 + 9) == 2 )
        {
          SpellInfoPopup::getTimeText((ScrollArea *)v11, 0, v13, v28);
          String::operator=(&v29);
          String::~String();
        }
        if ( (_DWORD)v11 != *((_DWORD *)a1 + 8) )
        {
          v14 = (String *)(unsigned int)((_DWORD)v11 - *((_DWORD *)a1 + 4));
          String::valueOf(&v27, v14, v12);
          if ( *((_DWORD *)a1 + 9) == 2 )
          {
            SpellInfoPopup::getTimeText((ScrollArea *)v14, 0, v16, v26);
            String::operator=(&v27);
            String::~String();
          }
          v17 = a1[1];
          *(_BYTE *)(v17 + 78) = 1;
          *(_DWORD *)(v17 + 64) = -1;
          v18 = v29.m_bytes + 1;
          p_internal = &v29.internal;
          if ( (_DWORD)v11 == *((_DWORD *)a1 + 5) )
          {
            if ( v18 > 8 )
              p_internal = (internal_t *)v29.internal.pHeap;
            if ( v27.m_bytes + 1 > 8 )
              pHeap = (internal_t *)v27.internal.pHeap;
            else
              pHeap = &v27.internal;
            String::format((String *)"<cffffff>%s</c>  <c00ff00>+%s</c>", v15, p_internal, pHeap);
            TextField::setText((#1271 *)v17, &v25);
            String::~String();
          }
          else
          {
            if ( v18 > 8 )
              p_internal = (internal_t *)v29.internal.pHeap;
            String::format((String *)"<cffffff>%s</c>", v15, p_internal);
            TextField::setText((#1271 *)v17, &v24);
            String::~String();
          }
          v22 = HomeScreen::getInstance(v21);
          String::String(&v23, "upgradeCard_stat_change");
          HomeScreen::addEffectAt(
            v22,
            &v23,
            *a1,
            COERCE_LONG_DOUBLE((unsigned __int128)0),
            COERCE_LONG_DOUBLE((unsigned __int128)0));
          String::~String();
          *((_DWORD *)a1 + 8) = (_DWORD)v11;
          String::~String();
        }
        String::~String();
      }
    }

}; // end class UpgradeSpellPopup::Stat
