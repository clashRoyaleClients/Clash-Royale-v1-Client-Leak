class HTTPQueue
{
public:

    _QWORD *__fastcall HTTPQueue::HTTPQueue(_QWORD *a1, int a2)
    {
      __int64 v4; // x8
      __int64 v5; // x0
      _QWORD *v6; // x20
      unsigned __int64 v7; // x23
      __int64 v8; // x21
      int v9; // w8
      __int64 v10; // x21
      __int64 v11; // x9
      __int64 v12; // x8
      bool v13; // cf
      __int64 v14; // x8
      __int64 v15; // x0
      _QWORD *v16; // x20
      unsigned __int64 v17; // x22
      __int64 v18; // x21
      _QWORD *v19; // x0
    
      a1[1] = 0;
      a1[2] = 0;
      *a1 = 0;
      std::vector<HTTPQueue::Item>::_M_erase_at_end();
      a1[3] = 0;
      a1[5] = 0;
      a1[6] = 0;
      a1[4] = 0;
      *((_DWORD *)a1 + 6) = a2;
      v4 = 16LL * a2 + 16;
      if ( (unsigned __int64)(16LL * a2) >= 0xFFFFFFFFFFFFFFF0LL )
        v4 = -1;
      if ( is_mul_ok(a2, 0x10u) )
        v5 = v4;
      else
        v5 = -1;
      v6 = (_QWORD *)operator new[](v5);
      *v6 = 16;
      v6[1] = a2;
      if ( a2 )
      {
        v7 = 0;
        v8 = 16LL * a2;
        do
        {
          HTTPClient::HTTPClient(&v6[v7 / 8 + 2]);
          v7 += 16LL;
        }
        while ( v8 != v7 );
        v9 = *((_DWORD *)a1 + 6);
      }
      else
      {
        v9 = 0;
      }
      a1[4] = v6 + 2;
      v10 = v9;
      v11 = ((unsigned __int64)v9 * (unsigned __int128)0x48uLL) >> 64;
      v12 = 72LL * v9;
      v13 = __CFADD__(v12, 16);
      v14 = v12 + 16;
      if ( v13 )
        v14 = -1;
      if ( v11 )
        v15 = -1;
      else
        v15 = v14;
      v16 = (_QWORD *)operator new[](v15);
      *v16 = 72;
      v16[1] = v10;
      if ( (_DWORD)v10 )
      {
        v17 = 0;
        v18 = 72 * v10;
        do
        {
          String::String((__int64)&v16[v17 / 8 + 2]);
          String::String((__int64)&v16[v17 / 8 + 5]);
          String::String((__int64)&v16[v17 / 8 + 8]);
          v17 += 72LL;
        }
        while ( v18 != v17 );
      }
      a1[5] = v16 + 2;
      v19 = (_QWORD *)operator new(16);
      *v19 = 0;
      v19[1] = 0;
      a1[6] = v19;
      return a1;
    }

    _QWORD *__fastcall HTTPQueue::HTTPQueue(_QWORD *a1, int a2)
    {
      HTTPQueue::HTTPQueue(a1, a2);
      return a1;
    }

    _QWORD *__fastcall HTTPQueue::~HTTPQueue(_QWORD *a1)
    {
      __int64 v2; // x23
      __int64 v3; // x8
      __int64 v4; // x22
      __int64 v5; // x23
      __int64 v6; // x24
      __int64 v7; // x22
      __int64 v8; // x8
      __int64 v9; // x25
      __int64 v10; // x26
      __int64 v11; // x27
      _DWORD *v12; // x21
      long double v13; // q0
    
      v2 = a1[4];
      if ( v2 )
      {
        v3 = *(_QWORD *)(v2 - 8);
        if ( v3 )
        {
          v4 = 16 * v3;
          do
          {
            HTTPClient::~HTTPClient(v2 - 16 + v4);
            v4 -= 16;
          }
          while ( v4 );
        }
        operator delete[](v2 - 16);
      }
      v5 = a1[5];
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 - 8);
        if ( v6 )
        {
          v7 = 0;
          v8 = v5 + 72 * v6;
          v9 = v8 - 48;
          v10 = v8 - 24;
          v11 = v8 - 72;
          do
          {
            String::~String(v10 + v7);
            String::~String(v9 + v7);
            String::~String(v11 + v7);
            v7 -= 72;
          }
          while ( 72 * v6 + v7 );
        }
        operator delete[](v5 - 16);
      }
      v12 = (_DWORD *)a1[6];
      v12[3] = 0;
      if ( v12 )
      {
        LogicArrayList<HTTPQueue::FailedItem>::~LogicArrayList(v12);
        operator delete(v12);
      }
      a1[6] = 0;
      v13 = std::vector<HTTPQueue::Item>::_M_erase_at_end(a1, *a1);
      a1[5] = 0;
      a1[6] = 0;
      a1[3] = 0;
      a1[4] = 0;
      std::vector<HTTPQueue::Item>::~vector(a1, v13);
      return a1;
    }

    _QWORD *__fastcall HTTPQueue::~HTTPQueue(_QWORD *a1)
    {
      HTTPQueue::~HTTPQueue(a1);
      return a1;
    }

    void __fastcall HTTPQueue::downloadFile(HTTPQueue *a1, const String *a2, const String *a3)
    {
      String v6; // [xsp+8h] [xbp-38h] BYREF
    
      String::String(&v6, "");
      HTTPQueue::downloadFile(a1, a2, a3, &v6);
      String::~String((__int64)&v6);
    }

    void __fastcall HTTPQueue::downloadFile(__int64 a1, String *a2, String *a3, String *a4)
    {
      String v8; // [xsp+8h] [xbp-78h] BYREF
      String v9; // [xsp+20h] [xbp-60h] BYREF
      String v10; // [xsp+38h] [xbp-48h] BYREF
    
      String::String((__int64)&v8);
      String::String((__int64)&v9);
      String::String((__int64)&v10);
      String::operator=(&v8, a2);
      String::operator=(&v9, a3);
      String::operator=(&v10, a4);
      std::vector<HTTPQueue::Item>::push_back(a1, &v8);
      ++*(_DWORD *)(a1 + 28);
      String::~String((__int64)&v10);
      String::~String((__int64)&v9);
      String::~String((__int64)&v8);
    }

    void __fastcall HTTPQueue::update(__int64 a1)
    {
      __int64 v2; // x26
      __int64 v3; // x27
      int v4; // w25
      unsigned int v5; // w28
      unsigned int Status; // w0
      id StatusCode; // x0
      int v8; // w21
      __int64 v9; // x8
      __int64 v10; // x8
      __int64 v11; // x8
      String *v12; // x21
      String *v13; // x22
      String *v14; // x23
      String *v15; // x24
      __int64 v16; // x22
      String v17; // [xsp+18h] [xbp-88h] BYREF
      int v18; // [xsp+30h] [xbp-70h]
      String v19; // [xsp+38h] [xbp-68h] BYREF
    
      if ( *(_DWORD *)(a1 + 24) )
      {
        v2 = 0;
        v3 = 0;
        v4 = 0;
        v5 = 0;
        while ( 1 )
        {
          Status = (unsigned int)HTTPClient::getStatus(*(_QWORD *)(a1 + 32) + v2);
          if ( Status == 3 )
          {
            StatusCode = HTTPClient::getStatusCode(*(_QWORD *)(a1 + 32) + v2);
            v8 = (int)StatusCode;
            v9 = *(_QWORD *)(a1 + 40) + v3;
            if ( *(_DWORD *)(v9 + 4) + 1 > 8 )
              v10 = *(_QWORD *)(v9 + 8);
            else
              v10 = v9 + 8;
            String::format((String *)"Download failed (%d) for %s", (__int64)&v19, StatusCode, v10);
            Debugger::warning(&v19);
            String::~String((__int64)&v19);
            String::String((__int64)&v17);
            String::operator=(&v17, (String *)(*(_QWORD *)(a1 + 40) + v3));
            v18 = v8;
            LogicArrayList<HTTPQueue::FailedItem>::add(*(_QWORD *)(a1 + 48), &v17);
            HTTPClient::resetStatus((id *)(*(_QWORD *)(a1 + 32) + v2));
            String::~String((__int64)&v17);
          }
          else if ( Status == 1 )
          {
            goto LABEL_12;
          }
          v11 = *(_QWORD *)(a1 + 8);
          if ( *(_QWORD *)a1 != v11 )
          {
            v12 = (String *)(v11 - 72);
            v13 = (String *)(v11 - 48);
            v14 = (String *)(v11 - 24);
            HTTPClient::downloadFile((HTTPClient *)(*(_QWORD *)(a1 + 32) + v2), v11 - 72, v11 - 48, v11 - 24);
            v15 = (String *)(*(_QWORD *)(a1 + 40) + v3);
            String::operator=(v15, v12);
            String::operator=(v15 + 1, v13);
            String::operator=(v15 + 2, v14);
            v16 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v16 - 72;
            String::~String(v16 - 24);
            String::~String(v16 - 48);
            String::~String(v16 - 72);
    LABEL_12:
            ++v4;
          }
          ++v5;
          v3 += 72;
          v2 += 16;
          if ( v5 >= *(_DWORD *)(a1 + 24) )
            goto LABEL_16;
        }
      }
      v4 = 0;
    LABEL_16:
      *(_DWORD *)(a1 + 28) = 954437177 * ((*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3) + v4;
    }

    __int64 __fastcall HTTPQueue::itemsLeft(__int64 a1)
    {
      return *(unsigned int *)(a1 + 28);
    }

    __int64 __fastcall HTTPQueue::failedCount(__int64 a1)
    {
      return *(unsigned int *)(*(_QWORD *)(a1 + 48) + 12LL);
    }

}; // end class HTTPQueue
