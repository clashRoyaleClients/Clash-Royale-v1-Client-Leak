class OwnHomeDataMessage
{
public:

    __int64 __fastcall OwnHomeDataMessage::OwnHomeDataMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_10045EF48;
      *(_DWORD *)(result + 88) = 0;
      *(_QWORD *)(result + 72) = 0;
      *(_QWORD *)(result + 80) = 0;
      return result;
    }

    __int64 __fastcall OwnHomeDataMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      LogicClientHome::encode(*(_QWORD *)(a1 + 72), a1 + 16);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80), a1 + 16);
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 88));
    }

    __int64 __fastcall OwnHomeDataMessage::decode(__int64 a1)
    {
      #1146 *v2; // x21
      #962 *v3; // x21
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      v2 = (#1146 *)operator new(408);
      LogicClientHome::LogicClientHome(v2);
      *(_QWORD *)(a1 + 72) = v2;
      LogicClientHome::decode(v2, (ByteStream *)(a1 + 16));
      v3 = (#962 *)operator new(248);
      LogicClientAvatar::LogicClientAvatar(v3);
      *(_QWORD *)(a1 + 80) = v3;
      (*(void (__fastcall **)(#962 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, a1 + 16);
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 88) = result;
      return result;
    }

    __int64 __fastcall OwnHomeDataMessage::getMessageType(AccountSwitchedMessage *this)
    {
      return 24101;
    }

    __int64 __fastcall OwnHomeDataMessage::getServiceNodeType(AccountSwitchedMessage *this)
    {
      return 10;
    }

    __int64 __fastcall OwnHomeDataMessage::removeLogicClientHome(AccountSwitchedMessage *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    __int64 __fastcall OwnHomeDataMessage::removeLogicClientAvatar(AccountSwitchedMessage *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 10);
      *((_QWORD *)this + 10) = 0;
      return v1;
    }

    __int64 __fastcall OwnHomeDataMessage::destruct(AccountSwitchedMessage *this)
    {
      #1146 *v2; // x0
      __int64 *v3; // x21
      __int64 v4; // x19
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 result; // x0
    
      PiranhaMessage::destruct(this);
      v3 = (__int64 *)((char *)this + 72);
      v2 = (#1146 *)*((_QWORD *)this + 9);
      if ( v2 )
      {
        LogicClientHome::destruct(v2);
        v4 = *v3;
        if ( *v3 )
        {
          v5 = *(_QWORD *)(v4 + 376);
          if ( v5 )
            operator delete[](v5);
          *(_QWORD *)(v4 + 376) = 0;
          *(_QWORD *)(v4 + 384) = 0;
          String::~String((String *)(v4 + 352));
          v6 = *(_QWORD *)(v4 + 264);
          if ( v6 )
            operator delete[](v6);
          *(_QWORD *)(v4 + 264) = 0;
          *(_QWORD *)(v4 + 272) = 0;
          v7 = *(_QWORD *)(v4 + 104);
          if ( v7 )
            operator delete[](v7);
          *(_QWORD *)(v4 + 104) = 0;
          *(_QWORD *)(v4 + 112) = 0;
          v8 = *(_QWORD *)(v4 + 40);
          if ( v8 )
            operator delete[](v8);
          *(_QWORD *)(v4 + 40) = 0;
          *(_QWORD *)(v4 + 48) = 0;
          v9 = *(_QWORD *)(v4 + 24);
          if ( v9 )
            operator delete[](v9);
          operator delete((void *)v4);
        }
        *v3 = 0;
      }
      result = *((_QWORD *)this + 10);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *((_QWORD *)this + 10);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 10) = 0;
      }
      *((_DWORD *)this + 22) = 0;
      *v3 = 0;
      *((_QWORD *)this + 10) = 0;
      return result;
    }

    __int64 __fastcall OwnHomeDataMessage::getRandomSeed(AccountSwitchedMessage *this)
    {
      return *((unsigned int *)this + 22);
    }

    void __fastcall OwnHomeDataMessage::~OwnHomeDataMessage(AccountSwitchedMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall OwnHomeDataMessage::~OwnHomeDataMessage(AccountSwitchedMessage *this)
    {
      operator delete(this);
    }

}; // end class OwnHomeDataMessage
