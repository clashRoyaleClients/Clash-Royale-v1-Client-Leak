class BufferedReadFile
{
public:

    __int64 __fastcall BufferedReadFile::open(GLfloat *this, const char *__filename)
    {
      FILE *v3; // x0
    
      v3 = fopen(__filename, "rb");
      *(_QWORD *)this = v3;
      if ( !v3 )
        return 0;
      fseek(v3, 0, 2);
      *((_QWORD *)this + 1) = ftell(*(FILE **)this);
      fseek(*(FILE **)this, 0, 0);
      BufferedReadFile::readMore(this);
      return 1;
    }

    size_t __fastcall BufferedReadFile::readMore(GLfloat *this)
    {
      size_t v2; // x2
      GLfloat *v3; // x20
      size_t result; // x0
    
      if ( *((_QWORD *)this + 1) - *((_QWORD *)this + 2) <= 0x20000u )
        v2 = *((_QWORD *)this + 1) - *((_QWORD *)this + 2);
      else
        v2 = 0x20000;
      v3 = this + 6;
      result = fread(this + 6, 1u, v2, *(FILE **)this);
      *((_QWORD *)this + 2) += 0x20000LL;
      *((_QWORD *)this + 16388) = v3;
      *((_QWORD *)this + 16387) = (char *)v3 + (int)result;
      return result;
    }

    _QWORD *__fastcall BufferedReadFile::read(_QWORD *this, size_t __n, char *__dst)
    {
      GLfloat *v5; // x19
      _QWORD *v6; // x24
      const void **v7; // x23
      const void *v8; // x1
      size_t v9; // x22
      size_t v10; // x25
      char *v11; // x20
      size_t v12; // x21
    
      v5 = (GLfloat *)this;
      v6 = this + 16387;
      v7 = (const void **)(this + 16388);
      v8 = (const void *)*(this + 16388);
      v9 = *(this + 16387) - (_QWORD)v8;
      if ( v9 >= __n )
      {
        this = memcpy(__dst, v8, __n);
        *v7 = (char *)*v7 + __n;
      }
      else if ( *(this + 2) < *(this + 1) )
      {
        this = memcpy(__dst, v8, v9);
        if ( v9 != __n )
        {
          v10 = __n - v9;
          v11 = &__dst[v9];
          do
          {
            BufferedReadFile::readMore(v5);
            if ( *v6 - (_QWORD)*v7 >= v10 )
              v12 = v10;
            else
              v12 = *v6 - (_QWORD)*v7;
            this = memcpy(v11, *v7, v12);
            v11 += v12;
            v10 -= v12;
            *v7 = (char *)*v7 + v12;
          }
          while ( v10 );
        }
      }
      return this;
    }

    __int64 __fastcall BufferedReadFile::readByte(GLfloat *this)
    {
      GLfloat *v1; // x8
      char *v2; // x9
      __int64 result; // x0
      unsigned __int8 __dst; // [xsp+Fh] [xbp-1h] BYREF
    
      __dst = 0;
      v1 = this + 32776;
      v2 = (char *)*((_QWORD *)this + 16388);
      if ( *((_QWORD *)this + 16387) - (_QWORD)v2 < 2u )
      {
        BufferedReadFile::read(this, 1u, (char *)&__dst);
        return __dst;
      }
      else
      {
        result = (unsigned __int8)*v2;
        __dst = *v2;
        *(_QWORD *)v1 = v2 + 1;
      }
      return result;
    }

    __int64 __fastcall BufferedReadFile::readShort(GLfloat *this)
    {
      __int16 *v1; // x9
      __int16 v2; // w10
      __int16 __dst; // [xsp+Eh] [xbp-2h] BYREF
    
      __dst = 0;
      v1 = (__int16 *)*((_QWORD *)this + 16388);
      if ( *((_QWORD *)this + 16387) - (_QWORD)v1 < 3u )
      {
        BufferedReadFile::read(this, 2u, (char *)&__dst);
        return (unsigned int)__dst;
      }
      else
      {
        v2 = *v1;
        __dst = *v1;
        *((_QWORD *)this + 16388) = v1 + 1;
      }
      return (unsigned int)v2;
    }

    __int64 __fastcall BufferedReadFile::readInt(GLfloat *this)
    {
      GLfloat *v1; // x8
      unsigned int *v2; // x9
      __int64 result; // x0
      unsigned int __dst; // [xsp+Ch] [xbp-4h] BYREF
    
      __dst = 0;
      v1 = this + 32776;
      v2 = (unsigned int *)*((_QWORD *)this + 16388);
      if ( *((_QWORD *)this + 16387) - (_QWORD)v2 < 5u )
      {
        BufferedReadFile::read(this, 4u, (char *)&__dst);
        return __dst;
      }
      else
      {
        result = *v2;
        __dst = *v2;
        *(_QWORD *)v1 = v2 + 1;
      }
      return result;
    }

}; // end class BufferedReadFile
