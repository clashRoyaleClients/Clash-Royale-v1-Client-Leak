class SupercellSWF
{
public:

    __int64 __fastcall SupercellSWF::load(
            __int64 a1,
            const char *a2,
            bool a3,
            String *a4,
            bool a5,
            String *a6,
            const String *a7,
            __int64 a8,
            bool a9)
    {
      int Internal; // w8
      __int64 result; // x0
      const char *v18; // x1
    
      String::operator=((String *)(a1 + 56), a6);
      String::operator=((String *)(a1 + 80), a4);
      Internal = SupercellSWF::loadInternal((SupercellSWF *)a1, a2, a3, a4, a5, 0, a9);
      result = 0;
      if ( Internal )
      {
        if ( *(_BYTE *)(a1 + 26) )
        {
          v18 = (const char *)(a8 + 8);
          if ( *(_DWORD *)(a8 + 4) + 1 > 8 )
            v18 = *(const char **)v18;
          return SupercellSWF::loadInternal((SupercellSWF *)a1, v18, a3, a7, a5, 1, a9);
        }
        else
        {
          return 1;
        }
      }
      return result;
    }

    __int64 __fastcall SupercellSWF::loadInternal(
            __int64 a1,
            const char *a2,
            bool a3,
            __int64 a4,
            _BOOL4 a5,
            char a6,
            bool a7)
    {
      uint64_t NativeTime; // x28
      FILE **v11; // x26
      int v12; // w9
      int v13; // w24
      _BOOL4 v14; // w8
      _QWORD *v15; // x8
      __int64 v16; // x27
      _QWORD *v17; // x27
      _QWORD *v18; // x8
      internal_t *pHeap; // x8
      __int64 v20; // x0
      FILE **v21; // x27
      internal_t *p_internal; // x21
      internal_t *v23; // x1
      _BOOL4 v24; // w22
      __int64 v25; // x24
      uint64_t v26; // x19
      int v27; // w25
      int v28; // w21
      int v29; // w28
      int v30; // w22
      __int64 v31; // x27
      __int64 IndexOf; // x9
      const String *v33; // x1
      internal_t *v34; // x0
      FILE *v35; // x0
      int v36; // w8
      internal_t *v37; // x0
      unsigned __int16 Short; // w0
      int v39; // w26
      int v40; // w24
      __int64 v41; // x21
      int v42; // w22
      __int64 v43; // t2
      __int64 v44; // x0
      __int64 v45; // x0
      __int16 *v46; // x2
      signed __int64 v47; // x24
      __int64 v48; // x0
      __int64 v49; // x0
      void *v50; // x0
      signed __int64 i; // x21
      unsigned __int64 v52; // x22
      __int64 v53; // x8
      __int64 v54; // x0
      _QWORD *v55; // x26
      unsigned __int64 v56; // x21
      __int64 v57; // x22
      unsigned __int64 v58; // x21
      unsigned __int64 v59; // x24
      __int64 v60; // x9
      __int64 v61; // x0
      _QWORD *v62; // x26
      unsigned __int64 v63; // x21
      unsigned __int64 v64; // x22
      __int64 v65; // x8
      __int64 v66; // x0
      _QWORD *v67; // x26
      unsigned __int64 v68; // x21
      __int64 v69; // x22
      unsigned __int64 v70; // x22
      __int64 v71; // x8
      __int64 v72; // x0
      _QWORD *v73; // x26
      unsigned __int64 v74; // x21
      __int64 v75; // x22
      unsigned __int64 v76; // x22
      __int64 v77; // x8
      __int64 v78; // x0
      _QWORD *v79; // x26
      unsigned __int64 v80; // x21
      __int64 v81; // x22
      unsigned __int64 v82; // x21
      __int64 v83; // x24
      __int64 v84; // x9
      __int64 v85; // x0
      _QWORD *v86; // x26
      __int64 v87; // x21
      __int64 Tags; // x0
      void *v89; // x1
      __int64 v90; // x24
      __int64 v91; // x21
      __int64 j; // x22
      __int64 v93; // x23
      FILE **v94; // x23
      void *v95; // x23
      FILE *v96; // x0
      internal_t *v97; // x0
      FILE *v98; // x23
      uint64_t v99; // x0
      float PassedTimeMs; // s0
      _QWORD *v101; // x8
      String v106; // [xsp+30h] [xbp-3D0h] BYREF
      bool __ptr; // [xsp+4Fh] [xbp-3B1h] BYREF
      String v108; // [xsp+50h] [xbp-3B0h] BYREF
      String v109; // [xsp+68h] [xbp-398h] BYREF
      String v110; // [xsp+80h] [xbp-380h] BYREF
      String v111; // [xsp+98h] [xbp-368h] BYREF
      String v112; // [xsp+B0h] [xbp-350h] BYREF
      String v113; // [xsp+C8h] [xbp-338h] BYREF
      String v114; // [xsp+E0h] [xbp-320h] BYREF
      String v115; // [xsp+F8h] [xbp-308h] BYREF
      String v116; // [xsp+110h] [xbp-2F0h] BYREF
      String v117; // [xsp+128h] [xbp-2D8h] BYREF
      String v118; // [xsp+140h] [xbp-2C0h] BYREF
      String v119; // [xsp+158h] [xbp-2A8h] BYREF
      String v120; // [xsp+170h] [xbp-290h] BYREF
      String v121; // [xsp+188h] [xbp-278h] BYREF
      FILE *v122; // [xsp+1A0h] [xbp-260h] BYREF
      int v123; // [xsp+1ACh] [xbp-254h] BYREF
      String v124; // [xsp+1B0h] [xbp-250h] BYREF
      FILE *v125; // [xsp+1C8h] [xbp-238h] BYREF
      String v126; // [xsp+1D0h] [xbp-230h] BYREF
      String v127; // [xsp+1E8h] [xbp-218h] BYREF
      String v128; // [xsp+200h] [xbp-200h] BYREF
      String v129; // [xsp+218h] [xbp-1E8h] BYREF
      String v130; // [xsp+230h] [xbp-1D0h] BYREF
      int v131; // [xsp+248h] [xbp-1B8h] BYREF
      __int16 v132; // [xsp+24Eh] [xbp-1B2h] BYREF
      String v133; // [xsp+250h] [xbp-1B0h] BYREF
      int Size; // [xsp+268h] [xbp-198h] BYREF
      unsigned int __n; // [xsp+26Ch] [xbp-194h] BYREF
      String v136; // [xsp+270h] [xbp-190h] BYREF
      String v137; // [xsp+288h] [xbp-178h] BYREF
      int v138; // [xsp+2A4h] [xbp-15Ch] BYREF
      _BYTE __s2[128]; // [xsp+2A8h] [xbp-158h] BYREF
      _BYTE __b[128]; // [xsp+328h] [xbp-D8h] BYREF
    
      if ( !a2 )
        a2 = "";
      String::String(&v137, a2);
      NativeTime = xTimer::getNativeTime();
      Debugger::doAssert(*(_QWORD *)(a1 + 16) == 0, "");
      Debugger::doAssert(*(_QWORD *)a1 == 0, "");
      Debugger::doAssert(*(_QWORD *)(a1 + 8) == 0, "");
      String::String((__int64)&v136);
      __n = 0;
      memset(__b, 0, sizeof(__b));
      Size = 0;
      v11 = (FILE **)operator new(8);
      TitanInputFile::TitanInputFile(v11, (__int64)&v137, "rb");
      if ( !TitanInputFile::isOpen((LogicBuyResourcesCommand *)v11) )
      {
        operator+("Couldn't open ", (__int64)&v137, (__int64)&v133);
        Debugger::error(&v133);
      }
      Size = TitanInputFile::getSize(v11);
      v132 = 0;
      v131 = 0;
      TitanInputFile::read(v11, &v132, 1, 2);
      TitanInputFile::read(v11, &v131, 4, 1);
      v12 = (v131 >> 24) | (v131 << 24) | (v131 << 8) & 0xFF0000 | ((unsigned int)v131 >> 8) & 0xFF00;
      v131 = v12;
      if ( (unsigned __int8)v132 == 83 && (unsigned int)(v12 - 1) <= 0x63 && (v132 & 0xFF00) == 0x4300 )
      {
        TitanInputFile::read(v11, &__n, 4, 1);
        __n = ((int)__n >> 24) | (__n << 24) | (__n << 8) & 0xFF0000 | (__n >> 8) & 0xFF00;
        TitanInputFile::read(v11, __b, 1, __n);
        v13 = 0;
      }
      else
      {
        TitanInputFile::seek(v11, 0, 0);
        v13 = 1;
      }
      if ( SupercellSWF::sm_cacheLocally
        || (!qword_1004F7360
          ? (v14 = 0)
          : (v14 = std::_Rb_tree<String,String,std::_Identity<String>,std::less<String>,std::allocator<String>>::find(
                     &SupercellSWF::sm_individuallyCachedFiles,
                     a4) != (_QWORD)&qword_1004F7340),
            SupercellSWF::sm_loadFromCache || v14) )
      {
        v17 = (_QWORD *)(a4 + 8);
        if ( *(_DWORD *)(a4 + 4) + 1 > 8 )
          v18 = (_QWORD *)*v17;
        else
          v18 = (_QWORD *)(a4 + 8);
        String::format((String *)"Loading SC %s ", (__int64)&v130, v18);
        Path::cachePath(&v128);
        if ( v128.m_bytes + 1 > 8 )
          pHeap = (internal_t *)v128.internal.pHeap;
        else
          pHeap = &v128.internal;
        if ( *(_DWORD *)(a4 + 4) + 1 > 8 )
          v17 = (_QWORD *)*v17;
        String::format((String *)"%s/swfcache/%s", (__int64)&v129, pHeap, v17);
        String::operator=(&v136, &v129);
        String::~String((__int64)&v129);
        String::~String((__int64)&v128);
        if ( v13 )
        {
          String::String(&v126, ".hash");
          SupercellSWF::getModifiedPath(&v127);
          String::~String((__int64)&v126);
          TitanInputFile::TitanInputFile(&v125, (__int64)&v127, "rb");
          if ( !TitanInputFile::isOpen((LogicBuyResourcesCommand *)&v125) )
          {
            operator+("Unable to find ", (__int64)&v127, (__int64)&v124);
            Debugger::error(&v124);
          }
          __n = TitanInputFile::getSize(&v125);
          TitanInputFile::read(&v125, __b, 1, __n);
          TitanInputFile::close(&v125);
          TitanInputFile::~TitanInputFile(&v125);
          String::~String((__int64)&v127);
        }
        v20 = operator new(131112);
        v21 = (FILE **)v20;
        *(_QWORD *)(v20 + 16) = 0;
        *(_QWORD *)v20 = 0;
        *(_QWORD *)(v20 + 131104) = 0;
        *(_QWORD *)(v20 + 131096) = 0;
        *(_QWORD *)(v20 + 8) = 0;
        p_internal = &v136.internal;
        if ( v136.m_bytes + 1 > 8 )
          v23 = (internal_t *)v136.internal.pHeap;
        else
          v23 = &v136.internal;
        if ( (unsigned int)BufferedReadFile::open((GLfloat *)v20, (const char *)v23) )
        {
          memset(__s2, 0, sizeof(__s2));
          v123 = 0;
          String::String(&v120, ".info");
          SupercellSWF::getModifiedPath(&v121);
          TitanInputFile::TitanInputFile(&v122, (__int64)&v121, "rb");
          String::~String((__int64)&v121);
          String::~String((__int64)&v120);
          if ( TitanInputFile::isOpen((LogicBuyResourcesCommand *)&v122) )
          {
            TitanInputFile::read(&v122, __s2, 1, __n);
            v24 = TitanInputFile::read(&v122) != 0;
            TitanInputFile::read(&v122, &v123, 4, 1);
          }
          else
          {
            String::String(&v119, " - couldn't open cache file info for reading!");
            String::operator+=(&v130.m_length, &v119);
            String::~String((__int64)&v119);
            v24 = 0;
          }
          TitanInputFile::~TitanInputFile(&v122);
          v25 = a4;
          v26 = NativeTime;
          v27 = v123;
          v28 = Size;
          v29 = memcmp(__b, __s2, (int)__n);
          v30 = v24 ^ a5;
          if ( (v30 & 1) == 0 && v27 == v28 && !v29 )
          {
            String::String(&v115, "from cache.");
            NativeTime = v26;
            a4 = v25;
            String::operator+=(&v130.m_length, &v115);
            String::~String((__int64)&v115);
            TitanInputFile::~TitanInputFile(v11);
            operator delete(v11);
            LOBYTE(a5) = 0;
    LABEL_71:
            *(_QWORD *)(a1 + 8) = v21;
            if ( v130.m_bytes + 1 > 8 )
              v37 = (internal_t *)v130.internal.pHeap;
            else
              v37 = &v130.internal;
            Debugger::print((__int64)v37);
            String::~String((__int64)&v130);
            goto LABEL_75;
          }
          if ( *v21 )
            fclose(*v21);
          operator delete(v21);
          if ( v29 )
          {
            String::String(&v118, "- file has been changed, ignoring cache.");
            NativeTime = v26;
            a4 = v25;
            p_internal = &v136.internal;
            String::operator+=(&v130.m_length, &v118);
            String::~String((__int64)&v118);
          }
          else if ( v27 == v28 )
          {
            NativeTime = v26;
            a4 = v25;
            p_internal = &v136.internal;
            if ( v30 )
            {
              String::String(&v116, "- file was cached with different resolution options, ignoring cache.");
              String::operator+=(&v130.m_length, &v116);
              String::~String((__int64)&v116);
            }
          }
          else
          {
            String::String(&v117, "- file size is incorrect, ignoring cache.");
            NativeTime = v26;
            a4 = v25;
            p_internal = &v136.internal;
            String::operator+=(&v130.m_length, &v117);
            String::~String((__int64)&v117);
          }
        }
        else
        {
          if ( *v21 )
            fclose(*v21);
          operator delete(v21);
          String::String(&v114, "- file is missing from cache.");
          String::operator+=(&v130.m_length, &v114);
          String::~String((__int64)&v114);
        }
        v31 = operator new(65744);
        LZMAReader::LZMAReader(v31, v11, 1);
        *(_QWORD *)a1 = v31;
        if ( SupercellSWF::sm_cacheLocally
          || qword_1004F7360
          && (__int64 *)std::_Rb_tree<String,String,std::_Identity<String>,std::less<String>,std::allocator<String>>::find(
                          &SupercellSWF::sm_individuallyCachedFiles,
                          a4) != &qword_1004F7340 )
        {
          IndexOf = String::lastIndexOf(&v136.m_length, 47);
          if ( (_DWORD)IndexOf == -1 && (IndexOf = String::lastIndexOf(&v136.m_length, 92), (_DWORD)IndexOf == -1) )
            String::String(&v113, "");
          else
            String::substring((unsigned int *)&v136, 0, IndexOf, (__int64)&v113);
          Path::mkdir((LogicTileMap *)&v113, v33);
          if ( v136.m_bytes + 1 > 8 )
            v34 = (internal_t *)v136.internal.pHeap;
          else
            v34 = &v136.internal;
          v35 = fopen((const char *)v34, "wb");
          *(_QWORD *)(a1 + 16) = v35;
          v36 = v136.m_bytes + 1;
          if ( v35 )
          {
            if ( v36 > 8 )
              p_internal = (internal_t *)v136.internal.pHeap;
            String::format((String *)" Caching to %s", (__int64)&v111, p_internal);
            String::operator+=(&v130.m_length, &v111);
            String::~String((__int64)&v111);
          }
          else
          {
            if ( v36 > 8 )
              p_internal = (internal_t *)v136.internal.pHeap;
            String::format((String *)" Couldn't open cache file %s for writing!", (__int64)&v112, p_internal);
            String::operator+=(&v130.m_length, &v112);
            String::~String((__int64)&v112);
          }
          String::~String((__int64)&v113);
        }
        v21 = 0;
        goto LABEL_71;
      }
      v15 = (_QWORD *)(a4 + 8);
      if ( *(_DWORD *)(a4 + 4) + 1 > 8 )
        v15 = (_QWORD *)*v15;
      String::format((String *)"Loading SC %s", (__int64)&v110, v15);
      Debugger::print(&v110);
      String::~String((__int64)&v110);
      v16 = operator new(65744);
      LZMAReader::LZMAReader(v16, v11, 1);
      *(_QWORD *)a1 = v16;
    LABEL_75:
      if ( (a6 & 1) == 0 )
      {
        *(_DWORD *)(a1 + 28) = (unsigned __int16)SupercellSWF::readShort((SupercellSWF *)a1);
        *(_DWORD *)(a1 + 32) = (unsigned __int16)SupercellSWF::readShort((SupercellSWF *)a1);
        *(_DWORD *)(a1 + 36) = (unsigned __int16)SupercellSWF::readShort((SupercellSWF *)a1);
        *(_DWORD *)(a1 + 44) = (unsigned __int16)SupercellSWF::readShort((SupercellSWF *)a1);
        *(_DWORD *)(a1 + 48) = (unsigned __int16)SupercellSWF::readShort((SupercellSWF *)a1);
        *(_DWORD *)(a1 + 52) = (unsigned __int16)SupercellSWF::readShort((SupercellSWF *)a1);
        SupercellSWF::readUnsignedChar((SupercellSWF *)a1);
        SupercellSWF::readShort((SupercellSWF *)a1);
        SupercellSWF::readShort((SupercellSWF *)a1);
        Short = SupercellSWF::readShort((SupercellSWF *)a1);
        v39 = Short;
        *(_DWORD *)(a1 + 40) = Short;
        v40 = *(_DWORD *)(a1 + 32);
        v41 = *(int *)(a1 + 28);
        v42 = *(_DWORD *)(a1 + 44);
        v43 = (int)(v41 + Short + v40 + v42);
        if ( __CFADD__(v43, v43) )
          v44 = -1;
        else
          v44 = 2LL * (int)(v41 + Short + v40 + v42);
        v45 = operator new[](v44);
        *(_QWORD *)(a1 + 152) = v45;
        *(_QWORD *)(a1 + 136) = v45 + 2 * v41;
        *(_QWORD *)(a1 + 112) = v45 + 2LL * (v40 + (int)v41);
        v46 = (__int16 *)(v45 + 2LL * (v40 + (int)v41 + v42));
        *(_QWORD *)(a1 + 160) = v46;
        SupercellSWF::readShortArray((SupercellSWF *)a1, v39, v46);
        v47 = *(int *)(a1 + 40);
        if ( is_mul_ok(v47, 8u) )
          v48 = 8 * v47;
        else
          v48 = -1;
        *(_QWORD *)(a1 + 168) = operator new[](v48);
        if ( v47 < 0 )
          v49 = -1;
        else
          v49 = v47;
        v50 = (void *)operator new[](v49);
        *(_QWORD *)(a1 + 176) = v50;
        if ( (int)v47 >= 1 )
        {
          bzero(v50, (unsigned int)(v47 - 1) + 1LL);
          for ( i = 0; i < v47; ++i )
          {
            v138 = 0;
            *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * i) = SupercellSWF::readAscii((jpeg_decoder_file_stream *)a1, &v138, 0);
          }
        }
        v52 = *(int *)(a1 + 28);
        v53 = 24 * v52 + 16;
        if ( 24 * v52 >= 0xFFFFFFFFFFFFFFF0LL )
          v53 = -1;
        if ( is_mul_ok(v52, 0x18u) )
          v54 = v53;
        else
          v54 = -1;
        v55 = (_QWORD *)operator new[](v54);
        *v55 = 24;
        v55[1] = v52;
        if ( (_DWORD)v52 )
        {
          v56 = 0;
          v57 = 24 * v52;
          do
          {
            ShapeOriginal::ShapeOriginal((ShapeOriginal *)&v55[v56 / 8 + 2]);
            v56 += 24LL;
          }
          while ( v57 != v56 );
        }
        *(_QWORD *)(a1 + 144) = v55 + 2;
        v58 = *(int *)(a1 + 32);
        v59 = v58 << 6;
        v60 = (v58 << 6) + 16;
        if ( v58 << 6 >= 0xFFFFFFFFFFFFFFF0LL )
          v60 = -1;
        if ( is_mul_ok(v58, 0x40u) )
          v61 = v60;
        else
          v61 = -1;
        v62 = (_QWORD *)operator new[](v61);
        *v62 = 64;
        v62[1] = v58;
        if ( (_DWORD)v58 )
        {
          v63 = 0;
          do
          {
            MovieClipOriginal::MovieClipOriginal(&v62[v63 / 8 + 2]);
            v63 += 64LL;
          }
          while ( v59 != v63 );
        }
        *(_QWORD *)(a1 + 128) = v62 + 2;
        v64 = *(int *)(a1 + 44);
        v65 = 48 * v64 + 16;
        if ( 48 * v64 >= 0xFFFFFFFFFFFFFFF0LL )
          v65 = -1;
        if ( is_mul_ok(v64, 0x30u) )
          v66 = v65;
        else
          v66 = -1;
        v67 = (_QWORD *)operator new[](v66);
        *v67 = 48;
        v67[1] = v64;
        if ( (_DWORD)v64 )
        {
          v68 = 0;
          v69 = 48 * v64;
          do
          {
            TextFieldOriginal::TextFieldOriginal((_guard_variable_for_Assert *)&v67[v68 / 8 + 2]);
            v68 += 48LL;
          }
          while ( v69 != v68 );
        }
        *(_QWORD *)(a1 + 104) = v67 + 2;
        v70 = *(int *)(a1 + 36);
        v71 = 72 * v70 + 16;
        if ( 72 * v70 >= 0xFFFFFFFFFFFFFFF0LL )
          v71 = -1;
        if ( is_mul_ok(v70, 0x48u) )
          v72 = v71;
        else
          v72 = -1;
        v73 = (_QWORD *)operator new[](v72);
        *v73 = 72;
        v73[1] = v70;
        if ( (_DWORD)v70 )
        {
          v74 = 0;
          v75 = 72 * v70;
          do
          {
            SWFTexture::SWFTexture((SWFTexture *)&v73[v74 / 8 + 2]);
            v74 += 72LL;
          }
          while ( v75 != v74 );
        }
        *(_QWORD *)(a1 + 120) = v73 + 2;
        v76 = *(int *)(a1 + 48);
        v77 = 24 * v76 + 16;
        if ( 24 * v76 >= 0xFFFFFFFFFFFFFFF0LL )
          v77 = -1;
        if ( is_mul_ok(v76, 0x18u) )
          v78 = v77;
        else
          v78 = -1;
        v79 = (_QWORD *)operator new[](v78);
        *v79 = 24;
        v79[1] = v76;
        if ( (_DWORD)v76 )
        {
          v80 = 0;
          v81 = 24 * v76;
          do
          {
            Matrix2x3::Matrix2x3((Matrix2x3 *)&v79[v80 / 8 + 2]);
            v80 += 24LL;
          }
          while ( v81 != v80 );
        }
        *(_QWORD *)(a1 + 184) = v79 + 2;
        v82 = *(int *)(a1 + 52);
        v83 = 7 * v82;
        v84 = 7 * v82 + 16;
        if ( 7 * v82 >= 0xFFFFFFFFFFFFFFF0LL )
          v84 = -1;
        if ( is_mul_ok(v82, 7u) )
          v85 = v84;
        else
          v85 = -1;
        v86 = (_QWORD *)operator new[](v85);
        *v86 = 7;
        v86[1] = v82;
        if ( (_DWORD)v82 )
        {
          v87 = 0;
          do
          {
            ColorTransform::ColorTransform((__int64)v86 + v87 + 16);
            v87 += 7;
          }
          while ( v83 != v87 );
        }
        *(_QWORD *)(a1 + 192) = v86 + 2;
      }
      Tags = SupercellSWF::loadTags((SupercellSWF *)a1, a3, a5, a7);
      v90 = Tags;
      if ( (a6 & 1) == 0 && (((unsigned int)Tags ^ 1) & 1) == 0 )
      {
        v91 = *(int *)(a1 + 40);
        if ( (int)v91 >= 1 )
        {
          for ( j = 0; j < v91; ++j )
          {
            v93 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * j);
            *(_QWORD *)(SupercellSWF::getOriginalMovieClip(
                          a1,
                          (unsigned int)*(__int16 *)(*(_QWORD *)(a1 + 160) + 2 * j),
                          v93)
                      + 8) = v93;
          }
        }
      }
      v94 = *(FILE ***)(a1 + 8);
      if ( v94 )
      {
        if ( *v94 )
          fclose(*v94);
        operator delete(v94);
      }
      *(_QWORD *)(a1 + 8) = 0;
      v95 = *(void **)a1;
      if ( *(_QWORD *)a1 )
      {
        LZMAReader::~LZMAReader(*(_QWORD *)a1, v89);
        operator delete(v95);
      }
      *(_QWORD *)a1 = 0;
      if ( SupercellSWF::sm_cacheLocally
        || qword_1004F7360
        && (__int64 *)std::_Rb_tree<String,String,std::_Identity<String>,std::less<String>,std::allocator<String>>::find(
                        &SupercellSWF::sm_individuallyCachedFiles,
                        a4) != &qword_1004F7340 )
      {
        v96 = *(FILE **)(a1 + 16);
        if ( v96 )
        {
          fclose(v96);
          if ( (_DWORD)v90 )
          {
            String::String(&v108, ".info");
            SupercellSWF::getModifiedPath(&v109);
            if ( v109.m_bytes + 1 > 8 )
              v97 = (internal_t *)v109.internal.pHeap;
            else
              v97 = &v109.internal;
            v98 = fopen((const char *)v97, "wb");
            String::~String((__int64)&v109);
            String::~String((__int64)&v108);
            if ( !v98 )
              Debugger::error("Failed to create sc .info file");
            fwrite(__b, 1u, (int)__n, v98);
            __ptr = a5;
            fwrite(&__ptr, 1u, 1u, v98);
            fwrite(&Size, 4u, 1u, v98);
            fclose(v98);
          }
        }
      }
      *(_QWORD *)(a1 + 16) = 0;
      v99 = xTimer::getNativeTime();
      PassedTimeMs = xTimer::getPassedTimeMs(NativeTime, v99);
      v101 = (_QWORD *)(a4 + 8);
      if ( *(_DWORD *)(a4 + 4) + 1 > 8 )
        v101 = (_QWORD *)*v101;
      String::format((String *)"Loading SC %s took %d ms", (__int64)&v106, v101, (unsigned int)(int)PassedTimeMs);
      Debugger::print(&v106);
      String::~String((__int64)&v106);
      String::~String((__int64)&v136);
      String::~String((__int64)&v137);
      return v90;
    }

    void __usercall SupercellSWF::getModifiedPath(String *a1@<X1>, String *a2@<X2>, __int64 *a3@<X8>)
    {
      String v6; // [xsp+8h] [xbp-38h] BYREF
    
      if ( String::endsWith(a1, ".sc") )
      {
        String::substring((unsigned int *)a1, 0, (unsigned int)(a1->m_length - 3), (__int64)&v6);
        operator+(a3, &v6, a2);
        String::~String((__int64)&v6);
      }
      else
      {
        String::String((__int64)a3, a1);
      }
    }

    __int64 __fastcall SupercellSWF::readShort(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      GLfloat *v8; // x0
      __int16 Short; // w0
      FILE *v10; // x3
      __int16 __ptr; // [xsp+Eh] [xbp-12h] BYREF
    
      v8 = *(GLfloat **)(a1 + 8);
      if ( v8 )
        Short = BufferedReadFile::readShort(v8);
      else
        Short = LZMAReader::readShort(*(int **)a1, a2, a3, a4, a5, a6, a7);
      __ptr = Short;
      v10 = *(FILE **)(a1 + 16);
      if ( v10 && !*(_BYTE *)(a1 + 24) )
      {
        fwrite(&__ptr, 1u, 2u, v10);
        return (unsigned int)__ptr;
      }
      return (unsigned int)Short;
    }

    __int64 __fastcall SupercellSWF::readUnsignedChar(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      GLfloat *v8; // x0
      __int64 result; // x0
      FILE *v10; // x3
      unsigned __int8 __ptr; // [xsp+Fh] [xbp-11h] BYREF
    
      v8 = *(GLfloat **)(a1 + 8);
      if ( v8 )
        result = BufferedReadFile::readByte(v8);
      else
        result = LZMAReader::readUnsignedChar(*(int **)a1, a2, a3, a4, a5, a6, a7);
      __ptr = result;
      v10 = *(FILE **)(a1 + 16);
      if ( v10 )
      {
        if ( !*(_BYTE *)(a1 + 24) )
        {
          fwrite(&__ptr, 1u, 1u, v10);
          return __ptr;
        }
      }
      return result;
    }

    size_t __fastcall SupercellSWF::readShortArray(
            __int64 a1,
            __int64 a2,
            char *a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int v8; // w20
      _QWORD *v10; // x0
      size_t result; // x0
      FILE *v12; // x3
    
      v8 = a2;
      v10 = *(_QWORD **)(a1 + 8);
      if ( v10 )
        result = (size_t)BufferedReadFile::read(v10, 2LL * (int)a2, a3);
      else
        result = LZMAReader::readShortArray(*(_QWORD *)a1, a2, (__int64)a3, a4, a5, a6, a7);
      v12 = *(FILE **)(a1 + 16);
      if ( v12 )
      {
        if ( !*(_BYTE *)(a1 + 24) )
          return fwrite(a3, 2u, v8, v12);
      }
      return result;
    }

    __int64 __fastcall SupercellSWF::readAscii(jpeg_decoder_file_stream *a1)
    {
      int v2; // [xsp+Ch] [xbp-4h] BYREF
    
      v2 = 0;
      return SupercellSWF::readAscii(a1, &v2, 0);
    }

    __int64 __fastcall SupercellSWF::loadTags(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      __int64 v7; // x27
      _BOOL4 v9; // w8
      __int64 v10; // x20
      int v11; // w21
      int v12; // w19
      FILE *v13; // x0
      __int64 v14; // x24
      int UnsignedChar; // w28
      int Int; // w26
      FILE *v17; // x0
      int v18; // w25
      __int64 result; // x0
      __int64 v20; // kr00_8
      int v21; // w24
      int v22; // w8
      int v23; // w3
      SWFTexture *v24; // x0
      char v25; // w8
      char v26; // w26
      FILE *v27; // x3
      FILE *v28; // x3
      __int64 v29; // x0
      __int64 v30; // x24
      __int64 v31; // x0
      char *v32; // x25
      __int64 v33; // x3
      __int64 v34; // x4
      __int64 v35; // x5
      unsigned int v36; // w6
      FILE *v37; // x0
      char v38; // [xsp+10h] [xbp-100h]
      unsigned int v39; // [xsp+14h] [xbp-FCh]
      int v40; // [xsp+18h] [xbp-F8h]
      int v41; // [xsp+20h] [xbp-F0h]
      char v42; // [xsp+28h] [xbp-E8h]
      bool v43; // [xsp+2Ch] [xbp-E4h]
      int v44; // [xsp+30h] [xbp-E0h]
      char v45; // [xsp+38h] [xbp-D8h]
      char v46; // [xsp+44h] [xbp-CCh]
      __int64 v47; // [xsp+48h] [xbp-C8h]
      int v48; // [xsp+50h] [xbp-C0h]
      String v49; // [xsp+58h] [xbp-B8h] BYREF
      String v50; // [xsp+70h] [xbp-A0h] BYREF
      String v51; // [xsp+88h] [xbp-88h] BYREF
      String v52; // [xsp+A0h] [xbp-70h] BYREF
      int __ptr; // [xsp+BCh] [xbp-54h] BYREF
    
      v42 = a2;
      v43 = a4;
      if ( *(_BYTE *)(a1 + 26) )
      {
        v9 = *(_BYTE *)(a1 + 25) != 0;
        v46 = v9 & (a3 ^ 1);
        v10 = v9 & (unsigned int)a3;
      }
      else
      {
        v46 = 0;
        v10 = 0;
      }
      v41 = 0;
      v40 = 0;
      v11 = 0;
      v12 = 0;
      v44 = 0;
      v48 = 0;
      v38 = a3 ^ 1;
      v39 = a3;
      v47 = a1 + 80;
      v45 = 1;
      while ( 2 )
      {
        v13 = *(FILE **)(a1 + 16);
        if ( v13 )
          v14 = ftell(v13);
        else
          v14 = 0;
        UnsignedChar = SupercellSWF::readUnsignedChar(a1, a2, a3, a4, a5, a6, a7);
        Int = SupercellSWF::readInt((SupercellSWF *)a1);
        v17 = *(FILE **)(a1 + 16);
        if ( v17 )
          v18 = ftell(v17);
        else
          v18 = 0;
        result = 1;
        v20 = v7;
        v7 = v10;
        switch ( UnsignedChar )
        {
          case 0:
            return result;
          case 1:
          case 16:
            goto LABEL_26;
          case 2:
          case 18:
            if ( v44 >= *(_DWORD *)(a1 + 28) )
            {
              operator+("Trying to load too many shapes from ", v47, (__int64)&v51);
              Debugger::error(&v51);
            }
            *(_WORD *)(*(_QWORD *)(a1 + 152) + 2LL * v44) = ShapeOriginal::load(
                                                              (DataLoaderSound *)(*(_QWORD *)(a1 + 144) + 24LL * v44),
                                                              (jpeg_decoder_file_stream *)a1,
                                                              UnsignedChar);
            ++v44;
            continue;
          case 3:
          case 10:
          case 12:
          case 14:
            if ( v12 >= *(_DWORD *)(a1 + 32) )
            {
              operator+("Trying to load too many MovieClips from ", v47, (__int64)&v50);
              Debugger::error(&v50);
            }
            *(_DWORD *)(a1 + 232) = UnsignedChar;
            *(_WORD *)(*(_QWORD *)(a1 + 136) + 2LL * v12) = MovieClipOriginal::load(
                                                              *(_QWORD *)(a1 + 128) + ((__int64)v12 << 6),
                                                              (SupercellSWF *)a1,
                                                              UnsignedChar);
            ++v12;
            continue;
          case 7:
          case 15:
          case 20:
          case 21:
          case 25:
            if ( v11 >= *(_DWORD *)(a1 + 44) )
            {
              operator+("Trying to load too many TextFields from ", v47, (__int64)&v49);
              Debugger::error(&v49);
            }
            *(_WORD *)(*(_QWORD *)(a1 + 112) + 2LL * v11) = TextFieldOriginal::load(
                                                              (_guard_variable_for_Assert *)(*(_QWORD *)(a1 + 104)
                                                                                           + 48LL * v11),
                                                              (jpeg_decoder_file_stream *)a1,
                                                              UnsignedChar);
            ++v11;
            continue;
          case 8:
            SupercellSWF::readMatrix2x3(a1, *(_QWORD *)(a1 + 184) + 24LL * v40++);
            continue;
          case 9:
            SupercellSWF::readColorTransform(
              (jpeg_decoder_file_stream *)a1,
              (BitmapFont *)(*(_QWORD *)(a1 + 192) + 7LL * v41++));
            continue;
          case 13:
            v29 = SupercellSWF::readInt((SupercellSWF *)a1);
            v30 = v29;
            if ( __CFADD__((int)v29, (int)v29) )
              v31 = -1;
            else
              v31 = 2LL * (int)v29;
            v32 = (char *)operator new[](v31);
            SupercellSWF::readShortArray(a1, v30, v32, v33, v34, v35, v36);
            *(_QWORD *)(a1 + 208) = v32;
            continue;
          case 19:
          case 24:
            v7 = 0;
    LABEL_26:
            if ( v48 >= *(_DWORD *)(a1 + 36) )
            {
              operator+("Trying to load too many textures from ", v47, (__int64)&v52);
              Debugger::error(&v52);
            }
            if ( SupercellSWF::sm_supportMipmaps )
              v22 = UnsignedChar;
            else
              v22 = 1;
            if ( UnsignedChar == 16 )
              v23 = v22;
            else
              v23 = UnsignedChar;
            v24 = (SWFTexture *)(*(_QWORD *)(a1 + 120) + 72LL * v48);
            v25 = v46 & (v7 ^ 1) | v42;
            if ( *(_QWORD *)(a1 + 16) && (((unsigned __int8)v7 ^ 1) & 1) == 0 )
            {
              *(_BYTE *)(a1 + 24) = 1;
              v26 = SWFTexture::load(v24, (SupercellSWF *)a1, v25 & 1, v23, v7 & 1, v45 & 1, v43);
              *(_BYTE *)(a1 + 24) = 0;
              v7 = ftell(*(FILE **)(a1 + 16));
              fseek(*(FILE **)(a1 + 16), v14, 0);
              LOBYTE(__ptr) = UnsignedChar;
              v27 = *(FILE **)(a1 + 16);
              if ( v27 )
              {
                fwrite(&__ptr, 1u, 1u, v27);
                v28 = *(FILE **)(a1 + 16);
              }
              else
              {
                v28 = 0;
              }
              __ptr = v7 - v18;
              if ( v28 )
              {
                fwrite(&__ptr, 4u, 1u, v28);
                v37 = *(FILE **)(a1 + 16);
              }
              else
              {
                v37 = 0;
              }
              fseek(v37, v7, 0);
              result = 0;
              if ( (v26 & 1) == 0 )
                return result;
    LABEL_53:
              ++v48;
              continue;
            }
            if ( (unsigned int)SWFTexture::load(v24, (SupercellSWF *)a1, v25 & 1, v23, v7 & 1, v45 & 1, v43) )
              goto LABEL_53;
            return 0;
          case 23:
            *(_BYTE *)(a1 + 25) = 1;
            v46 |= v38;
            v10 = v39;
            continue;
          case 26:
            v45 = 0;
            *(_BYTE *)(a1 + 26) = 1;
            continue;
          default:
            v7 = v20;
            if ( Int >= 1 )
            {
              v21 = Int + 1;
              do
              {
                SupercellSWF::readUnsignedChar(a1, a2, a3, a4, a5, a6, a7);
                --v21;
              }
              while ( v21 > 1 );
            }
            continue;
        }
      }
    }

    __int64 __fastcall SupercellSWF::getOriginalMovieClip(__int64 a1, __int64 a2, __int64 a3)
    {
      __int64 v4; // x8
      __int64 v5; // x9
      __int64 v6; // x10
      _QWORD *v7; // x8
      _DWORD v9[6]; // [xsp+10h] [xbp-40h] BYREF
      String v10; // [xsp+28h] [xbp-28h] BYREF
    
      v4 = *(int *)(a1 + 32);
      if ( (int)v4 < 1 )
      {
    LABEL_5:
        v7 = (_QWORD *)(a1 + 88);
        if ( *(_DWORD *)(a1 + 84) + 1 > 8 )
          v7 = (_QWORD *)*v7;
        String::format((String *)"Unable to find MovieClip id %d from %s", (__int64)&v10, a2, v7);
        if ( a3 )
        {
          String::format((String *)" needed by export name %s", (__int64)v9, a3);
          String::operator+=(&v10.m_length, v9);
          String::~String((__int64)v9);
        }
        Debugger::error(&v10);
      }
      v5 = 0;
      v6 = 0;
      while ( *(unsigned __int16 *)(*(_QWORD *)(a1 + 136) + 2 * v6) != (unsigned __int16)a2 )
      {
        ++v6;
        v5 += 64;
        if ( v6 >= v4 )
          goto LABEL_5;
      }
      return *(_QWORD *)(a1 + 128) + v5;
    }

    __int64 __fastcall SupercellSWF::readInt(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      GLfloat *v8; // x0
      __int64 result; // x0
      FILE *v10; // x3
      unsigned int __ptr; // [xsp+Ch] [xbp-14h] BYREF
    
      v8 = *(GLfloat **)(a1 + 8);
      if ( v8 )
        result = BufferedReadFile::readInt(v8);
      else
        result = LZMAReader::readInt(*(int **)a1, a2, a3, a4, a5, a6, a7);
      __ptr = result;
      v10 = *(FILE **)(a1 + 16);
      if ( v10 )
      {
        if ( !*(_BYTE *)(a1 + 24) )
        {
          fwrite(&__ptr, 1u, 4u, v10);
          return __ptr;
        }
      }
      return result;
    }

    size_t __fastcall SupercellSWF::cacheByte(size_t result, char a2)
    {
      FILE *v2; // x3
      char __ptr; // [xsp+Fh] [xbp-1h] BYREF
    
      __ptr = a2;
      v2 = *(FILE **)(result + 16);
      if ( v2 )
        return fwrite(&__ptr, 1u, 1u, v2);
      return result;
    }

    float __fastcall SupercellSWF::readMatrix2x3(
            __int64 a1,
            float *a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      __int64 v9; // x1
      __int64 v10; // x2
      __int64 v11; // x3
      __int64 v12; // x4
      __int64 v13; // x5
      unsigned int v14; // w6
      __int64 v15; // x1
      __int64 v16; // x2
      __int64 v17; // x3
      __int64 v18; // x4
      __int64 v19; // x5
      unsigned int v20; // w6
      __int64 v21; // x1
      __int64 v22; // x2
      __int64 v23; // x3
      __int64 v24; // x4
      __int64 v25; // x5
      unsigned int v26; // w6
      __int64 v27; // x1
      __int64 v28; // x2
      __int64 v29; // x3
      __int64 v30; // x4
      __int64 v31; // x5
      unsigned int v32; // w6
      __int64 v33; // x1
      __int64 v34; // x2
      __int64 v35; // x3
      __int64 v36; // x4
      __int64 v37; // x5
      unsigned int v38; // w6
      float result; // s0
    
      *a2 = (float)(int)SupercellSWF::readInt(a1, (__int64)a2, a3, a4, a5, a6, a7) * 0.00097656;
      a2[1] = (float)(int)SupercellSWF::readInt(a1, v9, v10, v11, v12, v13, v14) * 0.00097656;
      a2[2] = (float)(int)SupercellSWF::readInt(a1, v15, v16, v17, v18, v19, v20) * 0.00097656;
      a2[3] = (float)(int)SupercellSWF::readInt(a1, v21, v22, v23, v24, v25, v26) * 0.00097656;
      a2[4] = (float)(int)SupercellSWF::readInt(a1, v27, v28, v29, v30, v31, v32) / 20.0;
      result = (float)(int)SupercellSWF::readInt(a1, v33, v34, v35, v36, v37, v38) / 20.0;
      a2[5] = result;
      return result;
    }

    __int64 __fastcall SupercellSWF::readColorTransform(
            jpeg_decoder_file_stream *this,
            BitmapFont *a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      __int64 v9; // x1
      __int64 v10; // x2
      __int64 v11; // x3
      __int64 v12; // x4
      __int64 v13; // x5
      unsigned int v14; // w6
      __int64 v15; // x1
      __int64 v16; // x2
      __int64 v17; // x3
      __int64 v18; // x4
      __int64 v19; // x5
      unsigned int v20; // w6
      __int64 v21; // x1
      __int64 v22; // x2
      __int64 v23; // x3
      __int64 v24; // x4
      __int64 v25; // x5
      unsigned int v26; // w6
      __int64 v27; // x1
      __int64 v28; // x2
      __int64 v29; // x3
      __int64 v30; // x4
      __int64 v31; // x5
      unsigned int v32; // w6
      __int64 v33; // x1
      __int64 v34; // x2
      __int64 v35; // x3
      __int64 v36; // x4
      __int64 v37; // x5
      unsigned int v38; // w6
      __int64 v39; // x1
      __int64 v40; // x2
      __int64 v41; // x3
      __int64 v42; // x4
      __int64 v43; // x5
      unsigned int v44; // w6
      __int64 result; // x0
    
      *((_BYTE *)a2 + 4) = SupercellSWF::readUnsignedChar((__int64)this, (__int64)a2, a3, a4, a5, a6, a7);
      *((_BYTE *)a2 + 5) = SupercellSWF::readUnsignedChar((__int64)this, v9, v10, v11, v12, v13, v14);
      *((_BYTE *)a2 + 6) = SupercellSWF::readUnsignedChar((__int64)this, v15, v16, v17, v18, v19, v20);
      *((_BYTE *)a2 + 3) = SupercellSWF::readUnsignedChar((__int64)this, v21, v22, v23, v24, v25, v26);
      *(_BYTE *)a2 = SupercellSWF::readUnsignedChar((__int64)this, v27, v28, v29, v30, v31, v32);
      *((_BYTE *)a2 + 1) = SupercellSWF::readUnsignedChar((__int64)this, v33, v34, v35, v36, v37, v38);
      result = SupercellSWF::readUnsignedChar((__int64)this, v39, v40, v41, v42, v43, v44);
      *((_BYTE *)a2 + 2) = result;
      return result;
    }

    char *__fastcall SupercellSWF::readShortArray(jpeg_decoder_file_stream *this, __int64 a2)
    {
      __int64 v4; // x0
      char *v5; // x21
      __int64 v6; // x3
      __int64 v7; // x4
      __int64 v8; // x5
      unsigned int v9; // w6
    
      if ( __CFADD__((int)a2, (int)a2) )
        v4 = -1;
      else
        v4 = 2LL * (int)a2;
      v5 = (char *)operator new[](v4);
      SupercellSWF::readShortArray((__int64)this, a2, v5, v6, v7, v8, v9);
      return v5;
    }

    __int64 __fastcall SupercellSWF::skip(
            __int64 this,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      __int64 v7; // x19
      int v8; // w20
    
      v7 = this;
      if ( (int)a2 >= 1 )
      {
        v8 = a2 + 1;
        do
        {
          this = SupercellSWF::readUnsignedChar(v7, a2, a3, a4, a5, a6, a7);
          --v8;
        }
        while ( v8 > 1 );
      }
      return this;
    }

    void __fastcall SupercellSWF::SupercellSWF(SupercellSWF *this)
    {
      String::String((__int64)this + 56);
      String::String((__int64)this + 80);
      *((_QWORD *)this + 31) = 0;
      *((_QWORD *)this + 32) = 0;
      SupercellSWF::initializeMembers(this);
    }

    void __fastcall SupercellSWF::SupercellSWF(SupercellSWF *this)
    {
      SupercellSWF::SupercellSWF(this);
    }

    void __fastcall SupercellSWF::~SupercellSWF(jpeg_decoder_file_stream *this, void *a2)
    {
      __int64 v3; // x0
      _QWORD *v4; // x20
      void *v5; // x21
      void *v6; // x21
      __int64 v7; // x23
      __int64 v8; // x8
      __int64 v9; // x22
      __int64 v10; // x8
      __int64 v11; // x20
      __int64 i; // x8
      __int64 v13; // x21
      __int64 v14; // x23
      __int64 v15; // x8
      __int64 v16; // x22
      __int64 v17; // x23
      __int64 v18; // x8
      __int64 v19; // x22
      __int64 v20; // x23
      __int64 v21; // x8
      __int64 v22; // x22
      __int64 v23; // x20
      __int64 v24; // x8
      __int64 v25; // x21
      __int64 v26; // x0
      __int64 v27; // x0
      __int64 v28; // x23
      __int64 v29; // x8
      __int64 v30; // x22
      __int64 v31; // x23
      __int64 v32; // x8
      __int64 v33; // x22
      __int64 v34; // x0
      _QWORD *v35; // x22
      __int64 v36; // x8
      __int64 v37; // x23
      __int64 v38; // x24
      void *v39; // x21
      void *v40; // x21
      String v41; // [xsp+18h] [xbp-48h] BYREF
    
      v4 = (_QWORD *)((char *)this + 152);
      v3 = *((_QWORD *)this + 19);
      if ( v3 )
        operator delete[](v3);
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 17) = 0;
      *v4 = 0;
      v4[1] = 0;
      v5 = (void *)*((_QWORD *)this + 25);
      if ( v5 )
      {
        SWFMovieClipCache::~SWFMovieClipCache(*((SWFMovieClipCache **)this + 25));
        operator delete(v5);
      }
      *((_QWORD *)this + 25) = 0;
      v6 = *(void **)this;
      if ( *(_QWORD *)this )
      {
        LZMAReader::~LZMAReader(*(_QWORD *)this, a2);
        operator delete(v6);
      }
      *(_QWORD *)this = 0;
      v7 = *((_QWORD *)this + 15);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 - 8);
        if ( v8 )
        {
          v9 = 72 * v8;
          do
          {
            SWFTexture::~SWFTexture((SWFTexture *)(v7 - 72 + v9));
            v9 -= 72;
          }
          while ( v9 );
        }
        operator delete[](v7 - 16);
      }
      *((_QWORD *)this + 15) = 0;
      v10 = *((int *)this + 8);
      v11 = v10 + 1;
      for ( i = (__int64)((int)v10 - 1) << 6; --v11 >= 1; i = v13 )
      {
        v13 = i - 64;
        MovieClipOriginal::destructOriginal(*((_QWORD *)this + 16) + i, *((_DWORD *)this + 58));
      }
      v14 = *((_QWORD *)this + 16);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 - 8);
        if ( v15 )
        {
          v16 = v15 << 6;
          do
          {
            MovieClipOriginal::~MovieClipOriginal((_QWORD *)(v14 - 64 + v16));
            v16 -= 64;
          }
          while ( v16 );
        }
        operator delete[](v14 - 16);
      }
      *((_QWORD *)this + 16) = 0;
      v17 = *((_QWORD *)this + 18);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 - 8);
        if ( v18 )
        {
          v19 = 24 * v18;
          do
          {
            ShapeOriginal::~ShapeOriginal((DataLoaderSound *)(v17 - 24 + v19));
            v19 -= 24;
          }
          while ( v19 );
        }
        operator delete[](v17 - 16);
      }
      *((_QWORD *)this + 18) = 0;
      v20 = *((_QWORD *)this + 13);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 - 8);
        if ( v21 )
        {
          v22 = 48 * v21;
          do
          {
            TextFieldOriginal::~TextFieldOriginal((_guard_variable_for_Assert *)(v20 - 48 + v22));
            v22 -= 48;
          }
          while ( v22 );
        }
        operator delete[](v20 - 16);
      }
      *((_QWORD *)this + 13) = 0;
      v23 = *((int *)this + 10);
      if ( (int)v23 <= 0 )
      {
        v24 = *((_QWORD *)this + 21);
      }
      else
      {
        v24 = *((_QWORD *)this + 21);
        do
        {
          v25 = v23--;
          v26 = *(_QWORD *)(v24 + 8 * v23);
          do
          {
            if ( v26 )
            {
              operator delete[](v26);
              v24 = *((_QWORD *)this + 21);
            }
            *(_QWORD *)(v24 + 8 * v23) = 0;
            v24 = *((_QWORD *)this + 21);
            v26 = *(_QWORD *)(v24 + 8 * v23);
          }
          while ( v26 );
        }
        while ( v25 >= 2 );
      }
      if ( v24 )
        operator delete[](v24);
      *((_QWORD *)this + 21) = 0;
      v27 = *((_QWORD *)this + 22);
      if ( v27 )
        operator delete[](v27);
      *((_QWORD *)this + 22) = 0;
      v28 = *((_QWORD *)this + 23);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v28 - 8);
        if ( v29 )
        {
          v30 = 24 * v29;
          do
          {
            Matrix2x3::~Matrix2x3((DataLoaderShader *)(v28 - 24 + v30));
            v30 -= 24;
          }
          while ( v30 );
        }
        operator delete[](v28 - 16);
      }
      *((_QWORD *)this + 23) = 0;
      v31 = *((_QWORD *)this + 24);
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 - 8);
        if ( v32 )
        {
          v33 = 7 * v32;
          do
          {
            ColorTransform::~ColorTransform();
            v33 -= 7;
          }
          while ( v33 );
        }
        operator delete[](v31 - 16);
      }
      *((_QWORD *)this + 24) = 0;
      v34 = *((_QWORD *)this + 26);
      if ( v34 )
        operator delete[](v34);
      *((_QWORD *)this + 26) = 0;
      v35 = (_QWORD *)((char *)this + 248);
      v36 = *((unsigned int *)this + 65);
      if ( (int)v36 >= 1 )
      {
        v37 = 0;
        v38 = (int)v36;
        while ( 1 )
        {
          if ( (int)v36 <= v37 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v41, v37, v36);
            Debugger::error(&v41);
          }
          v39 = *(void **)(*v35 + 8 * v37);
          if ( v39 )
          {
            String::~String(*(_QWORD *)(*v35 + 8 * v37));
            operator delete(v39);
          }
          if ( ++v37 >= v38 )
            break;
          v36 = *((unsigned int *)this + 65);
        }
      }
      v40 = (void *)*((_QWORD *)this + 30);
      if ( v40 )
      {
        SupercellSWF::~SupercellSWF(*((jpeg_decoder_file_stream **)this + 30));
        operator delete(v40);
      }
      *((_QWORD *)this + 30) = 0;
      SupercellSWF::initializeMembers(this);
      if ( *v35 )
        operator delete[](*v35);
      *v35 = 0;
      *((_QWORD *)this + 32) = 0;
      String::~String((__int64)this + 80);
      String::~String((__int64)this + 56);
    }

    void __fastcall SupercellSWF::~SupercellSWF(jpeg_decoder_file_stream *this, void *a2)
    {
      SupercellSWF::~SupercellSWF(this, a2);
    }

    float __fastcall SupercellSWF::readTwip(
            jpeg_decoder_file_stream *this,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      return (float)(int)SupercellSWF::readInt((__int64)this, a2, a3, a4, a5, a6, a7) / 20.0;
    }

    unsigned __int8 *__fastcall SupercellSWF::readAscii(
            jpeg_decoder_file_stream *this,
            int *a2,
            char *a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      unsigned __int8 *v7; // x20
      int UnsignedChar; // w0
      int v11; // w22
    
      v7 = (unsigned __int8 *)a3;
      UnsignedChar = SupercellSWF::readUnsignedChar((__int64)this, (__int64)a2, (__int64)a3, a4, a5, a6, a7);
      v11 = UnsignedChar;
      *a2 = UnsignedChar;
      if ( UnsignedChar == 255 )
      {
        v7 = 0;
        *a2 = -1;
      }
      else
      {
        if ( !v7 )
          v7 = (unsigned __int8 *)operator new[]((unsigned int)(UnsignedChar + 1));
        SupercellSWF::readByteArray(this, v11, v7);
        v7[*a2] = 0;
      }
      return v7;
    }

    size_t __fastcall SupercellSWF::readByteArray(
            jpeg_decoder_file_stream *this,
            __int64 a2,
            char *a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int v8; // w20
      _QWORD *v10; // x0
      size_t result; // x0
      FILE *v12; // x3
    
      v8 = a2;
      v10 = (_QWORD *)*((_QWORD *)this + 1);
      if ( v10 )
        result = (size_t)BufferedReadFile::read(v10, (int)a2, a3);
      else
        result = LZMAReader::readByteArray(*(_QWORD *)this, a2, (__int64)a3, a4, a5, a6, a7);
      v12 = (FILE *)*((_QWORD *)this + 2);
      if ( v12 )
      {
        if ( !*((_BYTE *)this + 24) )
          return fwrite(a3, 1u, v8, v12);
      }
      return result;
    }

    __int64 __fastcall SupercellSWF::getTexture(jpeg_decoder_file_stream *this, int a2)
    {
      return *((_QWORD *)this + 15) + 72LL * a2;
    }

    __int64 __fastcall SupercellSWF::getOriginalDisplayObject(jpeg_decoder_file_stream *this, __int64 a2, const char *a3)
    {
      __int64 v4; // x8
      __int64 v5; // x9
      __int64 v6; // x10
      __int64 v7; // x8
      __int64 v8; // x9
      __int64 v9; // x10
      __int64 v10; // x8
      __int64 v11; // x9
      __int64 v12; // x10
      _QWORD *v13; // x8
      String v15; // [xsp+10h] [xbp-40h] BYREF
      String v16; // [xsp+28h] [xbp-28h] BYREF
    
      v4 = *((int *)this + 7);
      if ( (int)v4 < 1 )
      {
    LABEL_5:
        v7 = *((int *)this + 8);
        if ( (int)v7 < 1 )
        {
    LABEL_9:
          v10 = *((int *)this + 11);
          if ( (int)v10 < 1 )
          {
    LABEL_13:
            v13 = (_QWORD *)((char *)this + 88);
            if ( *((_DWORD *)this + 21) + 1 > 8 )
              v13 = (_QWORD *)*v13;
            String::format((String *)"Unable to find DisplayObject id %d, %s", (__int64)&v16, a2, v13);
            if ( a3 )
            {
              String::format((String *)" needed by export name %s", (__int64)&v15, a3);
              String::operator+=(&v16.m_length, &v15);
              String::~String((__int64)&v15);
            }
            Debugger::error(&v16);
          }
          v11 = 0;
          v12 = 0;
          while ( *(unsigned __int16 *)(*((_QWORD *)this + 14) + 2 * v12) != (unsigned __int16)a2 )
          {
            ++v12;
            v11 += 48;
            if ( v12 >= v10 )
              goto LABEL_13;
          }
          return *((_QWORD *)this + 13) + v11;
        }
        else
        {
          v8 = 0;
          v9 = 0;
          while ( *(unsigned __int16 *)(*((_QWORD *)this + 17) + 2 * v9) != (unsigned __int16)a2 )
          {
            ++v9;
            v8 += 64;
            if ( v9 >= v7 )
              goto LABEL_9;
          }
          return *((_QWORD *)this + 16) + v8;
        }
      }
      else
      {
        v5 = 0;
        v6 = 0;
        while ( *(unsigned __int16 *)(*((_QWORD *)this + 19) + 2 * v6) != (unsigned __int16)a2 )
        {
          ++v6;
          v5 += 24;
          if ( v6 >= v4 )
            goto LABEL_5;
        }
        return *((_QWORD *)this + 18) + v5;
      }
    }

    __int64 __fastcall SupercellSWF::hasExportName(__int64 a1, __int64 a2)
    {
      int v2; // w8
      _QWORD *v3; // x1
    
      v2 = *(_DWORD *)(a2 + 4) + 1;
      v3 = (_QWORD *)(a2 + 8);
      if ( v2 > 8 )
        v3 = (_QWORD *)*v3;
      return SupercellSWF::hasExportName(a1, v3);
    }

    __int64 __fastcall SupercellSWF::hasExportName(__int64 a1, const char *a2)
    {
      __int64 v3; // x20
      __int64 v4; // x21
      __int64 v5; // x22
      String v7; // [xsp+8h] [xbp-38h] BYREF
    
      if ( !a2 )
      {
        operator+("hasExportName: Invalid export name: NULL, fileName ", a1 + 80, (__int64)&v7);
        Debugger::error(&v7);
      }
      v3 = *(int *)(a1 + 40);
      if ( (int)v3 < 1 )
        return 0;
      v4 = 0;
      v5 = *(_QWORD *)(a1 + 168);
      while ( strcmp(a2, *(const char **)(v5 + 8 * v4)) )
      {
        if ( ++v4 >= v3 )
          return 0;
      }
      return 1;
    }

    __int64 __fastcall SupercellSWF::createMovieClip(__int64 a1, const char *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
      __int64 v6; // x23
      int v7; // w8
      _QWORD *v8; // x22
      bool v9; // zf
      _QWORD *v10; // x8
      __int64 OriginalMovieClip; // x0
      __int64 MovieClip; // x21
      String v14; // [xsp+10h] [xbp-90h] BYREF
      String v15; // [xsp+28h] [xbp-78h] BYREF
      String v16; // [xsp+40h] [xbp-60h] BYREF
      String v17; // [xsp+58h] [xbp-48h] BYREF
    
      if ( !a2 )
      {
        operator+("Invalid export name: NULL, fileName ", a1 + 80, (__int64)&v17);
        Debugger::error(&v17);
      }
      v4 = *(int *)(a1 + 40);
      if ( (int)v4 < 1 )
      {
    LABEL_6:
        v7 = *(_DWORD *)(a1 + 84) + 1;
        v8 = (_QWORD *)(a1 + 88);
        if ( ResourceManager::sm_debugInvalidSCResourceFile )
          v9 = ResourceManager::sm_debugInvalidSCResourceExportName.m_length == 0;
        else
          v9 = 1;
        if ( v9 )
        {
          if ( v7 > 8 )
            v8 = (_QWORD *)*v8;
          String::format((String *)"Unable to find MovieClip with export name: %s, %s", (__int64)&v14, a2, v8);
          Debugger::error(&v14);
        }
        if ( v7 > 8 )
          v10 = (_QWORD *)*v8;
        else
          v10 = (_QWORD *)(a1 + 88);
        String::format((String *)"Unable to create MovieClip, export name %s, file name %s", (__int64)&v16, a2, v10);
        Debugger::warning(&v16);
        String::~String((__int64)&v16);
        MovieClip = ResourceManager::getMovieClip(
                      (__int64)&ResourceManager::sm_debugInvalidSCResourceFile,
                      (__int64)&ResourceManager::sm_debugInvalidSCResourceExportName);
        if ( *(_DWORD *)(a1 + 84) + 1 > 8 )
          v8 = (_QWORD *)*v8;
        String::format((String *)"ERROR: %s - %s", (__int64)&v15, v8, a2);
        MovieClip::setText(MovieClip, "Text", &v15);
        String::~String((__int64)&v15);
      }
      else
      {
        v5 = 0;
        v6 = *(_QWORD *)(a1 + 168);
        while ( strcmp(a2, *(const char **)(v6 + 8 * v5)) )
        {
          if ( ++v5 >= v4 )
            goto LABEL_6;
        }
        OriginalMovieClip = SupercellSWF::getOriginalMovieClip(
                              a1,
                              (unsigned int)*(__int16 *)(*(_QWORD *)(a1 + 160) + 2 * v5),
                              (__int64)a2);
        MovieClip = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)OriginalMovieClip + 16LL))(
                      OriginalMovieClip,
                      a1);
        *(_BYTE *)(*(_QWORD *)(a1 + 176) + v5) = 1;
      }
      return MovieClip;
    }

    bool __fastcall SupercellSWF::readBool(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      _BOOL8 Bool; // x20
      FILE *v9; // x3
      bool __ptr; // [xsp+Fh] [xbp-11h] BYREF
    
      if ( *(_QWORD *)(a1 + 8) )
        Bool = (unsigned int)SupercellSWF::readUnsignedChar(a1, a2, a3, a4, a5, a6, a7) == 1;
      else
        Bool = LZMAReader::readBool(*(int **)a1, a2, a3, a4, a5, a6, a7);
      v9 = *(FILE **)(a1 + 16);
      if ( v9 && !*(_BYTE *)(a1 + 24) )
      {
        __ptr = Bool;
        fwrite(&__ptr, 1u, 1u, v9);
      }
      return Bool;
    }

    size_t __fastcall SupercellSWF::readIntArray(
            __int64 a1,
            __int64 a2,
            char *a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int v8; // w20
      _QWORD *v10; // x0
      size_t result; // x0
      FILE *v12; // x3
    
      v8 = a2;
      v10 = *(_QWORD **)(a1 + 8);
      if ( v10 )
        result = (size_t)BufferedReadFile::read(v10, 4LL * (int)a2, a3);
      else
        result = LZMAReader::readIntArray(*(_QWORD *)a1, a2, (__int64)a3, a4, a5, a6, a7);
      v12 = *(FILE **)(a1 + 16);
      if ( v12 )
      {
        if ( !*(_BYTE *)(a1 + 24) )
          return fwrite(a3, 4u, v8, v12);
      }
      return result;
    }

    char *__fastcall SupercellSWF::readByteArray(jpeg_decoder_file_stream *a1, __int64 a2)
    {
      __int64 v4; // x0
      char *v5; // x21
      __int64 v6; // x3
      __int64 v7; // x4
      __int64 v8; // x5
      unsigned int v9; // w6
    
      if ( (int)a2 < 0LL )
        v4 = -1;
      else
        v4 = (int)a2;
      v5 = (char *)operator new[](v4);
      SupercellSWF::readByteArray(a1, a2, v5, v6, v7, v8, v9);
      return v5;
    }

    __int64 __fastcall SupercellSWF::readCompressedIntArray(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int v8; // w20
      __int64 result; // x0
      int v11; // w23
      int Byte; // w22
      _DWORD *v13; // x8
      int v14; // w9
    
      v8 = a2;
      result = SupercellSWF::readInt(a1, a2, a3, a4, a5, a6, a7);
      if ( v8 >= 1 )
      {
        v11 = 0;
        do
        {
          Byte = BufferedReadFile::readByte(*(GLfloat **)(a1 + 8));
          result = BufferedReadFile::readInt(*(GLfloat **)(a1 + 8));
          if ( Byte )
          {
            v13 = (_DWORD *)(a3 + 4LL * v11);
            v14 = Byte;
            do
            {
              *v13++ = result;
              --v14;
            }
            while ( v14 );
            v11 += Byte;
          }
        }
        while ( v11 < v8 );
      }
      return result;
    }

    __int64 __fastcall SupercellSWF::readCompressedShortArray(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int v8; // w20
      __int64 result; // x0
      int v11; // w23
      int Byte; // w22
      _WORD *v13; // x8
      int v14; // w9
    
      v8 = a2;
      result = SupercellSWF::readInt(a1, a2, a3, a4, a5, a6, a7);
      if ( v8 >= 1 )
      {
        v11 = 0;
        do
        {
          Byte = BufferedReadFile::readByte(*(GLfloat **)(a1 + 8));
          result = BufferedReadFile::readShort(*(GLfloat **)(a1 + 8));
          if ( Byte )
          {
            v13 = (_WORD *)(a3 + 2LL * v11);
            v14 = Byte;
            do
            {
              *v13++ = result;
              --v14;
            }
            while ( v14 );
            v11 += Byte;
          }
        }
        while ( v11 < v8 );
      }
      return result;
    }

    __int64 __fastcall SupercellSWF::readCompressedByteArray(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int v8; // w20
      __int64 result; // x0
      int v11; // w24
      int Byte; // w22
      unsigned int v13; // w22
    
      v8 = a2;
      result = SupercellSWF::readInt(a1, a2, a3, a4, a5, a6, a7);
      if ( v8 >= 1 )
      {
        v11 = 0;
        do
        {
          Byte = BufferedReadFile::readByte(*(GLfloat **)(a1 + 8));
          result = BufferedReadFile::readByte(*(GLfloat **)(a1 + 8));
          if ( Byte )
          {
            v13 = Byte - 1;
            result = (__int64)memset((void *)(a3 + v11), result, v13 + 1LL);
            v11 += v13 + 1;
          }
        }
        while ( v11 < v8 );
      }
      return result;
    }

    size_t __fastcall SupercellSWF::cacheShort(size_t result, __int16 a2)
    {
      FILE *v2; // x3
      __int16 __ptr; // [xsp+Eh] [xbp-2h] BYREF
    
      __ptr = a2;
      v2 = *(FILE **)(result + 16);
      if ( v2 )
        return fwrite(&__ptr, 2u, 1u, v2);
      return result;
    }

    size_t __fastcall SupercellSWF::cacheByteArray(size_t result, int a2, const void *a3)
    {
      FILE *v3; // x3
    
      v3 = *(FILE **)(result + 16);
      if ( v3 )
        return fwrite(a3, 1u, a2, v3);
      return result;
    }

    size_t __fastcall SupercellSWF::cacheShortArray(size_t result, int a2, const void *a3)
    {
      FILE *v3; // x3
    
      v3 = *(FILE **)(result + 16);
      if ( v3 )
        return fwrite(a3, 2u, a2, v3);
      return result;
    }

    size_t __fastcall SupercellSWF::cacheIntArray(size_t result, int a2, const void *a3)
    {
      FILE *v3; // x3
    
      v3 = *(FILE **)(result + 16);
      if ( v3 )
        return fwrite(a3, 4u, a2, v3);
      return result;
    }

    __int64 __fastcall SupercellSWF::cacheCompressedByteArray(__int64 a1)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 16);
      if ( result )
        return cacheCompressedArray<unsigned char>();
      return result;
    }

    __int64 __fastcall SupercellSWF::cacheCompressedShortArray(__int64 a1)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 16);
      if ( result )
        return cacheCompressedArray<short>();
      return result;
    }

    __int64 __fastcall SupercellSWF::cacheCompressedIntArray(__int64 a1)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 16);
      if ( result )
        return cacheCompressedArray<int>();
      return result;
    }

    __int64 __fastcall SupercellSWF::getMovieClipFromPool(SupercellSWF *a1, const char *a2, bool *a3)
    {
      SWFMovieClipCache *v6; // x21
    
      v6 = (SWFMovieClipCache *)*((_QWORD *)a1 + 25);
      if ( !v6 )
      {
        v6 = (SWFMovieClipCache *)operator new(24);
        SWFMovieClipCache::SWFMovieClipCache(v6, a1);
        *((_QWORD *)a1 + 25) = v6;
      }
      return SWFMovieClipCache::get(v6, a2, a3);
    }

    __int64 __fastcall SupercellSWF::putToMovieClipPool(SupercellSWF *a1, const char *a2, MovieClip *a3)
    {
      SWFMovieClipCache *v6; // x21
    
      v6 = (SWFMovieClipCache *)*((_QWORD *)a1 + 25);
      if ( !v6 )
      {
        v6 = (SWFMovieClipCache *)operator new(24);
        SWFMovieClipCache::SWFMovieClipCache(v6, a1);
        *((_QWORD *)a1 + 25) = v6;
      }
      return SWFMovieClipCache::put(v6, a2, a3);
    }

    __int64 __fastcall SupercellSWF::getMatrix(__int64 a1, int a2)
    {
      return *(_QWORD *)(a1 + 184) + 24LL * a2;
    }

    __int64 __fastcall SupercellSWF::getColorTransform(__int64 a1, int a2)
    {
      return *(_QWORD *)(a1 + 192) + 7LL * a2;
    }

    __int64 __fastcall SupercellSWF::getTimelineOffset(__int64 a1)
    {
      return *(_QWORD *)(a1 + 208) + 2LL * *(int *)(a1 + 216);
    }

    __int64 __fastcall SupercellSWF::getFileName(__int64 a1)
    {
      return a1 + 80;
    }

    __int64 __fastcall SupercellSWF::getResourceManagerFileName(__int64 a1)
    {
      return a1 + 56;
    }

    __int64 __fastcall SupercellSWF::isHalfScalePossible(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 25);
    }

    __int64 __fastcall SupercellSWF::readFontName(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      __int64 v8; // x8
      __int64 v9; // x24
      __int64 v10; // x25
      __int64 v11; // x22
      __int64 v13; // [xsp+18h] [xbp-188h] BYREF
      String v14; // [xsp+20h] [xbp-180h] BYREF
      int v15; // [xsp+3Ch] [xbp-164h] BYREF
      String v16; // [xsp+40h] [xbp-160h] BYREF
      char v17[256]; // [xsp+58h] [xbp-148h] BYREF
    
      v15 = 0;
      if ( !SupercellSWF::readAscii((jpeg_decoder_file_stream *)a1, &v15, v17, a4, a5, a6, a7) )
        return 0;
      String::String(&v14, v17, v15);
      v8 = *(unsigned int *)(a1 + 260);
      if ( (int)v8 < 1 )
      {
    LABEL_9:
        v11 = operator new(24);
        String::String(v11, &v14);
        v13 = v11;
        LogicArrayList<String *>::add(a1 + 248, &v13);
      }
      else
      {
        v9 = 0;
        v10 = (int)v8;
        while ( 1 )
        {
          if ( (int)v8 <= v9 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v16, v9, v8);
            Debugger::error(&v16);
          }
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8 * v9);
          if ( String::equals(v11, (__int64)&v14) )
            break;
          if ( ++v9 >= v10 )
            goto LABEL_9;
          v8 = *(unsigned int *)(a1 + 260);
        }
      }
      String::~String((__int64)&v14);
      return v11;
    }

    _DWORD *__fastcall SupercellSWF::initializeMembers(__int64 a1)
    {
      _DWORD *result; // x0
    
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 136) = 0;
      *(_DWORD *)(a1 + 232) = 0;
      *(_QWORD *)(a1 + 224) = 0;
      *(_DWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 184) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      String::operator=((_DWORD *)(a1 + 56), "");
      result = String::operator=((_DWORD *)(a1 + 80), "");
      *(_QWORD *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 200) = 0;
      *(_QWORD *)(a1 + 240) = 0;
      *(_DWORD *)(a1 + 260) = 0;
      *(_BYTE *)(a1 + 26) = 0;
      *(_WORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 52) = 0;
      *(_QWORD *)(a1 + 44) = 0;
      *(_QWORD *)(a1 + 36) = 0;
      *(_QWORD *)(a1 + 28) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 168) = 0;
      *(_QWORD *)(a1 + 176) = 0;
      *(_QWORD *)(a1 + 160) = 0;
      return result;
    }

}; // end class SupercellSWF
