class DataLoaderTexture
{
public:

    __int64 __fastcall DataLoaderTexture::~DataLoaderTexture(__int64 a1)
    {
      void *v2; // x20
    
      *(_QWORD *)a1 = off_100475430;
      v2 = *(void **)(a1 + 8);
      if ( v2 )
      {
        GLImage::~GLImage(*(GLImage **)(a1 + 8));
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 8) = 0;
      return a1;
    }

    __int64 __fastcall DataLoaderTexture::~DataLoaderTexture(__int64 a1)
    {
      DataLoaderTexture::~DataLoaderTexture(a1);
      return a1;
    }

    void __fastcall DataLoaderTexture::~DataLoaderTexture(void *a1)
    {
      DataLoaderTexture::~DataLoaderTexture((__int64)a1);
      operator delete(a1);
    }

    void __fastcall DataLoaderTexture::load(__int64 a1, __int64 a2, unsigned int *a3)
    {
      unsigned int v6; // w23
      unsigned int v7; // w24
      bool *v8; // x21
      __int64 v9; // x3
      __int64 v10; // x2
      const char *v11; // x1
      const String *v12; // x1
      char v13; // [xsp+8h] [xbp-48h] BYREF
    
      v6 = *a3;
      v7 = a3[1];
      v8 = (bool *)operator new(48);
      GLImage::GLImage((GLImage *)v8);
      if ( v7 == -1 )
        v9 = 1;
      else
        v9 = v7;
      if ( v6 == -1 )
        v10 = 1;
      else
        v10 = v6;
      *(_QWORD *)(a1 + 8) = v8;
      *v8 = a3[2] == 1;
      v8[1] = a3[3] == 1;
      if ( !(unsigned int)GLImage::create(v8, a2, v10, v9) )
      {
        String::format((String *)"Can't create texture: %s", v11, a2);
        Debugger::warning((__siginfo *)&v13, v12);
        String::~String();
      }
    }

    __int64 __fastcall DataLoaderTexture::getType(GameUtils *this)
    {
      return 2;
    }

}; // end class DataLoaderTexture
