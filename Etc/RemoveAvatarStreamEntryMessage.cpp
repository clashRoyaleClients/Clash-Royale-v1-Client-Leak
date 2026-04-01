class RemoveAvatarStreamEntryMessage
{
public:

    _QWORD *__fastcall RemoveAvatarStreamEntryMessage::RemoveAvatarStreamEntryMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10046FED8;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall RemoveAvatarStreamEntryMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 72));
    }

    __int64 __fastcall RemoveAvatarStreamEntryMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readLong((ByteStream *)(a1 + 16));
      *(_QWORD *)(a1 + 72) = result;
      return result;
    }

    __int64 __fastcall RemoveAvatarStreamEntryMessage::setStreamEntryId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    __int64 __fastcall RemoveAvatarStreamEntryMessage::getMessageType(ShopPage *this)
    {
      return 14418;
    }

    __int64 __fastcall RemoveAvatarStreamEntryMessage::getServiceNodeType(ShopPage *this)
    {
      return 9;
    }

    void __fastcall RemoveAvatarStreamEntryMessage::destruct(ShopPage *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall RemoveAvatarStreamEntryMessage::~RemoveAvatarStreamEntryMessage(ShopPage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall RemoveAvatarStreamEntryMessage::~RemoveAvatarStreamEntryMessage(ShopPage *this)
    {
      operator delete(this);
    }

}; // end class RemoveAvatarStreamEntryMessage
