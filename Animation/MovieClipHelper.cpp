class MovieClipHelper
{
public:

    void __fastcall MovieClipHelper::setTextFieldVerticallyCentered(#1395 *this, #1271 *a2)
    {
      float v3; // s8
      long double Height; // q0
      float v5; // s8
      long double v6; // q0
      Rect v7; // [xsp+0h] [xbp-30h] BYREF
      float v8; // [xsp+8h] [xbp-28h]
      float v9; // [xsp+Ch] [xbp-24h]
    
      Rect::Rect(&v7);
      TextField::getTextFieldBounds(this, (#1261 *)&v7);
      v3 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(TextField::getTextHeight(this)));
      Height = Rect::getHeight(&v7);
      v5 = floorf(*(float *)&Height - v3);
      TextField::setBounds(this, *(float *)&v7.top, *(float *)&v7.bottom, v8, v9 - v5);
      v6 = DisplayObject::getY(this);
      DisplayObject::setY(this, *(float *)&v6 + floorf(v5 * 0.5));
      Rect::~Rect(&v7);
    }

    void __fastcall MovieClipHelper::setTextVerticallyCentered(#1395 *this, const String *a2, const String *a3)
    {
      #1271 *v5; // x1
    
      Debugger::doAssert((Debugger *)(this != 0), (bool)"", (const char *)a3);
      TextField::setText(this, a2);
      MovieClipHelper::setTextFieldVerticallyCentered(this, v5);
    }

    void __fastcall MovieClipHelper::scaleSingleLineText(TextField *a1, const char *a2)
    {
      __int64 StringObject; // x0
      const char *v4; // x1
      _QWORD *v5; // x8
      const String *v6; // x1
      const String *v7; // x1
      float v8; // s8
      float v9; // s0
      float v10; // s8
      int FontSize; // w0
      char v12; // [xsp+10h] [xbp-50h] BYREF
      char v13; // [xsp+28h] [xbp-38h] BYREF
    
      if ( a1 )
      {
        if ( (unsigned int)TextField::isMultiLine(a1) )
        {
          StringObject = TextField::getStringObject(a1);
          v5 = (_QWORD *)(StringObject + 8);
          if ( *(_DWORD *)(StringObject + 4) + 1 > 8 )
            v5 = (_QWORD *)*v5;
          String::format((String *)"StringTable: Trying to scale text field which is multiline. Text: %s", v4, v5);
          Debugger::warning((__siginfo *)&v13, v6);
          String::~String();
        }
        else
        {
          v8 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(TextField::getTextWidth(a1)));
          if ( v8 != 0.0 )
          {
            TextField::getTextFieldWidth(a1);
            if ( v8 <= v9 )
            {
              *((_BYTE *)a1 + 74) = 0;
            }
            else
            {
              v10 = v9 / v8;
              FontSize = TextField::getFontSize(a1);
              TextField::setFontSize(a1, (int)(float)(v10 * (float)FontSize));
              *((_BYTE *)a1 + 74) = 1;
            }
          }
        }
      }
      else
      {
        String::format((String *)"StringTable: Trying to scale null textfield.", a2);
        Debugger::warning((__siginfo *)&v12, v7);
        String::~String();
      }
    }

    // attributes: thunk
    #1375 *__fastcall MovieClipHelper::getUIMovieClip(ResourceManager *this, const String *a2, const String *a3)
    {
      return HomeScreen::getMovieClip(this, a2, a3);
    }

    void __fastcall MovieClipHelper::setTextAndScaleIfNecessary(__int64 a1, const String *a2, int a3)
    {
      int OriginalFontSize; // w8
      long double TextWidth; // q0
      float v8; // s8
      float v9; // s0
      float v10; // s9
      int FontSize; // w0
      float v12; // s9
      #1271 *v13; // x1
      float v14; // s0
      float v15; // s8
      int v16; // w21
      long double TextHeight; // q0
      int v18; // w21
      int v19; // w22
      long double v20; // q0
      internal_t *p_internal; // x8
      const String *v23; // x1
      char v24; // [xsp+8h] [xbp-48h] BYREF
    
      if ( a1 )
      {
        TextField::fetchFont((#1271 *)a1);
        OriginalFontSize = TextField::getOriginalFontSize((#1271 *)a1);
        if ( OriginalFontSize >= 1 )
          TextField::setFontSize((#1271 *)a1, OriginalFontSize);
        TextField::setText((#1271 *)a1, a2);
        if ( a2->m_length )
        {
          TextWidth = TextField::getTextWidth((TextField *)a1);
          v8 = *(float *)&TextWidth;
          TextField::getTextFieldWidth((#1271 *)a1);
          v10 = v9;
          if ( v8 > v9 )
          {
            FontSize = TextField::getFontSize((#1271 *)a1);
            TextField::setFontSize((#1271 *)a1, (int)(float)((float)FontSize * (float)(v10 / v8)));
            *(_BYTE *)(a1 + 74) = 1;
          }
          v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(TextField::getTextHeight((TextField *)a1)));
          TextField::getTextFieldHeight((#1271 *)a1);
          v15 = v14;
          if ( v12 <= v14 )
          {
            *(_BYTE *)(a1 + 74) = 0;
          }
          else
          {
            v16 = TextField::getFontSize((#1271 *)a1);
            TextHeight = TextField::getTextHeight((TextField *)a1);
            if ( *(float *)&TextHeight > v15 )
            {
              v18 = v16 - 1;
              v19 = 1;
              do
              {
                TextField::setFontSize((#1271 *)a1, v18);
                v20 = TextField::getTextHeight((TextField *)a1);
                --v18;
              }
              while ( *(float *)&v20 > v15 && v19++ < 30 );
            }
            *(_BYTE *)(a1 + 74) = 1;
          }
          if ( a3 )
            MovieClipHelper::setTextFieldVerticallyCentered((#1395 *)a1, v13);
        }
      }
      else
      {
        p_internal = &a2->internal;
        if ( a2->m_bytes + 1 > 8 )
          p_internal = (internal_t *)p_internal->pHeap;
        String::format((String *)"Trying to set %s into NULL TextField!", (const char *)a2, p_internal);
        Debugger::warning((__siginfo *)&v24, v23);
        String::~String();
      }
    }

    #1249 *__fastcall MovieClipHelper::replaceChildWithMovieClip(
            #1257 *a1,
            __int64 a2,
            ResourceManager *a3,
            const String *a4)
    {
      const char *v8; // x1
      const String *v9; // x2
      #1249 *ChildByName; // x20
      #1249 *MovieClip; // x19
      _QWORD *v12; // x8
      const String *v13; // x1
      String v15; // [xsp+8h] [xbp-48h] BYREF
    
      ChildByName = (#1249 *)MovieClip::getChildByName();
      if ( !ChildByName )
      {
        v12 = (_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
          v12 = (_QWORD *)*v12;
        String::format((String *)"MovieClipHelper::replaceChildWithMovieClip unable to find child with name %s!", v8, v12);
        Debugger::warning((__siginfo *)&v15, v13);
        String::~String();
        return 0;
      }
      MovieClip = (#1249 *)ResourceManager::getMovieClip(a3, a4, v9);
      if ( !MovieClip )
        return 0;
      MovieClip::changeTimelineChild(a1, ChildByName, MovieClip);
      (*(void (__fastcall **)(#1249 *))(*(_QWORD *)ChildByName + 8LL))(ChildByName);
      return MovieClip;
    }

    __int64 __fastcall MovieClipHelper::replaceChildWithMovieClipFit(
            #1257 *a1,
            __int64 a2,
            ResourceManager *a3,
            const String *a4)
    {
      const char *v8; // x1
      const String *v9; // x2
      #1249 *ChildByName; // x20
      __int64 MovieClip; // x19
      long double Width; // q0
      float v13; // s8
      long double v14; // q0
      float v15; // s0
      _QWORD *v16; // x8
      const String *v17; // x1
      long double Height; // q0
      float v19; // s8
      long double v20; // q0
      float v21; // s1
      float32x4_t v22; // q1
      long double v23; // q0
      long double v24; // q0
      long double v25; // q0
      float v27; // [xsp+10h] [xbp-A0h]
      float v28; // [xsp+20h] [xbp-90h]
      _BYTE v29[24]; // [xsp+30h] [xbp-80h] BYREF
      Rect v30; // [xsp+48h] [xbp-68h] BYREF
      float v31; // [xsp+50h] [xbp-60h]
      float v32; // [xsp+54h] [xbp-5Ch]
      __siginfo var58; // [xsp+58h] [xbp-58h] BYREF
    
      ChildByName = (#1249 *)MovieClip::getChildByName();
      if ( !ChildByName )
      {
        v16 = (_QWORD *)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
          v16 = (_QWORD *)*v16;
        String::format((String *)"MovieClipHelper::replaceChildWithMovieClip unable to find child with name %s!", v8, v16);
        Debugger::warning(&var58, v17);
        String::~String();
        return 0;
      }
      MovieClip = ResourceManager::getMovieClip(a3, a4, v9);
      if ( !MovieClip )
        return 0;
      Rect::Rect(&v30);
      DisplayObject::getBounds(ChildByName, 0, &v30);
      MovieClip::changeTimelineChild(a1, ChildByName, (#1249 *)MovieClip);
      Rect::Rect((Rect *)v29);
      DisplayObject::getBounds(MovieClip, 0, v29);
      Width = Rect::getWidth(v29);
      if ( *(float *)&Width <= 0.0 )
      {
        v15 = 1.0;
      }
      else
      {
        v13 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(&v30)));
        v14 = Rect::getWidth(v29);
        v15 = v13 / *(float *)&v14;
      }
      v28 = v15;
      Height = Rect::getHeight(v29);
      if ( *(float *)&Height <= 0.0 )
      {
        v21 = 1.0;
      }
      else
      {
        v19 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getHeight(&v30)));
        v20 = Rect::getHeight(v29);
        v21 = v19 / *(float *)&v20;
      }
      v27 = v21;
      Matrix2x3::scaleMultiply((#1256 *)(MovieClip + 16), v28, v21);
      v22.i64[0] = __PAIR64__(LODWORD(v27), LODWORD(v28));
      v22.i64[1] = __PAIR64__(LODWORD(v27), LODWORD(v28));
      *(float32x4_t *)v29 = vmulq_f32(v22, *(float32x4_t *)v29);
      v23 = DisplayObject::getX(MovieClip);
      DisplayObject::setX((#1249 *)MovieClip, *(float *)&v23 + (float)(v31 - *(float *)&v29[8]));
      v24 = DisplayObject::getY(MovieClip);
      *(__n128 *)&v25 = DisplayObject::setY((DisplayObject *)MovieClip, *(float *)&v24 + (float)(v32 - *(float *)&v29[12]));
      (*(void (__fastcall **)(#1249 *, long double))(*(_QWORD *)ChildByName + 8LL))(ChildByName, v25);
      Rect::~Rect((Rect *)v29);
      Rect::~Rect(&v30);
      return MovieClip;
    }

    void __fastcall MovieClipHelper::alignChildrenToBounds(__int64 a1, const String *a2)
    {
      int TimelineChildCount; // w0
      __int64 v5; // x21
      const char *TimelineChildInstanceName; // x8
      MovieClipHelper *TimelineChild; // x0
      const Rect *v8; // x3
      int v9; // w8
      String v10; // [xsp+8h] [xbp-38h] BYREF
    
      TimelineChildCount = MovieClip::getTimelineChildCount();
      v5 = (unsigned int)(TimelineChildCount - 1);
      if ( TimelineChildCount >= 1 )
      {
        do
        {
          TimelineChildInstanceName = (const char *)MovieClip::getTimelineChildInstanceName(a1, v5);
          if ( TimelineChildInstanceName )
          {
            String::String(&v10, TimelineChildInstanceName);
            if ( v10.m_length )
            {
              TimelineChild = (MovieClipHelper *)MovieClip::getTimelineChild(a1, v5);
              MovieClipHelper::alignToBounds(TimelineChild, (DisplayObject *)&v10, a2, v8);
            }
            String::~String();
          }
          v9 = v5 + 1;
          v5 = (unsigned int)(v5 - 1);
        }
        while ( v9 > 1 );
      }
    }

    void __fastcall MovieClipHelper::alignToBounds(#1249 *a1, __int64 a2, float *a3)
    {
      __int64 v6; // x0
      const char *v7; // x1
      int v8; // w8
      float MidX; // s8
      float v10; // s0
      float v11; // s0
      float v12; // s1
      float v13; // s0
      long double MidY; // q0
      String v15; // [xsp+8h] [xbp-178h] BYREF
      String v16; // [xsp+20h] [xbp-160h] BYREF
      String v17; // [xsp+38h] [xbp-148h] BYREF
      String v18; // [xsp+50h] [xbp-130h] BYREF
      String v19; // [xsp+68h] [xbp-118h] BYREF
      String v20; // [xsp+80h] [xbp-100h] BYREF
      String v21; // [xsp+98h] [xbp-E8h] BYREF
      String v22; // [xsp+B0h] [xbp-D0h] BYREF
      String v23; // [xsp+C8h] [xbp-B8h] BYREF
      String v24; // [xsp+E0h] [xbp-A0h] BYREF
      String v25; // [xsp+F8h] [xbp-88h] BYREF
      String v26; // [xsp+110h] [xbp-70h] BYREF
      String v27; // [xsp+128h] [xbp-58h] BYREF
    
      if ( !qword_1004F8E80 )
      {
        String::String(&v27, "left_top");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v27) = 20;
        String::~String();
        String::String(&v26, "top");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v26) = 16;
        String::~String();
        String::String(&v25, "right_top");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v25) = 24;
        String::~String();
        String::String(&v24, "left");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v24) = 4;
        String::~String();
        String::String(&v23, "center");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v23) = 3;
        String::~String();
        String::String(&v22, "right");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v22) = 8;
        String::~String();
        String::String(&v21, "left_bottom");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v21) = 36;
        String::~String();
        String::String(&v20, "bottom");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v20) = 32;
        String::~String();
        String::String(&v19, "right_bottom");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v19) = 40;
        String::~String();
        String::String(&v18, "top_center");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v18) = 17;
        String::~String();
        String::String(&v17, "left_center");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v17) = 6;
        String::~String();
        String::String(&v16, "right_center");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v16) = 10;
        String::~String();
        String::String(&v15, "bottom_center");
        *(_DWORD *)std::map<String,Align::Enum>::operator[](&s_alignMap, &v15) = 33;
        String::~String();
        s_alignMapEnd = (__int64)&qword_1004F8E60;
      }
      v6 = std::_Rb_tree<String,std::pair<String const,Align::Enum>,std::_Select1st<std::pair<String const,Align::Enum>>,std::less<String>,std::allocator<std::pair<String const,Align::Enum>>>::find(
             &s_alignMap,
             a2);
      if ( v6 != s_alignMapEnd )
      {
        v8 = *(_DWORD *)(v6 + 56);
        if ( v8 <= 31 )
        {
          switch ( v8 )
          {
            case 3:
              MidX = Rect::getMidX(a3);
              goto LABEL_19;
            case 4:
              v13 = *a3;
              goto LABEL_17;
            case 6:
              MidX = *a3;
              goto LABEL_19;
            case 8:
              v13 = a3[2];
    LABEL_17:
              DisplayObject::setX(a1, v13);
              return;
            case 10:
              MidX = a3[2];
    LABEL_19:
              MidY = Rect::getMidY(a3);
              DisplayObject::setXY(a1, MidX, *(float *)&MidY);
              return;
            case 16:
              v10 = a3[1];
              goto LABEL_21;
            case 17:
              v11 = Rect::getMidX(a3);
              goto LABEL_24;
            case 20:
              v11 = *a3;
    LABEL_24:
              v12 = a3[1];
              goto LABEL_26;
            case 24:
              v12 = a3[1];
              v11 = a3[2];
              goto LABEL_26;
            default:
              goto LABEL_9;
          }
        }
        switch ( v8 )
        {
          case ' ':
            v10 = a3[3];
    LABEL_21:
            DisplayObject::setY(a1, v10);
            return;
          case '!':
            v11 = Rect::getMidX(a3);
            goto LABEL_13;
          case '$':
            v11 = *a3;
            goto LABEL_13;
          case '(':
            v11 = a3[2];
    LABEL_13:
            v12 = a3[3];
    LABEL_26:
            DisplayObject::setXY(a1, v11, v12);
            break;
          default:
    LABEL_9:
            Debugger::error((__siginfo *)"alignChildrenToBounds: switch case or align map is broken!", v7);
            return;
        }
      }
    }

    void __fastcall MovieClipHelper::moveIconNextToText(__int64 a1, #1249 *a2, int a3, float a4)
    {
      int Align; // w0
      long double TextWidth; // q0
      long double v10; // q0
      float v11; // s9
      float MidX; // s0
      float v13; // s9
      float v14; // s0
      Rect v15; // [xsp+0h] [xbp-50h] BYREF
      float v16; // [xsp+8h] [xbp-48h]
      Rect v17; // [xsp+10h] [xbp-40h] BYREF
      float v18; // [xsp+18h] [xbp-38h]
    
      Rect::Rect(&v17);
      DisplayObject::getBounds(a1, *(_QWORD *)(a1 + 48), &v17);
      Rect::Rect(&v15);
      DisplayObject::getBounds(a2, 0, &v15);
      Align = TextField::getAlign((#1271 *)a1);
      if ( a3 )
      {
        if ( Align )
        {
          if ( Align == 1 )
          {
            TextWidth = TextField::getTextWidth((TextField *)a1);
            DisplayObject::setX(a2, (float)((float)(v18 - *(float *)&TextWidth) - v16) - a4);
          }
          else if ( Align == 2 )
          {
            v11 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(TextField::getTextWidth((TextField *)a1)));
            MidX = Rect::getMidX(&v17);
            DisplayObject::setX(a2, (float)((float)(MidX + (float)(v11 * -0.5)) - v16) - a4);
          }
        }
        else
        {
          DisplayObject::setX(a2, (float)(*(float *)&v17.top - v16) - a4);
        }
      }
      else if ( Align )
      {
        if ( Align == 1 )
        {
          DisplayObject::setX(a2, (float)(v18 - *(float *)&v15.top) + a4);
        }
        else if ( Align == 2 )
        {
          v13 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(TextField::getTextWidth((TextField *)a1)));
          v14 = Rect::getMidX(&v17);
          DisplayObject::setX(a2, (float)((float)((float)(v13 * 0.5) + v14) - *(float *)&v15.top) + a4);
        }
      }
      else
      {
        v10 = TextField::getTextWidth((TextField *)a1);
        DisplayObject::setX(a2, (float)((float)(*(float *)&v10 + *(float *)&v17.top) - *(float *)&v15.top) + a4);
      }
      Rect::~Rect(&v15);
      Rect::~Rect(&v17);
    }

    __int64 __fastcall MovieClipHelper::setGoldPriceText(#1395 *this, #1271 *a2, int a3, #1271 *a4, const char *a5)
    {
      LogicKickAllianceMemberCommand *PlayerAvatar; // x23
      const #1355 *GoldData; // x0
      int v11; // w8
      __int64 result; // x0
      const char *v13; // x2
    
      GameMode::getInstance();
      PlayerAvatar = (LogicKickAllianceMemberCommand *)GameMode::getPlayerAvatar();
      GoldData = (const #1355 *)LogicDataTables::getGoldData(PlayerAvatar);
      if ( LogicClientAvatar::hasEnoughResources(PlayerAvatar, GoldData, (__int64)a2, 0, 0, 0) )
        v11 = a3;
      else
        v11 = -65536;
      *((_DWORD *)this + 16) = v11;
      result = TextField::setNumberText(this, (int)a2, 1);
      if ( a4 )
        return MovieClipHelper::centerAmountTextField(this, a4, v13);
      return result;
    }

    #1271 *__fastcall MovieClipHelper::centerAmountTextField(#1395 *this, #1271 *a2, const char *a3)
    {
      #1271 *result; // x0
      long double v6; // q0
      #1249 *v7; // x2
    
      result = (#1271 *)(*(__int64 (__fastcall **)(_QWORD, #1271 *, const char *))(**((_QWORD **)this + 6) + 120LL))(
                          *((_QWORD *)this + 6),
                          a2,
                          a3);
      if ( (_DWORD)result )
      {
        result = (#1271 *)MovieClip::getChildByName(*((_QWORD *)this + 6), a2, v6);
        if ( result )
          return (#1271 *)MovieClipHelper::centerAmountTextField(this, result, v7);
      }
      return result;
    }

    #1271 *__fastcall MovieClipHelper::setDiamondPriceText(#1395 *this, #1271 *a2, int a3, #1271 *a4, const char *a5)
    {
      int v7; // w21
      tween::Bounce *PlayerAvatar; // x23
      const char *v10; // x2
      const char *v11; // x1
      int v12; // w8
      #1271 *result; // x0
      const char *v14; // x2
      const String *String; // x0
    
      v7 = (int)a2;
      GameMode::getInstance();
      PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar();
      Debugger::doAssert((Debugger *)(PlayerAvatar != 0), (bool)"setDiamondPriceText: avatar is null", v10);
      if ( LogicClientAvatar::hasEnoughDiamonds(PlayerAvatar, v7, 0) )
        v12 = a3;
      else
        v12 = -65536;
      *((_DWORD *)this + 16) = v12;
      if ( v7 )
      {
        result = (#1271 *)TextField::setNumberText(this, v7, 1);
      }
      else
      {
        String = (const String *)StringTable::getString((#1308 *)"TID_DIAMOND_BUTTON_FREE", v11);
        result = (#1271 *)TextField::setText(this, String);
      }
      if ( a4 )
        return MovieClipHelper::centerAmountTextField(this, a4, v14);
      return result;
    }

    void __fastcall MovieClipHelper::setPriceText(
            #1395 *this,
            #1271 *a2,
            #1249 *a3,
            LogicKickAllianceMemberCommand *a4,
            const #1355 *a5)
    {
      LogicKickAllianceMemberCommand *DiamondData; // x0
      const char *v10; // x4
      const char *v11; // x4
    
      DiamondData = (LogicKickAllianceMemberCommand *)LogicDataTables::getDiamondData(this);
      if ( DiamondData == a4 )
      {
        MovieClipHelper::setDiamondPriceText(this, a3, -1, 0, v10);
      }
      else if ( (LogicKickAllianceMemberCommand *)LogicDataTables::getGoldData(DiamondData) == a4 )
      {
        MovieClipHelper::setGoldPriceText(this, a3, -1, 0, v11);
      }
      MovieClipHelper::moveIconNextToText((__int64)this, a2, 0, 5.0);
    }

    void __fastcall MovieClipHelper::centerAmountTextField(#1395 *this, #1271 *a2, #1249 *a3)
    {
      __int64 v5; // x21
      float v6; // s8
      long double TextWidth; // q0
      float v8; // s8
      long double v9; // q0
      float v10; // s8
      long double v11; // q0
      Rect v12; // [xsp+0h] [xbp-50h] BYREF
      float v13; // [xsp+8h] [xbp-48h]
      Rect v14; // [xsp+10h] [xbp-40h] BYREF
      float v15; // [xsp+18h] [xbp-38h]
    
      if ( (*(unsigned int (__fastcall **)(_QWORD, #1271 *, #1249 *))(**((_QWORD **)this + 6) + 120LL))(
             *((_QWORD *)this + 6),
             a2,
             a3) )
      {
        v5 = *((_QWORD *)this + 6);
        Rect::Rect(&v14);
        DisplayObject::getBounds(a2, v5, &v14);
        Rect::Rect(&v12);
        DisplayObject::getBounds(this, v5, &v12);
        v6 = v13;
        TextWidth = TextField::getTextWidth(this);
        v8 = (float)((float)((float)(v15 - (float)(v6 - *(float *)&TextWidth)) * -0.5) + 0.0)
           - (float)(v6 - *(float *)&TextWidth);
        v9 = DisplayObject::getX(a2);
        v10 = floorf(v8);
        DisplayObject::setX(a2, floorf(v10 + *(float *)&v9));
        v11 = DisplayObject::getX(this);
        DisplayObject::setX(this, floorf(v10 + *(float *)&v11));
        Rect::~Rect(&v12);
        Rect::~Rect(&v14);
      }
    }

    __int64 __fastcall MovieClipHelper::setHitAreaIfFound(#1395 *this, #1257 *a2)
    {
      __int64 result; // x0
      __int64 v4; // x21
      Rect *v5; // x20
    
      result = MovieClip::getTextFieldByName(this, "hit_area");
      v4 = result;
      if ( result )
      {
        v5 = (Rect *)operator new(16);
        Rect::Rect(v5);
        DisplayObject::getBounds(v4, this, v5);
        return Sprite::setHitArea(this, (#1261 *)v5);
      }
      return result;
    }

}; // end class MovieClipHelper
