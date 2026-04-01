class Font
{
public:

    _QWORD *__fastcall Font::Font(_QWORD *result)
    {
      *result = off_100475210;
      return result;
    }

    void __fastcall Font::~Font(AllianceInfo *this)
    {
      *(_QWORD *)this = off_100475210;
    }

    void __fastcall Font::~Font(AllianceInfo *this)
    {
      *(_QWORD *)this = off_100475210;
    }

    // attributes: thunk
    void __fastcall Font::~Font(void *a1)
    {
      operator delete(a1);
    }

    // attributes: thunk
    __int64 __fastcall Font::load(BitmapFont *a1, const char *a2)
    {
      return BitmapFont::load(a1, a2);
    }

    __int64 __fastcall Font::setColorModifier(__int64 result, char a2, char a3, char a4)
    {
      if ( (unsigned int)result <= 9 )
      {
        redModifier[(int)result] = a2;
        greenModifier[(int)result] = a3;
        blueModifier[(int)result] = a4;
      }
      return result;
    }

    __int64 __fastcall Font::getFontModifier(__int64 result, _BYTE *a2, _BYTE *a3, char *a4)
    {
      char v4; // w8
    
      if ( (unsigned int)result > 9 )
      {
        v4 = -1;
        *a2 = -1;
        *a3 = -1;
      }
      else
      {
        *a2 = redModifier[(int)result];
        *a3 = greenModifier[(int)result];
        v4 = blueModifier[(int)result];
      }
      *a4 = v4;
      return result;
    }

    __int64 __fastcall Font::stringWidth(__int64 a1, __int64 a2)
    {
      __int64 v2; // x19
      float v3; // s8
    
      v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, long double, float))(*(_QWORD *)a1 + 16LL))(
             a1,
             a2,
             0,
             0,
             0,
             COERCE_LONG_DOUBLE((unsigned __int128)0),
             1.0);
      LODWORD(v3) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64))*(_QWORD *)(*(_QWORD *)v2 + 40LL))(v2));
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
      return (unsigned int)(int)ceilf(v3);
    }

    void Font::initializeMembers()
    {
      ;
    }

}; // end class Font
