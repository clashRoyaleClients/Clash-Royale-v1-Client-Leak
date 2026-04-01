class LogicAvatar
{
public:

    _QWORD *__fastcall LogicAvatar::LogicAvatar(_QWORD *result)
    {
      *result = off_100472BF0;
      result[1] = 0;
      return result;
    }

    __int64 __fastcall LogicAvatar::setLogicGameMode(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 8) = a2;
      return result;
    }

    __int64 __fastcall LogicAvatar::destruct(__int64 result)
    {
      *(_QWORD *)(result + 8) = 0;
      return result;
    }

    __int64 __fastcall LogicAvatar::getChecksum(__int64 a1)
    {
      __int64 v2; // x19
      _BYTE v4[24]; // [xsp+8h] [xbp-28h] BYREF
    
      ChecksumEncoder::ChecksumEncoder((ExpBar *)v4);
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 24LL))(a1, v4);
      v2 = ChecksumEncoder::getCheckSum(v4);
      ChecksumEncoder::destruct((ChecksumEncoder *)v4);
      return v2;
    }

    void LogicAvatar::~LogicAvatar()
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicAvatar::~LogicAvatar(void *a1)
    {
      operator delete(a1);
    }

    __int64 LogicAvatar::isNpcAvatar()
    {
      return 0;
    }

}; // end class LogicAvatar
