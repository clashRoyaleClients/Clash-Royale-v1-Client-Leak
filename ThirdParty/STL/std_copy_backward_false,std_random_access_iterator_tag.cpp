class std::__copy_backward<false,std::random_access_iterator_tag>
{
public:

    __int64 __fastcall std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<ServerConnection::Account *,ServerConnection::Account *>(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __int64 v3; // x19
      unsigned __int64 v4; // x8
      __int64 v5; // x10
      __int64 v6; // x20
      __int64 v7; // x21
      __int64 v8; // x22
      __int64 v9; // x23
    
      v3 = a3;
      if ( a2 - a1 >= 1 )
      {
        v4 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - a1) >> 3);
        if ( (__int64)~v4 < -2 || v4 == 1 )
          v5 = -2;
        else
          v5 = ~v4;
        v6 = -2LL - (v4 + v5);
        v7 = v4 + 1;
        v8 = a3 - 40;
        v9 = a2 - 40;
        do
        {
          *(_DWORD *)(v8 + 8) = *(_DWORD *)(v9 + 8);
          *(_QWORD *)v8 = *(_QWORD *)v9;
          String::operator=((String *)(v8 + 16));
          --v7;
          v8 -= 40;
          v9 -= 40;
        }
        while ( v7 > 1 );
        v3 += 40 * v6;
      }
      return v3;
    }

    __int64 __fastcall std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<String *,String *>(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __int64 v3; // x19
      unsigned __int64 v4; // x8
      __int64 v5; // x10
      __int64 v6; // x22
      __int64 v7; // x23
      String *v8; // x20
      __int64 v9; // x21
    
      v3 = a3;
      if ( a2 - a1 >= 1 )
      {
        v4 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 3);
        if ( (__int64)~v4 < -2 || v4 == 1 )
          v5 = -2;
        else
          v5 = ~v4;
        v6 = -2LL - (v4 + v5);
        v7 = v4 + 1;
        v8 = (String *)(a3 - 24);
        v9 = a2 - 24;
        do
        {
          String::operator=(v8);
          --v7;
          --v8;
          v9 -= 24;
        }
        while ( v7 > 1 );
        v3 += 24 * v6;
      }
      return v3;
    }

    __int64 __fastcall std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<LocalNotificationManager::NotifData *,LocalNotificationManager::NotifData *>(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __int64 v3; // x19
      __int64 v4; // x8
      __int64 v5; // x9
      __int64 v6; // x11
      __int64 v7; // x22
      __int64 v8; // x23
      __int64 v9; // x20
      __int64 v10; // x21
    
      v3 = a3;
      v4 = a2 - a1;
      if ( a2 - a1 >= 1 )
      {
        v5 = v4 >> 5;
        if ( ~(v4 >> 5) < -2 || v4 >> 5 == 1 )
          v6 = -2;
        else
          v6 = ~v5;
        v7 = -2 - (v6 + (v4 >> 5));
        v8 = v5 + 1;
        v9 = a3 - 32;
        v10 = a2 - 32;
        do
        {
          String::operator=((String *)v9);
          *(_QWORD *)(v9 + 24) = *(_QWORD *)(v10 + 24);
          --v8;
          v9 -= 32;
          v10 -= 32;
        }
        while ( v8 > 1 );
        v3 += 32 * v7;
      }
      return v3;
    }

    __int64 __fastcall std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<FacebookManager::Request *,FacebookManager::Request *>(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __int64 v3; // x19
      __int64 v4; // x8
      __int64 v5; // x10
      __int64 v6; // x22
      __int64 v7; // x23
      String *v8; // x20
      __int64 v9; // x21
    
      v3 = a3;
      if ( a2 - a1 >= 1 )
      {
        v4 = 0x4EC4EC4EC4EC4EC5LL * ((a2 - a1) >> 3);
        if ( ~v4 < -2 || v4 == 1 )
          v5 = -2;
        else
          v5 = ~v4;
        v6 = -2 - (v4 + v5);
        v7 = v4 + 1;
        v8 = (String *)(a3 - 104);
        v9 = a2 - 104;
        do
        {
          FacebookManager::Request::operator=(v8, v9);
          --v7;
          v8 = (String *)((char *)v8 - 104);
          v9 -= 104;
        }
        while ( v7 > 1 );
        v3 += 104 * v6;
      }
      return v3;
    }

    __int64 __fastcall std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<GameCenterPlayer *,GameCenterPlayer *>(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __int64 v3; // x19
      unsigned __int64 v4; // x8
      __int64 v5; // x10
      __int64 v6; // x22
      __int64 v7; // x23
      __int64 v8; // x20
      __int64 v9; // x21
    
      v3 = a3;
      if ( a2 - a1 >= 1 )
      {
        v4 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 4);
        if ( (__int64)~v4 < -2 || v4 == 1 )
          v5 = -2;
        else
          v5 = ~v4;
        v6 = -2LL - (v4 + v5);
        v7 = v4 + 1;
        v8 = a3 - 48;
        v9 = a2 - 48;
        do
        {
          GameCenterPlayer::operator=(v8, v9);
          --v7;
          v8 -= 48;
          v9 -= 48;
        }
        while ( v7 > 1 );
        v3 += 48 * v6;
      }
      return v3;
    }

    __int64 __fastcall std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<BillingProduct *,BillingProduct *>(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __int64 v3; // x19
      unsigned __int64 v4; // x8
      __int64 v5; // x10
      __int64 v6; // x22
      __int64 v7; // x23
      String *v8; // x20
      __int64 v9; // x21
    
      v3 = a3;
      if ( a2 - a1 >= 1 )
      {
        v4 = 0xCF3CF3CF3CF3CF3DLL * ((a2 - a1) >> 3);
        if ( (__int64)~v4 < -2 || v4 == 1 )
          v5 = -2;
        else
          v5 = ~v4;
        v6 = -2LL - (v4 + v5);
        v7 = v4 + 1;
        v8 = (String *)(a3 - 168);
        v9 = a2 - 168;
        do
        {
          BillingProduct::operator=(v8);
          --v7;
          v8 -= 7;
          v9 -= 168;
        }
        while ( v7 > 1 );
        v3 += 168 * v6;
      }
      return v3;
    }

    __int64 __fastcall std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<ResourceListenerFile *,ResourceListenerFile *>(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __int64 v3; // x19
      unsigned __int64 v4; // x8
      __int64 v5; // x10
      __int64 v6; // x22
      __int64 v7; // x23
      __int64 v8; // x20
      __int64 v9; // x21
    
      v3 = a3;
      if ( a2 - a1 >= 1 )
      {
        v4 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 3);
        if ( (__int64)~v4 < -2 || v4 == 1 )
          v5 = -2;
        else
          v5 = ~v4;
        v6 = -2LL - (v4 + v5);
        v7 = v4 + 1;
        v8 = a3 - 24;
        v9 = a2 - 24;
        do
        {
          std::string::assign((std::string *)v8, (const std::string *)v9);
          *(_OWORD *)(v8 + 8) = *(_OWORD *)(v9 + 8);
          --v7;
          v8 -= 24;
          v9 -= 24;
        }
        while ( v7 > 1 );
        v3 += 24 * v6;
      }
      return v3;
    }

    __int64 __fastcall std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<HTTPQueue::Item *,HTTPQueue::Item *>(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __int64 v3; // x19
      unsigned __int64 v4; // x8
      __int64 v5; // x10
      __int64 v6; // x22
      __int64 v7; // x23
      String *v8; // x20
      String *v9; // x21
    
      v3 = a3;
      if ( a2 - a1 >= 1 )
      {
        v4 = 0x8E38E38E38E38E39LL * ((a2 - a1) >> 3);
        if ( (__int64)~v4 < -2 || v4 == 1 )
          v5 = -2;
        else
          v5 = ~v4;
        v6 = -2LL - (v4 + v5);
        v7 = v4 + 1;
        v8 = (String *)(a3 - 72);
        v9 = (String *)(a2 - 72);
        do
        {
          HTTPQueue::Item::operator=(v8, v9);
          --v7;
          v8 -= 3;
          v9 -= 3;
        }
        while ( v7 > 1 );
        v3 += 72 * v6;
      }
      return v3;
    }

    __int64 __fastcall std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<ImageSet::Slot *,ImageSet::Slot *>(
            __int64 a1,
            __int64 a2,
            __int64 a3)
    {
      __int64 v3; // x19
      __int64 v4; // x8
      __int64 v5; // x10
      __int64 v6; // x20
      __int64 v7; // x21
      __int64 v8; // x22
      __int64 v9; // x23
    
      v3 = a3;
      if ( a2 - a1 >= 1 )
      {
        v4 = 0x6DB6DB6DB6DB6DB7LL * ((a2 - a1) >> 3);
        if ( ~v4 < -2 || v4 == 1 )
          v5 = -2;
        else
          v5 = ~v4;
        v6 = -2 - (v4 + v5);
        v7 = v4 + 1;
        v8 = a3 - 56;
        v9 = a2 - 56;
        do
        {
          *(_QWORD *)v8 = *(_QWORD *)v9;
          String::operator=((String *)(v8 + 8), (String *)(v9 + 8));
          *(_QWORD *)(v8 + 48) = *(_QWORD *)(v9 + 48);
          *(_OWORD *)(v8 + 32) = *(_OWORD *)(v9 + 32);
          --v7;
          v8 -= 56;
          v9 -= 56;
        }
        while ( v7 > 1 );
        v3 += 56 * v6;
      }
      return v3;
    }

}; // end class std::__copy_backward<false,std::random_access_iterator_tag>
