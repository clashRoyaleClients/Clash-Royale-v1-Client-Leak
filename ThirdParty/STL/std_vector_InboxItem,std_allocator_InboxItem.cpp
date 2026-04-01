class std::vector<InboxItem,std::allocator<InboxItem>>
{
public:

    _OWORD *__fastcall std::vector<InboxItem>::erase(__int64 a1, _OWORD *a2)
    {
      char *v3; // x8
      char *v4; // x9
      __int64 v5; // x9
      _OWORD *v6; // x10
      char *v7; // x11
      char *v8; // x12
      LogicCollectMultiWinChestCommand *v9; // x8
    
      v3 = (char *)(a2 + 1);
      v4 = *(char **)(a1 + 8);
      if ( a2 + 1 != (_OWORD *)v4 )
      {
        if ( v4 - v3 < 1 )
        {
          v3 = *(char **)(a1 + 8);
        }
        else
        {
          v5 = ((v4 - v3) >> 4) + 1;
          v6 = a2;
          v7 = (char *)a2;
          do
          {
            *v6++ = *((_OWORD *)v7 + 1);
            v8 = v7 + 32;
            --v5;
            v7 = v3;
            v3 = v8;
          }
          while ( v5 > 1 );
          v3 = *(char **)(a1 + 8);
        }
      }
      v9 = (LogicCollectMultiWinChestCommand *)(v3 - 16);
      *(_QWORD *)(a1 + 8) = v9;
      InboxItem::~InboxItem(v9);
      return a2;
    }

    LogicCollectMultiWinChestCommand **__fastcall std::vector<InboxItem>::~vector(LogicCollectMultiWinChestCommand **a1)
    {
      LogicCollectMultiWinChestCommand *v2; // x0
      LogicCollectMultiWinChestCommand *v3; // x20
      __int64 v4; // x0
    
      v2 = *a1;
      v3 = a1[1];
      if ( v2 != v3 )
      {
        do
        {
          InboxItem::~InboxItem(v2);
          v2 = (LogicCollectMultiWinChestCommand *)(v4 + 16);
        }
        while ( v3 != v2 );
        v2 = *a1;
      }
      if ( v2 )
        operator delete(v2);
      return a1;
    }

    void __fastcall std::vector<InboxItem>::_M_insert_aux(
            LogicCollectMultiWinChestCommand **a1,
            LogicCollectMultiWinChestCommand *a2,
            _OWORD *a3)
    {
      LogicCollectMultiWinChestCommand *v4; // x19
      LogicCollectMultiWinChestCommand *v6; // x8
      LogicCollectMultiWinChestCommand *v7; // x8
      LogicCollectMultiWinChestCommand *v8; // x9
      LogicCollectMultiWinChestCommand *v9; // x10
      __int64 v10; // x11
      __int64 v11; // x11
      LogicCollectMultiWinChestCommand *v12; // x12
      LogicCollectMultiWinChestCommand *v13; // x13
      LogicCollectMultiWinChestCommand *v14; // x14
      __int64 v15; // x9
      unsigned __int64 v16; // x8
      unsigned __int64 v17; // x23
      __int64 v18; // x0
      __int64 v19; // x21
      LogicCollectMultiWinChestCommand *v20; // x9
      _OWORD *v21; // x8
      _BYTE *v22; // x10
      unsigned __int64 v23; // x22
      LogicCollectMultiWinChestCommand *v24; // x9
      _OWORD *v25; // x12
      LogicCollectMultiWinChestCommand *v26; // x11
      __int128 v27; // t1
      unsigned __int64 v28; // x13
      LogicCollectMultiWinChestCommand *v29; // x0
      __int64 v30; // x0
      __int128 v31; // [xsp+0h] [xbp-40h] BYREF
    
      v4 = a2;
      v6 = a1[1];
      if ( v6 == a1[2] )
      {
        v15 = v6 - *a1;
        v16 = v15 >> 4;
        v17 = 1;
        if ( v15 >> 4 )
        {
          if ( v16 == 0xFFFFFFFFFFFFFFFLL )
            std::__throw_length_error("vector::_M_insert_aux");
          v17 = v15 >> 3;
        }
        if ( v17 >= v16 )
        {
          if ( v17 >> 60 )
            std::__throw_bad_alloc();
        }
        else
        {
          v17 = 0xFFFFFFFFFFFFFFFLL;
        }
        v18 = operator new(16 * v17);
        v19 = v18;
        v20 = *a1;
        v21 = (_OWORD *)v18;
        if ( *a1 != v4 )
        {
          v22 = 0;
          do
          {
            *(_OWORD *)&v22[v18] = *(_OWORD *)&v22[(_QWORD)v20];
            v22 += 16;
          }
          while ( (_BYTE *)(v4 - v20) != v22 );
          v21 = (_OWORD *)((((LogicCollectMultiWinChestCommand *)((char *)v4 - 16) - v20) & 0xFFFFFFFFFFFFFFF0LL) + v18 + 16);
        }
        *v21 = *a3;
        v23 = (unsigned __int64)(v21 + 1);
        v24 = a1[1];
        if ( v4 != v24 )
        {
          v25 = v21;
          v26 = v4;
          do
          {
            v27 = *(_OWORD *)v26;
            v26 = (LogicCollectMultiWinChestCommand *)((char *)v26 + 16);
            v25[1] = v27;
            v28 = (unsigned __int64)(v25 + 2);
            v25 = (_OWORD *)v23;
            v23 = v28;
          }
          while ( v24 != v26 );
          v23 = (unsigned __int64)v21
              + (((LogicCollectMultiWinChestCommand *)((char *)v24 - 16) - v4) & 0xFFFFFFFFFFFFFFF0LL)
              + 32;
          v4 = a1[1];
        }
        v29 = *a1;
        if ( *a1 != v4 )
        {
          do
          {
            InboxItem::~InboxItem(v29);
            v29 = (LogicCollectMultiWinChestCommand *)(v30 + 16);
          }
          while ( v4 != v29 );
          v4 = *a1;
        }
        if ( v4 )
          operator delete(v4);
        *a1 = (LogicCollectMultiWinChestCommand *)v19;
        a1[1] = (LogicCollectMultiWinChestCommand *)v23;
        a1[2] = (LogicCollectMultiWinChestCommand *)(v19 + 16 * v17);
      }
      else
      {
        *(_OWORD *)v6 = *((_OWORD *)v6 - 1);
        v7 = a1[1];
        v8 = (LogicCollectMultiWinChestCommand *)((char *)v7 + 16);
        a1[1] = (LogicCollectMultiWinChestCommand *)((char *)v7 + 16);
        v31 = *a3;
        v9 = (LogicCollectMultiWinChestCommand *)((char *)v7 - 16);
        v10 = (LogicCollectMultiWinChestCommand *)((char *)v7 - 16) - a2;
        if ( v10 >= 1 )
        {
          v11 = (v10 >> 4) + 1;
          v12 = v7;
          do
          {
            v13 = (LogicCollectMultiWinChestCommand *)((char *)v8 - 32);
            v14 = (LogicCollectMultiWinChestCommand *)((char *)v12 - 32);
            --v11;
            *((_OWORD *)v8 - 2) = *((_OWORD *)v12 - 2);
            v8 = v7;
            v7 = v13;
            v12 = v9;
            v9 = v14;
          }
          while ( v11 > 1 );
        }
        *(_OWORD *)a2 = v31;
        InboxItem::~InboxItem((LogicCollectMultiWinChestCommand *)&v31);
      }
    }

}; // end class std::vector<InboxItem,std::allocator<InboxItem>>
