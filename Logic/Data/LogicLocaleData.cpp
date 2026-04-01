class LogicLocaleData
{
public:

    __int64 __fastcall LogicLocaleData::LogicLocaleData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      LogicData::LogicData(a1, a2, a3);
      *(_QWORD *)a1 = off_10046C0C8;
      String::String((String *)(a1 + 104));
      String::String((String *)(a1 + 128));
      String::operator=(a1 + 104, "");
      String::operator=(a1 + 128, "");
      *(_BYTE *)(a1 + 152) = 0;
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall LogicLocaleData::LogicLocaleData(__int64 a1, __int64 a2, ResetAccountMessage *a3)
    {
      return __ZN15LogicLocaleDataC2EPK6CSVRowP14LogicDataTable(a1, a2, a3);
    }

    __int64 __fastcall LogicLocaleData::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      LogicData::destruct(a1);
      String::operator=(a1 + 104, "");
      result = String::operator=(a1 + 128, "");
      *(_BYTE *)(a1 + 152) = 0;
      return result;
    }

    __int64 __fastcall LogicLocaleData::createReferences(__int64 a1)
    {
      __int64 result; // x0
    
      LogicData::createReferences((AreaEffectObject *)a1);
      LogicData::getValue(a1, (__int64)&LogicLocaleData::ATTRIBUTE_FILE_NAME);
      String::operator=((String *)(a1 + 104));
      LogicData::getValue(a1, (__int64)&LogicLocaleData::ATTRIBUTE_LOCALIZED_NAME);
      String::operator=((String *)(a1 + 128));
      result = LogicData::getBooleanValue(a1, (__int64)&LogicLocaleData::ATTRIBUTE_ENABLED);
      *(_BYTE *)(a1 + 152) = result;
      return result;
    }

    void __fastcall LogicLocaleData::~LogicLocaleData(String *a1)
    {
      *(_QWORD *)&a1->m_length = off_10046C0C8;
      String::~String();
      String::~String();
      LogicData::~LogicData(a1);
    }

    void __fastcall LogicLocaleData::~LogicLocaleData(String *a1)
    {
      *(_QWORD *)&a1->m_length = off_10046C0C8;
      String::~String();
      String::~String();
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicLocaleData
