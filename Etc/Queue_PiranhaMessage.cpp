class Queue<PiranhaMessage *>
{
public:

    __int64 __fastcall Queue<PiranhaMessage *>::dequeue(__int64 a1, _QWORD *a2)
    {
      int v4; // w8
      bool v5; // vf
      int v6; // w8
      __int64 v7; // x9
      int v8; // w10
      __int64 v9; // x20
    
      Mutex::lock((pthread_mutex_t *)a1);
      v4 = *(_DWORD *)(a1 + 76);
      v5 = __OFSUB__(v4, 1);
      v6 = v4 - 1;
      if ( v6 < 0 != v5 )
      {
        v9 = 0;
      }
      else
      {
        v7 = *(int *)(a1 + 80);
        *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v7);
        v8 = *(_DWORD *)(a1 + 72);
        *(_DWORD *)(a1 + 76) = v6;
        *(_DWORD *)(a1 + 80) = ((int)v7 + 1) % v8;
        v9 = 1;
      }
      Mutex::unlock((pthread_mutex_t *)a1);
      return v9;
    }

    __int64 __fastcall Queue<PiranhaMessage *>::enqueue(__int64 a1, _QWORD *a2)
    {
      int v4; // w8
      int v5; // w9
      __int64 v6; // x11
      __int64 v7; // x20
    
      Mutex::lock((pthread_mutex_t *)a1);
      v5 = *(_DWORD *)(a1 + 72);
      v4 = *(_DWORD *)(a1 + 76);
      if ( v4 >= v5 )
      {
        v7 = 0;
      }
      else
      {
        v6 = *(int *)(a1 + 84);
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v6) = *a2;
        *(_DWORD *)(a1 + 84) = ((int)v6 + 1) % v5;
        *(_DWORD *)(a1 + 76) = v4 + 1;
        v7 = 1;
      }
      Mutex::unlock((pthread_mutex_t *)a1);
      return v7;
    }

    __int64 __fastcall Queue<PiranhaMessage *>::Queue(__int64 a1, int a2)
    {
      __int64 v4; // x0
    
      pthread_mutex_init((pthread_mutex_t *)a1, 0);
      *(_DWORD *)(a1 + 72) = a2;
      *(_DWORD *)(a1 + 76) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 84) = 0;
      if ( is_mul_ok(a2, 8u) )
        v4 = 8LL * a2;
      else
        v4 = -1;
      *(_QWORD *)(a1 + 64) = operator new[](v4);
      return a1;
    }

    pthread_mutex_t *__fastcall Queue<PiranhaMessage *>::~Queue(pthread_mutex_t *a1)
    {
      __int64 sig; // x0
    
      sig = a1[1].__sig;
      if ( sig )
        operator delete[](sig);
      pthread_mutex_destroy(a1);
      return a1;
    }

}; // end class Queue<PiranhaMessage *>
