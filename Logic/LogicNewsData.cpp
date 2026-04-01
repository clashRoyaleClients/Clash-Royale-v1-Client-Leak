class LogicNewsData
{
public:

    void __fastcall LogicNewsData::LogicNewsData(LogicNewsData *this, const #1223 *a2, const ResetAccountMessage *a3)
    {
      __int64 v3; // x0
    
      v3 = LogicData::LogicData((__int64)this, (__int64)a2, a3);
      *(_QWORD *)v3 = off_10046C070;
      *(_BYTE *)(v3 + 97) = 0;
      *(_DWORD *)(v3 + 100) = -1;
    }

    __int64 __fastcall LogicNewsData::destruct(FacebookFriend *this)
    {
      __int64 result; // x0
    
      result = LogicData::destruct((__int64)this);
      *((_BYTE *)this + 97) = 0;
      *((_DWORD *)this + 25) = -1;
      return result;
    }

    void __fastcall LogicNewsData::createReferences(FacebookFriend *this)
    {
      __int64 v2; // x20
      __int64 v3; // x20
      String v4; // [xsp+0h] [xbp-40h] BYREF
      String v5; // [xsp+18h] [xbp-28h] BYREF
    
      LogicData::createReferences(this);
      v2 = *((_QWORD *)this + 1);
      String::String(&v5, "Enabled");
      *((_BYTE *)this + 97) = CSVRow::getBooleanValue(v2, &v5, 0);
      String::~String();
      v3 = *((_QWORD *)this + 1);
      String::String(&v4, "ID");
      *((_DWORD *)this + 25) = CSVRow::getIntegerValue(v3, &v4, 0);
      String::~String();
    }

    __int64 __fastcall LogicNewsData::shouldShowNews(FacebookFriend *this, const tween::Bounce *a2)
    {
      return *((unsigned __int8 *)this + 97);
    }

    __int64 __fastcall LogicNewsData::getItemSWF(__int64 a1)
    {
      __int64 v1; // x19
      __int64 Value; // x19
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      v1 = *(_QWORD *)(a1 + 8);
      String::String(&v4, "ItemSWF");
      Value = CSVRow::getValue(v1, &v4, 0);
      String::~String();
      return Value;
    }

    __int64 __fastcall LogicNewsData::getItemExportName(__int64 a1)
    {
      __int64 v1; // x19
      __int64 Value; // x19
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      v1 = *(_QWORD *)(a1 + 8);
      String::String(&v4, "ItemExportName");
      Value = CSVRow::getValue(v1, &v4, 0);
      String::~String();
      return Value;
    }

    __int64 __fastcall LogicNewsData::getImageSWF(__int64 a1)
    {
      __int64 v1; // x19
      __int64 Value; // x19
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      v1 = *(_QWORD *)(a1 + 8);
      String::String(&v4, "ImageSWF");
      Value = CSVRow::getValue(v1, &v4, 0);
      String::~String();
      return Value;
    }

    __int64 __fastcall LogicNewsData::getImageExportName(__int64 a1)
    {
      __int64 v1; // x19
      __int64 Value; // x19
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      v1 = *(_QWORD *)(a1 + 8);
      String::String(&v4, "ImageExportName");
      Value = CSVRow::getValue(v1, &v4, 0);
      String::~String();
      return Value;
    }

    __int64 __fastcall LogicNewsData::getInfoTID(__int64 a1)
    {
      __int64 v1; // x19
      __int64 Value; // x19
      String v4; // [xsp+8h] [xbp-28h] BYREF
    
      v1 = *(_QWORD *)(a1 + 8);
      String::String(&v4, "InfoTID");
      Value = CSVRow::getValue(v1, &v4, 0);
      String::~String();
      return Value;
    }

    void __usercall LogicNewsData::getButtonUrl(__int64 a1@<X0>, String *a2@<X8>)
    {
      __int64 v3; // x20
      const String *Value; // x0
      String v5; // [xsp+8h] [xbp-28h] BYREF
    
      v3 = *(_QWORD *)(a1 + 8);
      String::String(&v5, "ButtonUrl");
      Value = (const String *)CSVRow::getValue(v3, &v5, 0);
      String::String(a2, Value);
      String::~String();
    }

    void __usercall LogicNewsData::getButtonTID(__int64 a1@<X0>, String *a2@<X8>)
    {
      __int64 v3; // x20
      const String *Value; // x0
      String v5; // [xsp+8h] [xbp-28h] BYREF
    
      v3 = *(_QWORD *)(a1 + 8);
      String::String(&v5, "ButtonTID");
      Value = (const String *)CSVRow::getValue(v3, &v5, 0);
      String::String(a2, Value);
      String::~String();
    }

    // attributes: thunk
    void __fastcall LogicNewsData::~LogicNewsData(String *this)
    {
      LogicData::~LogicData(this);
    }

    void __fastcall LogicNewsData::~LogicNewsData(String *a1)
    {
      LogicData::~LogicData(a1);
      operator delete(a1);
    }

}; // end class LogicNewsData
