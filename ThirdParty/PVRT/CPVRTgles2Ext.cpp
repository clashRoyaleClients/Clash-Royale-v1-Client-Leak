class CPVRTgles2Ext
{
public:

    __int64 __fastcall CPVRTgles2Ext::IsGLExtensionSupported(const char *a1)
    {
      const char *String; // x20
      char *v3; // x22
      size_t v4; // x21
      bool v5; // zf
    
      if ( strchr(a1, 32) )
        return 0;
      if ( !*a1 )
        return 0;
      String = (const char *)glGetString(0x1F03u);
      v3 = strstr(String, a1);
      if ( !v3 )
        return 0;
      v4 = strlen(a1);
      while ( 1 )
      {
        v5 = v3 == String;
        String = &v3[v4];
        if ( (v5 || *(v3 - 1) == 32) && (*String | 0x20) == 0x20 )
          break;
        v3 = strstr(&v3[v4], a1);
        if ( !v3 )
          return 0;
      }
      return 1;
    }

}; // end class CPVRTgles2Ext
