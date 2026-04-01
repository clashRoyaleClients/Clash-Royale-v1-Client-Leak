class AllianceMemberRemovedMessage
{
public:

    void __fastcall AllianceMemberRemovedMessage::AllianceMemberRemovedMessage(AllianceMemberRemovedMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100470350;
      v1[9] = 0;
    }

    __int64 __fastcall AllianceMemberRemovedMessage::encode(UpgradeSpellPopup::Stat *this)
    {
      PiranhaMessage::encode(this);
      return ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
    }

    __int64 __fastcall AllianceMemberRemovedMessage::decode(UpgradeSpellPopup::Stat *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readLong((UpgradeSpellPopup::Stat *)((char *)this + 16));
      *((_QWORD *)this + 9) = result;
      return result;
    }

    __int64 __fastcall AllianceMemberRemovedMessage::getMessageType(UpgradeSpellPopup::Stat *this)
    {
      return 24309;
    }

    __int64 __fastcall AllianceMemberRemovedMessage::getServiceNodeType(UpgradeSpellPopup::Stat *this)
    {
      return 11;
    }

    void __fastcall AllianceMemberRemovedMessage::destruct(UpgradeSpellPopup::Stat *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall AllianceMemberRemovedMessage::~AllianceMemberRemovedMessage(UpgradeSpellPopup::Stat *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AllianceMemberRemovedMessage::~AllianceMemberRemovedMessage(UpgradeSpellPopup::Stat *this)
    {
      operator delete(this);
    }

}; // end class AllianceMemberRemovedMessage
