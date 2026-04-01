class MappedFile
{
public:

    _QWORD *__fastcall MappedFile::map(__int64 a1)
    {
      int v1; // w8
      const char *v2; // x0
      int v3; // w0
      int v4; // w19
      void *v5; // x20
      _QWORD *result; // x0
      stat v7; // [xsp+0h] [xbp-A0h] BYREF
    
      v1 = *(_DWORD *)(a1 + 4) + 1;
      v2 = (const char *)(a1 + 8);
      if ( v1 > 8 )
        v2 = *(const char **)v2;
      v3 = open(v2, 0);
      v4 = v3;
      if ( v3 < 1 )
        return 0;
      fstat(v3, &v7);
      v5 = mmap(0, v7.st_size, 1, 2, v4, 0);
      close(v4);
      result = 0;
      if ( v5 )
      {
        result = (_QWORD *)operator new(16);
        *result = 0;
        *result = v5;
        result[1] = v7.st_size;
      }
      return result;
    }

    __int64 __fastcall MappedFile::~MappedFile(__int64 a1)
    {
      munmap(*(void **)a1, *(_QWORD *)(a1 + 8));
      return a1;
    }

}; // end class MappedFile
