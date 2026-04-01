class plcrash::BIT::async::gnu_ehptr_reader<ulong long>
{
public:

    __int64 __fastcall plcrash::BIT::async::gnu_ehptr_reader<unsigned long long>::gnu_ehptr_reader(
            __int64 result,
            __int64 a2)
    {
      *(_QWORD *)result = a2;
      *(_BYTE *)(result + 8) = 0;
      *(_BYTE *)(result + 32) = 0;
      *(_BYTE *)(result + 48) = 0;
      *(_BYTE *)(result + 64) = 0;
      return result;
    }

    __int64 __fastcall plcrash::BIT::async::gnu_ehptr_reader<unsigned long long>::read(
            __int64 *a1,
            unsigned int *a2,
            __int64 a3,
            __int64 a4,
            int a5,
            unsigned __int64 *a6,
            __int64 *a7)
    {
      char v9; // w22
      __int64 result; // x0
      unsigned int v13; // w9
      __int64 v14; // x24
      __int64 v15; // x9
      __int64 v16; // x9
      __int64 v17; // x25
      _QWORD *v18; // x0
      unsigned __int64 v19; // x8
      __int64 v20; // x8
      __int64 v21; // x8
      __int64 v22; // x8
      __int64 v23; // x8
      __int64 v24; // x8
      vm_map_t v25; // w0
      __int64 v26; // [xsp+8h] [xbp-88h] BYREF
      int v27; // [xsp+10h] [xbp-80h] BYREF
      __int16 v28; // [xsp+16h] [xbp-7Ah] BYREF
      __int64 v29; // [xsp+18h] [xbp-78h] BYREF
      unsigned __int64 v30; // [xsp+20h] [xbp-70h] BYREF
      __int64 v31; // [xsp+28h] [xbp-68h] BYREF
      unsigned int v32; // [xsp+30h] [xbp-60h] BYREF
      unsigned __int16 v33; // [xsp+36h] [xbp-5Ah] BYREF
      __int64 v34; // [xsp+38h] [xbp-58h] BYREF
      __int64 v35; // [xsp+40h] [xbp-50h] BYREF
      unsigned __int64 v36; // [xsp+48h] [xbp-48h] BYREF
    
      v9 = a5;
      if ( a5 == 255 )
        return 8;
      *a7 = 0;
      v13 = a5 & 0x70;
      result = 4;
      if ( v13 <= 0x1F )
      {
        if ( (a5 & 0x70) != 0 )
        {
          if ( v13 != 16 )
            return result;
          v14 = a4 + a3;
        }
        else
        {
          v14 = 0;
        }
        goto LABEL_21;
      }
      if ( (a5 & 0x70u) > 0x3F )
      {
        if ( v13 == 64 )
        {
          if ( !*((_BYTE *)a1 + 64) )
            return 4;
          v14 = a1[9];
        }
        else
        {
          if ( v13 != 80 )
            return result;
          if ( !*((_BYTE *)a1 + 8) )
            return 4;
          v14 = 0;
          v15 = a1[3] + a3 - a1[2];
          v16 = ((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL) - v15;
          a3 += v16;
          *a7 = v16;
        }
      }
      else
      {
        if ( v13 == 32 )
        {
          if ( *((_BYTE *)a1 + 32) )
          {
            v14 = a1[5];
            goto LABEL_21;
          }
          return 4;
        }
        if ( v13 != 48 )
          return result;
        if ( !*((_BYTE *)a1 + 48) )
          return 4;
        v14 = a1[7];
      }
    LABEL_21:
      result = 4;
      switch ( a5 & 0xF )
      {
        case 0:
          v17 = *a1;
          v18 = (_QWORD *)BITplcrash_async_mobject_remap_address((__int64)a2, a3, a4, 8);
          if ( v18 )
          {
            v19 = (*(__int64 (__fastcall **)(_QWORD))(v17 + 16))(*v18) + v14;
            goto LABEL_45;
          }
          result = 5;
          break;
        case 1:
          result = plcrash::BIT::async::plcrash_async_dwarf_read_uleb128((__int64)a2, a3, a4, &v35, &v34);
          if ( !(_DWORD)result )
          {
            *a6 = v35 + v14;
            v20 = v34;
            goto LABEL_35;
          }
          break;
        case 2:
          result = BITplcrash_async_mobject_read_uint16((__int64)a2, (__int64 (__fastcall **)(_QWORD))*a1, a3, a4, &v33);
          if ( !(_DWORD)result )
          {
            v21 = v33;
            goto LABEL_38;
          }
          break;
        case 3:
          result = BITplcrash_async_mobject_read_uint32((__int64)a2, *a1, a3, a4, &v32);
          if ( !(_DWORD)result )
          {
            v22 = v32;
            goto LABEL_41;
          }
          break;
        case 4:
          result = BITplcrash_async_mobject_read_uint64((__int64)a2, *a1, a3, a4, &v31);
          if ( !(_DWORD)result )
          {
            v23 = v31;
            goto LABEL_44;
          }
          break;
        case 9:
          result = plcrash::BIT::async::plcrash_async_dwarf_read_sleb128((__int64)a2, a3, a4, &v30, &v29);
          if ( !(_DWORD)result )
          {
            *a6 = v30 + v14;
            v20 = v29;
    LABEL_35:
            v24 = *a7 + v20;
            goto LABEL_46;
          }
          break;
        case 0xA:
          result = BITplcrash_async_mobject_read_uint16((__int64)a2, (__int64 (__fastcall **)(_QWORD))*a1, a3, a4, &v28);
          if ( !(_DWORD)result )
          {
            v21 = v28;
    LABEL_38:
            *a6 = v21 + v14;
            v24 = *a7 + 2;
            goto LABEL_46;
          }
          break;
        case 0xB:
          result = BITplcrash_async_mobject_read_uint32((__int64)a2, *a1, a3, a4, &v27);
          if ( !(_DWORD)result )
          {
            v22 = v27;
    LABEL_41:
            *a6 = v22 + v14;
            v24 = *a7 + 4;
            goto LABEL_46;
          }
          break;
        case 0xC:
          result = BITplcrash_async_mobject_read_uint64((__int64)a2, *a1, a3, a4, &v26);
          if ( !(_DWORD)result )
          {
            v23 = v26;
    LABEL_44:
            v19 = v23 + v14;
    LABEL_45:
            *a6 = v19;
            v24 = *a7 + 8;
    LABEL_46:
            *a7 = v24;
            if ( v9 < 0 )
            {
              v25 = BITplcrash_async_mobject_task(a2);
              result = BITplcrash_async_task_read_uint64(v25, *a1, *a6, 0, &v36);
              if ( !(_DWORD)result )
              {
                *a6 = v36;
                result = 0;
              }
            }
            else
            {
              result = 0;
            }
          }
          break;
        default:
          return result;
      }
      return result;
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::gnu_ehptr_reader<unsigned long long>::read(
            __int64 *a1,
            unsigned int *a2,
            __int64 a3,
            __int64 a4,
            int a5,
            unsigned __int64 *a6,
            __int64 *a7)
    {
      return __ZN7plcrash3BIT5async16gnu_ehptr_readerIyE4readEP21plcrash_async_mobjectmlNS1_8DW_EH_PEEPyPm(
               a1,
               a2,
               a3,
               a4,
               a5,
               a6,
               a7);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::gnu_ehptr_reader<unsigned long long>::gnu_ehptr_reader(
            __int64 result,
            __int64 a2)
    {
      return __ZN7plcrash3BIT5async16gnu_ehptr_readerIyEC1EPK26BITplcrash_async_byteorder(result, a2);
    }

}; // end class plcrash::BIT::async::gnu_ehptr_reader<ulong long>
