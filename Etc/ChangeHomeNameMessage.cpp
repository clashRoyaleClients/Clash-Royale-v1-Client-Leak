class ChangeHomeNameMessage
{
public:

    void __fastcall ChangeHomeNameMessage::ChangeHomeNameMessage(ChangeHomeNameMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_1004678C0;
      v1[9] = 0;
    }

    __int64 __fastcall ChangeHomeNameMessage::encode(AvatarOnlineStatusUpdated *this)
    {
      PiranhaMessage::encode(this);
      return ByteStream::writeString((AvatarOnlineStatusUpdated *)((char *)this + 16), *((String **)this + 9));
    }

    __int64 __fastcall ChangeHomeNameMessage::decode(AvatarOnlineStatusUpdated *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readString((AvatarOnlineStatusUpdated *)((char *)this + 16), 900000);
      *((_QWORD *)this + 9) = result;
      return result;
    }

    __int64 __fastcall ChangeHomeNameMessage::getMessageType(AvatarOnlineStatusUpdated *this)
    {
      return 14108;
    }

    __int64 __fastcall ChangeHomeNameMessage::getServiceNodeType(AvatarOnlineStatusUpdated *this)
    {
      return 9;
    }

    void __fastcall ChangeHomeNameMessage::destruct(__int64 a1)
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

    void __fastcall ChangeHomeNameMessage::~ChangeHomeNameMessage(AvatarOnlineStatusUpdated *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ChangeHomeNameMessage::~ChangeHomeNameMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class ChangeHomeNameMessage
