class DonatorEntry
{
public:

    void __fastcall DonatorEntry::DonatorEntry(DonatorEntry *this)
    {
      *((_DWORD *)this + 10) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      *(_QWORD *)this = 0;
    }

    __int64 __fastcall DonatorEntry::encode(__int64 a1, __int64 a2)
    {
      const char *v4; // x2
    
      ChecksumEncoder::writeLong(a2, *(_QWORD *)a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(a1 + 16));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *(unsigned int *)(a1 + 40));
      ByteStreamHelper::writeDataReference(a2, *(AreaEffectObject **)(a1 + 8));
      return ByteStreamHelper::encodeSpellList(a2, a1 + 24, v4);
    }

    __int64 __fastcall DonatorEntry::decode(__int64 a1, __int64 a2, const char *a3)
    {
      __int64 v5; // x21
      long double v6; // q0
      const char *v7; // x2
    
      v5 = a1 + 24;
      *(__n128 *)&v6 = Debugger::doAssert((Debugger *)(*(_DWORD *)(a1 + 36) == 0), (bool)"", a3);
      *(_QWORD *)a1 = (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)a2 + 168LL))(a2, v6);
      *(_QWORD *)(a1 + 16) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, 900000);
      *(_DWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2);
      *(_QWORD *)(a1 + 8) = ByteStreamHelper::readDataReference(a2, 19);
      return ByteStreamHelper::decodeSpellList(a2, v5, v7);
    }

    void __fastcall DonatorEntry::destruct(__int64 a1)
    {
      void *v2; // x20
    
      v2 = *(void **)(a1 + 16);
      if ( v2 )
      {
        String::~String();
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 16) = 0;
      if ( *(_QWORD *)a1 )
        operator delete(*(void **)a1);
      *(_QWORD *)(a1 + 36) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = 0;
    }

}; // end class DonatorEntry
