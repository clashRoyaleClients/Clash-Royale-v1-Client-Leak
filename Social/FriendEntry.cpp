class FriendEntry
{
public:

    void __fastcall FriendEntry::FriendEntry(FriendEntry *this)
    {
      char *v2; // x19
    
      v2 = (char *)this + 88;
      String::String((String *)((char *)this + 88));
      *((_QWORD *)this + 10) = 0;
      *((_DWORD *)this + 12) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
      *((_DWORD *)this + 18) = 0;
      *((_QWORD *)this + 7) = 0;
      *((_QWORD *)this + 8) = 0;
      String::operator=(v2, "");
    }

    // attributes: thunk
    void __fastcall FriendEntry::FriendEntry(FriendEntry *this)
    {
      __ZN11FriendEntryC2Ev(this);
    }

    __int64 __fastcall FriendEntry::encode(ChallengeDoneStreamItem *this, ExpBar *a2)
    {
      void (__fastcall *v4)(ExpBar *, __int64); // x8
    
      ChecksumEncoder::writeLong(a2, *(_QWORD *)this);
      ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 1));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 2));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 3));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 4));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 10));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 11));
      (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 12));
      v4 = *(void (__fastcall **)(ExpBar *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( *((_QWORD *)this + 7) )
      {
        v4(a2, 1);
        ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 7));
        (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 8));
        (*(void (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 18));
      }
      else
      {
        v4(a2, 0);
      }
      return (*(__int64 (__fastcall **)(ExpBar *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 10));
    }

    __int64 __fastcall FriendEntry::decode(__int64 a1, __int64 a2)
    {
      __int64 result; // x0
    
      *(_QWORD *)a1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 168LL))(a2);
      *(_QWORD *)(a1 + 8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 168LL))(a2);
      *(_QWORD *)(a1 + 16) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_QWORD *)(a1 + 24) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_QWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_DWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 44) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 48) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2) )
      {
        *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 168LL))(a2);
        *(_QWORD *)(a1 + 64) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
        *(_DWORD *)(a1 + 72) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      }
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_QWORD *)(a1 + 80) = result;
      return result;
    }

    __int64 __fastcall FriendEntry::getAvatarId(ChallengeDoneStreamItem *this)
    {
      return *(_QWORD *)this;
    }

    _QWORD *__fastcall FriendEntry::setAvatarId(_QWORD *result, __int64 a2)
    {
      *result = a2;
      return result;
    }

    __int64 __fastcall FriendEntry::getHomeId(ChallengeDoneStreamItem *this)
    {
      return *((_QWORD *)this + 1);
    }

    __int64 __fastcall FriendEntry::getName(ChallengeDoneStreamItem *this)
    {
      return *((_QWORD *)this + 2);
    }

    __int64 __fastcall FriendEntry::setName(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 16) = a2;
      return this;
    }

    __int64 __fastcall FriendEntry::getFacebookId(ChallengeDoneStreamItem *this)
    {
      return *((_QWORD *)this + 3);
    }

    __int64 __fastcall FriendEntry::setFacebookId(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 24) = a2;
      return this;
    }

    __int64 __fastcall FriendEntry::getGamecenterId(ChallengeDoneStreamItem *this)
    {
      return *((_QWORD *)this + 4);
    }

    __int64 __fastcall FriendEntry::getExpLevel(ChallengeDoneStreamItem *this)
    {
      return *((unsigned int *)this + 11);
    }

    __int64 __fastcall FriendEntry::setExpLevel(__int64 this, int a2)
    {
      *(_DWORD *)(this + 44) = a2;
      return this;
    }

    __int64 __fastcall FriendEntry::getScore(ChallengeDoneStreamItem *this)
    {
      return *((unsigned int *)this + 12);
    }

    __int64 __fastcall FriendEntry::setScore(__int64 this, int a2)
    {
      *(_DWORD *)(this + 48) = a2;
      return this;
    }

    __int64 __fastcall FriendEntry::getAllianceId(ChallengeDoneStreamItem *this)
    {
      return *((_QWORD *)this + 7);
    }

    __int64 __fastcall FriendEntry::setAllianceId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 56) = a2;
      return result;
    }

    __int64 __fastcall FriendEntry::getAllianceName(ChallengeDoneStreamItem *this)
    {
      return *((_QWORD *)this + 8);
    }

    __int64 __fastcall FriendEntry::setAllianceName(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 64) = a2;
      return this;
    }

    __int64 __fastcall FriendEntry::getAllianceRole(ChallengeDoneStreamItem *this)
    {
      return *((unsigned int *)this + 18);
    }

    __int64 __fastcall FriendEntry::destruct(ChallengeDoneStreamItem *this)
    {
      void *v2; // x0
      void *v3; // x0
      void *v4; // x20
      void *v5; // x20
      void *v6; // x20
      void *v7; // x20
      void *v8; // x0
      void *v9; // x20
    
      v2 = *(void **)this;
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)this = 0;
      v3 = (void *)*((_QWORD *)this + 1);
      if ( v3 )
        operator delete(v3);
      *((_QWORD *)this + 1) = 0;
      v4 = (void *)*((_QWORD *)this + 2);
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      *((_QWORD *)this + 2) = 0;
      v5 = (void *)*((_QWORD *)this + 10);
      if ( v5 )
      {
        String::~String();
        operator delete(v5);
      }
      *((_QWORD *)this + 10) = 0;
      v6 = (void *)*((_QWORD *)this + 3);
      if ( v6 )
      {
        String::~String();
        operator delete(v6);
      }
      *((_QWORD *)this + 3) = 0;
      v7 = (void *)*((_QWORD *)this + 4);
      if ( v7 )
      {
        String::~String();
        operator delete(v7);
      }
      *((_QWORD *)this + 4) = 0;
      v8 = (void *)*((_QWORD *)this + 7);
      if ( v8 )
        operator delete(v8);
      *((_QWORD *)this + 7) = 0;
      v9 = (void *)*((_QWORD *)this + 8);
      if ( v9 )
      {
        String::~String();
        operator delete(v9);
      }
      *((_QWORD *)this + 10) = 0;
      *((_DWORD *)this + 12) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
      *((_DWORD *)this + 18) = 0;
      *((_QWORD *)this + 7) = 0;
      *((_QWORD *)this + 8) = 0;
      return String::operator=((char *)this + 88, "");
    }

    void __fastcall FriendEntry::setProfilePictureUrl(ChallengeDoneStreamItem *this, String *a2)
    {
      void *v4; // x21
    
      v4 = (void *)*((_QWORD *)this + 10);
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      *((_QWORD *)this + 10) = a2;
    }

    __int64 __fastcall FriendEntry::getProfilePictureUrl(ChallengeDoneStreamItem *this)
    {
      return *((_QWORD *)this + 10);
    }

    __int64 __fastcall FriendEntry::setFacebookName(ChallengeDoneStreamItem *this, const String *a2)
    {
      return String::operator=((String *)((char *)this + 88));
    }

    __int64 __fastcall FriendEntry::getFacebookName(ChallengeDoneStreamItem *this)
    {
      return (__int64)this + 88;
    }

}; // end class FriendEntry
