class StringTable
{
public:

    #1308 *__fastcall StringTable::getString(#1308 *this, const String *a2)
    {
      #1308 *v2; // x19
      const char *v3; // x1
      #1308 *v4; // x0
      __int64 String; // x0
      const String *v6; // x1
      String v8; // [xsp+8h] [xbp-28h] BYREF
    
      v2 = this;
      if ( LogicLocalization::getInstance(this) && (unsigned int)LogicLocalization::getLoadedLanguageCount() )
      {
        v4 = (#1308 *)((char *)v2 + 8);
        if ( *((_DWORD *)v2 + 1) + 1 > 8 )
          v4 = *(#1308 **)v4;
        String = StringTable::getString(v4, v3);
        if ( !s_encounteredProblem )
          return (#1308 *)String;
      }
      else
      {
        operator+(v2, ": texts not yet loaded");
        Debugger::warning((__siginfo *)&v8, v6);
        String::~String(&v8);
      }
      return v2;
    }

    void *__fastcall StringTable::getString(#1308 *this, const char *a2)
    {
      __int64 Instance; // x0
      const char *v4; // x1
      __int64 v5; // x20
      #1308 *LoadedLanguageCount; // x0
      const char *v7; // x1
      __int64 String; // x19
      const String *v9; // x1
      const String *v11; // x1
      String v12; // [xsp+8h] [xbp-68h] BYREF
      String v13; // [xsp+20h] [xbp-50h] BYREF
      String v14; // [xsp+38h] [xbp-38h] BYREF
    
      s_encounteredProblem = 0;
      if ( !this )
      {
        Debugger::warning((__siginfo *)"getString NULL", a2);
        goto LABEL_11;
      }
      Instance = LogicLocalization::getInstance(this);
      v5 = Instance;
      if ( !Instance
        || (LoadedLanguageCount = (#1308 *)LogicLocalization::getLoadedLanguageCount(Instance), !(_DWORD)LoadedLanguageCount) )
      {
        String::format((String *)"%s texts not yet loaded", v4, this);
        Debugger::warning((__siginfo *)&v14, v9);
        s_encounteredProblem = 1;
        String::~String(&v14);
        return &TID_PROBLEM;
      }
      if ( StringTable::sm_languageIndex == -1 )
      {
        LoadedLanguageCount = (#1308 *)StringTable::getEnglishIndex(LoadedLanguageCount);
        if ( (_DWORD)LoadedLanguageCount != -1 )
        {
          StringTable::sm_languageIndex = (int)LoadedLanguageCount;
          goto LABEL_7;
        }
        String::format((String *)"can't find EN index %s", v7, this);
        Debugger::warning((__siginfo *)&v13, v11);
        String::~String(&v13);
    LABEL_11:
        s_encounteredProblem = 1;
        return &TID_PROBLEM;
      }
    LABEL_7:
      if ( (Debugger::isContentValidationMode(LoadedLanguageCount) & 1) != 0 )
        return &TID_PROBLEM;
      String::String(&v12, (const char *)this);
      String = LogicLocalization::getString(v5, &v12, (unsigned int)StringTable::sm_languageIndex);
      String::~String(&v12);
      return (void *)String;
    }

    __int64 __fastcall StringTable::getEnglishIndex(#1308 *this)
    {
      __int64 Instance; // x19
      __int64 LanguageIndexIgnoreCase; // x19
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      Instance = LogicLocalization::getInstance(this);
      String::String(&v4, "EN");
      LanguageIndexIgnoreCase = LogicLocalization::getLanguageIndexIgnoreCase(Instance, &v4);
      String::~String(&v4);
      return LanguageIndexIgnoreCase;
    }

    __int64 __fastcall StringTable::setLanguageIndex(#1308 *this, int a2)
    {
      __int64 v4; // x22
      __int64 result; // x0
      LogicLocalization *v6; // x21
      #1179 *FileName; // x23
      const String *v8; // x1
      #1308 *v9; // x22
      const String *v10; // x1
      #1222 *CSV; // x0
      const CSVTable *Table; // x0
      ClanPage *v13; // x19
      const String *CurrentLanguageCode; // x0
    
      v4 = (unsigned int)StringTable::sm_languageIndex;
      StringTable::sm_languageIndex = (int)this;
      result = LogicLocalization::getInstance(this);
      v6 = (LogicLocalization *)result;
      if ( result )
      {
        if ( (_DWORD)v4 != -1 )
        {
          result = Debugger::isContentValidationMode((Debugger *)result);
          if ( (result & 1) == 0 && StringTable::sm_languageIndex != (_DWORD)this )
          {
            FileName = (#1179 *)LogicLocalization::getFileName(v6, v4);
            LogicLocalization::setLanguage(v6, v4, 0);
            result = ResourceManager::freeResource(FileName, v8);
          }
        }
        if ( (_DWORD)this != -1 )
        {
          v9 = (#1308 *)LogicLocalization::getFileName(v6, this);
          if ( (LogicLocalization::isLanguageLoaded(v6, (int)this) & 1) == 0 )
            StringTable::loadLocalizationFileResource(v9, v10);
          CSV = (#1222 *)ResourceManager::getCSV(v9, v10);
          Table = (const CSVTable *)CSVNode::getTable(CSV);
          result = LogicLocalization::setLanguage(v6, (int)this, Table);
        }
      }
      if ( a2 )
      {
        v13 = (ClanPage *)GameSettings::sm_pInstance;
        CurrentLanguageCode = (const String *)StringTable::getCurrentLanguageCode((#1308 *)result);
        result = GameSettings::setSelectedLanguage(v13, CurrentLanguageCode);
      }
      s_initialLanguageSet = 1;
      return result;
    }

    void __fastcall StringTable::loadLocalizationFileResource(String *this, const String *a2)
    {
      #1179 *started; // x0
      const String *v4; // x1
      _BYTE v5[40]; // [xsp+8h] [xbp-38h] BYREF
    
      if ( (ResourceManager::isResourceLoaded((ResourceManager *)this, a2) & 1) == 0 )
      {
        ResourceListener::ResourceListener((ResourceListener *)v5);
        ResourceListener::addFile((ResourceListener *)v5, this, -1, -1, -1, -1);
        started = (#1179 *)ResourceListener::startLoading((ResourceListener *)v5);
        do
        {
          ResourceManager::loadNextResource(started);
          started = (#1179 *)ResourceManager::isResourceLoaded((ResourceManager *)this, v4);
        }
        while ( !(_DWORD)started );
        ResourceListener::~ResourceListener((ResourceListener *)v5);
      }
    }

    void *__fastcall StringTable::getCurrentLanguageCode(#1308 *this)
    {
      Shader *isAnyLanguageLoaded; // x0
      __int64 Instance; // x0
    
      isAnyLanguageLoaded = (Shader *)StringTable::isAnyLanguageLoaded(this);
      if ( !(_DWORD)isAnyLanguageLoaded )
        return &EMPTY_STRING;
      Instance = LogicLocalization::getInstance(isAnyLanguageLoaded);
      return (void *)LogicLocalization::getLanguageCode(Instance, (unsigned int)StringTable::sm_languageIndex);
    }

    #1308 *__fastcall StringTable::getLocalizedName(#1308 *this, const AreaEffectObject *a2)
    {
      const String *v3; // x1
      #1308 *TID; // x19
      const String *v5; // x1
      String v7; // [xsp+0h] [xbp-40h] BYREF
      String v8; // [xsp+18h] [xbp-28h] BYREF
    
      TID = (#1308 *)LogicData::getTID(this);
      if ( !*(_DWORD *)TID )
      {
        LogicData::getDebuggerName((__int64 *)&v7.m_length, this);
        operator+(&v8, "getLocalizedName: No TID for ", &v7);
        Debugger::warning((__siginfo *)&v8, v5);
        String::~String(&v8);
        String::~String(&v7);
      }
      return StringTable::getString(TID, v3);
    }

    bool __fastcall StringTable::isAnyLanguageLoaded(#1308 *this)
    {
      __int64 Instance; // x0
    
      Instance = LogicLocalization::getInstance(this);
      return Instance && (int)LogicLocalization::getLoadedLanguageCount(Instance) > 0;
    }

    String *__usercall StringTable::convertLanguageCode@<X0>(String *this@<X0>, String *a2@<X8>)
    {
      const char *v5; // x1
    
      if ( (String::equalsIgnoreCase(this, "BR") & 1) != 0 || (unsigned int)String::startsWith(this, "pt-") )
      {
        v5 = "PT";
        return String::String(a2, v5);
      }
      if ( (String::equalsIgnoreCase(this, "nb") & 1) != 0 || (unsigned int)String::equalsIgnoreCase(this, "nn") )
      {
        v5 = "NO";
        return String::String(a2, v5);
      }
      return String::String(a2, this);
    }

    void __fastcall StringTable::setInitialLanguage(#1308 *this)
    {
      Shader *Instance; // x0
      __int64 v2; // x19
      #1285 *LanguageIndexIgnoreCase; // x0
      #1308 *EnglishIndex; // x0
      String v5; // [xsp+8h] [xbp-58h] BYREF
      String v6; // [xsp+20h] [xbp-40h] BYREF
      String v7; // [xsp+38h] [xbp-28h] BYREF
    
      Instance = (Shader *)LogicLocalization::getInstance(this);
      if ( Instance )
      {
        if ( s_initialLanguageSet == 1 )
        {
          StringTable::setLanguageIndex((#1308 *)(unsigned int)StringTable::sm_languageIndex, 0);
        }
        else
        {
          s_initialLanguageSet = 1;
          v2 = LogicLocalization::getInstance(Instance);
          GameSettings::getSelectedLanguage((__int64 *)&v7.m_length, (ClanPage *)GameSettings::sm_pInstance);
          LanguageIndexIgnoreCase = (#1285 *)LogicLocalization::getLanguageIndexIgnoreCase(v2, &v7);
          if ( (_DWORD)LanguageIndexIgnoreCase == -1 )
          {
            Application::getPreferredLanguage((__int64 *)&v6.m_length, LanguageIndexIgnoreCase);
            String::operator=(&v7);
            String::~String(&v6);
            StringTable::convertLanguageCode(&v7, &v5);
            String::operator=(&v7);
            String::~String(&v5);
            EnglishIndex = (#1308 *)LogicLocalization::getLanguageIndexIgnoreCase(v2, &v7);
            if ( (_DWORD)EnglishIndex != -1
              || (EnglishIndex = (#1308 *)StringTable::getEnglishIndex(EnglishIndex), (_DWORD)EnglishIndex != -1) )
            {
              StringTable::setLanguageIndex(EnglishIndex, 1);
            }
          }
          else
          {
            StringTable::setLanguageIndex(LanguageIndexIgnoreCase, 0);
          }
          String::~String(&v7);
        }
      }
    }

    void __usercall StringTable::getCorrectExportNameForProfile(
            #1308 *this@<X0>,
            String *a2@<X1>,
            const String *a3@<X2>,
            String *a4@<X8>)
    {
      String *v4; // x20
      internal_t *p_internal; // x8
      #1080 *Formatted; // x0
      #1080 *Instance; // x0
      const char *v10; // x2
      __int64 SupercellSWF; // x0
      const char *v12; // x1
      String v13; // [xsp+8h] [xbp-38h] BYREF
    
      v4 = a2;
      p_internal = &a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      Formatted = (#1080 *)String::getFormatted(
                             (__int64 *)&v13.m_length,
                             (String *)"ipad_%s",
                             (const char *)a2,
                             a3,
                             p_internal);
      Instance = (#1080 *)GameMain::getInstance(Formatted);
      if ( (unsigned int)GameMain::isTabletVersion(Instance) )
      {
        SupercellSWF = ResourceManager::getSupercellSWF(this, 0, v10);
        if ( (unsigned int)SupercellSWF::hasExportName(SupercellSWF, &v13) )
          v4 = &v13;
      }
      v12 = (const char *)&v4->internal;
      if ( v4->m_bytes + 1 > 8 )
        v12 = *(const char **)v12;
      String::String(a4, v12);
      String::~String(&v13);
    }

    #1308 *__fastcall StringTable::getMovieClip(#1308 *this, String *a2, const String *a3)
    {
      const String *v4; // x2
      #1308 *MovieClip; // x0
      #1257 *v6; // x1
      #1308 *v7; // x19
      String v9; // [xsp+8h] [xbp-28h] BYREF
    
      StringTable::getCorrectExportNameForProfile(this, a2, a3, &v9);
      MovieClip = (#1308 *)ResourceManager::getMovieClip(this, &v9, v4);
      v7 = MovieClip;
      if ( MovieClip )
        StringTable::replaceText(MovieClip, v6);
      String::~String(&v9);
      return v7;
    }

    __int64 __fastcall StringTable::replaceText(#1308 *this, #1257 *a2)
    {
      __int64 result; // x0
      const #1257 *v4; // x2
      __int64 v5; // x20
    
      result = Sprite::getNumChildren(this);
      if ( (int)result >= 1 )
      {
        v5 = 0;
        do
        {
          StringTable::replaceText(*(#1308 **)(*((_QWORD *)this + 9) + 8 * v5++), this, v4);
          result = Sprite::getNumChildren(this);
        }
        while ( v5 < (int)result );
      }
      return result;
    }

    #1271 *__fastcall StringTable::replaceText(#1271 *this, String *a2, const String *a3)
    {
      #1271 *v4; // x19
      const String *v5; // x1
      #1308 *String; // x1
    
      v4 = this;
      if ( a2->m_length >= 4 )
      {
        this = (#1271 *)String::startsWith(a2, "TID_");
        if ( (_DWORD)this )
        {
          String = StringTable::getString((#1308 *)a2, v5);
          return (#1271 *)TextField::setText(v4, (const String *)String);
        }
      }
      return this;
    }

    void __fastcall StringTable::replaceText(#1308 *this, #1249 *a2, const #1257 *a3)
    {
      const String *v5; // x2
      #1257 *v6; // x1
      const #1257 *v7; // x2
      __int64 v8; // x21
      String v9; // [xsp+28h] [xbp-38h] BYREF
    
      if ( (*(unsigned int (__fastcall **)(#1308 *, #1249 *, const #1257 *))(*(_QWORD *)this + 128LL))(this, a2, a3) )
      {
        MovieClip::getNameOfChild(&v9, a2, this);
        StringTable::replaceText(this, &v9, v5);
        String::~String(&v9);
      }
      else if ( (*(unsigned int (__fastcall **)(#1308 *))(*(_QWORD *)this + 120LL))(this) )
      {
        StringTable::replaceText(this, v6);
      }
      else if ( (*(unsigned int (__fastcall **)(#1308 *))(*(_QWORD *)this + 136LL))(this)
             && (int)Sprite::getNumChildren(this) >= 1 )
      {
        v8 = 0;
        do
          StringTable::replaceText(*(#1308 **)(*((_QWORD *)this + 9) + 8 * v8++), a2, v7);
        while ( v8 < (int)Sprite::getNumChildren(this) );
      }
    }

}; // end class StringTable
