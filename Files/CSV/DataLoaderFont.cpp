class DataLoaderFont
{
public:

    __int64 __fastcall DataLoaderFont::~DataLoaderFont(__int64 a1)
    {
      Font *v2; // x8
      _QWORD *v3; // x21
      FontManager *v4; // x20
      __int64 v5; // x0
    
      *(_QWORD *)a1 = off_1004754B0;
      v3 = (_QWORD *)(a1 + 8);
      v2 = *(Font **)(a1 + 8);
      if ( v2 )
      {
        v4 = (FontManager *)FontManager::sm_pInstance;
        if ( !FontManager::sm_pInstance
          || (FontManager::removeFont((FontManager *)FontManager::sm_pInstance, v2),
              FontManager::removeFont(v4, *(Font **)(a1 + 16)),
              (v2 = *(Font **)(a1 + 8)) != 0) )
        {
          (*(void (__fastcall **)(Font *))(*(_QWORD *)v2 + 8LL))(v2);
        }
        *(_QWORD *)(a1 + 8) = 0;
        v5 = *(_QWORD *)(a1 + 16);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        *(_QWORD *)(a1 + 16) = 0;
      }
      *v3 = 0;
      v3[1] = 0;
      return a1;
    }

    __int64 __fastcall DataLoaderFont::~DataLoaderFont(__int64 a1)
    {
      DataLoaderFont::~DataLoaderFont(a1);
      return a1;
    }

    void __fastcall DataLoaderFont::~DataLoaderFont(void *a1)
    {
      DataLoaderFont::~DataLoaderFont((__int64)a1);
      operator delete(a1);
    }

    void __fastcall DataLoaderFont::load(__int64 a1, NativeFont *a2, const char *a3)
    {
      bool v5; // w4
      const char *v6; // x1
      bool v7; // w4
      Font *v8; // x1
      FontManager *v9; // x20
      Font *v10; // x1
      const String *v11; // x1
      _BYTE v12[24]; // [xsp+10h] [xbp-40h] BYREF
      String v13; // [xsp+28h] [xbp-28h] BYREF
    
      String::String(&v13, a3);
      if ( (String::endsWith(&v13, ".ttf") & 1) != 0 || (unsigned int)String::endsWith(&v13, ".otf") )
      {
        *(_QWORD *)(a1 + 8) = NativeFont::loadFile(a2, 0, 16.0, 1, 0, v5);
        *(_QWORD *)(a1 + 16) = NativeFont::loadFile(a2, (const char *)1, 16.0, 1, 0, v7);
        v8 = *(Font **)(a1 + 8);
      }
      else
      {
        v8 = (Font *)Font::load(a2, v6);
        *(_QWORD *)(a1 + 8) = v8;
      }
      if ( !v8 )
      {
        String::format((String *)"Can't load font: %s", 0, a2);
        Debugger::error((Debugger *)v12, v11);
      }
      v9 = (FontManager *)FontManager::sm_pInstance;
      if ( FontManager::sm_pInstance )
      {
        FontManager::addFont((FontManager *)FontManager::sm_pInstance, v8, &v13);
        v10 = *(Font **)(a1 + 16);
        if ( v10 )
          FontManager::addFont(v9, v10, &v13);
      }
      String::~String();
    }

    __int64 __fastcall DataLoaderFont::getType(_guard_variable_for_MultiWinGUI *this)
    {
      return 5;
    }

}; // end class DataLoaderFont
