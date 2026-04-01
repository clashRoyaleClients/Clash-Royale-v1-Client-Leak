class OwnAvatarDataMessage
{
public:

    _QWORD *__fastcall OwnAvatarDataMessage::OwnAvatarDataMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10045E078;
      result[9] = 0;
      return result;
    }

    __int64 __fastcall OwnAvatarDataMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72), a1 + 16);
    }

    __int64 __fastcall OwnAvatarDataMessage::decode(__int64 a1)
    {
      #962 *v2; // x20
    
      PiranhaMessage::decode((#1242 *)a1);
      v2 = (#962 *)operator new(248);
      LogicClientAvatar::LogicClientAvatar(v2);
      *(_QWORD *)(a1 + 72) = v2;
      return (*(__int64 (__fastcall **)(#962 *, __int64))(*(_QWORD *)v2 + 32LL))(v2, a1 + 16);
    }

    __int64 OwnAvatarDataMessage::getMessageType()
    {
      return 24102;
    }

    __int64 OwnAvatarDataMessage::getServiceNodeType()
    {
      return 10;
    }

    __int64 __fastcall OwnAvatarDataMessage::removeLogicClientAvatar(__int64 a1)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = 0;
      return v1;
    }

    __int64 __fastcall OwnAvatarDataMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      result = *(_QWORD *)(a1 + 72);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *(_QWORD *)(a1 + 72);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *(_QWORD *)(a1 + 72) = 0;
      }
      *(_QWORD *)(a1 + 72) = 0;
      return result;
    }

    void OwnAvatarDataMessage::~OwnAvatarDataMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall OwnAvatarDataMessage::~OwnAvatarDataMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class OwnAvatarDataMessage
