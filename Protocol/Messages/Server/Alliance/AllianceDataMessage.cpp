class AllianceDataMessage
{
public:

    _QWORD *__fastcall AllianceDataMessage::AllianceDataMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10046AEC0;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall AllianceDataMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return AllianceFullEntry::encode(*(Rect **)(a1 + 72), (#1225 *)(a1 + 16));
    }

    __int64 __fastcall AllianceDataMessage::decode(__int64 a1)
    {
      Rect *v2; // x20
    
      PiranhaMessage::decode((#1242 *)a1);
      v2 = (Rect *)operator new(40);
      AllianceFullEntry::AllianceFullEntry(v2);
      *(_QWORD *)(a1 + 72) = v2;
      return AllianceFullEntry::decode(v2, (#1225 *)(a1 + 16));
    }

    __int64 __fastcall AllianceDataMessage::getMessageType(NameChangeSubScreen *this)
    {
      return 24301;
    }

    __int64 __fastcall AllianceDataMessage::getServiceNodeType(NameChangeSubScreen *this)
    {
      return 11;
    }

    __int64 __fastcall AllianceDataMessage::removeAllianceFullEntry(NameChangeSubScreen *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    __int64 __fastcall AllianceDataMessage::setAllianceFullEntry(__int64 this, Rect *a2)
    {
      *(_QWORD *)(this + 72) = a2;
      return this;
    }

    void __fastcall AllianceDataMessage::destruct(NameChangeSubScreen *this)
    {
      Rect *v2; // x0
      void *v3; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (Rect *)*((_QWORD *)this + 9);
      if ( v2 )
      {
        AllianceFullEntry::destruct(v2);
        v3 = (void *)*((_QWORD *)this + 9);
        if ( v3 )
          operator delete(v3);
        *((_QWORD *)this + 9) = 0;
      }
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall AllianceDataMessage::~AllianceDataMessage(NameChangeSubScreen *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceDataMessage::~AllianceDataMessage(NameChangeSubScreen *this)
    {
      operator delete(this);
    }

}; // end class AllianceDataMessage
