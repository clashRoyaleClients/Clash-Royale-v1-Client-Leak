class LogicAllianceRoleData
{
public:

    void __fastcall LogicAllianceRoleData::LogicAllianceRoleData(
            LogicAllianceRoleData *this,
            const #1223 *a2,
            const ResetAccountMessage *a3)
    {
      __int64 v3; // x0
    
      v3 = LogicData::LogicData((__int64)this, (__int64)a2, a3);
      *(_QWORD *)v3 = off_10046B9C8;
      *(_BYTE *)(v3 + 110) = 0;
      *(_WORD *)(v3 + 108) = 0;
      *(_QWORD *)(v3 + 100) = 0;
    }

    __int64 __fastcall LogicAllianceRoleData::destruct(#1357 *this)
    {
      __int64 result; // x0
    
      result = LogicData::destruct((__int64)this);
      *((_BYTE *)this + 110) = 0;
      *((_WORD *)this + 54) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      return result;
    }

    void __fastcall LogicAllianceRoleData::createReferences(#1357 *this)
    {
      __int64 v2; // x20
      __int64 v3; // x20
      __int64 v4; // x20
      __int64 v5; // x20
      __int64 v6; // x20
      __int64 v7; // x20
      __int64 v8; // x20
      __int64 v9; // x20
      String v10; // [xsp+0h] [xbp-D0h] BYREF
      String v11; // [xsp+18h] [xbp-B8h] BYREF
      String v12; // [xsp+30h] [xbp-A0h] BYREF
      String v13; // [xsp+48h] [xbp-88h] BYREF
      String v14; // [xsp+60h] [xbp-70h] BYREF
      String v15; // [xsp+78h] [xbp-58h] BYREF
      String v16; // [xsp+90h] [xbp-40h] BYREF
      String v17; // [xsp+A8h] [xbp-28h] BYREF
    
      LogicData::createReferences(this);
      v2 = *((_QWORD *)this + 1);
      String::String(&v17, "Level");
      *((_DWORD *)this + 25) = CSVRow::getIntegerValue(v2, &v17, 0);
      String::~String();
      v3 = *((_QWORD *)this + 1);
      String::String(&v16, "CanInvite");
      *((_BYTE *)this + 104) = CSVRow::getBooleanValue(v3, &v16, 0);
      String::~String();
      v4 = *((_QWORD *)this + 1);
      String::String(&v15, "CanSendMail");
      *((_BYTE *)this + 105) = CSVRow::getBooleanValue(v4, &v15, 0);
      String::~String();
      v5 = *((_QWORD *)this + 1);
      String::String(&v14, "CanChangeAllianceSettings");
      *((_BYTE *)this + 106) = CSVRow::getBooleanValue(v5, &v14, 0);
      String::~String();
      v6 = *((_QWORD *)this + 1);
      String::String(&v13, "CanAcceptJoinRequest");
      *((_BYTE *)this + 107) = CSVRow::getBooleanValue(v6, &v13, 0);
      String::~String();
      v7 = *((_QWORD *)this + 1);
      String::String(&v12, "CanKick");
      *((_BYTE *)this + 108) = CSVRow::getBooleanValue(v7, &v12, 0);
      String::~String();
      v8 = *((_QWORD *)this + 1);
      String::String(&v11, "CanBePromotedToLeader");
      *((_BYTE *)this + 109) = CSVRow::getBooleanValue(v8, &v11, 0);
      String::~String();
      v9 = *((_QWORD *)this + 1);
      String::String(&v10, "CanPromoteToOwnLevel");
      *((_BYTE *)this + 110) = CSVRow::getBooleanValue(v9, &v10, 0);
      String::~String();
    }

    // attributes: thunk
    void __fastcall LogicAllianceRoleData::~LogicAllianceRoleData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicAllianceRoleData::~LogicAllianceRoleData(String *this)
    {
      LogicData::~LogicData(this);
      operator delete(this);
    }

}; // end class LogicAllianceRoleData
