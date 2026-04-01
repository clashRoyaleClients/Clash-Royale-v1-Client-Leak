class DonationReceivedStreamEntry
{
public:

    void __fastcall DonationReceivedStreamEntry::DonationReceivedStreamEntry(AvatarStreamEntry *a1)
    {
      __int64 v1; // x0
    
      AvatarStreamEntry::AvatarStreamEntry(a1);
      *(_QWORD *)v1 = off_100467BF0;
      *(_QWORD *)(v1 + 48) = 0;
      *(_DWORD *)(v1 + 56) = 0;
    }

    __int64 __fastcall DonationReceivedStreamEntry::encode(__int64 a1, #1226 *a2)
    {
      AvatarStreamEntry::encode((LogicStartMatchmakeCommand *)a1, a2);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 56));
      return ByteStreamHelper::writeDataReference((int)a2, *(AreaEffectObject **)(a1 + 48));
    }

    __int64 __fastcall DonationReceivedStreamEntry::decode(__int64 a1, ByteStreamHelper *a2)
    {
      int v4; // w2
      __int64 result; // x0
    
      AvatarStreamEntry::decode(a1, (__int64)a2);
      *(_DWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(ByteStreamHelper *))(*(_QWORD *)a2 + 152LL))(a2);
      result = ByteStreamHelper::readDataReference(a2, (ByteStream *)7, v4);
      *(_QWORD *)(a1 + 48) = result;
      return result;
    }

    __int64 __fastcall DonationReceivedStreamEntry::getStreamEntryType(ChestOpenAnimationPopup *this)
    {
      return 7;
    }

    __int64 __fastcall DonationReceivedStreamEntry::destruct(ChestOpenAnimationPopup *this)
    {
      __int64 result; // x0
    
      result = AvatarStreamEntry::destruct(this);
      *((_QWORD *)this + 6) = 0;
      *((_DWORD *)this + 14) = 0;
      return result;
    }

    void __fastcall DonationReceivedStreamEntry::~DonationReceivedStreamEntry(ChestOpenAnimationPopup *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall DonationReceivedStreamEntry::~DonationReceivedStreamEntry(ChestOpenAnimationPopup *this)
    {
      operator delete(this);
    }

}; // end class DonationReceivedStreamEntry
