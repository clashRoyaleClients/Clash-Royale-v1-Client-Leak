class VisitHomeMessage
{
public:

    void __fastcall VisitHomeMessage::VisitHomeMessage(VisitHomeMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_100462020;
      v1[9] = 0;
    }

    __int64 __fastcall VisitHomeMessage::encode(LogicTilemapData *this)
    {
      PiranhaMessage::encode(this);
      return ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
    }

    __int64 __fastcall VisitHomeMessage::decode(LogicTilemapData *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      result = ByteStream::readLong((LogicTilemapData *)((char *)this + 16));
      *((_QWORD *)this + 9) = result;
      return result;
    }

    __int64 __fastcall VisitHomeMessage::getMessageType(LogicTilemapData *this)
    {
      return 14113;
    }

    __int64 __fastcall VisitHomeMessage::getServiceNodeType(LogicTilemapData *this)
    {
      return 10;
    }

    __int64 __fastcall VisitHomeMessage::setHomeId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    void __fastcall VisitHomeMessage::destruct(LogicTilemapData *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall VisitHomeMessage::~VisitHomeMessage(LogicTilemapData *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall VisitHomeMessage::~VisitHomeMessage(LogicTilemapData *this)
    {
      operator delete(this);
    }

}; // end class VisitHomeMessage
