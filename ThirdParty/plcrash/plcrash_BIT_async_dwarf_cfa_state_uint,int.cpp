class plcrash::BIT::async::dwarf_cfa_state<uint,int>
{
public:

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::eval_program(
            __int64 a1,
            __int64 a2,
            unsigned int a3,
            unsigned int a4,
            __int64 a5,
            __int64 *a6,
            __int64 a7,
            unsigned __int64 a8,
            __int64 a9,
            __int64 a10)
    {
      int v17; // w23
      __int64 v18; // x24
      unsigned int v19; // w8
      __int64 v20; // x24
      unsigned __int64 v21; // x25
      __int64 v22; // x28
      unsigned __int64 v23; // x1
      __int64 v24; // x3
      __int64 v25; // x2
      __int64 v26; // x0
      __int64 v27; // x8
      unsigned __int8 *v28; // x8
      int v30; // w10
      __int64 v31; // x0
      unsigned __int8 *v32; // x8
      __int64 v33; // x2
      unsigned __int64 v34; // x24
      int v35; // w8
      __int64 v36; // x2
      __int64 v37; // x2
      unsigned __int64 v38; // x24
      __int64 v39; // x24
      __int64 v40; // x1
      __int64 v41; // x24
      __int64 v42; // x2
      __int64 v43; // x2
      unsigned __int64 v44; // x24
      __int64 v45; // x24
      __int64 v46; // x2
      int v47; // w8
      __int64 v48; // x2
      unsigned __int8 *v49; // x11
      unsigned __int16 *v50; // x9
      int v51; // w14
      int v52; // w27
      unsigned __int8 v53; // w25
      unsigned int v55; // [xsp+10h] [xbp-C40h] BYREF
      unsigned int v56; // [xsp+14h] [xbp-C3Ch] BYREF
      unsigned __int64 v57; // [xsp+18h] [xbp-C38h] BYREF
      unsigned int v58; // [xsp+20h] [xbp-C30h] BYREF
      unsigned int v59; // [xsp+24h] [xbp-C2Ch] BYREF
      __int64 v60; // [xsp+28h] [xbp-C28h] BYREF
      __int64 v61; // [xsp+30h] [xbp-C20h] BYREF
      unsigned __int64 v62; // [xsp+38h] [xbp-C18h] BYREF
      __int64 v63; // [xsp+40h] [xbp-C10h] BYREF
      unsigned __int64 v64; // [xsp+48h] [xbp-C08h] BYREF
      unsigned __int64 v65; // [xsp+50h] [xbp-C00h] BYREF
      unsigned __int64 v66; // [xsp+58h] [xbp-BF8h] BYREF
      __int64 v67; // [xsp+60h] [xbp-BF0h] BYREF
      unsigned __int64 v68; // [xsp+68h] [xbp-BE8h] BYREF
      unsigned __int64 v69; // [xsp+70h] [xbp-BE0h] BYREF
      unsigned __int64 v70; // [xsp+78h] [xbp-BD8h] BYREF
      __int64 v71; // [xsp+80h] [xbp-BD0h] BYREF
      unsigned __int64 v72; // [xsp+88h] [xbp-BC8h] BYREF
      __int64 v73; // [xsp+90h] [xbp-BC0h] BYREF
      unsigned __int64 v74; // [xsp+98h] [xbp-BB8h] BYREF
      unsigned __int64 v75; // [xsp+A0h] [xbp-BB0h] BYREF
      __int64 v76; // [xsp+A8h] [xbp-BA8h] BYREF
      __int64 v77; // [xsp+B0h] [xbp-BA0h] BYREF
      unsigned __int64 v78; // [xsp+B8h] [xbp-B98h] BYREF
      __int64 v79; // [xsp+C0h] [xbp-B90h] BYREF
      unsigned int v80; // [xsp+C8h] [xbp-B88h]
      __int64 v81; // [xsp+D8h] [xbp-B78h] BYREF
      __int64 v82; // [xsp+E0h] [xbp-B70h] BYREF
      unsigned int v83; // [xsp+E8h] [xbp-B68h]
      unsigned __int64 v84; // [xsp+F8h] [xbp-B58h] BYREF
      unsigned __int64 v85; // [xsp+100h] [xbp-B50h] BYREF
      __int64 v86; // [xsp+108h] [xbp-B48h] BYREF
      unsigned int v87; // [xsp+114h] [xbp-B3Ch]
      unsigned __int64 v88; // [xsp+120h] [xbp-B30h] BYREF
      unsigned __int64 v89; // [xsp+128h] [xbp-B28h] BYREF
      __int64 v90; // [xsp+130h] [xbp-B20h] BYREF
      unsigned __int64 v91; // [xsp+138h] [xbp-B18h] BYREF
      unsigned __int64 v92; // [xsp+140h] [xbp-B10h] BYREF
      _BYTE v93[20]; // [xsp+148h] [xbp-B08h] BYREF
      unsigned int v94; // [xsp+15Ch] [xbp-AF4h] BYREF
      unsigned int v95; // [xsp+160h] [xbp-AF0h] BYREF
      unsigned int v96; // [xsp+164h] [xbp-AECh] BYREF
      _BYTE v97[2644]; // [xsp+168h] [xbp-AE8h] BYREF
      unsigned int v98; // [xsp+BBCh] [xbp-94h] BYREF
      unsigned __int8 *v99; // [xsp+BC0h] [xbp-90h] BYREF
      unsigned int *v100; // [xsp+BC8h] [xbp-88h]
      __int64 v101; // [xsp+BD0h] [xbp-80h]
      unsigned __int64 v102; // [xsp+BE0h] [xbp-70h]
      unsigned __int64 v103; // [xsp+BE8h] [xbp-68h]
      __int64 (__fastcall **v104)(_QWORD); // [xsp+BF0h] [xbp-60h]
      __int64 v105; // [xsp+BF8h] [xbp-58h] BYREF
    
      v98 = a4;
      plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::dwarf_cfa_state(v97);
      plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned int,int>::dwarf_cfa_state_iterator(v93, a1);
      while ( (unsigned int)plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned int,int>::next(v93, &v96, &v95, &v94) )
      {
        if ( (plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_register(v97, v96, v95, v94) & 1) == 0 )
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
      if ( !(unsigned int)BITplcrash_async_address_apply_offset(a8, a9, &v92) )
        return 5;
      v18 = plcrash::BIT::async::dwarf_opstream::init(&v99, a2, a7, a8, a9, a10);
      if ( !(_DWORD)v18 )
      {
        v19 = v98;
        if ( !a3 || (v18 = 0, v98 <= a3) )
        {
          while ( 1 )
          {
            v49 = v99;
            if ( (unsigned __int64)v99 < v102 || (unsigned __int8 *)v103 == v99 )
              return 0;
            v50 = (unsigned __int16 *)(v99 + 1);
            v51 = *v99++;
            if ( (v51 & 0xC0) != 0 )
              v52 = v51 & 0xC0;
            else
              v52 = v51;
            if ( (v51 & 0xC0) != 0 )
              v53 = v51 & 0x3F;
            else
              v53 = 0;
            v18 = 4;
            if ( v52 > 63 )
            {
              switch ( v52 )
              {
                case 64:
                  v27 = *(_QWORD *)(a5 + 32) * v53 + v19;
    LABEL_35:
                  v98 = v27;
                  break;
                case 128:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v73,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  v23 = v53;
                  v24 = (unsigned int)(*(_DWORD *)(a5 + 40) * v73);
                  v25 = 0;
                  v26 = a1;
                  goto LABEL_162;
                case 192:
                  if ( (unsigned int)plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::get_register_rule(
                                       v97,
                                       v53,
                                       &v59,
                                       &v58) )
                  {
                    v24 = v58;
                    v25 = v59;
                    v26 = a1;
                    v23 = v53;
    LABEL_162:
                    if ( (plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_register(v26, v23, v25, v24) & 1) == 0 )
                      return 3;
                    break;
                  }
    LABEL_39:
                  plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::remove_register(a1, v53);
                  break;
                default:
                  return v18;
              }
            }
            else
            {
              switch ( v52 )
              {
                case 0:
                  break;
                case 1:
                  if ( *(_BYTE *)(a5 + 26) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::gnu_ehptr_reader<unsigned int>::read(
                                       a6,
                                       v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       v17,
                                       &v98,
                                       &v105) )
                    return 5;
                  if ( v105 < 0 )
                    return 5;
                  v28 = &v99[v105];
                  if ( (unsigned __int64)&v99[v105] < v102 || (unsigned __int64)v28 > v103 )
                    return 5;
                  goto LABEL_170;
                case 2:
                  if ( (unsigned __int64)v50 < v102 || v103 == (_QWORD)v50 )
                    return 5;
                  v30 = v49[1];
                  v99 = v49 + 2;
                  LODWORD(v27) = v19 + v30 * *(_DWORD *)(a5 + 32);
                  goto LABEL_35;
                case 3:
                  if ( (unsigned __int64)v50 < v102 || v103 - (unsigned __int64)v50 < 2 )
                    return 5;
                  v31 = (*v104)(*v50);
                  v32 = v99 + 2;
                  goto LABEL_57;
                case 4:
                  if ( (unsigned __int64)v50 < v102 || v103 - (unsigned __int64)v50 < 4 )
                    return 5;
                  v31 = v104[1](*(unsigned int *)v50);
                  v32 = v99 + 4;
    LABEL_57:
                  v99 = v32;
                  v27 = v98 + *(_QWORD *)(a5 + 32) * v31;
                  goto LABEL_35;
                case 5:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v72,
                                       &v105) )
                    return 5;
                  v33 = (__int64)&v99[v105 - v102];
                  if ( (unsigned __int64)&v99[v105] < v102 || (unsigned __int64)&v99[v105] > v103 )
                    return 5;
                  v99 += v105;
                  v34 = v72;
                  if ( HIDWORD(v72) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       v33,
                                       &v71,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  v35 = v71;
                  goto LABEL_129;
                case 6:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v57,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  v34 = v57;
                  if ( HIDWORD(v57) )
                    return 4;
                  if ( !(unsigned int)plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::get_register_rule(
                                        v97,
                                        v57,
                                        &v56,
                                        &v55) )
                    goto LABEL_39;
                  v24 = v55;
                  v25 = v56;
                  goto LABEL_161;
                case 7:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v75,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  if ( HIDWORD(v75) )
                    return 4;
                  plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::remove_register(a1, v75);
                  break;
                case 8:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v74,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  v23 = v74;
                  if ( HIDWORD(v74) )
                    return 4;
                  v25 = 5;
                  v26 = a1;
                  v24 = 0;
                  goto LABEL_162;
                case 9:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v64,
                                       &v105) )
                    return 5;
                  v36 = (__int64)&v99[v105 - v102];
                  if ( (unsigned __int64)&v99[v105] < v102 || (unsigned __int64)&v99[v105] > v103 )
                    return 5;
                  v99 += v105;
                  v34 = v64;
                  if ( HIDWORD(v64) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       v36,
                                       &v63,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  v24 = (unsigned int)v63;
                  v25 = 2;
                  goto LABEL_161;
                case 10:
                  if ( (plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::push_state(a1) & 1) == 0 )
                    return 3;
                  break;
                case 11:
                  if ( !(unsigned int)plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::pop_state(a1) )
                    return 5;
                  break;
                case 12:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v91,
                                       &v105) )
                    return 5;
                  v37 = (__int64)&v99[v105 - v102];
                  if ( (unsigned __int64)&v99[v105] < v102 || (unsigned __int64)&v99[v105] > v103 )
                    return 5;
                  v99 += v105;
                  v38 = v91;
                  if ( HIDWORD(v91) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       v37,
                                       &v90,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_register(a1, v38, (unsigned int)v90);
                  break;
                case 13:
                  plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::get_cfa_rule(&v86, a1);
                  if ( (unsigned int)v86 < 2 )
                    return 5;
                  if ( (_DWORD)v86 == 3 )
                  {
                    if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                         (__int64)v100,
                                         v101,
                                         (__int64)&v99[-v102],
                                         &v84,
                                         &v105)
                      || (unsigned __int64)&v99[v105] < v102
                      || (unsigned __int64)&v99[v105] > v103 )
                    {
                      return 5;
                    }
                    v99 += v105;
                    if ( HIDWORD(v84) )
                      return 4;
                    plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_register_signed(a1, v84, v87);
                  }
                  else if ( (_DWORD)v86 == 2 )
                  {
                    if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                         (__int64)v100,
                                         v101,
                                         (__int64)&v99[-v102],
                                         &v85,
                                         &v105)
                      || (unsigned __int64)&v99[v105] < v102
                      || (unsigned __int64)&v99[v105] > v103 )
                    {
                      return 5;
                    }
                    v99 += v105;
                    if ( HIDWORD(v85) )
                      return 4;
                    plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_register(a1, v85, v87);
                  }
                  break;
                case 14:
                  plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::get_cfa_rule(&v82, a1);
                  if ( (unsigned int)v82 < 2 )
                    return 5;
                  if ( (unsigned int)(v82 - 2) > 1 )
                    break;
                  v39 = v83;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)&v99[-v102],
                                       &v81,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_register(a1, v39, (unsigned int)v81);
                  break;
                case 15:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v77,
                                       &v105) )
                    return 5;
                  v40 = (__int64)&v99[v105 - v102];
                  if ( (unsigned __int64)&v99[v105] < v102 || (unsigned __int64)&v99[v105] > v103 )
                    return 5;
                  v99 += v105;
                  v41 = v77;
                  if ( (v40 | v77) < 0 )
                    return 4;
                  if ( !(unsigned int)BITplcrash_async_address_apply_offset(v92, v40, &v76) )
                    return 5;
                  plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_expression(a1, v76, v41);
                  v28 = &v99[v41];
                  goto LABEL_168;
                case 16:
                case 22:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v62,
                                       &v105) )
                    return 5;
                  v20 = (__int64)&v99[v105 - v102];
                  if ( (unsigned __int64)&v99[v105] < v102 || (unsigned __int64)&v99[v105] > v103 )
                    return 5;
                  v99 += v105;
                  v21 = v62;
                  if ( HIDWORD(v62) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       v20,
                                       &v61,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  if ( v20 < 0 )
                    return 4;
                  v22 = v61;
                  if ( !(unsigned int)BITplcrash_async_address_apply_offset(v92, v20, &v60) )
                    return 5;
                  if ( v52 == 16 )
                  {
                    v18 = 3;
                    if ( (plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_register(
                            a1,
                            v21,
                            3,
                            (unsigned int)v60)
                        & 1) == 0 )
                      return v18;
                  }
                  else if ( !(unsigned int)plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_register(
                                             a1,
                                             v21,
                                             4,
                                             (unsigned int)v60) )
                  {
                    return 3;
                  }
                  v28 = &v99[v22];
    LABEL_168:
                  if ( (unsigned __int64)v28 >= v102 && (unsigned __int64)v28 <= v103 )
    LABEL_170:
                    v99 = v28;
                  break;
                case 17:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v70,
                                       &v105) )
                    return 5;
                  v42 = (__int64)&v99[v105 - v102];
                  if ( (unsigned __int64)&v99[v105] < v102 || (unsigned __int64)&v99[v105] > v103 )
                    return 5;
                  v99 += v105;
                  v34 = v70;
                  if ( HIDWORD(v70) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                       (__int64)v100,
                                       v101,
                                       v42,
                                       &v69,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  v35 = v69;
    LABEL_129:
                  v24 = (unsigned int)(*(_DWORD *)(a5 + 40) * v35);
                  v25 = 0;
                  goto LABEL_161;
                case 18:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v89,
                                       &v105) )
                    return 5;
                  v43 = (__int64)&v99[v105 - v102];
                  if ( (unsigned __int64)&v99[v105] < v102 || (unsigned __int64)&v99[v105] > v103 )
                    return 5;
                  v99 += v105;
                  v44 = v89;
                  if ( HIDWORD(v89) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                       (__int64)v100,
                                       v101,
                                       v43,
                                       &v88,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_register_signed(
                    a1,
                    v44,
                    (unsigned int)(*(_DWORD *)(a5 + 40) * v88));
                  break;
                case 19:
                  plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::get_cfa_rule(&v79, a1);
                  if ( (unsigned int)v79 < 2 )
                    return 5;
                  if ( (unsigned int)(v79 - 2) > 1 )
                    break;
                  v45 = v80;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)&v99[-v102],
                                       &v78,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_register_signed(
                    a1,
                    v45,
                    (unsigned int)(*(_DWORD *)(a5 + 40) * v78));
                  break;
                case 20:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v68,
                                       &v105) )
                    return 5;
                  v46 = (__int64)&v99[v105 - v102];
                  if ( (unsigned __int64)&v99[v105] < v102 || (unsigned __int64)&v99[v105] > v103 )
                    return 5;
                  v99 += v105;
                  v34 = v68;
                  if ( HIDWORD(v68) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       v46,
                                       &v67,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  v47 = v67;
                  goto LABEL_160;
                case 21:
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_uleb128(
                                       (__int64)v100,
                                       v101,
                                       (__int64)v50 - v102,
                                       &v66,
                                       &v105) )
                    return 5;
                  v48 = (__int64)&v99[v105 - v102];
                  if ( (unsigned __int64)&v99[v105] < v102 || (unsigned __int64)&v99[v105] > v103 )
                    return 5;
                  v99 += v105;
                  v34 = v66;
                  if ( HIDWORD(v66) )
                    return 4;
                  if ( (unsigned int)plcrash::BIT::async::plcrash_async_dwarf_read_sleb128(
                                       (__int64)v100,
                                       v101,
                                       v48,
                                       &v65,
                                       &v105)
                    || (unsigned __int64)&v99[v105] < v102
                    || (unsigned __int64)&v99[v105] > v103 )
                  {
                    return 5;
                  }
                  v99 += v105;
                  v47 = v65;
    LABEL_160:
                  v24 = (unsigned int)(*(_DWORD *)(a5 + 40) * v47);
                  v25 = 1;
    LABEL_161:
                  v26 = a1;
                  v23 = v34;
                  goto LABEL_162;
                default:
                  return v18;
              }
            }
            v19 = v98;
            if ( a3 )
            {
              v18 = 0;
              if ( v98 > a3 )
                return v18;
            }
          }
        }
      }
      return v18;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::apply_state(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            char *a4,
            __int64 a5,
            _BYTE *a6)
    {
      vm_offset_t greg_size; // x25
      unsigned int v12; // w8
      int reg; // w0
      __int64 task_uleb128; // x26
      __int64 v15; // x0
      unsigned __int64 v16; // x26
      __int64 v17; // x0
      int v18; // w1
      __int64 v19; // x2
      int v20; // w24
      unsigned __int64 v21; // x27
      int v22; // w22
      __int64 v23; // x26
      vm_offset_t v24; // kr08_8
      unsigned __int64 v25; // x28
      int v26; // w1
      __int64 v27; // x0
      __int64 v28; // x0
      vm_map_t v30; // [xsp+2Ch] [xbp-124h]
      int v32; // [xsp+44h] [xbp-10Ch] BYREF
      int v33; // [xsp+48h] [xbp-108h] BYREF
      int v34; // [xsp+4Ch] [xbp-104h] BYREF
      int v35; // [xsp+50h] [xbp-100h] BYREF
      unsigned int v36; // [xsp+54h] [xbp-FCh] BYREF
      _BYTE v37[16]; // [xsp+58h] [xbp-F8h] BYREF
      int v38; // [xsp+68h] [xbp-E8h] BYREF
      unsigned int v39; // [xsp+6Ch] [xbp-E4h] BYREF
      __int64 v40; // [xsp+70h] [xbp-E0h] BYREF
      __int64 v41; // [xsp+78h] [xbp-D8h]
      unsigned __int64 v42; // [xsp+80h] [xbp-D0h]
      int v43; // [xsp+8Ch] [xbp-C4h] BYREF
      _BYTE v44[56]; // [xsp+90h] [xbp-C0h] BYREF
      __int64 v45; // [xsp+C8h] [xbp-88h] BYREF
      unsigned __int64 v46; // [xsp+D0h] [xbp-80h] BYREF
      __int64 v47; // [xsp+D8h] [xbp-78h] BYREF
      int v48; // [xsp+E4h] [xbp-6Ch] BYREF
      unsigned __int64 v49; // [xsp+E8h] [xbp-68h] BYREF
      unsigned __int64 v50; // [xsp+F0h] [xbp-60h] BYREF
    
      BITplcrash_async_thread_state_copy(a6, a4);
      BITplcrash_async_thread_state_clear_volatile_regs((__int64)a6);
      plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::get_cfa_rule(&v40, a1);
      v12 = v40;
      if ( (_DWORD)v40 == 1 )
      {
        task_uleb128 = BITplcrash_async_mobject_init((__int64)v44, a2, v41, v42, 1);
        if ( (_DWORD)task_uleb128 )
          return task_uleb128;
        task_uleb128 = plcrash::BIT::async::plcrash_async_dwarf_expression_eval<unsigned int,int>(
                         v44,
                         a2,
                         a4,
                         a5,
                         v41,
                         0,
                         v42,
                         0,
                         0,
                         &v39);
        if ( (_DWORD)task_uleb128 )
          return task_uleb128;
        v12 = v39;
      }
      else
      {
        if ( !(_DWORD)v40 )
          return 5;
        if ( (unsigned int)(v40 - 2) <= 1 )
        {
          if ( !(unsigned int)BITplcrash_async_thread_state_map_dwarf_to_reg((__int64)a4, (unsigned int)v41, &v38) )
            return 4;
          if ( !BITplcrash_async_thread_state_has_reg((__int64)a4, v38) )
            return 8;
          reg = BITplcrash_async_thread_state_get_reg((__int64)a4, v38);
          v12 = reg + HIDWORD(v41);
          v39 = reg + HIDWORD(v41);
        }
      }
      v30 = a2;
      BITplcrash_async_thread_state_set_reg((__int64)a6, 2, v12);
      plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned int,int>::dwarf_cfa_state_iterator(v37, a1);
      if ( (unsigned int)plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned int,int>::next(v37, &v36, &v35, &v34) )
      {
        while ( 2 )
        {
          if ( (unsigned int)BITplcrash_async_thread_state_map_dwarf_to_reg((__int64)a4, v36, &v33) )
          {
            v20 = v33;
    LABEL_31:
            v21 = v39;
            v22 = v35;
            v23 = v34;
            v24 = greg_size;
            greg_size = (unsigned __int8)BITplcrash_async_thread_state_get_greg_size((__int64)a4);
            switch ( v22 )
            {
              case 0:
                task_uleb128 = BITplcrash_async_task_memcpy(v30, v21, v23, (vm_address_t)&v49, greg_size);
                if ( !(_DWORD)task_uleb128 )
                {
                  if ( greg_size == 8 )
                    v19 = v49;
                  else
                    v19 = (unsigned int)v49;
                  goto LABEL_51;
                }
                goto LABEL_54;
              case 1:
                v19 = (unsigned int)(v23 + v21);
                goto LABEL_51;
              case 2:
                if ( !(unsigned int)BITplcrash_async_thread_state_map_dwarf_to_reg((__int64)a4, (unsigned int)v23, &v48) )
                  goto LABEL_49;
                if ( !BITplcrash_async_thread_state_has_reg((__int64)a4, v48) )
                {
    LABEL_48:
                  task_uleb128 = 8;
                  goto LABEL_54;
                }
                v26 = v48;
                v27 = (__int64)a4;
    LABEL_47:
                v19 = BITplcrash_async_thread_state_get_reg(v27, v26);
    LABEL_51:
                v17 = (__int64)a6;
                v18 = v20;
                goto LABEL_52;
              case 3:
              case 4:
                v25 = (unsigned int)v23;
                v47 = (unsigned int)v23;
                task_uleb128 = plcrash::BIT::async::plcrash_async_dwarf_read_task_uleb128(
                                 v30,
                                 (unsigned int)v23,
                                 0,
                                 (__int64)&v46,
                                 (__int64)&v45);
                if ( (_DWORD)task_uleb128 )
                  goto LABEL_54;
                if ( (unsigned int)BITplcrash_async_address_apply_offset(v25, v45, &v47) )
                {
                  task_uleb128 = BITplcrash_async_mobject_init((__int64)v44, v30, v47, v46, 1);
                  if ( !(_DWORD)task_uleb128 )
                  {
                    if ( greg_size == 8 )
                    {
                      v50 = v21;
                      task_uleb128 = plcrash::BIT::async::plcrash_async_dwarf_expression_eval<unsigned long long,long long>(
                                       v44,
                                       v30,
                                       a4,
                                       a5,
                                       v47,
                                       0,
                                       v46,
                                       &v50,
                                       1,
                                       &v49);
                      if ( (_DWORD)task_uleb128 )
                      {
    LABEL_18:
                        BITplcrash_async_mobject_free((__int64)v44);
                        goto LABEL_54;
                      }
                      v16 = v49;
                    }
                    else
                    {
                      v43 = v21;
                      task_uleb128 = plcrash::BIT::async::plcrash_async_dwarf_expression_eval<unsigned int,int>(
                                       v44,
                                       v30,
                                       a4,
                                       a5,
                                       v47,
                                       0,
                                       v46,
                                       &v43,
                                       1,
                                       &v49);
                      if ( (_DWORD)task_uleb128 )
                        goto LABEL_18;
                      v16 = (unsigned int)v49;
                    }
                    BITplcrash_async_mobject_free((__int64)v44);
                    if ( v22 == 3 )
                    {
                      task_uleb128 = BITplcrash_async_task_memcpy(v30, v16, 0, (vm_address_t)&v49, greg_size);
                      if ( (_DWORD)task_uleb128 )
                        goto LABEL_54;
                      if ( greg_size == 8 )
                        v16 = v49;
                      else
                        v16 = (unsigned int)v49;
                    }
                    v17 = (__int64)a6;
                    v18 = v20;
                    v19 = v16;
    LABEL_52:
                    BITplcrash_async_thread_state_set_reg(v17, v18, v19);
    LABEL_53:
                    task_uleb128 = 0;
                  }
                }
                else
                {
    LABEL_49:
                  task_uleb128 = 5;
                }
    LABEL_54:
                if ( (_DWORD)task_uleb128 )
                  return task_uleb128;
                if ( *(_QWORD *)(a3 + 48) == v36 && v33 )
                {
                  v15 = BITplcrash_async_thread_state_get_reg((__int64)a6, v33);
                  BITplcrash_async_thread_state_set_reg((__int64)a6, 0, v15);
                }
                if ( (plcrash::BIT::async::dwarf_cfa_state_iterator<unsigned int,int>::next(v37, &v36, &v35, &v34) & 1) == 0 )
                  goto LABEL_56;
                continue;
              case 5:
                if ( !BITplcrash_async_thread_state_has_reg((__int64)a4, v20) )
                  goto LABEL_48;
                v27 = (__int64)a4;
                v26 = v20;
                goto LABEL_47;
              default:
                greg_size = v24;
                goto LABEL_53;
            }
          }
          break;
        }
        if ( *(_QWORD *)(a3 + 48) == v36 )
        {
          v20 = 0;
          v33 = 0;
          goto LABEL_31;
        }
        return 5;
      }
    LABEL_56:
      task_uleb128 = 0;
      if ( !BITplcrash_async_thread_state_has_reg((__int64)a6, 0) )
      {
        if ( (unsigned int)BITplcrash_async_thread_state_map_dwarf_to_reg((__int64)a4, *(_QWORD *)(a3 + 48), &v32)
          && BITplcrash_async_thread_state_has_reg((__int64)a4, v32) )
        {
          v28 = BITplcrash_async_thread_state_get_reg((__int64)a4, v32);
          BITplcrash_async_thread_state_set_reg((__int64)a6, 0, v28);
          return 0;
        }
        return 5;
      }
      return task_uleb128;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::dwarf_cfa_state(__int64 a1)
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
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::dwarf_cfa_state(__int64 a1)
    {
      return j___ZN7plcrash3BIT5async15dwarf_cfa_stateIjiEC2Ev(a1);
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_register(
            __int64 a1,
            unsigned int a2,
            int a3,
            unsigned int a4)
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

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::get_register_rule(
            __int64 a1,
            unsigned int a2,
            _DWORD *a3,
            _DWORD *a4)
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

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::remove_register(
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

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_register(
            __int64 result,
            int a2,
            int a3)
    {
      _DWORD *v3; // x8
    
      v3 = (_DWORD *)(result + 24LL * *(unsigned __int8 *)(result + 234));
      *v3 = 2;
      v3[2] = a2;
      v3[3] = a3;
      return result;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_register_signed(
            __int64 result,
            int a2,
            int a3)
    {
      _DWORD *v3; // x8
    
      v3 = (_DWORD *)(result + 24LL * *(unsigned __int8 *)(result + 234));
      *v3 = 3;
      v3[2] = a2;
      v3[3] = a3;
      return result;
    }

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_expression(
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

    long double __usercall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::get_cfa_rule@<Q0>(
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

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::push_state(__int64 a1)
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

    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::pop_state(__int64 a1)
    {
      if ( !*(_BYTE *)(a1 + 234) )
        return 0;
      --*(_BYTE *)(a1 + 234);
      return 1;
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::apply_state(
            __int64 a1,
            __int64 a2,
            __int64 a3,
            char *a4,
            __int64 a5,
            _BYTE *a6)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiE11apply_stateEjPNS1_28plcrash_async_dwarf_cie_infoEPK26plcrash_async_thread_statePK26BITplcrash_async_byteorderPS6_(
               a1,
               a2,
               a3,
               a4,
               a5,
               a6);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::eval_program(
            __int64 a1,
            __int64 a2,
            unsigned int a3,
            unsigned int a4,
            __int64 a5,
            __int64 *a6,
            __int64 a7,
            unsigned __int64 a8,
            __int64 a9,
            __int64 a10)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiE12eval_programEP21plcrash_async_mobjectjjPNS1_28plcrash_async_dwarf_cie_infoEPNS1_16gnu_ehptr_readerIjEEPK26BITplcrash_async_byteordermlm(
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
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::push_state(__int64 a1)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiE10push_stateEv(a1);
    }

    // attributes: thunk
    long double __usercall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::get_cfa_rule@<Q0>(
            __int64 a2@<X8>,
            __int64 a1@<X0>)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiE12get_cfa_ruleEv(a1, a2);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_register(
            __int64 a1,
            unsigned int a2,
            int a3,
            unsigned int a4)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEj(a1, a2, a3, a4);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::remove_register(
            __int64 result,
            unsigned int a2)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiE15remove_registerEj(result, a2);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_register(
            __int64 result,
            int a2,
            int a3)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiE16set_cfa_registerEjj(result, a2, a3);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::get_register_rule(
            __int64 a1,
            unsigned int a2,
            _DWORD *a3,
            _DWORD *a4)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiE17get_register_ruleEjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPj(
               a1,
               a2,
               a3,
               a4);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_expression(
            __int64 result,
            __int64 a2,
            __int64 a3)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiE18set_cfa_expressionEmm(result, a2, a3);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::set_cfa_register_signed(
            __int64 result,
            int a2,
            int a3)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiE23set_cfa_register_signedEji(result, a2, a3);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::pop_state(__int64 a1)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiE9pop_stateEv(a1);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::dwarf_cfa_state(__int64 a1)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiEC1Ev(a1);
    }

    // attributes: thunk
    __int64 __fastcall plcrash::BIT::async::dwarf_cfa_state<unsigned int,int>::dwarf_cfa_state(__int64 a1)
    {
      return __ZN7plcrash3BIT5async15dwarf_cfa_stateIjiEC2Ev(a1);
    }

}; // end class plcrash::BIT::async::dwarf_cfa_state<uint,int>
