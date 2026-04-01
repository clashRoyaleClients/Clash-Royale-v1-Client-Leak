class LogicRegionData
{
public:

    void __fastcall LogicRegionData::LogicRegionData(LogicRegionData *this, const #1223 *a2, const #1043 *a3)
    {
      LogicData::LogicData(this, a2, a3);
      *(_QWORD *)this = off_10045F408;
      String::String((String *)((char *)this + 104));
      *((_BYTE *)this + 128) = 0;
      String::operator=((char *)this + 104, "");
    }

    // attributes: thunk
    void __fastcall LogicRegionData::LogicRegionData(LogicRegionData *this, const #1223 *a2, const #1043 *a3)
    {
      __ZN15LogicRegionDataC2EPK6CSVRowPK14LogicDataTable(this, a2, a3);
    }

    __int64 __fastcall LogicRegionData::destruct(#1342 *this)
    {
      LogicData::destruct(this);
      *((_BYTE *)this + 128) = 0;
      return String::operator=((char *)this + 104, "");
    }

    void __fastcall LogicRegionData::createReferences(#1342 *this)
    {
      __int64 v2; // x20
      __int64 v3; // x20
      String v4; // [xsp+0h] [xbp-40h] BYREF
      String v5; // [xsp+18h] [xbp-28h] BYREF
    
      LogicData::createReferences(this);
      v2 = *((_QWORD *)this + 1);
      String::String(&v5, "DisplayName");
      CSVRow::getValue(v2, &v5, 0);
      String::operator=((String *)((char *)this + 104));
      String::~String(&v5);
      v3 = *((_QWORD *)this + 1);
      String::String(&v4, "IsCountry");
      *((_BYTE *)this + 128) = CSVRow::getBooleanValue(v3, &v4, 0);
      String::~String(&v4);
    }

    void __fastcall LogicRegionData::~LogicRegionData(#1342 *this)
    {
      *(_QWORD *)this = off_10045F408;
      String::~String((String *)((char *)this + 104));
      LogicData::~LogicData((String *)this);
    }

    void __fastcall LogicRegionData::~LogicRegionData(#1342 *this)
    {
      *(_QWORD *)this = off_10045F408;
      String::~String((String *)((char *)this + 104));
      LogicData::~LogicData((String *)this);
      operator delete(this);
    }

}; // end class LogicRegionData
