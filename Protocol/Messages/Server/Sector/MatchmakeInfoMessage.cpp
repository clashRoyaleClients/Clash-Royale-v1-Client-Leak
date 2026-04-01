class MatchmakeInfoMessage
{
public:

    void __fastcall MatchmakeInfoMessage::MatchmakeInfoMessage(MatchmakeInfoMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_10045E9A0;
      *(_DWORD *)(v1 + 68) = -1;
    }

    __int64 __fastcall MatchmakeInfoMessage::encode(CancelMatchmakeMessage *this)
    {
      PiranhaMessage::encode(this);
      return ByteStream::writeInt((CancelMatchmakeMessage *)((char *)this + 16), *((_DWORD *)this + 17));
    }

    __int64 __fastcall MatchmakeInfoMessage::decode(CancelMatchmakeMessage *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readInt((CancelMatchmakeMessage *)((char *)this + 16));
      *((_DWORD *)this + 17) = result;
      return result;
    }

    __int64 __fastcall MatchmakeInfoMessage::getMessageType(CancelMatchmakeMessage *this)
    {
      return 24107;
    }

    __int64 __fastcall MatchmakeInfoMessage::getServiceNodeType(CancelMatchmakeMessage *this)
    {
      return 10;
    }

    __int64 __fastcall MatchmakeInfoMessage::destruct(CancelMatchmakeMessage *this)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct(this);
      *((_DWORD *)this + 17) = -1;
      return result;
    }

    __int64 __fastcall MatchmakeInfoMessage::getEstimatedDuration(CancelMatchmakeMessage *this)
    {
      return *((unsigned int *)this + 17);
    }

    void __fastcall MatchmakeInfoMessage::~MatchmakeInfoMessage(CancelMatchmakeMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall MatchmakeInfoMessage::~MatchmakeInfoMessage(CancelMatchmakeMessage *this)
    {
      operator delete(this);
    }

}; // end class MatchmakeInfoMessage
