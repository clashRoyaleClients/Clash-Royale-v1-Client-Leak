class BillingManager
{
public:

    __int64 __fastcall BillingManager::BillingManager(__int64 a1)
    {
      *(_QWORD *)a1 = off_100472330;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      String::String((String *)(a1 + 56));
      String::String((String *)(a1 + 80));
      String::String((String *)(a1 + 104));
      String::String((String *)(a1 + 144));
      String::String((String *)(a1 + 168));
      BillingManager::initializeMembers((BillingManager *)a1);
      return a1;
    }

    __int64 __fastcall BillingManager::~BillingManager(__int64 a1)
    {
      void *v2; // x20
      __int64 v3; // x0
    
      *(_QWORD *)a1 = off_100472330;
      v2 = *(void **)(a1 + 24);
      if ( v2 )
      {
        Billing::~Billing(*(Billing **)(a1 + 24));
        operator delete(v2);
      }
      v3 = *(_QWORD *)(a1 + 128);
      if ( v3 )
        operator delete[](v3);
      *(_QWORD *)(a1 + 128) = 0;
      BillingManager::initializeMembers((BillingManager *)a1);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      std::vector<BillingProduct>::~vector(a1 + 32);
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall BillingManager::~BillingManager(__int64 a1)
    {
      return __ZN14BillingManagerD2Ev(a1);
    }

    void __fastcall BillingManager::~BillingManager(void *a1)
    {
      BillingManager::~BillingManager((__int64)a1);
      operator delete(a1);
    }

    __int64 BillingManager::constructInstance()
    {
      __int64 v0; // x19
      __int64 result; // x0
    
      v0 = operator new(216);
      result = BillingManager::BillingManager(v0);
      BillingManager::sm_pInstance = v0;
      return result;
    }

    __int64 __fastcall BillingManager::destructInstance(DeviceLinkWindow *this)
    {
      __int64 result; // x0
    
      result = BillingManager::sm_pInstance;
      if ( BillingManager::sm_pInstance )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)BillingManager::sm_pInstance + 8LL))(BillingManager::sm_pInstance);
      BillingManager::sm_pInstance = 0;
      return result;
    }

    void __fastcall BillingManager::billingProducts(__int64 a1, int a2, __int64 a3)
    {
      __int64 v6; // x21
      BillingProduct *v7; // x23
      BillingProduct *v8; // x24
      BillingProduct *v9; // x0
      __int64 v10; // x0
      const char *v11; // x1
      sigval *sival_ptr; // x8
      int v13; // w2
      __int64 v14; // x23
      const char *v15; // x1
      __int64 v16; // x8
      __int64 v17; // x9
      int v18; // w2
      int v19; // w8
      String v20; // [xsp+18h] [xbp-A8h] BYREF
      String v21; // [xsp+30h] [xbp-90h] BYREF
      __siginfo v22; // [xsp+48h] [xbp-78h] BYREF
    
      *(_DWORD *)(a1 + 196) = 0;
      *(_BYTE *)(a1 + 194) = 0;
      v6 = a1 + 32;
      v7 = *(BillingProduct **)(a1 + 32);
      v8 = *(BillingProduct **)(a1 + 40);
      if ( v8 != v7 )
      {
        v9 = *(BillingProduct **)(a1 + 32);
        do
        {
          BillingProduct::~BillingProduct(v9);
          v9 = (BillingProduct *)(v10 + 168);
        }
        while ( v8 != v9 );
      }
      *(_QWORD *)(a1 + 40) = v7;
      BillingManager::getStoreCountryCode(&v22.si_addr, a1);
      if ( HIDWORD(v22.si_addr) + 1 > 8 )
        sival_ptr = (sigval *)v22.si_value.sival_ptr;
      else
        sival_ptr = &v22.si_value;
      String::format((String *)"AppStore country: %s", v11, sival_ptr);
      Debugger::hudPrint((__siginfo *)v22.__pad, (const String *)0xFFFFFFFFLL, v13);
      String::~String();
      String::~String();
      if ( a2 >= 1 )
      {
        v14 = 0;
        do
        {
          std::vector<BillingProduct>::push_back(v6, a3);
          if ( *(_DWORD *)(a3 + 4) + 1 > 8 )
            v16 = *(_QWORD *)(a3 + 8);
          else
            v16 = a3 + 8;
          if ( *(_DWORD *)(a3 + 28) + 1 > 8 )
            v17 = *(_QWORD *)(a3 + 32);
          else
            v17 = a3 + 32;
          String::format((String *)"billingProducts(%i, %s, %s)", v15, v14, v16, v17);
          Debugger::hudPrint(&v22, (const String *)0xFFFFFFFFLL, v18);
          String::~String();
          ++v14;
          a3 += 168;
        }
        while ( v14 < a2 );
      }
      if ( *(_DWORD *)(a1 + 212) > (signed int)(1022611261 * ((*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 3)) )
      {
        v19 = *(_DWORD *)(a1 + 204);
        if ( v19 < *(_DWORD *)(a1 + 208) )
        {
          *(_DWORD *)(a1 + 204) = v19 + 1;
          BillingManager::lookupProductDetails((BillingManager *)a1);
        }
      }
      String::String(&v21, "productsreceived");
      BillingManager::getStoreCountryCode(&v20, a1);
      EventTracker::sendBillingEvent(
        (MovieClip *)&v21,
        &v20,
        (const String *)(1022611261 * (unsigned int)((*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 3)));
      String::~String();
      String::~String();
    }

    String *__usercall BillingManager::getStoreCountryCode@<X0>(__int64 a1@<X0>, String *a2@<X8>)
    {
      if ( *(_QWORD *)(a1 + 24) )
        return (String *)Billing::getStoreCountryCode();
      else
        return String::String(a2, "");
    }

    __int64 __fastcall BillingManager::lookupProductDetails(__int64 a1)
    {
      __int64 result; // x0
      __int64 v3; // x20
      __int64 v4; // x21
      DeviceLinkedStreamEntry *v5; // x0
      AreaEffectObject *v6; // x22
      Billing *v7; // x23
      const String *Name; // x0
    
      result = LogicDataTables::getTable(2);
      v3 = result;
      if ( result )
      {
        *(_DWORD *)(a1 + 212) = 0;
        if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)result + 32LL))(result) > 0 )
        {
          v4 = 0;
          do
          {
            v5 = (DeviceLinkedStreamEntry *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, v4);
            v6 = v5;
            if ( v5 )
            {
              if ( (unsigned int)LogicBillingPackagesData::existsOnPlatform(v5) )
              {
                v7 = *(Billing **)(a1 + 24);
                Name = (const String *)LogicData::getName(v6);
                Billing::addProductId(v7, Name);
                ++*(_DWORD *)(a1 + 212);
              }
            }
            v4 = (unsigned int)(v4 + 1);
          }
          while ( (int)v4 < (*(int (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3) );
        }
        return Billing::lookupDetails(*(Billing **)(a1 + 24));
      }
      return result;
    }

    __int64 __fastcall BillingManager::arePaymentsAvailable(__int64 a1)
    {
      if ( *(_QWORD *)(a1 + 24) )
        return Billing::arePaymentsAvailable();
      else
        return 0;
    }

    void __fastcall BillingManager::buyProduct(__int64 a1, LogicKickAllianceMemberCommand *a2, const char *a3)
    {
      int v5; // w23
      __int64 ClientGlobals; // x0
      xTimer *v7; // x21
      signed int v8; // w22
      uint64_t NativeTime; // x0
      unsigned __int64 v10; // x2
      AreaEffectObject *v11; // x2
      long double PassedTimeMs; // q0
      int v13; // w21
      int v14; // w23
      DeviceLinkedStreamEntry *v15; // x0
      const char *v16; // x1
      const String *v17; // x3
      int v18; // w2
      const String *v19; // x3
      const String *v20; // x1
      AreaEffectObject *v21; // x2
      __int64 BillingPackageByName; // x21
      DisplayObject *v23; // x21
      __int64 v24; // x22
      BadgePopup *v25; // x0
      __int64 Instance; // x0
      String v27; // [xsp+18h] [xbp-1A8h] BYREF
      String v28; // [xsp+30h] [xbp-190h] BYREF
      String v29; // [xsp+48h] [xbp-178h] BYREF
      String v30; // [xsp+60h] [xbp-160h] BYREF
      _QWORD v31[6]; // [xsp+78h] [xbp-148h] BYREF
      String v32[5]; // [xsp+A8h] [xbp-118h] BYREF
      String v33; // [xsp+120h] [xbp-A0h] BYREF
      String v34; // [xsp+138h] [xbp-88h] BYREF
      String v35; // [xsp+150h] [xbp-70h] BYREF
      __int64 v36[3]; // [xsp+168h] [xbp-58h] BYREF
    
      Debugger::doAssert((Debugger *)(*(_QWORD *)(a1 + 24) != 0), (bool)"Billing not yet initialized", a3);
      if ( !*(_BYTE *)(LogicDataTables::getClientGlobals() + 176) )
        goto LABEL_16;
      if ( *(_BYTE *)(a1 + 193) )
        goto LABEL_16;
      v5 = *(_DWORD *)(LogicDataTables::getClientGlobals() + 180);
      ClientGlobals = LogicDataTables::getClientGlobals();
      v7 = *(xTimer **)(a1 + 16);
      if ( !v7 )
        goto LABEL_16;
      v8 = *(_DWORD *)(ClientGlobals + 184);
      NativeTime = xTimer::getNativeTime();
      PassedTimeMs = xTimer::getPassedTimeMs(v7, NativeTime, v10);
      v13 = (int)*(float *)&PassedTimeMs;
      if ( (int)*(float *)&PassedTimeMs < 60000 * v5
        && (v14 = *(_DWORD *)(a1 + 8),
            v15 = (DeviceLinkedStreamEntry *)LogicDataTables::getBillingPackageByName(a2, 0, v11),
            (int)(LogicBillingPackagesData::getCurrencyInUSD(v15) + v14) >= v8) )
      {
        String::getFormatted(
          v36,
          (String *)"Purchase limit triggered time_%i, USD:%i",
          v16,
          (float)((float)v13 * 0.001),
          *(unsigned int *)(a1 + 8));
        Debugger::print((Debugger *)v36, v20);
        String::~String();
        BillingPackageByName = LogicDataTables::getBillingPackageByName(a2, 0, v21);
        String::String(&v35, "");
        if ( BillingPackageByName )
        {
          LogicData::getTID(BillingPackageByName);
          String::operator=(&v35);
        }
        v23 = (DisplayObject *)operator new(312);
        v24 = *(_QWORD *)(a1 + 16);
        String::String(&v34, &v35);
        Billing::getProductDetails(v31, *(_QWORD *)(a1 + 24), a2);
        String::String(&v33, v32);
        PurchaseConfirmationPopup::PurchaseConfirmationPopup((__int64)v23, v24, (#1308 *)&v34, (__int64)&v33);
        String::~String();
        BillingProduct::~BillingProduct((BillingProduct *)v31);
        String::~String();
        Instance = GUI::getInstance(v25);
        GUI::showPopup(Instance, v23, 1, 0, 0);
        String::operator=((String *)(a1 + 80));
      }
      else
      {
    LABEL_16:
        if ( (unsigned int)Billing::isWaitingForProductDetails(*(_QWORD *)(a1 + 24)) )
        {
          String::String(&v30, "cantbuywaitingforproducts");
          BillingManager::getStoreCountryCode(a1, &v29);
          EventTracker::sendBillingEvent(&v30, (String *)a2, &v29, v17);
          String::~String();
          String::~String();
          Debugger::hudPrint((__siginfo *)"Billing is still waiting for product details.", (const char *)0xFFFFFFFFLL, v18);
          return;
        }
        Billing::buyProduct(*(Billing **)(a1 + 24), (const String *)a2);
        String::String(&v28, "transactionstarted");
        BillingManager::getStoreCountryCode(a1, &v27);
        EventTracker::sendBillingEvent(&v28, (String *)a2, &v27, v19);
        String::~String();
      }
      String::~String();
    }

    __int64 __fastcall BillingManager::finishTransaction(__int64 a1, __int64 a2, String *a3)
    {
      _QWORD *v6; // x8
      int v7; // w2
      const char *v8; // x2
      uint64_t NativeTime; // x22
      unsigned __int64 v10; // x2
      AreaEffectObject *v11; // x2
      long double PassedTimeMs; // q0
      DeviceLinkedStreamEntry *BillingPackageByName; // x0
      __int64 v14; // x8
      const char *v15; // x1
      const String *v16; // x1
      DeviceLinkedStreamEntry *v17; // x0
      const char *v18; // x1
      __int64 v19; // x0
      String v21; // [xsp+10h] [xbp-90h] BYREF
      String v22; // [xsp+28h] [xbp-78h] BYREF
      String v23; // [xsp+40h] [xbp-60h] BYREF
      String v24; // [xsp+58h] [xbp-48h] BYREF
    
      v6 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v6 = (_QWORD *)*v6;
      String::format((String *)"Finishing transaction id: %s", (const char *)a2, v6);
      Debugger::hudPrint((__siginfo *)&v24, (const String *)0xFFFFFFFFLL, v7);
      String::~String();
      Debugger::doAssert((Debugger *)(*(_QWORD *)(a1 + 24) != 0), (bool)"Billing not yet initialized", v8);
      String::String(&v23, "finishtransaction");
      BillingManager::getStoreCountryCode(a1, &v22);
      EventTracker::sendBillingEvent(&v23, a3, (String *)a2, (const String *)(a1 + 56), 0, &v22, 0);
      String::~String();
      String::~String();
      Billing::finishTransaction(*(Billing **)(a1 + 24), (const String *)a2);
      NativeTime = xTimer::getNativeTime();
      PassedTimeMs = xTimer::getPassedTimeMs((xTimer *)*(_QWORD *)(a1 + 16), NativeTime, v10);
      if ( *(_QWORD *)(a1 + 16)
        && (int)*(float *)&PassedTimeMs < 60000 * *(_DWORD *)(LogicDataTables::getClientGlobals() + 180) )
      {
        BillingPackageByName = (DeviceLinkedStreamEntry *)LogicDataTables::getBillingPackageByName(
                                                            (LogicKickAllianceMemberCommand *)a3,
                                                            0,
                                                            v11);
        v14 = *(_DWORD *)(a1 + 8) + (unsigned int)LogicBillingPackagesData::getCurrencyInUSD(BillingPackageByName);
        *(_DWORD *)(a1 + 8) = v14;
        String::getFormatted((__int64 *)&v21.m_length, (String *)"Purchase limit: increased purchases to:%i", v15, v14);
        Debugger::print((Debugger *)&v21, v16);
        String::~String();
      }
      else
      {
        *(_QWORD *)(a1 + 16) = NativeTime;
        v17 = (DeviceLinkedStreamEntry *)LogicDataTables::getBillingPackageByName(
                                           (LogicKickAllianceMemberCommand *)a3,
                                           0,
                                           v11);
        *(_DWORD *)(a1 + 8) = LogicBillingPackagesData::getCurrencyInUSD(v17);
        Debugger::print((Debugger *)"Purchase limit: Time elapsed, reset the time", v18);
      }
      *(_BYTE *)(a1 + 192) = 0;
      String::operator=(a1 + 80, "");
      String::operator=(a1 + 144, "");
      String::operator=(a1 + 56, "");
      *(_DWORD *)(a1 + 136) = 0;
      v19 = *(_QWORD *)(a1 + 128);
      if ( v19 )
        operator delete[](v19);
      *(_QWORD *)(a1 + 128) = 0;
      String::operator=(a1 + 168, "");
      return String::operator=(a1 + 104, "");
    }

    __int64 __fastcall BillingManager::isWaitingForProductDetails(__int64 a1, __int64 a2, const char *a3)
    {
      Debugger::doAssert((Debugger *)(*(_QWORD *)(a1 + 24) != 0), (bool)"Billing not yet initialized", a3);
      return Billing::isWaitingForProductDetails(*(_QWORD *)(a1 + 24));
    }

    __int64 __fastcall BillingManager::isWaitingForTransaction(__int64 a1, __int64 a2, const char *a3)
    {
      long double v4; // q0
    
      *(__n128 *)&v4 = Debugger::doAssert((Debugger *)(*(_QWORD *)(a1 + 24) != 0), (bool)"Billing not yet initialized", a3);
      if ( *(_BYTE *)(a1 + 192) )
        return 1;
      else
        return Billing::isWaitingForTransaction(*(_QWORD *)(a1 + 24), v4);
    }

    void __fastcall BillingManager::billingValidationFailed(__int64 a1, __int64 a2, String *a3, int a4)
    {
      _QWORD *v8; // x8
      int v9; // w2
      const char *v10; // x2
      __int64 v11; // x0
      String v12; // [xsp+18h] [xbp-98h] BYREF
      String v13; // [xsp+30h] [xbp-80h] BYREF
      String v14; // [xsp+48h] [xbp-68h] BYREF
      String v15; // [xsp+60h] [xbp-50h] BYREF
      String v16; // [xsp+78h] [xbp-38h] BYREF
    
      v8 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v8 = (_QWORD *)*v8;
      String::format(
        (String *)"Billing request failed due to error code %d in server side validation for transaction id: %s",
        (const char *)a2,
        a3,
        v8);
      Debugger::hudPrint((__siginfo *)&v16, (const String *)0xFFFFFFFFLL, v9);
      String::~String();
      Debugger::doAssert((Debugger *)(*(_QWORD *)(a1 + 24) != 0), (bool)"Billing not yet initialized", v10);
      if ( a4 )
      {
        Billing::finishTransaction(*(Billing **)(a1 + 24), (const String *)a2);
        String::operator=(a1 + 80, "");
        *(_BYTE *)(a1 + 192) = 0;
        String::operator=(a1 + 144, "");
        String::operator=(a1 + 56, "");
        *(_DWORD *)(a1 + 136) = 0;
        v11 = *(_QWORD *)(a1 + 128);
        if ( v11 )
          operator delete[](v11);
        *(_QWORD *)(a1 + 128) = 0;
        String::operator=(a1 + 168, "");
        String::operator=(a1 + 104, "");
      }
      String::String(&v15, "validationfailed");
      String::String(&v14, "");
      String::String(&v13, "");
      BillingManager::getStoreCountryCode(a1, &v12);
      EventTracker::sendBillingEvent(&v15, &v14, (String *)a2, &v13, a3, &v12, 0);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
    }

    _BYTE *__fastcall BillingManager::billingProductBought(
            DeviceLinkWindow *this,
            const String *a2,
            const String *a3,
            char *a4,
            int a5)
    {
      String *v10; // x24
      __int64 v11; // x0
      __int64 v12; // x0
      _BYTE *result; // x0
      __int64 v14; // x9
      String v15; // [xsp+8h] [xbp-78h] BYREF
      String v16; // [xsp+20h] [xbp-60h] BYREF
      String v17; // [xsp+38h] [xbp-48h] BYREF
    
      v10 = (String *)((char *)this + 56);
      String::String(&v17, a4, a5);
      String::operator=(v10);
      String::~String();
      String::String(&v16, a2);
      String::operator=((String *)((char *)this + 104));
      String::~String();
      String::String(&v15, a3);
      String::operator=((String *)((char *)this + 80));
      String::~String();
      *((_BYTE *)this + 192) = 1;
      v11 = *((_QWORD *)this + 16);
      if ( v11 )
        operator delete[](v11);
      if ( a5 < 0LL )
        v12 = -1;
      else
        v12 = a5;
      result = (_BYTE *)operator new[](v12);
      *((_QWORD *)this + 16) = result;
      if ( a5 >= 1 )
      {
        *result = *a4;
        if ( a5 != 1 )
        {
          v14 = 1;
          do
          {
            *(_BYTE *)(*((_QWORD *)this + 16) + v14) = a4[v14];
            ++v14;
          }
          while ( a5 != (_DWORD)v14 );
        }
      }
      *((_DWORD *)this + 34) = a5;
      if ( *((_BYTE *)this + 200) )
        return (_BYTE *)BillingManager::handlePendingPurchase(this);
      return result;
    }

    void __fastcall BillingManager::handlePendingPurchase(DeviceLinkWindow *this, const char *a2)
    {
      _QWORD *v3; // x8
      _QWORD *v4; // x9
      int v5; // w2
      AppleBillingRequestMessage *v6; // x20
      String v7; // [xsp+20h] [xbp-1F0h] BYREF
      String v8; // [xsp+38h] [xbp-1D8h] BYREF
      String v9; // [xsp+50h] [xbp-1C0h] BYREF
      _QWORD v10[21]; // [xsp+68h] [xbp-1A8h] BYREF
      _QWORD v11[21]; // [xsp+110h] [xbp-100h] BYREF
      __siginfo var58; // [xsp+1B8h] [xbp-58h] BYREF
    
      if ( *((_BYTE *)this + 192) )
      {
        v3 = (_QWORD *)((char *)this + 88);
        if ( *((_DWORD *)this + 21) + 1 > 8 )
          v3 = (_QWORD *)*v3;
        v4 = (_QWORD *)((char *)this + 112);
        if ( *((_DWORD *)this + 27) + 1 > 8 )
          v4 = (_QWORD *)*v4;
        String::format(
          (String *)"billingProductHandled(%s, %s, %p, %d)",
          a2,
          v3,
          v4,
          *((_QWORD *)this + 16),
          *((unsigned int *)this + 34));
        Debugger::hudPrint(&var58, (const String *)0xFFFFFFFFLL, v5);
        String::~String();
        Billing::getProductDetails(v11, *((_QWORD *)this + 3), (char *)this + 80);
        Billing::getProductDetails(v10, *((_QWORD *)this + 3), (char *)this + 80);
        v6 = (AppleBillingRequestMessage *)operator new(184);
        AppleBillingRequestMessage::AppleBillingRequestMessage(v6);
        AppleBillingRequestMessage::setProdID((String *)v6);
        AppleBillingRequestMessage::setTID((String *)v6);
        AppleBillingRequestMessage::setCurrencyCode((String *)v6);
        AppleBillingRequestMessage::setPrice((String *)v6);
        AppleBillingRequestMessage::setReceiptData(v6, *((_BYTE **)this + 16), *((_DWORD *)this + 34));
        String::String(&v9, "boughtproducthandled");
        String::String(&v8, "");
        BillingManager::getStoreCountryCode((__int64)this, &v7);
        EventTracker::sendBillingEvent(&v9, (String *)((char *)this + 80), (String *)((char *)this + 104), &v8, 0, &v7, 0);
        String::~String();
        String::~String();
        String::~String();
        MessageManager::sendMessage((Messaging **)MessageManager::sm_pInstance, v6);
        BillingProduct::~BillingProduct((BillingProduct *)v10);
        BillingProduct::~BillingProduct((BillingProduct *)v11);
        *((_BYTE *)this + 192) = 0;
      }
    }

    void __fastcall BillingManager::retryPendingPurchase(DeviceLinkWindow *this, const char *a2)
    {
      if ( !*((_BYTE *)this + 192) )
      {
        if ( *((_DWORD *)this + 26) )
        {
          *((_BYTE *)this + 192) = 1;
          BillingManager::handlePendingPurchase(this, a2);
        }
      }
    }

    __int64 __fastcall BillingManager::billingProductFailed(DeviceLinkWindow *this, String *a2, String *a3, String *a4)
    {
      const String *v8; // x4
      const char *v9; // x1
      internal_t *p_internal; // x8
      int v11; // w2
      AllianceStreamMessage *v12; // x0
      AllianceStreamMessage *Instance; // x0
      AllianceStreamMessage *v14; // x0
      __int64 result; // x0
      __siginfo v16; // [xsp+18h] [xbp-68h] BYREF
    
      String::String((String *)v16.__pad, "transactionfailed");
      BillingManager::getStoreCountryCode((__int64)this, (String *)&v16.si_addr);
      EventTracker::sendBillingEvent((const String *)v16.__pad, a2, a4, (const String *)&v16.si_addr, v8);
      String::~String();
      String::~String();
      p_internal = &a3->internal;
      if ( a3->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      String::getFormatted(
        (__int64 *)&v16.si_signo,
        (String *)"transaction failed! code:%i, description:%s",
        v9,
        a4,
        p_internal);
      Debugger::hudPrint(&v16, (const String *)0xFFFFFFFFLL, v11);
      String::~String();
      Instance = GameMain::getInstance(v12);
      if ( Instance )
      {
        v14 = GameMain::getInstance(Instance);
        GameMain::showNativeDialog((__int64)v14, 12, (int)a4, a3);
      }
      String::operator=((char *)this + 104, "");
      String::operator=((char *)this + 80, "");
      result = String::operator=((char *)this + 56, "");
      *((_BYTE *)this + 192) = 0;
      return result;
    }

    void __fastcall BillingManager::billingProductCancelled(__int64 a1, String *a2)
    {
      const String *v4; // x3
      const char *v5; // x1
      internal_t *p_internal; // x8
      const String *v7; // x1
      __siginfo var58; // [xsp+8h] [xbp-58h] BYREF
    
      String::String((String *)var58.__pad, "transactioncancelled");
      BillingManager::getStoreCountryCode(a1, (String *)&var58.si_addr);
      EventTracker::sendBillingEvent((const String *)var58.__pad, a2, (const String *)&var58.si_addr, v4);
      String::~String();
      String::~String();
      p_internal = &a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      String::format((String *)"billingProductCanceled(%s)", v5, p_internal);
      Debugger::warning(&var58, v7);
      String::~String();
      *(_BYTE *)(a1 + 192) = 0;
    }

    bool __fastcall BillingManager::isInitialized(DeviceLinkWindow *this)
    {
      return *((_QWORD *)this + 3) != 0;
    }

    __int64 __fastcall BillingManager::initialize(__int64 a1)
    {
      Billing *v2; // x20
      int v3; // w2
      char *v4; // x0
      const String *v5; // x3
      __int64 result; // x0
      String v7; // [xsp+8h] [xbp-58h] BYREF
      String v8; // [xsp+20h] [xbp-40h] BYREF
      String v9; // [xsp+38h] [xbp-28h] BYREF
    
      v2 = (Billing *)operator new(40);
      Billing::Billing(v2);
      *(_QWORD *)(a1 + 24) = v2;
      if ( (unsigned int)Billing::arePaymentsAvailable(v2) )
        v4 = "Billing available: TRUE";
      else
        v4 = "Billing available: FALSE";
      Debugger::hudPrint((__siginfo *)v4, (const char *)0xFFFFFFFFLL, v3);
      if ( (Billing::arePaymentsAvailable(*(_QWORD *)(a1 + 24)) & 1) == 0 )
      {
        String::String(&v9, "paymentsunavailable");
        String::String(&v8, "");
        String::String(&v7, "");
        EventTracker::sendBillingEvent(&v9, &v8, &v7, v5);
        String::~String();
        String::~String();
        String::~String();
      }
      Billing::setListener(*(Billing **)(a1 + 24), (IBillingListener *)a1);
      BillingManager::lookupProductDetails(a1);
      *(_DWORD *)(a1 + 204) = 0;
      *(_BYTE *)(a1 + 200) = *(_BYTE *)(LogicDataTables::getClientGlobals() + 196);
      result = LogicDataTables::getClientGlobals();
      *(_DWORD *)(a1 + 208) = *(_DWORD *)(result + 192);
      return result;
    }

    __int64 __fastcall BillingManager::disableBilling(__int64 a1, __int64 a2, const char *a3)
    {
      __int64 result; // x0
    
      Debugger::doAssert((Debugger *)(*(_QWORD *)(a1 + 24) != 0), (bool)"Billing not yet initialized", a3);
      result = Billing::arePaymentsAvailable(*(_QWORD *)(a1 + 24));
      if ( (_DWORD)result )
      {
        if ( *(_BYTE *)(a1 + 200) )
          return Billing::stopBillingTransactions(*(Billing **)(a1 + 24));
      }
      return result;
    }

    __int64 __fastcall BillingManager::enableBilling(__int64 a1, __int64 a2, const char *a3)
    {
      __int64 result; // x0
    
      Debugger::doAssert((Debugger *)(*(_QWORD *)(a1 + 24) != 0), (bool)"Billing not yet initialized", a3);
      result = Billing::arePaymentsAvailable(*(_QWORD *)(a1 + 24));
      if ( (_DWORD)result )
      {
        if ( *(_BYTE *)(a1 + 200) )
          Billing::startBillingTransactions(*(Billing **)(a1 + 24));
        result = BillingManager::lookupProductDetails(a1);
        *(_DWORD *)(a1 + 204) = 0;
      }
      return result;
    }

    __int64 __fastcall BillingManager::lookupProductsIfNeeded(DeviceLinkWindow *this)
    {
      if ( !LogicDataTables::getTable(2)
        || *((_DWORD *)this + 53) <= (signed int)(1022611261 * ((*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 3)) )
      {
        return 0;
      }
      *((_DWORD *)this + 51) = 0;
      Billing::lookupDetails(*((Billing **)this + 3));
      return 1;
    }

    __int64 __fastcall BillingManager::handlePurchaseConfirmation(Billing **this, int a2)
    {
      const String *v3; // x19
    
      v3 = (const String *)(this + 10);
      if ( a2 && v3->m_length )
      {
        Billing::buyProduct(*(this + 3), v3);
        *(this + 2) = 0;
        *((_DWORD *)this + 2) = 0;
        *((_BYTE *)this + 193) = 1;
      }
      return String::operator=(v3, "");
    }

    void __fastcall BillingManager::billingProductsRequestFailed(__int64 a1, __int64 a2, String *a3)
    {
      const String *v6; // x4
      const String *v7; // x1
      _QWORD v8[3]; // [xsp+0h] [xbp-80h] BYREF
      String v9; // [xsp+18h] [xbp-68h] BYREF
      String v10; // [xsp+30h] [xbp-50h] BYREF
      String v11; // [xsp+48h] [xbp-38h] BYREF
    
      *(_BYTE *)(a1 + 194) = 1;
      *(_DWORD *)(a1 + 196) = (_DWORD)a3;
      String::String(&v11, "productrequestfailed");
      String::String(&v10, "");
      BillingManager::getStoreCountryCode(a1, &v9);
      EventTracker::sendBillingEvent(&v11, &v10, a3, &v9, v6);
      String::~String();
      String::~String();
      String::~String();
      operator+(v8, "product request failed", a2);
      Debugger::print((Debugger *)v8, v7);
      String::~String();
      if ( *(_DWORD *)(a1 + 204) < *(_DWORD *)(a1 + 208) )
      {
        BillingManager::lookupProductDetails(a1);
        ++*(_DWORD *)(a1 + 204);
      }
    }

    __int64 __fastcall BillingManager::initializeMembers(__int64 a1)
    {
      __int64 result; // x0
    
      *(_DWORD *)(a1 + 196) = 0;
      *(_BYTE *)(a1 + 194) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      String::operator=(a1 + 56, "");
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      String::operator=(a1 + 80, "");
      *(_BYTE *)(a1 + 193) = 0;
      String::operator=(a1 + 104, "");
      *(_BYTE *)(a1 + 192) = 0;
      *(_BYTE *)(a1 + 200) = 1;
      *(_QWORD *)(a1 + 128) = 0;
      *(_DWORD *)(a1 + 136) = 0;
      String::operator=(a1 + 168, "");
      result = String::operator=(a1 + 144, "");
      *(_QWORD *)(a1 + 204) = 0;
      *(_DWORD *)(a1 + 212) = 0;
      return result;
    }

}; // end class BillingManager
