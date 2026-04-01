class StopHomeLogicMessage
{
public:

    void __fastcall StopHomeLogicMessage::StopHomeLogicMessage(StopHomeLogicMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_100463248;
    }

    // attributes: thunk
    __int64 __fastcall StopHomeLogicMessage::encode(ReplayStreamEntry *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall StopHomeLogicMessage::decode(ReplayStreamEntry *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall StopHomeLogicMessage::getMessageType(ReplayStreamEntry *this)
    {
      return 24106;
    }

    __int64 __fastcall StopHomeLogicMessage::getServiceNodeType(ReplayStreamEntry *this)
    {
      return 9;
    }

    // attributes: thunk
    __int64 __fastcall StopHomeLogicMessage::destruct(#1242 *a1)
    {
      return PiranhaMessage::destruct(a1);
    }

    void StopHomeLogicMessage::~StopHomeLogicMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall StopHomeLogicMessage::~StopHomeLogicMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class StopHomeLogicMessage
