class LogicDeviceLinkMenuClosedMessage
{
public:

    void __fastcall LogicDeviceLinkMenuClosedMessage::LogicDeviceLinkMenuClosedMessage(
            LogicDeviceLinkMenuClosedMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_10045F330;
    }

    // attributes: thunk
    __int64 __fastcall LogicDeviceLinkMenuClosedMessage::encode(AllianceEventStreamEntry *this)
    {
      return PiranhaMessage::encode(this);
    }

    // attributes: thunk
    __int64 __fastcall LogicDeviceLinkMenuClosedMessage::decode(AllianceEventStreamEntry *this)
    {
      return PiranhaMessage::decode(this);
    }

    __int64 __fastcall LogicDeviceLinkMenuClosedMessage::getMessageType(AllianceEventStreamEntry *this)
    {
      return 16001;
    }

    __int64 __fastcall LogicDeviceLinkMenuClosedMessage::getServiceNodeType(AllianceEventStreamEntry *this)
    {
      return 1;
    }

    // attributes: thunk
    __int64 __fastcall LogicDeviceLinkMenuClosedMessage::destruct(AllianceEventStreamEntry *this)
    {
      return PiranhaMessage::destruct(this);
    }

    void __fastcall LogicDeviceLinkMenuClosedMessage::~LogicDeviceLinkMenuClosedMessage(AllianceEventStreamEntry *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicDeviceLinkMenuClosedMessage::~LogicDeviceLinkMenuClosedMessage(AllianceEventStreamEntry *this)
    {
      operator delete(this);
    }

}; // end class LogicDeviceLinkMenuClosedMessage
