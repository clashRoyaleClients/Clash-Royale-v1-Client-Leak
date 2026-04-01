class SelectSpellsFromCoOpenMessage
{
public:

    void __fastcall SelectSpellsFromCoOpenMessage::SelectSpellsFromCoOpenMessage(SelectSpellsFromCoOpenMessage *this)
    {
      PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)this = off_10045FCF0;
      *((_QWORD *)this + 9) = 0;
      *((_QWORD *)this + 10) = 0;
      *((_QWORD *)this + 11) = 0;
      LogicArrayList<LogicSpellData const*>::ensureCapacity((__int64)this + 72, 10);
    }

    // attributes: thunk
    void __fastcall SelectSpellsFromCoOpenMessage::SelectSpellsFromCoOpenMessage(SelectSpellsFromCoOpenMessage *this)
    {
      __ZN29SelectSpellsFromCoOpenMessageC2Ev(this);
    }

    __int64 __fastcall SelectSpellsFromCoOpenMessage::encode(GUIContainer *this)
    {
      PiranhaMessage::encode(this);
      ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 11));
      return ByteStreamHelper::encodeSpellList((char *)this + 16, (char *)this + 72);
    }

    __int64 __fastcall SelectSpellsFromCoOpenMessage::decode(GUIContainer *this)
    {
      PiranhaMessage::decode(this);
      *((_QWORD *)this + 11) = ByteStream::readLong((GUIContainer *)((char *)this + 16));
      return ByteStreamHelper::decodeSpellList((char *)this + 16, (char *)this + 72);
    }

    __int64 __fastcall SelectSpellsFromCoOpenMessage::getMessageType(GUIContainer *this)
    {
      return 14318;
    }

    __int64 __fastcall SelectSpellsFromCoOpenMessage::getServiceNodeType(GUIContainer *this)
    {
      return 11;
    }

    void __fastcall SelectSpellsFromCoOpenMessage::destruct(GUIContainer *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 11);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 11) = 0;
    }

    void __fastcall SelectSpellsFromCoOpenMessage::~SelectSpellsFromCoOpenMessage(GUIContainer *this)
    {
      __int64 v1; // x0
      _QWORD *v2; // x20
    
      *(_QWORD *)this = off_10045FCF0;
      v2 = (_QWORD *)((char *)this + 72);
      v1 = *((_QWORD *)this + 9);
      if ( v1 )
        operator delete[](v1);
      *v2 = 0;
      v2[1] = 0;
    }

    void __fastcall SelectSpellsFromCoOpenMessage::~SelectSpellsFromCoOpenMessage(GUIContainer *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_10045FCF0;
      v2 = *((_QWORD *)this + 9);
      if ( v2 )
        operator delete[](v2);
      operator delete(this);
    }

}; // end class SelectSpellsFromCoOpenMessage
