class AvatarStreamEntry
{
public:

    void AvatarStreamEntry::updateStateFrom()
    {
      ;
    }

    void __fastcall AvatarStreamEntry::AvatarStreamEntry(AvatarStreamEntry *this)
    {
      *((_BYTE *)this + 41) = 1;
      *(_QWORD *)this = off_10046E3E8;
      *((_BYTE *)this + 40) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
    }

    __int64 __fastcall AvatarStreamEntry::encode(#1055 *this, #1226 *a2)
    {
      ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 1));
      ChecksumEncoder::writeLong(a2, *((_QWORD *)this + 2));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 3));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 8));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 9));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 40));
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *((unsigned __int8 *)this + 41));
    }

    __int64 __fastcall AvatarStreamEntry::decode(__int64 a1, __int64 a2)
    {
      __int64 result; // x0
    
      *(_QWORD *)(a1 + 8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 168LL))(a2);
      *(_QWORD *)(a1 + 16) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 168LL))(a2);
      *(_QWORD *)(a1 + 24) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_DWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 36) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_BYTE *)(a1 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2);
      *(_BYTE *)(a1 + 41) = result;
      return result;
    }

    __int64 __fastcall AvatarStreamEntry::getId(LogicStartMatchmakeCommand *this)
    {
      return *((_QWORD *)this + 1);
    }

    __int64 __fastcall AvatarStreamEntry::getSenderAvatarId(LogicStartMatchmakeCommand *this)
    {
      return *((_QWORD *)this + 2);
    }

    __int64 __fastcall AvatarStreamEntry::getSenderName(LogicStartMatchmakeCommand *this)
    {
      return *((_QWORD *)this + 3);
    }

    __int64 __fastcall AvatarStreamEntry::getAgeSeconds(LogicStartMatchmakeCommand *this)
    {
      return *((unsigned int *)this + 9);
    }

    __int64 __fastcall AvatarStreamEntry::setAgeSeconds(__int64 this, int a2)
    {
      *(_DWORD *)(this + 36) = a2;
      return this;
    }

    void __fastcall AvatarStreamEntry::destruct(LogicStartMatchmakeCommand *this)
    {
      void *v2; // x0
      void *v3; // x20
      void *v4; // x0
    
      v2 = (void *)*((_QWORD *)this + 2);
      if ( v2 )
        operator delete(v2);
      v3 = (void *)*((_QWORD *)this + 3);
      if ( v3 )
      {
        String::~String();
        operator delete(v3);
      }
      v4 = (void *)*((_QWORD *)this + 1);
      if ( v4 )
        operator delete(v4);
      *((_BYTE *)this + 41) = 1;
      *((_BYTE *)this + 40) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
    }

    __int64 __fastcall AvatarStreamEntry::setRemoved(__int64 this)
    {
      *(_BYTE *)(this + 40) = 1;
      return this;
    }

    __int64 __fastcall AvatarStreamEntry::isRemoved(LogicStartMatchmakeCommand *this)
    {
      return *((unsigned __int8 *)this + 40);
    }

    __int64 __fastcall AvatarStreamEntry::setIsNew(__int64 this, char a2)
    {
      *(_BYTE *)(this + 41) = a2;
      return this;
    }

    __int64 __fastcall AvatarStreamEntry::isNew(LogicStartMatchmakeCommand *this)
    {
      return *((unsigned __int8 *)this + 41);
    }

    __int64 __fastcall AvatarStreamEntry::isDismissed(LogicStartMatchmakeCommand *this)
    {
      return 1;
    }

    void __fastcall AvatarStreamEntry::dismiss(LogicStartMatchmakeCommand *this)
    {
      ;
    }

    void __fastcall AvatarStreamEntry::~AvatarStreamEntry(LogicStartMatchmakeCommand *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AvatarStreamEntry::~AvatarStreamEntry(LogicStartMatchmakeCommand *this)
    {
      operator delete(this);
    }

}; // end class AvatarStreamEntry
