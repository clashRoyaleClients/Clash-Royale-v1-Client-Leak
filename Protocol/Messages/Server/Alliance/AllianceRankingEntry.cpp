class AllianceRankingEntry
{
public:

    void __fastcall AllianceRankingEntry::AllianceRankingEntry(RankingEntry *a1)
    {
      __int64 v1; // x0
    
      RankingEntry::RankingEntry(a1);
      *(_QWORD *)v1 = off_10046FF20;
      *(_DWORD *)(v1 + 52) = 0;
      *(_QWORD *)(v1 + 44) = 0;
      *(_QWORD *)(v1 + 36) = 0;
    }

    __int64 __fastcall AllianceRankingEntry::encode(__int64 a1, #1226 *a2, const #1236 *a3)
    {
      RankingEntry::encode((#1226 **)a1, a2, a3);
      ByteStreamHelper::writeDataReference((__int64)a2, *(AreaEffectObject **)(a1 + 40));
      ByteStreamHelper::writeDataReference((__int64)a2, *(AreaEffectObject **)(a1 + 48));
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 36));
    }

    __int64 __fastcall AllianceRankingEntry::decode(__int64 a1, #1225 *a2)
    {
      #1225 *v4; // x1
      #1225 *v5; // x1
      __int64 result; // x0
    
      RankingEntry::decode((HomeLogicStoppedMessage *)a1, a2);
      *(_QWORD *)(a1 + 40) = ByteStreamHelper::readDataReference(a2, v4);
      *(_QWORD *)(a1 + 48) = ByteStreamHelper::readDataReference(a2, v5);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *(_DWORD *)(a1 + 36) = result;
      return result;
    }

    __int64 __fastcall AllianceRankingEntry::getAllianceBadgeData(__int64 a1)
    {
      return *(_QWORD *)(a1 + 40);
    }

    void __fastcall AllianceRankingEntry::destruct(__int64 a1)
    {
      RankingEntry::destruct((HomeLogicStoppedMessage *)a1);
      *(_DWORD *)(a1 + 52) = 0;
      *(_QWORD *)(a1 + 44) = 0;
      *(_QWORD *)(a1 + 36) = 0;
    }

    __int64 __fastcall AllianceRankingEntry::getNumberOfMembers(__int64 a1)
    {
      return *(unsigned int *)(a1 + 36);
    }

    void AllianceRankingEntry::~AllianceRankingEntry()
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceRankingEntry::~AllianceRankingEntry(void *a1)
    {
      operator delete(a1);
    }

}; // end class AllianceRankingEntry
