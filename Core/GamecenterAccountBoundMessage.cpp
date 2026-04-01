class GamecenterAccountBoundMessage
{
public:

    __int64 __fastcall GamecenterAccountBoundMessage::GamecenterAccountBoundMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_10046E6C0;
      *(_DWORD *)(result + 68) = -1;
      *(_QWORD *)(result + 72) = 0;
      return result;
    }

    __int64 __fastcall GamecenterAccountBoundMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
      return ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 72));
    }

    __int64 __fastcall GamecenterAccountBoundMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = ByteStream::readVInt((#1225 *)(a1 + 16));
      result = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      *(_QWORD *)(a1 + 72) = result;
      return result;
    }

    __int64 __fastcall GamecenterAccountBoundMessage::getMessageType(LoginOkMessage *this)
    {
      return 24211;
    }

    __int64 __fastcall GamecenterAccountBoundMessage::getServiceNodeType(LoginOkMessage *this)
    {
      return 10;
    }

    void __fastcall GamecenterAccountBoundMessage::destruct(__int64 a1)
    {
      void *v2; // x20
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *(_DWORD *)(a1 + 68) = -1;
      *(_QWORD *)(a1 + 72) = 0;
    }

    void __fastcall GamecenterAccountBoundMessage::~GamecenterAccountBoundMessage(LoginOkMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall GamecenterAccountBoundMessage::~GamecenterAccountBoundMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class GamecenterAccountBoundMessage
