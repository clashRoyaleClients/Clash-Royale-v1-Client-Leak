class ChallengeDoneStreamEntry
{
public:

    void __fastcall ChallengeDoneStreamEntry::ChallengeDoneStreamEntry(ChallengeDoneStreamEntry *this)
    {
      StreamEntry *v1; // x0
    
      v1 = StreamEntry::StreamEntry(this);
      *((_QWORD *)v1 + 7) = 0;
      *(_QWORD *)v1 = off_10045F520;
      *(_QWORD *)((char *)v1 + 84) = 0;
      *(_QWORD *)((char *)v1 + 76) = 0;
      *((_DWORD *)v1 + 18) = -1;
      *((_QWORD *)v1 + 8) = 0;
    }

    __int64 __fastcall ChallengeDoneStreamEntry::encode(PopupBase *this, #1226 *a2)
    {
      __int64 (__fastcall *v4)(#1226 *, __int64); // x2
    
      StreamEntry::encode();
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 7));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, *((unsigned int *)this + 19));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, *((unsigned int *)this + 20));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, *((unsigned int *)this + 21));
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, *((unsigned int *)this + 22));
      v4 = *(__int64 (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 48LL);
      if ( !*((_QWORD *)this + 8) )
        return v4(a2, 0);
      v4(a2, 1);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, *((unsigned int *)this + 18));
      return LogicLong::encode(*((_QWORD *)this + 8), a2);
    }

    __int64 __fastcall ChallengeDoneStreamEntry::decode(PopupBase *this, #1225 *a2)
    {
      int v4; // w8
      void *v5; // x0
      __int64 result; // x0
    
      StreamEntry::decode(this, a2);
      *((_QWORD *)this + 7) = (*(__int64 (__fastcall **)(#1225 *, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *((_DWORD *)this + 19) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 144LL))(a2);
      *((_DWORD *)this + 20) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 144LL))(a2);
      *((_DWORD *)this + 21) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 144LL))(a2);
      *((_DWORD *)this + 22) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 144LL))(a2);
      v4 = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 136LL))(a2);
      v5 = (void *)*((_QWORD *)this + 8);
      if ( v4 )
      {
        if ( v5 )
          operator delete(v5);
        *((_QWORD *)this + 8) = 0;
        *((_DWORD *)this + 18) = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 144LL))(a2);
        result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 168LL))(a2);
      }
      else
      {
        if ( v5 )
          operator delete(v5);
        result = 0;
      }
      *((_QWORD *)this + 8) = result;
      return result;
    }

    __int64 __fastcall ChallengeDoneStreamEntry::getBattleLogJSON(PopupBase *this)
    {
      return *((_QWORD *)this + 7);
    }

    __int64 __fastcall ChallengeDoneStreamEntry::getMajorVersion(PopupBase *this)
    {
      return *((unsigned int *)this + 19);
    }

    __int64 __fastcall ChallengeDoneStreamEntry::getBuild(PopupBase *this)
    {
      return *((unsigned int *)this + 20);
    }

    __int64 __fastcall ChallengeDoneStreamEntry::getContentVersion(PopupBase *this)
    {
      return *((unsigned int *)this + 21);
    }

    __int64 __fastcall ChallengeDoneStreamEntry::getReplayShardId(PopupBase *this)
    {
      return *((unsigned int *)this + 18);
    }

    __int64 __fastcall ChallengeDoneStreamEntry::getAttackReplayId(PopupBase *this)
    {
      return *((_QWORD *)this + 8);
    }

    __int64 __fastcall ChallengeDoneStreamEntry::getViewCount(PopupBase *this)
    {
      return *((unsigned int *)this + 22);
    }

    void __fastcall ChallengeDoneStreamEntry::destruct(PopupBase *this)
    {
      void *v2; // x20
      void *v3; // x0
    
      StreamEntry::destruct(this);
      v2 = (void *)*((_QWORD *)this + 7);
      if ( v2 )
      {
        String::~String(*((String **)this + 7));
        operator delete(v2);
      }
      *((_QWORD *)this + 7) = 0;
      v3 = (void *)*((_QWORD *)this + 8);
      if ( v3 )
        operator delete(v3);
      *(_QWORD *)((char *)this + 84) = 0;
      *(_QWORD *)((char *)this + 76) = 0;
      *((_QWORD *)this + 7) = 0;
      *((_DWORD *)this + 18) = -1;
      *((_QWORD *)this + 8) = 0;
    }

    void __fastcall ChallengeDoneStreamEntry::~ChallengeDoneStreamEntry(PopupBase *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ChallengeDoneStreamEntry::~ChallengeDoneStreamEntry(PopupBase *this)
    {
      operator delete(this);
    }

    __int64 __fastcall ChallengeDoneStreamEntry::getStreamEntryType(PopupBase *this)
    {
      return 11;
    }

}; // end class ChallengeDoneStreamEntry
