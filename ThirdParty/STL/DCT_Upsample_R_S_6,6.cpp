class DCT_Upsample::R_S<6,6>
{
public:

    __int64 __fastcall DCT_Upsample::R_S<6,6>::calc(__int64 result, __int64 a2, __int16 *a3)
    {
      int v3; // w14
      int v4; // w16
      int v5; // w3
      int v6; // w4
      int v7; // w5
      int v8; // w20
      int v9; // w21
      int v10; // w22
      int v11; // w25
      int v12; // w26
      int v13; // w27
      int v14; // w28
      int v15; // w30
      int v16; // w8
      int v17; // w6
      int v18; // w7
      int v19; // w9
      int v20; // w10
      int v21; // w3
      int v22; // w16
      int v23; // w14
      int v24; // w4
      int v25; // w24
      int v26; // w9
      int v27; // w19
      int v28; // w22
      int v29; // w5
      int v30; // w20
      int v31; // w21
      int v32; // w23
      int v33; // w8
      int v34; // w10
      int v35; // w27
      int v36; // w25
      int v37; // w26
      int v38; // w9
      int v39; // w24
      int v40; // w6
      int v41; // w15
      int v42; // w12
      int v43; // w13
      int v44; // w7
      int v45; // w3
      int v46; // w19
      int v47; // w4
      int v48; // w7
      int v49; // w14
      int v50; // w7
      int v51; // w20
      int v52; // w14
      int v53; // w7
      int v54; // w16
      int v55; // w5
      int v56; // w8
      int v57; // w19
      int v58; // w15
      int v59; // w11
      int v60; // w12
      int v61; // w7
      int v62; // w2
      int v63; // [xsp+8h] [xbp-68h]
      int v64; // [xsp+Ch] [xbp-64h]
    
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
      v64 = -325 * v3 + 928 * v5;
      v15 = a3[41];
      v16 = a3[43];
      v63 = 526 * v3 - 75 * v5;
      v17 = a3[10];
      v18 = a3[26];
      v19 = -325 * v4 + 928 * v6;
      v20 = 526 * v4 - 75 * v6;
      v21 = -325 * v7 + 928 * v9;
      v22 = -325 * v14 + 928 * v13;
      v23 = -325 * v16 + 928 * v15;
      v24 = 526 * v7 - 75 * v9;
      v25 = (v19 + 218 * v8 + 512) >> 10;
      v26 = (-325 * v10 + 928 * v11 + 218 * v12 + 512) >> 10;
      v27 = (v20 + 787 * v8 + 512) >> 10;
      v28 = (526 * v10 - 75 * v11 + 787 * v12 + 512) >> 10;
      v29 = 526 * v14 - 75 * v13;
      v30 = 526 * v16 - 75 * v15;
      v31 = 810 * v26 + 426 * v25;
      v32 = 810 * v18 + 426 * v17;
      v33 = 810 * v28 + 426 * v27;
      v34 = -99 * v26 + 23 * v25;
      v35 = -99 * v18 + 23 * v17;
      v36 = -99 * v28 + 23 * v27;
      v37 = -325 * v26 + 928 * v25;
      v38 = 526 * v26 - 75 * v25;
      v39 = -325 * v18 + 928 * v17;
      v40 = 526 * v18 - 75 * v17;
      v41 = -325 * v28 + 928 * v27;
      v42 = 526 * v28 - 75 * v27;
      v43 = a3[5];
      v44 = a3[21];
      v45 = v21 + 218 * v44;
      v46 = a3[37];
      v47 = v24 + 787 * v44;
      v48 = a3[45];
      v49 = v23 + 218 * v48;
      v50 = v30 + 787 * v48;
      v51 = a3[42];
      v52 = (v49 + 512) >> 10;
      v53 = (v50 + 512) >> 10;
      v54 = v22 + 218 * v46;
      v55 = v29 + 787 * v46;
      v56 = v33 - 360 * v53;
      v57 = v36 + 502 * v53;
      v58 = v41 + 218 * v53;
      v59 = v42 + 787 * v53;
      v60 = a3[2];
      v61 = a3[18];
      v62 = a3[34];
      *(_DWORD *)result = (v64 + 218 * v43 + 512) >> 10;
      *(_DWORD *)(result + 4) = (v31 - 360 * v52 + 512) >> 10;
      *(_DWORD *)(result + 8) = (v54 + 512) >> 10;
      *(_DWORD *)(result + 12) = (v34 + 502 * v52 + 512) >> 10;
      *(_DWORD *)(result + 16) = v60;
      *(_DWORD *)(result + 20) = (v32 - 360 * v51 + 512) >> 10;
      *(_DWORD *)(result + 24) = v62;
      *(_DWORD *)(result + 28) = (v35 + 502 * v51 + 512) >> 10;
      *(_DWORD *)(result + 32) = (v63 + 787 * v43 + 512) >> 10;
      *(_DWORD *)(result + 36) = (v56 + 512) >> 10;
      *(_DWORD *)(result + 40) = (v55 + 512) >> 10;
      *(_DWORD *)(result + 44) = (v57 + 512) >> 10;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
      *(_DWORD *)a2 = (v37 + 218 * v52 + 512) >> 10;
      *(_DWORD *)(a2 + 4) = (v45 + 512) >> 10;
      *(_DWORD *)(a2 + 8) = (v38 + 787 * v52 + 512) >> 10;
      *(_DWORD *)(a2 + 16) = (v39 + 218 * v51 + 512) >> 10;
      *(_DWORD *)(a2 + 20) = v61;
      *(_DWORD *)(a2 + 24) = (v40 + 787 * v51 + 512) >> 10;
      *(_DWORD *)(a2 + 32) = (v58 + 512) >> 10;
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 28) = 0;
      *(_DWORD *)(a2 + 36) = (v47 + 512) >> 10;
      *(_DWORD *)(a2 + 40) = (v59 + 512) >> 10;
      *(_DWORD *)(a2 + 60) = 0;
      *(_QWORD *)(a2 + 52) = 0;
      *(_QWORD *)(a2 + 44) = 0;
      return result;
    }

}; // end class DCT_Upsample::R_S<6,6>
