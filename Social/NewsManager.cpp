class NewsManager
{
public:

    void __fastcall NewsManager::~NewsManager(#1306 *this)
    {
      _QWORD *v2; // x0
      __int64 v3; // x21
      #1097 *v4; // x20
    
      v2 = *(_QWORD **)this;
      if ( (int)((*((_QWORD *)this + 1) - (_QWORD)v2) >> 3) >= 1 )
      {
        v3 = 0;
        do
        {
          v4 = (#1097 *)v2[v3];
          do
          {
            if ( v4 )
            {
              NewsEntry::~NewsEntry(v4);
              operator delete(v4);
              v2 = *(_QWORD **)this;
            }
            v2[v3] = 0;
            v2 = *(_QWORD **)this;
            v4 = *(#1097 **)(*(_QWORD *)this + 8 * v3);
          }
          while ( v4 );
          ++v3;
        }
        while ( v3 < (int)((*((_QWORD *)this + 1) - (_QWORD)v2) >> 3) );
      }
      *((_QWORD *)this + 1) = v2;
      *((_DWORD *)this + 6) = 0;
      if ( v2 )
        operator delete(v2);
    }

    __int64 __fastcall NewsManager::constructInstance(#1306 *this)
    {
      __int64 result; // x0
    
      result = operator new(32);
      *(_DWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)result = 0;
      NewsManager::sm_pInstance = result;
      return result;
    }

    void __fastcall NewsManager::destructInstance(#1306 *this)
    {
      void *v1; // x19
    
      v1 = (void *)NewsManager::sm_pInstance;
      if ( NewsManager::sm_pInstance )
      {
        NewsManager::~NewsManager((#1306 *)NewsManager::sm_pInstance);
        operator delete(v1);
      }
    }

    vm_address_t *__fastcall NewsManager::refreshNewsEntries(#1306 *this, int a2)
    {
      __int64 v3; // x8
      __int64 v4; // x21
      unsigned int v5; // w22
      #1097 *v6; // x20
      vm_address_t *result; // x0
      vm_address_t *v8; // x20
      __int64 Instance; // x0
      const tween::Bounce *PlayerAvatar; // x21
      __int64 v11; // x22
      const AreaEffectObject *v12; // x23
      #1097 *v13; // x24
      __int64 Arena; // x0
      #1097 *v15; // [xsp+8h] [xbp-38h] BYREF
    
      v3 = *(_QWORD *)this;
      if ( *((_QWORD *)this + 1) != *(_QWORD *)this )
      {
        v4 = 0;
        v5 = 0;
        do
        {
          v6 = *(#1097 **)(v3 + 8 * v4);
          do
          {
            if ( v6 )
            {
              NewsEntry::~NewsEntry(v6);
              operator delete(v6);
              v3 = *(_QWORD *)this;
            }
            *(_QWORD *)(v3 + 8 * v4) = 0;
            v3 = *(_QWORD *)this;
            v6 = *(#1097 **)(*(_QWORD *)this + 8 * v4);
          }
          while ( v6 );
          v4 = ++v5;
        }
        while ( v5 < (unsigned __int64)((*((_QWORD *)this + 1) - v3) >> 3) );
      }
      *((_QWORD *)this + 1) = v3;
      result = (vm_address_t *)LogicDataTables::getTable((LogicDataTables *)0x3A, a2);
      v8 = result;
      if ( result )
      {
        Instance = GameMode::getInstance(result);
        PlayerAvatar = (const tween::Bounce *)GameMode::getPlayerAvatar(Instance);
        if ( (*(int (__fastcall **)(vm_address_t *))(*v8 + 32))(v8) >= 1 )
        {
          v11 = 0;
          do
          {
            v12 = (const AreaEffectObject *)(*(__int64 (__fastcall **)(vm_address_t *, __int64))(*v8 + 40))(v8, v11);
            if ( (unsigned int)LogicNewsData::shouldShowNews(v12, PlayerAvatar) )
            {
              v13 = (#1097 *)operator new(16);
              NewsEntry::NewsEntry(v13, v12);
              v15 = v13;
              std::vector<NewsEntry *>::push_back(this, &v15);
            }
            v11 = (unsigned int)(v11 + 1);
          }
          while ( (int)v11 < (*(int (__fastcall **)(vm_address_t *))(*v8 + 32))(v8) );
        }
        Arena = LogicClientAvatar::getArena(PlayerAvatar);
        result = (vm_address_t *)LogicArenaData::isTrainingCamp(Arena);
        if ( (_DWORD)result )
          return (vm_address_t *)NewsManager::setNewsSeen(this);
      }
      return result;
    }

    __int64 *__fastcall NewsManager::setNewsSeen(__int64 *this)
    {
      __int64 *v1; // x19
      __int64 v2; // x8
      unsigned __int64 v3; // x9
      unsigned int v4; // w20
    
      v1 = this;
      v2 = *this;
      if ( *(this + 1) != *this )
      {
        v3 = 0;
        v4 = 1;
        do
        {
          this = (__int64 *)NewsEntry::setSeen(*(#1097 **)(v2 + 8 * v3), 1);
          v3 = v4;
          v2 = *v1;
          ++v4;
        }
        while ( v3 < (v1[1] - *v1) >> 3 );
      }
      return this;
    }

    void __fastcall NewsManager::setLastSeenNewsID(#1306 *this, String *a2)
    {
      int v3; // w1
      const String *v4; // x2
      String v5; // [xsp+0h] [xbp-40h] BYREF
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      String::String(&v6, "LastSeenNewsID");
      String::valueOf(&v5, a2, v3);
      Application::storeKeyValue((Application *)&v6, &v5, v4);
      String::~String(&v5);
      String::~String(&v6);
    }

    __int64 __fastcall NewsManager::getLastSeenNewsID(#1306 *this)
    {
      const String *v1; // x1
      int exists; // w19
      const String *v3; // x1
      const String *v4; // x1
      __int64 v5; // x19
      String v7; // [xsp+8h] [xbp-58h] BYREF
      String v8; // [xsp+20h] [xbp-40h] BYREF
      String v9; // [xsp+38h] [xbp-28h] BYREF
    
      String::String(&v9, "LastSeenNewsID");
      exists = Application::existsKeyValue((Application *)&v9, v1);
      String::~String(&v9);
      if ( !exists )
        return 0xFFFFFFFFLL;
      String::String(&v7, "LastSeenNewsID");
      Application::getKeyValue((Application *)&v7, v3);
      v5 = LogicStringUtil::convertToInt((LogicStringUtil *)&v8, v4);
      String::~String(&v8);
      String::~String(&v7);
      return v5;
    }

    __int64 __fastcall NewsManager::getUnseenNewsCount(#1306 *this)
    {
      int LastSeenNewsID; // w20
      __int64 v3; // x21
      __int64 v4; // x8
      __int64 v5; // x22
      AreaEffectObject **v6; // x23
    
      LastSeenNewsID = NewsManager::getLastSeenNewsID(this);
      v3 = 0;
      v4 = *(_QWORD *)this;
      if ( (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3) >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = *(AreaEffectObject ***)(v4 + 8 * v5);
          if ( (unsigned int)LogicData::getDataType(*v6) == 58 )
          {
            if ( *((_DWORD *)*v6 + 25) <= LastSeenNewsID )
              v3 = (unsigned int)v3;
            else
              v3 = (unsigned int)(v3 + 1);
          }
          ++v5;
          v4 = *(_QWORD *)this;
        }
        while ( v5 < (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3) );
      }
      return v3;
    }

}; // end class NewsManager
