class LogicArrayList<UdpMessage *>
{
public:

    __int64 __fastcall LogicArrayList<UdpMessage *>::set(__int64 result, __int64 a2, _QWORD *a3)
    {
      __int64 v3; // x8
      String v4; // [xsp+18h] [xbp-38h] BYREF
    
      v3 = *(unsigned int *)(result + 12);
      if ( (a2 & 0x80000000) != 0 || (int)v3 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.set out of bounds %d/%d", (__int64)&v4, a2, v3);
        Debugger::error(&v4);
      }
      *(_QWORD *)(*(_QWORD *)result + 8LL * (int)a2) = *a3;
      return result;
    }

    void __fastcall LogicArrayList<UdpMessage *>::ensureCapacity(__int64 a1, int a2)
    {
      __int64 v4; // x0
      __int64 v5; // x21
      __int64 *v6; // x0
      int v7; // w8
      int v8; // w8
      _QWORD *v9; // x9
      __int64 v10; // t1
    
      if ( *(_DWORD *)(a1 + 8) < a2 )
      {
        if ( is_mul_ok(a2, 8u) )
          v4 = 8LL * a2;
        else
          v4 = -1;
        v5 = operator new[](v4);
        v6 = *(__int64 **)a1;
        v7 = *(_DWORD *)(a1 + 12);
        if ( v7 >= 1 )
        {
          v8 = v7 + 1;
          v9 = (_QWORD *)v5;
          do
          {
            v10 = *v6++;
            *v9++ = v10;
            --v8;
          }
          while ( v8 > 1 );
          v6 = *(__int64 **)a1;
        }
        if ( v6 )
          operator delete[](v6);
        *(_QWORD *)a1 = v5;
        *(_DWORD *)(a1 + 8) = a2;
      }
    }

    void __fastcall LogicArrayList<UdpMessage *>::add(__int64 a1, __int64 *a2)
    {
      int v4; // w8
      int v5; // w8
      int v6; // w1
      __int64 v7; // x9
    
      v4 = *(_DWORD *)(a1 + 12);
      if ( v4 == *(_DWORD *)(a1 + 8) )
      {
        v5 = 2 * v4;
        if ( v5 )
          v6 = v5;
        else
          v6 = 5;
        LogicArrayList<UdpMessage *>::ensureCapacity(a1, v6);
        v4 = *(_DWORD *)(a1 + 12);
      }
      v7 = *a2;
      *(_DWORD *)(a1 + 12) = v4 + 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * v4) = v7;
    }

    __int64 __fastcall LogicArrayList<UdpMessage *>::remove(__int64 *a1, __int64 a2)
    {
      __int64 v3; // x8
      __int64 v4; // x9
      __int64 result; // x0
      _QWORD *v6; // x9
      int v7; // w8
      String v8; // [xsp+18h] [xbp-28h] BYREF
    
      v3 = *((unsigned int *)a1 + 3);
      if ( (a2 & 0x80000000) != 0 || (int)v3 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.remove out of bounds %d/%d", (__int64)&v8, a2, v3);
        Debugger::error(&v8);
      }
      v4 = *a1;
      result = *(_QWORD *)(*a1 + 8LL * (int)a2);
      *((_DWORD *)a1 + 3) = v3 - 1;
      if ( (int)v3 - 1 > (int)a2 && (int)v3 - 1 - (int)a2 >= 1 )
      {
        v6 = (_QWORD *)(v4 + 8LL * (int)a2 + 8);
        v7 = v3 - a2;
        do
        {
          *(v6 - 1) = *v6;
          --v7;
          ++v6;
        }
        while ( v7 > 1 );
      }
      return result;
    }

}; // end class LogicArrayList<UdpMessage *>
