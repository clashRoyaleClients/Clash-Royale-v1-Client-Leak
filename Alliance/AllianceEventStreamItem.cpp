class AllianceEventStreamItem
{
public:

    void __fastcall AllianceEventStreamItem::AllianceEventStreamItem(AllianceEventStreamItem *this, #1168 *a2)
    {
      const char *v4; // x10
      const char *v5; // x20
      const String *v6; // x2
      #1308 *MovieClip; // x20
      String v8; // [xsp+0h] [xbp-40h] BYREF
      String v9; // [xsp+18h] [xbp-28h] BYREF
    
      StreamItem::StreamItem((__int64)this);
      *(_QWORD *)this = off_10046A3C0;
      *((_QWORD *)this + 33) = &off_10046A568;
      if ( (*(unsigned int (__fastcall **)(#1168 *))(*(_QWORD *)a2 + 32LL))(a2) == 4 )
      {
        if ( ((0x16u >> ((*((_BYTE *)a2 + 72) - 1) & 0x3F)) & 1) != 0 )
          v4 = "speech_text_player_green";
        else
          v4 = "speech_text_player_red";
        if ( (unsigned int)(*((_DWORD *)a2 + 18) - 1) <= 5 )
          v5 = v4;
        else
          v5 = "speech_text_player_green";
      }
      else
      {
        v5 = "speech_text_player_green";
      }
      String::String(&v9, "sc/ui.sc");
      String::String(&v8, v5);
      MovieClip = StringTable::getMovieClip((#1308 *)&v9, &v8, v6);
      String::~String();
      String::~String();
      (*(void (__fastcall **)(AllianceEventStreamItem *, #1308 *, _QWORD))(*(_QWORD *)this + 280LL))(this, MovieClip, 0);
      *((_BYTE *)this + 64) = 1;
      *(_BYTE *)(*((_QWORD *)this + 12) + 64LL) = 1;
      *((float *)this + 70) = (*(float (__fastcall **)(AllianceEventStreamItem *))(*(_QWORD *)this + 96LL))(this);
    }

    void __fastcall AllianceEventStreamItem::refreshEntry(#1388 *this, #1168 *a2)
    {
      const char *v4; // x1
      const char *v5; // x1
      TextField *TextFieldByName; // x20
      unsigned int v7; // w8
      char *v8; // x0
      const String *String; // x0
      __int64 SenderName; // x0
      float v11; // s8
      Rect v12; // [xsp+8h] [xbp-B8h] BYREF
      float v13; // [xsp+10h] [xbp-B0h]
      String v14; // [xsp+18h] [xbp-A8h] BYREF
      String v15; // [xsp+30h] [xbp-90h] BYREF
      String v16; // [xsp+48h] [xbp-78h] BYREF
      String v17; // [xsp+60h] [xbp-60h] BYREF
      String v18; // [xsp+78h] [xbp-48h] BYREF
    
      StreamItem::refreshEntry((__int64)this, (__int64)a2);
      if ( (*(unsigned int (__fastcall **)(#1168 *))(*(_QWORD *)a2 + 32LL))(a2) == 4 )
      {
        TextFieldByName = (TextField *)MovieClip::getTextFieldByName(*((_QWORD *)this + 12), "text");
        v7 = *((_DWORD *)a2 + 18) - 1;
        if ( v7 > 5 )
          v8 = "<invalid type>";
        else
          v8 = off_10046AE80[v7];
        String = (const String *)StringTable::getString((#1308 *)v8, v5);
        String::String(&v18, String);
        String::String(&v16, "<target>");
        String::replace(&v17, &v18, &v16, *((_QWORD *)a2 + 8));
        String::operator=(&v18);
        String::~String();
        String::~String();
        String::String(&v14, "<sender>");
        SenderName = StreamEntry::getSenderName(a2);
        String::replace(&v15, &v18, &v14, SenderName);
        String::operator=(&v18);
        String::~String();
        String::~String();
        MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, &v18, 0);
        Rect::Rect(&v12);
        v11 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(TextField::getTextHeight(TextFieldByName)));
        TextField::getTextFieldBounds(TextFieldByName, (#1261 *)&v12);
        TextField::setBounds(TextFieldByName, *(float *)&v12.top, *(float *)&v12.bottom, v13, v11 + *(float *)&v12.bottom);
        Rect::~Rect(&v12);
        String::~String();
      }
      else
      {
        Debugger::warning((__siginfo *)"AllianceEventStreamItem::refreshEntry: invalid entry type", v4);
      }
      *((float *)this + 70) = (*(float (__fastcall **)(#1388 *))(*(_QWORD *)this + 96LL))(this);
    }

    // attributes: thunk
    void __fastcall AllianceEventStreamItem::~AllianceEventStreamItem(__int64 a1)
    {
      StreamItem::~StreamItem(a1);
    }

    void __fastcall AllianceEventStreamItem::~AllianceEventStreamItem(void *a1)
    {
      StreamItem::~StreamItem((__int64)a1);
      operator delete(a1);
    }

}; // end class AllianceEventStreamItem
