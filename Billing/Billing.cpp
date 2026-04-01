class Billing
{
public:

    _QWORD *__fastcall Billing::Billing(_QWORD *a1)
    {
      *a1 = 0;
      String::String((__int64)(a1 + 2));
      a1[1] = -[BillingDelegate initWithBilling:](
                +[BillingDelegate alloc](&OBJC_CLASS___BillingDelegate, "alloc"),
                "initWithBilling:",
                a1);
      return a1;
    }

    _QWORD *__fastcall Billing::Billing(_QWORD *a1)
    {
      Billing::Billing(a1);
      return a1;
    }

    __int64 __fastcall Billing::~Billing(__int64 a1)
    {
      objc_msgSend(*(id *)(a1 + 8), "release");
      String::~String(a1 + 16);
      return a1;
    }

    __int64 __fastcall Billing::~Billing(__int64 a1)
    {
      Billing::~Billing(a1);
      return a1;
    }

    id __fastcall Billing::setListener(__int64 a1, __int64 a2)
    {
      return objc_msgSend(*(id *)(a1 + 8), "setM_pListener:", a2);
    }

    id __fastcall Billing::addProductId(__int64 a1, __int64 a2)
    {
      _QWORD *v2; // x2
    
      v2 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v2 = (_QWORD *)*v2;
      return objc_msgSend(
               *(id *)(a1 + 8),
               "addProductId:",
               +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v2));
    }

    id __fastcall Billing::lookupDetails(__int64 a1)
    {
      return objc_msgSend(*(id *)(a1 + 8), "lookup");
    }

    id __fastcall Billing::buyProduct(__int64 a1, __int64 a2)
    {
      _QWORD *v2; // x2
    
      v2 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v2 = (_QWORD *)*v2;
      return objc_msgSend(
               *(id *)(a1 + 8),
               "buy:",
               +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v2));
    }

    id __fastcall Billing::finishTransaction(__int64 a1, __int64 a2)
    {
      _QWORD *v2; // x2
    
      v2 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v2 = (_QWORD *)*v2;
      return objc_msgSend(
               *(id *)(a1 + 8),
               "finishTransaction:",
               +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v2));
    }

    bool __fastcall Billing::isWaitingForProductDetails(__int64 a1)
    {
      return objc_msgSend(*(id *)(a1 + 8), "m_productRequest") != 0;
    }

    bool Billing::isWaitingForTransaction()
    {
      return -[NSArray count](
               -[SKPaymentQueue transactions](
                 +[SKPaymentQueue defaultQueue](&OBJC_CLASS___SKPaymentQueue, "defaultQueue"),
                 "transactions"),
               "count") != 0;
    }

    bool Billing::arePaymentsAvailable()
    {
      return +[SKPaymentQueue canMakePayments](&OBJC_CLASS___SKPaymentQueue, "canMakePayments");
    }

    id __fastcall Billing::startBillingTransactions(__int64 a1)
    {
      return objc_msgSend(*(id *)(a1 + 8), "addTransactionObserver");
    }

    id __fastcall Billing::stopBillingTransactions(__int64 a1)
    {
      return objc_msgSend(*(id *)(a1 + 8), "removeTransactionObserver");
    }

    void __usercall Billing::getProductDetails(__int64 a1@<X0>, __int64 a2@<X1>, BillingProduct *a3@<X8>)
    {
      _QWORD *v4; // x2
      id v5; // x20
    
      v4 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v4 = (_QWORD *)*v4;
      v5 = objc_msgSend(
             *(id *)(a1 + 8),
             "getProduct:",
             +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v4));
      BillingProduct::BillingProduct(a3);
      if ( v5 )
        convertProduct(v5, (String *)a3);
    }

    __int64 __usercall Billing::getStoreCountryCode@<X0>(__int64 a1@<X0>, __int64 a2@<X8>)
    {
      return String::String(a2, (_DWORD *)(a1 + 16));
    }

}; // end class Billing
