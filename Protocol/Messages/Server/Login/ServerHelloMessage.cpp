class ServerHelloMessage
{
public:

    __int64 __fastcall ServerHelloMessage::ServerHelloMessage(__int64 a1)
    {
      PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)a1 = off_100476F80;
      *(_QWORD *)(a1 + 72) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      return a1;
    }

    __int64 __fastcall ServerHelloMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((mach_port_name_t *)a1);
      return ByteStream::writeBytes(a1 + 16, *(char **)(a1 + 72), *(_DWORD *)(a1 + 80));
    }

    LogicStringUtil *__fastcall ServerHelloMessage::decode(__int64 a1)
    {
      const char *BytesLength; // x0
      LogicStringUtil *result; // x0
    
      PiranhaMessage::decode((mach_port_name_t *)a1);
      BytesLength = (const char *)ByteStream::readBytesLength((ChallengePopup *)(a1 + 16));
      *(_DWORD *)(a1 + 80) = (_DWORD)BytesLength;
      result = ByteStream::readBytes(a1 + 16, BytesLength, 1000);
      *(_QWORD *)(a1 + 72) = result;
      return result;
    }

    __int64 ServerHelloMessage::getMessageType()
    {
      return 20100;
    }

    __int64 ServerHelloMessage::getServiceNodeType()
    {
      return 1;
    }

    void __fastcall ServerHelloMessage::destruct(__int64 a1)
    {
      __int64 v2; // x0
    
      PiranhaMessage::destruct((mach_port_name_t *)a1);
      v2 = *(_QWORD *)(a1 + 72);
      if ( v2 )
        operator delete[](v2);
      *(_QWORD *)(a1 + 72) = 0;
      *(_DWORD *)(a1 + 80) = 0;
    }

    void ServerHelloMessage::~ServerHelloMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall ServerHelloMessage::~ServerHelloMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class ServerHelloMessage
