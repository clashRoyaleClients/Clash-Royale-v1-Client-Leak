class DataLoaderShader
{
public:

    __int64 __fastcall DataLoaderShader::DataLoaderShader(__int64 a1)
    {
      *(_QWORD *)a1 = off_1004755B0;
      Shader::Shader((Titan *)(a1 + 8));
      String::String((String *)(a1 + 48));
      String::String((String *)(a1 + 72));
      String::operator=(a1 + 48, "");
      String::operator=(a1 + 72, "");
      return a1;
    }

    _QWORD *__fastcall DataLoaderShader::~DataLoaderShader(_QWORD *a1)
    {
      *a1 = off_1004755B0;
      String::operator=(a1 + 6, "");
      String::operator=(a1 + 9, "");
      String::~String();
      String::~String();
      Shader::~Shader((Shader *)(a1 + 1));
      return a1;
    }

    _QWORD *__fastcall DataLoaderShader::~DataLoaderShader(_QWORD *a1)
    {
      DataLoaderShader::~DataLoaderShader(a1);
      return a1;
    }

    void __fastcall DataLoaderShader::~DataLoaderShader(_QWORD *a1)
    {
      DataLoaderShader::~DataLoaderShader(a1);
      operator delete(a1);
    }

    __int64 __fastcall DataLoaderShader::load(DataLoaderShader *a1, __int64 a2, __int64 a3)
    {
      String::operator=((char *)a1 + 48, a2);
      String::operator=((char *)a1 + 72, a3);
      return DataLoaderShader::loadInternal(a1);
    }

    void __fastcall DataLoaderShader::loadInternal(_DWORD *a1)
    {
      DataLoaderShader *NativeTime; // x0
      xTimer *v3; // x20
      const char **v4; // x24
      const char *v5; // x1
      const char *v6; // x21
      const char *v7; // x2
      const char *ShaderFile; // x22
      DataLoaderShader *v9; // x0
      internal_t *p_internal; // x25
      internal_t *pHeap; // x1
      const char *v12; // x2
      const char *v13; // x23
      internal_t *v14; // x1
      internal_t *v15; // x2
      uint64_t v16; // x0
      unsigned __int64 v17; // x2
      const char *v18; // x1
      long double PassedTimeMs; // q0
      const String *v20; // x1
      String v21; // [xsp+20h] [xbp-100h] BYREF
      String v22; // [xsp+38h] [xbp-E8h] BYREF
      String v23; // [xsp+50h] [xbp-D0h] BYREF
      String v24; // [xsp+68h] [xbp-B8h] BYREF
      String v25; // [xsp+80h] [xbp-A0h] BYREF
      String v26; // [xsp+98h] [xbp-88h] BYREF
      String v27; // [xsp+B0h] [xbp-70h] BYREF
      String v28; // [xsp+C8h] [xbp-58h] BYREF
    
      NativeTime = (DataLoaderShader *)xTimer::getNativeTime();
      v3 = NativeTime;
      v4 = (const char **)(a1 + 14);
      if ( a1[13] + 1 > 8 )
        v5 = *v4;
      else
        v5 = (const char *)(a1 + 14);
      v6 = (const char *)(a1 + 20);
      if ( a1[19] + 1 > 8 )
        v7 = *(const char **)v6;
      else
        v7 = (const char *)(a1 + 20);
      ShaderFile = (const char *)DataLoaderShader::loadShaderFile(NativeTime, v5, v7);
      String::String(&v27, ".vsh");
      String::String(&v26, ".fsh");
      String::replace(&v28, a1 + 12, &v27, &v26);
      String::~String();
      String::~String();
      p_internal = &v28.internal;
      if ( v28.m_bytes + 1 > 8 )
        pHeap = (internal_t *)v28.internal.pHeap;
      else
        pHeap = &v28.internal;
      if ( a1[19] + 1 > 8 )
        v12 = *(const char **)v6;
      else
        v12 = (const char *)(a1 + 20);
      v13 = (const char *)DataLoaderShader::loadShaderFile(v9, (const char *)pHeap, v12);
      String::String(&v25, &s_shaderConfiguration);
      String::String(&v24, v13);
      String::operator+=(&v25, &v24);
      String::~String();
      String::String(&v23, &s_shaderConfiguration);
      String::String(&v22, ShaderFile);
      String::operator+=(&v23, &v22);
      String::~String();
      if ( v23.m_bytes + 1 > 8 )
        v14 = (internal_t *)v23.internal.pHeap;
      else
        v14 = &v23.internal;
      if ( v25.m_bytes + 1 > 8 )
        v15 = (internal_t *)v25.internal.pHeap;
      else
        v15 = &v25.internal;
      if ( a1[19] + 1 > 8 )
        v6 = *(const char **)v6;
      Shader::load((Shader *)(a1 + 2), (const char *)v14, (const char *)v15, v6);
      if ( v13 )
        operator delete[](v13);
      if ( ShaderFile )
        operator delete[](ShaderFile);
      v16 = xTimer::getNativeTime();
      PassedTimeMs = xTimer::getPassedTimeMs(v3, v16, v17);
      if ( a1[13] + 1 > 8 )
        v4 = (const char **)*v4;
      if ( v28.m_bytes + 1 > 8 )
        p_internal = (internal_t *)v28.internal.pHeap;
      String::format(
        (String *)"Loading shaders %s & %s took %d ms",
        v18,
        v4,
        p_internal,
        (unsigned int)(int)*(float *)&PassedTimeMs);
      Debugger::print((Debugger *)&v21, v20);
      String::~String();
      String::~String();
      String::~String();
      String::~String();
    }

    _BYTE *__fastcall DataLoaderShader::loadShaderFile(__int64 a1, const char *a2, __int64 a3)
    {
      const char *v4; // x1
      FILE *v5; // x19
      int Size; // w0
      int v7; // w21
      _BYTE *v8; // x20
      const String *v9; // x1
      String v11; // [xsp+10h] [xbp-40h] BYREF
      FILE *v12; // [xsp+28h] [xbp-28h] BYREF
    
      v5 = fopen(a2, "rt");
      v12 = v5;
      if ( !v5 )
      {
        String::format((String *)"Unable to find file %s", v4, a3);
        Debugger::error((Debugger *)&v11, v9);
      }
      Size = TitanInputFile::getSize(&v12);
      v7 = Size;
      if ( Size < 1 )
      {
        v8 = 0;
      }
      else
      {
        v8 = (_BYTE *)operator new[](Size + 1);
        v8[(int)fread(v8, 1u, v7, v5)] = 0;
      }
      fclose(v5);
      return v8;
    }

    __int64 __fastcall DataLoaderShader::getType(TauntSelector::TauntButton *this)
    {
      return 10;
    }

}; // end class DataLoaderShader
