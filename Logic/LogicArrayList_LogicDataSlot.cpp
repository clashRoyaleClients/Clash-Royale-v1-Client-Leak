class LogicArrayList<LogicDataSlot *>
{
public:

    __int64 __fastcall LogicArrayList<LogicDataSlot *>::add(__int64 result, __int64 *a2)
    {
      __int64 v3; // x19
      int v4; // w8
      unsigned int v5; // w8
      __int64 v6; // x1
      __int64 v7; // x9
    
      v3 = result;
      v4 = *(_DWORD *)(result + 12);
      if ( v4 == *(_DWORD *)(result + 8) )
      {
        v5 = 2 * v4;
        if ( v5 )
          v6 = v5;
        else
          v6 = 5;
        result = LogicArrayList<LogicDataSlot *>::ensureCapacity(result, v6);
        v4 = *(_DWORD *)(v3 + 12);
      }
      v7 = *a2;
      *(_DWORD *)(v3 + 12) = v4 + 1;
      *(_QWORD *)(*(_QWORD *)v3 + 8LL * v4) = v7;
      return result;
    }

    __int64 __fastcall LogicArrayList<LogicDataSlot *>::ensureCapacity(__int64 result, int a2)
    {
      __int64 v3; // x20
      __int64 v4; // x0
      __int64 v5; // x21
      int v6; // w8
      int v7; // w8
      _QWORD *v8; // x9
      __int64 v9; // t1
    
      v3 = result;
      if ( *(_DWORD *)(result + 8) < a2 )
      {
        if ( is_mul_ok(a2, 8u) )
          v4 = 8LL * a2;
        else
          v4 = -1;
        v5 = operator new[](v4);
        result = *(_QWORD *)v3;
        v6 = *(_DWORD *)(v3 + 12);
        if ( v6 >= 1 )
        {
          v7 = v6 + 1;
          v8 = (_QWORD *)v5;
          do
          {
            v9 = *(_QWORD *)result;
            result += 8;
            *v8++ = v9;
            --v7;
          }
          while ( v7 > 1 );
          result = *(_QWORD *)v3;
        }
        if ( result )
          result = operator delete[](result);
        *(_QWORD *)v3 = v5;
        *(_DWORD *)(v3 + 8) = a2;
      }
      return result;
    }

}; // end class LogicArrayList<LogicDataSlot *>
