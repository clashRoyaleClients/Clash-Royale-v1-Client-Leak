class TitanInputFile
{
public:

    void __fastcall TitanInputFile::TitanInputFile(TitanInputFile *this, const char *__filename, const char *__mode)
    {
      *(_QWORD *)this = 0;
      *(_QWORD *)this = fopen(__filename, __mode);
    }

    bool __fastcall TitanInputFile::isOpen(LogicBuyResourcesCommand *this)
    {
      return *(_QWORD *)this != 0;
    }

    __int64 __fastcall TitanInputFile::getSize(FILE **this)
    {
      __int64 v2; // x20
      __int64 v3; // x21
    
      v2 = ftell(*this);
      fseek(*this, 0, 2);
      v3 = ftell(*this);
      fseek(*this, v2, 0);
      return v3;
    }

    size_t __fastcall TitanInputFile::read(FILE **this, void *__ptr, int a3, int a4)
    {
      return fread(__ptr, a3, a4, *this);
    }

    FILE *__fastcall TitanInputFile::close(FILE **this)
    {
      FILE *result; // x0
    
      result = *this;
      if ( result )
      {
        result = (FILE *)fclose(result);
        *this = 0;
      }
      return result;
    }

    void __fastcall TitanInputFile::~TitanInputFile(FILE **this)
    {
      FILE *v2; // x0
    
      v2 = *this;
      if ( v2 )
      {
        fclose(v2);
        *this = 0;
      }
      *this = 0;
    }

    FILE **__fastcall TitanInputFile::TitanInputFile(FILE **a1, __int64 a2, const char *a3)
    {
      const char *v4; // x0
    
      *a1 = 0;
      v4 = (const char *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v4 = *(const char **)v4;
      *a1 = fopen(v4, a3);
      return a1;
    }

    __int64 __fastcall TitanInputFile::read(FILE **a1)
    {
      return fgetc(*a1);
    }

    char *__fastcall TitanInputFile::gets(FILE **a1, char *a2, int a3)
    {
      return fgets(a2, a3, *a1);
    }

    __int64 __fastcall TitanInputFile::seek(FILE **a1, int a2, int a3)
    {
      return fseek(*a1, a2, a3);
    }

    __int64 __fastcall TitanInputFile::eof(FILE **this)
    {
      return feof(*this);
    }

}; // end class TitanInputFile
