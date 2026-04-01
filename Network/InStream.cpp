class InStream
{
public:

    __int64 __fastcall InStream::InStream(__int64 a1, const char *a2)
    {
      __int64 v3; // x19
      FILE *v4; // x21
      int v5; // w23
      int v6; // w28
      int v7; // w22
      __int64 v8; // x27
      char v9; // w25
      _BYTE __ptr[1024]; // [xsp+8h] [xbp-458h] BYREF
    
      *(_DWORD *)(a1 + 4) = 1;
      *(_QWORD *)(a1 + 16) = 0;
      v3 = a1 + 16;
      *(_QWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 8) = 0;
      v4 = fopen(a2, "rb");
      if ( v4 )
      {
        v5 = fread(__ptr, 1u, 0x400u, v4);
        if ( v5 >= 1 )
        {
          v6 = 0;
          do
          {
            v7 = v5 + v6;
            DynArray<unsigned char>::reserve(v3, (unsigned int)(v5 + v6));
            v8 = 0;
            *(_DWORD *)(a1 + 24) = v5 + v6;
            do
            {
              v9 = __ptr[v8];
              *(_BYTE *)DynArray<unsigned char>::operator[](v3, (unsigned int)(v6 + v8++)) = v9;
            }
            while ( v8 < v5 );
            v5 = fread(__ptr, 1u, 0x400u, v4);
            v6 = v7;
          }
          while ( v5 >= 1 );
        }
        *(_WORD *)a1 = 1;
        fclose(v4);
      }
      else
      {
        *(_BYTE *)a1 = 0;
      }
      return a1;
    }

    __int64 __fastcall InStream::InStream(__int64 a1, const char *a2)
    {
      InStream::InStream(a1, a2);
      return a1;
    }

    __int64 __fastcall InStream::~InStream(__int64 a1)
    {
      __int64 v2; // x0
      _QWORD *v3; // x20
    
      v3 = (_QWORD *)(a1 + 16);
      v2 = *(_QWORD *)(a1 + 16);
      if ( v2 )
        operator delete[](v2);
      *v3 = 0;
      v3[1] = 0;
      return a1;
    }

    __int64 __fastcall InStream::readInternal(__int64 a1)
    {
      __int64 v2; // x1
      unsigned __int8 v3; // w8
      int v4; // w9
    
      v2 = *(unsigned int *)(a1 + 8);
      if ( (int)v2 >= *(_DWORD *)(a1 + 24) )
        v3 = 0;
      else
        v3 = *(_BYTE *)DynArray<unsigned char>::operator[](a1 + 16, v2);
      if ( *(_BYTE *)(a1 + 1) )
      {
        v4 = 22695477 * *(_DWORD *)(a1 + 4) + 1;
        *(_DWORD *)(a1 + 4) = v4;
        v3 ^= BYTE2(v4) ^ 0x1A;
      }
      ++*(_DWORD *)(a1 + 8);
      ++read_count;
      return v3;
    }

    // attributes: thunk
    __int64 __fastcall InStream::readU8(__int64 this)
    {
      return InStream::readInternal(this);
    }

}; // end class InStream
