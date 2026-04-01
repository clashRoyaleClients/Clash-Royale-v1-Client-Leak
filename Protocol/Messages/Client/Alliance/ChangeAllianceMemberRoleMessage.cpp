class ChangeAllianceMemberRoleMessage
{
public:

    __int64 __fastcall ChangeAllianceMemberRoleMessage::ChangeAllianceMemberRoleMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_100469860;
      *(_QWORD *)(result + 72) = 0;
      *(_DWORD *)(result + 80) = 0;
      return result;
    }

    __int64 __fastcall ChangeAllianceMemberRoleMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 72));
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 80));
    }

    __int64 __fastcall ChangeAllianceMemberRoleMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_QWORD *)(a1 + 72) = ByteStream::readLong((ByteStream *)(a1 + 16));
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 80) = result;
      return result;
    }

    __int64 ChangeAllianceMemberRoleMessage::getMessageType()
    {
      return 14306;
    }

    __int64 ChangeAllianceMemberRoleMessage::getServiceNodeType()
    {
      return 11;
    }

    __int64 __fastcall ChangeAllianceMemberRoleMessage::setNewRole(__int64 result, int a2)
    {
      *(_DWORD *)(result + 80) = a2;
      return result;
    }

    bool __fastcall ChangeAllianceMemberRoleMessage::hasRights(
            int a1,
            AllianceJoinRequestOkMessage *a2,
            AllianceJoinRequestOkMessage *a3)
    {
      _BOOL8 result; // x0
    
      if ( !AllianceMemberEntry::hasLowerRole(a2, a1) )
        return 0;
      if ( a1 != (_DWORD)a3 )
        return AllianceMemberEntry::hasLowerRole(a3, a1);
      result = 1;
      if ( a1 != 2 && a1 != 4 )
        return AllianceMemberEntry::hasLowerRole(a3, a1);
      return result;
    }

    __int64 __fastcall ChangeAllianceMemberRoleMessage::setMemberAvatarId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    void __fastcall ChangeAllianceMemberRoleMessage::destruct(__int64 a1)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 72) = 0;
      *(_DWORD *)(a1 + 80) = 0;
    }

    void ChangeAllianceMemberRoleMessage::~ChangeAllianceMemberRoleMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall ChangeAllianceMemberRoleMessage::~ChangeAllianceMemberRoleMessage(SpellInfoPopup::InfoCard *this)
    {
      operator delete(this);
    }

}; // end class ChangeAllianceMemberRoleMessage
