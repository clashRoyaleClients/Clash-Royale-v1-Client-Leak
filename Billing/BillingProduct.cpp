class BillingProduct
{
public:

    void BillingProduct::~BillingProduct()
    {
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
      String::~String();
    }

    String *__fastcall BillingProduct::BillingProduct(String *a1, const String *a2)
    {
      String::String(a1, a2);
      String::String(a1 + 1, a2 + 1);
      String::String(a1 + 2, a2 + 2);
      String::String(a1 + 3, a2 + 3);
      String::String(a1 + 4, a2 + 4);
      String::String(a1 + 5, a2 + 5);
      String::String(a1 + 6, a2 + 6);
      return a1;
    }

    String *__fastcall BillingProduct::operator=(String *a1)
    {
      String::operator=(a1);
      String::operator=(a1 + 1);
      String::operator=(a1 + 2);
      String::operator=(a1 + 3);
      String::operator=(a1 + 4);
      String::operator=(a1 + 5);
      String::operator=(a1 + 6);
      return a1;
    }

    __int64 __fastcall BillingProduct::BillingProduct(__int64 a1)
    {
      String::String(a1);
      String::String(a1 + 24);
      String::String(a1 + 48);
      String::String(a1 + 72);
      String::String(a1 + 96);
      String::String(a1 + 120);
      String::String(a1 + 144);
      return a1;
    }

}; // end class BillingProduct
