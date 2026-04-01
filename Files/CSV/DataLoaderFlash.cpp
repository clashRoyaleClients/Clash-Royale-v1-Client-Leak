class DataLoaderFlash
{
public:

    _QWORD *__fastcall DataLoaderFlash::~DataLoaderFlash(_QWORD *a1)
    {
      void *v2; // x20
      _QWORD *v3; // x21
    
      *a1 = off_100475470;
      v3 = a1 + 1;
      v2 = (void *)a1[1];
      if ( v2 )
      {
        SupercellSWF::~SupercellSWF((#1269 *)a1[1]);
        operator delete(v2);
      }
      *v3 = 0;
      v3[1] = 0;
      return a1;
    }

    _QWORD *__fastcall DataLoaderFlash::~DataLoaderFlash(_QWORD *a1)
    {
      DataLoaderFlash::~DataLoaderFlash(a1);
      return a1;
    }

    void __fastcall DataLoaderFlash::~DataLoaderFlash(_QWORD *a1)
    {
      DataLoaderFlash::~DataLoaderFlash(a1);
      operator delete(a1);
    }

    void __fastcall DataLoaderFlash::load(__int64 a1, const char *a2, const char *a3)
    {
      internal_t *pHeap; // x0
      const String *v6; // x1
      #1269 *v7; // x20
      const char *v8; // x1
      internal_t *p_internal; // x20
      ResourceManager *v10; // x0
      const char *v11; // x1
      internal_t *v12; // x0
      _BOOL4 v13; // w22
      internal_t *v14; // x20
      internal_t *v15; // x0
      internal_t *v16; // x21
      internal_t *v17; // x1
      void *v18; // x21
      #1269 *v19; // x21
      internal_t *v20; // x1
      void *v21; // x22
      #1269 *v22; // x22
      int v23; // w0
      const char *v24; // x1
      int v25; // w9
      internal_t *v26; // x8
      const String *v27; // x1
      int v28; // w0
      const char *v29; // x1
      int v30; // w9
      internal_t *v31; // x8
      internal_t *v32; // x9
      internal_t *v33; // x9
      const String *v34; // x1
      const String *v35; // x1
      __int64 FileName; // x0
      const char *v37; // x1
      int v38; // w8
      ResourceManager *v39; // x0
      const char *v40; // x1
      internal_t *v41; // x0
      const char *v42; // x1
      __darwin_time_t Timestamp; // x0
      const String *v44; // x1
      _BYTE v45[24]; // [xsp+18h] [xbp-218h] BYREF
      __siginfo v46; // [xsp+30h] [xbp-200h] BYREF
      String v47; // [xsp+C0h] [xbp-170h] BYREF
      String v48; // [xsp+D8h] [xbp-158h] BYREF
      String v49; // [xsp+F0h] [xbp-140h] BYREF
      _QWORD v50[3]; // [xsp+108h] [xbp-128h] BYREF
      String v51; // [xsp+120h] [xbp-110h] BYREF
      String v52; // [xsp+138h] [xbp-F8h] BYREF
      _QWORD v53[3]; // [xsp+150h] [xbp-E0h] BYREF
      String v54; // [xsp+168h] [xbp-C8h] BYREF
      __int64 v55[3]; // [xsp+180h] [xbp-B0h] BYREF
      String v56; // [xsp+198h] [xbp-98h] BYREF
      bool v57; // [xsp+1B7h] [xbp-79h] BYREF
      String v58; // [xsp+1B8h] [xbp-78h] BYREF
      String v59; // [xsp+1D0h] [xbp-60h] BYREF
      String v60; // [xsp+1E8h] [xbp-48h] BYREF
    
      String::String(&v60, a2);
      String::String(&v59, a3);
      String::String(&v58, &v59);
      v57 = 0;
      if ( DataLoaderFlash::sm_pResolutionProvider )
      {
        String::String(&v56, &v59);
        (**(void (__fastcall ***)(__int64, const char *, String *, bool *))DataLoaderFlash::sm_pResolutionProvider)(
          DataLoaderFlash::sm_pResolutionProvider,
          a3,
          &v56,
          &v57);
        if ( (String::equals(&v56, &v59) & 1) == 0 )
        {
          if ( v56.m_bytes + 1 > 8 )
            pHeap = (internal_t *)v56.internal.pHeap;
          else
            pHeap = &v56.internal;
          ResourceManager::getAbsolutePath((const char *)pHeap, v55);
          if ( (unsigned int)Path::exists((LogicTileMap *)v55, v6) )
          {
            String::operator=(&v60);
            String::operator=(&v59);
          }
          String::~String();
        }
        String::~String();
      }
      if ( !*(_QWORD *)(a1 + 8) )
      {
        String::substring(v53, &v59, 0, (unsigned int)(v59.m_length - 3));
        operator+(v53, "_tex.sc");
        String::~String();
        v7 = (#1269 *)operator new(264);
        SupercellSWF::SupercellSWF(v7);
        *(_QWORD *)(a1 + 8) = v7;
        String::String(&v52);
        String::String(&v51);
        if ( (String::endsWith(&v59, "_lowres.sc") & 1) == 0 )
        {
          String::String(&v49, ".sc");
          String::String(&v48, "_lowres.sc");
          String::replace(v50, &v59, &v49, &v48);
          String::operator=(&v51);
          String::~String();
          String::~String();
          String::~String();
          p_internal = &v51.internal;
          v10 = v51.m_bytes + 1 > 8 ? (ResourceManager *)v51.internal.pHeap : (ResourceManager *)&v51.internal;
          if ( (unsigned int)ResourceManager::doesFileExist(v10, v8) )
          {
            if ( v51.m_bytes + 1 > 8 )
              p_internal = (internal_t *)v51.internal.pHeap;
            ResourceManager::getAbsoluteLoadPath((Path *)p_internal, &v47);
            String::operator=(&v52);
            String::~String();
            if ( v59.m_bytes + 1 > 8 )
              v12 = (internal_t *)v59.internal.pHeap;
            else
              v12 = &v59.internal;
            if ( (ResourceManager::doesFileExist((ResourceManager *)v12, v11) & 1) != 0 )
            {
              v13 = 1;
    LABEL_25:
              v14 = &v54.internal;
              if ( v54.m_bytes + 1 > 8 )
                v15 = (internal_t *)v54.internal.pHeap;
              else
                v15 = &v54.internal;
              ResourceManager::getAbsoluteLoadPath((Path *)v15, (String *)&v46.__pad[3]);
              v16 = &v60.internal;
              if ( v60.m_bytes + 1 > 8 )
                v17 = (internal_t *)v60.internal.pHeap;
              else
                v17 = &v60.internal;
              if ( (SupercellSWF::load(
                      *(SupercellSWF **)(a1 + 8),
                      (const char *)v17,
                      v13,
                      &v59,
                      v57,
                      &v58,
                      &v54,
                      (const String *)&v46.__pad[3],
                      1)
                  & 1) == 0 )
              {
                if ( v13 )
                {
                  v18 = *(void **)(a1 + 8);
                  if ( v18 )
                  {
                    SupercellSWF::~SupercellSWF(*(#1269 **)(a1 + 8));
                    operator delete(v18);
                  }
                  *(_QWORD *)(a1 + 8) = 0;
                  v19 = (#1269 *)operator new(264);
                  SupercellSWF::SupercellSWF(v19);
                  *(_QWORD *)(a1 + 8) = v19;
                  if ( v52.m_bytes + 1 > 8 )
                    v20 = (internal_t *)v52.internal.pHeap;
                  else
                    v20 = &v52.internal;
                  v28 = SupercellSWF::load(v19, (const char *)v20, 0, &v59, 0, &v58, &v54, (const String *)&v46.__pad[3], 1);
                  v30 = v59.m_bytes + 1;
                  v31 = &v59.internal;
                  if ( !v28 )
                  {
                    if ( v30 > 8 )
                      v31 = (internal_t *)v59.internal.pHeap;
                    if ( v51.m_bytes + 1 > 8 )
                      v33 = (internal_t *)v51.internal.pHeap;
                    else
                      v33 = &v51.internal;
                    String::format((String *)"Failed to load both %s and %s", v29, v31, v33);
                    Debugger::error((Debugger *)&v46.si_addr, v35);
                  }
                  if ( v30 > 8 )
                    v31 = (internal_t *)v59.internal.pHeap;
                  if ( v51.m_bytes + 1 > 8 )
                    v32 = (internal_t *)v51.internal.pHeap;
                  else
                    v32 = &v51.internal;
                  String::format((String *)"Failed to load %s. Loaded %s instead", v29, v31, v32);
                  Debugger::warning((__siginfo *)v46.__pad, v34);
                  String::~String();
                }
                else if ( !v57 && (unsigned int)SupercellSWF::isHalfScalePossible(*(_QWORD *)(a1 + 8)) )
                {
                  v21 = *(void **)(a1 + 8);
                  if ( v21 )
                  {
                    SupercellSWF::~SupercellSWF(*(#1269 **)(a1 + 8));
                    operator delete(v21);
                  }
                  *(_QWORD *)(a1 + 8) = 0;
                  v22 = (#1269 *)operator new(264);
                  SupercellSWF::SupercellSWF(v22);
                  *(_QWORD *)(a1 + 8) = v22;
                  if ( v60.m_bytes + 1 > 8 )
                    v16 = (internal_t *)v60.internal.pHeap;
                  v23 = SupercellSWF::load(v22, (const char *)v16, 0, &v59, 1, &v58, &v54, (const String *)&v46.__pad[3], 1);
                  v25 = v59.m_bytes + 1;
                  v26 = &v59.internal;
                  if ( !v23 )
                  {
                    if ( v25 > 8 )
                      v26 = (internal_t *)v59.internal.pHeap;
                    String::format((String *)"Failed to load %s as both highres and downscaled", v24, v26);
                    Debugger::error((Debugger *)v45, v44);
                  }
                  if ( v25 > 8 )
                    v26 = (internal_t *)v59.internal.pHeap;
                  String::format((String *)"Failed to load %s. Loaded it as downscaled", v24, v26);
                  Debugger::warning(&v46, v27);
                  String::~String();
                }
              }
              FileName = SupercellSWF::getFileName(*(_QWORD *)(a1 + 8));
              v38 = *(_DWORD *)(FileName + 4) + 1;
              v39 = (ResourceManager *)(FileName + 8);
              if ( v38 > 8 )
                v39 = *(ResourceManager **)v39;
              *(_QWORD *)(a1 + 16) = ResourceManager::getTimestamp(v39, v37);
              if ( v54.m_bytes + 1 > 8 )
                v41 = (internal_t *)v54.internal.pHeap;
              else
                v41 = &v54.internal;
              if ( (unsigned int)ResourceManager::doesFileExist((ResourceManager *)v41, v40) )
              {
                if ( v54.m_bytes + 1 > 8 )
                  v14 = (internal_t *)v54.internal.pHeap;
                Timestamp = ResourceManager::getTimestamp((ResourceManager *)v14, v42);
                if ( Timestamp > *(_QWORD *)(a1 + 16) )
                  *(_QWORD *)(a1 + 16) = Timestamp;
              }
              String::~String();
              String::~String();
              String::~String();
              String::~String();
              goto LABEL_72;
            }
            String::operator=(&v60);
            String::substring(&v46.__pad[6], &v51, 0, (unsigned int)(v51.m_length - 3));
            operator+(&v46.__pad[6], "_tex.sc");
            String::operator=(&v54);
            String::~String();
            String::~String();
          }
        }
        v13 = 0;
        goto LABEL_25;
      }
    LABEL_72:
      String::~String();
      String::~String();
      String::~String();
    }

    __int64 __fastcall DataLoaderFlash::getType(MultiWinGUI *this)
    {
      return 3;
    }

}; // end class DataLoaderFlash
