class RankingEntry
{
public:

    void __fastcall RankingEntry::RankingEntry(RankingEntry *this)
    {
      *(_QWORD *)this = off_10045E9E8;
      *((_DWORD *)this + 8) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 1) = 0;
    }

    __int64 __fastcall RankingEntry::encode(#1226 **this, #1226 *a2, const #1236 *a3)
    {
      ByteStreamHelper::encodeLogicLong(a2, *(this + 1), a3);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(this + 2));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 6));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 7));
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 8));
    }

    __int64 __fastcall RankingEntry::decode(HomeLogicStoppedMessage *this, #1225 *a2)
    {
      LogicLong *v4; // x21
      LogicLong *v5; // x2
      __int64 result; // x0
    
      v4 = (LogicLong *)operator new(8);
      LogicLong::LogicLong(v4);
      *((_QWORD *)this + 1) = v4;
      ByteStreamHelper::decodeLogicLong(a2, v4, v5);
      *((_QWORD *)this + 2) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_DWORD *)this + 6) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 7) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 8) = result;
      return result;
    }

    __int64 __fastcall RankingEntry::getId(HomeLogicStoppedMessage *this)
    {
      return *((_QWORD *)this + 1);
    }

    __int64 __fastcall RankingEntry::getName(HomeLogicStoppedMessage *this)
    {
      return *((_QWORD *)this + 2);
    }

    __int64 __fastcall RankingEntry::getOrder(HomeLogicStoppedMessage *this)
    {
      return *((unsigned int *)this + 6);
    }

    __int64 __fastcall RankingEntry::getScore(HomeLogicStoppedMessage *this)
    {
      return *((unsigned int *)this + 7);
    }

    __int64 __fastcall RankingEntry::getPreviousOrder(HomeLogicStoppedMessage *this)
    {
      return *((unsigned int *)this + 8);
    }

    void __fastcall RankingEntry::destruct(HomeLogicStoppedMessage *this)
    {
      void *v2; // x0
      char *v3; // x20
      String *v4; // x19
    
      v3 = (char *)this + 8;
      v2 = (void *)*((_QWORD *)this + 1);
      if ( v2 )
        operator delete(v2);
      v4 = (String *)*((_QWORD *)this + 2);
      if ( v4 )
      {
        String::~String(v4);
        operator delete(v4);
      }
      *((_DWORD *)v3 + 6) = 0;
      *((_QWORD *)v3 + 1) = 0;
      *((_QWORD *)v3 + 2) = 0;
      *(_QWORD *)v3 = 0;
    }

    void __fastcall RankingEntry::~RankingEntry(HomeLogicStoppedMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall RankingEntry::~RankingEntry(HomeLogicStoppedMessage *this)
    {
      operator delete(this);
    }

}; // end class RankingEntry
