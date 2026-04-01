class ChatAccountBanStatusMessage
{
public:

    void __fastcall ChatAccountBanStatusMessage::ChatAccountBanStatusMessage(ChatAccountBanStatusMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_100461FD8;
      *(_DWORD *)(v1 + 68) = 0;
    }

    __int64 __fastcall ChatAccountBanStatusMessage::encode(LogicBattleLogPlayer *this)
    {
      return ByteStream::writeVInt((LogicBattleLogPlayer *)((char *)this + 16), *((_DWORD *)this + 17));
    }

    __int64 __fastcall ChatAccountBanStatusMessage::decode(LogicBattleLogPlayer *this)
    {
      __int64 result; // x0
    
      result = ByteStream::readVInt((LogicBattleLogPlayer *)((char *)this + 16));
      *((_DWORD *)this + 17) = result;
      return result;
    }

    __int64 __fastcall ChatAccountBanStatusMessage::destruct(LogicBattleLogPlayer *this)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct(this);
      *((_DWORD *)this + 17) = 0;
      return result;
    }

    void __fastcall ChatAccountBanStatusMessage::~ChatAccountBanStatusMessage(LogicBattleLogPlayer *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ChatAccountBanStatusMessage::~ChatAccountBanStatusMessage(LogicBattleLogPlayer *this)
    {
      operator delete(this);
    }

    __int64 __fastcall ChatAccountBanStatusMessage::getServiceNodeType(LogicBattleLogPlayer *this)
    {
      return 1;
    }

    __int64 __fastcall ChatAccountBanStatusMessage::getMessageType(LogicBattleLogPlayer *this)
    {
      return 20118;
    }

}; // end class ChatAccountBanStatusMessage
