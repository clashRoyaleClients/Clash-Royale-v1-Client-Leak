class VisitedHomeDataMessage
{
public:

    void __fastcall VisitedHomeDataMessage::VisitedHomeDataMessage(VisitedHomeDataMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_100461D40;
      *(_DWORD *)(v1 + 92) = 0;
      *(_QWORD *)(v1 + 84) = 0;
      *(_QWORD *)(v1 + 76) = 0;
      *(_QWORD *)(v1 + 68) = 0;
    }

    __int64 __fastcall VisitedHomeDataMessage::encode(LogicVector2 *this)
    {
      PiranhaMessage::encode(this);
      ByteStream::writeVInt((LogicVector2 *)((char *)this + 16), *((_DWORD *)this + 17));
      LogicClientHome::encode(*((_QWORD *)this + 9), (char *)this + 16);
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), (char *)this + 16);
      if ( !*((_QWORD *)this + 11) )
        return ByteStream::writeBoolean((LogicVector2 *)((char *)this + 16), 0);
      ByteStream::writeBoolean((LogicVector2 *)((char *)this + 16), 1);
      return (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 24LL))(
               *((_QWORD *)this + 11),
               (char *)this + 16);
    }

    __int64 __fastcall VisitedHomeDataMessage::decode(LogicVector2 *this)
    {
      #1146 *v2; // x21
      #962 *v3; // x21
      __int64 result; // x0
      #962 *v5; // x21
    
      PiranhaMessage::decode(this);
      *((_DWORD *)this + 17) = ByteStream::readVInt((LogicVector2 *)((char *)this + 16));
      v2 = (#1146 *)operator new(408);
      LogicClientHome::LogicClientHome(v2);
      *((_QWORD *)this + 9) = v2;
      LogicClientHome::decode(v2, (LogicVector2 *)((char *)this + 16));
      v3 = (#962 *)operator new(248);
      LogicClientAvatar::LogicClientAvatar(v3);
      *((_QWORD *)this + 10) = v3;
      (*(void (__fastcall **)(#962 *, char *))(*(_QWORD *)v3 + 32LL))(v3, (char *)this + 16);
      result = ByteStream::readBoolean((LogicVector2 *)((char *)this + 16));
      if ( (_DWORD)result )
      {
        v5 = (#962 *)operator new(248);
        LogicClientAvatar::LogicClientAvatar(v5);
        *((_QWORD *)this + 11) = v5;
        return (*(__int64 (__fastcall **)(#962 *, char *))(*(_QWORD *)v5 + 32LL))(v5, (char *)this + 16);
      }
      return result;
    }

    __int64 __fastcall VisitedHomeDataMessage::getMessageType(LogicVector2 *this)
    {
      return 24113;
    }

    __int64 __fastcall VisitedHomeDataMessage::getServiceNodeType(LogicVector2 *this)
    {
      return 10;
    }

    __int64 __fastcall VisitedHomeDataMessage::removeLogicClientHome(LogicVector2 *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0;
      return v1;
    }

    __int64 __fastcall VisitedHomeDataMessage::removeOwnerLogicClientAvatar(LogicVector2 *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 10);
      *((_QWORD *)this + 10) = 0;
      return v1;
    }

    __int64 __fastcall VisitedHomeDataMessage::setOwnerLogicClientAvatar(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 80) = a2;
      return result;
    }

    __int64 __fastcall VisitedHomeDataMessage::destruct(LogicVector2 *this)
    {
      #1146 *v2; // x0
      __int64 v3; // x20
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
      __int64 v7; // x0
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 v10; // x0
      __int64 result; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (#1146 *)*((_QWORD *)this + 9);
      if ( v2 )
      {
        LogicClientHome::destruct(v2);
        v3 = *((_QWORD *)this + 9);
        if ( v3 )
        {
          v4 = *(_QWORD *)(v3 + 376);
          if ( v4 )
            operator delete[](v4);
          *(_QWORD *)(v3 + 376) = 0;
          *(_QWORD *)(v3 + 384) = 0;
          String::~String((String *)(v3 + 352));
          v5 = *(_QWORD *)(v3 + 264);
          if ( v5 )
            operator delete[](v5);
          *(_QWORD *)(v3 + 264) = 0;
          *(_QWORD *)(v3 + 272) = 0;
          v6 = *(_QWORD *)(v3 + 104);
          if ( v6 )
            operator delete[](v6);
          *(_QWORD *)(v3 + 104) = 0;
          *(_QWORD *)(v3 + 112) = 0;
          v7 = *(_QWORD *)(v3 + 40);
          if ( v7 )
            operator delete[](v7);
          *(_QWORD *)(v3 + 40) = 0;
          *(_QWORD *)(v3 + 48) = 0;
          v8 = *(_QWORD *)(v3 + 24);
          if ( v8 )
            operator delete[](v8);
          operator delete((void *)v3);
        }
        *((_QWORD *)this + 9) = 0;
      }
      v9 = *((_QWORD *)this + 10);
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v10 = *((_QWORD *)this + 10);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        *((_QWORD *)this + 10) = 0;
      }
      result = *((_QWORD *)this + 11);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *((_QWORD *)this + 11);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *((_QWORD *)this + 11) = 0;
      }
      *((_DWORD *)this + 23) = 0;
      *(_QWORD *)((char *)this + 84) = 0;
      *(_QWORD *)((char *)this + 76) = 0;
      *(_QWORD *)((char *)this + 68) = 0;
      return result;
    }

    void __fastcall VisitedHomeDataMessage::~VisitedHomeDataMessage(LogicVector2 *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall VisitedHomeDataMessage::~VisitedHomeDataMessage(LogicVector2 *this)
    {
      operator delete(this);
    }

}; // end class VisitedHomeDataMessage
