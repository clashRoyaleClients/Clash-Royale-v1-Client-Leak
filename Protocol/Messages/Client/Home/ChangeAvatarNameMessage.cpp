class ChangeAvatarNameMessage
{
public:

    __int64 __fastcall ChangeAvatarNameMessage::ChangeAvatarNameMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_1004667B8;
      *(_QWORD *)(result + 72) = 0;
      *(_BYTE *)(result + 80) = 0;
      return result;
    }

    __int64 __fastcall ChangeAvatarNameMessage::setAvatarName(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 72) = a2;
      return this;
    }

    __int64 __fastcall ChangeAvatarNameMessage::setNameSetByUser(__int64 this, char a2)
    {
      *(_BYTE *)(this + 80) = a2;
      return this;
    }

    __int64 __fastcall ChangeAvatarNameMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 72));
      return ByteStream::writeBoolean((ByteStream *)(a1 + 16), *(_BYTE *)(a1 + 80));
    }

    __int64 __fastcall ChangeAvatarNameMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_QWORD *)(a1 + 72) = ByteStream::readString((ByteStream *)(a1 + 16), 60);
      result = ByteStream::readBoolean((ByteStream *)(a1 + 16));
      *(_BYTE *)(a1 + 80) = result;
      return result;
    }

    __int64 __fastcall ChangeAvatarNameMessage::getMessageType(AccountConfirmPopup *this)
    {
      return 10212;
    }

    __int64 __fastcall ChangeAvatarNameMessage::getServiceNodeType(AccountConfirmPopup *this)
    {
      return 9;
    }

    void __fastcall ChangeAvatarNameMessage::destruct(__int64 a1)
    {
      void *v2; // x20
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
      {
        String::~String(*(String **)(a1 + 72));
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 72) = 0;
      *(_BYTE *)(a1 + 80) = 0;
    }

    void __fastcall ChangeAvatarNameMessage::~ChangeAvatarNameMessage(AccountConfirmPopup *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ChangeAvatarNameMessage::~ChangeAvatarNameMessage(AccountConfirmPopup *this)
    {
      operator delete(this);
    }

}; // end class ChangeAvatarNameMessage
