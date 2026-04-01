class DeviceLinkedStreamEntry
{
public:

    void __fastcall DeviceLinkedStreamEntry::DeviceLinkedStreamEntry(DeviceLinkedStreamEntry *this)
    {
      _QWORD *v1; // x0
    
      AvatarStreamEntry::AvatarStreamEntry(this);
      *v1 = off_10045F460;
    }

    // attributes: thunk
    __int64 __fastcall DeviceLinkedStreamEntry::encode(ChatStreamEntry *this, #1226 *a2)
    {
      return AvatarStreamEntry::encode(this, a2);
    }

    // attributes: thunk
    __int64 __fastcall DeviceLinkedStreamEntry::decode(__int64 this, __int64 a2)
    {
      return AvatarStreamEntry::decode(this, a2);
    }

    // attributes: thunk
    __int64 __fastcall DeviceLinkedStreamEntry::destruct(ChatStreamEntry *this)
    {
      return AvatarStreamEntry::destruct(this);
    }

    void __fastcall DeviceLinkedStreamEntry::~DeviceLinkedStreamEntry(ChatStreamEntry *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall DeviceLinkedStreamEntry::~DeviceLinkedStreamEntry(ChatStreamEntry *this)
    {
      operator delete(this);
    }

    __int64 __fastcall DeviceLinkedStreamEntry::getStreamEntryType(ChatStreamEntry *this)
    {
      return 9;
    }

}; // end class DeviceLinkedStreamEntry
