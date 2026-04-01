class RoyalTvManager
{
public:

    __int64 __fastcall RoyalTvManager::getEntryWithHighestRunningId(__int64 a1)
    {
      __int64 v2; // x8
      __int64 v3; // x19
      unsigned __int64 v4; // x9
      unsigned int v5; // w21
      int RunningId; // w0
    
      v2 = *(_QWORD *)(a1 + 8);
      v3 = 0xFFFFFFFFLL;
      if ( *(_QWORD *)(a1 + 16) != v2 )
      {
        v4 = 0;
        v5 = 1;
        do
        {
          RunningId = RoyalTVEntry::getRunningId(*(_QWORD *)(v2 + 8 * v4));
          if ( RunningId <= (int)v3 )
            v3 = (unsigned int)v3;
          else
            v3 = (unsigned int)RunningId;
          v4 = v5;
          v2 = *(_QWORD *)(a1 + 8);
          ++v5;
        }
        while ( v4 < (*(_QWORD *)(a1 + 16) - v2) >> 3 );
      }
      return v3;
    }

    __int64 __fastcall RoyalTvManager::getEntriesWithHigher(__int64 a1, int a2)
    {
      __int64 v4; // x19
      __int64 v5; // x8
      unsigned __int64 v6; // x9
      unsigned int v7; // w22
    
      v4 = 0;
      v5 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) != v5 )
      {
        v6 = 0;
        v7 = 1;
        do
        {
          if ( (int)RoyalTVEntry::getRunningId(*(_QWORD *)(v5 + 8 * v6)) <= a2 )
            v4 = (unsigned int)v4;
          else
            v4 = (unsigned int)(v4 + 1);
          v6 = v7;
          v5 = *(_QWORD *)(a1 + 8);
          ++v7;
        }
        while ( v6 < (*(_QWORD *)(a1 + 16) - v5) >> 3 );
      }
      return v4;
    }

    __int64 __fastcall RoyalTvManager::containsEntryWithRunningId(__int64 a1, int a2)
    {
      __int64 v4; // x8
      unsigned __int64 v5; // x9
      unsigned int v6; // w21
    
      v4 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) == v4 )
        return 0;
      v5 = 0;
      v6 = 1;
      while ( (int)RoyalTVEntry::getRunningId(*(_QWORD *)(v4 + 8 * v5)) <= a2 )
      {
        v5 = v6;
        v4 = *(_QWORD *)(a1 + 8);
        ++v6;
        if ( v5 >= (*(_QWORD *)(a1 + 16) - v4) >> 3 )
          return 0;
      }
      return 1;
    }

    __int64 __fastcall RoyalTvManager::sortEntries(__int64 result)
    {
      __int64 v1; // x19
      __int64 v2; // x20
      __int64 v3; // x2
      __int64 i; // x8
    
      v1 = *(_QWORD *)(result + 8);
      v2 = *(_QWORD *)(result + 16);
      if ( v1 != v2 )
      {
        v3 = 0;
        for ( i = (v2 - v1) >> 3; i != 1; i >>= 1 )
          v3 += 2;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,long,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
          *(_QWORD *)(result + 8),
          v2,
          v3,
          sortItems);
        return std::__final_insertion_sort<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
                 v1,
                 v2,
                 sortItems);
      }
      return result;
    }

    __int64 __fastcall RoyalTvManager::~RoyalTvManager(__int64 a1)
    {
      __int64 v2; // x8
      __int64 *v3; // x20
      __int64 v4; // x21
      unsigned int v5; // w22
      __int64 v6; // x0
      __int64 v7; // x8
      __int64 v8; // x0
      void *v9; // x0
    
      v3 = (__int64 *)(a1 + 8);
      v2 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) != v2 )
      {
        v4 = 0;
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(v2 + 8 * v4);
          do
          {
            if ( !v6 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
            v7 = *v3;
            v8 = *(_QWORD *)(*v3 + 8 * v4);
            if ( v8 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
              v7 = *v3;
            }
            *(_QWORD *)(v7 + 8 * v4) = 0;
            v2 = *v3;
            v6 = *(_QWORD *)(*v3 + 8 * v4);
          }
          while ( v6 );
          v4 = ++v5;
        }
        while ( v5 < (unsigned __int64)((*(_QWORD *)(a1 + 16) - v2) >> 3) );
      }
      std::vector<RoyalTVEntry *>::resize(v3, 0, 0);
      *(_BYTE *)(a1 + 36) = 0;
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 32) = 0;
      v9 = *(void **)(a1 + 8);
      if ( v9 )
        operator delete(v9);
      return a1;
    }

    __int64 RoyalTvManager::constructInstance()
    {
      __int64 result; // x0
    
      result = operator new(40);
      *(_DWORD *)result = 0;
      *(_QWORD *)(result + 29) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 8) = 0;
      RoyalTvManager::sm_pInstance = result;
      return result;
    }

    void RoyalTvManager::destructInstance()
    {
      void *v0; // x19
    
      v0 = (void *)RoyalTvManager::sm_pInstance;
      if ( RoyalTvManager::sm_pInstance )
      {
        RoyalTvManager::~RoyalTvManager(RoyalTvManager::sm_pInstance);
        operator delete(v0);
      }
      RoyalTvManager::sm_pInstance = 0;
    }

    __int64 __fastcall RoyalTvManager::receiveMessage(RoyalTvManager *a1, #1154 *a2)
    {
      int EntryWithHighestRunningId; // w19
      __int64 v6; // x0
      _QWORD *v7; // x21
      __int64 v8; // x24
      int v9; // w23
      __int64 v10; // x25
      RoyalTVEntry *v11; // x22
      int RunningId; // w0
      const char *v13; // x1
      int v14; // w2
      LogicPageOpenedCommand *Instance; // x0
      LogicPageOpenedCommand *v16; // x0
      LogicPageOpenedCommand *v17; // x0
      FeedPage *FeedPage; // x0
      __siginfo var58; // [xsp+8h] [xbp-58h] BYREF
    
      if ( (*(unsigned int (__fastcall **)(#1154 *))(*(_QWORD *)a2 + 40LL))(a2) != 24405 )
        return 0;
      if ( RoyalTvManager::sm_pInstance )
        EntryWithHighestRunningId = RoyalTvManager::getEntryWithHighestRunningId(RoyalTvManager::sm_pInstance);
      else
        EntryWithHighestRunningId = -1;
      v6 = RoyalTVContentMessage::removeMostViewedList(a2);
      v7 = (_QWORD *)v6;
      if ( v6 )
      {
        v8 = *(unsigned int *)(v6 + 12);
        v9 = -1;
        if ( (int)v8 >= 1 )
        {
          v10 = 0;
          do
          {
            v11 = *(RoyalTVEntry **)(*v7 + 8 * v10);
            RunningId = RoyalTVEntry::getRunningId((__int64)v11);
            if ( v9 <= RunningId )
              v9 = RunningId;
            RoyalTvManager::addEntry(a1, v11);
            ++v10;
          }
          while ( v10 < *((int *)v7 + 3) );
        }
        if ( *v7 )
          operator delete[](*v7);
        operator delete(v7);
      }
      else
      {
        v8 = 0;
        v9 = -1;
      }
      RoyalTvManager::sortEntries((__int64)a1);
      String::format((String *)"RoyalTVContentMessage -> %d items", v13, v8);
      Debugger::hudPrint(&var58, (const String *)0xFFFFFFFFLL, v14);
      String::~String();
      Instance = (LogicPageOpenedCommand *)GameMode::getInstance();
      if ( Instance )
      {
        v16 = (LogicPageOpenedCommand *)HomeScreen::getInstance(Instance);
        if ( v16 )
        {
          v17 = (LogicPageOpenedCommand *)HomeScreen::getInstance(v16);
          FeedPage = (FeedPage *)HomeScreen::getFeedPage(v17);
          if ( FeedPage )
          {
            if ( EntryWithHighestRunningId >= v9 )
              FeedPage::refreshFeedItemInfo(FeedPage);
            else
              FeedPage::refreshFeed(FeedPage);
          }
        }
      }
      if ( NewItemIndicators::sm_lastSeenTvId > v9 )
        NewItemIndicators::sm_lastSeenTvId = v9;
      return 1;
    }

    __int64 __fastcall RoyalTvManager::addEntry(__int64 a1, __int64 a2)
    {
      __int64 v4; // x8
      _QWORD *v5; // x20
      unsigned __int64 v6; // x23
      unsigned int i; // w24
      int ReplayShardId; // w22
      __int64 ReplayId; // x22
      __int64 v10; // x0
      __int64 result; // x0
      __int64 v12; // [xsp+8h] [xbp-38h] BYREF
    
      v12 = a2;
      v5 = (_QWORD *)(a1 + 8);
      v4 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) == v4 )
        return std::vector<RoyalTVEntry *>::push_back(v5, &v12);
      v6 = 0;
      for ( i = 1; ; ++i )
      {
        ReplayShardId = RoyalTVEntry::getReplayShardId(*(_QWORD *)(v4 + 8 * v6));
        if ( ReplayShardId == (unsigned int)RoyalTVEntry::getReplayShardId(a2) )
        {
          ReplayId = RoyalTVEntry::getReplayId(*(_QWORD *)(*v5 + 8 * v6));
          v10 = RoyalTVEntry::getReplayId(a2);
          if ( (unsigned int)LogicLong::equals(ReplayId, v10) )
            break;
        }
        v6 = i;
        v4 = *(_QWORD *)(a1 + 8);
        if ( v6 >= (*(_QWORD *)(a1 + 16) - v4) >> 3 )
          return std::vector<RoyalTVEntry *>::push_back(v5, &v12);
      }
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*v5 + 8 * v6) + 16LL))(
                 *(_QWORD *)(*v5 + 8 * v6),
                 a2);
      if ( a2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      }
      return result;
    }

    __int64 __fastcall RoyalTvManager::getEntryCnt(__int64 a1)
    {
      return (*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 3;
    }

    __int64 __fastcall RoyalTvManager::getEntryByIdx(__int64 a1, int a2)
    {
      return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * a2);
    }

    float *__fastcall RoyalTvManager::timeElapsed(float *result, float a2)
    {
      float v2; // s0
    
      if ( Assert::g_false )
      {
        while ( 1 )
          ;
      }
      v2 = *result + a2;
      if ( (int)v2 >= 60 )
        v2 = v2 - (float)(int)v2;
      *result = v2;
      return result;
    }

    __int64 RoyalTvManager::removeAllSeenFlags()
    {
      __int64 Instance; // x0
      __int64 Home; // x19
      __int64 result; // x0
      __int64 v3; // x20
      int ReplaySeenIdAt; // w22
      PvpMatchmakeNotificationMessage *v5; // x21
      __int64 v6; // x0
    
      Instance = GameMode::getInstance();
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      result = ((__int64 (*)(void))LogicClientHome::getReplaySeenCount)();
      if ( (int)result >= 1 )
      {
        v3 = 0;
        do
        {
          ReplaySeenIdAt = LogicClientHome::getReplaySeenIdAt(Home, v3);
          v5 = (PvpMatchmakeNotificationMessage *)operator new(40);
          LogicTvReplaySeenCommand::LogicTvReplaySeenCommand((__int64)v5);
          LogicTvReplaySeenCommand::setReplayUnseenId((__int64)v5, ReplaySeenIdAt);
          v6 = GameMode::getInstance();
          GameMode::addCommand(v6, v5, 1);
          v3 = (unsigned int)(v3 + 1);
          result = LogicClientHome::getReplaySeenCount(Home);
        }
        while ( (int)v3 < (int)result );
      }
      return result;
    }

    __int64 __fastcall RoyalTvManager::sendCommandToRemoveOldSeenFlags(__int64 a1)
    {
      __int64 Instance; // x0
      __int64 Home; // x20
      __int64 result; // x0
      __int64 v5; // x21
      int ReplaySeenIdAt; // w23
      PvpMatchmakeNotificationMessage *v7; // x22
      __int64 v8; // x0
    
      Instance = GameMode::getInstance();
      Home = LogicGameMode::getHome(*(UnlockAccountPopup **)(Instance + 112));
      result = LogicClientHome::getReplaySeenCount(Home);
      if ( (int)result >= 1 )
      {
        v5 = 0;
        do
        {
          ReplaySeenIdAt = LogicClientHome::getReplaySeenIdAt(Home, v5);
          if ( (RoyalTvManager::containsEntryWithRunningId(a1, ReplaySeenIdAt) & 1) == 0 )
          {
            v7 = (PvpMatchmakeNotificationMessage *)operator new(40);
            LogicTvReplaySeenCommand::LogicTvReplaySeenCommand((__int64)v7);
            LogicTvReplaySeenCommand::setReplayUnseenId((__int64)v7, ReplaySeenIdAt);
            v8 = GameMode::getInstance();
            GameMode::addCommand(v8, v7, 1);
          }
          v5 = (unsigned int)(v5 + 1);
          result = LogicClientHome::getReplaySeenCount(Home);
        }
        while ( (int)v5 < (int)result );
      }
      return result;
    }

}; // end class RoyalTvManager
