class AvatarNameCheckRequestMessage
{
public:

    _QWORD *__fastcall AvatarNameCheckRequestMessage::AvatarNameCheckRequestMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10046C208;
      result[9] = 0;
      return result;
    }

    void __fastcall AvatarNameCheckRequestMessage::destruct(__int64 a1)
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

    __int64 __fastcall AvatarNameCheckRequestMessage::setName(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    __int64 __fastcall AvatarNameCheckRequestMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 72));
    }

    __int64 __fastcall AvatarNameCheckRequestMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      *(_QWORD *)(a1 + 72) = result;
      return result;
    }

    __int64 __fastcall AvatarNameCheckRequestMessage::getMessageType(LogicDeviceLinkResponseMessage *this)
    {
      return 14600;
    }

    __int64 __fastcall AvatarNameCheckRequestMessage::getServiceNodeType(LogicDeviceLinkResponseMessage *this)
    {
      return 9;
    }

    void __fastcall AvatarNameCheckRequestMessage::~AvatarNameCheckRequestMessage(LogicDeviceLinkResponseMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AvatarNameCheckRequestMessage::~AvatarNameCheckRequestMessage(LogicDeviceLinkResponseMessage *this)
    {
      operator delete(this);
    }

}; // end class AvatarNameCheckRequestMessage
