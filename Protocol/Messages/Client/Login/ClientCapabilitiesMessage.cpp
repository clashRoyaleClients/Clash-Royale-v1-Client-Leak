class ClientCapabilitiesMessage
{
public:

    __int64 __fastcall ClientCapabilitiesMessage::ClientCapabilitiesMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_10045E0C0;
      *(_DWORD *)(result + 68) = 0;
      return result;
    }

    __int64 __fastcall ClientCapabilitiesMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
    }

    __int64 __fastcall ClientCapabilitiesMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 68) = result;
      return result;
    }

    __int64 ClientCapabilitiesMessage::getMessageType()
    {
      return 10107;
    }

    __int64 __fastcall ClientCapabilitiesMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = 0;
      return result;
    }

    __int64 __fastcall ClientCapabilitiesMessage::setPing(__int64 result, int a2)
    {
      *(_DWORD *)(result + 68) = a2;
      return result;
    }

    void ClientCapabilitiesMessage::~ClientCapabilitiesMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall ClientCapabilitiesMessage::~ClientCapabilitiesMessage(void *a1)
    {
      operator delete(a1);
    }

    __int64 ClientCapabilitiesMessage::getServiceNodeType()
    {
      return 1;
    }

}; // end class ClientCapabilitiesMessage
