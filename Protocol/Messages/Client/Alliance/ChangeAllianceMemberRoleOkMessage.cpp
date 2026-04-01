class ChangeAllianceMemberRoleOkMessage
{
public:

    void __fastcall ChangeAllianceMemberRoleOkMessage::ChangeAllianceMemberRoleOkMessage(
            ChangeAllianceMemberRoleOkMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_10045F680;
      *(_QWORD *)(v1 + 72) = 0;
      *(_DWORD *)(v1 + 80) = 0;
    }

    __int64 __fastcall ChangeAllianceMemberRoleOkMessage::encode(GameButton *this)
    {
      PiranhaMessage::encode(this);
      ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
      return ByteStream::writeVInt((GameButton *)((char *)this + 16), *((_DWORD *)this + 20));
    }

    __int64 __fastcall ChangeAllianceMemberRoleOkMessage::decode(GameButton *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_QWORD *)this + 9) = ByteStream::readLong((GameButton *)((char *)this + 16));
      result = ByteStream::readVInt((GameButton *)((char *)this + 16));
      *((_DWORD *)this + 20) = result;
      return result;
    }

    __int64 __fastcall ChangeAllianceMemberRoleOkMessage::getMessageType(GameButton *this)
    {
      return 24306;
    }

    __int64 __fastcall ChangeAllianceMemberRoleOkMessage::getServiceNodeType(GameButton *this)
    {
      return 11;
    }

    void __fastcall ChangeAllianceMemberRoleOkMessage::destruct(GameButton *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
      *((_DWORD *)this + 20) = 0;
    }

    void __fastcall ChangeAllianceMemberRoleOkMessage::~ChangeAllianceMemberRoleOkMessage(GameButton *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ChangeAllianceMemberRoleOkMessage::~ChangeAllianceMemberRoleOkMessage(GameButton *this)
    {
      operator delete(this);
    }

}; // end class ChangeAllianceMemberRoleOkMessage
