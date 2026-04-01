class AchievementItem
{
public:

    void __fastcall AchievementItem::AchievementItem(AchievementItem *this, const #962 *a2, const #1351 *a3)
    {
      char *v6; // x19
      String *v7; // x0
      #1257 **v8; // x21
      const String *v9; // x2
      #1014 *v10; // x20
      void (__fastcall *v11)(#1014 *, __int64, __int64); // x22
      __int64 MovieClipByName; // x0
      MovieClip *v13; // x20
      const char *v14; // x1
      const String *String; // x0
      int v16; // w1
      __int64 Table; // x20
      __int64 i; // x23
      _DWORD *v19; // x24
      __int64 v20; // x8
      unsigned __int64 v21; // x22
      int v22; // w1
      char v23; // w27
      int v24; // w20
      unsigned __int64 v25; // x22
      MovieClip *v26; // x0
      #1308 *TID; // x0
      const String *v28; // x1
      const String *v29; // x0
      __int64 TextFieldByName; // x0
      #1308 *InfoTID; // x0
      const String *v32; // x1
      const String *v33; // x0
      int v34; // w1
      #1271 *v35; // x0
      #1395 *v36; // x0
      #1271 *v37; // x1
      MovieClip *v38; // x26
      int v39; // w20
      __int64 AchievementProgress; // x0
      const char *v41; // x1
      #1271 *v42; // x0
      int v43; // w9
      int v44; // w1
      int v45; // w20
      TextField *v46; // x0
      TextField *v47; // x0
      __int64 v48; // x0
      char isAvailableToClaim; // [xsp+20h] [xbp-170h]
      int isAchievementCompleted; // [xsp+24h] [xbp-16Ch]
      String v51; // [xsp+30h] [xbp-160h] BYREF
      String v52; // [xsp+48h] [xbp-148h] BYREF
      String v53; // [xsp+60h] [xbp-130h] BYREF
      String v54; // [xsp+78h] [xbp-118h] BYREF
      String v55; // [xsp+90h] [xbp-100h] BYREF
      String v56; // [xsp+A8h] [xbp-E8h] BYREF
      String v57; // [xsp+C0h] [xbp-D0h] BYREF
      String v58; // [xsp+D8h] [xbp-B8h] BYREF
      String v59; // [xsp+F0h] [xbp-A0h] BYREF
      __int64 v60; // [xsp+108h] [xbp-88h] BYREF
      String v61; // [xsp+110h] [xbp-80h] BYREF
      String v62; // [xsp+128h] [xbp-68h] BYREF
    
      *(_QWORD *)this = &off_10045E668;
      *((_QWORD *)this + 4) = 0;
      v6 = (char *)this + 32;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 6) = 0;
      v7 = String::String((String *)((char *)this + 56));
      *((_QWORD *)this + 2) = 0;
      v8 = (#1257 **)((char *)this + 16);
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 5) = *((_QWORD *)this + 4);
      *((_QWORD *)this + 1) = 0;
      String::operator=(v7, "");
      *((_QWORD *)this + 10) = a3;
      *((_QWORD *)this + 1) = a2;
      String::String(&v62, "sc/ui.sc");
      String::String(&v61, "achievement_item");
      *((_QWORD *)this + 2) = StringTable::getMovieClip((#1308 *)&v62, &v61, v9);
      String::~String(&v61);
      String::~String(&v62);
      *(_BYTE *)(*((_QWORD *)this + 2) + 64LL) = 1;
      v10 = (#1014 *)operator new(264);
      GameButton::GameButton(v10);
      *((_QWORD *)this + 3) = v10;
      v11 = *(void (__fastcall **)(#1014 *, __int64, __int64))(*(_QWORD *)v10 + 280LL);
      MovieClipByName = MovieClip::getMovieClipByName(*((#1257 **)this + 2), "claim_button");
      v11(v10, MovieClipByName, 1);
      CustomButton::setButtonListener(*((_QWORD *)this + 3), this);
      v13 = *(MovieClip **)(*((_QWORD *)this + 3) + 96LL);
      String = (const String *)StringTable::getString((#1308 *)"TID_ACHIEVEMENT_CLAIM", v14);
      MovieClip::setText(v13, "txt", String);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 160LL))(
        *((_QWORD *)this + 2),
        *((_QWORD *)this + 3));
      Table = LogicDataTables::getTable((LogicDataTables *)0x3C, v16);
      for ( i = 0; (int)i < (*(int (__fastcall **)(__int64))(*(_QWORD *)Table + 32LL))(Table); i = (unsigned int)(i + 1) )
      {
        v60 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Table + 40LL))(Table, i);
        if ( *((_DWORD *)a3 + 25) == *(_DWORD *)(v60 + 100) )
          std::vector<LogicAchievementData const*>::push_back(v6, &v60);
      }
      *(_BYTE *)(*((_QWORD *)this + 3) + 8LL) = AchievementItem::isAvailableToClaim(this);
      v19 = *(_DWORD **)(*((_QWORD *)this + 4) + 8LL * (int)AchievementItem::getVisibleLevel(this));
      isAchievementCompleted = LogicClientAvatar::isAchievementCompleted(*((_QWORD *)this + 1), v19);
      isAvailableToClaim = AchievementItem::isAvailableToClaim(this);
      v20 = *((_QWORD *)this + 4);
      v21 = *((_QWORD *)this + 5) - v20;
      v23 = LogicClientAvatar::isAchievementCompleted(
              *((_QWORD *)this + 1),
              *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFF8LL) + v20 - 8));
      v24 = 0;
      v25 = v21 >> 3;
      while ( v24 <= 2 )
      {
        String::valueOf(&v58, (String *)(unsigned int)(v24 + 1), v22);
        operator+(&v59, "star0", &v58);
        String::~String(&v58);
        v26 = (MovieClip *)MovieClip::getMovieClipByName(*v8, &v59);
        if ( (v23 & 1) != 0 || (int)v25 >= 2 && v24 < v19[29] )
          MovieClip::playOnce(v26);
        else
          MovieClip::stop(v26);
        String::~String(&v59);
        ++v24;
      }
      TID = (#1308 *)LogicData::getTID(a3);
      v29 = (const String *)StringTable::getString(TID, v28);
      String::String(&v57, v29);
      TextFieldByName = MovieClip::getTextFieldByName(*v8, "title");
      MovieClipHelper::setTextAndScaleIfNecessary(TextFieldByName, &v57, 0);
      InfoTID = (#1308 *)LogicAchievementData::getInfoTID(v19);
      v33 = (const String *)StringTable::getString(InfoTID, v32);
      String::String(&v56, v33);
      String::String(&v54, "<num>");
      String::valueOf(&v53, (String *)(unsigned int)v19[26], v34);
      String::replace(&v55, &v56, &v54, &v53);
      String::operator=(&v56);
      String::~String(&v55);
      String::~String(&v53);
      String::~String(&v54);
      v35 = (#1271 *)MovieClip::getTextFieldByName(*v8, "message");
      TextField::setText(v35, &v56);
      v36 = (#1395 *)MovieClip::getTextFieldByName(*v8, "message");
      MovieClipHelper::setTextFieldVerticallyCentered(v36, v37);
      v38 = (MovieClip *)MovieClip::getMovieClipByName(*v8, "progress");
      if ( v19[26] )
        v39 = (int)(99 * LogicClientAvatar::getAchievementProgress(a2, v19)) / v19[26];
      else
        v39 = 0;
      String::String(&v52);
      if ( (isAchievementCompleted & 1) == 0 )
      {
        AchievementProgress = LogicClientAvatar::getAchievementProgress(a2, v19);
        String::getFormatted((__int64 *)&v51.m_length, (String *)"%d/%d", v41, AchievementProgress, (unsigned int)v19[26]);
        String::operator=(&v52);
        String::~String(&v51);
      }
      v42 = (#1271 *)MovieClip::getTextFieldByName(*v8, "progress_txt");
      TextField::setText(v42, &v52);
      if ( isAchievementCompleted )
        v43 = 99;
      else
        v43 = v39;
      if ( v43 >= 99 )
        v44 = 99;
      else
        v44 = v43;
      MovieClip::gotoAndStopFrameIndex(v38, v44);
      v45 = v19[28];
      v46 = (TextField *)MovieClip::getTextFieldByName(*v8, "reward_count_01");
      TextField::setNumberText(v46, v45, 0);
      v47 = (TextField *)MovieClip::getTextFieldByName(*v8, "reward_count_02");
      TextField::setNumberText(v47, v19[27], 0);
      if ( isAchievementCompleted )
      {
        if ( (isAvailableToClaim & 1) == 0 )
        {
          *(_BYTE *)(*((_QWORD *)this + 3) + 8LL) = 0;
          *(_BYTE *)(MovieClip::getMovieClipByName(*((#1257 **)this + 2), "reward_icon_01") + 8) = 0;
          *(_BYTE *)(MovieClip::getMovieClipByName(*v8, "reward_icon_02") + 8) = 0;
          *(_BYTE *)(MovieClip::getTextFieldByName(*v8, "reward_count_01") + 8) = 0;
          *(_BYTE *)(MovieClip::getTextFieldByName(*v8, "reward_count_02") + 8) = 0;
          *(_BYTE *)(MovieClip::getTextFieldByName(*v8, "TID_REWARDS") + 8) = 0;
          *(_BYTE *)(MovieClip::getMovieClipByName(*v8, "complete") + 8) = 1;
          *((_BYTE *)v38 + 8) = 0;
          goto LABEL_31;
        }
        *(_BYTE *)(MovieClip::getMovieClipByName(*v8, "complete") + 8) = 0;
        v48 = MovieClip::getMovieClipByName(*v8, "progress");
      }
      else
      {
        *(_BYTE *)(*((_QWORD *)this + 3) + 8LL) = 0;
        v48 = MovieClip::getMovieClipByName(*((#1257 **)this + 2), "complete");
      }
      *(_BYTE *)(v48 + 8) = 0;
    LABEL_31:
      String::~String(&v52);
      String::~String(&v56);
      String::~String(&v57);
    }

    __int64 __fastcall AchievementItem::isAvailableToClaim(RemoveAvatarStreamEntryMessage *this)
    {
      __int64 v2; // x20
      int isAchievementCompleted; // w21
    
      v2 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * (int)AchievementItem::getVisibleLevel(this));
      isAchievementCompleted = LogicClientAvatar::isAchievementCompleted(*((_QWORD *)this + 1), v2);
      return isAchievementCompleted
           & ((unsigned int)LogicClientAvatar::getIsAchievementRewardClaimed(*((_QWORD *)this + 1), v2)
            ^ 1);
    }

    __int64 __fastcall AchievementItem::getVisibleLevel(RemoveAvatarStreamEntryMessage *this)
    {
      __int64 v2; // x8
      unsigned __int64 v3; // x9
      __int64 v4; // x20
    
      v2 = *((_QWORD *)this + 4);
      v3 = (unsigned __int64)(*((_QWORD *)this + 5) - v2) >> 3;
      if ( (int)v3 < 1 )
        return (unsigned int)(v3 - 1);
      v4 = 0;
      while ( (unsigned int)LogicClientAvatar::getIsAchievementRewardClaimed(
                              *((_QWORD *)this + 1),
                              *(_QWORD *)(v2 + 8 * v4)) )
      {
        ++v4;
        v2 = *((_QWORD *)this + 4);
        v3 = (unsigned __int64)(*((_QWORD *)this + 5) - v2) >> 3;
        if ( v4 >= (int)v3 )
          return (unsigned int)(v3 - 1);
      }
      return v4;
    }

    // attributes: thunk
    void __fastcall AchievementItem::AchievementItem(AchievementItem *this, const #962 *a2, const #1351 *a3)
    {
      __ZN15AchievementItemC2EPK17LogicClientAvatarPK20LogicAchievementData(this, a2, a3);
    }

    void __fastcall AchievementItem::~AchievementItem(RemoveAvatarStreamEntryMessage *this)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      void *v4; // x0
    
      *(_QWORD *)this = &off_10045E668;
      v2 = *((_QWORD *)this + 3);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 3) = 0;
      v3 = *((_QWORD *)this + 2);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 5) = *((_QWORD *)this + 4);
      *((_QWORD *)this + 1) = 0;
      String::operator=((char *)this + 56, "");
      *((_QWORD *)this + 10) = 0;
      String::~String((String *)((char *)this + 56));
      v4 = (void *)*((_QWORD *)this + 4);
      if ( v4 )
        operator delete(v4);
    }

    // attributes: thunk
    void __fastcall AchievementItem::~AchievementItem(RemoveAvatarStreamEntryMessage *this)
    {
      __ZN15AchievementItemD2Ev(this);
    }

    void __fastcall AchievementItem::~AchievementItem(RemoveAvatarStreamEntryMessage *this)
    {
      AchievementItem::~AchievementItem(this);
      operator delete(this);
    }

    __int64 __fastcall AchievementItem::containsData(__int64 a1, __int64 a2)
    {
      __int64 v2; // x8
      unsigned __int64 v3; // x10
      __int64 v4; // x9
    
      v2 = *(_QWORD *)(a1 + 32);
      v3 = (unsigned __int64)(*(_QWORD *)(a1 + 40) - v2) >> 3;
      if ( (int)v3 < 1 )
        return 0;
      v4 = 0;
      while ( *(_QWORD *)(v2 + 8 * v4) != a2 )
      {
        if ( ++v4 >= (int)v3 )
          return 0;
      }
      return 1;
    }

    __int64 __fastcall AchievementItem::getExpIcon(#1257 **this)
    {
      return MovieClip::getMovieClipByName(*(this + 2), "reward_icon_01");
    }

    __int64 __fastcall AchievementItem::getDiamondIcon(#1257 **this)
    {
      return MovieClip::getMovieClipByName(*(this + 2), "reward_icon_02");
    }

    #1251 **__fastcall AchievementItem::buttonClicked(#1251 **this, #1251 *a2)
    {
      #1251 **v2; // x19
      vm_address_t *VisibleLevel; // x0
      const LogicAchievementData *v4; // x21
      GameMode *Instance; // x19
      LogicClaimAchievementRewardCommand *v6; // x20
      const #916 *v7; // x2
      __int64 SoundByName; // x19
      String v9; // [xsp+8h] [xbp-38h] BYREF
    
      v2 = this;
      if ( *(this + 3) == a2 )
      {
        VisibleLevel = (vm_address_t *)AchievementItem::getVisibleLevel((RemoveAvatarStreamEntryMessage *)this);
        v4 = (const LogicAchievementData *)*((_QWORD *)v2[4] + (int)VisibleLevel);
        Instance = (GameMode *)GameMode::getInstance(VisibleLevel);
        v6 = (LogicClaimAchievementRewardCommand *)operator new(40);
        LogicClaimAchievementRewardCommand::LogicClaimAchievementRewardCommand(v6, v4);
        GameMode::addCommand(Instance, v6, 1);
        String::String(&v9, "Claim Achievement");
        SoundByName = LogicDataTables::getSoundByName((#1004 *)&v9, 0, v7);
        String::~String(&v9);
        return (#1251 **)SoundManager::playSound(
                           SoundManager::sm_pInstance,
                           SoundByName,
                           0xFFFFFFFFLL,
                           1.0,
                           COERCE_LONG_DOUBLE((unsigned __int128)0));
      }
      return this;
    }

    __int64 __fastcall AchievementItem::getAnalyticsName(RemoveAvatarStreamEntryMessage *this)
    {
      return (__int64)this + 56;
    }

}; // end class AchievementItem
