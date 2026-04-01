class NewItemIndicators
{
public:

    void __fastcall NewItemIndicators::saveLastSeenRoyalTvIds(__int64 a1, int a2)
    {
      const String *v2; // x2
      String v3; // [xsp+0h] [xbp-40h] BYREF
      String v4; // [xsp+18h] [xbp-28h] BYREF
    
      if ( NewItemIndicators::sm_lastSeenTvId != -1 )
      {
        String::valueOf(&v4, (String *)(unsigned int)NewItemIndicators::sm_lastSeenTvId, a2);
        String::String(&v3, "tvVal");
        Application::storeKeyValue((Application *)&v3, &v4, v2);
        String::~String(&v3);
        String::~String(&v4);
      }
    }

    void NewItemIndicators::loadLastSeenRoyalTvIds()
    {
      const String *v0; // x1
      int exists; // w19
      const String *v2; // x1
      const char *v3; // x1
      internal_t *pHeap; // x0
      String v5; // [xsp+8h] [xbp-58h] BYREF
      String v6; // [xsp+20h] [xbp-40h] BYREF
      String v7; // [xsp+38h] [xbp-28h] BYREF
    
      String::String(&v7, "tvVal");
      exists = Application::existsKeyValue((Application *)&v7, v0);
      String::~String(&v7);
      if ( exists )
      {
        String::String(&v5, "tvVal");
        Application::getKeyValue((Application *)&v5, v2);
        String::~String(&v5);
        if ( v6.m_bytes + 1 > 8 )
          pHeap = (internal_t *)v6.internal.pHeap;
        else
          pHeap = &v6.internal;
        NewItemIndicators::sm_lastSeenTvId = Utility::atoi((Utility *)pHeap, v3);
        String::~String(&v6);
      }
    }

    void __fastcall NewItemIndicators::saveLastSeenInboxIds(__int64 a1, int a2)
    {
      int v2; // w1
      const String *v3; // x2
      const String *v4; // x2
      String v5; // [xsp+0h] [xbp-70h] BYREF
      String v6; // [xsp+18h] [xbp-58h] BYREF
      String v7; // [xsp+30h] [xbp-40h] BYREF
      String v8; // [xsp+48h] [xbp-28h] BYREF
    
      if ( NewItemIndicators::sm_lastReadInboxIdHigh != -1 )
      {
        String::valueOf(&v8, (String *)(unsigned int)NewItemIndicators::sm_lastReadInboxIdHigh, a2);
        String::valueOf(&v7, (String *)(unsigned int)NewItemIndicators::sm_lastReadInboxIdLow, v2);
        String::String(&v6, "InboxLastReadH");
        Application::storeKeyValue((Application *)&v6, &v8, v3);
        String::~String(&v6);
        String::String(&v5, "InboxLastReadL");
        Application::storeKeyValue((Application *)&v5, &v7, v4);
        String::~String(&v5);
        String::~String(&v7);
        String::~String(&v8);
      }
    }

    void NewItemIndicators::loadLastSeenInboxIds()
    {
      const String *v0; // x1
      const String *v1; // x1
      int exists; // w19
      const String *v3; // x1
      const String *v4; // x1
      const char *v5; // x1
      Utility *v6; // x0
      String *v7; // x0
      const char *v8; // x1
      internal_t *pHeap; // x0
      String v10; // [xsp+0h] [xbp-A0h] BYREF
      String v11; // [xsp+18h] [xbp-88h] BYREF
      String v12; // [xsp+30h] [xbp-70h] BYREF
      char v13; // [xsp+48h] [xbp-58h] BYREF
      int v14; // [xsp+4Ch] [xbp-54h]
      #1209 *v15; // [xsp+50h] [xbp-50h] BYREF
      String v16; // [xsp+60h] [xbp-40h] BYREF
      String v17; // [xsp+78h] [xbp-28h] BYREF
    
      String::String(&v17, "InboxLastReadH");
      if ( (Application::existsKeyValue((Application *)&v17, v0) & 1) != 0 )
      {
        String::String(&v16, "InboxLastReadL");
        exists = Application::existsKeyValue((Application *)&v16, v1);
        String::~String(&v16);
        String::~String(&v17);
        if ( !exists )
          return;
        String::String(&v12, "InboxLastReadH");
        Application::getKeyValue((Application *)&v12, v3);
        String::~String(&v12);
        String::String(&v10, "InboxLastReadL");
        Application::getKeyValue((Application *)&v10, v4);
        String::~String(&v10);
        if ( v14 + 1 > 8 )
          v6 = v15;
        else
          v6 = (Utility *)&v15;
        NewItemIndicators::sm_lastReadInboxIdHigh = Utility::atoi(v6, v5);
        if ( v11.m_bytes + 1 > 8 )
          pHeap = (internal_t *)v11.internal.pHeap;
        else
          pHeap = &v11.internal;
        NewItemIndicators::sm_lastReadInboxIdLow = Utility::atoi((Utility *)pHeap, v8);
        String::~String(&v11);
        v7 = (String *)&v13;
      }
      else
      {
        v7 = &v17;
      }
      String::~String(v7);
    }

    void NewItemIndicators::removeLastSeenInboxIds()
    {
      const String *v0; // x1
      const String *v1; // x1
      String v2; // [xsp+0h] [xbp-40h] BYREF
      String v3; // [xsp+18h] [xbp-28h] BYREF
    
      *(_QWORD *)&NewItemIndicators::sm_lastReadInboxIdHigh = 0xFFFFFFFFLL;
      String::String(&v3, "InboxLastReadH");
      Application::removeKeyValue((Application *)&v3, v0);
      String::~String(&v3);
      String::String(&v2, "InboxLastReadL");
      Application::removeKeyValue((Application *)&v2, v1);
      String::~String(&v2);
    }

    __int64 __fastcall NewItemIndicators::getNewMessageCount(#1311 *a1)
    {
      LogicLong *v1; // x19
      __int64 v2; // x20
      __int64 v3; // x8
      __int64 v4; // x21
      __int64 v5; // x22
      #1077 *Id; // x0
      const #1236 *v7; // x2
      __int64 v9; // [xsp+8h] [xbp-38h] BYREF
      __int64 v10; // [xsp+10h] [xbp-30h]
    
      NewItemIndicators::getInboxItems(&v9, a1);
      v1 = (LogicLong *)operator new(8);
      LogicLong::LogicLong(v1, NewItemIndicators::sm_lastReadInboxIdHigh, NewItemIndicators::sm_lastReadInboxIdLow);
      v2 = 0;
      v3 = v9;
      v4 = 8;
      if ( (int)((unsigned __int64)(v10 - v9) >> 4) >= 1 )
      {
        v5 = 0;
        do
        {
          Id = (#1077 *)AvatarStreamEntry::getId(*(LogicStartMatchmakeCommand **)(v3 + v4));
          if ( (int)AllianceStream::compareLongs(Id, v1, v7) <= 0 )
            v2 = (unsigned int)v2;
          else
            v2 = (unsigned int)(v2 + 1);
          ++v5;
          v3 = v9;
          v4 += 16;
        }
        while ( v5 < (int)((unsigned __int64)(v10 - v9) >> 4) );
      }
      operator delete(v1);
      std::vector<InboxItem>::~vector(&v9);
      return v2;
    }

    __int64 *__usercall NewItemIndicators::getInboxItems@<X0>(__int64 *__return_ptr a1@<X8>, __int64 *this@<X0>)
    {
      LogicClientGlobals *v3; // x20
      __int64 Instance; // x0
      int i; // w21
      LogicStartMatchmakeCommand *EntryByIdx; // x22
      vm_address_t *isRemoved; // x0
      __int64 v8; // x0
      tween::Bounce *PlayerAvatar; // x0
      LogicStartMatchmakeCommand *AllianceId; // x0
      bool v11; // w3
      _OWORD *v12; // x1
      __int128 v13; // [xsp+0h] [xbp-30h] BYREF
    
      a1[1] = 0;
      a1[2] = 0;
      *a1 = 0;
      v3 = (LogicClientGlobals *)AvatarStreamManager::sm_pInstance;
      a1[1] = 0;
      if ( v3 )
      {
        this = (__int64 *)GameMode::getInstance((vm_address_t *)this);
        if ( this )
        {
          Instance = GameMode::getInstance((vm_address_t *)this);
          this = (__int64 *)GameMode::getPlayerAvatar(Instance);
          if ( this )
          {
            for ( i = 0; i < (int)AvatarStreamManager::getEntryCnt(v3); ++i )
            {
              EntryByIdx = (LogicStartMatchmakeCommand *)AvatarStreamManager::getEntryByIdx(v3, i);
              isRemoved = (vm_address_t *)AvatarStreamEntry::isRemoved(EntryByIdx);
              if ( ((unsigned __int8)isRemoved & 1) == 0 )
              {
                v8 = GameMode::getInstance(isRemoved);
                PlayerAvatar = (tween::Bounce *)GameMode::getPlayerAvatar(v8);
                AllianceId = (LogicStartMatchmakeCommand *)LogicClientAvatar::getAllianceId(PlayerAvatar);
                if ( (unsigned int)NewItemIndicators::isInboxEntry(EntryByIdx, AllianceId, 0, v11) )
                {
                  InboxItem::InboxItem((InboxItem *)&v13, EntryByIdx);
                  v12 = (_OWORD *)a1[1];
                  if ( v12 == (_OWORD *)a1[2] )
                  {
                    std::vector<InboxItem>::_M_insert_aux(a1);
                  }
                  else
                  {
                    *v12 = v13;
                    a1[1] += 16;
                  }
                  InboxItem::~InboxItem((LogicCollectMultiWinChestCommand *)&v13);
                }
              }
            }
            return NewItemIndicators::filterInboxItems(a1);
          }
        }
      }
      return this;
    }

    __int64 __fastcall NewItemIndicators::isInboxEntry(#1311 *this, LogicStartMatchmakeCommand *a2, const #1236 *a3)
    {
      char v3; // w21
      int v6; // w0
      __int64 result; // x0
      __int64 AllianceId; // x8
      __int64 v10; // x0
    
      v3 = (char)a3;
      v6 = (*(__int64 (__fastcall **)(#1311 *))(*(_QWORD *)this + 32LL))(this);
      if ( (v6 & 0xFFFFFFFE) == 4 )
        return 1;
      if ( v6 == 3 || v6 == 9 )
        return 1;
      if ( v6 != 6 )
        return 0;
      if ( (v3 & 1) != 0 )
        return 1;
      AllianceId = AllianceMailAvatarStreamEntry::getAllianceId(this);
      result = 0;
      if ( a2 )
      {
        if ( AllianceId )
        {
          v10 = AllianceMailAvatarStreamEntry::getAllianceId(this);
          return LogicLong::equals(a2, v10);
        }
      }
      return result;
    }

    _QWORD *__fastcall NewItemIndicators::filterInboxItems(_QWORD *result)
    {
      _QWORD *v1; // x19
      _BYTE *v2; // x8
      _BYTE *v3; // x20
      _BYTE *v4; // x25
      SearchAlliancesMessage *v5; // x21
      _BYTE *v6; // x26
      SearchAlliancesMessage *v7; // x22
      __int64 AllianceId; // x23
      __int64 v9; // x0
      _BYTE *v10; // x9
      bool v11; // zf
    
      v1 = result;
      v3 = (_BYTE *)*result;
      v2 = (_BYTE *)result[1];
      if ( (_BYTE *)*result != v2 )
      {
        do
        {
          result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 1) + 32LL))(*((_QWORD *)v3 + 1));
          if ( (_DWORD)result == 4 )
          {
            v4 = v3 + 16;
            v2 = (_BYTE *)v1[1];
            if ( v3 + 16 != v2 )
            {
              v5 = (SearchAlliancesMessage *)*((_QWORD *)v3 + 1);
              v6 = v3 + 16;
              do
              {
                result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 3) + 32LL))(*((_QWORD *)v3 + 3));
                if ( (_DWORD)result == 4 )
                {
                  v7 = (SearchAlliancesMessage *)*((_QWORD *)v3 + 3);
                  result = (_QWORD *)AllianceInvitationAvatarStreamEntry::getAllianceId(v5);
                  if ( result )
                  {
                    result = (_QWORD *)AllianceInvitationAvatarStreamEntry::getAllianceId(v7);
                    if ( result )
                    {
                      AllianceId = AllianceInvitationAvatarStreamEntry::getAllianceId(v5);
                      v9 = AllianceInvitationAvatarStreamEntry::getAllianceId(v7);
                      result = (_QWORD *)LogicLong::equals(AllianceId, v9);
                      if ( (_DWORD)result )
                        *v6 = 1;
                    }
                  }
                }
                v10 = v3 + 32;
                v2 = (_BYTE *)v1[1];
                v11 = v3 + 32 == v2;
                v3 = v6;
                v6 = v10;
              }
              while ( !v11 );
            }
          }
          else
          {
            v2 = (_BYTE *)v1[1];
            v4 = v3 + 16;
          }
          v3 = v4;
        }
        while ( v4 != v2 );
        v3 = (_BYTE *)*v1;
      }
      while ( v3 != v2 )
      {
        if ( *v3 )
        {
          result = (_QWORD *)std::vector<InboxItem>::erase(v1, v3);
          v3 = result;
          v2 = (_BYTE *)v1[1];
        }
        else
        {
          v3 += 16;
        }
      }
      return result;
    }

}; // end class NewItemIndicators
