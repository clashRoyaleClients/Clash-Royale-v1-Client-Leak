class KeepAliveServerMessage
{
public:

    void __fastcall KeepAliveServerMessage::KeepAliveServerMessage(KeepAliveServerMessage *this)
    {
      *(_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0) = off_10045F2A0;
    }

    void __fastcall KeepAliveServerMessage::encode(StreamEntryFactory *this)
    {
      ;
    }

    void __fastcall KeepAliveServerMessage::decode(StreamEntryFactory *this)
    {
      ;
    }

    __int64 __fastcall KeepAliveServerMessage::getMessageType(StreamEntryFactory *this)
    {
      return 20108;
    }

    __int64 __fastcall KeepAliveServerMessage::getServiceNodeType(StreamEntryFactory *this)
    {
      return 1;
    }

    void __fastcall KeepAliveServerMessage::~KeepAliveServerMessage(StreamEntryFactory *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall KeepAliveServerMessage::~KeepAliveServerMessage(StreamEntryFactory *this)
    {
      operator delete(this);
    }

}; // end class KeepAliveServerMessage
