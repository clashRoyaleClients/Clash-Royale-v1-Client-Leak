class LogicDonationHelper
{
public:

    __int64 __fastcall LogicDonationHelper::getTotalDonationCapacity(__int64 a1)
    {
      __int64 v2; // x21
      __int64 v3; // x20
    
      if ( !a1 || *(int *)(a1 + 12) < 1 )
        return 0;
      v2 = 0;
      LODWORD(v3) = 0;
      do
        v3 = (unsigned int)DonationContainer::getDonationCapacity(*(_QWORD *)(*(_QWORD *)a1 + 8 * v2++)) + (unsigned int)v3;
      while ( v2 < *(int *)(a1 + 12) );
      return v3;
    }

    __int64 __fastcall LogicDonationHelper::addDonation(__int64 a1, __int64 a2, char *a3)
    {
      long double v6; // q0
      __int64 v7; // x23
      DonationContainer *v8; // x22
      __int64 AvatarId; // x0
      DonationContainer *v10; // x22
      LogicLong *v11; // x0
      DonationContainer *v13; // [xsp+8h] [xbp-38h] BYREF
    
      *(__n128 *)&v6 = Debugger::doAssert((Debugger *)(a1 != 0), (bool)"pDonations cannot be null", a3);
      if ( *(int *)(a1 + 12) < 1 )
      {
    LABEL_5:
        v10 = (DonationContainer *)operator new(16);
        v11 = (LogicLong *)LogicLong::clone(a2);
        DonationContainer::DonationContainer(v10, v11);
        v13 = v10;
        DonationContainer::addUnit(v10, (const LogicSpellData *)a3);
        LogicArrayList<DonationContainer *>::add(a1, &v13);
      }
      else
      {
        v7 = 0;
        while ( 1 )
        {
          v8 = *(DonationContainer **)(*(_QWORD *)a1 + 8 * v7);
          AvatarId = DonationContainer::getAvatarId(v8, v6);
          if ( (unsigned int)LogicLong::equals(AvatarId, a2) )
            break;
          if ( ++v7 >= *(int *)(a1 + 12) )
            goto LABEL_5;
        }
        DonationContainer::addUnit(v8, (const LogicSpellData *)a3);
      }
      return LogicSpellData::getDonateCapacity((InitState *)a3);
    }

    __int64 __fastcall LogicDonationHelper::removeDonation(__int64 a1, __int64 a2, const char *a3)
    {
      long double v6; // q0
      __int64 v7; // x23
      DonationContainer *v8; // x22
      __int64 AvatarId; // x0
    
      *(__n128 *)&v6 = Debugger::doAssert((Debugger *)(a1 != 0), (bool)"pDonations cannot be null", a3);
      if ( *(int *)(a1 + 12) < 1 )
        return 0;
      v7 = 0;
      while ( 1 )
      {
        v8 = *(DonationContainer **)(*(_QWORD *)a1 + 8 * v7);
        AvatarId = DonationContainer::getAvatarId(v8, v6);
        if ( (unsigned int)LogicLong::equals(AvatarId, a2) )
          break;
        if ( ++v7 >= *(int *)(a1 + 12) )
          return 0;
      }
      DonationContainer::removeUnit(v8, (const LogicSpellData *)a3);
      return 1;
    }

    __int64 __fastcall LogicDonationHelper::canAddDonation(__int64 a1, __int64 a2, const char *a3, __int64 a4, __int64 a5)
    {
      long double v10; // q0
      __int64 v11; // x25
      __int64 v12; // x24
      __int64 AvatarId; // x0
    
      *(__n128 *)&v10 = Debugger::doAssert((Debugger *)(a1 != 0), (bool)"pDonations cannot be null", a3);
      if ( *(int *)(a1 + 12) < 1 )
        return 1;
      v11 = 0;
      while ( 1 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v11);
        AvatarId = DonationContainer::getAvatarId(v12, v10);
        if ( (unsigned int)LogicLong::equals(AvatarId, a2) )
          break;
        if ( ++v11 >= *(int *)(a1 + 12) )
          return 1;
      }
      return DonationContainer::canAddUnit(v12, a3, a4, a5);
    }

    __int64 __fastcall LogicDonationHelper::canDonateAnything(__int64 a1, __int64 a2, const char *a3, __int64 a4)
    {
      long double v8; // q0
      __int64 v9; // x24
      __int64 v10; // x23
      __int64 AvatarId; // x0
    
      *(__n128 *)&v8 = Debugger::doAssert((Debugger *)(a1 != 0), (bool)"pDonations cannot be null", a3);
      if ( *(int *)(a1 + 12) < 1 )
        return 1;
      v9 = 0;
      while ( 1 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v9);
        AvatarId = DonationContainer::getAvatarId(v10, v8);
        if ( (unsigned int)LogicLong::equals(AvatarId, a2) )
        {
          if ( (DonationContainer::isDonationLimitReached(v10, a3, a4) & 1) != 0 )
            break;
        }
        if ( ++v9 >= *(int *)(a1 + 12) )
          return 1;
      }
      return 0;
    }

    __int64 __fastcall LogicDonationHelper::getDonateCount(__int64 a1, __int64 a2, const char *a3)
    {
      long double v6; // q0
      __int64 v7; // x23
      __int64 v8; // x22
      __int64 AvatarId; // x0
    
      *(__n128 *)&v6 = Debugger::doAssert((Debugger *)(a1 != 0), (bool)"pDonations cannot be null", a3);
      if ( *(int *)(a1 + 12) < 1 )
        return 0;
      v7 = 0;
      while ( 1 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v7);
        AvatarId = DonationContainer::getAvatarId(v8, v6);
        if ( (unsigned int)LogicLong::equals(AvatarId, a2) )
          break;
        if ( ++v7 >= *(int *)(a1 + 12) )
          return 0;
      }
      return DonationContainer::getDonationCount(v8, a3);
    }

}; // end class LogicDonationHelper
