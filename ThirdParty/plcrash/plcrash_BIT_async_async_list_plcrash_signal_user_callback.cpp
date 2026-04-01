class plcrash::BIT::async::async_list<plcrash_signal_user_callback>
{
public:

    void __fastcall plcrash::BIT::async::async_list<plcrash_signal_user_callback>::nasync_remove_node(
            __int64 a1,
            __int64 *a2)
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
        v5 = *(_QWORD *)v5 + 24LL;
        if ( v6 )
          v7 = v6 == a2;
        else
          v7 = 1;
      }
      while ( !v7 );
      if ( v6 )
      {
        v8 = (void *)v6[3];
        if ( v6 == *v4 )
        {
          OSAtomicCompareAndSwapPtrBarrier(v6, v8, v4);
          v9 = v6 + 2;
        }
        else
        {
          v9 = v6 + 2;
          OSAtomicCompareAndSwapPtrBarrier(v6, v8, (void **)(v6[2] + 24));
        }
        v10 = *v9;
        if ( *(_QWORD *)v5 )
          *(_QWORD *)(*(_QWORD *)v5 + 16LL) = v10;
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
            *(_QWORD *)(v11 + 16) = v6;
          *(_QWORD *)(a1 + 32) = v6;
        }
      }
      OSSpinLockUnlock((OSSpinLock *)a1);
    }

    void __fastcall plcrash::BIT::async::async_list<plcrash_signal_user_callback>::nasync_append(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      _QWORD *v6; // x20
      __int64 v7; // x8
    
      OSSpinLockLock((OSSpinLock *)a1);
      v6 = *(_QWORD **)(a1 + 32);
      if ( v6 )
      {
        *v6 = a2;
        v6[1] = a3;
        v6[2] = 0;
        v6[3] = 0;
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
      }
      else
      {
        v6 = malloc(0x20u);
        *v6 = a2;
        v6[1] = a3;
        v6[2] = 0;
        v6[3] = 0;
      }
      OSMemoryBarrier();
      v7 = *(_QWORD *)(a1 + 16);
      if ( v7 )
      {
        OSAtomicCompareAndSwapPtrBarrier(0, v6, (void **)(v7 + 24));
        v6[2] = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = v6;
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v6;
        OSAtomicCompareAndSwapPtrBarrier(0, v6, (void **)(a1 + 8));
      }
      OSSpinLockUnlock((OSSpinLock *)a1);
    }

    void __fastcall plcrash::BIT::async::async_list<plcrash_signal_user_callback>::nasync_prepend(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      _QWORD *v6; // x20
      __int64 v7; // x8
      void *v8; // x0
      void *v9; // x1
      void **v10; // x2
    
      OSSpinLockLock((OSSpinLock *)a1);
      v6 = *(_QWORD **)(a1 + 32);
      if ( v6 )
      {
        *v6 = a2;
        v6[1] = a3;
        v6[2] = 0;
        v6[3] = 0;
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
      }
      else
      {
        v6 = malloc(0x20u);
        *v6 = a2;
        v6[1] = a3;
        v6[2] = 0;
        v6[3] = 0;
      }
      OSMemoryBarrier();
      if ( *(_QWORD *)(a1 + 16) )
      {
        v7 = *(_QWORD *)(a1 + 8);
        v6[2] = 0;
        v6[3] = v7;
        *(_QWORD *)(v7 + 16) = v6;
        OSMemoryBarrier();
        v8 = (void *)v6[3];
        v9 = v6;
        v10 = (void **)(a1 + 8);
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v6;
        v10 = (void **)(a1 + 8);
        v8 = 0;
        v9 = v6;
      }
      OSAtomicCompareAndSwapPtrBarrier(v8, v9, v10);
      OSSpinLockUnlock((OSSpinLock *)a1);
    }

    __int64 __fastcall plcrash::BIT::async::async_list<plcrash_signal_user_callback>::~async_list(__int64 a1)
    {
      _QWORD *v2; // x0
      _QWORD *v3; // x20
      _QWORD *v4; // x0
      _QWORD *v5; // x20
    
      v2 = *(_QWORD **)(a1 + 8);
      if ( v2 )
      {
        do
        {
          v3 = (_QWORD *)v2[3];
          free(v2);
          v2 = v3;
        }
        while ( v3 );
      }
      v4 = *(_QWORD **)(a1 + 32);
      if ( v4 )
      {
        do
        {
          v5 = (_QWORD *)v4[3];
          free(v4);
          v4 = v5;
        }
        while ( v5 );
      }
      return a1;
    }

    // attributes: thunk
    void __fastcall plcrash::BIT::async::async_list<plcrash_signal_user_callback>::nasync_append(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __ZN7plcrash3BIT5async10async_listI28plcrash_signal_user_callbackE13nasync_appendES3_(a1, a2, a3);
    }

    // attributes: thunk
    void __fastcall plcrash::BIT::async::async_list<plcrash_signal_user_callback>::nasync_prepend(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __ZN7plcrash3BIT5async10async_listI28plcrash_signal_user_callbackE14nasync_prependES3_(a1, a2, a3);
    }

    // attributes: thunk
    void __fastcall plcrash::BIT::async::async_list<plcrash_signal_user_callback>::nasync_remove_node(
            __int64 a1,
            __int64 *a2)
    {
      __ZN7plcrash3BIT5async10async_listI28plcrash_signal_user_callbackE18nasync_remove_nodeEPNS4_4nodeE(a1, a2);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::async_list<plcrash_signal_user_callback>::~async_list(__int64 a1)
    {
      return __ZN7plcrash3BIT5async10async_listI28plcrash_signal_user_callbackED2Ev(a1);
    }

}; // end class plcrash::BIT::async::async_list<plcrash_signal_user_callback>
