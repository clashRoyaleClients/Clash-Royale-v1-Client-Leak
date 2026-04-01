class FacebookFriend
{
public:

    void __fastcall FacebookFriend::FacebookFriend(FacebookFriend *this, const String *a2)
    {
      String *v3; // x20
    
      *(_QWORD *)this = off_1004640B8;
      v3 = (String *)((char *)this + 40);
      String::String((String *)((char *)this + 8));
      String::String(v3);
      String::String((String *)((char *)this + 64));
      String::String((String *)((char *)this + 104));
      String::String((String *)((char *)this + 128));
      String::String((String *)((char *)this + 152));
      String::String((String *)((char *)this + 208));
      *((_BYTE *)this + 32) = 0;
      *((_DWORD *)this + 59) = 0;
      *((_DWORD *)this + 45) = 0;
      *((_DWORD *)this + 58) = -1;
      *((_BYTE *)this + 184) = 0;
      *((_BYTE *)this + 185) = 0;
      *((_DWORD *)this + 44) = 0;
      *((_QWORD *)this + 11) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_DWORD *)this + 51) = 0;
      *(_QWORD *)((char *)this + 196) = 0;
      *(_QWORD *)((char *)this + 188) = 0;
      String::operator=((String *)((char *)this + 104));
    }

    // attributes: thunk
    void __fastcall FacebookFriend::FacebookFriend(FacebookFriend *this, const String *a2)
    {
      __ZN14FacebookFriendC2ERK6String(this, a2);
    }

    void __fastcall FacebookFriend::~FacebookFriend(LogicStringUtil *this)
    {
      void *v2; // x0
      void *v3; // x0
      void *v4; // x0
    
      *(_QWORD *)this = off_1004640B8;
      v2 = (void *)*((_QWORD *)this + 12);
      if ( v2 )
        operator delete(v2);
      v3 = (void *)*((_QWORD *)this + 24);
      if ( v3 )
        operator delete(v3);
      *((_QWORD *)this + 24) = 0;
      v4 = (void *)*((_QWORD *)this + 11);
      if ( v4 )
        operator delete(v4);
      *((_BYTE *)this + 32) = 0;
      *((_DWORD *)this + 59) = 0;
      *((_DWORD *)this + 45) = 0;
      *((_DWORD *)this + 58) = -1;
      *((_BYTE *)this + 184) = 0;
      *((_BYTE *)this + 185) = 0;
      *((_DWORD *)this + 44) = 0;
      *((_QWORD *)this + 11) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_DWORD *)this + 51) = 0;
      *(_QWORD *)((char *)this + 196) = 0;
      *(_QWORD *)((char *)this + 188) = 0;
      String::~String((String *)((char *)this + 208));
      String::~String((String *)((char *)this + 152));
      String::~String((String *)((char *)this + 128));
      String::~String((String *)((char *)this + 104));
      String::~String((String *)((char *)this + 64));
      String::~String((String *)((char *)this + 40));
      String::~String((String *)((char *)this + 8));
    }

    // attributes: thunk
    void __fastcall FacebookFriend::~FacebookFriend(LogicStringUtil *this)
    {
      __ZN14FacebookFriendD2Ev(this);
    }

    void __fastcall FacebookFriend::~FacebookFriend(LogicStringUtil *this)
    {
      FacebookFriend::~FacebookFriend(this);
      operator delete(this);
    }

    __int64 __fastcall FacebookFriend::setFirstName(LogicStringUtil *this, const String *a2)
    {
      return String::operator=((String *)((char *)this + 128));
    }

    __int64 __fastcall FacebookFriend::setFullName(LogicStringUtil *this, const String *a2)
    {
      return String::operator=((String *)((char *)this + 152));
    }

    __int64 __fastcall FacebookFriend::setExpLevel(__int64 this, int a2)
    {
      *(_DWORD *)(this + 176) = a2;
      return this;
    }

    __int64 __fastcall FacebookFriend::setLoadedFromGamecenter(__int64 this, char a2)
    {
      *(_BYTE *)(this + 32) = a2;
      return this;
    }

    void __fastcall FacebookFriend::setAvatarId(LogicStringUtil *this, #1236 *a2)
    {
      void *v4; // x0
    
      v4 = (void *)*((_QWORD *)this + 11);
      if ( v4 )
        operator delete(v4);
      *((_QWORD *)this + 11) = a2;
    }

    __int64 __fastcall FacebookFriend::setScore(__int64 this, int a2)
    {
      *(_DWORD *)(this + 180) = a2;
      return this;
    }

    __int64 __fastcall FacebookFriend::setGameCenterId(LogicStringUtil *this, String *a2)
    {
      return String::operator=((String *)((char *)this + 8));
    }

    void __fastcall FacebookFriend::setAllianceId(LogicStringUtil *this, #1236 *a2)
    {
      void *v4; // x0
    
      v4 = (void *)*((_QWORD *)this + 24);
      if ( v4 )
        operator delete(v4);
      *((_QWORD *)this + 24) = a2;
    }

    __int64 __fastcall FacebookFriend::setAllianceRank(__int64 this, int a2)
    {
      *(_DWORD *)(this + 236) = a2;
      return this;
    }

    __int64 __fastcall FacebookFriend::setAllianceName(LogicStringUtil *this, const String *a2)
    {
      return String::operator=((String *)((char *)this + 208));
    }

    __int64 __fastcall FacebookFriend::setAvatarName(LogicStringUtil *this, String *a2)
    {
      return String::operator=((String *)((char *)this + 40));
    }

    __int64 __fastcall FacebookFriend::setAllianceBadgeFromData(LogicStringUtil *this, #1018 *a2)
    {
      #1043 *Table; // x0
      __int64 result; // x0
    
      Table = (#1043 *)LogicDataTables::getTable((LogicDataTables *)0x10, (int)a2);
      result = LogicDataTable::getIndexInTable(Table, a2);
      *((_DWORD *)this + 58) = result;
      return result;
    }

}; // end class FacebookFriend
