class jpeg_decoder_file_stream
{
public:

    __int64 __fastcall jpeg_decoder_file_stream::open(__int64 a1, const char *a2)
    {
      TitanInputFile *v4; // x20
      void *v6; // x20
    
      jpeg_decoder_file_stream::close((jpeg_decoder_file_stream *)a1);
      *(_WORD *)(a1 + 16) = 0;
      v4 = (TitanInputFile *)operator new(8);
      TitanInputFile::TitanInputFile(v4, a2, "rb");
      *(_QWORD *)(a1 + 8) = v4;
      if ( TitanInputFile::isOpen(v4) )
        return 1;
      v6 = *(void **)(a1 + 8);
      if ( v6 )
      {
        TitanInputFile::~TitanInputFile(*(FILE ***)(a1 + 8));
        operator delete(v6);
      }
      *(_QWORD *)(a1 + 8) = 0;
      return 0;
    }

    jpeg_decoder_file_stream *__fastcall jpeg_decoder_file_stream::~jpeg_decoder_file_stream(jpeg_decoder_file_stream *a1)
    {
      *(_QWORD *)a1 = off_1004F23E0;
      jpeg_decoder_file_stream::close(a1);
      return a1;
    }

    void __fastcall jpeg_decoder_file_stream::~jpeg_decoder_file_stream(jpeg_decoder_file_stream *a1)
    {
      *(_QWORD *)a1 = off_1004F23E0;
      jpeg_decoder_file_stream::close(a1);
      operator delete(a1);
    }

    size_t __fastcall jpeg_decoder_file_stream::read(MobileAppTrackerTitan *this, unsigned __int8 *a2, int a3, bool *a4)
    {
      FILE **v7; // x0
      size_t result; // x0
    
      v7 = (FILE **)*((_QWORD *)this + 1);
      if ( !v7 )
        return 0xFFFFFFFFLL;
      if ( *((_BYTE *)this + 16) )
      {
        *a4 = 1;
        return 0;
      }
      if ( *((_BYTE *)this + 17) )
        return 0xFFFFFFFFLL;
      result = TitanInputFile::read(v7, a2, 1, a3);
      if ( (int)result < a3 )
      {
        *((_BYTE *)this + 16) = 1;
        *a4 = 1;
      }
      return result;
    }

    void __fastcall jpeg_decoder_file_stream::close(__int64 a1)
    {
      void *v2; // x20
    
      v2 = *(void **)(a1 + 8);
      if ( v2 )
      {
        TitanInputFile::~TitanInputFile(*(FILE ***)(a1 + 8));
        operator delete(v2);
        *(_QWORD *)(a1 + 8) = 0;
      }
      *(_WORD *)(a1 + 16) = 0;
    }

}; // end class jpeg_decoder_file_stream
