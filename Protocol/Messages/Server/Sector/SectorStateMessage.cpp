class SectorStateMessage
{
public:

    void __fastcall SectorStateMessage::SectorStateMessage(SectorStateMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage(this, 0) = off_100468310;
    }

    void __fastcall SectorStateMessage::encode(FacebookConnection *this)
    {
      ;
    }

    void __fastcall SectorStateMessage::decode(#949 *this)
    {
      ;
    }

    __int64 __fastcall SectorStateMessage::getMessageType(#949 *this)
    {
      return 21903;
    }

    __int64 __fastcall SectorStateMessage::getServiceNodeType(#949 *this)
    {
      return 16;
    }

    // attributes: thunk
    __int64 __fastcall SectorStateMessage::destruct(#949 *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall SectorStateMessage::~SectorStateMessage(#949 *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall SectorStateMessage::~SectorStateMessage(#949 *this)
    {
      operator delete(this);
    }

}; // end class SectorStateMessage
