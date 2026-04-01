class EventTracker
{
public:

    float __fastcall EventTracker::loggedIn(
            #1243 *a1,
            const String *a2,
            const String *a3,
            String *a4,
            int a5,
            String *a6,
            const String *a7,
            const String *a8,
            String *a9,
            const String *a10)
    {
      int v18; // w1
      const String *v19; // x2
      int v20; // w1
      const String *v21; // x2
      int v22; // w1
      const String *v23; // x2
      const String *v24; // x2
      const String *v25; // x2
      Track *v26; // x0
      const String *v27; // x2
      const String *v28; // x2
      const String *v29; // x2
      const String *v30; // x2
      String v32; // [xsp+0h] [xbp-E0h] BYREF
      String v33; // [xsp+18h] [xbp-C8h] BYREF
      String v34; // [xsp+30h] [xbp-B0h] BYREF
      String v35; // [xsp+48h] [xbp-98h] BYREF
      String v36; // [xsp+60h] [xbp-80h] BYREF
      String v37; // [xsp+78h] [xbp-68h] BYREF
    
      if ( EventTracker::sm_sessionOnGoing )
      {
        Track::endSession(a1);
        EventTracker::sm_sessionOnGoing = 0;
      }
      Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_ACCOUNT_ID, (const String *)a1, a3);
      String::valueOf(&v37, a6, v18);
      Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_SESSION_COUNT, &v37, v19);
      String::~String(&v37);
      String::valueOf(&v36, a4, v20);
      Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_DAYS_SINCE_STARTED_PLAYING, &v36, v21);
      String::~String(&v36);
      String::valueOf(&v35, (String *)(unsigned int)(a5 / 60), v22);
      Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_TOTAL_MINUTES_PLAYED, &v35, v23);
      String::~String(&v35);
      Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_DEVICE, a9, v24);
      v26 = (Track *)Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_GAME_LANGUAGE, a10, v25);
      if ( a7 )
        v26 = (Track *)Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_SERVER_TIME, a7, v27);
      if ( a8 )
        v26 = (Track *)Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_ACCOUNT_CREATED_DATE, a8, v27);
      if ( a2->m_length )
        v26 = (Track *)Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_FACEBOOK_ID, a2, v27);
      if ( a3->m_length )
        v26 = (Track *)Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_GAMECENTER_ID, a3, v27);
      Track::startSession(v26);
      String::String(&v34, "");
      Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_SERVER_TIME, &v34, v28);
      String::~String(&v34);
      String::String(&v33, "");
      Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_ACCOUNT_CREATED_DATE, &v33, v29);
      String::~String(&v33);
      String::String(&v32, "");
      Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_GAME_LANGUAGE, &v32, v30);
      String::~String(&v32);
      EventTracker::sm_sessionOnGoing = 1;
      EventTracker::sm_playtimeSeconds = 0;
      *(float *)&EventTracker::sm_playtimeSecondsAtSessionStart = (float)a5;
      return (float)a5;
    }

    #1243 *__fastcall EventTracker::loggedOut(#1243 *this)
    {
      if ( EventTracker::sm_sessionOnGoing )
      {
        this = (#1243 *)Track::endSession(this);
        EventTracker::sm_sessionOnGoing = 0;
      }
      return this;
    }

    __int64 __fastcall EventTracker::createEventText(
            MovieClip *this,
            const String *a2,
            const String *a3,
            const String *a4,
            const String *a5)
    {
      _QWORD *v5; // x9
      internal_t *p_internal; // x10
      internal_t *v7; // x11
      internal_t *v8; // x12
    
      v5 = (_QWORD *)((char *)this + 8);
      if ( *((_DWORD *)this + 1) + 1 > 8 )
        v5 = (_QWORD *)*v5;
      p_internal = &a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      v7 = &a3->internal;
      if ( a3->m_bytes + 1 > 8 )
        v7 = (internal_t *)v7->pHeap;
      v8 = &a4->internal;
      if ( a4->m_bytes + 1 > 8 )
        v8 = (internal_t *)v8->pHeap;
      return String::format((String *)"%s.%s.%s.%s", (const char *)a2, v5, p_internal, v7, v8);
    }

    __int64 __fastcall EventTracker::createEventText(MovieClip *this, const String *a2, const String *a3, const String *a4)
    {
      _QWORD *v4; // x9
      internal_t *p_internal; // x10
      internal_t *v6; // x11
    
      v4 = (_QWORD *)((char *)this + 8);
      if ( *((_DWORD *)this + 1) + 1 > 8 )
        v4 = (_QWORD *)*v4;
      p_internal = &a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      v6 = &a3->internal;
      if ( a3->m_bytes + 1 > 8 )
        v6 = (internal_t *)v6->pHeap;
      return String::format((String *)"%s.%s.%s", (const char *)a2, v4, p_internal, v6);
    }

    __int64 __fastcall EventTracker::createEventText(MovieClip *this, const String *a2, const String *a3)
    {
      _QWORD *v3; // x9
      internal_t *p_internal; // x10
    
      v3 = (_QWORD *)((char *)this + 8);
      if ( *((_DWORD *)this + 1) + 1 > 8 )
        v3 = (_QWORD *)*v3;
      p_internal = &a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      return String::format((String *)"%s.%s", (const char *)a2, a3, v3, p_internal);
    }

    void __fastcall EventTracker::sendEvent(
            MovieClip *this,
            const String *a2,
            const String *a3,
            const String *a4,
            const String *a5)
    {
      const char *v5; // x1
      internal_t *pHeap; // x8
      int v7; // w2
      const String *v8; // x1
      String v9; // [xsp+10h] [xbp-40h] BYREF
      String v10; // [xsp+28h] [xbp-28h] BYREF
    
      EventTracker::createEventText((__int64 *)&v10.m_length, this, a2, a3, a4, a5);
      if ( v10.m_bytes + 1 > 8 )
        pHeap = (internal_t *)v10.internal.pHeap;
      else
        pHeap = &v10.internal;
      String::format((String *)"Sending event: %s", v5, pHeap);
      Debugger::hudPrint((__siginfo *)&v9, (const String *)0xFFFFFFFFLL, v7);
      String::~String(&v9);
      Track::event((#1243 *)&v10, v8);
      String::~String(&v10);
    }

    void __fastcall EventTracker::sendEvent(MovieClip *this, const String *a2, const String *a3, const String *a4)
    {
      const char *v4; // x1
      internal_t *pHeap; // x8
      int v6; // w2
      const String *v7; // x1
      String v8; // [xsp+10h] [xbp-40h] BYREF
      String v9; // [xsp+28h] [xbp-28h] BYREF
    
      EventTracker::createEventText((__int64 *)&v9.m_length, this, a2, a3, a4);
      if ( v9.m_bytes + 1 > 8 )
        pHeap = (internal_t *)v9.internal.pHeap;
      else
        pHeap = &v9.internal;
      String::format((String *)"Sending event: %s", v4, pHeap);
      Debugger::hudPrint((__siginfo *)&v8, (const String *)0xFFFFFFFFLL, v6);
      String::~String(&v8);
      Track::event((#1243 *)&v9, v7);
      String::~String(&v9);
    }

    void __fastcall EventTracker::sendEvent(MovieClip *this, const String *a2, const String *a3)
    {
      const char *v3; // x1
      internal_t *pHeap; // x8
      int v5; // w2
      const String *v6; // x1
      String v7; // [xsp+10h] [xbp-40h] BYREF
      String v8; // [xsp+28h] [xbp-28h] BYREF
    
      EventTracker::createEventText((__int64 *)&v8.m_length, this, a2, a3);
      if ( v8.m_bytes + 1 > 8 )
        pHeap = (internal_t *)v8.internal.pHeap;
      else
        pHeap = &v8.internal;
      String::format((String *)"Sending event: %s", v3, pHeap);
      Debugger::hudPrint((__siginfo *)&v7, (const String *)0xFFFFFFFFLL, v5);
      String::~String(&v7);
      Track::event((#1243 *)&v8, v6);
      String::~String(&v8);
    }

    void __fastcall EventTracker::sendBillingEvent(MovieClip *this, const String *a2, const String *a3)
    {
      int v4; // w20
      const String *v6; // x3
      int v7; // w7
      String v8; // [xsp+8h] [xbp-68h] BYREF
      String v9; // [xsp+20h] [xbp-50h] BYREF
      String v10; // [xsp+38h] [xbp-38h] BYREF
    
      v4 = (int)a2;
      String::String(&v10, "");
      String::String(&v9, "");
      String::String(&v8, "");
      EventTracker::sendBillingEvent(this, &v10, &v9, v6, 0, v4, a3, v7);
      String::~String(&v8);
      String::~String(&v9);
      String::~String(&v10);
    }

    void __fastcall EventTracker::sendBillingEvent(
            const String *this,
            String *a2,
            String *a3,
            const String *a4,
            String *a5,
            const String *a6,
            String *a7)
    {
      DeviceLinkedStreamEntry *BillingPackageByName; // x0
      const char *v14; // x1
      DeviceLinkedStreamEntry *v15; // x23
      LogicStringUtil *CurrencyInUSD; // x26
      LogicStringUtil *Diamonds; // x23
      internal_t *p_internal; // x8
      const String *v19; // x1
      const String *v20; // x4
      const char *v21; // x1
      sigval *sival_ptr; // x8
      int v23; // w2
      Track *v24; // x0
      bool v25; // w2
      bool v26; // w2
      bool v27; // w2
      #1243 *v28; // x0
      bool v29; // w2
      bool v30; // w2
      bool v31; // w2
      #1243 *v32; // x0
      Track *isInitialized; // x0
      String v34; // [xsp+28h] [xbp-218h] BYREF
      String v35; // [xsp+40h] [xbp-200h] BYREF
      String v36; // [xsp+58h] [xbp-1E8h] BYREF
      String v37; // [xsp+70h] [xbp-1D0h] BYREF
      String v38; // [xsp+88h] [xbp-1B8h] BYREF
      String v39; // [xsp+A0h] [xbp-1A0h] BYREF
      String v40; // [xsp+B8h] [xbp-188h] BYREF
      String v41; // [xsp+D0h] [xbp-170h] BYREF
      String v42; // [xsp+E8h] [xbp-158h] BYREF
      String v43; // [xsp+100h] [xbp-140h] BYREF
      String v44; // [xsp+118h] [xbp-128h] BYREF
      String v45; // [xsp+130h] [xbp-110h] BYREF
      String v46; // [xsp+148h] [xbp-F8h] BYREF
      String v47; // [xsp+160h] [xbp-E0h] BYREF
      String v48; // [xsp+178h] [xbp-C8h] BYREF
      __siginfo v49; // [xsp+190h] [xbp-B0h] BYREF
    
      if ( a2->m_length )
      {
        BillingPackageByName = (DeviceLinkedStreamEntry *)LogicDataTables::getBillingPackageByName(
                                                            (#1004 *)a2,
                                                            0,
                                                            (#916 *)a3);
        v15 = BillingPackageByName;
        if ( BillingPackageByName )
        {
          CurrencyInUSD = (LogicStringUtil *)LogicBillingPackagesData::getCurrencyInUSD(BillingPackageByName);
          Diamonds = (LogicStringUtil *)LogicBillingPackagesData::getDiamonds(v15);
          goto LABEL_8;
        }
        p_internal = &a2->internal;
        if ( a2->m_bytes + 1 > 8 )
          p_internal = (internal_t *)p_internal->pHeap;
        String::format((String *)"EventTracker::could not find data with productId:%s", v14, p_internal);
        Debugger::warning((__siginfo *)&v49.__pad[3], v19);
        String::~String((String *)&v49.__pad[3]);
      }
      Diamonds = 0;
      CurrencyInUSD = 0;
    LABEL_8:
      LogicStringUtil::intToString(CurrencyInUSD, 0, (bool)a3);
      EventTracker::createEventText(
        (__int64 *)&v49.si_addr,
        (MovieClip *)&EventTracker::EVENT_TYPE_ECONOMY,
        &EventTracker::EVENT_SUBTYPE_IN_APP_PURCHASE,
        this,
        a2,
        v20);
      if ( HIDWORD(v49.si_addr) + 1 > 8 )
        sival_ptr = (sigval *)v49.si_value.sival_ptr;
      else
        sival_ptr = &v49.si_value;
      String::format((String *)"Sending event: %s", v21, sival_ptr);
      Debugger::hudPrint(&v49, (const String *)0xFFFFFFFFLL, v23);
      String::~String((String *)&v49);
      Track::addDeviceIdentificationParams(v24);
      if ( a3->m_length )
      {
        String::String(&v41, "Revenue");
        LogicStringUtil::intToString(Diamonds, 0, v25);
        String::String(&v39, "Transaction id");
        String::String(&v38, "Error code");
        LogicStringUtil::intToString((LogicStringUtil *)a5, 0, v26);
        String::String(&v36, "Store country");
        String::String(&v35, "Count");
        LogicStringUtil::intToString((LogicStringUtil *)a7, 0, v27);
        ((void (__fastcall *)(Track *__hidden, const String *, const String *, const String *, const String *, const String *, const String *, const String *, const String *, const String *, const String *, const String *, const String *))Track::event)(
          (Track *)&v49.si_addr,
          &v41,
          (const String *)v49.__pad,
          &EventTracker::EVENT_PARAM_DIAMOND_CHANGE,
          &v40,
          &v39,
          a3,
          &v38,
          &v37,
          &v36,
          a6,
          &v35,
          &v34);
        String::~String(&v34);
        String::~String(&v35);
        String::~String(&v36);
        String::~String(&v37);
        String::~String(&v38);
        String::~String(&v39);
        String::~String(&v40);
        String::~String(&v41);
      }
      else
      {
        String::String(&v48, "Revenue");
        LogicStringUtil::intToString(Diamonds, 0, v29);
        String::String(&v46, "Error code");
        LogicStringUtil::intToString((LogicStringUtil *)a5, 0, v30);
        String::String(&v44, "Store country");
        String::String(&v43, "Count");
        LogicStringUtil::intToString((LogicStringUtil *)a7, 0, v31);
        ((void (__fastcall *)(Track *__hidden, const String *, const String *, const String *, const String *, const String *, const String *, const String *, const String *, const String *, const String *))Track::event)(
          (Track *)&v49.si_addr,
          &v48,
          (const String *)v49.__pad,
          &EventTracker::EVENT_PARAM_DIAMOND_CHANGE,
          &v47,
          &v46,
          &v45,
          &v44,
          a6,
          &v43,
          &v42);
        String::~String(&v42);
        String::~String(&v43);
        String::~String(&v44);
        String::~String(&v45);
        String::~String(&v46);
        String::~String(&v47);
        String::~String(&v48);
      }
      v32 = (#1243 *)Track::removeDeviceIdentificationParams(v28);
      isInitialized = (Track *)Track::isInitialized(v32);
      if ( (_DWORD)isInitialized )
        Track::flush(isInitialized);
      String::~String((String *)&v49.si_addr);
      String::~String((String *)v49.__pad);
    }

    void __fastcall EventTracker::sendBillingEvent(const String *this, String *a2, const String *a3, const String *a4)
    {
      const String *v7; // x3
      String v8; // [xsp+0h] [xbp-50h] BYREF
      String v9; // [xsp+18h] [xbp-38h] BYREF
    
      String::String(&v9, "");
      String::String(&v8, "");
      EventTracker::sendBillingEvent(this, a2, &v9, v7, 0, a3, 0);
      String::~String(&v8);
      String::~String(&v9);
    }

    void __fastcall EventTracker::sendBillingEvent(
            const String *this,
            String *a2,
            String *a3,
            const String *a4,
            const String *a5)
    {
      const String *v9; // x3
      String v10; // [xsp+0h] [xbp-60h] BYREF
      String v11; // [xsp+18h] [xbp-48h] BYREF
    
      String::String(&v11, "");
      String::String(&v10, "");
      EventTracker::sendBillingEvent(this, a2, &v11, v9, a3, a4, 0);
      String::~String(&v10);
      String::~String(&v11);
    }

    Track *__fastcall EventTracker::flush(MovieClip *this)
    {
      Track *result; // x0
    
      result = (Track *)Track::isInitialized(this);
      if ( (_DWORD)result )
        return (Track *)Track::flush(result);
      return result;
    }

    float __fastcall EventTracker::updateTime(MovieClip *this, float a2)
    {
      float result; // s0
    
      result = *(float *)&EventTracker::sm_playtimeSeconds + a2;
      EventTracker::sm_playtimeSeconds = LODWORD(result);
      return result;
    }

    __int64 __fastcall EventTracker::accountConnectedWithGameCenter(String *this, const String *a2, const String *a3)
    {
      const String *v3; // x1
    
      Track::setGlobalParam((Track *)&EventTracker::GLOBAL_PARAM_GAMECENTER_ID, this, a3);
      return Track::event((#1243 *)&EventTracker::EVENT_TYPE_CONNECT_WITH_GAMECENTER, v3);
    }

}; // end class EventTracker
