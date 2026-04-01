class ChangeAllianceSettingsMessage
{
public:

    void __fastcall ChangeAllianceSettingsMessage::ChangeAllianceSettingsMessage(ChangeAllianceSettingsMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_1004716A0;
      v1[11] = 0;
      v1[12] = 0;
      v1[9] = 0;
      v1[10] = 0;
    }

    __int64 __fastcall ChangeAllianceSettingsMessage::encode(LocalNotification *this)
    {
      PiranhaMessage::encode(this);
      ByteStream::writeString((LocalNotification *)((char *)this + 16), *((String **)this + 9));
      ByteStreamHelper::writeDataReference((__int64)this + 16, *((AreaEffectObject **)this + 10));
      ByteStream::writeVInt((LocalNotification *)((char *)this + 16), *((_DWORD *)this + 24));
      ByteStream::writeVInt((LocalNotification *)((char *)this + 16), *((_DWORD *)this + 25));
      return ByteStreamHelper::writeDataReference((__int64)this + 16, *((AreaEffectObject **)this + 11));
    }

    __int64 __fastcall ChangeAllianceSettingsMessage::decode(LocalNotification *this)
    {
      ChallengePopup *v2; // x1
      ChallengePopup *v3; // x1
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_QWORD *)this + 9) = ByteStream::readString((LocalNotification *)((char *)this + 16), 900000);
      *((_QWORD *)this + 10) = ByteStreamHelper::readDataReference((LocalNotification *)((char *)this + 16), v2);
      *((_DWORD *)this + 24) = ByteStream::readVInt((LocalNotification *)((char *)this + 16));
      *((_DWORD *)this + 25) = ByteStream::readVInt((LocalNotification *)((char *)this + 16));
      result = ByteStreamHelper::readDataReference((LocalNotification *)((char *)this + 16), v3);
      *((_QWORD *)this + 11) = result;
      return result;
    }

    __int64 __fastcall ChangeAllianceSettingsMessage::getMessageType(LocalNotification *this)
    {
      return 14316;
    }

    __int64 __fastcall ChangeAllianceSettingsMessage::getServiceNodeType(LocalNotification *this)
    {
      return 11;
    }

    __int64 __fastcall ChangeAllianceSettingsMessage::setAllianceBadgeData(
            __int64 this,
            const LogicUpgradeTowerCommand *a2)
    {
      *(_QWORD *)(this + 80) = a2;
      return this;
    }

    __int64 __fastcall ChangeAllianceSettingsMessage::setAllianceDescription(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 72) = a2;
      return this;
    }

    __int64 __fastcall ChangeAllianceSettingsMessage::setAllianceType(__int64 this, int a2)
    {
      *(_DWORD *)(this + 96) = a2;
      return this;
    }

    void __fastcall ChangeAllianceSettingsMessage::destruct(LocalNotification *this)
    {
      _QWORD *v2; // x19
      void *v3; // x20
      void *v4; // t1
    
      PiranhaMessage::destruct(this);
      v4 = (void *)*((_QWORD *)this + 9);
      v2 = (_QWORD *)((char *)this + 72);
      v3 = v4;
      if ( v4 )
      {
        String::~String();
        operator delete(v3);
      }
      v2[2] = 0;
      v2[3] = 0;
      *v2 = 0;
      v2[1] = 0;
    }

    __int64 __fastcall ChangeAllianceSettingsMessage::setRequiredScore(__int64 this, int a2)
    {
      *(_DWORD *)(this + 100) = a2;
      return this;
    }

    __int64 __fastcall ChangeAllianceSettingsMessage::setRegion(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 88) = a2;
      return result;
    }

    void __fastcall ChangeAllianceSettingsMessage::~ChangeAllianceSettingsMessage(LocalNotification *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ChangeAllianceSettingsMessage::~ChangeAllianceSettingsMessage(LocalNotification *this)
    {
      operator delete(this);
    }

}; // end class ChangeAllianceSettingsMessage
