class AllianceInvitationAvatarStreamEntry
{
public:

    void __fastcall AllianceInvitationAvatarStreamEntry::AllianceInvitationAvatarStreamEntry(
            AllianceInvitationAvatarStreamEntry *this)
    {
      _QWORD *v1; // x0
    
      AvatarStreamEntry::AvatarStreamEntry(this);
      *v1 = off_100467198;
      v1[8] = 0;
      v1[9] = 0;
      v1[6] = 0;
      v1[7] = 0;
    }

    __int64 __fastcall AllianceInvitationAvatarStreamEntry::encode(AreaEffectObject **this, #1226 *a2)
    {
      __int64 (__fastcall *v4)(#1226 *, __int64); // x2
    
      AvatarStreamEntry::encode((LogicStartMatchmakeCommand *)this, a2);
      ChecksumEncoder::writeLong(a2, *(this + 6));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(this + 7));
      ByteStreamHelper::writeDataReference((int)a2, *(this + 8));
      v4 = *(__int64 (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( !*(this + 9) )
        return v4(a2, 0);
      v4(a2, 1);
      return ChecksumEncoder::writeLong(a2, *(this + 9));
    }

    __int64 __fastcall AllianceInvitationAvatarStreamEntry::decode(SearchAlliancesMessage *this, #1225 *a2)
    {
      #1225 *v4; // x1
      __int64 result; // x0
    
      AvatarStreamEntry::decode((__int64)this, (__int64)a2);
      *((_QWORD *)this + 6) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      *((_QWORD *)this + 7) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_QWORD *)this + 8) = ByteStreamHelper::readDataReference(a2, v4);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      if ( (_DWORD)result )
      {
        result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
        *((_QWORD *)this + 9) = result;
      }
      return result;
    }

    __int64 __fastcall AllianceInvitationAvatarStreamEntry::getAllianceId(SearchAlliancesMessage *this)
    {
      return *((_QWORD *)this + 6);
    }

    __int64 __fastcall AllianceInvitationAvatarStreamEntry::getAllianceName(SearchAlliancesMessage *this)
    {
      return *((_QWORD *)this + 7);
    }

    __int64 __fastcall AllianceInvitationAvatarStreamEntry::getAllianceBadgeData(SearchAlliancesMessage *this)
    {
      return *((_QWORD *)this + 8);
    }

    void __fastcall AllianceInvitationAvatarStreamEntry::destruct(LogicStartMatchmakeCommand *a1)
    {
      void *v2; // x0
      void *v3; // x20
      void *v4; // x0
    
      AvatarStreamEntry::destruct(a1);
      v2 = (void *)*((_QWORD *)a1 + 6);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)a1 + 6) = 0;
      v3 = (void *)*((_QWORD *)a1 + 7);
      if ( v3 )
      {
        String::~String();
        operator delete(v3);
      }
      *((_QWORD *)a1 + 7) = 0;
      v4 = (void *)*((_QWORD *)a1 + 9);
      if ( v4 )
        operator delete(v4);
      *((_QWORD *)a1 + 8) = 0;
      *((_QWORD *)a1 + 9) = 0;
      *((_QWORD *)a1 + 6) = 0;
      *((_QWORD *)a1 + 7) = 0;
    }

    void __fastcall AllianceInvitationAvatarStreamEntry::~AllianceInvitationAvatarStreamEntry(SearchAlliancesMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceInvitationAvatarStreamEntry::~AllianceInvitationAvatarStreamEntry(SearchAlliancesMessage *this)
    {
      operator delete(this);
    }

    __int64 __fastcall AllianceInvitationAvatarStreamEntry::getStreamEntryType(SearchAlliancesMessage *this)
    {
      return 4;
    }

}; // end class AllianceInvitationAvatarStreamEntry
