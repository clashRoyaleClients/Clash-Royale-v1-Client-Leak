class DynArray<IInputListener *>
{
public:

    __int64 __fastcall DynArray<IInputListener *>::operator[](__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
    {
      do
      {
        if ( a2 < 0 || *(_DWORD *)(a1 + 8) <= a2 )
        {
          if ( (unsigned int)Assert::report(
                               (Assert *)"a_index >= 0 && a_index < m_numElements",
                               0,
                               "../../common/titan/oxDynArray.h",
                               (const char *)0x57,
                               a5) )
            abort();
        }
      }
      while ( Assert::g_false );
      return *(_QWORD *)a1 + 8LL * a2;
    }

    void __fastcall DynArray<IInputListener *>::reserve(__int64 *a1, int a2)
    {
      int v3; // w8
      int v4; // w8
      int v5; // w21
      __int64 v6; // x0
      __int64 v7; // x20
      __int64 v8; // x8
      __int64 v9; // x9
      __int64 v10; // x0
    
      v3 = *((_DWORD *)a1 + 3);
      if ( v3 < a2 )
      {
        v4 = 2 * v3;
        if ( v4 <= a2 )
          v5 = a2;
        else
          v5 = v4;
        if ( is_mul_ok(v5, 8u) )
          v6 = 8LL * v5;
        else
          v6 = -1;
        v7 = operator new[](v6);
        v8 = *((int *)a1 + 2);
        if ( (int)v8 < 1 )
        {
          v10 = *a1;
          if ( !*a1 )
          {
    LABEL_14:
            *a1 = v7;
            *((_DWORD *)a1 + 3) = v5;
            return;
          }
        }
        else
        {
          v9 = 0;
          v10 = *a1;
          do
          {
            *(_QWORD *)(v7 + 8 * v9) = *(_QWORD *)(v10 + 8 * v9);
            ++v9;
          }
          while ( v9 < v8 );
        }
        operator delete[](v10);
        goto LABEL_14;
      }
    }

}; // end class DynArray<IInputListener *>
