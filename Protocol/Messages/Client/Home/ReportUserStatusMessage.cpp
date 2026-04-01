class ReportUserStatusMessage
{
public:

    void __fastcall ReportUserStatusMessage::ReportUserStatusMessage(ReportUserStatusMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_10045EAD8;
      *(_QWORD *)((char *)v1 + 68) = 0;
    }

    __int64 __fastcall ReportUserStatusMessage::encode(GetCurrentBattleReplayDataMessage *this)
    {
      PiranhaMessage::encode(this);
      ByteStream::writeVInt((GetCurrentBattleReplayDataMessage *)((char *)this + 16), *((_DWORD *)this + 17));
      return ByteStream::writeVInt((GetCurrentBattleReplayDataMessage *)((char *)this + 16), *((_DWORD *)this + 18));
    }

    __int64 __fastcall ReportUserStatusMessage::decode(GetCurrentBattleReplayDataMessage *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_DWORD *)this + 17) = ByteStream::readVInt((GetCurrentBattleReplayDataMessage *)((char *)this + 16));
      result = ByteStream::readVInt((GetCurrentBattleReplayDataMessage *)((char *)this + 16));
      *((_DWORD *)this + 18) = result;
      return result;
    }

    __int64 __fastcall ReportUserStatusMessage::destruct(GetCurrentBattleReplayDataMessage *this)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct(this);
      *(_QWORD *)((char *)this + 68) = 0;
      return result;
    }

    void __fastcall ReportUserStatusMessage::~ReportUserStatusMessage(GetCurrentBattleReplayDataMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ReportUserStatusMessage::~ReportUserStatusMessage(GetCurrentBattleReplayDataMessage *this)
    {
      operator delete(this);
    }

    __int64 __fastcall ReportUserStatusMessage::getServiceNodeType(GetCurrentBattleReplayDataMessage *this)
    {
      return 1;
    }

    __int64 __fastcall ReportUserStatusMessage::getMessageType(GetCurrentBattleReplayDataMessage *this)
    {
      return 20117;
    }

}; // end class ReportUserStatusMessage
