class LogicAllianceBadgeData
{
public:

    _QWORD *__fastcall LogicAllianceBadgeData::LogicAllianceBadgeData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)LogicData::LogicData(a1, a2, a3);
      *result = off_10046C120;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall LogicAllianceBadgeData::destruct(__int64 a1)
    {
      return LogicData::destruct(a1);
    }

    // attributes: thunk
    void __fastcall LogicAllianceBadgeData::createReferences(AreaEffectObject *this)
    {
      LogicData::createReferences(this);
    }

    // attributes: thunk
    void __fastcall LogicAllianceBadgeData::~LogicAllianceBadgeData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicAllianceBadgeData::~LogicAllianceBadgeData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicAllianceBadgeData
