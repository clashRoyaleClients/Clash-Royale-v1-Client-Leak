class plcrash::BIT::async::dwarf_cfa_state<ulong long,long long>
{
public:

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::eval_program(
            __int64 a1,
            __int64 a2,
            unsigned __int64 a3,
            unsigned __int64 a4,
            __int64 a5,
            __int64 *a6,
            __int64 a7,
            unsigned __int64 a8,
            __int64 a9,
            __int64 a10)
    {
      int v17; // w23
      __int64 v18; // x24
      unsigned __int64 v19; // x8
      unsigned __int8 *v20; // x11
      unsigned __int16 *v21; // x9
      int v22; // w14
      int v23; // w27
      unsigned __int8 v24; // w25
      __int64 v25; // x24
      unsigned __int64 v26; // x25
      __int64 v27; // x28
      unsigned __int64 v28; // x1
      unsigned __int64 v29; // x3
      __int64 v30; // x2
      __int64 v31; // x0
      __int64 v32; // x9
      __int64 v33; // x10
      __int64 v34; // x0
      unsigned __int64 v35; // x1
      unsigned __int8 *v36; // x8
      __int64 v38; // x0
      unsigned int v39; // w0
      __int64 v40; // x2
      unsigned __int64 v41; // x24
      unsigned __int64 v42; // x8
      __int64 v43; // x2
      __int64 v44; // x2
      unsigned __int64 v45; // x24
      __int64 v46; // x24
      __int64 v47; // x1
      __int64 v48; // x24
      __int64 v49; // x2
      __int64 v50; // x2
      unsigned __int64 v51; // x24
      __int64 v52; // x24
      __int64 v53; // x2
      unsigned __int64 v54; // x8
      __int64 v55; // x2
      unsigned __int64 v57; // [xsp+10h] [xbp-C50h] BYREF
      unsigned int v58; // [xsp+1Ch] [xbp-C44h] BYREF
      unsigned __int64 v59; // [xsp+20h] [xbp-C40h] BYREF
      unsigned __int64 v60; // [xsp+28h] [xbp-C38h] BYREF
      unsigned int v61; // [xsp+34h] [xbp-C2Ch] BYREF
      __int64 v62; // [xsp+38h] [xbp-C28h] BYREF
      __int64 v63; // [xsp+40h] [xbp-C20h] BYREF
      unsigned __int64 v64; // [xsp+48h] [xbp-C18h] BYREF
      unsigned __int64 v65; // [xsp+50h] [xbp-C10h] BYREF
      unsigned __int64 v66; // [xsp+58h] [xbp-C08h] BYREF
      unsigned __int64 v67; // [xsp+60h] [xbp-C00h] BYREF
      unsigned __int64 v68; // [xsp+68h] [xbp-BF8h] BYREF
      unsigned __int64 v69; // [xsp+70h] [xbp-BF0h] BYREF
      unsigned __int64 v70; // [xsp+78h] [xbp-BE8h] BYREF
      unsigned __int64 v71; // [xsp+80h] [xbp-BE0h] BYREF
      unsigned __int64 v72; // [xsp+88h] [xbp-BD8h] BYREF
      unsigned __int64 v73; // [xsp+90h] [xbp-BD0h] BYREF
      unsigned __int64 v74; // [xsp+98h] [xbp-BC8h] BYREF
      __int64 v75; // [xsp+A0h] [xbp-BC0h] BYREF
      unsigned __int64 v76; // [xsp+A8h] [xbp-BB8h] BYREF
      unsigned __int64 v77; // [xsp+B0h] [xbp-BB0h] BYREF
      __int64 v78; // [xsp+B8h] [xbp-BA8h] BYREF
      __int64 v79; // [xsp+C0h] [xbp-BA0h] BYREF
      unsigned __int64 v80; // [xsp+C8h] [xbp-B98h] BYREF
      __int64 v81; // [xsp+D0h] [xbp-B90h] BYREF
      unsigned int v82; // [xsp+D8h] [xbp-B88h]
      __int64 v83; // [xsp+E8h] [xbp-B78h] BYREF
      __int64 v84; // [xsp+F0h] [xbp-B70h] BYREF
      unsigned int v85; // [xsp+F8h] [xbp-B68h]
      unsigned __int64 v86; // [xsp+108h] [xbp-B58h] BYREF
      unsigned __int64 v87; // [xsp+110h] [xbp-B50h] BYREF
      __int64 v88; // [xsp+118h] [xbp-B48h] BYREF
      __int64 v89; // [xsp+128h] [xbp-B38h]
      unsigned __int64 v90; // [xsp+130h] [xbp-B30h] BYREF
      unsigned __int64 v91; // [xsp+138h] [xbp-B28h] BYREF
      __int64 v92; // [xsp+140h] [xbp-B20h] BYREF
      unsigned __int64 v93; // [xsp+148h] [xbp-B18h] BYREF
      unsigned __int64 v94; // [xsp+150h] [xbp-B10h] BYREF
      _BYTE v95[16]; // [xsp+158h] [xbp-B08h] BYREF
      __int64 v96; // [xsp+168h] [xbp-AF8h] BYREF
      unsigned int v97; // [xsp+170h] [xbp-AF0h] BYREF
      unsigned int v98; // [xsp+174h] [xbp-AECh] BYREF
      _BYTE v99[2640]; // [xsp+178h] [xbp-AE8h] BYREF
      unsigned __int64 v100; // [xsp+BC8h] [xbp-98h] BYREF
      unsigned __int8 *v101; // [xsp+BD0h] [xbp-90h] BYREF
      unsigned int *v102; // [xsp+BD8h] [xbp-88h]
      __int64 v103; // [xsp+BE0h] [xbp-80h]
      unsigned __int64 v104; // [xsp+BF0h] [xbp-70h]
      unsigned __int64 v105; // [xsp+BF8h] [xbp-68h]
      __int64 (__fastcall **v106)(_QWORD); // [xsp+C00h] [xbp-60h]
      __int64 v107; // [xsp+C08h] [xbp-58h] BYREF
    
      v100 = a4;
      plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::dwarf_cfa_state(v99);
      plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned long long,long long>::dwarf_cfa_state_iterator(v95, a1);
      while ( (unsigned int)plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned long long,long long>::next(
                              v95,
                              &v98,
                              &v97,
                              &v96) )
      {
        if ( (plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_register(v99, v98, v97, v96) & 1) == 0 )
          return 3;
      }
      if ( *(_BYTE *)(a5 + 56) )
      {
        v17 = 0;
        if ( a6 && *(_BYTE *)(a5 + 80) )
          v17 = *(unsigned __int8 *)(a5 + 81);
      }
      else
      {
        v17 = 0;
      }
      if ( !(unsigned int)BITplcrash_async_address_apply_offset(a8, a9, &v94) )
        return 5;
      v18 = plcrash::BIT::async::dwarf_opstream::init(&v101, a2, a7, a8, a9, a10);
      if ( !(_DWORD)v18 )
      {
        v19 = v100;
        if ( !a3 || (v18 = 0, v100 <= a3) )
        {
          while ( 1 )
          {
            v20 = v101;
            if ( (unsigned __int64)v101 < v104 || (unsigned __int8 *)v105 == v101 )
              return 0;
            v21 = (unsigned __int16 *)(v101 + 1);
            v22 = *v101++;
            if ( (v22 & 0xC0) != 0 )
              v23 = v22 & 0xC0;
            else
              v23 = v22;
            if ( (v22 & 0xC0) != 0 )
              v24 = v22 & 0x3F;
            else
              v24 = 0;
            v18 = 4;
            if ( v23 > 63 )
            {
              if ( v23 == 64 )
              {
                v32 = v24;
                v33 = *(_QWORD *)(a5 + 32);
    LABEL_43:
                v100 = v19 + v33 * v32;
              }
              else
              {
                if ( v23 == 128 )
                {
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v75,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  v28 = v24;
                  v29 = *(_QWORD *)(a5 + 40) * v75;
                  v30 = 0;
                  v31 = a1;
                }
                else
                {
                  if ( v23 != 192 )
                    return v18;
                  if ( !(unsigned int)plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::get_register_rule(
                                        v99,
                                        v24,
                                        &v61,
                                        &v60) )
                  {
                    v34 = a1;
                    v35 = v24;
    LABEL_183:
                    plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::remove_register(v34, v35);
                    goto LABEL_184;
                  }
                  v30 = v61;
                  v29 = v60;
                  v31 = a1;
                  v28 = v24;
                }
    LABEL_169:
                if ( (plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_register(v31, v28, v30, v29)
                    & 1) == 0 )
                  return 3;
              }
            }
            else
            {
              switch ( v23 )
              {
                case 0:
                  break;
                case 1:
                  if ( *(_BYTE *)(a5 + 26) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::gnu_ehptr_reader<unsigned long long>::read(
                                       a6,
                                       v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       v17,
                                       &v100,
                                       &v107) )
                    return 5;
                  if ( v107 < 0 )
                    return 5;
                  v36 = &v101[v107];
                  if ( (unsigned __int64)&v101[v107] < v104 || (unsigned __int64)v36 > v105 )
                    return 5;
                  goto LABEL_175;
                case 2:
                  if ( (unsigned __int64)v21 < v104 || v105 == (_QWORD)v21 )
                    return 5;
                  v33 = v20[1];
                  v101 = v20 + 2;
                  v32 = *(_QWORD *)(a5 + 32);
                  goto LABEL_43;
                case 3:
                  if ( (unsigned __int64)v21 < v104 || v105 - (unsigned __int64)v21 < 2 )
                    return 5;
                  v38 = (*v106)(*v21);
                  v101 += 2;
                  v100 += *(_QWORD *)(a5 + 32) * v38;
                  break;
                case 4:
                  if ( (unsigned __int64)v21 < v104 || v105 - (unsigned __int64)v21 < 4 )
                    return 5;
                  v39 = v106[1](*(unsigned int *)v21);
                  v101 += 4;
                  v100 += *(_QWORD *)(a5 + 32) * v39;
                  break;
                case 5:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v74,
                                       &v107) )
                    return 5;
                  v40 = (__int64)&v101[v107 - v104];
                  if ( (unsigned __int64)&v101[v107] < v104 || (unsigned __int64)&v101[v107] > v105 )
                    return 5;
                  v101 += v107;
                  v41 = v74;
                  if ( HIDWORD(v74) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       v40,
                                       &v73,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  v42 = v73;
                  goto LABEL_136;
                case 6:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v59,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  v41 = v59;
                  if ( HIDWORD(v59) )
                    return 4;
                  if ( !(unsigned int)plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::get_register_rule(
                                        v99,
                                        v59,
                                        &v58,
                                        &v57) )
                  {
                    v35 = v24;
                    v34 = a1;
                    goto LABEL_183;
                  }
                  v30 = v58;
                  v29 = v57;
    LABEL_168:
                  v31 = a1;
                  v28 = v41;
                  goto LABEL_169;
                case 7:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v77,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  v35 = v77;
                  if ( HIDWORD(v77) )
                    return 4;
                  v34 = a1;
                  goto LABEL_183;
                case 8:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v76,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  v28 = v76;
                  if ( HIDWORD(v76) )
                    return 4;
                  v30 = 5;
                  v31 = a1;
                  v29 = 0;
                  goto LABEL_169;
                case 9:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v66,
                                       &v107) )
                    return 5;
                  v43 = (__int64)&v101[v107 - v104];
                  if ( (unsigned __int64)&v101[v107] < v104 || (unsigned __int64)&v101[v107] > v105 )
                    return 5;
                  v101 += v107;
                  v41 = v66;
                  if ( HIDWORD(v66) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       v43,
                                       &v65,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  v29 = v65;
                  v30 = 2;
                  goto LABEL_168;
                case 10:
                  if ( (plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::push_state(a1) & 1) == 0 )
                    return 3;
                  break;
                case 11:
                  if ( !(unsigned int)plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::pop_state(a1) )
                    return 5;
                  break;
                case 12:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v93,
                                       &v107) )
                    return 5;
                  v44 = (__int64)&v101[v107 - v104];
                  if ( (unsigned __int64)&v101[v107] < v104 || (unsigned __int64)&v101[v107] > v105 )
                    return 5;
                  v101 += v107;
                  v45 = v93;
                  if ( HIDWORD(v93) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       v44,
                                       &v92,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_register(a1, v45, v92);
                  break;
                case 13:
                  plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::get_cfa_rule(&v88, a1);
                  if ( (unsigned int)v88 < 2 )
                    return 5;
                  if ( (_DWORD)v88 == 3 )
                  {
                    if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                         (__int64)v102,
                                         v103,
                                         (__int64)&v101[-v104],
                                         &v86,
                                         &v107)
                      || (unsigned __int64)&v101[v107] < v104
                      || (unsigned __int64)&v101[v107] > v105 )
                    {
                      return 5;
                    }
                    v101 += v107;
                    if ( HIDWORD(v86) )
                      return 4;
                    plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_register_signed(
                      a1,
                      v86,
                      v89);
                  }
                  else if ( (_DWORD)v88 == 2 )
                  {
                    if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                         (__int64)v102,
                                         v103,
                                         (__int64)&v101[-v104],
                                         &v87,
                                         &v107)
                      || (unsigned __int64)&v101[v107] < v104
                      || (unsigned __int64)&v101[v107] > v105 )
                    {
                      return 5;
                    }
                    v101 += v107;
                    if ( HIDWORD(v87) )
                      return 4;
                    plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_register(a1, v87, v89);
                  }
                  break;
                case 14:
                  plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::get_cfa_rule(&v84, a1);
                  if ( (unsigned int)v84 < 2 )
                    return 5;
                  if ( (unsigned int)(v84 - 2) > 1 )
                    break;
                  v46 = v85;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)&v101[-v104],
                                       &v83,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_register(a1, v46, v83);
                  break;
                case 15:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v79,
                                       &v107) )
                    return 5;
                  v47 = (__int64)&v101[v107 - v104];
                  if ( (unsigned __int64)&v101[v107] < v104 || (unsigned __int64)&v101[v107] > v105 )
                    return 5;
                  v101 += v107;
                  v48 = v79;
                  if ( (v47 | v79) < 0 )
                    return 4;
                  if ( !(unsigned int)BITplcrash_async_address_apply_offset(v94, v47, &v78) )
                    return 5;
                  plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_expression(a1, v78, v48);
                  v36 = &v101[v48];
                  goto LABEL_173;
                case 16:
                case 22:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v64,
                                       &v107) )
                    return 5;
                  v25 = (__int64)&v101[v107 - v104];
                  if ( (unsigned __int64)&v101[v107] < v104 || (unsigned __int64)&v101[v107] > v105 )
                    return 5;
                  v101 += v107;
                  v26 = v64;
                  if ( HIDWORD(v64) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       v25,
                                       &v63,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  if ( v25 < 0 )
                    return 4;
                  v27 = v63;
                  if ( !(unsigned int)BITplcrash_async_address_apply_offset(v94, v25, &v62) )
                    return 5;
                  if ( v23 == 16 )
                  {
                    v18 = 3;
                    if ( (plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_register(a1, v26, 3, v62)
                        & 1) == 0 )
                      return v18;
                  }
                  else if ( !(unsigned int)plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_register(
                                             a1,
                                             v26,
                                             4,
                                             v62) )
                  {
                    return 3;
                  }
                  v36 = &v101[v27];
    LABEL_173:
                  if ( (unsigned __int64)v36 >= v104 && (unsigned __int64)v36 <= v105 )
    LABEL_175:
                    v101 = v36;
                  break;
                case 17:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v72,
                                       &v107) )
                    return 5;
                  v49 = (__int64)&v101[v107 - v104];
                  if ( (unsigned __int64)&v101[v107] < v104 || (unsigned __int64)&v101[v107] > v105 )
                    return 5;
                  v101 += v107;
                  v41 = v72;
                  if ( HIDWORD(v72) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                       (__int64)v102,
                                       v103,
                                       v49,
                                       &v71,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  v42 = v71;
    LABEL_136:
                  v29 = *(_QWORD *)(a5 + 40) * v42;
                  v30 = 0;
                  goto LABEL_168;
                case 18:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v91,
                                       &v107) )
                    return 5;
                  v50 = (__int64)&v101[v107 - v104];
                  if ( (unsigned __int64)&v101[v107] < v104 || (unsigned __int64)&v101[v107] > v105 )
                    return 5;
                  v101 += v107;
                  v51 = v91;
                  if ( HIDWORD(v91) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                       (__int64)v102,
                                       v103,
                                       v50,
                                       &v90,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_register_signed(
                    a1,
                    v51,
                    *(_QWORD *)(a5 + 40) * v90);
                  break;
                case 19:
                  plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::get_cfa_rule(&v81, a1);
                  if ( (unsigned int)v81 < 2 )
                    return 5;
                  if ( (unsigned int)(v81 - 2) > 1 )
                    break;
                  v52 = v82;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)&v101[-v104],
                                       &v80,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_register_signed(
                    a1,
                    v52,
                    *(_QWORD *)(a5 + 40) * v80);
                  break;
                case 20:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v70,
                                       &v107) )
                    return 5;
                  v53 = (__int64)&v101[v107 - v104];
                  if ( (unsigned __int64)&v101[v107] < v104 || (unsigned __int64)&v101[v107] > v105 )
                    return 5;
                  v101 += v107;
                  v41 = v70;
                  if ( HIDWORD(v70) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       v53,
                                       &v69,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  v54 = v69;
                  goto LABEL_167;
                case 21:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v102,
                                       v103,
                                       (__int64)v21 - v104,
                                       &v68,
                                       &v107) )
                    return 5;
                  v55 = (__int64)&v101[v107 - v104];
                  if ( (unsigned __int64)&v101[v107] < v104 || (unsigned __int64)&v101[v107] > v105 )
                    return 5;
                  v101 += v107;
                  v41 = v68;
                  if ( HIDWORD(v68) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                       (__int64)v102,
                                       v103,
                                       v55,
                                       &v67,
                                       &v107)
                    || (unsigned __int64)&v101[v107] < v104
                    || (unsigned __int64)&v101[v107] > v105 )
                  {
                    return 5;
                  }
                  v101 += v107;
                  v54 = v67;
    LABEL_167:
                  v29 = *(_QWORD *)(a5 + 40) * v54;
                  v30 = 1;
                  goto LABEL_168;
                default:
                  return v18;
              }
            }
    LABEL_184:
            v19 = v100;
            if ( a3 )
            {
              v18 = 0;
              if ( v100 > a3 )
                return v18;
            }
          }
        }
      }
      return v18;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::apply_state(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            char *a4,
            __int64 a5,
            _BYTE *a6)
    {
      vm_offset_t greg_size; // x25
      __int64 v12; // x2
      __int64 reg; // x0
      __int64 task_uleb128; // x26
      __int64 v15; // x0
      unsigned __int64 v16; // x26
      __int64 v17; // x0
      int v18; // w1
      __int64 v19; // x2
      int v20; // w24
      unsigned __int64 v21; // x27
      int v22; // w22
      __int64 v23; // x28
      vm_offset_t v24; // kr00_8
      int v25; // w1
      __int64 v26; // x0
      __int64 v27; // x0
      vm_map_t v29; // [xsp+1Ch] [xbp-124h]
      int v31; // [xsp+28h] [xbp-118h] BYREF
      int v32; // [xsp+2Ch] [xbp-114h] BYREF
      __int64 v33; // [xsp+30h] [xbp-110h] BYREF
      int v34; // [xsp+38h] [xbp-108h] BYREF
      unsigned int v35; // [xsp+3Ch] [xbp-104h] BYREF
      _BYTE v36[20]; // [xsp+40h] [xbp-100h] BYREF
      int v37; // [xsp+54h] [xbp-ECh] BYREF
      unsigned __int64 v38; // [xsp+58h] [xbp-E8h] BYREF
      __int64 v39; // [xsp+60h] [xbp-E0h] BYREF
      __int64 v40; // [xsp+68h] [xbp-D8h]
      unsigned __int64 v41; // [xsp+70h] [xbp-D0h]
      int v42; // [xsp+7Ch] [xbp-C4h] BYREF
      _BYTE v43[56]; // [xsp+80h] [xbp-C0h] BYREF
      __int64 v44; // [xsp+B8h] [xbp-88h] BYREF
      unsigned __int64 v45; // [xsp+C0h] [xbp-80h] BYREF
      __int64 v46; // [xsp+C8h] [xbp-78h] BYREF
      int v47; // [xsp+D4h] [xbp-6Ch] BYREF
      unsigned __int64 v48; // [xsp+D8h] [xbp-68h] BYREF
      unsigned __int64 v49; // [xsp+E0h] [xbp-60h] BYREF
    
      BITplcrash_async_thread_state_copy(a6, a4);
      BITplcrash_async_thread_state_clear_volatile_regs((__int64)a6);
      plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::get_cfa_rule(&v39, a1);
      if ( (_DWORD)v39 == 1 )
      {
        task_uleb128 = BITplcrash_async_mobject_init((__int64)v43, a2, v40, v41, 1);
        if ( (_DWORD)task_uleb128 )
          return task_uleb128;
        task_uleb128 = plcrash::BIT::async::plcrash_async_dwarf_expression_eval<unsigned long long,long long>(
                         v43,
                         a2,
                         a4,
                         a5,
                         v40,
                         0,
                         v41,
                         0,
                         0,
                         &v38);
        if ( (_DWORD)task_uleb128 )
          return task_uleb128;
        v12 = v38;
      }
      else
      {
        if ( !(_DWORD)v39 )
          return 5;
        if ( (unsigned int)(v39 - 2) <= 1 )
        {
          if ( !(unsigned int)BITplcrash_async_thread_state_map_dwarf_to_reg((__int64)a4, (unsigned int)v40, &v37) )
            return 4;
          if ( !BITplcrash_async_thread_state_has_reg((__int64)a4, v37) )
            return 8;
          reg = BITplcrash_async_thread_state_get_reg((__int64)a4, v37);
          v12 = v41 + reg;
          v38 = v41 + reg;
        }
      }
      v29 = a2;
      BITplcrash_async_thread_state_set_reg((__int64)a6, 2, v12);
      plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned long long,long long>::dwarf_cfa_state_iterator(v36, a1);
      if ( (unsigned int)plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned long long,long long>::next(
                           v36,
                           &v35,
                           &v34,
                           &v33) )
      {
        while ( 2 )
        {
          if ( (unsigned int)BITplcrash_async_thread_state_map_dwarf_to_reg((__int64)a4, v35, &v32) )
          {
            v20 = v32;
    LABEL_30:
            v21 = v38;
            v22 = v34;
            v23 = v33;
            v24 = greg_size;
            greg_size = (unsigned __int8)BITplcrash_async_thread_state_get_greg_size((__int64)a4);
            switch ( v22 )
            {
              case 0:
                task_uleb128 = BITplcrash_async_task_memcpy(v29, v21, v23, (vm_address_t)&v48, greg_size);
                if ( !(_DWORD)task_uleb128 )
                {
                  if ( greg_size == 8 )
                    v19 = v48;
                  else
                    v19 = (unsigned int)v48;
                  goto LABEL_50;
                }
                goto LABEL_53;
              case 1:
                v19 = v23 + v21;
                goto LABEL_50;
              case 2:
                if ( !(unsigned int)BITplcrash_async_thread_state_map_dwarf_to_reg((__int64)a4, v23, &v47) )
                  goto LABEL_47;
                if ( !BITplcrash_async_thread_state_has_reg((__int64)a4, v47) )
                {
    LABEL_48:
                  task_uleb128 = 8;
                  goto LABEL_53;
                }
                v25 = v47;
                v26 = (__int64)a4;
    LABEL_46:
                v19 = BITplcrash_async_thread_state_get_reg(v26, v25);
    LABEL_50:
                v17 = (__int64)a6;
                v18 = v20;
                goto LABEL_51;
              case 3:
              case 4:
                v46 = v23;
                task_uleb128 = plcrash::BIT::async::plcrash_async_dwarf_read_task_uleb128(
                                 v29,
                                 v23,
                                 0,
                                 (__int64)&v45,
                                 (__int64)&v44);
                if ( (_DWORD)task_uleb128 )
                  goto LABEL_53;
                if ( (unsigned int)BITplcrash_async_address_apply_offset(v23, v44, &v46) )
                {
                  task_uleb128 = BITplcrash_async_mobject_init((__int64)v43, v29, v46, v45, 1);
                  if ( !(_DWORD)task_uleb128 )
                  {
                    if ( greg_size == 8 )
                    {
                      v49 = v21;
                      task_uleb128 = plcrash::BIT::async::plcrash_async_dwarf_expression_eval<unsigned long long,long long>(
                                       v43,
                                       v29,
                                       a4,
                                       a5,
                                       v46,
                                       0,
                                       v45,
                                       &v49,
                                       1,
                                       &v48);
                      if ( (_DWORD)task_uleb128 )
                      {
    LABEL_18:
                        BITplcrash_async_mobject_free((__int64)v43);
                        goto LABEL_53;
                      }
                      v16 = v48;
                    }
                    else
                    {
                      v42 = v21;
                      task_uleb128 = plcrash::BIT::async::plcrash_async_dwarf_expression_eval<unsigned int,int>(
                                       v43,
                                       v29,
                                       a4,
                                       a5,
                                       v46,
                                       0,
                                       v45,
                                       &v42,
                                       1,
                                       &v48);
                      if ( (_DWORD)task_uleb128 )
                        goto LABEL_18;
                      v16 = (unsigned int)v48;
                    }
                    BITplcrash_async_mobject_free((__int64)v43);
                    if ( v22 == 3 )
                    {
                      task_uleb128 = BITplcrash_async_task_memcpy(v29, v16, 0, (vm_address_t)&v48, greg_size);
                      if ( (_DWORD)task_uleb128 )
                        goto LABEL_53;
                      if ( greg_size == 8 )
                        v16 = v48;
                      else
                        v16 = (unsigned int)v48;
                    }
                    v17 = (__int64)a6;
                    v18 = v20;
                    v19 = v16;
    LABEL_51:
                    BITplcrash_async_thread_state_set_reg(v17, v18, v19);
    LABEL_52:
                    task_uleb128 = 0;
                  }
                }
                else
                {
    LABEL_47:
                  task_uleb128 = 5;
                }
    LABEL_53:
                if ( (_DWORD)task_uleb128 )
                  return task_uleb128;
                if ( *(_QWORD *)(a3 + 48) == v35 && v32 )
                {
                  v15 = BITplcrash_async_thread_state_get_reg((__int64)a6, v32);
                  BITplcrash_async_thread_state_set_reg((__int64)a6, 0, v15);
                }
                if ( (plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned long long,long long>::next(
                        v36,
                        &v35,
                        &v34,
                        &v33)
                    & 1) == 0 )
                  goto LABEL_55;
                continue;
              case 5:
                if ( !BITplcrash_async_thread_state_has_reg((__int64)a4, v20) )
                  goto LABEL_48;
                v26 = (__int64)a4;
                v25 = v20;
                goto LABEL_46;
              default:
                greg_size = v24;
                goto LABEL_52;
            }
          }
          break;
        }
        if ( *(_QWORD *)(a3 + 48) == v35 )
        {
          v20 = 0;
          v32 = 0;
          goto LABEL_30;
        }
        return 5;
      }
    LABEL_55:
      task_uleb128 = 0;
      if ( !BITplcrash_async_thread_state_has_reg((__int64)a6, 0) )
      {
        if ( (unsigned int)BITplcrash_async_thread_state_map_dwarf_to_reg((__int64)a4, *(_QWORD *)(a3 + 48), &v31)
          && BITplcrash_async_thread_state_has_reg((__int64)a4, v31) )
        {
          v27 = BITplcrash_async_thread_state_get_reg((__int64)a4, v31);
          BITplcrash_async_thread_state_set_reg((__int64)a6, 0, v27);
          return 0;
        }
        return 5;
      }
      return task_uleb128;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::dwarf_cfa_state(__int64 a1)
    {
      int v2; // w8
      __int64 i; // x9
    
      v2 = 1;
      for ( i = 256; i != 2656; i += 24 )
        *(_BYTE *)(a1 + i) = v2++;
      *(_BYTE *)(a1 + 2632) = -1;
      *(_BYTE *)(a1 + 235) = 0;
      *(_BYTE *)(a1 + 144) = 0;
      *(_BYTE *)(a1 + 234) = 0;
      BITplcrash_async_memset((void *)(a1 + 150), 255, 0xEu);
      *(_DWORD *)a1 = 0;
      return a1;
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::dwarf_cfa_state(__int64 a1)
    {
      return j___ZN7plcrash3BIT5async15dwarf_cfa_stateIyxEC2Ev(a1);
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_register(
            __int64 a1,
            unsigned int a2,
            int a3,
            __int64 a4)
    {
      __int64 v4; // x9
      __int64 v5; // x8
      __int64 v6; // x10
      _BYTE *v7; // x10
      int v8; // w12
      char v9; // t1
      __int64 v10; // x13
      __int64 v11; // x11
      __int64 v12; // x13
    
      v4 = 0;
      v5 = *(unsigned __int8 *)(a1 + 234);
      v6 = a1 + 14 * v5 + a2 % 0xE;
      v9 = *(_BYTE *)(v6 + 150);
      v7 = (_BYTE *)(v6 + 150);
      LOBYTE(v8) = v9;
      do
      {
        if ( (unsigned __int8)v8 == 255 )
          break;
        v10 = a1 + 24LL * (unsigned __int8)v8;
        v4 = v10 + 240;
        if ( *(_DWORD *)(v10 + 248) == a2 )
        {
          *(_QWORD *)v4 = a4;
          *(_DWORD *)(a1 + 24LL * (unsigned __int8)v8 + 252) = a3;
          return 1;
        }
        v8 = *(unsigned __int8 *)(a1 + 24LL * (unsigned __int8)v8 + 256);
      }
      while ( v8 != 255 );
      v11 = *(unsigned __int8 *)(a1 + 235);
      if ( v11 == 255 )
        return 0;
      v12 = a1 + 24 * v11;
      *(_BYTE *)(a1 + 235) = *(_BYTE *)(v12 + 256);
      *(_DWORD *)(v12 + 248) = a2;
      *(_DWORD *)(v12 + 252) = a3;
      *(_QWORD *)(v12 + 240) = a4;
      *(_BYTE *)(v12 + 256) = -1;
      if ( v4 )
      {
        *(_BYTE *)(v4 + 16) = -85 * ((__int64)(unsigned int)(v12 - a1) >> 3);
      }
      else
      {
        *v7 = v11;
        LODWORD(v5) = *(unsigned __int8 *)(a1 + 234);
      }
      ++*(_BYTE *)(a1 + (unsigned int)v5 + 144);
      return 1;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::get_register_rule(
            __int64 a1,
            unsigned int a2,
            _DWORD *a3,
            _QWORD *a4)
    {
      int v4; // w9
      __int64 v6; // x8
    
      LOBYTE(v4) = *(_BYTE *)(a1 + 14LL * *(unsigned __int8 *)(a1 + 234) + a2 % 0xE + 150);
      while ( 1 )
      {
        if ( (unsigned __int8)v4 == 255 )
          return 0;
        if ( *(_DWORD *)(a1 + 24LL * (unsigned __int8)v4 + 248) == a2 )
          break;
        v4 = *(unsigned __int8 *)(a1 + 24LL * (unsigned __int8)v4 + 256);
        if ( v4 == 255 )
          return 0;
      }
      v6 = a1 + 24LL * (unsigned __int8)v4;
      *a4 = *(_QWORD *)(v6 + 240);
      *a3 = *(_DWORD *)(v6 + 252);
      return 1;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::remove_register(
            __int64 result,
            unsigned int a2)
    {
      __int64 v2; // x8
      int v3; // w11
      __int64 v4; // x14
      __int64 v5; // x15
      __int64 v6; // x12
      char *v7; // x13
      char v8; // w15
    
      v2 = a2 % 0xE;
      v3 = *(unsigned __int8 *)(result + 14LL * *(unsigned __int8 *)(result + 234) + (unsigned int)v2 + 150);
      if ( v3 != 255 )
      {
        v4 = 0;
        do
        {
          v5 = result + 24LL * (unsigned __int8)v3;
          v6 = v5 + 240;
          if ( *(_DWORD *)(v5 + 248) == a2 )
          {
            v7 = (char *)(result + 24LL * (unsigned __int8)v3 + 256);
            v8 = *v7;
            if ( v4 )
              *(_BYTE *)(v4 + 16) = v8;
            else
              *(_BYTE *)(result + 14LL * *(unsigned __int8 *)(result + 234) + v2 + 150) = v8;
            *v7 = *(_BYTE *)(result + 235);
            *(_BYTE *)(result + 235) = v3;
            --*(_BYTE *)(result + *(unsigned __int8 *)(result + 234) + 144);
          }
          else
          {
            v7 = (char *)(result + 24LL * (unsigned __int8)v3 + 256);
          }
          v3 = (unsigned __int8)*v7;
          v4 = v6;
        }
        while ( v3 != 255 );
      }
      return result;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_register(
            __int64 result,
            int a2,
            __int64 a3)
    {
      __int64 v3; // x8
    
      v3 = result + 24LL * *(unsigned __int8 *)(result + 234);
      *(_DWORD *)v3 = 2;
      *(_DWORD *)(v3 + 8) = a2;
      *(_QWORD *)(v3 + 16) = a3;
      return result;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_register_signed(
            __int64 result,
            int a2,
            __int64 a3)
    {
      __int64 v3; // x8
    
      v3 = result + 24LL * *(unsigned __int8 *)(result + 234);
      *(_DWORD *)v3 = 3;
      *(_DWORD *)(v3 + 8) = a2;
      *(_QWORD *)(v3 + 16) = a3;
      return result;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_expression(
            __int64 result,
            __int64 a2,
            __int64 a3)
    {
      __int64 v3; // x8
    
      v3 = result + 24LL * *(unsigned __int8 *)(result + 234);
      *(_DWORD *)v3 = 1;
      *(_QWORD *)(v3 + 8) = a2;
      *(_QWORD *)(v3 + 16) = a3;
      return result;
    }

    long double __usercall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::get_cfa_rule@<Q0>(
            __int64 a1@<X0>,
            __int64 a2@<X8>)
    {
      __int64 v2; // x9
      long double result; // q0
    
      v2 = a1 + 24LL * *(unsigned __int8 *)(a1 + 234);
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(v2 + 16);
      result = *(long double *)v2;
      *(_OWORD *)a2 = *(_OWORD *)v2;
      return result;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::push_state(__int64 a1)
    {
      int v1; // w8
      unsigned __int8 v3; // w8
    
      v1 = *(unsigned __int8 *)(a1 + 234);
      if ( v1 == 5 )
        return 0;
      v3 = v1 + 1;
      *(_BYTE *)(a1 + 234) = v3;
      *(_BYTE *)(a1 + v3 + 144) = 0;
      *(_DWORD *)(a1 + 24LL * *(unsigned __int8 *)(a1 + 234)) = 0;
      BITplcrash_async_memset((void *)(a1 + 14LL * *(unsigned __int8 *)(a1 + 234) + 150), 255, 0xEu);
      return 1;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::pop_state(__int64 a1)
    {
      if ( !*(_BYTE *)(a1 + 234) )
        return 0;
      --*(_BYTE *)(a1 + 234);
      return 1;
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::apply_state(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            char *a4,
            __int64 a5,
            _BYTE *a6)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxE11apply_stateEjPNS1_28plcrash_async_dwarf_cie_infoEPK26plcrash_async_thread_statePK26BITplcrash_async_byteorderPS6_(
               a1,
               a2,
               a3,
               a4,
               a5,
               a6);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::eval_program(
            __int64 a1,
            __int64 a2,
            unsigned __int64 a3,
            unsigned __int64 a4,
            __int64 a5,
            __int64 *a6,
            __int64 a7,
            unsigned __int64 a8,
            __int64 a9,
            __int64 a10)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxE12eval_programEP21plcrash_async_mobjectyyPNS1_28plcrash_async_dwarf_cie_infoEPNS1_16gnu_ehptr_readerIyEEPK26BITplcrash_async_byteordermlm(
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
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::push_state(__int64 a1)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxE10push_stateEv(a1);
    }

    // attributes: thunk
    long double __usercall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::get_cfa_rule@<Q0>(
            __int64 a2@<X8>,
            __int64 a1@<X0>)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxE12get_cfa_ruleEv(a1, a2);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_register(
            __int64 a1,
            unsigned int a2,
            int a3,
            __int64 a4)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEy(a1, a2, a3, a4);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::remove_register(
            __int64 result,
            unsigned int a2)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxE15remove_registerEj(result, a2);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_register(
            __int64 result,
            int a2,
            __int64 a3)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxE16set_cfa_registerEjy(result, a2, a3);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::get_register_rule(
            __int64 a1,
            unsigned int a2,
            _DWORD *a3,
            _QWORD *a4)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxE17get_register_ruleEjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPy(
               a1,
               a2,
               a3,
               a4);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_expression(
            __int64 result,
            __int64 a2,
            __int64 a3)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxE18set_cfa_expressionEmm(result, a2, a3);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::set_cfa_register_signed(
            __int64 result,
            int a2,
            __int64 a3)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxE23set_cfa_register_signedEjx(result, a2, a3);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::pop_state(__int64 a1)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxE9pop_stateEv(a1);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::dwarf_cfa_state(__int64 a1)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxEC1Ev(a1);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned long long,long long>::dwarf_cfa_state(__int64 a1)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIyxEC2Ev(a1);
    }

}; // end class plcrash::BIT::async::dwarf_cfa_state<ulong long,long long>
