class DCT_Upsample::R_S<7,6>
{
public:

    __int64 __fastcall DCT_Upsample::R_S<7,6>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w15
      int v4; // w16
      int v5; // w3
      int v6; // w4
      int v7; // w5
      int v8; // w7
      int v9; // w19
      int v10; // w20
      int v11; // w22
      int v12; // w25
      int v13; // w28
      int v14; // w30
      int v15; // w8
      int v16; // w6
      int v17; // w10
      int v18; // w9
      int v19; // w3
      int v20; // w24
      int v21; // w4
      int v22; // w15
      int v23; // w3
      int v24; // w7
      int v25; // w26
      int v26; // w27
      int v27; // w3
      int v28; // w5
      int v29; // w23
      int v30; // w19
      int v31; // w24
      int v32; // w20
      int v33; // w21
      int v34; // w16
      int v35; // w7
      int v36; // w19
      int v37; // w22
      int v38; // w25
      int v39; // w28
      int v40; // w6
      int v41; // w30
      int v42; // w10
      int v43; // w26
      int v44; // w27
      int v45; // w23
      int v46; // w14
      int v47; // w12
      int v48; // w13
      int v49; // w20
      int v50; // w4
      int v51; // w21
      int v52; // w5
      int v53; // w20
      int v54; // w15
      int v55; // w21
      int v56; // w24
      int v57; // w16
      int v58; // w7
      int v59; // w20
      int v60; // w7
      int v61; // w3
      int v62; // w19
      int v63; // w25
      int v64; // w9
      int v65; // w28
      int v66; // w30
      int v67; // w24
      int v68; // w20
      int v69; // w14
      int v70; // w23
      int v71; // w11
      int v72; // w12
      int v73; // w7
      int v74; // w2
      int v75; // [xsp+0h] [xbp-70h]
      int v76; // [xsp+4h] [xbp-6Ch]
      int v77; // [xsp+8h] [xbp-68h]
      int v78; // [xsp+Ch] [xbp-64h]
    
      v3 = a3[3];
      v4 = a3[11];
      v5 = a3[1];
      v6 = a3[9];
      v7 = a3[19];
      v8 = a3[13];
      v9 = a3[17];
      v10 = a3[27];
      v11 = a3[25];
      v12 = a3[29];
      v13 = a3[33];
      v14 = a3[35];
      v78 = -325 * v3 + 928 * v5;
      v15 = a3[41];
      v16 = a3[43];
      v77 = 526 * v3 - 75 * v5;
      v17 = a3[49];
      v18 = a3[51];
      v19 = -325 * v4 + 928 * v6;
      v20 = 526 * v4 - 75 * v6;
      v21 = -325 * v7 + 928 * v9;
      v22 = -325 * v14 + 928 * v13;
      v76 = -325 * v16 + 928 * v15;
      v23 = v19 + 218 * v8;
      v24 = v20 + 787 * v8;
      v25 = (v23 + 512) >> 10;
      v26 = (-325 * v10 + 928 * v11 + 218 * v12 + 512) >> 10;
      v27 = -325 * v18 + 928 * v17;
      v28 = 526 * v7 - 75 * v9;
      v29 = a3[10];
      v30 = 526 * v10 - 75 * v11;
      v31 = a3[26];
      v32 = (v24 + 512) >> 10;
      v33 = (v30 + 787 * v12 + 512) >> 10;
      v34 = 526 * v14 - 75 * v13;
      v35 = 526 * v16 - 75 * v15;
      v36 = 526 * v18 - 75 * v17;
      v37 = 810 * v26 + 426 * v25;
      v38 = 810 * v31 + 426 * v29;
      v39 = 810 * v33 + 426 * v32;
      v40 = -99 * v26 + 23 * v25;
      v75 = -99 * v31 + 23 * v29;
      v41 = -99 * v33 + 23 * v32;
      v42 = -325 * v26 + 928 * v25;
      v43 = 526 * v26 - 75 * v25;
      v44 = -325 * v31 + 928 * v29;
      v45 = 526 * v31 - 75 * v29;
      v46 = -325 * v33 + 928 * v32;
      v47 = 526 * v33 - 75 * v32;
      v48 = a3[5];
      v49 = a3[21];
      v50 = v21 + 218 * v49;
      v51 = a3[37];
      v52 = v28 + 787 * v49;
      v53 = a3[45];
      v54 = v22 + 218 * v51;
      v55 = v34 + 787 * v51;
      v56 = a3[53];
      v57 = (v76 + 218 * v53 + 512) >> 10;
      v58 = v35 + 787 * v53;
      v59 = a3[42];
      v60 = (v58 + 512) >> 10;
      v61 = v27 + 218 * v56;
      v62 = v36 + 787 * v56;
      v63 = v38 - 360 * v59;
      v64 = v39 - 360 * v60;
      v65 = v75 + 502 * v59;
      v66 = v41 + 502 * v60;
      v67 = v44 + 218 * v59;
      v68 = v45 + 787 * v59;
      v69 = v46 + 218 * v60;
      v70 = a3[2];
      v71 = v47 + 787 * v60;
      v72 = a3[18];
      v73 = a3[34];
      v74 = a3[50];
      *(_DWORD *)result = (v78 + 218 * v48 + 512) >> 10;
      *(_DWORD *)(result + 4) = (v37 - 360 * v57 + 512) >> 10;
      *(_DWORD *)(result + 8) = (v54 + 512) >> 10;
      *(_DWORD *)(result + 12) = (v40 + 502 * v57 + 512) >> 10;
      *(_DWORD *)(result + 16) = v70;
      *(_DWORD *)(result + 20) = (v63 + 512) >> 10;
      *(_DWORD *)(result + 24) = v73;
      *(_DWORD *)(result + 28) = (v65 + 512) >> 10;
      *(_DWORD *)(result + 32) = (v77 + 787 * v48 + 512) >> 10;
      *(_DWORD *)(result + 36) = (v64 + 512) >> 10;
      *(_DWORD *)(result + 40) = (v55 + 512) >> 10;
      *(_DWORD *)(result + 44) = (v66 + 512) >> 10;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
      *(_DWORD *)a2 = (v42 + 218 * v57 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = (v50 + 512) >> 10;
      *(_DWORD *)(a2 + 8) = (v43 + 787 * v57 + 512) >> 10;
      *(_DWORD *)(a2 + 12) = (v61 + 512) >> 10;
      *(_DWORD *)(a2 + 16) = (v67 + 512) >> 10;
      *(_DWORD *)(a2 + 20) = v72;
      *(_DWORD *)(a2 + 24) = (v68 + 512) >> 10;
      *(_DWORD *)(a2 + 28) = v74;
      *(_DWORD *)(a2 + 32) = (v69 + 512) >> 10;
      *(_DWORD *)(a2 + 36) = (v52 + 512) >> 10;
      *(_DWORD *)(a2 + 40) = (v71 + 512) >> 10;
      *(_DWORD *)(a2 + 44) = (v62 + 512) >> 10;
      *(_QWORD *)(a2 + 48) = 0;
      *(_QWORD *)(a2 + 56) = 0;
      return result;
    }

}; // end class DCT_Upsample::R_S<7,6>
