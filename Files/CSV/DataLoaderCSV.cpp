class DataLoaderCSV
{
public:

    void __fastcall DataLoaderCSV::load(AlliancePopup *this, const char *a2, const char *a3, const int *a4)
    {
      xTimer *NativeTime; // x20
      LZMAReader *v8; // x26
      const char *UncompressedSize; // x23
      void *ByteArray; // x24
      int v11; // w4
      const char *v12; // x1
      FILE *v13; // x25
      const String *v14; // x1
      __int64 Size; // x0
      size_t v16; // x26
      int v17; // w4
      int v18; // w4
      const String *v19; // x1
      int v20; // w4
      const char *v21; // x1
      int v22; // w3
      __int64 *v23; // x23
      __int64 v24; // x24
      uint64_t v25; // x0
      unsigned __int64 v26; // x2
      long double PassedTimeMs; // q0
      const char *v28; // x1
      const String *v29; // x1
      String v30; // [xsp+10h] [xbp-90h] BYREF
      String v31; // [xsp+28h] [xbp-78h] BYREF
      String v32; // [xsp+40h] [xbp-60h] BYREF
      FILE *v33; // [xsp+58h] [xbp-48h] BYREF
    
      NativeTime = (xTimer *)xTimer::getNativeTime();
      String::operator=((char *)this + 16, a3);
      if ( !ResourceManager::sm_compressedCSVs
        || ((v8 = (LZMAReader *)operator new(65744),
             LZMAReader::LZMAReader(v8, a2, 0),
             (LZMAReader::isInvalidFile(v8) & 1) == 0)
          ? (UncompressedSize = (const char *)LZMAReader::getUncompressedSize(v8),
             ByteArray = (void *)LZMAReader::readByteArray(v8, (int)UncompressedSize))
          : (UncompressedSize = 0, ByteArray = 0),
            LZMAReader::~LZMAReader(v8),
            operator delete(v8),
            !ByteArray) )
      {
        v13 = fopen(a2, "rb");
        v33 = v13;
        if ( !v13 )
        {
          String::format((String *)"File not found %s", v12, a3);
          Debugger::error((Debugger *)&v32, v14);
        }
        Size = TitanInputFile::getSize((LogicBuyResourcesCommand *)&v33);
        UncompressedSize = (const char *)Size;
        v16 = (int)Size;
        if ( (int)Size < 0LL )
          Size = -1;
        else
          Size = (int)Size;
        ByteArray = (void *)operator new[](Size);
        fread(ByteArray, 1u, v16, v13);
        fclose(v13);
        v33 = 0;
        v33 = 0;
      }
      if ( (LogicStringUtil::textContains((LogicStringUtil *)ByteArray, "<<<<<<", UncompressedSize, 6, v11) & 1) != 0
        || (unsigned int)LogicStringUtil::textContains((LogicStringUtil *)ByteArray, ">>>>>>", UncompressedSize, 6, v17) )
      {
        operator+((char *)this + 16, " contains SVN conflict markers");
        Debugger::error((Debugger *)&v31, v19);
      }
      if ( (unsigned int)LogicStringUtil::textContains((LogicStringUtil *)ByteArray, "\r\n", UncompressedSize, 2, v18) )
      {
        v21 = "\r\n";
        v22 = 2;
      }
      else
      {
        v21 = "\n";
        v22 = 1;
      }
      v23 = (__int64 *)LogicStringUtil::split((LogicStringUtil *)ByteArray, v21, UncompressedSize, v22, v20);
      if ( ByteArray )
        operator delete[](ByteArray);
      v24 = operator new(128);
      CSVNode::CSVNode(v24, v23, (char *)this + 16);
      *((_QWORD *)this + 1) = v24;
      if ( v23 )
      {
        LogicArrayList<String>::~LogicArrayList(v23);
        operator delete(v23);
      }
      v25 = xTimer::getNativeTime();
      PassedTimeMs = xTimer::getPassedTimeMs(NativeTime, v25, v26);
      String::format((String *)"Loading CSV %s took %d ms", v28, a3, (unsigned int)(int)*(float *)&PassedTimeMs);
      Debugger::print((Debugger *)&v30, v29);
      String::~String();
    }

    _QWORD *__fastcall DataLoaderCSV::~DataLoaderCSV(_QWORD *a1)
    {
      StartMissionMessage *v2; // x0
      _QWORD *v3; // x20
      __int64 v4; // x0
    
      *a1 = off_1004753C8;
      v2 = (StartMissionMessage *)a1[1];
      if ( v2 )
      {
        CSVNode::destruct(v2);
        v3 = (_QWORD *)a1[1];
        if ( v3 )
        {
          String::~String();
          String::~String();
          String::~String();
          v4 = v3[1];
          if ( v4 )
            operator delete[](v4);
          operator delete(v3);
        }
        a1[1] = 0;
      }
      a1[1] = 0;
      String::~String();
      return a1;
    }

    _QWORD *__fastcall DataLoaderCSV::~DataLoaderCSV(_QWORD *a1)
    {
      DataLoaderCSV::~DataLoaderCSV(a1);
      return a1;
    }

    void __fastcall DataLoaderCSV::~DataLoaderCSV(_QWORD *a1)
    {
      DataLoaderCSV::~DataLoaderCSV(a1);
      operator delete(a1);
    }

    __int64 __fastcall DataLoaderCSV::getType(AlliancePopup *this)
    {
      return 4;
    }

}; // end class DataLoaderCSV
