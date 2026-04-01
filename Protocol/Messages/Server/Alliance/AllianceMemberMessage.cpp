class AllianceMemberMessage
{
public:

    _QWORD *__fastcall AllianceMemberMessage::AllianceMemberMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100466CA0;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall AllianceMemberMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return AllianceMemberEntry::encode(*(AllianceJoinRequestOkMessage **)(a1 + 72), (#1225 *)(a1 + 16));
    }

    __int64 __fastcall AllianceMemberMessage::decode(__int64 a1)
    {
      AllianceMemberEntry *v2; // x20
    
      PiranhaMessage::decode((#1242 *)a1);
      v2 = (AllianceMemberEntry *)operator new(96);
      AllianceMemberEntry::AllianceMemberEntry(v2);
      *(_QWORD *)(a1 + 72) = v2;
      return AllianceMemberEntry::decode(v2, (#1225 *)(a1 + 16));
    }

    __int64 __fastcall AllianceMemberMessage::getMessageType(AppleBillingProcessedByServerMessage *this)
    {
      return 24308;
    }

    __int64 __fastcall AllianceMemberMessage::getServiceNodeType(AppleBillingProcessedByServerMessage *this)
    {
      return 11;
    }

    void __fastcall AllianceMemberMessage::destruct(__int64 a1)
    {
      AllianceJoinRequestOkMessage *v2; // x0
      void *v3; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(AllianceJoinRequestOkMessage **)(a1 + 72);
      if ( v2 )
      {
        AllianceMemberEntry::destruct(v2);
        v3 = *(void **)(a1 + 72);
        if ( v3 )
          operator delete(v3);
        *(_QWORD *)(a1 + 72) = 0;
      }
      *(_QWORD *)(a1 + 72) = 0;
    }

    void __fastcall AllianceMemberMessage::~AllianceMemberMessage(AppleBillingProcessedByServerMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceMemberMessage::~AllianceMemberMessage(AppleBillingProcessedByServerMessage *this)
    {
      operator delete(this);
    }

}; // end class AllianceMemberMessage
