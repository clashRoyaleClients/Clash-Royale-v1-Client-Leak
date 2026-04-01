class StreamEntryFactory
{
public:

    DonateStreamEntry *__fastcall StreamEntryFactory::createStreamEntryByType(int a1)
    {
      DonateStreamEntry *v1; // x19
    
      v1 = 0;
      switch ( a1 )
      {
        case 1:
          v1 = (DonateStreamEntry *)operator new(88);
          DonateStreamEntry::DonateStreamEntry(v1);
          break;
        case 2:
          v1 = (DonateStreamEntry *)operator new(64);
          ChatStreamEntry::ChatStreamEntry(v1);
          break;
        case 3:
          v1 = (DonateStreamEntry *)operator new(80);
          JoinRequestAllianceStreamEntry::JoinRequestAllianceStreamEntry(v1);
          break;
        case 4:
          v1 = (DonateStreamEntry *)operator new(80);
          AllianceEventStreamEntry::AllianceEventStreamEntry(v1);
          break;
        case 5:
          v1 = (DonateStreamEntry *)operator new(136);
          ReplayStreamEntry::ReplayStreamEntry(v1);
          break;
        case 6:
          v1 = (DonateStreamEntry *)operator new(104);
          CoOpenStreamEntry::CoOpenStreamEntry(v1);
          break;
        case 10:
          v1 = (DonateStreamEntry *)operator new(80);
          ChallengeStreamEntry::ChallengeStreamEntry(v1);
          break;
        case 11:
          v1 = (DonateStreamEntry *)operator new(96);
          ChallengeDoneStreamEntry::ChallengeDoneStreamEntry(v1);
          break;
        default:
          return v1;
      }
      return v1;
    }

}; // end class StreamEntryFactory
