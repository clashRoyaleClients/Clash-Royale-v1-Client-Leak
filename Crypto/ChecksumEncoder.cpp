class ChecksumEncoder
{
public:

    void __fastcall ChecksumEncoder::ChecksumEncoder(ChecksumEncoder *this)
    {
      *(_QWORD *)this = off_100475BA0;
      *((_DWORD *)this + 3) = 0;
      *((_DWORD *)this + 4) = 0;
      *((_BYTE *)this + 8) = 1;
    }

    void __fastcall ChecksumEncoder::ChecksumEncoder(ChecksumEncoder *this)
    {
      *(_QWORD *)this = off_100475BA0;
      *((_DWORD *)this + 3) = 0;
      *((_DWORD *)this + 4) = 0;
      *((_BYTE *)this + 8) = 1;
    }

    __int64 __fastcall ChecksumEncoder::isCheckSumOnlyMode(ExpBar *this)
    {
      return 1;
    }

    __int64 __fastcall ChecksumEncoder::enableCheckSum(__int64 this, int a2)
    {
      bool v2; // zf
    
      if ( !*(_BYTE *)(this + 8) || (a2 & 1) != 0 )
      {
        if ( *(_BYTE *)(this + 8) )
          v2 = 1;
        else
          v2 = a2 == 0;
        if ( !v2 )
          *(_DWORD *)(this + 12) = *(_DWORD *)(this + 16);
      }
      else
      {
        *(_DWORD *)(this + 16) = *(_DWORD *)(this + 12);
      }
      *(_BYTE *)(this + 8) = a2;
      return this;
    }

    __int64 __fastcall ChecksumEncoder::resetCheckSum(__int64 this)
    {
      *(_DWORD *)(this + 12) = 0;
      return this;
    }

    __int64 __fastcall ChecksumEncoder::writeString(__int64 this, String *a2)
    {
      int v2; // w8
      unsigned __int64 v3; // t2
      int v4; // w8
    
      HIDWORD(v3) = *(_DWORD *)(this + 12);
      LODWORD(v3) = HIDWORD(v3);
      v2 = v3 >> 31;
      if ( a2 )
        v4 = v2 + a2->m_length + 28;
      else
        v4 = v2 + 27;
      *(_DWORD *)(this + 12) = v4;
      return this;
    }

    __int64 __fastcall ChecksumEncoder::writeStringReference(__int64 this, const String *a2)
    {
      unsigned __int64 v2; // t2
    
      HIDWORD(v2) = *(_DWORD *)(this + 12);
      LODWORD(v2) = HIDWORD(v2);
      *(_DWORD *)(this + 12) = a2->m_length + (v2 >> 31) + 38;
      return this;
    }

    __int64 __fastcall ChecksumEncoder::writeBoolean(__int64 this, int a2)
    {
      int v2; // w8
      unsigned __int64 v3; // t2
      int v4; // w9
    
      HIDWORD(v3) = *(_DWORD *)(this + 12);
      LODWORD(v3) = HIDWORD(v3);
      v2 = v3 >> 31;
      if ( a2 )
        v4 = 13;
      else
        v4 = 7;
      *(_DWORD *)(this + 12) = v2 + v4;
      return this;
    }

    __int64 __fastcall ChecksumEncoder::writeInt(__int64 this, int a2)
    {
      unsigned __int64 v2; // t2
    
      HIDWORD(v2) = *(_DWORD *)(this + 12);
      LODWORD(v2) = HIDWORD(v2);
      *(_DWORD *)(this + 12) = a2 + (v2 >> 31) + 9;
      return this;
    }

    __int64 __fastcall ChecksumEncoder::writeByte(__int64 this, unsigned __int8 a2)
    {
      unsigned __int64 v2; // t2
    
      HIDWORD(v2) = *(_DWORD *)(this + 12);
      LODWORD(v2) = HIDWORD(v2);
      *(_DWORD *)(this + 12) = (v2 >> 31) + a2 + 11;
      return this;
    }

    __int64 __fastcall ChecksumEncoder::writeShort(__int64 result, unsigned __int16 a2)
    {
      unsigned __int64 v2; // t2
    
      HIDWORD(v2) = *(_DWORD *)(result + 12);
      LODWORD(v2) = HIDWORD(v2);
      *(_DWORD *)(result + 12) = (v2 >> 31) + a2 + 19;
      return result;
    }

    __int64 __fastcall ChecksumEncoder::writeBytes(__int64 result, __int64 a2, int a3)
    {
      int v3; // w8
      unsigned __int64 v4; // t2
      int v5; // w9
      int v6; // w8
    
      HIDWORD(v4) = *(_DWORD *)(result + 12);
      LODWORD(v4) = HIDWORD(v4);
      v3 = v4 >> 31;
      v5 = a3 + v3 + 28;
      v6 = v3 + 27;
      if ( a2 )
        v6 = v5;
      *(_DWORD *)(result + 12) = v6;
      return result;
    }

    __int64 __fastcall ChecksumEncoder::writeVInt(__int64 result, int a2)
    {
      unsigned __int64 v2; // t2
    
      HIDWORD(v2) = *(_DWORD *)(result + 12);
      LODWORD(v2) = HIDWORD(v2);
      *(_DWORD *)(result + 12) = a2 + (v2 >> 31) + 33;
      return result;
    }

    __int64 __fastcall ChecksumEncoder::getCheckSum(__int64 a1)
    {
      unsigned int *v1; // x8
    
      if ( *(_BYTE *)(a1 + 8) )
        v1 = (unsigned int *)(a1 + 12);
      else
        v1 = (unsigned int *)(a1 + 16);
      return *v1;
    }

    __int64 __fastcall ChecksumEncoder::writeLongLong(__int64 a1, LogicLong *a2)
    {
      int HigherInt; // w21
      __int64 v5; // x1
      __int64 result; // x0
      unsigned __int64 v7; // t2
    
      HigherInt = LogicLong::getHigherInt(a2, (__int64)a2);
      result = LogicLong::getHigherInt(a2, v5);
      HIDWORD(v7) = *(_DWORD *)(a1 + 12);
      LODWORD(v7) = HIDWORD(v7);
      HIDWORD(v7) = HigherInt + (v7 >> 31) + 67;
      LODWORD(v7) = HIDWORD(v7);
      *(_DWORD *)(a1 + 12) = result + (v7 >> 31) + 91;
      return result;
    }

    __int64 __fastcall ChecksumEncoder::writeLong(__int64 a1, __int64 a2)
    {
      return LogicLong::encode(a2, a1);
    }

    __int64 __fastcall ChecksumEncoder::destruct(__int64 result)
    {
      *(_DWORD *)(result + 12) = 0;
      *(_DWORD *)(result + 16) = 0;
      *(_BYTE *)(result + 8) = 1;
      return result;
    }

    __int64 ChecksumEncoder::isByteStream()
    {
      return 0;
    }

    void ChecksumEncoder::~ChecksumEncoder()
    {
      ;
    }

    // attributes: thunk
    void __fastcall ChecksumEncoder::~ChecksumEncoder(void *a1)
    {
      operator delete(a1);
    }

}; // end class ChecksumEncoder
