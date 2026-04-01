class LogicLong
{
public:

    unsigned __int64 __fastcall LogicLong::getHigherInt(unsigned __int64 a1)
    {
      return HIDWORD(a1);
    }

    __int64 __fastcall LogicLong::getLowerInt(int a1)
    {
      if ( a1 < 0 )
        return a1 | 0x80000000;
      else
        return a1 & 0x7FFFFFFF;
    }

    __int64 __fastcall LogicLong::toLong(__int64 a1, int a2)
    {
      if ( a2 < 0 )
        return (unsigned int)a2 | (unsigned __int64)(a1 << 32) | 0x80000000;
      else
        return (a1 << 32) | a2;
    }

    _DWORD *__fastcall LogicLong::LogicLong(_DWORD *result, int a2, int a3)
    {
      *result = a2;
      result[1] = a3;
      return result;
    }

    _QWORD *__fastcall LogicLong::LogicLong(_QWORD *result)
    {
      *result = 0;
      return result;
    }

    bool __fastcall LogicLong::isZero(_DWORD *a1)
    {
      return !a1[1] && *a1 == 0;
    }

    bool __fastcall LogicLong::equals(_DWORD *a1, _DWORD *a2)
    {
      return a2 && a1[1] == a2[1] && *a1 == *a2;
    }

    _DWORD *__fastcall LogicLong::clone(_DWORD *a1)
    {
      _DWORD *result; // x0
      int v3; // w9
    
      result = (_DWORD *)operator new(8);
      v3 = a1[1];
      *result = *a1;
      result[1] = v3;
      return result;
    }

    __int64 __fastcall LogicLong::getHigherInt(unsigned int *a1)
    {
      return *a1;
    }

    __int64 __fastcall LogicLong::getLowerInt(__int64 a1)
    {
      return *(unsigned int *)(a1 + 4);
    }

    __int64 __fastcall LogicLong::encode(unsigned int *a1, __int64 a2)
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, *a1);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, a1[1]);
    }

    __int64 __fastcall LogicLong::decode(_DWORD *a1, __int64 a2)
    {
      __int64 result; // x0
    
      *a1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2);
      a1[1] = result;
      return result;
    }

    _DWORD *__usercall LogicLong::toString@<X0>(unsigned int *a1@<X0>, __int64 a2@<X8>)
    {
      return String::format((String *)"LogicLong(%d,%d)", a2, *a1, a1[1]);
    }

}; // end class LogicLong
