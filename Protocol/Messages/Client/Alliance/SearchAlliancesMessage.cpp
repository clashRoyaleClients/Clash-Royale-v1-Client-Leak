class SearchAlliancesMessage
{
public:

    void __fastcall SearchAlliancesMessage::SearchAlliancesMessage(SearchAlliancesMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_DWORD *)(v1 + 88) = 0;
      *(_QWORD *)(v1 + 72) = 0;
      *(_QWORD *)(v1 + 80) = 0;
      *(_QWORD *)v1 = off_1004726E8;
      *(_QWORD *)(v1 + 92) = 50;
      *(_DWORD *)(v1 + 100) = 0;
      *(_BYTE *)(v1 + 104) = 0;
      *(_DWORD *)(v1 + 108) = 0;
    }

    __int64 __fastcall SearchAlliancesMessage::encode(LogicLocaleData *this)
    {
      PiranhaMessage::encode(this);
      ByteStream::writeString((LogicLocaleData *)((char *)this + 16), *((String **)this + 9));
      ByteStreamHelper::writeDataReference((__int64)this + 16, *((AreaEffectObject **)this + 10));
      ByteStream::writeInt((LogicLocaleData *)((char *)this + 16), *((_DWORD *)this + 22));
      ByteStream::writeInt((LogicLocaleData *)((char *)this + 16), *((_DWORD *)this + 23));
      ByteStream::writeInt((LogicLocaleData *)((char *)this + 16), *((_DWORD *)this + 24));
      ByteStream::writeBoolean((LogicLocaleData *)((char *)this + 16), *((_BYTE *)this + 104));
      ByteStream::writeInt((LogicLocaleData *)((char *)this + 16), *((_DWORD *)this + 27));
      return ByteStream::writeInt((LogicLocaleData *)((char *)this + 16), *((_DWORD *)this + 25));
    }

    __int64 __fastcall SearchAlliancesMessage::decode(LogicLocaleData *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_QWORD *)this + 9) = ByteStream::readString((LogicLocaleData *)((char *)this + 16), 900000);
      *((_QWORD *)this + 10) = ByteStreamHelper::readDataReference((__int64)this + 16, 57);
      *((_DWORD *)this + 22) = ByteStream::readInt((LogicLocaleData *)((char *)this + 16));
      *((_DWORD *)this + 23) = ByteStream::readInt((LogicLocaleData *)((char *)this + 16));
      *((_DWORD *)this + 24) = ByteStream::readInt((LogicLocaleData *)((char *)this + 16));
      *((_BYTE *)this + 104) = ByteStream::readBoolean((LogicLocaleData *)((char *)this + 16));
      *((_DWORD *)this + 27) = ByteStream::readInt((LogicLocaleData *)((char *)this + 16));
      result = ByteStream::readInt((LogicLocaleData *)((char *)this + 16));
      *((_DWORD *)this + 25) = result;
      return result;
    }

    __int64 __fastcall SearchAlliancesMessage::getMessageType(LogicLocaleData *this)
    {
      return 14324;
    }

    __int64 __fastcall SearchAlliancesMessage::getServiceNodeType(LogicLocaleData *this)
    {
      return 11;
    }

    void __fastcall SearchAlliancesMessage::destruct(LogicLocaleData *this)
    {
      void *v2; // x20
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *((_DWORD *)this + 22) = 0;
      *((_QWORD *)this + 9) = 0;
      *((_QWORD *)this + 10) = 0;
      *(_QWORD *)((char *)this + 92) = 50;
      *((_DWORD *)this + 25) = 0;
      *((_BYTE *)this + 104) = 0;
      *((_DWORD *)this + 27) = 0;
    }

    __int64 __fastcall SearchAlliancesMessage::setSearchString(__int64 this, String *a2)
    {
      *(_QWORD *)(this + 72) = a2;
      return this;
    }

    __int64 __fastcall SearchAlliancesMessage::setDesiredRegion(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 80) = a2;
      return result;
    }

    __int64 __fastcall SearchAlliancesMessage::setMinMembers(__int64 this, int a2)
    {
      *(_DWORD *)(this + 88) = a2;
      return this;
    }

    __int64 __fastcall SearchAlliancesMessage::setMaxMembers(__int64 this, int a2)
    {
      *(_DWORD *)(this + 92) = a2;
      return this;
    }

    __int64 __fastcall SearchAlliancesMessage::setMinTrophies(__int64 this, int a2)
    {
      *(_DWORD *)(this + 96) = a2;
      return this;
    }

    __int64 __fastcall SearchAlliancesMessage::setFindOnlyJoinableClans(__int64 this, char a2)
    {
      *(_BYTE *)(this + 104) = a2;
      return this;
    }

    void __fastcall SearchAlliancesMessage::~SearchAlliancesMessage(LogicLocaleData *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall SearchAlliancesMessage::~SearchAlliancesMessage(LogicLocaleData *this)
    {
      operator delete(this);
    }

}; // end class SearchAlliancesMessage
