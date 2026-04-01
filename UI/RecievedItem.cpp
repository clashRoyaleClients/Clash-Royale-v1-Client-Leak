class RecievedItem
{
public:

    __int64 __fastcall RecievedItem::addEntry(__int64 a1, __int64 a2)
    {
      __int64 v4; // x21
      _BOOL8 v5; // x0
      const char *v6; // x2
      __int64 SenderName; // x0
      __int64 result; // x0
      int v9; // w8
    
      v4 = *(_QWORD *)(a2 + 48);
      v5 = v4 == LogicSpell::getSpellData(*(TextField **)(*(_QWORD *)(a1 + 200) + 304LL));
      Debugger::doAssert((Debugger *)v5, (bool)"", v6);
      LogicSpell::addMaterial(*(TextField **)(a1 + 192), *(_DWORD *)(a2 + 56));
      SenderName = AvatarStreamEntry::getSenderName((LogicStartMatchmakeCommand *)a2);
      result = String::equals(SenderName, a1 + 208);
      if ( (_DWORD)result )
      {
        v9 = *(_DWORD *)(a1 + 232) + *(_DWORD *)(a2 + 56);
      }
      else
      {
        RecievedItem::flushDonator((RecievedItem *)a1);
        AvatarStreamEntry::getSenderName((LogicStartMatchmakeCommand *)a2);
        result = String::operator=((String *)(a1 + 208));
        v9 = *(_DWORD *)(a2 + 56);
      }
      *(_DWORD *)(a1 + 232) = v9;
      return result;
    }

    __int64 __fastcall RecievedItem::allAdded(__int64 a1)
    {
      MovieClip *MovieClip; // x0
    
      RecievedItem::flushDonator((RecievedItem *)a1);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 368LL))(*(_QWORD *)(a1 + 200));
      MovieClip = (MovieClip *)GUIContainer::getMovieClip((#1254 *)a1);
      return MovieClip::setText(MovieClip, "name_list", (const String *)(a1 + 240));
    }

    long double __fastcall RecievedItem::getItemHeight(#1254 *a1)
    {
      __int64 MovieClip; // x0
      TextField *TextFieldByName; // x20
      long double TextHeight; // q0
      float v5; // s8
      const char *v6; // x1
      int v7; // w2
      float v8; // s9
      float v9; // s10
      long double Height; // q8
      Rect v12; // [xsp+8h] [xbp-68h] BYREF
      float v13; // [xsp+14h] [xbp-5Ch]
      Rect v14[2]; // [xsp+18h] [xbp-58h] BYREF
      char v15; // [xsp+28h] [xbp-48h] BYREF
    
      MovieClip = GUIContainer::getMovieClip(a1);
      TextFieldByName = (TextField *)MovieClip::getTextFieldByName(MovieClip, "name_list");
      TextHeight = TextField::getTextHeight(TextFieldByName);
      v5 = *(float *)&TextHeight;
      String::format((String *)"%d", v6, (unsigned int)(int)*(float *)&TextHeight);
      Debugger::hudPrint((__siginfo *)&v15, (const String *)0xFFFFFFFFLL, v7);
      String::~String();
      Rect::Rect(v14);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v14);
      v8 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(TextFieldByName)));
      v9 = *(float *)&v14[0].bottom;
      Rect::Rect(&v12);
      DisplayObject::getBounds(a1, 0, &v12);
      if ( v13 < (float)((float)(v5 + v8) + v9) )
        v13 = (float)(v5 + v8) + v9;
      Height = Rect::getHeight(&v12);
      Rect::~Rect(&v12);
      Rect::~Rect(v14);
      return Height;
    }

    void __fastcall RecievedItem::flushDonator(__int64 a1, const char *a2)
    {
      __int64 v2; // x9
      __int64 v3; // x19
      _QWORD *v4; // x8
      _BYTE v5[24]; // [xsp+10h] [xbp-40h] BYREF
      _BYTE v6[24]; // [xsp+28h] [xbp-28h] BYREF
    
      v2 = *(unsigned int *)(a1 + 232);
      v3 = a1 + 240;
      v4 = (_QWORD *)(a1 + 216);
      if ( *(_DWORD *)(a1 + 212) + 1 > 8 )
        v4 = (_QWORD *)*v4;
      if ( (int)v2 > 1 )
      {
        String::format((String *)"%s (x%d)\n", a2, v4, v2);
        String::operator+=(v3, v5);
      }
      else
      {
        String::format((String *)"%s\n", a2, v4);
        String::operator+=(v3, v6);
      }
      String::~String();
    }

    __int64 __fastcall RecievedItem::RecievedItem(__int64 a1, __int64 a2)
    {
      LogicSpell *v4; // x23
      const char *v5; // x2
      __int64 v6; // x23
      __int64 MovieClip; // x0
      #1271 *TextFieldByName; // x22
      DisplayObject *v9; // x23
      float v10; // s8
      float MidX; // s9
      float v12; // s10
      long double MidY; // q0
      Rect v15[2]; // [xsp+0h] [xbp-90h] BYREF
      String v16; // [xsp+10h] [xbp-80h] BYREF
      String v17; // [xsp+28h] [xbp-68h] BYREF
    
      String::String(&v17, "sc/ui.sc");
      String::String(&v16, "card_received_list_item");
      DropGUIContainer::DropGUIContainer((#1375 *)a1, &v17, &v16);
      String::~String();
      String::~String();
      *(_QWORD *)a1 = off_1004F1490;
      *(_QWORD *)(a1 + 96) = &off_1004F15E8;
      String::String((String *)(a1 + 208));
      String::String((String *)(a1 + 240));
      *(_DWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      v4 = (LogicSpell *)operator new(48);
      LogicSpell::LogicSpell(v4);
      *(_QWORD *)(a1 + 192) = v4;
      LogicSpell::setMaterialCount(v4, 0, v5);
      LogicSpell::setSpellData(*(_QWORD **)(a1 + 192), *(_QWORD *)(a2 + 48));
      v6 = operator new(464);
      SpellItem::SpellItem(v6, *(_QWORD *)(a1 + 192), 2, 0);
      *(_QWORD *)(a1 + 200) = v6;
      *(_BYTE *)(v6 + 64) = 0;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, v6);
      *(_BYTE *)(*(_QWORD *)(a1 + 200) + 64LL) = 0;
      MovieClip = GUIContainer::getMovieClip((#1254 *)a1);
      TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(MovieClip, "card_area");
      Rect::Rect(v15);
      TextField::getTextFieldBounds(TextFieldByName, (#1261 *)v15);
      v9 = *(DisplayObject **)(a1 + 200);
      v10 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getX(TextFieldByName)));
      MidX = Rect::getMidX(v15);
      v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(DisplayObject::getY(TextFieldByName)));
      MidY = Rect::getMidY(v15);
      DisplayObject::setPixelSnappedXY(v9, v10 + MidX, v12 + *(float *)&MidY);
      Rect::~Rect(v15);
      return a1;
    }

    // attributes: thunk
    void __fastcall RecievedItem::~RecievedItem(RecievedItem *a1)
    {
      __ZN12RecievedItemD2Ev(a1);
    }

    void __fastcall RecievedItem::~RecievedItem(RecievedItem *a1)
    {
      RecievedItem::~RecievedItem(a1);
      operator delete(a1);
    }

    void __fastcall RecievedItem::~RecievedItem(__int64 a1)
    {
      TextField *v2; // x0
      __int64 v3; // x20
      __int64 v4; // x0
    
      *(_QWORD *)a1 = off_1004F1490;
      *(_QWORD *)(a1 + 96) = &off_1004F15E8;
      v3 = a1 + 192;
      v2 = *(TextField **)(a1 + 192);
      if ( v2 )
      {
        LogicSpell::destruct(v2);
        if ( *(_QWORD *)v3 )
          operator delete(*(void **)v3);
        *(_QWORD *)v3 = 0;
      }
      v4 = *(_QWORD *)(a1 + 200);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *(_DWORD *)(a1 + 232) = 0;
      *(_QWORD *)v3 = 0;
      *(_QWORD *)(v3 + 8) = 0;
      String::~String();
      String::~String();
      DropGUIContainer::~DropGUIContainer((#1375 *)a1);
    }

}; // end class RecievedItem
