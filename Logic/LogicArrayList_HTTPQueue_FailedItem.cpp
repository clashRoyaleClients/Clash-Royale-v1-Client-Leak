class LogicArrayList<HTTPQueue::FailedItem>
{
public:

    String *__fastcall LogicArrayList<HTTPQueue::FailedItem>::add(__int64 a1, String *a2)
    {
      int v4; // w8
      unsigned int v5; // w8
      __int64 v6; // x1
      String *v7; // x20
      String *result; // x0
    
      v4 = *(_DWORD *)(a1 + 12);
      if ( v4 == *(_DWORD *)(a1 + 8) )
      {
        v5 = 2 * v4;
        if ( v5 )
          v6 = v5;
        else
          v6 = 5;
        LogicArrayList<HTTPQueue::FailedItem>::ensureCapacity(a1, v6);
        v4 = *(_DWORD *)(a1 + 12);
      }
      *(_DWORD *)(a1 + 12) = v4 + 1;
      v7 = (String *)(*(_QWORD *)a1 + 32LL * v4);
      result = String::operator=(v7, a2);
      v7[1].m_length = a2[1].m_length;
      return result;
    }

    __int64 *__fastcall LogicArrayList<HTTPQueue::FailedItem>::~LogicArrayList(__int64 *a1)
    {
      __int64 v2; // x22
      __int64 v3; // x8
      __int64 v4; // x21
    
      v2 = *a1;
      if ( *a1 )
      {
        v3 = *(_QWORD *)(v2 - 8);
        if ( v3 )
        {
          v4 = 32 * v3;
          do
          {
            String::~String(v2 - 32 + v4);
            v4 -= 32;
          }
          while ( v4 );
        }
        operator delete[](v2 - 16);
      }
      *a1 = 0;
      a1[1] = 0;
      return a1;
    }

    void __fastcall LogicArrayList<HTTPQueue::FailedItem>::ensureCapacity(__int64 a1, int a2)
    {
      __int64 v4; // x9
      bool v5; // cf
      __int64 v6; // x9
      __int64 v7; // x0
      _QWORD *v8; // x21
      __int64 v9; // x22
      String *v10; // x23
      String *v11; // x21
      int v12; // w8
      int v13; // w24
      String *v14; // x22
      __int64 v15; // x8
      __int64 v16; // x24
    
      if ( *(_DWORD *)(a1 + 8) < a2 )
      {
        v4 = 32LL * a2;
        v5 = __CFADD__(v4, 16);
        v6 = v4 + 16;
        if ( v5 )
          v6 = -1;
        if ( is_mul_ok(a2, 0x20u) )
          v7 = v6;
        else
          v7 = -1;
        v8 = (_QWORD *)operator new[](v7);
        *v8 = 32;
        v8[1] = a2;
        if ( a2 )
        {
          v9 = 0;
          do
          {
            String::String((__int64)&v8[v9 + 2]);
            v9 += 4;
          }
          while ( 4LL * a2 != v9 );
        }
        v10 = (String *)(v8 + 2);
        v11 = *(String **)a1;
        v12 = *(_DWORD *)(a1 + 12);
        if ( v12 >= 1 )
        {
          v13 = v12 + 1;
          v14 = v10;
          do
          {
            String::operator=(v14, v11);
            v14[1].m_length = v11[1].m_length;
            --v13;
            v14 = (String *)((char *)v14 + 32);
            v11 = (String *)((char *)v11 + 32);
          }
          while ( v13 > 1 );
          v11 = *(String **)a1;
        }
        if ( v11 )
        {
          v15 = *(_QWORD *)&v11[-1].m_iteratorCacheByteOffset;
          if ( v15 )
          {
            v16 = 32 * v15;
            do
            {
              String::~String((__int64)&v11[-2].m_iteratorCacheByteOffset + v16);
              v16 -= 32;
            }
            while ( v16 );
          }
          operator delete[](&v11[-1].internal);
        }
        *(_QWORD *)a1 = v10;
        *(_DWORD *)(a1 + 8) = a2;
      }
    }

}; // end class LogicArrayList<HTTPQueue::FailedItem>
