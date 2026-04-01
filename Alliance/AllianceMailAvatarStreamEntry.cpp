class AllianceMailAvatarStreamEntry
{
public:

    void __fastcall AllianceMailAvatarStreamEntry::AllianceMailAvatarStreamEntry(AvatarStreamEntry *a1)
    {
      _QWORD *v1; // x0
    
      AvatarStreamEntry::AvatarStreamEntry(a1);
      v1[11] = 0;
      *v1 = off_10046D4C0;
      v1[9] = 0;
      v1[10] = 0;
      v1[7] = 0;
      v1[8] = 0;
      v1[6] = 0;
    }

    __int64 __fastcall AllianceMailAvatarStreamEntry::encode(AreaEffectObject **this, #1226 *a2)
    {
      void (__fastcall *v4)(#1226 *, __int64); // x8
    
      AvatarStreamEntry::encode((LogicStartMatchmakeCommand *)this, a2);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(this + 10));
      v4 = *(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( *(this + 6) )
      {
        v4(a2, 1);
        ChecksumEncoder::writeLong(a2, *(this + 6));
      }
      else
      {
        v4(a2, 0);
      }
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(this + 11));
      ChecksumEncoder::writeLong(a2, *(this + 7));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(this + 8));
      return ByteStreamHelper::writeDataReference((__int64)a2, *(this + 9));
    }

    __int64 __fastcall AllianceMailAvatarStreamEntry::decode(LogicAddSpellsCommand *this, #1225 *a2)
    {
      #1225 *v4; // x1
      __int64 result; // x0
    
      AvatarStreamEntry::decode((__int64)this, (__int64)a2);
      *((_QWORD *)this + 10) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      if ( (*(unsigned int (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2) )
        *((_QWORD *)this + 6) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      *((_QWORD *)this + 11) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_QWORD *)this + 7) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      *((_QWORD *)this + 8) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      result = ByteStreamHelper::readDataReference(a2, v4);
      *((_QWORD *)this + 9) = result;
      return result;
    }

    __int64 __fastcall AllianceMailAvatarStreamEntry::getAllianceId(LogicAddSpellsCommand *this)
    {
      return *((_QWORD *)this + 7);
    }

    __int64 __fastcall AllianceMailAvatarStreamEntry::getAllianceName(LogicAddSpellsCommand *this)
    {
      return *((_QWORD *)this + 8);
    }

    __int64 __fastcall AllianceMailAvatarStreamEntry::getAllianceBadgeData(LogicAddSpellsCommand *this)
    {
      return *((_QWORD *)this + 9);
    }

    __int64 __fastcall AllianceMailAvatarStreamEntry::getMessage(LogicAddSpellsCommand *this)
    {
      return *((_QWORD *)this + 10);
    }

    __int64 __fastcall AllianceMailAvatarStreamEntry::getTitle(LogicAddSpellsCommand *this)
    {
      return *((_QWORD *)this + 11);
    }

    void __fastcall AllianceMailAvatarStreamEntry::destruct(LogicAddSpellsCommand *this)
    {
      void *v2; // x0
      void *v3; // x0
      void *v4; // x20
      void *v5; // x20
      void *v6; // x20
    
      AvatarStreamEntry::destruct(this);
      v2 = (void *)*((_QWORD *)this + 6);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 6) = 0;
      v3 = (void *)*((_QWORD *)this + 7);
      if ( v3 )
        operator delete(v3);
      *((_QWORD *)this + 7) = 0;
      v4 = (void *)*((_QWORD *)this + 8);
      if ( v4 )
      {
        String::~String();
        operator delete(v4);
      }
      *((_QWORD *)this + 8) = 0;
      v5 = (void *)*((_QWORD *)this + 10);
      if ( v5 )
      {
        String::~String();
        operator delete(v5);
      }
      *((_QWORD *)this + 10) = 0;
      v6 = (void *)*((_QWORD *)this + 11);
      if ( v6 )
      {
        String::~String();
        operator delete(v6);
      }
      *((_QWORD *)this + 10) = 0;
      *((_QWORD *)this + 11) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 9) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 7) = 0;
    }

    void __fastcall AllianceMailAvatarStreamEntry::~AllianceMailAvatarStreamEntry(LogicAddSpellsCommand *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceMailAvatarStreamEntry::~AllianceMailAvatarStreamEntry(LogicAddSpellsCommand *this)
    {
      operator delete(this);
    }

    __int64 __fastcall AllianceMailAvatarStreamEntry::getStreamEntryType(LogicAddSpellsCommand *this)
    {
      return 6;
    }

}; // end class AllianceMailAvatarStreamEntry
