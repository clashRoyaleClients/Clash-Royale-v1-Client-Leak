class ServerErrorMessage
{
public:

    _QWORD *__fastcall ServerErrorMessage::ServerErrorMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10046EDF8;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall ServerErrorMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return ByteStream::writeString((ByteStream *)(a1 + 16), *(String **)(a1 + 72));
    }

    __int64 __fastcall ServerErrorMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      result = ByteStream::readString((ByteStream *)(a1 + 16), 900000);
      *(_QWORD *)(a1 + 72) = result;
      return result;
    }

    __int64 __fastcall ServerErrorMessage::getMessageType(LogicSpellData *this)
    {
      return 24115;
    }

    __int64 __fastcall ServerErrorMessage::getServiceNodeType(LogicSpellData *this)
    {
      return 10;
    }

    __int64 __fastcall ServerErrorMessage::removeErrorMessage(LogicSpellData *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    void __fastcall ServerErrorMessage::destruct(__int64 a1)
    {
      void *v2; // x20
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 72);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 72) = 0;
    }

    void __fastcall ServerErrorMessage::~ServerErrorMessage(LogicSpellData *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall ServerErrorMessage::~ServerErrorMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class ServerErrorMessage
