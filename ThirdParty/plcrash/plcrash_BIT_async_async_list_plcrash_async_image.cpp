class plcrash::BIT::async::async_list<plcrash_async_image *>
{
public:

    __int64 __fastcall plcrash::BIT::async::async_list<plcrash_async_image *>::set_reading(__int64 a1, int a2)
    {
      int32_t *v3; // x1
      int32_t v4; // w0
    
      v3 = (int32_t *)(a1 + 24);
      if ( a2 )
        v4 = 1;
      else
        v4 = -1;
      return OSAtomicAdd32Barrier(v4, v3);
    }

    void __fastcall plcrash::BIT::async::async_list<plcrash_async_image *>::nasync_append(__int64 a1, __int64 a2)
    {
      _QWORD *v4; // x20
      __int64 v5; // x8
    
      OSSpinLockLock((OSSpinLock *)a1);
      v4 = *(_QWORD **)(a1 + 32);
      if ( v4 )
      {
        *v4 = a2;
        v4[1] = 0;
        v4[2] = 0;
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      }
      else
      {
        v4 = malloc(0x18u);
        *v4 = a2;
        v4[1] = 0;
        v4[2] = 0;
      }
      OSMemoryBarrier();
      v5 = *(_QWORD *)(a1 + 16);
      if ( v5 )
      {
        OSAtomicCompareAndSwapPtrBarrier(0, v4, (void **)(v5 + 16));
        v4[1] = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = v4;
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v4;
        OSAtomicCompareAndSwapPtrBarrier(0, v4, (void **)(a1 + 8));
      }
      OSSpinLockUnlock((OSSpinLock *)a1);
    }

    void __fastcall plcrash::BIT::async::async_list<plcrash_async_image *>::nasync_remove_node(__int64 a1, __int64 *a2)
    {
      void **v4; // x2
      __int64 v5; // x22
      __int64 *v6; // x20
      bool v7; // zf
      void *v8; // x1
      __int64 *v9; // x21
      __int64 v10; // x8
      __int64 v11; // x8
    
      OSSpinLockLock((OSSpinLock *)a1);
      v4 = (void **)(a1 + 8);
      v5 = a1 + 8;
      do
      {
        v6 = *(__int64 **)v5;
        v5 = *(_QWORD *)v5 + 16LL;
        if ( v6 )
          v7 = v6 == a2;
        else
          v7 = 1;
      }
      while ( !v7 );
      if ( v6 )
      {
        v8 = (void *)v6[2];
        if ( v6 == *v4 )
        {
          OSAtomicCompareAndSwapPtrBarrier(v6, v8, v4);
          v9 = v6 + 1;
        }
        else
        {
          v9 = v6 + 1;
          OSAtomicCompareAndSwapPtrBarrier(v6, v8, (void **)(v6[1] + 16));
        }
        v10 = *v9;
        if ( *(_QWORD *)v5 )
          *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v10;
        else
          *(_QWORD *)(a1 + 16) = v10;
        if ( *(int *)(a1 + 24) < 1 )
        {
          free(v6);
        }
        else
        {
          *v9 = 0;
          v11 = *(_QWORD *)(a1 + 32);
          *(_QWORD *)v5 = v11;
          if ( v11 )
            *(_QWORD *)(v11 + 8) = v6;
          *(_QWORD *)(a1 + 32) = v6;
        }
      }
      OSSpinLockUnlock((OSSpinLock *)a1);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::async_list<plcrash_async_image *>::set_reading(__int64 a1, int a2)
    {
      return __ZN7plcrash3BIT5async10async_listIP19plcrash_async_imageE11set_readingEb(a1, a2);
    }

    // attributes: thunk
    void __fastcall plcrash::BIT::async::async_list<plcrash_async_image *>::nasync_append(__int64 a1, __int64 a2)
    {
      __ZN7plcrash3BIT5async10async_listIP19plcrash_async_imageE13nasync_appendES4_(a1, a2);
    }

    // attributes: thunk
    void __fastcall plcrash::BIT::async::async_list<plcrash_async_image *>::nasync_remove_node(__int64 a1, __int64 *a2)
    {
      __ZN7plcrash3BIT5async10async_listIP19plcrash_async_imageE18nasync_remove_nodeEPNS5_4nodeE(a1, a2);
    }

}; // end class plcrash::BIT::async::async_list<plcrash_async_image *>
