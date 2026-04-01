class ScrollResolutionOptions
{
public:

    void __fastcall ScrollResolutionOptions::getFlashResolutionOptions(__int64 a1, const char *a2, String *a3, _BYTE *a4)
    {
      AllianceStreamMessage *v6; // x0
      const char *v7; // x1
      ResourceManager *v8; // x0
      String v9; // [xsp+0h] [xbp-70h] BYREF
      String v10; // [xsp+18h] [xbp-58h] BYREF
      __int64 v11; // [xsp+30h] [xbp-40h] BYREF
      ResourceManager *v12; // [xsp+38h] [xbp-38h] BYREF
      String v13; // [xsp+48h] [xbp-28h] BYREF
    
      v6 = (AllianceStreamMessage *)String::String(&v13, a2);
      if ( *((_DWORD *)GameMain::getInstance(v6) + 30) != 2 )
      {
        String::String(&v10, ".sc");
        String::String(&v9, "_lowres.sc");
        String::replace(&v11, a3, &v10, &v9);
        String::~String();
        String::~String();
        if ( HIDWORD(v11) + 1 > 8 )
          v8 = v12;
        else
          v8 = (ResourceManager *)&v12;
        if ( (unsigned int)ResourceManager::doesFileExist(v8, v7) )
          String::operator=(a3);
        else
          *a4 = 1;
        String::~String();
      }
      String::~String();
    }

}; // end class ScrollResolutionOptions
