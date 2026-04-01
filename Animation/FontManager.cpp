class FontManager
{
public:

    _DWORD *__fastcall FontManager::FontManager(_DWORD *a1)
    {
      String *v2; // x20
    
      v2 = (String *)(a1 + 20);
      memset(a1, 0, 0x50u);
      String::String(v2);
      a1[11] = 0;
      a1[15] = 0;
      a1[19] = 0;
      a1[7] = 0;
      a1[3] = 0;
      String::operator=(v2, "");
      return a1;
    }

    __int64 *__fastcall FontManager::~FontManager(__int64 *a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
    
      FontManager::freeSystemFonts((FontManager *)a1);
      *((_DWORD *)a1 + 11) = 0;
      *((_DWORD *)a1 + 15) = 0;
      *((_DWORD *)a1 + 19) = 0;
      *((_DWORD *)a1 + 7) = 0;
      *((_DWORD *)a1 + 3) = 0;
      String::operator=(a1 + 10, "");
      String::~String();
      LogicArrayList<GameFontMapping>::~LogicArrayList(a1 + 8);
      v2 = a1[6];
      if ( v2 )
        operator delete[](v2);
      a1[6] = 0;
      a1[7] = 0;
      v3 = a1[4];
      if ( v3 )
        operator delete[](v3);
      a1[4] = 0;
      a1[5] = 0;
      LogicArrayList<String>::~LogicArrayList(a1 + 2);
      if ( *a1 )
        operator delete[](*a1);
      *a1 = 0;
      a1[1] = 0;
      return a1;
    }

    unsigned int *__fastcall FontManager::freeSystemFonts(unsigned int *result, const char *a2)
    {
      unsigned int *v2; // x19
      __int64 v3; // x8
      __int64 i; // x21
      const String *v5; // x1
      __int64 v6; // x0
      __int64 v7; // x8
      const String *v8; // x1
      _BYTE v9[24]; // [xsp+10h] [xbp-50h] BYREF
      _BYTE v10[24]; // [xsp+28h] [xbp-38h] BYREF
    
      v2 = result;
      v3 = result[11];
      if ( (int)v3 > 0 )
      {
        for ( i = 0; i < v3; ++i )
        {
          if ( (int)v3 <= i )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", a2, i, v3);
            Debugger::error((Debugger *)v9, v5);
          }
          v6 = *(_QWORD *)(*((_QWORD *)v2 + 4) + 8 * i);
          if ( v6 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          v7 = (int)v2[15];
          if ( v7 <= i )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", a2, i, v7);
            Debugger::error((Debugger *)v10, v8);
          }
          result = *(unsigned int **)(*((_QWORD *)v2 + 6) + 8 * i);
          if ( result )
            result = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)result + 8LL))(result);
          v3 = (int)v2[11];
        }
      }
      v2[11] = 0;
      v2[15] = 0;
      v2[19] = 0;
      return result;
    }

    void FontManager::constructInstance()
    {
      _DWORD *v0; // x19
    
      if ( !FontManager::sm_pInstance )
      {
        v0 = (_DWORD *)operator new(104);
        FontManager::FontManager(v0);
        FontManager::sm_pInstance = (__int64)v0;
      }
    }

    void FontManager::destructInstance()
    {
      void *v0; // x19
    
      v0 = (void *)FontManager::sm_pInstance;
      if ( FontManager::sm_pInstance )
      {
        FontManager::~FontManager((__int64 *)FontManager::sm_pInstance);
        operator delete(v0);
      }
      FontManager::sm_pInstance = 0;
    }

    __int64 __fastcall FontManager::addFont(__int64 a1, __int64 a2)
    {
      __int64 v4; // [xsp+8h] [xbp-18h] BYREF
    
      v4 = a2;
      LogicArrayList<String>::add(a1 + 16);
      return LogicArrayList<Font *>::add(a1, &v4);
    }

    __int64 __fastcall FontManager::getFont(__int64 a1, const char *a2, int a3, int a4, int a5)
    {
      __int64 v10; // x28
      __int64 v11; // x27
      __int64 v12; // x8
      const String *v14; // x1
      __int64 v15; // x25
      int v16; // w0
      const char *v17; // x26
      const char *v18; // x0
      size_t v19; // x0
      __int64 v20; // x8
      String v22; // [xsp+18h] [xbp-68h] BYREF
    
      if ( !a2 )
        return 0;
      v10 = 0;
      LODWORD(v11) = *(_DWORD *)(a1 + 12);
      while ( (int)v11 >= 1 )
      {
        v11 = (int)v11 - 1LL;
        while ( 1 )
        {
          v12 = *(unsigned int *)(a1 + 12);
          if ( (int)v11 + 1 < 1 || (int)v12 <= v11 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", a2, v11, v12);
            Debugger::error((Debugger *)&v22, v14);
          }
          v15 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v11);
          v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 64LL))(v15);
          if ( v16 == a4 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15) == a5 )
          {
            v17 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15);
            v18 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15);
            v19 = strlen(v18);
            if ( !strncmp(a2, v17, v19) )
              break;
          }
          v20 = v11-- + 1;
          if ( v20 <= 1 )
            return v10;
        }
        v10 = v15;
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15) == a3 )
          return v15;
      }
      return v10;
    }

    __int64 __fastcall FontManager::getFontCount(UdpSocket *this)
    {
      return *((unsigned int *)this + 3);
    }

    __int64 __fastcall FontManager::getFontAt(__int64 a1, const char *a2)
    {
      __int64 v2; // x8
      const String *v3; // x1
      String v5; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *(unsigned int *)(a1 + 12);
      if ( ((unsigned int)a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", a2, a2, v2);
        Debugger::error((Debugger *)&v5, v3);
      }
      return *(_QWORD *)(*(_QWORD *)a1 + 8LL * (int)a2);
    }

    void __fastcall FontManager::removeFont(__int64 a1, __int64 a2)
    {
      __int64 v3; // x8
      const char *v4; // x20
      String v5; // [xsp+8h] [xbp-28h] BYREF
    
      v3 = *(int *)(a1 + 12);
      if ( (int)v3 >= 1 )
      {
        v4 = 0;
        while ( *(_QWORD *)(*(_QWORD *)a1 + 8LL * (_QWORD)v4) != a2 )
        {
          if ( (__int64)++v4 >= v3 )
            return;
        }
        if ( (_DWORD)v4 != -1 )
        {
          LogicArrayList<Font *>::remove(a1, v4);
          LogicArrayList<String>::remove(a1 + 16, v4, &v5);
          String::~String();
        }
      }
    }

    void __fastcall FontManager::setSystemFont(
            __int64 a1,
            __int64 a2,
            const String *a3,
            unsigned int a4,
            unsigned int a5,
            unsigned int a6,
            unsigned int a7,
            unsigned int a8)
    {
      _QWORD *v12; // x27
      __int64 v13; // x23
      __int64 v14; // x24
      __int64 v15; // x8
      const String *v16; // x1
      const String *v17; // x22
      int v18; // w22
      const char *v19; // x1
      internal_t *pHeap; // x8
      internal_t *p_internal; // x9
      const String *v22; // x1
      const char *v23; // x1
      bool v24; // w2
      _QWORD *v25; // x27
      __int64 v26; // x8
      __int64 i; // x22
      bool v28; // cc
      const String *v29; // x1
      __int64 v30; // x28
      __int64 Name; // x0
      NativeFont *v32; // x21
      NativeFont *v33; // x0
      bool v34; // w2
      NativeFont *SystemFont; // x28
      NativeFont *v40; // [xsp+28h] [xbp-118h] BYREF
      NativeFont *v41; // [xsp+30h] [xbp-110h] BYREF
      _BYTE v42[24]; // [xsp+38h] [xbp-108h] BYREF
      String v43; // [xsp+50h] [xbp-F0h] BYREF
      String v44; // [xsp+68h] [xbp-D8h] BYREF
      String v45; // [xsp+80h] [xbp-C0h] BYREF
      String v46; // [xsp+98h] [xbp-A8h] BYREF
      _BYTE v47[24]; // [xsp+B0h] [xbp-90h] BYREF
      _BYTE v48[24]; // [xsp+C8h] [xbp-78h] BYREF
    
      v12 = (_QWORD *)(a1 + 64);
      v13 = *(int *)(a1 + 76);
      v14 = 48LL * ((int)v13 - 1);
      do
      {
        v28 = v13-- < 1;
        if ( v28 )
          break;
        v15 = *(unsigned int *)(a1 + 76);
        if ( (int)v15 <= (int)v13 )
        {
          String::format((String *)"LogicArrayList.get out of bounds %d/%d", (const char *)a2, v13, v15);
          Debugger::error((Debugger *)v47, v16);
        }
        v17 = (const String *)(*v12 + v14);
        String::String(&v45, v17);
        String::String(&v46, v17 + 1);
        if ( (String::equalsIgnoreCase(&v45, a3) & 1) != 0 )
        {
          if ( (String::equalsIgnoreCase(&v46, a2) & 1) != 0 )
          {
            v18 = 1;
          }
          else
          {
            FontManager::removeSystemFontByName((UdpSocket *)a1, a3);
            v18 = 2;
          }
        }
        else
        {
          v18 = 3;
        }
        String::~String();
        String::~String();
        if ( v18 == 1 )
          return;
        v14 -= 48;
      }
      while ( v18 != 2 );
      if ( *(_DWORD *)a2 )
      {
        String::String(&v43);
        String::String(&v44);
        String::operator=(&v43);
        String::operator=(&v44);
        LogicArrayList<GameFontMapping>::add(v12, &v43);
        if ( v43.m_bytes + 1 > 8 )
          pHeap = (internal_t *)v43.internal.pHeap;
        else
          pHeap = &v43.internal;
        if ( v44.m_bytes + 1 > 8 )
          p_internal = (internal_t *)v44.internal.pHeap;
        else
          p_internal = &v44.internal;
        String::format((String *)"Adding mapping: %s => %s", v19, pHeap, p_internal);
        Debugger::print((Debugger *)v42, v22);
        String::~String();
        v25 = (_QWORD *)(a1 + 32);
        v26 = *(unsigned int *)(a1 + 44);
        if ( (int)v26 < 1 )
        {
    LABEL_32:
          v32 = (NativeFont *)(a2 + 8);
          if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
            v33 = *(NativeFont **)v32;
          else
            v33 = (NativeFont *)(a2 + 8);
          SystemFont = (NativeFont *)NativeFont::loadSystemFont(v33, 0, (float)a8, v24);
          v41 = SystemFont;
          if ( SystemFont )
          {
            if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
              v32 = *(NativeFont **)v32;
            v40 = (NativeFont *)NativeFont::loadSystemFont(v32, (const char *)1, (float)a8, v34);
            NativeFont::setGlyphMargin(SystemFont, a4, a5, a6, a7, a8);
            NativeFont::setGlyphMargin(v40, a4, a5, a6, a7, a8);
            LogicArrayList<NativeFont *>::add(a1 + 32, &v41);
            LogicArrayList<NativeFont *>::add(a1 + 48, &v40);
          }
        }
        else
        {
          for ( i = (int)v26 - 1LL; ; --i )
          {
            v28 = (int)i + 1 < 1 || (int)v26 <= i;
            if ( v28 )
            {
              String::format((String *)"LogicArrayList.get out of bounds %d/%d", v23, i, v26);
              Debugger::error((Debugger *)v48, v29);
            }
            v30 = *(_QWORD *)(*v25 + 8 * i);
            if ( v30 )
            {
              Name = NativeFont::getName(*(#1290 **)(*v25 + 8 * i));
              if ( (unsigned int)String::equalsIgnoreCase(a2, Name) )
              {
                if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v30 + 88LL))(v30) == a8 )
                  break;
              }
            }
            if ( i + 1 < 2 )
              goto LABEL_32;
            v26 = *(unsigned int *)(a1 + 44);
          }
        }
        String::~String();
        String::~String();
      }
    }

    void __fastcall FontManager::removeSystemFontByName(UdpSocket *this, const String *a2)
    {
      const char *v4; // x1
      __int64 v5; // x23
      __int64 v6; // x27
      bool v7; // cc
      __int64 v8; // x8
      const String *v9; // x1
      const String *v10; // x26
      int v11; // w26
      __int64 v12; // x21
      __int64 v13; // x24
      __int64 v14; // x8
      const String *v15; // x1
      #1290 *v16; // x23
      __int64 Name; // x0
      __int64 v18; // x21
      __int64 v19; // x24
      __int64 v20; // x8
      const String *v21; // x1
      #1290 *v22; // x23
      __int64 v23; // x0
      String v24; // [xsp+10h] [xbp-110h] BYREF
      String v25; // [xsp+40h] [xbp-E0h] BYREF
      String v26; // [xsp+58h] [xbp-C8h] BYREF
      String v27; // [xsp+70h] [xbp-B0h] BYREF
      String v28; // [xsp+88h] [xbp-98h] BYREF
      String v29; // [xsp+A0h] [xbp-80h] BYREF
      String v30; // [xsp+B8h] [xbp-68h] BYREF
    
      String::String(&v27);
      v5 = *((int *)this + 19);
      v6 = 48LL * ((int)v5 - 1);
      do
      {
        v7 = v5-- < 1;
        if ( v7 )
          break;
        v8 = *((unsigned int *)this + 19);
        if ( (int)v8 <= (int)v5 )
        {
          String::format((String *)"LogicArrayList.get out of bounds %d/%d", v4, v5, v8);
          Debugger::error((Debugger *)&v28, v9);
        }
        v10 = (const String *)(*((_QWORD *)this + 8) + v6);
        String::String(&v25, v10);
        String::String(&v26, v10 + 1);
        if ( (unsigned int)String::equalsIgnoreCase(&v25, a2) )
        {
          String::operator=(&v27);
          LogicArrayList<GameFontMapping>::remove(&v24, (char *)this + 64, v5);
          String::~String();
          String::~String();
          v11 = 2;
        }
        else
        {
          v11 = 0;
        }
        String::~String();
        String::~String();
        v6 -= 48;
      }
      while ( !v11 );
      if ( v27.m_length )
      {
        v12 = *((int *)this + 11);
        v13 = 8LL * ((int)v12 - 1);
        while ( 1 )
        {
          v7 = v12-- < 1;
          if ( v7 )
            break;
          v14 = *((unsigned int *)this + 11);
          if ( (int)v14 <= (int)v12 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", v4, v12, v14);
            Debugger::error((Debugger *)&v29, v15);
          }
          v16 = *(#1290 **)(*((_QWORD *)this + 4) + v13);
          Name = NativeFont::getName(v16);
          v13 -= 8;
          if ( (unsigned int)String::equalsIgnoreCase(&v27, Name) )
          {
            LogicArrayList<NativeFont *>::remove((char *)this + 32, v12);
            if ( v16 )
              (*(void (__fastcall **)(#1290 *))(*(_QWORD *)v16 + 8LL))(v16);
            break;
          }
        }
        v18 = *((int *)this + 15);
        v19 = 8LL * ((int)v18 - 1);
        while ( 1 )
        {
          v7 = v18-- < 1;
          if ( v7 )
            break;
          v20 = *((unsigned int *)this + 15);
          if ( (int)v20 <= (int)v18 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", v4, v18, v20);
            Debugger::error((Debugger *)&v30, v21);
          }
          v22 = *(#1290 **)(*((_QWORD *)this + 6) + v19);
          v23 = NativeFont::getName(v22);
          v19 -= 8;
          if ( (unsigned int)String::equalsIgnoreCase(&v27, v23) )
          {
            LogicArrayList<NativeFont *>::remove((char *)this + 48, v18);
            if ( v22 )
              (*(void (__fastcall **)(#1290 *))(*(_QWORD *)v22 + 8LL))(v22);
            break;
          }
        }
      }
      String::~String();
    }

    #1290 *__fastcall FontManager::getSystemFont(UdpSocket *this, const char *a2, int a3)
    {
      const char *v6; // x1
      __int64 v7; // x25
      __int64 v8; // x26
      bool v9; // cc
      __int64 v10; // x8
      const String *v11; // x1
      const String *v12; // x24
      int v13; // w24
      char *v14; // x21
      __int64 v15; // x22
      __int64 v16; // x23
      __int64 v17; // x8
      const String *v18; // x1
      #1290 *v19; // x20
      __int64 Name; // x0
      String v22; // [xsp+18h] [xbp-B8h] BYREF
      String v23; // [xsp+30h] [xbp-A0h] BYREF
      String v24; // [xsp+48h] [xbp-88h] BYREF
      String v25; // [xsp+60h] [xbp-70h] BYREF
      String v26; // [xsp+78h] [xbp-58h] BYREF
    
      String::String(&v24, "");
      v7 = *((int *)this + 19);
      v8 = 48LL * ((int)v7 - 1);
      do
      {
        v9 = v7-- < 1;
        if ( v9 )
          break;
        v10 = *((unsigned int *)this + 19);
        if ( (int)v10 <= (int)v7 )
        {
          String::format((String *)"LogicArrayList.get out of bounds %d/%d", v6, v7, v10);
          Debugger::error((Debugger *)&v25, v11);
        }
        v12 = (const String *)(*((_QWORD *)this + 8) + v8);
        String::String(&v22, v12);
        String::String(&v23, v12 + 1);
        if ( (unsigned int)String::equalsIgnoreCase(&v22, a2) )
        {
          String::operator=(&v24);
          v13 = 2;
        }
        else
        {
          v13 = 0;
        }
        String::~String();
        String::~String();
        v8 -= 48;
      }
      while ( !v13 );
      if ( v24.m_length )
      {
        if ( a3 )
          v14 = (char *)this + 48;
        else
          v14 = (char *)this + 32;
        v15 = *((int *)v14 + 3);
        v16 = 8LL * ((int)v15 - 1);
        while ( 1 )
        {
          v9 = v15-- < 1;
          if ( v9 )
            break;
          v17 = *((unsigned int *)v14 + 3);
          if ( (int)v17 <= (int)v15 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", v6, v15, v17);
            Debugger::error((Debugger *)&v26, v18);
          }
          v19 = *(#1290 **)(*(_QWORD *)v14 + v16);
          Name = NativeFont::getName(v19);
          v16 -= 8;
          if ( (unsigned int)String::equalsIgnoreCase(&v24, Name) )
            goto LABEL_20;
        }
      }
      v19 = 0;
    LABEL_20:
      String::~String();
      return v19;
    }

}; // end class FontManager
