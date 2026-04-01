class plcrash::BIT::async
{
public:

    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_read_uintmax64<unsigned long long>(
            __int64 a1,
            __int64 (__fastcall **a2)(_QWORD),
            __int64 a3,
            __int64 a4,
            int a5,
            __int64 *a6)
    {
      unsigned __int8 *v9; // x0
      __int64 v10; // x8
      __int64 v11; // x0
      unsigned int v12; // w0
    
      v9 = (unsigned __int8 *)BITplcrash_async_mobject_remap_address(a1);
      v10 = 5;
      if ( v9 )
      {
        switch ( a5 )
        {
          case 1:
            v10 = 0;
            *a6 = *v9;
            break;
          case 2:
            v11 = (*a2)(*(unsigned __int16 *)v9);
            goto LABEL_7;
          case 4:
            v12 = a2[1](*(unsigned int *)v9);
            v10 = 0;
            *a6 = v12;
            break;
          case 8:
            v11 = a2[2](*(_QWORD *)v9);
    LABEL_7:
            v10 = 0;
            *a6 = v11;
            break;
          default:
            return v10;
        }
      }
      return v10;
    }

    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            unsigned __int64 *a4,
            _QWORD *a5)
    {
      unsigned __int64 v10; // x25
      __int64 v11; // x24
      char *v12; // x0
      char v13; // w9
      unsigned __int64 v14; // x8
    
      v10 = 0;
      v11 = 0;
      *a4 = 0;
      while ( 1 )
      {
        v12 = (char *)BITplcrash_async_mobject_remap_address(a1, a2, a3 + v11, 1);
        if ( !v12 )
          return 5;
        v13 = *v12;
        v14 = ((unsigned __int64)(*v12 & 0x7F) << v10) | *a4;
        *a4 = v14;
        ++v11;
        if ( (v13 & 0x80) == 0 )
          break;
        v10 += 7LL;
        if ( v10 > 0x3F )
          return 4;
      }
      if ( (unsigned int)(v10 + 7) <= 0x3F && (*v12 & 0x40) != 0 )
        *a4 = v14 | (-1LL << ((unsigned __int8)v10 + 7));
      *a5 = v11;
      return 0;
    }

    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_read_task_uleb128(
            vm_map_t a1,
            unsigned __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 a5)
    {
      __int64 uleb128; // x21
      _BYTE v10[56]; // [xsp+0h] [xbp-60h] BYREF
      __int64 v11; // [xsp+38h] [xbp-28h] BYREF
    
      if ( !(unsigned int)BITplcrash_async_address_apply_offset(a2, a3, &v11) )
        return 5;
      uleb128 = BITplcrash_async_mobject_init((__int64)v10, a1, v11, vm_page_size, 0);
      if ( !(_DWORD)uleb128 )
      {
        uleb128 = plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(v10, v11, 0, a4, a5);
        BITplcrash_async_mobject_free((__int64)v10);
      }
      return uleb128;
    }

    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            _QWORD *a4,
            _QWORD *a5)
    {
      unsigned __int64 v10; // x25
      __int64 v11; // x24
      char *v12; // x0
      char v13; // w8
    
      v10 = 0;
      v11 = 0;
      *a4 = 0;
      while ( 1 )
      {
        v12 = (char *)BITplcrash_async_mobject_remap_address(a1, a2, a3 + v11, 1);
        if ( !v12 )
          return 5;
        v13 = *v12;
        *a4 |= (unsigned __int64)(*v12 & 0x7F) << v10;
        ++v11;
        if ( (v13 & 0x80) == 0 )
          break;
        v10 += 7LL;
        if ( v10 > 0x3F )
          return 4;
      }
      *a5 = v11;
      return 0;
    }

    void plcrash::BIT::async::plcrash_async_dwarf_fde_info_free()
    {
      ;
    }

    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_fde_info_init<unsigned int>(
            _QWORD *a1,
            unsigned int *a2,
            __int64 a3,
            __int64 a4,
            int a5)
    {
      unsigned __int64 v10; // x23
      __int64 v11; // x24
      unsigned __int8 v12; // w27
      __int64 result; // x0
      unsigned __int64 v14; // x26
      __int64 v15; // x1
      int v16; // w23
      __int64 v17; // x22
      unsigned __int64 v18; // x9
      __int64 v19; // x8
      unsigned __int64 v20; // x10
      unsigned __int64 v21; // x8
      bool v22; // cf
      unsigned __int64 v23; // x8
      unsigned int v24; // [xsp+Ch] [xbp-114h] BYREF
      __int64 v25; // [xsp+10h] [xbp-110h] BYREF
      unsigned int v26; // [xsp+1Ch] [xbp-104h] BYREF
      _BYTE v27[80]; // [xsp+20h] [xbp-100h] BYREF
      unsigned __int16 v28; // [xsp+70h] [xbp-B0h]
      __int64 v29[6]; // [xsp+88h] [xbp-98h] BYREF
      unsigned __int64 v30; // [xsp+B8h] [xbp-68h] BYREF
      unsigned __int64 v31; // [xsp+C0h] [xbp-60h] BYREF
      unsigned int v32; // [xsp+CCh] [xbp-54h] BYREF
    
      v10 = BITplcrash_async_mobject_base_address((__int64)a2);
      if ( (unsigned int)BITplcrash_async_mobject_read_uint32((__int64)a2, a3, a4, 0, &v32) )
        return 5;
      if ( v32 == -1 )
      {
        result = BITplcrash_async_mobject_read_uint64((__int64)a2, a3, a4, 4, a1 + 1);
        v11 = 12;
        if ( (_DWORD)result )
          return result;
        v12 = 8;
      }
      else
      {
        a1[1] = v32;
        v11 = 4;
        v12 = 4;
      }
      v14 = a4 - v10;
      *a1 = a4 - v10 + v11;
      result = plcrash::BIT::async::plcrash_async_dwarf_read_uintmax64<unsigned long long>(a2, a3, a4, v11, v12, &v30);
      if ( (_DWORD)result )
        return result;
      v15 = v30;
      if ( a5 )
      {
        a1[2] = v30;
        if ( (v15 & 0x8000000000000000LL) == 0 && (BITplcrash_async_address_apply_offset(v10, v15, &v31) & 1) != 0 )
          goto LABEL_13;
        return 5;
      }
      if ( v11 + a4 < v30 )
        return 5;
      v31 = v11 + a4 - v30;
      a1[2] = v31 - v10;
    LABEL_13:
      plcrash::BIT::async::gnu_ehptr_reader<unsigned int>::gnu_ehptr_reader((__int64)v29, a3);
      result = plcrash::BIT::async::plcrash_async_dwarf_cie_info_init<unsigned int>(v27, a2, a3, v29, v31);
      if ( !(_DWORD)result )
      {
        v16 = v27[56] && (_BYTE)v28 ? HIBYTE(v28) : 0;
        result = plcrash::BIT::async::gnu_ehptr_reader<unsigned int>::read(v29, a2, a4, v11 + v12, v16, &v26, &v25);
        if ( !(_DWORD)result )
        {
          a1[3] = v26;
          v17 = v25 + v11 + v12;
          result = plcrash::BIT::async::gnu_ehptr_reader<unsigned int>::read(v29, a2, a4, v17, v16 & 0xF, &v24, &v25);
          if ( !(_DWORD)result )
          {
            v18 = a1[3];
            if ( v18 <= ~(unsigned __int64)v24 )
            {
              a1[4] = v18 + v24;
              v19 = v14 + v17 + v25;
              a1[5] = v19;
              v20 = a1[1];
              v21 = v19 - *a1;
              v22 = v20 >= v21;
              v23 = v20 - v21;
              if ( v22 )
              {
                a1[6] = v23;
                plcrash::BIT::async::plcrash_async_dwarf_cie_info_free(v27);
                return 0;
              }
            }
            return 5;
          }
        }
      }
      return result;
    }

    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_fde_info_init<unsigned long long>(
            _QWORD *a1,
            unsigned int *a2,
            __int64 a3,
            __int64 a4,
            int a5)
    {
      unsigned __int64 v10; // x23
      __int64 v11; // x24
      unsigned __int8 v12; // w27
      __int64 result; // x0
      unsigned __int64 v14; // x26
      __int64 v15; // x1
      int v16; // w23
      __int64 v17; // x22
      unsigned __int64 v18; // x9
      __int64 v19; // x8
      unsigned __int64 v20; // x10
      unsigned __int64 v21; // x8
      bool v22; // cf
      unsigned __int64 v23; // x8
      unsigned __int64 v24; // [xsp+8h] [xbp-138h] BYREF
      __int64 v25; // [xsp+10h] [xbp-130h] BYREF
      unsigned __int64 v26; // [xsp+18h] [xbp-128h] BYREF
      _BYTE v27[80]; // [xsp+20h] [xbp-120h] BYREF
      unsigned __int16 v28; // [xsp+70h] [xbp-D0h]
      __int64 v29[10]; // [xsp+88h] [xbp-B8h] BYREF
      unsigned __int64 v30; // [xsp+D8h] [xbp-68h] BYREF
      unsigned __int64 v31; // [xsp+E0h] [xbp-60h] BYREF
      unsigned int v32; // [xsp+ECh] [xbp-54h] BYREF
    
      v10 = BITplcrash_async_mobject_base_address((__int64)a2);
      if ( (unsigned int)BITplcrash_async_mobject_read_uint32((__int64)a2, a3, a4, 0, &v32) )
        return 5;
      if ( v32 == -1 )
      {
        result = BITplcrash_async_mobject_read_uint64((__int64)a2, a3, a4, 4, a1 + 1);
        v11 = 12;
        if ( (_DWORD)result )
          return result;
        v12 = 8;
      }
      else
      {
        a1[1] = v32;
        v11 = 4;
        v12 = 4;
      }
      v14 = a4 - v10;
      *a1 = a4 - v10 + v11;
      result = plcrash::BIT::async::plcrash_async_dwarf_read_uintmax64<unsigned long long>(a2, a3, a4, v11, v12, &v30);
      if ( (_DWORD)result )
        return result;
      v15 = v30;
      if ( a5 )
      {
        a1[2] = v30;
        if ( (v15 & 0x8000000000000000LL) == 0 && (BITplcrash_async_address_apply_offset(v10, v15, &v31) & 1) != 0 )
          goto LABEL_13;
        return 5;
      }
      if ( v11 + a4 < v30 )
        return 5;
      v31 = v11 + a4 - v30;
      a1[2] = v31 - v10;
    LABEL_13:
      plcrash::BIT::async::gnu_ehptr_reader<unsigned long long>::gnu_ehptr_reader((__int64)v29, a3);
      result = plcrash::BIT::async::plcrash_async_dwarf_cie_info_init<unsigned long long>(v27, a2, a3, v29, v31);
      if ( !(_DWORD)result )
      {
        v16 = v27[56] && (_BYTE)v28 ? HIBYTE(v28) : 0;
        result = plcrash::BIT::async::gnu_ehptr_reader<unsigned long long>::read(v29, a2, a4, v11 + v12, v16, &v26, &v25);
        if ( !(_DWORD)result )
        {
          a1[3] = v26;
          v17 = v25 + v11 + v12;
          result = plcrash::BIT::async::gnu_ehptr_reader<unsigned long long>::read(v29, a2, a4, v17, v16 & 0xF, &v24, &v25);
          if ( !(_DWORD)result )
          {
            v18 = a1[3];
            if ( v18 <= ~v24 )
            {
              a1[4] = v18 + v24;
              v19 = v14 + v17 + v25;
              a1[5] = v19;
              v20 = a1[1];
              v21 = v19 - *a1;
              v22 = v20 >= v21;
              v23 = v20 - v21;
              if ( v22 )
              {
                a1[6] = v23;
                plcrash::BIT::async::plcrash_async_dwarf_cie_info_free(v27);
                return 0;
              }
            }
            return 5;
          }
        }
      }
      return result;
    }

    void plcrash::BIT::async::plcrash_async_dwarf_cie_info_free()
    {
      ;
    }

    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_cie_info_init<unsigned int>(
            _QWORD *a1,
            unsigned int *a2,
            __int64 a3,
            __int64 *a4,
            __int64 a5)
    {
      __int64 v10; // x24
      __int64 result; // x0
      int v12; // w8
      __int64 v13; // x9
      __int64 v14; // x23
      __int64 v15; // x27
      _BYTE *v16; // x24
      unsigned __int64 v17; // x8
      unsigned __int64 v18; // x28
      __int64 v19; // x9
      __int64 v20; // x26
      int v21; // w8
      __int64 v22; // x25
      __int64 v23; // x24
      __int64 v24; // x24
      __int64 v25; // x8
      __int64 v26; // x2
      __int64 v27; // x24
      __int64 v28; // x24
      __int64 v29; // x25
      unsigned __int64 v30; // x10
      unsigned __int64 v31; // x8
      bool v32; // cf
      unsigned __int64 v33; // x8
      __int64 v34; // [xsp+10h] [xbp-90h]
      __int64 v35; // [xsp+10h] [xbp-90h]
      __int64 v36; // [xsp+10h] [xbp-90h]
      __int64 v37; // [xsp+18h] [xbp-88h] BYREF
      unsigned __int8 v38; // [xsp+27h] [xbp-79h] BYREF
      unsigned int v39; // [xsp+28h] [xbp-78h] BYREF
      unsigned __int8 v40; // [xsp+2Fh] [xbp-71h] BYREF
      __int64 v41; // [xsp+30h] [xbp-70h] BYREF
      __int64 v42; // [xsp+38h] [xbp-68h] BYREF
      unsigned __int8 v43; // [xsp+47h] [xbp-59h] BYREF
      unsigned int v44; // [xsp+48h] [xbp-58h] BYREF
      unsigned int v45; // [xsp+4Ch] [xbp-54h] BYREF
    
      v10 = BITplcrash_async_mobject_base_address((__int64)a2);
      BITplcrash_async_memset(a1, 0, 0x68u);
      if ( (unsigned int)BITplcrash_async_mobject_read_uint32((__int64)a2, a3, a5, 0, &v45) )
        return 5;
      if ( v45 == -1 )
      {
        result = BITplcrash_async_mobject_read_uint64((__int64)a2, a3, a5, 4, a1 + 1);
        if ( (_DWORD)result )
          return result;
        *a1 = a5 + 12 - v10;
        result = BITplcrash_async_mobject_read_uint64((__int64)a2, a3, a5, 12, a1 + 2);
        if ( (_DWORD)result )
          return result;
        v13 = a1[2];
        v12 = 1;
        v14 = 20;
        v15 = 12;
      }
      else
      {
        a1[1] = v45;
        *a1 = a5 + 4 - v10;
        result = BITplcrash_async_mobject_read_uint32((__int64)a2, a3, a5, 4, &v44);
        if ( (_DWORD)result )
          return result;
        v12 = 0;
        v13 = v44;
        a1[2] = v44;
        v14 = 8;
        v15 = 4;
      }
      if ( v13 && ((v12 | (v13 == 0xFFFFFFFFLL)) != 1 || v13 != -1 && v12 == 1) )
        return 5;
      v16 = a1 + 3;
      result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v14, (_BYTE *)a1 + 24);
      if ( !(_DWORD)result )
      {
        result = 5;
        v17 = (unsigned __int8)*v16;
        if ( v17 <= 4 )
        {
          v18 = 1;
          if ( ((1LL << v17) & 0x1A) != 0 )
          {
            v19 = 0;
            v34 = v14 | 1;
            while ( 1 )
            {
              v20 = v19;
              result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v14 + 1 + v19, &v43);
              if ( (_DWORD)result )
                break;
              v21 = v43;
              if ( !v20 )
              {
                if ( !v43 )
                  goto LABEL_24;
                if ( v43 != 122 )
                  return 4;
                *((_BYTE *)a1 + 56) = 1;
                v21 = 122;
              }
              v19 = v20 + 1;
              if ( v20 == -2 || !v21 )
              {
                v18 = v20 + 1;
                if ( v20 == -2 )
                  return 0;
    LABEL_24:
                v22 = v18 + v34;
                if ( *v16 == 4 )
                {
                  result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v18 + v34, (_BYTE *)a1 + 25);
                  if ( (_DWORD)result )
                    return result;
                  result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v22 + 1, (_BYTE *)a1 + 26);
                  if ( (_DWORD)result )
                    return result;
                  v22 += 2;
                }
                result = plcrash::BIT::async::plcrash_async_dwarf_read_uleb128((__int64)a2, a5, v22, a1 + 4, &v42);
                if ( (_DWORD)result )
                  return result;
                v23 = v42 + v22;
                result = plcrash::BIT::async::plcrash_async_dwarf_read_sleb128((__int64)a2, a5, v42 + v22, a1 + 5, &v42);
                if ( (_DWORD)result )
                  return result;
                v24 = v42 + v23;
                result = plcrash::BIT::async::plcrash_async_dwarf_read_uleb128((__int64)a2, a5, v24, a1 + 6, &v42);
                if ( (_DWORD)result )
                  return result;
                v25 = 0;
                v26 = v42 + v24;
                v41 = 0;
                if ( *((_BYTE *)a1 + 56) )
                {
                  v27 = v42 + v24;
                  result = plcrash::BIT::async::plcrash_async_dwarf_read_uleb128((__int64)a2, a5, v26, &v41, &v42);
                  if ( (_DWORD)result )
                    return result;
                  v28 = v42 + v27;
                  if ( v20 )
                  {
                    v29 = 1;
                    v35 = v28;
                    do
                    {
                      result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v14 + v29 + 1, &v40);
                      if ( (_DWORD)result )
                        return result;
                      if ( v40 > 0x4Bu )
                      {
                        switch ( v40 )
                        {
                          case 'L':
                            result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v35, (_BYTE *)a1 + 65);
                            if ( (_DWORD)result )
                              return result;
                            *((_BYTE *)a1 + 64) = 1;
                            goto LABEL_47;
                          case 'P':
                            result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v35, &v38);
                            if ( (_DWORD)result )
                              return result;
                            v36 = v35 + 1;
                            result = plcrash::BIT::async::gnu_ehptr_reader<unsigned int>::read(
                                       a4,
                                       a2,
                                       a5,
                                       v36,
                                       v38,
                                       &v39,
                                       &v37);
                            if ( (_DWORD)result )
                              return result;
                            a1[9] = v39;
                            *((_BYTE *)a1 + 66) = 1;
                            v35 = v37 + v36;
                            break;
                          case 'R':
                            result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v35, (_BYTE *)a1 + 81);
                            if ( (_DWORD)result )
                              return result;
                            *((_BYTE *)a1 + 80) = 1;
    LABEL_47:
                            ++v35;
                            break;
                          case 'S':
                            *((_BYTE *)a1 + 82) = 1;
                            break;
                          default:
                            goto LABEL_50;
                        }
                      }
                      else if ( v40 )
                      {
                        break;
                      }
                    }
                    while ( ++v29 < v18 );
                  }
    LABEL_50:
                  v25 = v41;
                }
                else
                {
                  v28 = v42 + v24;
                }
                v30 = a1[1];
                v31 = v28 - v15 + v25;
                a1[11] = v31 + *a1;
                v32 = v30 >= v31;
                v33 = v30 - v31;
                if ( !v32 )
                  return 5;
                a1[12] = v33;
                return 0;
              }
            }
          }
        }
      }
      return result;
    }

    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_cie_info_init<unsigned long long>(
            _QWORD *a1,
            unsigned int *a2,
            __int64 a3,
            __int64 *a4,
            __int64 a5)
    {
      __int64 v10; // x24
      __int64 result; // x0
      int v12; // w8
      __int64 v13; // x9
      __int64 v14; // x23
      __int64 v15; // x27
      _BYTE *v16; // x24
      unsigned __int64 v17; // x8
      unsigned __int64 v18; // x28
      __int64 v19; // x9
      __int64 v20; // x26
      int v21; // w8
      __int64 v22; // x25
      __int64 v23; // x24
      __int64 v24; // x24
      __int64 v25; // x8
      __int64 v26; // x2
      __int64 v27; // x24
      __int64 v28; // x24
      __int64 v29; // x25
      unsigned __int64 v30; // x10
      unsigned __int64 v31; // x8
      bool v32; // cf
      unsigned __int64 v33; // x8
      __int64 v34; // [xsp+18h] [xbp-98h]
      __int64 v35; // [xsp+18h] [xbp-98h]
      __int64 v36; // [xsp+18h] [xbp-98h]
      __int64 v37; // [xsp+20h] [xbp-90h] BYREF
      unsigned __int8 v38; // [xsp+2Fh] [xbp-81h] BYREF
      unsigned __int64 v39; // [xsp+30h] [xbp-80h] BYREF
      unsigned __int8 v40; // [xsp+3Fh] [xbp-71h] BYREF
      __int64 v41; // [xsp+40h] [xbp-70h] BYREF
      __int64 v42; // [xsp+48h] [xbp-68h] BYREF
      unsigned __int8 v43; // [xsp+57h] [xbp-59h] BYREF
      unsigned int v44; // [xsp+58h] [xbp-58h] BYREF
      unsigned int v45; // [xsp+5Ch] [xbp-54h] BYREF
    
      v10 = BITplcrash_async_mobject_base_address((__int64)a2);
      BITplcrash_async_memset(a1, 0, 0x68u);
      if ( (unsigned int)BITplcrash_async_mobject_read_uint32((__int64)a2, a3, a5, 0, &v45) )
        return 5;
      if ( v45 == -1 )
      {
        result = BITplcrash_async_mobject_read_uint64((__int64)a2, a3, a5, 4, a1 + 1);
        if ( (_DWORD)result )
          return result;
        *a1 = a5 + 12 - v10;
        result = BITplcrash_async_mobject_read_uint64((__int64)a2, a3, a5, 12, a1 + 2);
        if ( (_DWORD)result )
          return result;
        v13 = a1[2];
        v12 = 1;
        v14 = 20;
        v15 = 12;
      }
      else
      {
        a1[1] = v45;
        *a1 = a5 + 4 - v10;
        result = BITplcrash_async_mobject_read_uint32((__int64)a2, a3, a5, 4, &v44);
        if ( (_DWORD)result )
          return result;
        v12 = 0;
        v13 = v44;
        a1[2] = v44;
        v14 = 8;
        v15 = 4;
      }
      if ( v13 && ((v12 | (v13 == 0xFFFFFFFFLL)) != 1 || v13 != -1 && v12 == 1) )
        return 5;
      v16 = a1 + 3;
      result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v14, (_BYTE *)a1 + 24);
      if ( !(_DWORD)result )
      {
        result = 5;
        v17 = (unsigned __int8)*v16;
        if ( v17 <= 4 )
        {
          v18 = 1;
          if ( ((1LL << v17) & 0x1A) != 0 )
          {
            v19 = 0;
            v34 = v14 | 1;
            while ( 1 )
            {
              v20 = v19;
              result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v14 + 1 + v19, &v43);
              if ( (_DWORD)result )
                break;
              v21 = v43;
              if ( !v20 )
              {
                if ( !v43 )
                  goto LABEL_24;
                if ( v43 != 122 )
                  return 4;
                *((_BYTE *)a1 + 56) = 1;
                v21 = 122;
              }
              v19 = v20 + 1;
              if ( v20 == -2 || !v21 )
              {
                v18 = v20 + 1;
                if ( v20 == -2 )
                  return 0;
    LABEL_24:
                v22 = v18 + v34;
                if ( *v16 == 4 )
                {
                  result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v18 + v34, (_BYTE *)a1 + 25);
                  if ( (_DWORD)result )
                    return result;
                  result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v22 + 1, (_BYTE *)a1 + 26);
                  if ( (_DWORD)result )
                    return result;
                  v22 += 2;
                }
                result = plcrash::BIT::async::plcrash_async_dwarf_read_uleb128((__int64)a2, a5, v22, a1 + 4, &v42);
                if ( (_DWORD)result )
                  return result;
                v23 = v42 + v22;
                result = plcrash::BIT::async::plcrash_async_dwarf_read_sleb128((__int64)a2, a5, v42 + v22, a1 + 5, &v42);
                if ( (_DWORD)result )
                  return result;
                v24 = v42 + v23;
                result = plcrash::BIT::async::plcrash_async_dwarf_read_uleb128((__int64)a2, a5, v24, a1 + 6, &v42);
                if ( (_DWORD)result )
                  return result;
                v25 = 0;
                v26 = v42 + v24;
                v41 = 0;
                if ( *((_BYTE *)a1 + 56) )
                {
                  v27 = v42 + v24;
                  result = plcrash::BIT::async::plcrash_async_dwarf_read_uleb128((__int64)a2, a5, v26, &v41, &v42);
                  if ( (_DWORD)result )
                    return result;
                  v28 = v42 + v27;
                  if ( v20 )
                  {
                    v29 = 1;
                    v35 = v28;
                    do
                    {
                      result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v14 + v29 + 1, &v40);
                      if ( (_DWORD)result )
                        return result;
                      if ( v40 > 0x4Bu )
                      {
                        switch ( v40 )
                        {
                          case 'L':
                            result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v35, (_BYTE *)a1 + 65);
                            if ( (_DWORD)result )
                              return result;
                            *((_BYTE *)a1 + 64) = 1;
                            goto LABEL_47;
                          case 'P':
                            result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v35, &v38);
                            if ( (_DWORD)result )
                              return result;
                            v36 = v35 + 1;
                            result = plcrash::BIT::async::gnu_ehptr_reader<unsigned long long>::read(
                                       a4,
                                       a2,
                                       a5,
                                       v36,
                                       v38,
                                       &v39,
                                       &v37);
                            if ( (_DWORD)result )
                              return result;
                            a1[9] = v39;
                            *((_BYTE *)a1 + 66) = 1;
                            v35 = v37 + v36;
                            break;
                          case 'R':
                            result = BITplcrash_async_mobject_read_uint8((__int64)a2, a5, v35, (_BYTE *)a1 + 81);
                            if ( (_DWORD)result )
                              return result;
                            *((_BYTE *)a1 + 80) = 1;
    LABEL_47:
                            ++v35;
                            break;
                          case 'S':
                            *((_BYTE *)a1 + 82) = 1;
                            break;
                          default:
                            goto LABEL_50;
                        }
                      }
                      else if ( v40 )
                      {
                        break;
                      }
                    }
                    while ( ++v29 < v18 );
                  }
    LABEL_50:
                  v25 = v41;
                }
                else
                {
                  v28 = v42 + v24;
                }
                v30 = a1[1];
                v31 = v28 - v15 + v25;
                a1[11] = v31 + *a1;
                v32 = v30 >= v31;
                v33 = v30 - v31;
                if ( !v32 )
                  return 5;
                a1[12] = v33;
                return 0;
              }
            }
          }
        }
      }
      return result;
    }

    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_expression_eval<unsigned int,int>(
            __int64 a1,
            vm_map_t a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            __int64 a7,
            __int64 a8,
            unsigned __int64 a9,
            _DWORD *a10)
    {
      __int64 result; // x0
      unsigned __int64 v14; // x9
      _QWORD *v15; // x10
      unsigned __int8 *v16; // x9
      unsigned __int64 v17; // x11
      _DWORD *v18; // x8
      int v19; // w9
      int reg; // w21
      int v21; // w9
      int v22; // w0
      unsigned __int8 *v23; // x8
      int v24; // w0
      _QWORD *v25; // x8
      _QWORD *v26; // x8
      int v28; // w8
      _QWORD *v30; // x9
      _QWORD *v31; // x8
      __int16 v32; // w0
      _DWORD *v33; // x8
      int v34; // w9
      _DWORD *v35; // x8
      int v36; // w9
      unsigned __int64 v38; // x8
      _QWORD *v39; // x9
      _QWORD *v40; // x8
      _QWORD *v41; // x9
      int v42; // w10
      int v43; // w12
      _QWORD *v44; // x8
      _QWORD *v45; // x9
      int v46; // w12
      _QWORD *v47; // x10
      int v48; // w11
      int v49; // w14
      _QWORD *v50; // x9
      int v51; // w10
      _DWORD *v52; // x11
      int v53; // w9
      _QWORD *v54; // x8
      _QWORD *v55; // x10
      int v56; // w9
      _QWORD *v57; // x9
      _QWORD *v58; // x8
      int v59; // w10
      _QWORD *v60; // x9
      int v61; // w10
      _QWORD *v62; // x8
      _QWORD *v63; // x9
      unsigned int v64; // w10
      int v65; // w10
      _QWORD *v66; // x9
      int v67; // w10
      unsigned int v68; // w10
      _QWORD *v69; // x9
      int v70; // w10
      _QWORD *v71; // x9
      int v72; // w10
      _QWORD *v73; // x9
      int v74; // w10
      _QWORD *v75; // x9
      int v76; // w10
      _QWORD *v77; // x9
      int v78; // w10
      _QWORD *v79; // x9
      int v80; // w10
      _QWORD *v81; // x9
      int v82; // w10
      __int16 v83; // w0
      unsigned __int8 *v84; // x8
      _QWORD *v85; // x9
      unsigned __int64 v86; // x8
      _QWORD *v87; // x9
      int v88; // w10
      _QWORD *v89; // x9
      unsigned int v90; // w10
      _QWORD *v91; // x9
      unsigned int v92; // w10
      _QWORD *v93; // x9
      unsigned int v94; // w10
      _QWORD *v95; // x9
      unsigned int v96; // w10
      _QWORD *v97; // x9
      int v98; // w10
      unsigned __int8 *v99; // x9
      _QWORD *v101; // x13
      _QWORD *v102; // x12
      int v103; // w14
      _DWORD *v104; // x15
      int v105; // w13
      unsigned int v107; // w8
      _QWORD *v108; // x9
      unsigned __int64 v109; // x1
      unsigned __int8 *v110; // x10
      unsigned __int8 *v111; // x8
      __int64 v112; // x12
      _QWORD *v113; // x8
      __int64 v114; // [xsp+0h] [xbp-260h] BYREF
      int v115; // [xsp+14h] [xbp-24Ch] BYREF
      unsigned __int16 v116; // [xsp+18h] [xbp-248h] BYREF
      unsigned __int8 v117; // [xsp+1Bh] [xbp-245h] BYREF
      int v118; // [xsp+1Ch] [xbp-244h] BYREF
      unsigned __int64 v119; // [xsp+20h] [xbp-240h] BYREF
      __int64 v120; // [xsp+28h] [xbp-238h] BYREF
      int v121; // [xsp+34h] [xbp-22Ch] BYREF
      unsigned __int64 v122; // [xsp+38h] [xbp-228h] BYREF
      int v123; // [xsp+44h] [xbp-21Ch] BYREF
      unsigned __int64 v124; // [xsp+48h] [xbp-218h] BYREF
      __int64 v125; // [xsp+50h] [xbp-210h] BYREF
      unsigned __int8 *v126; // [xsp+58h] [xbp-208h] BYREF
      __int64 v127; // [xsp+60h] [xbp-200h]
      __int64 v128; // [xsp+68h] [xbp-1F8h]
      unsigned __int64 v129; // [xsp+78h] [xbp-1E8h]
      unsigned __int8 *v130; // [xsp+80h] [xbp-1E0h]
      __int64 (__fastcall **v131)(_QWORD); // [xsp+88h] [xbp-1D8h]
      _BYTE v132[400]; // [xsp+90h] [xbp-1D0h] BYREF
      _QWORD *v133; // [xsp+220h] [xbp-40h] BYREF
      __int64 v134; // [xsp+228h] [xbp-38h] BYREF
    
      v133 = v132;
      result = plcrash::BIT::async::dwarf_opstream::init(&v126, a1, a4, a5, a6, a7);
      if ( !(_DWORD)result )
      {
        if ( a9 )
        {
          v14 = 0;
          v15 = v133 - 50;
          do
          {
            if ( v132 == (_BYTE *)v15 )
              return 6;
            *((_DWORD *)v15 + 100) = *(_DWORD *)(a8 + 4 * v14);
            v133 = (_QWORD *)((char *)v15 + 404);
            ++v14;
            v15 = (_QWORD *)((char *)v15 + 4);
          }
          while ( v14 < a9 );
        }
        v16 = v126;
        v17 = v129;
        if ( (unsigned __int64)v126 >= v129 )
        {
          while ( 1 )
          {
            v110 = v130;
            if ( v130 == v16 )
              break;
            v111 = v16 + 1;
            v112 = *v16;
            v126 = v16 + 1;
            result = 4;
            switch ( (int)v112 )
            {
              case 6:
                v26 = v133;
                goto LABEL_94;
              case 8:
                if ( (unsigned __int64)v111 < v17 || v130 == v111 )
                  return 5;
                v28 = v16[1];
                goto LABEL_38;
              case 9:
                if ( (unsigned __int64)v111 < v17 || v130 == v111 )
                  return 5;
                v28 = (char)v16[1];
    LABEL_38:
                v126 = v16 + 2;
    LABEL_39:
                v30 = v133;
                if ( v133 == &v133 )
                  return 6;
                *(_DWORD *)v133 = v28;
                v133 = (_QWORD *)((char *)v30 + 4);
                goto LABEL_226;
              case 10:
                if ( (unsigned __int64)v111 < v17 || (unsigned __int64)(v130 - v111) < 2 )
                  return 5;
                v22 = (*v131)(*(unsigned __int16 *)v111);
                v23 = v126 + 2;
                goto LABEL_44;
              case 11:
                if ( (unsigned __int64)v111 < v17 || (unsigned __int64)(v130 - v111) < 2 )
                  return 5;
                v32 = (*v131)(*(unsigned __int16 *)v111);
                v126 += 2;
                v18 = v133;
                if ( v133 == &v133 )
                  return 6;
                v19 = v32;
                goto LABEL_19;
              case 12:
              case 13:
                if ( (unsigned __int64)v111 < v17 || (unsigned __int64)(v130 - v111) < 4 )
                  return 5;
                v22 = v131[1](*(unsigned int *)v111);
                v23 = v126 + 4;
    LABEL_44:
                v126 = v23;
                v31 = v133;
                if ( v133 == &v133 )
                  return 6;
                *(_DWORD *)v133 = v22;
                v133 = (_QWORD *)((char *)v31 + 4);
                goto LABEL_226;
              case 14:
              case 15:
                if ( (unsigned __int64)v111 < v17 || (unsigned __int64)(v130 - v111) < 8 )
                  return 5;
                v24 = v131[2](*(_QWORD *)v111);
                v126 += 8;
                v25 = v133;
                if ( v133 == &v133 )
                  return 6;
                *(_DWORD *)v133 = v24;
                v133 = (_QWORD *)((char *)v25 + 4);
                goto LABEL_226;
              case 16:
                if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                     v127,
                                     v128,
                                     (__int64)&v111[-v17],
                                     &v125,
                                     &v134)
                  || (unsigned __int64)&v126[v134] < v129
                  || &v126[v134] > v130 )
                {
                  return 5;
                }
                v126 += v134;
                v33 = v133;
                if ( v133 == &v133 )
                  return 6;
                v34 = v125;
                goto LABEL_60;
              case 17:
                if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                     v127,
                                     v128,
                                     (__int64)&v111[-v17],
                                     &v124,
                                     &v134)
                  || (unsigned __int64)&v126[v134] < v129
                  || &v126[v134] > v130 )
                {
                  return 5;
                }
                v126 += v134;
                v33 = v133;
                if ( v133 == &v133 )
                  return 6;
                v34 = v124;
    LABEL_60:
                *v33 = v34;
                v133 = v33 + 1;
                goto LABEL_226;
              case 18:
                v35 = v133;
                result = 5;
                if ( v133 == &v133 || v133 == (_QWORD *)v132 )
                  return result;
                v36 = *((_DWORD *)v133 - 1);
                goto LABEL_69;
              case 19:
                if ( v133 == (_QWORD *)v132 )
                  return 5;
                v133 = (_QWORD *)((char *)v133 - 4);
                goto LABEL_226;
              case 20:
                v35 = v133;
                if ( (unsigned __int64)(((char *)v133 - v132) >> 2) < 2 )
                  return 5;
                if ( v133 == &v133 )
                  goto LABEL_226;
                v36 = *((_DWORD *)v133 - 2);
    LABEL_69:
                *v35 = v36;
                v133 = v35 + 1;
                goto LABEL_226;
              case 21:
                if ( (unsigned __int64)v111 < v17 || v130 == v111 )
                  return 5;
                v38 = v16[1];
                v126 = v16 + 2;
                v39 = v133;
                if ( ((char *)v133 - v132) >> 2 <= v38 )
                  return 5;
                if ( v133 != &v133 )
                {
                  *(_DWORD *)v133 = *((_DWORD *)v133 + ~v38);
                  v133 = (_QWORD *)((char *)v39 + 4);
                }
                goto LABEL_226;
              case 22:
                v40 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 5;
                v41 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v40 - 4 == v132 )
                  return 5;
                v42 = *((_DWORD *)v40 - 1);
                v133 = v40 - 1;
                if ( v40 - 1 == &v133 )
                  return 5;
                v43 = *((_DWORD *)v40 - 2);
                *((_DWORD *)v40 - 2) = v42;
                v133 = (_QWORD *)((char *)v40 - 4);
                if ( v41 == &v133 )
                  return 5;
                *((_DWORD *)v40 - 1) = v43;
                v133 = v40;
                goto LABEL_226;
              case 23:
                v44 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 5;
                v45 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v44 - 4 == v132 )
                  return 5;
                v46 = *((_DWORD *)v44 - 1);
                v47 = v44 - 1;
                v133 = v44 - 1;
                if ( v44 - 1 == (_QWORD *)v132 )
                  return 5;
                v48 = *((_DWORD *)v44 - 2);
                v133 = (_QWORD *)((char *)v44 - 12);
                if ( (_QWORD *)((char *)v44 - 12) == &v133 )
                  return 5;
                v49 = *((_DWORD *)v44 - 3);
                *((_DWORD *)v44 - 3) = v46;
                v133 = v44 - 1;
                if ( v47 == &v133 )
                  return 5;
                *(_DWORD *)v47 = v49;
                v133 = (_QWORD *)((char *)v44 - 4);
                if ( v45 == &v133 )
                  return 5;
                *((_DWORD *)v44 - 1) = v48;
                v133 = v44;
                goto LABEL_226;
              case 24:
                v50 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 5;
                v26 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v50 - 4 == v132 )
                  return 5;
                v51 = *((_DWORD *)v50 - 1);
                v52 = v50 - 1;
                v133 = v50 - 1;
                if ( v50 - 1 == &v133 )
                  return 5;
                v53 = *((_DWORD *)v50 - 2);
                *v52 = v51;
                v133 = v26;
                if ( v26 == &v133 )
                  return 5;
                *(_DWORD *)v26 = v53;
                v133 = v26;
    LABEL_94:
                if ( v26 == (_QWORD *)v132 )
                  return 6;
                v133 = (_QWORD *)((char *)v26 - 4);
                result = BITplcrash_async_task_memcpy(a2, *((unsigned int *)v26 - 1), 0, (vm_address_t)&v118, 4u);
                if ( (_DWORD)result )
                  return result;
                v18 = v133;
                if ( v133 == &v133 )
                  return 6;
                v19 = v118;
                goto LABEL_19;
              case 25:
                v54 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v55 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                v56 = *((_DWORD *)v54 - 1);
                if ( v56 < 0 )
                {
                  if ( v55 == &v133 )
                    return 6;
    LABEL_224:
                  v56 = -v56;
                }
                else if ( v55 == &v133 )
                {
                  return 6;
                }
    LABEL_225:
                *((_DWORD *)v54 - 1) = v56;
                v133 = v54;
                goto LABEL_226;
              case 26:
                v57 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v57 - 4 == v132 )
                  return 6;
                v59 = *((_DWORD *)v57 - 1);
                v60 = v57 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 & v59;
                goto LABEL_190;
              case 27:
                v62 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v63 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v62 - 4 == v132 )
                  return 6;
                v64 = *((_DWORD *)v62 - 1);
                v133 = v62 - 1;
                if ( !v64 )
                  return 5;
                if ( v62 - 1 == &v133 )
                  return 6;
                v65 = *((_DWORD *)v62 - 2) / v64;
                goto LABEL_120;
              case 28:
                v66 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v66 - 4 == v132 )
                  return 6;
                v67 = *((_DWORD *)v66 - 1);
                v60 = v66 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 - v67;
                goto LABEL_190;
              case 29:
                v62 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v63 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v62 - 4 == v132 )
                  return 6;
                v68 = *((_DWORD *)v62 - 1);
                v133 = v62 - 1;
                if ( !v68 )
                  return 5;
                if ( v62 - 1 == &v133 )
                  return 6;
                v65 = *((_DWORD *)v62 - 2) % v68;
    LABEL_120:
                *((_DWORD *)v62 - 2) = v65;
                v133 = v63;
                goto LABEL_226;
              case 30:
                v69 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v69 - 4 == v132 )
                  return 6;
                v70 = *((_DWORD *)v69 - 1);
                v60 = v69 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 * v70;
                goto LABEL_190;
              case 31:
                v54 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (_QWORD *)((char *)v54 - 4) == &v133 )
                  return 6;
                v56 = *((_DWORD *)v54 - 1);
                goto LABEL_224;
              case 32:
                v54 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (_QWORD *)((char *)v54 - 4) == &v133 )
                  return 6;
                v56 = ~*((_DWORD *)v54 - 1);
                goto LABEL_225;
              case 33:
                v71 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v71 - 4 == v132 )
                  return 6;
                v72 = *((_DWORD *)v71 - 1);
                v60 = v71 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 | v72;
                goto LABEL_190;
              case 34:
                v73 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v73 - 4 == v132 )
                  return 6;
                v74 = *((_DWORD *)v73 - 1);
                v60 = v73 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 + v74;
                goto LABEL_190;
              case 35:
                if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                     v127,
                                     v128,
                                     (__int64)&v111[-v17],
                                     &v114,
                                     &v134)
                  || (unsigned __int64)&v126[v134] < v129
                  || &v126[v134] > v130 )
                {
                  return 5;
                }
                v126 += v134;
                v54 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (_QWORD *)((char *)v54 - 4) == &v133 )
                  return 6;
                v56 = v114 + *((_DWORD *)v54 - 1);
                goto LABEL_225;
              case 36:
                v75 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v75 - 4 == v132 )
                  return 6;
                v76 = *((_DWORD *)v75 - 1);
                v60 = v75 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 << v76;
                goto LABEL_190;
              case 37:
                v77 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v77 - 4 == v132 )
                  return 6;
                v78 = *((_DWORD *)v77 - 1);
                v60 = v77 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 >> v78;
                goto LABEL_190;
              case 38:
                v79 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v79 - 4 == v132 )
                  return 6;
                v80 = *((_DWORD *)v79 - 1);
                v60 = v79 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(int *)v60 >> v80;
                goto LABEL_190;
              case 39:
                v81 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v81 - 4 == v132 )
                  return 6;
                v82 = *((_DWORD *)v81 - 1);
                v60 = v81 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 ^ v82;
                goto LABEL_190;
              case 40:
                if ( (unsigned __int64)v111 < v17 || (unsigned __int64)(v130 - v111) < 2 )
                  return 5;
                v83 = (*v131)(*(unsigned __int16 *)v111);
                v84 = v126;
                v126 += 2;
                v85 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( !*((_DWORD *)v85 - 1) )
                  goto LABEL_226;
                v86 = (unsigned __int64)&v84[v83 + 2];
                goto LABEL_194;
              case 41:
                v87 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v87 - 4 == v132 )
                  return 6;
                v88 = *((_DWORD *)v87 - 1);
                v60 = v87 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 == v88;
                goto LABEL_190;
              case 42:
                v89 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v89 - 4 == v132 )
                  return 6;
                v90 = *((_DWORD *)v89 - 1);
                v60 = v89 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 >= v90;
                goto LABEL_190;
              case 43:
                v91 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v91 - 4 == v132 )
                  return 6;
                v92 = *((_DWORD *)v91 - 1);
                v60 = v91 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 > v92;
                goto LABEL_190;
              case 44:
                v93 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v93 - 4 == v132 )
                  return 6;
                v94 = *((_DWORD *)v93 - 1);
                v60 = v93 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 <= v94;
                goto LABEL_190;
              case 45:
                v95 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v95 - 4 == v132 )
                  return 6;
                v96 = *((_DWORD *)v95 - 1);
                v60 = v95 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 < v96;
                goto LABEL_190;
              case 46:
                v97 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v58 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v97 - 4 == v132 )
                  return 6;
                v98 = *((_DWORD *)v97 - 1);
                v60 = v97 - 1;
                v133 = v60;
                if ( v60 == &v133 )
                  return 6;
                v61 = *(_DWORD *)v60 != v98;
    LABEL_190:
                *(_DWORD *)v60 = v61;
                v133 = v58;
                goto LABEL_226;
              case 47:
                if ( (unsigned __int64)v111 < v17 || (unsigned __int64)(v130 - v111) < 2 )
                  return 5;
                v99 = &v126[(__int16)(*v131)(*(unsigned __int16 *)v111)];
                v126 += 2;
                v86 = (unsigned __int64)(v99 + 2);
    LABEL_194:
                if ( v86 < v129 || v86 > (unsigned __int64)v130 )
                  return 5;
                v126 = (unsigned __int8 *)v86;
                goto LABEL_226;
              case 48:
              case 49:
              case 50:
              case 51:
              case 52:
              case 53:
              case 54:
              case 55:
              case 56:
              case 57:
              case 58:
              case 59:
              case 60:
              case 61:
              case 62:
              case 63:
              case 64:
              case 65:
              case 66:
              case 67:
              case 68:
              case 69:
              case 70:
              case 71:
              case 72:
              case 73:
              case 74:
              case 75:
              case 76:
              case 77:
              case 78:
              case 79:
                v18 = v133;
                if ( v133 == &v133 )
                  return 6;
                v19 = v112 - 48;
                goto LABEL_19;
              case 112:
              case 113:
              case 114:
              case 115:
              case 116:
              case 117:
              case 118:
              case 119:
              case 120:
              case 121:
              case 122:
              case 123:
              case 124:
              case 125:
              case 126:
              case 127:
              case 128:
              case 129:
              case 130:
              case 131:
              case 132:
              case 133:
              case 134:
              case 135:
              case 136:
              case 137:
              case 138:
              case 139:
              case 140:
              case 141:
              case 142:
              case 143:
                if ( !(unsigned int)BITplcrash_async_thread_state_map_dwarf_to_reg(a3, v112 - 112, &v123) )
                  return 4;
                if ( !BITplcrash_async_thread_state_has_reg(a3, v123) )
                  return 8;
                reg = BITplcrash_async_thread_state_get_reg(a3, v123);
                if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                     v127,
                                     v128,
                                     (__int64)&v126[-v129],
                                     &v122,
                                     &v134)
                  || (unsigned __int64)&v126[v134] < v129
                  || &v126[v134] > v130 )
                {
                  return 5;
                }
                v126 += v134;
                v18 = v133;
                if ( v133 == &v133 )
                  return 6;
                v21 = v122;
                goto LABEL_18;
              case 146:
                if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                     v127,
                                     v128,
                                     (__int64)&v111[-v17],
                                     &v120,
                                     &v134)
                  || (unsigned __int64)&v126[v134] < v129
                  || &v126[v134] > v130 )
                {
                  return 5;
                }
                v126 += v134;
                if ( !(unsigned int)BITplcrash_async_thread_state_map_dwarf_to_reg(a3, (unsigned int)v120, &v121) )
                  return 4;
                if ( !BITplcrash_async_thread_state_has_reg(a3, v121) )
                  return 8;
                reg = BITplcrash_async_thread_state_get_reg(a3, v121);
                if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                     v127,
                                     v128,
                                     (__int64)&v126[-v129],
                                     &v119,
                                     &v134)
                  || (unsigned __int64)&v126[v134] < v129
                  || &v126[v134] > v130 )
                {
                  return 5;
                }
                v126 += v134;
                v18 = v133;
                if ( v133 == &v133 )
                  return 6;
                v21 = v119;
    LABEL_18:
                v19 = v21 + reg;
    LABEL_19:
                *v18 = v19;
                v133 = v18 + 1;
    LABEL_226:
                v16 = v126;
                v17 = v129;
                if ( (unsigned __int64)v126 < v129 )
                  goto LABEL_234;
                break;
              case 148:
                goto LABEL_214;
              case 149:
                v101 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 5;
                v102 = (_QWORD *)((char *)v133 - 4);
                v133 = (_QWORD *)((char *)v133 - 4);
                if ( (char *)v101 - 4 == v132 )
                  return 5;
                v103 = *((_DWORD *)v101 - 1);
                v104 = v101 - 1;
                v133 = v101 - 1;
                if ( v101 - 1 == &v133 )
                  return 5;
                v105 = *((_DWORD *)v101 - 2);
                *v104 = v103;
                v133 = v102;
                if ( v102 == &v133 )
                  return 5;
                *(_DWORD *)v102 = v105;
                v133 = v102;
    LABEL_214:
                if ( (unsigned __int64)v111 < v17 || v110 == v111 )
                  return 5;
                v107 = v16[1];
                v126 = v16 + 2;
                if ( v107 > 4 )
                  return 5;
                v108 = v133;
                if ( v133 == (_QWORD *)v132 )
                  return 6;
                v133 = (_QWORD *)((char *)v133 - 4);
                v109 = *((unsigned int *)v108 - 1);
                result = 5;
                switch ( v107 )
                {
                  case 1u:
                    result = BITplcrash_async_task_memcpy(a2, v109, 0, (vm_address_t)&v117, 1u);
                    if ( !(_DWORD)result )
                    {
                      v28 = v117;
                      goto LABEL_39;
                    }
                    break;
                  case 2u:
                    result = BITplcrash_async_task_memcpy(a2, v109, 0, (vm_address_t)&v116, 2u);
                    if ( !(_DWORD)result )
                    {
                      v28 = v116;
                      goto LABEL_39;
                    }
                    break;
                  case 4u:
                    result = BITplcrash_async_task_memcpy(a2, v109, 0, (vm_address_t)&v115, 4u);
                    if ( !(_DWORD)result )
                    {
                      v28 = v115;
                      goto LABEL_39;
                    }
                    break;
                  default:
                    return result;
                }
                return result;
              case 150:
                goto LABEL_226;
              default:
                return result;
            }
          }
        }
    LABEL_234:
        v113 = v133;
        if ( v133 == (_QWORD *)v132 )
        {
          return 5;
        }
        else
        {
          v133 = (_QWORD *)((char *)v133 - 4);
          *a10 = *((_DWORD *)v113 - 1);
          return 0;
        }
      }
      return result;
    }

    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_expression_eval<unsigned long long,long long>(
            __int64 a1,
            vm_map_t a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            __int64 a7,
            __int64 a8,
            unsigned __int64 a9,
            _QWORD *a10)
    {
      __int64 result; // x0
      unsigned __int64 v14; // x9
      __int64 *v15; // x10
      unsigned __int8 *v16; // x9
      unsigned __int64 v17; // x11
      unsigned __int64 *v18; // x8
      unsigned __int64 v19; // x9
      __int64 reg; // x21
      unsigned __int64 v21; // x9
      __int64 v22; // x0
      unsigned __int8 *v23; // x8
      __int64 **v24; // x8
      __int64 v26; // x8
      __int64 *v28; // x9
      __int64 *v29; // x8
      __int16 v30; // w0
      unsigned int v31; // w0
      int v32; // w0
      __int64 *v33; // x8
      __int64 v34; // x9
      unsigned __int64 v36; // x8
      __int64 *v37; // x9
      __int64 *v38; // x8
      __int64 **v39; // x9
      __int64 v40; // x10
      __int64 v41; // x12
      __int64 *v42; // x8
      __int64 **v43; // x9
      __int64 v44; // x12
      __int64 **v45; // x10
      __int64 v46; // x11
      __int64 *v47; // x14
      __int64 *v48; // x9
      __int64 v49; // x10
      __int64 *v50; // x11
      __int64 *v51; // x9
      __int64 *v52; // x8
      __int64 **v53; // x10
      __int64 v54; // x9
      __int64 *v55; // x9
      __int64 *v56; // x8
      __int64 v57; // x10
      __int64 *v58; // x9
      __int64 v59; // x10
      __int64 *v60; // x8
      __int64 *v61; // x9
      unsigned __int64 v62; // x10
      unsigned __int64 v63; // x10
      __int64 *v64; // x9
      __int64 v65; // x10
      unsigned __int64 v66; // x10
      __int64 *v67; // x9
      __int64 v68; // x10
      __int64 *v69; // x9
      __int64 v70; // x10
      __int64 *v71; // x9
      __int64 v72; // x10
      __int64 *v73; // x9
      __int64 v74; // x10
      __int64 *v75; // x9
      __int64 v76; // x10
      __int64 *v77; // x9
      __int64 v78; // x10
      __int64 *v79; // x9
      __int64 v80; // x10
      __int16 v81; // w0
      unsigned __int8 *v82; // x8
      __int64 *v83; // x9
      unsigned __int64 v84; // x8
      __int64 *v85; // x9
      __int64 v86; // x10
      __int64 *v87; // x9
      unsigned __int64 v88; // x10
      __int64 *v89; // x9
      unsigned __int64 v90; // x10
      __int64 *v91; // x9
      unsigned __int64 v92; // x10
      __int64 *v93; // x9
      unsigned __int64 v94; // x10
      __int64 *v95; // x9
      __int64 v96; // x10
      unsigned __int8 *v97; // x9
      __int64 *v99; // x13
      __int64 **v100; // x12
      __int64 v101; // x14
      __int64 *v102; // x15
      __int64 *v103; // x13
      unsigned int v105; // w8
      __int64 *v106; // x9
      unsigned __int64 v107; // x1
      unsigned __int8 *v108; // x10
      unsigned __int8 *v109; // x8
      __int64 v110; // x12
      __int64 *v111; // x8
      __int64 v112; // [xsp+0h] [xbp-3F0h] BYREF
      __int64 v113; // [xsp+8h] [xbp-3E8h] BYREF
      unsigned int v114; // [xsp+10h] [xbp-3E0h] BYREF
      unsigned __int16 v115; // [xsp+14h] [xbp-3DCh] BYREF
      unsigned __int8 v116; // [xsp+17h] [xbp-3D9h] BYREF
      unsigned __int64 v117; // [xsp+18h] [xbp-3D8h] BYREF
      unsigned __int64 v118; // [xsp+20h] [xbp-3D0h] BYREF
      __int64 v119; // [xsp+28h] [xbp-3C8h] BYREF
      int v120; // [xsp+34h] [xbp-3BCh] BYREF
      unsigned __int64 v121; // [xsp+38h] [xbp-3B8h] BYREF
      int v122; // [xsp+44h] [xbp-3ACh] BYREF
      unsigned __int64 v123; // [xsp+48h] [xbp-3A8h] BYREF
      unsigned __int64 v124; // [xsp+50h] [xbp-3A0h] BYREF
      unsigned __int8 *v125; // [xsp+58h] [xbp-398h] BYREF
      __int64 v126; // [xsp+60h] [xbp-390h]
      __int64 v127; // [xsp+68h] [xbp-388h]
      unsigned __int64 v128; // [xsp+78h] [xbp-378h]
      unsigned __int8 *v129; // [xsp+80h] [xbp-370h]
      __int64 (__fastcall **v130)(_QWORD); // [xsp+88h] [xbp-368h]
      _BYTE v131[800]; // [xsp+90h] [xbp-360h] BYREF
      __int64 *v132; // [xsp+3B0h] [xbp-40h] BYREF
      __int64 v133; // [xsp+3B8h] [xbp-38h] BYREF
    
      v132 = (__int64 *)v131;
      result = plcrash::BIT::async::dwarf_opstream::init(&v125, a1, a4, a5, a6, a7);
      if ( !(_DWORD)result )
      {
        if ( a9 )
        {
          v14 = 0;
          v15 = v132 - 100;
          do
          {
            if ( v131 == (_BYTE *)v15 )
              return 6;
            v15[100] = *(_QWORD *)(a8 + 8 * v14);
            v132 = v15 + 101;
            ++v14;
            ++v15;
          }
          while ( v14 < a9 );
        }
        v16 = v125;
        v17 = v128;
        if ( (unsigned __int64)v125 >= v128 )
        {
          while ( 1 )
          {
            v108 = v129;
            if ( v129 == v16 )
              break;
            v109 = v16 + 1;
            v110 = *v16;
            v125 = v16 + 1;
            result = 4;
            switch ( (int)v110 )
            {
              case 6:
                v24 = (__int64 **)v132;
                goto LABEL_97;
              case 8:
                if ( (unsigned __int64)v109 < v17 || v129 == v109 )
                  return 5;
                v26 = v16[1];
                goto LABEL_34;
              case 9:
                if ( (unsigned __int64)v109 < v17 || v129 == v109 )
                  return 5;
                v26 = (char)v16[1];
    LABEL_34:
                v125 = v16 + 2;
    LABEL_35:
                v28 = v132;
                if ( v132 == (__int64 *)&v132 )
                  return 6;
                *v132 = v26;
                v132 = v28 + 1;
                goto LABEL_229;
              case 10:
                if ( (unsigned __int64)v109 < v17 || (unsigned __int64)(v129 - v109) < 2 )
                  return 5;
                v22 = (*v130)(*(unsigned __int16 *)v109);
                v23 = v125 + 2;
                goto LABEL_40;
              case 11:
                if ( (unsigned __int64)v109 < v17 || (unsigned __int64)(v129 - v109) < 2 )
                  return 5;
                v30 = (*v130)(*(unsigned __int16 *)v109);
                v125 += 2;
                v18 = (unsigned __int64 *)v132;
                if ( v132 == (__int64 *)&v132 )
                  return 6;
                v19 = v30;
                goto LABEL_19;
              case 12:
                if ( (unsigned __int64)v109 < v17 || (unsigned __int64)(v129 - v109) < 4 )
                  return 5;
                v31 = v130[1](*(unsigned int *)v109);
                v125 += 4;
                v18 = (unsigned __int64 *)v132;
                if ( v132 == (__int64 *)&v132 )
                  return 6;
                v19 = v31;
                goto LABEL_19;
              case 13:
                if ( (unsigned __int64)v109 < v17 || (unsigned __int64)(v129 - v109) < 4 )
                  return 5;
                v32 = v130[1](*(unsigned int *)v109);
                v125 += 4;
                v18 = (unsigned __int64 *)v132;
                if ( v132 == (__int64 *)&v132 )
                  return 6;
                v19 = v32;
                goto LABEL_19;
              case 14:
              case 15:
                if ( (unsigned __int64)v109 < v17 || (unsigned __int64)(v129 - v109) < 8 )
                  return 5;
                v22 = v130[2](*(_QWORD *)v109);
                v23 = v125 + 8;
    LABEL_40:
                v125 = v23;
                v29 = v132;
                if ( v132 == (__int64 *)&v132 )
                  return 6;
                *v132 = v22;
                v132 = v29 + 1;
                goto LABEL_229;
              case 16:
                if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                     v126,
                                     v127,
                                     (__int64)&v109[-v17],
                                     &v124,
                                     &v133)
                  || (unsigned __int64)&v125[v133] < v128
                  || &v125[v133] > v129 )
                {
                  return 5;
                }
                v125 += v133;
                v18 = (unsigned __int64 *)v132;
                if ( v132 == (__int64 *)&v132 )
                  return 6;
                v19 = v124;
                goto LABEL_19;
              case 17:
                if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                     v126,
                                     v127,
                                     (__int64)&v109[-v17],
                                     &v123,
                                     &v133)
                  || (unsigned __int64)&v125[v133] < v128
                  || &v125[v133] > v129 )
                {
                  return 5;
                }
                v125 += v133;
                v18 = (unsigned __int64 *)v132;
                if ( v132 == (__int64 *)&v132 )
                  return 6;
                v19 = v123;
                goto LABEL_19;
              case 18:
                v33 = v132;
                result = 5;
                if ( v132 == (__int64 *)&v132 || v132 == (__int64 *)v131 )
                  return result;
                v34 = *(v132 - 1);
                goto LABEL_72;
              case 19:
                if ( v132 == (__int64 *)v131 )
                  return 5;
                --v132;
                goto LABEL_229;
              case 20:
                v33 = v132;
                if ( (unsigned __int64)(((char *)v132 - v131) >> 3) < 2 )
                  return 5;
                if ( v132 == (__int64 *)&v132 )
                  goto LABEL_229;
                v34 = *(v132 - 2);
    LABEL_72:
                *v33 = v34;
                v132 = v33 + 1;
                goto LABEL_229;
              case 21:
                if ( (unsigned __int64)v109 < v17 || v129 == v109 )
                  return 5;
                v36 = v16[1];
                v125 = v16 + 2;
                v37 = v132;
                if ( ((char *)v132 - v131) >> 3 <= v36 )
                  return 5;
                if ( v132 != (__int64 *)&v132 )
                {
                  *v132 = v132[~v36];
                  v132 = v37 + 1;
                }
                goto LABEL_229;
              case 22:
                v38 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 5;
                v39 = (__int64 **)--v132;
                if ( v38 - 1 == (__int64 *)v131 )
                  return 5;
                v40 = *(v38 - 1);
                v132 = v38 - 2;
                if ( v38 - 2 == (__int64 *)&v132 )
                  return 5;
                v41 = *(v38 - 2);
                *(v38 - 2) = v40;
                v132 = v38 - 1;
                if ( v39 == &v132 )
                  return 5;
                *(v38 - 1) = v41;
                v132 = v38;
                goto LABEL_229;
              case 23:
                v42 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 5;
                v43 = (__int64 **)--v132;
                if ( v42 - 1 == (__int64 *)v131 )
                  return 5;
                v44 = *(v42 - 1);
                v45 = (__int64 **)(v42 - 2);
                v132 = v42 - 2;
                if ( v42 - 2 == (__int64 *)v131 )
                  return 5;
                v46 = *(v42 - 2);
                v132 = v42 - 3;
                if ( v42 - 3 == (__int64 *)&v132 )
                  return 5;
                v47 = (__int64 *)*(v42 - 3);
                *(v42 - 3) = v44;
                v132 = v42 - 2;
                if ( v45 == &v132 )
                  return 5;
                *v45 = v47;
                v132 = v42 - 1;
                if ( v43 == &v132 )
                  return 5;
                *(v42 - 1) = v46;
                v132 = v42;
                goto LABEL_229;
              case 24:
                v48 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 5;
                v24 = (__int64 **)--v132;
                if ( v48 - 1 == (__int64 *)v131 )
                  return 5;
                v49 = *(v48 - 1);
                v50 = v48 - 2;
                v132 = v48 - 2;
                if ( v48 - 2 == (__int64 *)&v132 )
                  return 5;
                v51 = (__int64 *)*(v48 - 2);
                *v50 = v49;
                v132 = (__int64 *)v24;
                if ( v24 == &v132 )
                  return 5;
                *v24 = v51;
                v132 = (__int64 *)v24;
    LABEL_97:
                if ( v24 == (__int64 **)v131 )
                  return 6;
                v132 = (__int64 *)(v24 - 1);
                result = BITplcrash_async_task_memcpy(a2, (unsigned __int64)*(v24 - 1), 0, (vm_address_t)&v117, 8u);
                if ( (_DWORD)result )
                  return result;
                v18 = (unsigned __int64 *)v132;
                if ( v132 == (__int64 *)&v132 )
                  return 6;
                v19 = v117;
                goto LABEL_19;
              case 25:
                v52 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v53 = (__int64 **)--v132;
                v54 = *(v52 - 1);
                if ( v54 < 0 )
                {
                  if ( v53 == &v132 )
                    return 6;
    LABEL_227:
                  v54 = -v54;
                }
                else if ( v53 == &v132 )
                {
                  return 6;
                }
    LABEL_228:
                *(v52 - 1) = v54;
                v132 = v52;
                goto LABEL_229;
              case 26:
                v55 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v55 - 1 == (__int64 *)v131 )
                  return 6;
                v57 = *(v55 - 1);
                v58 = v55 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 & v57;
                goto LABEL_193;
              case 27:
                v60 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v61 = --v132;
                if ( v60 - 1 == (__int64 *)v131 )
                  return 6;
                v62 = *(v60 - 1);
                v132 = v60 - 2;
                if ( !v62 )
                  return 5;
                if ( v60 - 2 == (__int64 *)&v132 )
                  return 6;
                v63 = *(v60 - 2) / v62;
                goto LABEL_123;
              case 28:
                v64 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v64 - 1 == (__int64 *)v131 )
                  return 6;
                v65 = *(v64 - 1);
                v58 = v64 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 - v65;
                goto LABEL_193;
              case 29:
                v60 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v61 = --v132;
                if ( v60 - 1 == (__int64 *)v131 )
                  return 6;
                v66 = *(v60 - 1);
                v132 = v60 - 2;
                if ( !v66 )
                  return 5;
                if ( v60 - 2 == (__int64 *)&v132 )
                  return 6;
                v63 = *(v60 - 2) % v66;
    LABEL_123:
                *(v60 - 2) = v63;
                v132 = v61;
                goto LABEL_229;
              case 30:
                v67 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v67 - 1 == (__int64 *)v131 )
                  return 6;
                v68 = *(v67 - 1);
                v58 = v67 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 * v68;
                goto LABEL_193;
              case 31:
                v52 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                --v132;
                if ( v52 - 1 == (__int64 *)&v132 )
                  return 6;
                v54 = *(v52 - 1);
                goto LABEL_227;
              case 32:
                v52 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                --v132;
                if ( v52 - 1 == (__int64 *)&v132 )
                  return 6;
                v54 = ~*(v52 - 1);
                goto LABEL_228;
              case 33:
                v69 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v69 - 1 == (__int64 *)v131 )
                  return 6;
                v70 = *(v69 - 1);
                v58 = v69 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 | v70;
                goto LABEL_193;
              case 34:
                v71 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v71 - 1 == (__int64 *)v131 )
                  return 6;
                v72 = *(v71 - 1);
                v58 = v71 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 + v72;
                goto LABEL_193;
              case 35:
                if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                     v126,
                                     v127,
                                     (__int64)&v109[-v17],
                                     &v112,
                                     &v133)
                  || (unsigned __int64)&v125[v133] < v128
                  || &v125[v133] > v129 )
                {
                  return 5;
                }
                v125 += v133;
                v52 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                --v132;
                if ( v52 - 1 == (__int64 *)&v132 )
                  return 6;
                v54 = *(v52 - 1) + v112;
                goto LABEL_228;
              case 36:
                v73 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v73 - 1 == (__int64 *)v131 )
                  return 6;
                v74 = *(v73 - 1);
                v58 = v73 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 << v74;
                goto LABEL_193;
              case 37:
                v75 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v75 - 1 == (__int64 *)v131 )
                  return 6;
                v76 = *(v75 - 1);
                v58 = v75 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = (unsigned __int64)*v58 >> v76;
                goto LABEL_193;
              case 38:
                v77 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v77 - 1 == (__int64 *)v131 )
                  return 6;
                v78 = *(v77 - 1);
                v58 = v77 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 >> v78;
                goto LABEL_193;
              case 39:
                v79 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v79 - 1 == (__int64 *)v131 )
                  return 6;
                v80 = *(v79 - 1);
                v58 = v79 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 ^ v80;
                goto LABEL_193;
              case 40:
                if ( (unsigned __int64)v109 < v17 || (unsigned __int64)(v129 - v109) < 2 )
                  return 5;
                v81 = (*v130)(*(unsigned __int16 *)v109);
                v82 = v125;
                v125 += 2;
                v83 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                --v132;
                if ( !*(v83 - 1) )
                  goto LABEL_229;
                v84 = (unsigned __int64)&v82[v81 + 2];
                goto LABEL_197;
              case 41:
                v85 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v85 - 1 == (__int64 *)v131 )
                  return 6;
                v86 = *(v85 - 1);
                v58 = v85 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 == v86;
                goto LABEL_193;
              case 42:
                v87 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v87 - 1 == (__int64 *)v131 )
                  return 6;
                v88 = *(v87 - 1);
                v58 = v87 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 >= v88;
                goto LABEL_193;
              case 43:
                v89 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v89 - 1 == (__int64 *)v131 )
                  return 6;
                v90 = *(v89 - 1);
                v58 = v89 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 > v90;
                goto LABEL_193;
              case 44:
                v91 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v91 - 1 == (__int64 *)v131 )
                  return 6;
                v92 = *(v91 - 1);
                v58 = v91 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 <= v92;
                goto LABEL_193;
              case 45:
                v93 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v93 - 1 == (__int64 *)v131 )
                  return 6;
                v94 = *(v93 - 1);
                v58 = v93 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 < v94;
                goto LABEL_193;
              case 46:
                v95 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                v56 = --v132;
                if ( v95 - 1 == (__int64 *)v131 )
                  return 6;
                v96 = *(v95 - 1);
                v58 = v95 - 2;
                v132 = v58;
                if ( v58 == (__int64 *)&v132 )
                  return 6;
                v59 = *v58 != v96;
    LABEL_193:
                *v58 = v59;
                v132 = v56;
                goto LABEL_229;
              case 47:
                if ( (unsigned __int64)v109 < v17 || (unsigned __int64)(v129 - v109) < 2 )
                  return 5;
                v97 = &v125[(__int16)(*v130)(*(unsigned __int16 *)v109)];
                v125 += 2;
                v84 = (unsigned __int64)(v97 + 2);
    LABEL_197:
                if ( v84 < v128 || v84 > (unsigned __int64)v129 )
                  return 5;
                v125 = (unsigned __int8 *)v84;
                goto LABEL_229;
              case 48:
              case 49:
              case 50:
              case 51:
              case 52:
              case 53:
              case 54:
              case 55:
              case 56:
              case 57:
              case 58:
              case 59:
              case 60:
              case 61:
              case 62:
              case 63:
              case 64:
              case 65:
              case 66:
              case 67:
              case 68:
              case 69:
              case 70:
              case 71:
              case 72:
              case 73:
              case 74:
              case 75:
              case 76:
              case 77:
              case 78:
              case 79:
                v18 = (unsigned __int64 *)v132;
                if ( v132 == (__int64 *)&v132 )
                  return 6;
                v19 = v110 - 48;
                goto LABEL_19;
              case 112:
              case 113:
              case 114:
              case 115:
              case 116:
              case 117:
              case 118:
              case 119:
              case 120:
              case 121:
              case 122:
              case 123:
              case 124:
              case 125:
              case 126:
              case 127:
              case 128:
              case 129:
              case 130:
              case 131:
              case 132:
              case 133:
              case 134:
              case 135:
              case 136:
              case 137:
              case 138:
              case 139:
              case 140:
              case 141:
              case 142:
              case 143:
                if ( !(unsigned int)BITplcrash_async_thread_state_map_dwarf_to_reg(a3, v110 - 112, &v122) )
                  return 4;
                if ( !BITplcrash_async_thread_state_has_reg(a3, v122) )
                  return 8;
                reg = BITplcrash_async_thread_state_get_reg(a3, v122);
                if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                     v126,
                                     v127,
                                     (__int64)&v125[-v128],
                                     &v121,
                                     &v133)
                  || (unsigned __int64)&v125[v133] < v128
                  || &v125[v133] > v129 )
                {
                  return 5;
                }
                v125 += v133;
                v18 = (unsigned __int64 *)v132;
                if ( v132 == (__int64 *)&v132 )
                  return 6;
                v21 = v121;
                goto LABEL_18;
              case 146:
                if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                     v126,
                                     v127,
                                     (__int64)&v109[-v17],
                                     &v119,
                                     &v133)
                  || (unsigned __int64)&v125[v133] < v128
                  || &v125[v133] > v129 )
                {
                  return 5;
                }
                v125 += v133;
                if ( !(unsigned int)BITplcrash_async_thread_state_map_dwarf_to_reg(a3, v119, &v120) )
                  return 4;
                if ( !BITplcrash_async_thread_state_has_reg(a3, v120) )
                  return 8;
                reg = BITplcrash_async_thread_state_get_reg(a3, v120);
                if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                     v126,
                                     v127,
                                     (__int64)&v125[-v128],
                                     &v118,
                                     &v133)
                  || (unsigned __int64)&v125[v133] < v128
                  || &v125[v133] > v129 )
                {
                  return 5;
                }
                v125 += v133;
                v18 = (unsigned __int64 *)v132;
                if ( v132 == (__int64 *)&v132 )
                  return 6;
                v21 = v118;
    LABEL_18:
                v19 = v21 + reg;
    LABEL_19:
                *v18 = v19;
                v132 = (__int64 *)(v18 + 1);
    LABEL_229:
                v16 = v125;
                v17 = v128;
                if ( (unsigned __int64)v125 < v128 )
                  goto LABEL_239;
                break;
              case 148:
                goto LABEL_217;
              case 149:
                v99 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 5;
                v100 = (__int64 **)--v132;
                if ( v99 - 1 == (__int64 *)v131 )
                  return 5;
                v101 = *(v99 - 1);
                v102 = v99 - 2;
                v132 = v99 - 2;
                if ( v99 - 2 == (__int64 *)&v132 )
                  return 5;
                v103 = (__int64 *)*(v99 - 2);
                *v102 = v101;
                v132 = (__int64 *)v100;
                if ( v100 == &v132 )
                  return 5;
                *v100 = v103;
                v132 = (__int64 *)v100;
    LABEL_217:
                if ( (unsigned __int64)v109 < v17 || v108 == v109 )
                  return 5;
                v105 = v16[1];
                v125 = v16 + 2;
                if ( v105 > 8 )
                  return 5;
                v106 = v132;
                if ( v132 == (__int64 *)v131 )
                  return 6;
                --v132;
                result = 5;
                v107 = *(v106 - 1);
                switch ( v105 )
                {
                  case 1u:
                    result = BITplcrash_async_task_memcpy(a2, v107, 0, (vm_address_t)&v116, 1u);
                    if ( !(_DWORD)result )
                    {
                      v26 = v116;
                      goto LABEL_35;
                    }
                    break;
                  case 2u:
                    result = BITplcrash_async_task_memcpy(a2, v107, 0, (vm_address_t)&v115, 2u);
                    if ( !(_DWORD)result )
                    {
                      v26 = v115;
                      goto LABEL_35;
                    }
                    break;
                  case 4u:
                    result = BITplcrash_async_task_memcpy(a2, v107, 0, (vm_address_t)&v114, 4u);
                    if ( !(_DWORD)result )
                    {
                      v26 = v114;
                      goto LABEL_35;
                    }
                    break;
                  case 8u:
                    result = BITplcrash_async_task_memcpy(a2, v107, 0, (vm_address_t)&v113, 8u);
                    if ( !(_DWORD)result )
                    {
                      v26 = v113;
                      goto LABEL_35;
                    }
                    break;
                  default:
                    return result;
                }
                return result;
              case 150:
                goto LABEL_229;
              default:
                return result;
            }
          }
        }
    LABEL_239:
        v111 = v132;
        if ( v132 == (__int64 *)v131 )
        {
          return 5;
        }
        else
        {
          --v132;
          *a10 = *(v111 - 1);
          return 0;
        }
      }
      return result;
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_read_uintmax64<unsigned long long>(
            __int64 a1,
            __int64 (__fastcall **a2)(_QWORD),
            __int64 a3,
            __int64 a4,
            int a5,
            __int64 *a6)
    {
      return __ZN7plcrash3BIT5async34plcrash_async_dwarf_read_uintmax64IyEE15plcrash_error_tP21plcrash_async_mobjectPK26BITplcrash_async_byteordermlhPT_(
               a1,
               a2,
               a3,
               a4,
               a5,
               a6);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_fde_info_init<unsigned int>(
            _QWORD *a1,
            unsigned int *a2,
            __int64 a3,
            __int64 a4,
            int a5)
    {
      return __ZN7plcrash3BIT5async33plcrash_async_dwarf_fde_info_initIjEE15plcrash_error_tPNS1_28plcrash_async_dwarf_fde_infoEP21plcrash_async_mobjectPK26BITplcrash_async_byteordermb(
               a1,
               a2,
               a3,
               a4,
               a5);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_fde_info_init<unsigned long long>(
            _QWORD *a1,
            unsigned int *a2,
            __int64 a3,
            __int64 a4,
            int a5)
    {
      return __ZN7plcrash3BIT5async33plcrash_async_dwarf_fde_info_initIyEE15plcrash_error_tPNS1_28plcrash_async_dwarf_fde_infoEP21plcrash_async_mobjectPK26BITplcrash_async_byteordermb(
               a1,
               a2,
               a3,
               a4,
               a5);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_cie_info_init<unsigned int>(
            _QWORD *a1,
            unsigned int *a2,
            __int64 a3,
            __int64 *a4,
            __int64 a5)
    {
      return __ZN7plcrash3BIT5async33plcrash_async_dwarf_cie_info_initIjEE15plcrash_error_tPNS1_28plcrash_async_dwarf_cie_infoEP21plcrash_async_mobjectPK26BITplcrash_async_byteorderPNS1_16gnu_ehptr_readerIT_EEm(
               a1,
               a2,
               a3,
               a4,
               a5);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_cie_info_init<unsigned long long>(
            _QWORD *a1,
            unsigned int *a2,
            __int64 a3,
            __int64 *a4,
            __int64 a5)
    {
      return __ZN7plcrash3BIT5async33plcrash_async_dwarf_cie_info_initIyEE15plcrash_error_tPNS1_28plcrash_async_dwarf_cie_infoEP21plcrash_async_mobjectPK26BITplcrash_async_byteorderPNS1_16gnu_ehptr_readerIT_EEm(
               a1,
               a2,
               a3,
               a4,
               a5);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_expression_eval<unsigned int,int>(
            __int64 a1,
            vm_map_t a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            __int64 a7,
            __int64 a8,
            unsigned __int64 a9,
            _DWORD *a10)
    {
      return __ZN7plcrash3BIT5async35plcrash_async_dwarf_expression_evalIjiEE15plcrash_error_tP21plcrash_async_mobjectjPK26plcrash_async_thread_statePK26BITplcrash_async_byteordermlmPT_mSD_(
               a1,
               a2,
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::plcrash_async_dwarf_expression_eval<unsigned long long,long long>(
            __int64 a1,
            vm_map_t a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            __int64 a7,
            __int64 a8,
            unsigned __int64 a9,
            _QWORD *a10)
    {
      return __ZN7plcrash3BIT5async35plcrash_async_dwarf_expression_evalIyxEE15plcrash_error_tP21plcrash_async_mobjectjPK26plcrash_async_thread_statePK26BITplcrash_async_byteordermlmPT_mSD_(
               a1,
               a2,
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10);
    }

}; // end class plcrash::BIT::async
