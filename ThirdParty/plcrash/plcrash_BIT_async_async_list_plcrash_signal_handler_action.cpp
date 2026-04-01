class plcrash::BIT::async::async_list<plcrash_signal_handler_action>
{
public:

    void __fastcall plcrash::BIT::async::async_list<plcrash_signal_handler_action>::nasync_remove_node(
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
        v5 = *(_QWORD *)v5 + 32LL;
        if ( v6 )
          v7 = v6 == a2;
        else
          v7 = 1;
      }
      while ( !v7 );
      if ( v6 )
      {
        v8 = (void *)v6[4];
        if ( v6 == *v4 )
        {
          OSAtomicCompareAndSwapPtrBarrier(v6, v8, v4);
          v9 = v6 + 3;
        }
        else
        {
          v9 = v6 + 3;
          OSAtomicCompareAndSwapPtrBarrier(v6, v8, (void **)(v6[3] + 32));
        }
        v10 = *v9;
        if ( *(_QWORD *)v5 )
          *(_QWORD *)(*(_QWORD *)v5 + 24LL) = v10;
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
            *(_QWORD *)(v11 + 24) = v6;
          *(_QWORD *)(a1 + 32) = v6;
        }
      }
      OSSpinLockUnlock((OSSpinLock *)a1);
    }

    void __fastcall plcrash::BIT::async::async_list<plcrash_signal_handler_action>::nasync_append(__int64 a1, __int128 *a2)
    {
      _QWORD *v4; // x20
      __int128 v5; // q0
      __int64 v6; // x8
    
      OSSpinLockLock((OSSpinLock *)a1);
      v4 = *(_QWORD **)(a1 + 32);
      if ( v4 )
      {
        v5 = *a2;
        v4[2] = *((_QWORD *)a2 + 2);
        *(_OWORD *)v4 = v5;
        v4[3] = 0;
        v4[4] = 0;
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
      }
      else
      {
        v4 = malloc(0x28u);
        v4[2] = *((_QWORD *)a2 + 2);
        *(_OWORD *)v4 = *a2;
        v4[3] = 0;
        v4[4] = 0;
      }
      OSMemoryBarrier();
      v6 = *(_QWORD *)(a1 + 16);
      if ( v6 )
      {
        OSAtomicCompareAndSwapPtrBarrier(0, v4, (void **)(v6 + 32));
        v4[3] = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = v4;
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v4;
        OSAtomicCompareAndSwapPtrBarrier(0, v4, (void **)(a1 + 8));
      }
      OSSpinLockUnlock((OSSpinLock *)a1);
    }

    __int64 __fastcall plcrash::BIT::async::async_list<plcrash_signal_handler_action>::~async_list(__int64 a1)
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
          v3 = (_QWORD *)v2[4];
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
          v5 = (_QWORD *)v4[4];
          free(v4);
          v4 = v5;
        }
        while ( v5 );
      }
      return a1;
    }

    // attributes: thunk
    void __fastcall plcrash::BIT::async::async_list<plcrash_signal_handler_action>::nasync_append(__int64 a1, __int128 *a2)
    {
      __ZN7plcrash3BIT5async10async_listI29plcrash_signal_handler_actionE13nasync_appendES3_(a1, a2);
    }

    // attributes: thunk
    void __fastcall plcrash::BIT::async::async_list<plcrash_signal_handler_action>::nasync_remove_node(
            __int64 a1,
            __int64 *a2)
    {
      __ZN7plcrash3BIT5async10async_listI29plcrash_signal_handler_actionE18nasync_remove_nodeEPNS4_4nodeE(a1, a2);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::async_list<plcrash_signal_handler_action>::~async_list(__int64 a1)
    {
      return __ZN7plcrash3BIT5async10async_listI29plcrash_signal_handler_actionED2Ev(a1);
    }

}; // end class plcrash::BIT::async::async_list<plcrash_signal_handler_action>
