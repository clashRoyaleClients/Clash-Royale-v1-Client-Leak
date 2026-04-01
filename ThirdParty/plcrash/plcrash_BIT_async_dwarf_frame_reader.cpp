class plcrash::BIT::async::dwarf_frame_reader
{
public:

    __int64 __fastcall plcrash::BIT::async::dwarf_frame_reader::init(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
    {
      *(_QWORD *)a1 = a2;
      *(_QWORD *)(a1 + 8) = a3;
      *(_BYTE *)(a1 + 17) = a5;
      *(_BYTE *)(a1 + 16) = a4;
      return 0;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_frame_reader::find_fde(
            _QWORD *a1,
            __int64 a2,
            unsigned __int64 a3,
            __int64 a4)
    {
      __int64 v8; // x22
      __int64 v9; // x24
      unsigned __int64 v10; // x25
      bool v11; // cf
      unsigned int *v12; // x0
      unsigned int *v13; // x23
      __int64 v14; // x1
      __int64 v15; // x23
      unsigned __int8 v16; // w26
      _QWORD *v17; // x0
      __int64 v18; // x9
      __int64 v19; // x1
      _BOOL8 v20; // x4
      __int64 result; // x0
      __int64 v22; // [xsp+8h] [xbp-58h] BYREF
      unsigned __int64 v23; // [xsp+10h] [xbp-50h] BYREF
      unsigned __int64 v24; // [xsp+18h] [xbp-48h] BYREF
    
      v8 = a1[1];
      v9 = BITplcrash_async_mobject_base_address(*a1);
      v10 = BITplcrash_async_mobject_length(*a1) + v9;
      v24 = v9;
      if ( (unsigned int)BITplcrash_async_address_apply_offset(v9, a2, &v24) )
        v11 = v24 >= v10;
      else
        v11 = 1;
      if ( !v11 )
      {
        while ( 1 )
        {
          v12 = (unsigned int *)BITplcrash_async_mobject_remap_address(*a1);
          v13 = v12;
          if ( !v12 )
            return 5;
          if ( (*(unsigned int (__fastcall **)(_QWORD))(v8 + 8))(*v12) == -1 )
          {
            v17 = (_QWORD *)BITplcrash_async_mobject_remap_address(*a1);
            if ( !v17 )
              return 5;
            v14 = (*(__int64 (__fastcall **)(_QWORD))(v8 + 16))(*v17);
            v16 = 8;
            v15 = 12;
          }
          else
          {
            v14 = (*(unsigned int (__fastcall **)(_QWORD))(v8 + 8))(*v13);
            v15 = 4;
            v16 = 4;
          }
          if ( !v14 )
            return 8;
          if ( !(unsigned int)BITplcrash_async_address_apply_offset(v24 + v15, v14, &v23)
            || (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uintmax64<unsigned long long>(
                               *a1,
                               v8,
                               v24,
                               v15,
                               v16,
                               &v22) )
          {
            return 5;
          }
          if ( *((_BYTE *)a1 + 17) )
          {
            v18 = v22;
            if ( v16 == 8 && v22 == -1 || v16 == 4 && v22 == 0xFFFFFFFFLL )
              goto LABEL_28;
          }
          else
          {
            v18 = v22;
          }
          if ( *((_BYTE *)a1 + 17) || v18 )
          {
            v19 = *a1;
            v20 = *((unsigned __int8 *)a1 + 17) != 0;
            if ( *((_BYTE *)a1 + 16) )
              result = plcrash::BIT::async::plcrash_async_dwarf_fde_info_init<unsigned long long>(a4, v19, v8, v24, v20);
            else
              result = plcrash::BIT::async::plcrash_async_dwarf_fde_info_init<unsigned int>(a4, v19, v8, v24, v20);
            if ( (_DWORD)result )
              return result;
            if ( *(_QWORD *)(a4 + 24) <= a3 && *(_QWORD *)(a4 + 32) > a3 )
              return 0;
          }
    LABEL_28:
          v24 = v23;
          if ( v23 >= v10 )
            return 8;
        }
      }
      return 5;
    }

}; // end class plcrash::BIT::async::dwarf_frame_reader
