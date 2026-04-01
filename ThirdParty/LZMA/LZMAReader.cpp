class LZMAReader
{
public:

    __int64 __fastcall LZMAReader::init(__int64 a1, FILE **a2, int a3)
    {
      __int64 result; // x0
      const char *v7; // x1
      __int64 v8; // x9
      int v9; // w8
      _DWORD *v10; // x21
      unsigned __int8 *v11; // x10
      int v12; // t1
      int v13; // w2
      void *v14; // x0
      void *v15; // x0
      __int64 v16; // x8
      char *v17; // x0
      __int64 __ptr; // [xsp+28h] [xbp-38h] BYREF
      char v19; // [xsp+30h] [xbp-30h]
    
      *(_QWORD *)(a1 + 65560) = a2;
      v19 = 0;
      __ptr = 0;
      if ( a2 )
      {
        if ( TitanInputFile::isOpen((LogicBuyResourcesCommand *)a2) )
        {
          result = TitanInputFile::read(a2, &__ptr, 1, 9);
          if ( (_DWORD)result != 9 )
          {
            if ( !a3 )
              goto LABEL_22;
            v17 = "LZMAReader: Unable to read full header";
            goto LABEL_21;
          }
        }
      }
      v8 = 0;
      v9 = 0;
      v10 = (_DWORD *)(a1 + 65552);
      *(_DWORD *)(a1 + 65552) = 0;
      v11 = (unsigned __int8 *)&__ptr + 5;
      do
      {
        v12 = *v11++;
        v9 += v12 << v8;
        v8 += 8;
      }
      while ( v8 != 32 );
      *v10 = v9;
      if ( !(unsigned int)LZMAReader::isLZMACompressed((LZMAReader *)&__ptr, (const unsigned __int8 *)9, a3) )
      {
        result = LZMAReader::isLZHAMCompressed((LZMAReader *)&__ptr, (const unsigned __int8 *)9, v13);
        if ( (_DWORD)result )
        {
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v15 = (void *)operator new[](0x10000);
            *(_QWORD *)(a1 + 8) = v15;
            bzero(v15, 0x10000u);
          }
          result = lzham_decompress_init();
          *(_QWORD *)(a1 + 65728) = result;
          if ( result )
          {
            v16 = 65736;
    LABEL_23:
            *(_BYTE *)(a1 + v16) = 1;
            return result;
          }
          if ( a3 )
          {
            v17 = "LZMAReader: lzham_decompress_init failed";
            goto LABEL_21;
          }
    LABEL_22:
          v16 = 65737;
          goto LABEL_23;
        }
        *v10 = 0;
        if ( !a3 )
          goto LABEL_22;
        v17 = "LZMAReader: not LZMA or LZHAM file probably";
    LABEL_21:
        result = Debugger::warning((__siginfo *)v17, v7);
        goto LABEL_22;
      }
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v14 = (void *)operator new[](0x10000);
        *(_QWORD *)(a1 + 8) = v14;
        bzero(v14, 0x10000u);
      }
      *(_QWORD *)(a1 + 65616) = 0;
      *(_QWORD *)(a1 + 65608) = 0;
      LzmaDec_Allocate(a1 + 65592, (unsigned __int8 *)&__ptr, 5u, (__int64)&g_Alloc);
      return LzmaDec_Init(a1 + 65592);
    }

    __int64 __fastcall LZMAReader::LZMAReader(__int64 a1, FILE **a2, int a3)
    {
      *(_BYTE *)(a1 + 65737) = 0;
      *(_DWORD *)a1 = 0;
      *(_QWORD *)(a1 + 65728) = 0;
      *(_BYTE *)(a1 + 65736) = 0;
      bzero((void *)(a1 + 8), 0x1000Cu);
      *(_DWORD *)(a1 + 65584) = 0;
      *(_QWORD *)(a1 + 65576) = 0;
      *(_QWORD *)(a1 + 65568) = 0;
      *(_QWORD *)(a1 + 65560) = 0;
      LZMAReader::init(a1, a2, a3);
      return a1;
    }

    bool __fastcall LZMAReader::isLZMACompressed(unsigned __int8 *a1, signed int a2)
    {
      _BOOL8 result; // x0
      __int64 v4; // x10
      int v5; // w11
      unsigned int v6; // w12
      unsigned int v7[4]; // [xsp+0h] [xbp-10h] BYREF
    
      if ( a2 >= 9 && *a1 == 93 && !a1[1] )
      {
        result = 0;
        v4 = 5;
        if ( a1[2] )
          return result;
        v5 = 0;
        v6 = 0;
        do
        {
          v6 += a1[v4++] << v5;
          v5 += 8;
        }
        while ( v4 != 9 );
        if ( !(v6 >> 28) )
          return (unsigned int)LzmaProps_Decode(v7, a1, a2) == 0;
      }
      return 0;
    }

    bool __fastcall LZMAReader::isLZHAMCompressed(_BYTE *a1, int a2)
    {
      __int64 v2; // x8
      unsigned int v3; // w9
      unsigned __int8 *v4; // x10
      int v5; // t1
    
      if ( a2 < 9 || *a1 != 83 || a1[1] != 67 || a1[2] != 76 || a1[3] != 90 )
        return 0;
      v2 = 0;
      v3 = 0;
      v4 = a1 + 5;
      do
      {
        v5 = *v4++;
        v3 += v5 << v2;
        v2 += 8;
      }
      while ( v2 != 32 );
      return v3 >> 28 == 0;
    }

    __int64 __fastcall LZMAReader::LZMAReader(__int64 a1, const char *a2, int a3)
    {
      TitanInputFile *v6; // x22
      const char *v7; // x1
      const String *v8; // x1
      _BYTE v10[24]; // [xsp+8h] [xbp-38h] BYREF
    
      *(_BYTE *)(a1 + 65737) = 0;
      *(_DWORD *)a1 = 0;
      *(_QWORD *)(a1 + 65728) = 0;
      *(_BYTE *)(a1 + 65736) = 0;
      bzero((void *)(a1 + 8), 0x1000Cu);
      *(_DWORD *)(a1 + 65584) = 0;
      *(_QWORD *)(a1 + 65576) = 0;
      *(_QWORD *)(a1 + 65568) = 0;
      *(_QWORD *)(a1 + 65560) = 0;
      v6 = (TitanInputFile *)operator new(8);
      TitanInputFile::TitanInputFile(v6, a2, "rb");
      if ( !TitanInputFile::isOpen(v6) && ((a3 ^ 1) & 1) == 0 )
      {
        String::format((String *)"LZMAReader Can't find %s", v7, a2);
        Debugger::error((Debugger *)v10, v8);
      }
      LZMAReader::init(a1, (FILE **)v6, a3);
      return a1;
    }

    __int64 __fastcall LZMAReader::LZMAReader(__int64 a1, const char *a2, int a3)
    {
      LZMAReader::LZMAReader(a1, a2, a3);
      return a1;
    }

    __int64 __fastcall LZMAReader::~LZMAReader(__int64 a1, void *a2)
    {
      __int64 v3; // x21
      FILE **v4; // x0
      FILE **v5; // x20
      __int64 v6; // x0
      _QWORD *v7; // x22
      LogicEgg *v8; // x0
    
      v3 = a1 + 65560;
      v4 = *(FILE ***)(a1 + 65560);
      if ( v4 )
      {
        TitanInputFile::close(v4);
        v5 = *(FILE ***)v3;
        if ( *(_QWORD *)v3 )
        {
          TitanInputFile::~TitanInputFile(*(FILE ***)v3);
          operator delete(v5);
        }
        *(_QWORD *)v3 = 0;
        v6 = *(_QWORD *)(a1 + 8);
        if ( v6 )
          operator delete[](v6);
      }
      if ( !*(_BYTE *)(a1 + 65737) && !*(_BYTE *)(a1 + 65736) )
        LzmaDec_Free(a1 + 65592, (__int64)&g_Alloc);
      v7 = (_QWORD *)(a1 + 65728);
      v8 = *(LogicEgg **)(a1 + 65728);
      if ( v8 )
      {
        lzham_decompress_deinit(v8, a2);
        *v7 = 0;
      }
      *(_BYTE *)(a1 + 65737) = 0;
      *(_DWORD *)a1 = 0;
      *v7 = 0;
      *(_BYTE *)(a1 + 65736) = 0;
      bzero((void *)(a1 + 8), 0x1000Cu);
      *(_DWORD *)(v3 + 24) = 0;
      *(_QWORD *)(v3 + 8) = 0;
      *(_QWORD *)(v3 + 16) = 0;
      *(_QWORD *)v3 = 0;
      return a1;
    }

    __int64 __fastcall LZMAReader::~LZMAReader(__int64 a1, void *a2)
    {
      LZMAReader::~LZMAReader(a1, a2);
      return a1;
    }

    __int64 __fastcall LZMAReader::uncompress(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int *v8; // x21
      int v9; // w22
      int *v10; // x24
      _DWORD *v11; // x25
      int *v12; // x26
      _BYTE *v13; // x27
      int *v14; // x28
      LogicEgg **v15; // x20
      int v16; // w8
      __int64 result; // x0
      __int64 v18; // x9
      unsigned __int64 v19; // x10
      unsigned __int64 v20; // x11
      __int64 v21; // x5
      _BOOL4 v22; // w11
      unsigned __int64 v23; // x11
      int v24; // w5
      __int64 v25; // x9
      __int64 v26; // x10
      int v27; // w13
      int v28; // w12
      _QWORD *v29; // [xsp+8h] [xbp-78h]
      FILE ***v30; // [xsp+10h] [xbp-70h]
      int v31; // [xsp+1Ch] [xbp-64h] BYREF
      unsigned __int8 v32[8]; // [xsp+20h] [xbp-60h] BYREF
      unsigned __int8 v33[8]; // [xsp+28h] [xbp-58h] BYREF
    
      *(_DWORD *)a1 = 0;
      v8 = (int *)(a1 + 65552);
      v9 = *(_DWORD *)(a1 + 65552);
      v30 = (FILE ***)(a1 + 65560);
      v10 = (int *)(a1 + 65568);
      v11 = (_DWORD *)(a1 + 65572);
      v12 = (int *)(a1 + 65576);
      v13 = (_BYTE *)(a1 + 65736);
      v29 = (_QWORD *)(a1 + 65592);
      v14 = (int *)(a1 + 65584);
      v15 = (LogicEgg **)(a1 + 65728);
      v16 = *(_DWORD *)(a1 + 65568);
      do
      {
        LODWORD(result) = *v11;
        if ( v16 == *v11 )
        {
          result = TitanInputFile::read(*v30, *(void **)(a1 + 8), 1, 0x10000);
          *v11 = result;
          if ( !(_DWORD)result )
            return result;
          v16 = 0;
          *v10 = 0;
        }
        *(_QWORD *)v33 = (int)result - v16;
        v18 = *v12;
        v19 = 0x10000 - v18;
        *(_QWORD *)v32 = 0x10000 - v18;
        if ( *v13 )
        {
          if ( v9 == -1 || (v20 = (unsigned int)*v8, v19 <= v20) )
          {
            v21 = 0;
          }
          else
          {
            *(_QWORD *)v32 = (int)v20;
            v21 = 1;
          }
          result = lzham_decompress(
                     *v15,
                     (void *)(*(_QWORD *)(a1 + 8) + v16),
                     v33,
                     (unsigned __int64 *)(a1 + v18 + 16),
                     v32,
                     (unsigned __int64 *)v21,
                     a7);
          v22 = (int)result < 4;
        }
        else
        {
          if ( v9 == -1 || (v23 = (unsigned int)*v8, v19 <= v23) )
          {
            v24 = 0;
          }
          else
          {
            *(_QWORD *)v32 = (int)v23;
            v24 = 1;
          }
          result = LzmaDec_DecodeToBuf(
                     v29,
                     (char *)(a1 + v18 + 16),
                     (unsigned __int64 *)v32,
                     (char *)(*(_QWORD *)(a1 + 8) + v16),
                     (size_t *)v33,
                     v24,
                     &v31);
          v22 = result == 0;
        }
        v25 = *(_QWORD *)v33;
        v16 = *v10 + *(_DWORD *)v33;
        *v10 = v16;
        v26 = *(_QWORD *)v32;
        v27 = *v12 + *(_DWORD *)v32;
        v28 = *v8 - *(_DWORD *)v32;
        *v8 = v28;
        *v14 = v27;
        *v12 = 0;
      }
      while ( v27 <= 0 && v22 && (v9 == -1 || v28 != 0) && v26 | v25 );
      return result;
    }

    __int64 __fastcall LZMAReader::readUnsignedChar(
            int *a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int v8; // w8
    
      v8 = *a1;
      if ( *a1 == a1[16396] )
      {
        LZMAReader::uncompress((__int64)a1, a2, a3, a4, a5, a6, a7);
        v8 = *a1;
      }
      *a1 = v8 + 1;
      return *((unsigned __int8 *)a1 + v8 + 16);
    }

    __int64 __fastcall LZMAReader::readShort(
            int *a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      __int64 v8; // x9
      __int64 v9; // x8
      unsigned __int8 v10; // w20
      unsigned __int8 UnsignedChar; // w20
      __int64 v13; // x1
      __int64 v14; // x2
      __int64 v15; // x3
      __int64 v16; // x4
      __int64 v17; // x5
      unsigned int v18; // w6
    
      v8 = *a1;
      v9 = v8 + 1;
      if ( (int)v8 + 1 >= a1[16396] )
      {
        UnsignedChar = LZMAReader::readUnsignedChar(a1, a2, a3, a4, a5, a6, a7);
        return (unsigned int)(__int16)(UnsignedChar
                                     | ((unsigned __int8)LZMAReader::readUnsignedChar(a1, v13, v14, v15, v16, v17, v18) << 8));
      }
      else
      {
        *a1 = v9;
        v10 = *((_BYTE *)a1 + v8 + 16);
        *a1 = v8 + 2;
        return (unsigned int)(__int16)(v10 | (*((unsigned __int8 *)a1 + v9 + 16) << 8));
      }
    }

    __int64 __fastcall LZMAReader::readInt(
            int *a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      __int64 v8; // x9
      __int64 v9; // x8
      int v10; // w20
      unsigned int v11; // w20
      unsigned int v12; // w20
      unsigned __int16 Short; // w20
      __int64 v15; // x1
      __int64 v16; // x2
      __int64 v17; // x3
      __int64 v18; // x4
      __int64 v19; // x5
      unsigned int v20; // w6
    
      v8 = *a1;
      v9 = v8 + 3;
      if ( (int)v8 + 3 >= a1[16396] )
      {
        Short = LZMAReader::readShort(a1, a2, a3, a4, a5, a6, a7);
        return Short | ((unsigned __int16)LZMAReader::readShort(a1, v15, v16, v17, v18, v19, v20) << 16);
      }
      else
      {
        *a1 = v8 + 1;
        v10 = *((unsigned __int8 *)a1 + v8 + 16);
        *a1 = v8 + 2;
        v11 = v10 & 0xFFFF00FF | (*((unsigned __int8 *)a1 + v8 + 17) << 8);
        *a1 = v9;
        v12 = v11 & 0xFF00FFFF | (*((unsigned __int8 *)a1 + (int)v8 + 18) << 16);
        *a1 = v8 + 4;
        return v12 & 0xFFFFFF | (*((unsigned __int8 *)a1 + v9 + 16) << 24);
      }
    }

    bool __fastcall LZMAReader::readBool(
            int *a1,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      return (unsigned int)LZMAReader::readUnsignedChar(a1, a2, a3, a4, a5, a6, a7) == 1;
    }

    unsigned __int8 *__fastcall LZMAReader::readByteArray(LZMAReader *a1, int a2)
    {
      __int64 v4; // x0
      unsigned __int8 *v5; // x21
    
      if ( a2 < 0LL )
        v4 = -1;
      else
        v4 = a2;
      v5 = (unsigned __int8 *)operator new[](v4);
      LZMAReader::readByteArray(a1, a2, v5);
      return v5;
    }

    __int64 __fastcall LZMAReader::readByteArray(
            __int64 result,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int v8; // w20
      int *v9; // x21
      int v10; // w23
      _DWORD *v11; // x22
      __int64 v12; // x8
      int v13; // w9
      int v14; // w24
    
      v8 = a2;
      v9 = (int *)result;
      if ( (int)a2 >= 1 )
      {
        v10 = 0;
        v11 = (_DWORD *)(result + 65584);
        do
        {
          v12 = *v9;
          v13 = *v11 - v12;
          if ( v13 < 1 )
          {
            result = LZMAReader::readUnsignedChar(v9, a2, a3, a4, a5, a6, a7);
            *(_BYTE *)(a3 + v10++) = result;
          }
          else
          {
            if ( v13 <= v8 - v10 )
              v14 = *v11 - v12;
            else
              v14 = v8 - v10;
            result = (__int64)memcpy((void *)(a3 + v10), (char *)v9 + v12 + 16, v14);
            *v9 += v14;
            v10 += v14;
          }
        }
        while ( v10 < v8 );
      }
      return result;
    }

    __int64 __fastcall LZMAReader::readShortArray(
            __int64 result,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int v8; // w20
      int *v9; // x21
      int v10; // w23
      __int64 v11; // x8
      int v12; // w9
      int v13; // w24
    
      v8 = a2;
      v9 = (int *)result;
      if ( (int)a2 >= 1 )
      {
        v10 = 0;
        do
        {
          v11 = *v9;
          v12 = (v9[16396] - (int)v11) >> 1;
          if ( v12 < 1 )
          {
            result = LZMAReader::readShort(v9, a2, a3, a4, a5, a6, a7);
            *(_WORD *)(a3 + 2LL * v10++) = result;
          }
          else
          {
            if ( v12 <= v8 - v10 )
              v13 = (v9[16396] - (int)v11) >> 1;
            else
              v13 = v8 - v10;
            result = (__int64)memcpy((void *)(a3 + 2LL * v10), (char *)v9 + v11 + 16, 2 * v13);
            *v9 += 2 * v13;
            v10 += v13;
          }
        }
        while ( v10 < v8 );
      }
      return result;
    }

    __int64 __fastcall LZMAReader::readIntArray(
            __int64 result,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int v8; // w20
      int *v9; // x21
      int v10; // w23
      __int64 v11; // x8
      int v12; // w9
      int v13; // w24
    
      v8 = a2;
      v9 = (int *)result;
      if ( (int)a2 >= 1 )
      {
        v10 = 0;
        do
        {
          v11 = *v9;
          v12 = (v9[16396] - (int)v11) >> 2;
          if ( v12 < 1 )
          {
            result = LZMAReader::readInt(v9, a2, a3, a4, a5, a6, a7);
            *(_DWORD *)(a3 + 4LL * v10++) = result;
          }
          else
          {
            if ( v12 <= v8 - v10 )
              v13 = (v9[16396] - (int)v11) >> 2;
            else
              v13 = v8 - v10;
            result = (__int64)memcpy((void *)(a3 + 4LL * v10), (char *)v9 + v11 + 16, 4 * v13);
            *v9 += 4 * v13;
            v10 += v13;
          }
        }
        while ( v10 < v8 );
      }
      return result;
    }

    __int64 __fastcall LZMAReader::getUncompressedSize(__int64 a1)
    {
      return *(unsigned int *)(a1 + 65552);
    }

    __int64 __fastcall LZMAReader::isInvalidFile(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 65737);
    }

}; // end class LZMAReader
