class DataLoaderFactory
{
public:

    void DataLoaderFactory::~DataLoaderFactory()
    {
      ;
    }

    // attributes: thunk
    void __fastcall DataLoaderFactory::~DataLoaderFactory(void *a1)
    {
      operator delete(a1);
    }

    _QWORD *__fastcall DataLoaderFactory::DataLoaderFactory(_QWORD *result)
    {
      *result = off_100475408;
      return result;
    }

    __int64 __fastcall DataLoaderFactory::createDataLoader(__int64 a1, const char *a2, _DWORD *a3)
    {
      int v4; // w20
      __int64 v5; // x19
      char *v6; // x8
      char *v7; // x8
      _QWORD v9[3]; // [xsp+8h] [xbp-58h] BYREF
      String v10; // [xsp+20h] [xbp-40h] BYREF
      String v11; // [xsp+38h] [xbp-28h] BYREF
    
      String::String(&v11, a2);
      String::String(&v10, ".");
      v4 = String::lastIndexOf(&v11, &v10);
      String::~String();
      if ( v4 == -1 )
        goto LABEL_35;
      String::substring(v9, &v11, (unsigned int)(v4 + 1), (unsigned int)v11.m_length);
      String::operator=(&v11);
      String::~String();
      if ( !(unsigned int)String::equalsIgnoreCase(&v11, "csv") )
      {
        if ( (unsigned int)String::equalsIgnoreCase(&v11, "sc") )
        {
          v5 = operator new(24);
          v6 = (char *)&`vtable for'DataLoaderFlash;
    LABEL_6:
          *(_QWORD *)v5 = v6 + 16;
          *(_QWORD *)(v5 + 16) = 0;
          goto LABEL_12;
        }
        if ( (String::equalsIgnoreCase(&v11, "png") & 1) != 0
          || (String::equalsIgnoreCase(&v11, "pvr") & 1) != 0
          || (String::equalsIgnoreCase(&v11, "pkm") & 1) != 0
          || (unsigned int)String::equalsIgnoreCase(&v11, "ktx") )
        {
          v5 = operator new(16);
          *(_QWORD *)v5 = off_100475430;
          goto LABEL_12;
        }
        if ( (unsigned int)String::equalsIgnoreCase(&v11, "txt") )
        {
          v5 = operator new(16);
          *(_QWORD *)v5 = 0;
          *(_QWORD *)v5 = off_1004755F0;
          *(_QWORD *)(v5 + 8) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
          goto LABEL_36;
        }
        if ( (unsigned int)String::equalsIgnoreCase(&v11, "fnt")
          || (unsigned int)String::equalsIgnoreCase(&v11, "ttf")
          || (unsigned int)String::equalsIgnoreCase(&v11, "otf") )
        {
          v5 = operator new(24);
          v6 = (char *)&`vtable for'DataLoaderFont;
          goto LABEL_6;
        }
        if ( (unsigned int)String::equalsIgnoreCase(&v11, "json") )
        {
          v5 = operator new(24);
          *(_QWORD *)v5 = off_1004754F0;
          *(_DWORD *)(v5 + 16) = 0;
          goto LABEL_12;
        }
        if ( *a3 == 101 && (String::equalsIgnoreCase(&v11, "ogg") & 1) != 0
          || (String::equalsIgnoreCase(&v11, "mp3") & 1) != 0
          || (unsigned int)String::equalsIgnoreCase(&v11, "m4a") )
        {
          v5 = operator new(16);
          v7 = (char *)&`vtable for'DataLoaderMusic;
    LABEL_32:
          *(_QWORD *)v5 = v7 + 16;
          *(_DWORD *)(v5 + 8) = 0;
          goto LABEL_36;
        }
        if ( (String::equalsIgnoreCase(&v11, "wav") & 1) != 0
          || (String::equalsIgnoreCase(&v11, "caf") & 1) != 0
          || (String::equalsIgnoreCase(&v11, "aif") & 1) != 0
          || (unsigned int)String::equalsIgnoreCase(&v11, "ogg") )
        {
          v5 = operator new(16);
          v7 = (char *)&`vtable for'DataLoaderSound;
          goto LABEL_32;
        }
        if ( (unsigned int)String::equalsIgnoreCase(&v11, "vsh") )
        {
          v5 = operator new(96);
          DataLoaderShader::DataLoaderShader((DataLoaderShader *)v5);
          goto LABEL_36;
        }
    LABEL_35:
        v5 = 0;
        goto LABEL_36;
      }
      v5 = operator new(40);
      *(_QWORD *)v5 = off_1004753C8;
      String::String((String *)(v5 + 16));
    LABEL_12:
      *(_QWORD *)(v5 + 8) = 0;
    LABEL_36:
      String::~String();
      return v5;
    }

}; // end class DataLoaderFactory
