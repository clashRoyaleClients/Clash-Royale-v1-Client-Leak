class MatchmakeFailedMessage
{
public:

    __int64 __fastcall MatchmakeFailedMessage::MatchmakeFailedMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_100466800;
      *(_DWORD *)(result + 68) = -1;
      return result;
    }

    __int64 __fastcall MatchmakeFailedMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeInt((ByteStream *)(a1 + 16), *(_DWORD *)(a1 + 68));
    }

    __int64 __fastcall MatchmakeFailedMessage::decode(NewItemIndicators *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readInt((NewItemIndicators *)((char *)this + 16));
      *((_DWORD *)this + 17) = result;
      return result;
    }

    __int64 __fastcall MatchmakeFailedMessage::getMessageType(NewItemIndicators *this)
    {
      return 24108;
    }

    __int64 __fastcall MatchmakeFailedMessage::getServiceNodeType(NewItemIndicators *this)
    {
      return 10;
    }

    __int64 __fastcall MatchmakeFailedMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = -1;
      return result;
    }

    void __fastcall MatchmakeFailedMessage::~MatchmakeFailedMessage(NewItemIndicators *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall MatchmakeFailedMessage::~MatchmakeFailedMessage(NewItemIndicators *this)
    {
      operator delete(this);
    }

}; // end class MatchmakeFailedMessage
