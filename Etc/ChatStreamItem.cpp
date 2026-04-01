class ChatStreamItem
{
public:

    void __fastcall ChatStreamItem::ChatStreamItem(ChatStreamItem *this, #1168 *a2)
    {
      AllianceStream *SenderAvatarId; // x0
      const LogicLong *v5; // x1
      int isMyAvatarId; // w20
      const char *v7; // x1
      const char *v8; // x1
      const char *v9; // x1
      const String *v10; // x2
      __int64 MovieClipByName; // x20
      String v12; // [xsp+0h] [xbp-70h] BYREF
      String v13; // [xsp+18h] [xbp-58h] BYREF
      String v14; // [xsp+30h] [xbp-40h] BYREF
      String v15; // [xsp+48h] [xbp-28h] BYREF
    
      StreamItem::StreamItem((__int64)this);
      *(_QWORD *)this = off_10046A1F8;
      *((_QWORD *)this + 33) = &off_10046A3A0;
      SenderAvatarId = (AllianceStream *)StreamEntry::getSenderAvatarId(a2);
      isMyAvatarId = AllianceStream::isMyAvatarId(SenderAvatarId, v5);
      if ( isMyAvatarId )
        v7 = "speech_bubble_top_player_01";
      else
        v7 = "speech_bubble_top_player_02";
      String::String(&v15, v7);
      if ( isMyAvatarId )
        v8 = "speech_bubble_bottom_player_01";
      else
        v8 = "speech_bubble_bottom_player_02";
      String::String(&v14, v8);
      StreamItem::init(this, &v15, &v14);
      String::~String();
      String::~String();
      String::String(&v13, "sc/ui.sc");
      if ( isMyAvatarId )
        v9 = "speech_bubble_text_player_01";
      else
        v9 = "speech_bubble_text_player_02";
      String::String(&v12, v9);
      *((_QWORD *)this + 36) = StringTable::getMovieClip((#1308 *)&v13, &v12, v10);
      String::~String();
      String::~String();
      *(_BYTE *)(*((_QWORD *)this + 36) + 64LL) = 1;
      (*(void (__fastcall **)(ChatStreamItem *))(*(_QWORD *)this + 160LL))(this);
      MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 36), "text_bg");
      (*(void (__fastcall **)(__int64, float))(*(_QWORD *)MovieClipByName + 56LL))(MovieClipByName, 1.0);
      *((float *)this + 88) = (*(float (__fastcall **)(__int64))(*(_QWORD *)MovieClipByName + 96LL))(MovieClipByName);
    }

    void __fastcall ChatStreamItem::refreshEntry(#1387 *this, #1168 *a2)
    {
      const char *v4; // x1
      #1271 *TextFieldByName; // x20
      int FontSize; // w0
      const String *Message; // x0
      Rect v8; // kr00_8
      float v9; // s10
      float v10; // s0
      long double TextHeight; // q0
      float v12; // s8
      DisplayObject *MovieClipByName; // x20
      float v14; // s8
      long double v15; // q0
      float v16; // s8
      long double v17; // q0
      float v18; // [xsp+0h] [xbp-60h]
      Rect v19; // [xsp+10h] [xbp-50h] BYREF
      float v20; // [xsp+18h] [xbp-48h]
    
      StreamItem::refreshEntry((__int64)this, (__int64)a2);
      if ( (*(unsigned int (__fastcall **)(#1168 *))(*(_QWORD *)a2 + 32LL))(a2) == 2 )
      {
        TextFieldByName = (#1271 *)MovieClip::getTextFieldByName(*((_QWORD *)this + 36), "text");
        if ( *(_DWORD *)ChatStreamEntry::getMessage(a2) == 1 )
        {
          FontSize = TextField::getFontSize(TextFieldByName);
          TextField::setFontSize(TextFieldByName, 2 * FontSize);
        }
        Message = (const String *)ChatStreamEntry::getMessage(a2);
        TextField::setText(TextFieldByName, Message);
        Rect::Rect(&v19);
        TextField::getTextFieldBounds(TextFieldByName, (#1261 *)&v19);
        v8 = v19;
        v9 = v20;
        TextField::getTextHeight(TextFieldByName);
        TextField::setBounds(TextFieldByName, *(float *)&v8.top, *(float *)&v8.bottom, v9, *(float *)&v8.bottom + v10);
        TextHeight = TextField::getTextHeight(TextFieldByName);
        v12 = *(float *)&TextHeight;
        MovieClipByName = (DisplayObject *)MovieClip::getMovieClipByName(*((#1257 **)this + 36), "text_bg");
        v14 = v12 + 10.0;
        (*(void (__fastcall **)(DisplayObject *, float))(*(_QWORD *)MovieClipByName + 56LL))(
          MovieClipByName,
          v14 / *((float *)this + 88));
        *(__n128 *)&v15 = DisplayObject::setY(MovieClipByName, v14 * 0.5);
        LODWORD(v18) = COERCE_UNSIGNED_INT128(
                         ((long double (__fastcall *)(_QWORD, long double))*(_QWORD *)(**((_QWORD **)this + 36) + 96LL))(
                           *((_QWORD *)this + 36),
                           v15));
        Rect::~Rect(&v19);
      }
      else
      {
        Debugger::warning((__siginfo *)"ChatStreamItem::refreshEntry: invalid entry type", v4);
        v18 = 0.0;
      }
      v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(((long double (__fastcall *)(_QWORD))*(_QWORD *)(**((_QWORD **)this + 12)
                                                                                               + 96LL))(*((_QWORD *)this + 12))));
      DisplayObject::setY(*((DisplayObject **)this + 36), v16);
      *(__n128 *)&v17 = DisplayObject::setY((DisplayObject *)*((_QWORD *)this + 37), v18 + v16);
      *((float *)this + 70) = (*(float (__fastcall **)(#1387 *, long double))(*(_QWORD *)this + 96LL))(this, v17);
    }

    // attributes: thunk
    void __fastcall ChatStreamItem::~ChatStreamItem(__int64 a1)
    {
      StreamItem::~StreamItem(a1);
    }

    void __fastcall ChatStreamItem::~ChatStreamItem(void *a1)
    {
      StreamItem::~StreamItem((__int64)a1);
      operator delete(a1);
    }

}; // end class ChatStreamItem
