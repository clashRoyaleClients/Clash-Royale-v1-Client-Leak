class ImageSet
{
public:

    void __fastcall ImageSet::ImageSet(ImageSet *this)
    {
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 2) = 0;
      ImageSet::initializeMembers(this);
    }

    void __fastcall ImageSet::ImageSet(ImageSet *this)
    {
      ImageSet::ImageSet(this);
    }

    void __fastcall ImageSet::~ImageSet(String **this)
    {
      ImageSet::clear((LogicJSONBoolean *)this);
      ImageSet::load((LogicJSONBoolean *)this);
      ImageSet::initializeMembers((LogicJSONBoolean *)this);
      std::vector<String>::~vector(this + 4);
      std::vector<ImageSet::Slot>::~vector(this + 1);
    }

    void __fastcall ImageSet::clear(LogicJSONBoolean *this)
    {
      char *v2; // x20
      __int64 v3; // x8
      __int64 v4; // x9
      int v5; // w10
      String v6; // [xsp+8h] [xbp-28h] BYREF
    
      v2 = (char *)this + 32;
      String::String((__int64)&v6);
      std::vector<String>::resize(v2, 0, &v6);
      String::~String((__int64)&v6);
      v3 = *((_QWORD *)this + 1);
      v4 = *((_QWORD *)this + 2);
      if ( v3 != v4 )
      {
        v5 = *((unsigned __int8 *)this + 2);
        do
        {
          if ( !v5 || !*(_BYTE *)(v3 + 32) )
          {
            *(_BYTE *)(v3 + 32) = 0;
            *(_DWORD *)(v3 + 36) = 0;
          }
          v3 += 56;
        }
        while ( v4 != v3 );
      }
    }

    __int64 __fastcall ImageSet::load(LogicJSONBoolean *this)
    {
      ImageSet::matchAlreadyLoaded(this);
      if ( !*((_BYTE *)this + 2) )
        ImageSet::unloadUnused(this);
      return ImageSet::loadMissing(this);
    }

    void __fastcall ImageSet::~ImageSet(String **this)
    {
      ImageSet::~ImageSet(this);
    }

    String *__fastcall ImageSet::add(LogicJSONBoolean *this, String *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
      String *result; // x0
    
      if ( !*((_BYTE *)this + 2) )
        return std::vector<String>::push_back((__int64)this + 32, a2);
      v4 = *((_QWORD *)this + 4);
      v5 = *((_QWORD *)this + 5);
      if ( v4 == v5 )
        return std::vector<String>::push_back((__int64)this + 32, a2);
      while ( 1 )
      {
        result = (String *)String::equals(v4, (__int64)a2);
        if ( ((unsigned __int8)result & 1) != 0 )
          break;
        v4 += 24;
        if ( v5 == v4 )
          return std::vector<String>::push_back((__int64)this + 32, a2);
      }
      return result;
    }

    __int64 __fastcall ImageSet::matchAlreadyLoaded(__int64 this)
    {
      _QWORD *v1; // x19
      int v2; // w20
      String *v3; // x21
      __int64 v4; // x23
      __int64 v5; // x24
    
      v1 = (_QWORD *)this;
      v2 = this + 32;
      v3 = *(String **)(this + 32);
      if ( v3 != *(String **)(this + 40) )
      {
        do
        {
          v4 = v1[1];
          v5 = v1[2];
          if ( v4 == v5 )
          {
    LABEL_5:
            ++v3;
          }
          else
          {
            while ( 1 )
            {
              this = String::equals((__int64)v3, v4 + 8);
              if ( (_DWORD)this )
                break;
              v4 += 56;
              if ( v5 == v4 )
                goto LABEL_5;
            }
            *(_BYTE *)(v4 + 32) = 1;
            this = std::vector<String>::erase(v2, v3);
            v3 = (String *)this;
          }
        }
        while ( v3 != (String *)v1[5] );
      }
      return this;
    }

    __int64 __fastcall ImageSet::unloadUnused(__int64 this)
    {
      __int64 v1; // x19
      __int64 v2; // x20
      __int64 v3; // x21
      __int64 v4; // x8
      void *v5; // x22
    
      v1 = this;
      v2 = this + 8;
      v3 = *(_QWORD *)(this + 8);
      v4 = *(_QWORD *)(this + 16);
      while ( v3 != v4 )
      {
        if ( *(_BYTE *)(v3 + 32) )
        {
          if ( !*(_BYTE *)(v1 + 2) || !*(_DWORD *)(v3 + 36) )
            *(_BYTE *)(v3 + 32) = 0;
          v3 += 56;
        }
        else
        {
          v5 = *(void **)v3;
          if ( *(_QWORD *)v3 )
          {
            GLImage::~GLImage(*(_QWORD *)v3);
            operator delete(v5);
          }
          this = std::vector<ImageSet::Slot>::erase(v2, v3);
          v3 = this;
          v4 = *(_QWORD *)(v1 + 16);
        }
      }
      return this;
    }

    void __fastcall ImageSet::loadMissing(LogicJSONBoolean *this)
    {
      char *v2; // x19
      const String *v3; // x21
      const String *i; // x22
      String v5; // [xsp+8h] [xbp-38h] BYREF
    
      v2 = (char *)this + 32;
      v3 = (const String *)*((_QWORD *)this + 4);
      for ( i = (const String *)*((_QWORD *)this + 5); i != v3; ++v3 )
        ImageSet::loadFile(this, v3);
      String::String((__int64)&v5);
      std::vector<String>::resize(v2, 0, &v5);
      String::~String((__int64)&v5);
    }

    void __fastcall ImageSet::loadFile(LogicJSONBoolean *this, String *a2)
    {
      internal_t *p_internal; // x0
      char *v5; // x0
      char *v6; // x21
      int v7; // w9
      __int64 i; // x8
      char *v9; // x11
      int v10; // w14
      int v11; // w15
      unsigned int v12; // w13
      _BYTE *v13; // x22
      _BYTE *v14; // [xsp+8h] [xbp-78h] BYREF
      String v15; // [xsp+10h] [xbp-70h] BYREF
      char v16; // [xsp+28h] [xbp-58h]
      int v17; // [xsp+2Ch] [xbp-54h]
      int v18; // [xsp+30h] [xbp-50h]
      int v19; // [xsp+34h] [xbp-4Ch]
      int v20; // [xsp+38h] [xbp-48h]
      int v21; // [xsp+3Ch] [xbp-44h]
      int v22; // [xsp+44h] [xbp-3Ch] BYREF
      unsigned int v23; // [xsp+48h] [xbp-38h] BYREF
      unsigned int v24; // [xsp+4Ch] [xbp-34h] BYREF
    
      v23 = 0;
      v24 = 0;
      v22 = 0;
      p_internal = &a2->internal;
      if ( a2->m_bytes + 1 > 8 )
        p_internal = (internal_t *)p_internal->pHeap;
      v5 = stbi_load((const char *)p_internal, (int *)&v24, &v23, &v22, 4);
      v6 = v5;
      if ( v5 )
      {
        if ( *((_BYTE *)this + 1) )
        {
          if ( v22 == 4 )
          {
            v7 = 4 * v24 * v23;
            if ( v7 >= 1 )
            {
              for ( i = 0; i < v7; i += 4 )
              {
                v9 = &v5[i];
                v10 = (unsigned __int8)v5[i + 2];
                v11 = (unsigned __int8)v5[i + 3];
                v12 = v11 * (unsigned int)(unsigned __int8)v5[i + 1] / 0xFF;
                *v9 = v11 * (unsigned int)(unsigned __int8)v5[i] / 0xFF;
                v9[1] = v12;
                v9[2] = v11 * v10 / 0xFFu;
              }
            }
          }
        }
        v22 = 4;
        v13 = (_BYTE *)operator new(48);
        GLImage::GLImage((__int64)v13);
        v13[1] = *((_BYTE *)this + 1);
        *v13 = *(_BYTE *)this;
        GLImage::create((__int64)v13, v24, v23, v22, (__int64)v6, 1, 1);
        stbi_image_free(v6);
        String::String((__int64)&v15);
        v14 = v13;
        String::operator=(&v15, a2);
        v16 = 1;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 1065353216;
        v21 = 1065353216;
        std::vector<ImageSet::Slot>::push_back((char *)this + 8, &v14);
        String::~String((__int64)&v15);
      }
    }

    __int64 __fastcall ImageSet::get(LogicJSONBoolean *this, const String *a2, float *a3, AvatarRankingEntry **a4)
    {
      __int64 v8; // x23
      __int64 v9; // x24
    
      v8 = *((_QWORD *)this + 1);
      v9 = *((_QWORD *)this + 2);
      if ( v8 == v9 )
      {
    LABEL_4:
        *a4 = 0;
        return 0;
      }
      else
      {
        while ( !String::equals(v8 + 8, (__int64)a2) )
        {
          v8 += 56;
          if ( v9 == v8 )
            goto LABEL_4;
        }
        *a3 = *(float *)(v8 + 40);
        a3[1] = *(float *)(v8 + 44);
        a3[2] = *(float *)(v8 + 48);
        a3[3] = *(float *)(v8 + 52);
        *a4 = *(AvatarRankingEntry **)v8;
        if ( !*(_BYTE *)(v8 + 32) )
          *(_BYTE *)(v8 + 32) = 1;
        if ( *((_BYTE *)this + 2) )
          ++*(_DWORD *)(v8 + 36);
        return 1;
      }
    }

    __int64 __fastcall ImageSet::release(__int64 this, const String *a2)
    {
      __int64 v3; // x20
      __int64 v4; // x21
      int v5; // w8
    
      if ( *(_BYTE *)(this + 2) )
      {
        v3 = *(_QWORD *)(this + 8);
        v4 = *(_QWORD *)(this + 16);
        if ( v3 != v4 )
        {
          while ( 1 )
          {
            this = String::equals(v3 + 8, (__int64)a2);
            if ( (_DWORD)this )
              break;
            v3 += 56;
            if ( v4 == v3 )
              return this;
          }
          v5 = *(_DWORD *)(v3 + 36);
          if ( v5 >= 1 )
            *(_DWORD *)(v3 + 36) = --v5;
          if ( !v5 )
          {
            if ( *(_BYTE *)(v3 + 32) )
              *(_BYTE *)(v3 + 32) = 0;
          }
        }
      }
      return this;
    }

    __int64 __fastcall ImageSet::getLoadingCount(LogicJSONBoolean *this)
    {
      return -1431655765 * (unsigned int)((*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 3);
    }

    void __fastcall ImageSet::initializeMembers(LogicJSONBoolean *this)
    {
      __int64 v2; // x20
      __int64 v3; // x21
      __int64 v4; // x22
      __int64 v5; // x21
      __int64 v6; // x22
      __int64 v7; // x20
    
      *(_WORD *)this = 0;
      *((_BYTE *)this + 2) = 0;
      v2 = *((_QWORD *)this + 1);
      v3 = *((_QWORD *)this + 2);
      if ( v3 != v2 )
      {
        v4 = *((_QWORD *)this + 1);
        do
        {
          String::~String(v4 + 8);
          v4 += 56;
        }
        while ( v3 != v4 );
      }
      *((_QWORD *)this + 2) = v2;
      v5 = *((_QWORD *)this + 4);
      v6 = *((_QWORD *)this + 5);
      if ( v6 != v5 )
      {
        v7 = *((_QWORD *)this + 4);
        do
        {
          String::~String(v7);
          v7 += 24;
        }
        while ( v6 != v7 );
      }
      *((_QWORD *)this + 5) = v5;
    }

}; // end class ImageSet
