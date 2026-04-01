class AllianceHeaderEntry
{
public:

    void *__fastcall AllianceHeaderEntry::AllianceHeaderEntry(void *a1)
    {
      memset(a1, 0, 0x50u);
      return a1;
    }

    __int64 __fastcall AllianceHeaderEntry::encode(__int64 a1, __int64 a2)
    {
      ChecksumEncoder::writeLong(a2, *(_QWORD *)a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 8));
      ByteStreamHelper::writeDataReference(a2, *(AreaEffectObject **)(a1 + 16));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 24));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 28));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 32));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 36));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 40));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 44));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 48));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 52));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 56));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 60));
      ByteStreamHelper::writeDataReference(a2, *(AreaEffectObject **)(a1 + 72));
      return ByteStreamHelper::writeDataReference(a2, *(AreaEffectObject **)(a1 + 64));
    }

    __int64 __fastcall AllianceHeaderEntry::decode(__int64 a1, #1317 *a2)
    {
      #1225 *v4; // x1
      int v5; // w2
      int v6; // w2
      __int64 result; // x0
    
      *(_QWORD *)a1 = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 168LL))(a2);
      *(_QWORD *)(a1 + 8) = (*(__int64 (__fastcall **)(#1317 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_QWORD *)(a1 + 16) = ByteStreamHelper::readDataReference(a2, v4);
      *(_DWORD *)(a1 + 24) = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 28) = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 36) = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 44) = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 48) = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 52) = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 60) = (*(__int64 (__fastcall **)(#1317 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_QWORD *)(a1 + 72) = ByteStreamHelper::readDataReference(a2, (ByteStream *)1, v5);
      result = ByteStreamHelper::readDataReference(a2, (ByteStream *)0x39, v6);
      *(_QWORD *)(a1 + 64) = result;
      return result;
    }

    __int64 __fastcall AllianceHeaderEntry::getAllianceId(__int64 a1)
    {
      return *(_QWORD *)a1;
    }

    __int64 __fastcall AllianceHeaderEntry::getAllianceName(__int64 a1)
    {
      return *(_QWORD *)(a1 + 8);
    }

    __int64 __fastcall AllianceHeaderEntry::getAllianceBadgeData(__int64 a1)
    {
      return *(_QWORD *)(a1 + 16);
    }

    __int64 __fastcall AllianceHeaderEntry::getAllianceType(__int64 a1)
    {
      return *(unsigned int *)(a1 + 24);
    }

    __int64 __fastcall AllianceHeaderEntry::getNumberOfMembers(__int64 a1)
    {
      return *(unsigned int *)(a1 + 28);
    }

    __int64 __fastcall AllianceHeaderEntry::getScore(__int64 a1)
    {
      return *(unsigned int *)(a1 + 32);
    }

    void *__fastcall AllianceHeaderEntry::destruct(void *a1)
    {
      void *v2; // x0
      void *v3; // x20
    
      v2 = *(void **)a1;
      if ( v2 )
        operator delete(v2);
      v3 = (void *)*((_QWORD *)a1 + 1);
      if ( v3 )
      {
        String::~String(*((String **)a1 + 1));
        operator delete(v3);
      }
      return memset(a1, 0, 0x50u);
    }

    __int64 __fastcall AllianceHeaderEntry::getRequiredScore(__int64 a1)
    {
      return *(unsigned int *)(a1 + 36);
    }

    __int64 __fastcall AllianceHeaderEntry::getDonations(__int64 a1)
    {
      return *(unsigned int *)(a1 + 56);
    }

    __int64 __fastcall AllianceHeaderEntry::getRegion(__int64 a1)
    {
      return *(_QWORD *)(a1 + 64);
    }

}; // end class AllianceHeaderEntry
