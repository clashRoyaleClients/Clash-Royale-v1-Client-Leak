class OfferChestForCoOpenMessage
{
public:

    void __fastcall OfferChestForCoOpenMessage::OfferChestForCoOpenMessage(OfferChestForCoOpenMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_100463490;
      *(_DWORD *)(v1 + 68) = -1;
      *(_QWORD *)(v1 + 72) = 0;
    }

    __int64 __fastcall OfferChestForCoOpenMessage::encode(LeaveAllianceMessage *this)
    {
      PiranhaMessage::encode(this);
      ByteStream::writeVInt((LeaveAllianceMessage *)((char *)this + 16), *((_DWORD *)this + 17));
      return ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
    }

    __int64 __fastcall OfferChestForCoOpenMessage::decode(LeaveAllianceMessage *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_DWORD *)this + 17) = ByteStream::readVInt((LeaveAllianceMessage *)((char *)this + 16));
      result = ByteStream::readLong((LeaveAllianceMessage *)((char *)this + 16));
      *((_QWORD *)this + 9) = result;
      return result;
    }

    __int64 __fastcall OfferChestForCoOpenMessage::getMessageType(LeaveAllianceMessage *this)
    {
      return 14319;
    }

    __int64 __fastcall OfferChestForCoOpenMessage::getServiceNodeType(LeaveAllianceMessage *this)
    {
      return 11;
    }

    void __fastcall OfferChestForCoOpenMessage::destruct(LeaveAllianceMessage *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_DWORD *)this + 17) = -1;
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall OfferChestForCoOpenMessage::~OfferChestForCoOpenMessage(LeaveAllianceMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall OfferChestForCoOpenMessage::~OfferChestForCoOpenMessage(LeaveAllianceMessage *this)
    {
      operator delete(this);
    }

}; // end class OfferChestForCoOpenMessage
