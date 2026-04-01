class TrackImpl
{
public:

    void __fastcall TrackImpl::openLog(__int64 a1, int a2)
    {
      FILE *v4; // x0
      const char *v5; // x8
      const char *v6; // x20
      String v7; // [xsp+8h] [xbp-158h] BYREF
      String v8; // [xsp+20h] [xbp-140h] BYREF
      char __str[255]; // [xsp+39h] [xbp-127h] BYREF
    
      if ( *(int *)(a1 + 48) <= 0 )
        __assert_rtn(
          "openLog",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
          203,
          "m_logPath.length() > 0");
      v4 = *(FILE **)(a1 + 72);
      if ( v4 )
      {
        fclose(v4);
        *(_QWORD *)(a1 + 72) = 0;
      }
      v5 = (const char *)(a1 + 56);
      if ( *(_DWORD *)(a1 + 52) + 1 > 8 )
        v5 = *(const char **)v5;
      snprintf(__str, 0xFFu, "%s/log_current.sce", v5);
      if ( a2 )
        v6 = "w";
      else
        v6 = "a";
      *(_QWORD *)(a1 + 72) = fopen(__str, v6);
      String::String(&v8, __str);
      Path::excludeBackup((__int64)&v8);
      String::~String((__int64)&v8);
      if ( !*(_QWORD *)(a1 + 72) )
      {
        String::format((String *)"Unable to open log file. Mode %s", (__int64)&v7, v6);
        Debugger::warning(&v7);
        String::~String((__int64)&v7);
      }
    }

    void __fastcall TrackImpl::deinit(FILE **this)
    {
      FILE *v2; // x0
      __int64 v3; // x0
    
      TrackImpl::flush((CPVRTString *)this, 0);
      v2 = *(this + 9);
      if ( v2 )
      {
        fclose(v2);
        *(this + 9) = 0;
      }
      v3 = (__int64)*(this + 10);
      if ( v3 )
        operator delete[](v3);
      *(this + 10) = 0;
      *((_DWORD *)this + 22) = 0;
    }

    void __fastcall TrackImpl::event_a(CPVRTString *this, __int64 a2, const char **a3, char a4)
    {
      __int64 v6; // x22
      __int64 v8; // x23
      int v9; // w25
      int v10; // w23
      String *v11; // x0
      internal_t *pHeap; // x1
      int v13; // w23
      int v14; // w23
      int v15; // w26
      _DWORD *i; // x23
      const char *v17; // x1
      int v18; // w26
      const char *v19; // x1
      const char **v20; // x23
      const char *v21; // t1
      const char *v22; // x8
      char *v23; // x9
      String v24; // [xsp+8h] [xbp-C8h] BYREF
      String v25; // [xsp+20h] [xbp-B0h] BYREF
      char *v26[4]; // [xsp+38h] [xbp-98h] BYREF
      char __s[32]; // [xsp+58h] [xbp-78h] BYREF
    
      v6 = a2;
      if ( *((_QWORD *)this + 9) )
      {
        if ( !*((_QWORD *)this + 10) )
          __assert_rtn(
            "event_a",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
            315,
            "m_logBuffer");
        v8 = a2 + 2LL * *((_QWORD *)this + 5) + 4;
        if ( (unsigned int)(a2 + 2 * *((_DWORD *)this + 10) + 4) >= 0x81uLL )
          __assert_rtn(
            "event_a",
            "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
            321,
            "totalFields <= MAX_FIELDS");
        v9 = *((_DWORD *)this + 22);
        TrackImpl::timestamp((CPVRTString *)0x20, (int)__s, (char *)a3);
        *(_BYTE *)(*((_QWORD *)this + 10) + (int)(*((_DWORD *)this + 22))++) = v8;
        v10 = TrackImpl::eventField(this, Track::PARAM_EVENT_ID[0]);
        v11 = (String *)*((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = (char *)&v11->m_length + 1;
        String::valueOf(v11, &v25);
        if ( v25.m_bytes + 1 > 8 )
          pHeap = (internal_t *)v25.internal.pHeap;
        else
          pHeap = &v25.internal;
        v13 = v10 & TrackImpl::eventField(this, (const char *)pHeap);
        String::~String((__int64)&v25);
        v14 = v13 & TrackImpl::eventField(this, Track::PARAM_TIMESTAMP[0]);
        v15 = v14 & TrackImpl::eventField(this, __s);
        for ( i = (_DWORD *)*((_QWORD *)this + 3); i != (_DWORD *)((char *)this + 8); i = (_DWORD *)std::_Rb_tree_increment(i) )
        {
          v17 = (const char *)(i + 10);
          if ( i[9] + 1 > 8 )
            v17 = *(const char **)v17;
          v18 = v15 & TrackImpl::eventField(this, v17);
          v19 = (const char *)(i + 16);
          if ( i[15] + 1 > 8 )
            v19 = *(const char **)v19;
          v15 = v18 & TrackImpl::eventField(this, v19);
        }
        if ( v6 )
        {
          v20 = a3;
          do
          {
            v21 = *v20++;
            v15 &= TrackImpl::eventField(this, v21);
            --v6;
          }
          while ( v6 );
        }
        if ( (v15 & 1) == 0 )
        {
          *((_DWORD *)this + 22) = v9;
          v26[0] = Track::PARAM_TYPE[0];
          v26[1] = "Debugger.track.toobigfield";
          v26[2] = "originaltype";
          v22 = a3[1];
          v23 = "";
          if ( v22 )
            v23 = (char *)a3[1];
          v26[3] = v23;
          String::format((String *)"[track] event field too big? (type %s)", (__int64)&v24, v22);
          Debugger::print(&v24);
          String::~String((__int64)&v24);
          if ( (a4 & 1) == 0 )
            TrackImpl::event_a(this, 4u, (const char **)v26, 1);
        }
        if ( *((int *)this + 22) >= 257 )
          TrackImpl::flush(this, 0);
      }
    }

    __int64 __fastcall TrackImpl::flush(CPVRTString *this, unsigned __int8 a2)
    {
      __int64 result; // x0
      int v5; // w0
      int v6; // w8
      _BYTE *v7; // x9
      int v8; // w11
      size_t v9; // x1
      char *v11; // x20
      const char *v12; // x8
      int v13; // w24
      char v14; // w23
      const char *v15; // x8
      _QWORD *v16; // x0
      stat v17; // [xsp+18h] [xbp-2E8h] BYREF
      char *v18[2]; // [xsp+A8h] [xbp-258h] BYREF
      char __new[255]; // [xsp+BAh] [xbp-246h] BYREF
      char __str[255]; // [xsp+1B9h] [xbp-147h] BYREF
    
      result = *((_QWORD *)this + 9);
      if ( result )
      {
        v5 = ftell((FILE *)result);
        v6 = *((_DWORD *)this + 22);
        if ( v6 )
        {
          v7 = (_BYTE *)*((_QWORD *)this + 10);
          do
          {
            v8 = v5 + 7;
            if ( v5 >= 0 )
              v8 = v5;
            --v6;
            *v7++ ^= aSecrets[v5 - (v8 & 0xFFFFFFF8)];
            ++v5;
          }
          while ( v6 );
          v9 = *((int *)this + 22);
        }
        else
        {
          v9 = 0;
        }
        fwrite(*((const void **)this + 10), v9, 1u, *((FILE **)this + 9));
        *((_DWORD *)this + 22) = 0;
        fflush(*((FILE **)this + 9));
        result = ftell(*((FILE **)this + 9));
        if ( result > 0x8000 || ((result > 0) & a2) != 0 )
        {
          v11 = (char *)this + 56;
          if ( *((_DWORD *)this + 13) + 1 > 8 )
            v12 = *(const char **)v11;
          else
            v12 = (char *)this + 56;
          snprintf(__str, 0xFFu, "%s/log_current.sce", v12);
          v13 = 0;
          v14 = 0;
          do
          {
            v15 = (char *)this + 56;
            if ( *((_DWORD *)this + 13) + 1 >= 9 )
              v15 = *(const char **)v11;
            snprintf(__new, 0xFFu, "%s/ready_log%02d.sce", v15, v13);
            if ( stat(__new, &v17) )
              break;
            v14 |= v13++ == 63;
          }
          while ( v13 < 64 );
          rename(__str, __new);
          Debugger::print((__int64)"Rotated logs");
          TrackImpl::openLog((__int64)this, 1);
          if ( (v14 & 1) != 0 )
          {
            v18[0] = Track::PARAM_TYPE[0];
            v18[1] = "Debugger.track.rotationfull";
            TrackImpl::event_a(this, 2, (const char **)v18, 0);
          }
          v16 = (_QWORD *)((char *)this + 160);
          if ( *((_DWORD *)this + 39) + 1 > 8 )
            v16 = (_QWORD *)*v16;
          if ( *((_DWORD *)this + 13) + 1 >= 9 )
            v11 = *(char **)v11;
          return (__int64)initiateLogUpload((__int64)v16, v11);
        }
      }
      return result;
    }

    String *__fastcall TrackImpl::setGlobalParam(CPVRTString *this, const String *a2, String *a3)
    {
      String *v4; // x0
    
      if ( !a3->m_length )
        return (String *)std::_Rb_tree<String,std::pair<String const,String>,std::_Select1st<std::pair<String const,String>>,std::less<String>,std::allocator<std::pair<String const,String>>>::erase(
                           this,
                           a2);
      v4 = (String *)std::map<String,String>::operator[]((__int64)this, (__int64)a2);
      return String::operator=(v4, a3);
    }

    void __fastcall TrackImpl::TrackImpl(TrackImpl *this, const char *a2)
    {
      _DWORD *v4; // x20
    
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 3) = (char *)this + 8;
      *((_QWORD *)this + 4) = (char *)this + 8;
      v4 = (_DWORD *)((char *)this + 48);
      String::String((__int64)this + 48);
      String::String((__int64)this + 104);
      String::String((__int64)this + 128);
      String::String((__int64)this + 152);
      TrackImpl::initializeMembers(this);
      String::operator=(v4, a2);
    }

    __int64 __fastcall TrackImpl::initializeMembers(CPVRTString *this)
    {
      __int64 result; // x0
    
      *((_QWORD *)this + 12) = 0;
      String::operator=((_DWORD *)this + 12, "");
      *((_BYTE *)this + 176) = 0;
      *((_QWORD *)this + 10) = 0;
      *((_QWORD *)this + 11) = 0;
      *((_QWORD *)this + 9) = 0;
      result = std::_Rb_tree<String,std::pair<String const,String>,std::_Select1st<std::pair<String const,String>>,std::less<String>,std::allocator<std::pair<String const,String>>>::_M_erase(
                 (__int64)this,
                 *((_QWORD *)this + 2));
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = (char *)this + 8;
      *((_QWORD *)this + 4) = (char *)this + 8;
      *((_QWORD *)this + 5) = 0;
      return result;
    }

    void __fastcall TrackImpl::~TrackImpl(CPVRTString *this)
    {
      FILE *v2; // x0
    
      v2 = (FILE *)*((_QWORD *)this + 9);
      if ( v2 )
      {
        fclose(v2);
        *((_QWORD *)this + 9) = 0;
      }
      TrackImpl::initializeMembers(this);
      String::~String((__int64)this + 152);
      String::~String((__int64)this + 128);
      String::~String((__int64)this + 104);
      String::~String((__int64)this + 48);
      std::_Rb_tree<String,std::pair<String const,String>,std::_Select1st<std::pair<String const,String>>,std::less<String>,std::allocator<std::pair<String const,String>>>::_M_erase(
        (__int64)this,
        *((_QWORD *)this + 2));
    }

    __int64 __fastcall TrackImpl::timestamp(CPVRTString *this, char *a2, char *a3)
    {
      int v4; // w20
      timeval v6; // [xsp+10h] [xbp-20h] BYREF
    
      v4 = (int)this;
      gettimeofday(&v6, 0);
      return snprintf(a2, v4, "%llu", 1000 * v6.tv_sec + v6.tv_usec / 0x3E8uLL);
    }

    __int64 __fastcall TrackImpl::eventField(CPVRTString *this, const char *__s)
    {
      size_t v4; // x0
      int v5; // w0
      int v6; // w21
      __int64 v7; // x8
      __int64 v9; // x8
      __int64 v10; // x8
    
      v4 = strlen(__s);
      v5 = LogicMath::min(v4, 2047);
      v6 = v5;
      if ( v5 >= 2048 )
        __assert_rtn(
          "eventField",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/logic/track/Track.cpp",
          298,
          "len < MAX_FIELD_SIZE");
      v7 = *((int *)this + 22);
      if ( v5 + (int)v7 + 2 > 524802 )
        return 0;
      *(_BYTE *)(*((_QWORD *)this + 10) + v7) = BYTE1(v5);
      v9 = *((int *)this + 22) + 1LL;
      *((_DWORD *)this + 22) = v9;
      *(_BYTE *)(*((_QWORD *)this + 10) + v9) = v5;
      v10 = *((int *)this + 22) + 1LL;
      *((_DWORD *)this + 22) = v10;
      memcpy((void *)(*((_QWORD *)this + 10) + v10), __s, v5);
      *((_DWORD *)this + 22) += v6;
      return 1;
    }

}; // end class TrackImpl
