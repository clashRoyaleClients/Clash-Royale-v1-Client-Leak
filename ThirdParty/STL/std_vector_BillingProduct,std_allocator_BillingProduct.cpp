class std::vector<BillingProduct,std::allocator<BillingProduct>>
{
public:

    BillingProduct *__fastcall std::vector<BillingProduct>::push_back(__int64 a1, const BillingProduct *a2)
    {
      BillingProduct *result; // x0
    
      if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
        return (BillingProduct *)std::vector<BillingProduct>::_M_insert_aux(a1, *(_QWORD *)(a1 + 8), a2);
      result = BillingProduct::BillingProduct(*(BillingProduct **)(a1 + 8), a2);
      *(_QWORD *)(a1 + 8) += 168LL;
      return result;
    }

    __int64 __fastcall std::vector<BillingProduct>::~vector(__int64 a1)
    {
      void *v2; // x0
      void *v3; // x20
      __int64 v4; // x0
    
      v2 = *(void **)a1;
      v3 = *(void **)(a1 + 8);
      if ( v2 != v3 )
      {
        do
          BillingProduct::~BillingProduct();
        while ( v3 != (void *)(v4 + 168) );
        v2 = *(void **)a1;
      }
      if ( v2 )
        operator delete(v2);
      return a1;
    }

    void __fastcall std::vector<BillingProduct>::_M_insert_aux(String **a1, String *a2, const BillingProduct *a3)
    {
      BillingProduct *v6; // x0
      unsigned __int64 v7; // x8
      __int64 v8; // x24
      unsigned __int64 v9; // x9
      __int64 v10; // x19
      String *v11; // x25
      signed __int64 v12; // x26
      BillingProduct *v13; // x22
      unsigned __int64 v14; // x22
      String *v15; // x27
      BillingProduct *v16; // x28
      BillingProduct *v17; // x23
      BillingProduct *v18; // x26
      String *v19; // x22
      char v20[168]; // [xsp+8h] [xbp-F8h] BYREF
    
      v6 = (BillingProduct *)a1[1];
      if ( v6 == (BillingProduct *)a1[2] )
      {
        v7 = 0xCF3CF3CF3CF3CF3DLL * ((v6 - (BillingProduct *)*a1) >> 3);
        v8 = 0x186186186186186LL;
        v9 = 1;
        if ( v7 )
        {
          if ( v7 == 0x186186186186186LL )
            std::__throw_length_error("vector::_M_insert_aux");
          v9 = 0x9E79E79E79E79E7ALL * ((v6 - (BillingProduct *)*a1) >> 3);
        }
        if ( v9 >= v7 )
        {
          v8 = v9;
          if ( v9 > 0x186186186186186LL )
            std::__throw_bad_alloc();
        }
        v10 = operator new(168 * v8);
        v11 = *a1;
        v12 = (char *)*a1 - (char *)a2;
        v13 = (BillingProduct *)v10;
        if ( *a1 != a2 )
        {
          v14 = 0;
          do
          {
            BillingProduct::BillingProduct((BillingProduct *)(v10 + v14), (const BillingProduct *)&v11[v14 / 0x18]);
            v14 += 168LL;
          }
          while ( v12 + v14 );
          v13 = (BillingProduct *)(v10 + v14);
        }
        BillingProduct::BillingProduct(v13, a3);
        v15 = a1[1];
        if ( a2 == v15 )
        {
          v18 = (BillingProduct *)((char *)v13 + 168);
        }
        else
        {
          v16 = v13;
          v17 = (BillingProduct *)((char *)v13 + 168);
          do
          {
            BillingProduct::BillingProduct(v17, (const BillingProduct *)a2);
            a2 += 7;
            v18 = (BillingProduct *)((char *)v16 + 336);
            v16 = v17;
            v17 = v18;
          }
          while ( v15 != a2 );
          a2 = a1[1];
        }
        v19 = *a1;
        if ( *a1 != a2 )
        {
          do
          {
            BillingProduct::~BillingProduct();
            v19 += 7;
          }
          while ( a2 != v19 );
          a2 = *a1;
        }
        if ( a2 )
          operator delete(a2);
        *a1 = (String *)v10;
        a1[1] = (String *)v18;
        a1[2] = (String *)(v10 + 168 * v8);
      }
      else
      {
        BillingProduct::BillingProduct(v6, (BillingProduct *)((char *)v6 - 168));
        a1[1] += 7;
        BillingProduct::BillingProduct((BillingProduct *)v20, a3);
        std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<BillingProduct *,BillingProduct *>(
          a2,
          &a1[1][-14],
          &a1[1][-7]);
        String::operator=(a2);
        String::operator=(a2 + 1);
        String::operator=(a2 + 2);
        String::operator=(a2 + 3);
        String::operator=(a2 + 4);
        String::operator=(a2 + 5);
        String::operator=(a2 + 6);
        BillingProduct::~BillingProduct();
      }
    }

}; // end class std::vector<BillingProduct,std::allocator<BillingProduct>>
