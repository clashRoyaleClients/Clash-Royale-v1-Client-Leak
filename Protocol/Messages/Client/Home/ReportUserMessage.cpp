class ReportUserMessage
{
public:

    void __fastcall ReportUserMessage::ReportUserMessage(ReportUserMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_100464070;
      *(_DWORD *)(v1 + 68) = 0;
      *(_QWORD *)(v1 + 72) = 0;
    }

    __int64 __fastcall ReportUserMessage::encode(Track *this)
    {
      const #1236 *v2; // x2
    
      PiranhaMessage::encode(this);
      ByteStream::writeVInt((Track *)((char *)this + 16), *((_DWORD *)this + 17));
      return ByteStreamHelper::encodeLogicLong((Track *)((char *)this + 16), *((#1226 **)this + 9), v2);
    }

    __int64 __fastcall ReportUserMessage::decode(Track *this)
    {
      LogicLong *v2; // x21
      LogicLong *v3; // x2
    
      PiranhaMessage::decode(this);
      *((_DWORD *)this + 17) = ByteStream::readVInt((Track *)((char *)this + 16));
      v2 = (LogicLong *)operator new(8);
      LogicLong::LogicLong(v2);
      *((_QWORD *)this + 9) = v2;
      return ByteStreamHelper::decodeLogicLong((Track *)((char *)this + 16), v2, v3);
    }

    void __fastcall ReportUserMessage::destruct(Track *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_DWORD *)this + 17) = 0;
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall ReportUserMessage::~ReportUserMessage(Track *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ReportUserMessage::~ReportUserMessage(Track *this)
    {
      operator delete(this);
    }

    __int64 __fastcall ReportUserMessage::getServiceNodeType(Track *this)
    {
      return 1;
    }

    __int64 __fastcall ReportUserMessage::getMessageType(Track *this)
    {
      return 10117;
    }

}; // end class ReportUserMessage
