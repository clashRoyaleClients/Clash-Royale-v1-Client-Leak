class AvatarStreamEntryFactory
{
public:

    BattleReportStreamEntry *__fastcall AvatarStreamEntryFactory::createStreamEntryByType(#1341 *this)
    {
      BattleReportStreamEntry *v1; // x19
    
      v1 = 0;
      switch ( (int)this )
      {
        case 1:
          v1 = (BattleReportStreamEntry *)operator new(96);
          BattleReportStreamEntry::BattleReportStreamEntry(v1, 1);
          break;
        case 2:
          v1 = (BattleReportStreamEntry *)operator new(96);
          BattleReportStreamEntry::BattleReportStreamEntry(v1, 2);
          break;
        case 3:
          v1 = (BattleReportStreamEntry *)operator new(96);
          JoinAllianceResponseAvatarStreamEntry::JoinAllianceResponseAvatarStreamEntry(v1);
          break;
        case 4:
          v1 = (BattleReportStreamEntry *)operator new(80);
          AllianceInvitationAvatarStreamEntry::AllianceInvitationAvatarStreamEntry(v1);
          break;
        case 5:
          v1 = (BattleReportStreamEntry *)operator new(88);
          AllianceKickOutStreamEntry::AllianceKickOutStreamEntry(v1);
          break;
        case 6:
          v1 = (BattleReportStreamEntry *)operator new(96);
          AllianceMailAvatarStreamEntry::AllianceMailAvatarStreamEntry(v1);
          break;
        case 7:
          v1 = (BattleReportStreamEntry *)operator new(64);
          DonationReceivedStreamEntry::DonationReceivedStreamEntry(v1);
          break;
        case 9:
          v1 = (BattleReportStreamEntry *)operator new(48);
          DeviceLinkedStreamEntry::DeviceLinkedStreamEntry(v1);
          break;
        default:
          return v1;
      }
      return v1;
    }

}; // end class AvatarStreamEntryFactory
