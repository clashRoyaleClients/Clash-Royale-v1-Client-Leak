class ChatToAllianceStreamMessage
{
public:

    _QWORD *__fastcall ChatToAllianceStreamMessage::ChatToAllianceStreamMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100471948;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall ChatToAllianceStreamMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 72));
    }

    __int64 __fastcall ChatToAllianceStreamMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      *(_QWORD *)(a1 + 72) = result;
      return result;
    }

    __int64 __fastcall ChatToAllianceStreamMessage::getMessageType(FriendItem *this)
    {
      return 14315;
    }

    __int64 __fastcall ChatToAllianceStreamMessage::setMessage(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 72) = a2;
      return this;
    }

    __int64 __fastcall ChatToAllianceStreamMessage::getServiceNodeType(FriendItem *this)
    {
      return 11;
    }

    void __fastcall ChatToAllianceStreamMessage::destruct(__int64 a1)
    {
      void *v2; // x20
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 72) = 0;
    }

    void ChatToAllianceStreamMessage::~ChatToAllianceStreamMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall ChatToAllianceStreamMessage::~ChatToAllianceStreamMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class ChatToAllianceStreamMessage
