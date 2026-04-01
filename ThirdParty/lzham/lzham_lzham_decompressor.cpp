class lzham::lzham_decompressor
{
public:

    __int64 __fastcall lzham::lzham_decompressor::init(std::string *this)
    {
      lzham::CLZDecompBase::init_position_slots((__int64)this + 4, *((_DWORD *)this + 69));
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 78) = 0;
      *((_BYTE *)this + 248) = 0;
      *((_QWORD *)this + 29) = 0;
      *((_QWORD *)this + 30) = 0;
      *((_QWORD *)this + 27) = 0;
      *((_QWORD *)this + 28) = 0;
      *((_QWORD *)this + 32) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 188) = 0;
      *((_QWORD *)this + 187) = 0;
      *((_QWORD *)this + 186) = 0;
      *((_DWORD *)this + 52) = 1;
      *((_DWORD *)this + 392) = 0;
      *((_DWORD *)this + 407) = 0;
      *((_DWORD *)this + 408) = 1;
      *((_DWORD *)this + 384) = 0;
      *((_QWORD *)this + 191) = 0;
      *((_QWORD *)this + 190) = 0;
      *((_QWORD *)this + 189) = 0;
      *((_QWORD *)this + 195) = 0;
      *((_QWORD *)this + 194) = 0;
      *(_QWORD *)((char *)this + 1604) = 0;
      *(_QWORD *)((char *)this + 1596) = 0;
      *(_QWORD *)((char *)this + 1588) = 0;
      *(_QWORD *)((char *)this + 1580) = 0;
      *(_QWORD *)((char *)this + 1572) = 0;
      *((_DWORD *)this + 413) = 0;
      *(_QWORD *)((char *)this + 1644) = 0;
      *(_QWORD *)((char *)this + 1636) = 0;
      return lzham::symbol_codec::clear((_QWORD *)this + 2);
    }

    __int64 __fastcall lzham::lzham_decompressor::reset_huff_tables(std::string *this)
    {
      __int64 i; // x20
      __int64 j; // x20
    
      lzham::raw_quasi_adaptive_huffman_data_model::reset((__int64)this + 320);
      lzham::raw_quasi_adaptive_huffman_data_model::reset((__int64)this + 448);
      lzham::raw_quasi_adaptive_huffman_data_model::reset((__int64)this + 576);
      for ( i = 0; i != 256; i += 128 )
        lzham::raw_quasi_adaptive_huffman_data_model::reset((__int64)this + i + 704);
      for ( j = 0; j != 256; j += 128 )
        lzham::raw_quasi_adaptive_huffman_data_model::reset((__int64)this + j + 960);
      return lzham::raw_quasi_adaptive_huffman_data_model::reset((__int64)this + 1216);
    }

    void __fastcall lzham::lzham_decompressor::reset_arith_tables(std::string *this)
    {
      __int64 v2; // x9
      _WORD *v3; // x11
    
      memset_pattern16((char *)this + 1344, &memset_pattern25, 0x18u);
      v2 = -24;
      do
      {
        v3 = (_WORD *)((char *)this + v2 + 1464);
        *(v3 - 36) = 1024;
        *(v3 - 24) = 1024;
        *(v3 - 12) = 1024;
        *v3 = 1024;
        v2 += 2;
        v3[12] = 1024;
      }
      while ( v2 );
    }

    __int64 __fastcall lzham::lzham_decompressor::reset_huffman_table_update_rates(std::string *this)
    {
      __int64 i; // x20
      __int64 j; // x20
    
      lzham::raw_quasi_adaptive_huffman_data_model::reset_update_rate((__int64)this + 320);
      lzham::raw_quasi_adaptive_huffman_data_model::reset_update_rate((__int64)this + 448);
      lzham::raw_quasi_adaptive_huffman_data_model::reset_update_rate((__int64)this + 576);
      for ( i = 0; i != 256; i += 128 )
        lzham::raw_quasi_adaptive_huffman_data_model::reset_update_rate((__int64)this + i + 704);
      for ( j = 0; j != 256; j += 128 )
        lzham::raw_quasi_adaptive_huffman_data_model::reset_update_rate((__int64)this + j + 960);
      return lzham::raw_quasi_adaptive_huffman_data_model::reset_update_rate((__int64)this + 1216);
    }

    __int64 __fastcall lzham::lzham_decompressor::decompress<true>(__int64 a1)
    {
      __int64 v2; // x27
      unsigned __int64 *v3; // x8
      char *v4; // x20
      unsigned __int64 v5; // x24
      int v6; // w9
      __int64 v7; // x22
      unsigned int v8; // w23
      __int64 v9; // x21
      __int64 v10; // x15
      unsigned __int64 v11; // x10
      int v12; // w11
      unsigned __int8 *v13; // x16
      __int64 *v14; // x10
      unsigned __int8 *v15; // x26
      __int64 v16; // x9
      int v17; // w11
      unsigned __int8 *v18; // x9
      int v19; // w8
      unsigned __int8 *v20; // x10
      __int64 *v21; // x11
      __int64 v22; // x12
      int v23; // w13
      unsigned __int64 v24; // x9
      int v25; // w8
      __int64 *v26; // x10
      __int64 v27; // x9
      int v28; // w11
      unsigned __int8 *v29; // x9
      char v30; // w10
      __int64 v31; // x9
      __int64 v32; // x10
      char *v33; // x1
      size_t v34; // x9
      __int64 v35; // x22
      __int64 v36; // x17
      __int64 v37; // x21
      __int64 v38; // x16
      unsigned __int64 v39; // x2
      __int64 v40; // x15
      int v41; // w8
      unsigned __int8 *v42; // x11
      char v43; // w10
      __int64 v44; // x9
      __int64 v45; // x10
      char *v46; // x1
      size_t v47; // x9
      int v48; // w8
      __int64 v49; // x25
      __int64 v50; // x22
      int v51; // w23
      __int64 v52; // x28
      __int64 v53; // x26
      unsigned __int64 v54; // x21
      __int64 v55; // x8
      char *v56; // x10
      char v57; // t1
      __int64 *v58; // x9
      __int64 v59; // x10
      int v60; // w11
      unsigned __int8 *v61; // x10
      __int64 *v62; // x9
      __int64 v63; // x10
      int v64; // w11
      unsigned __int8 *v65; // x10
      __int64 *v66; // x9
      __int64 v67; // x11
      int v68; // w10
      unsigned __int8 *v69; // x10
      __int64 v70; // x8
      unsigned int v71; // t1
      int v72; // w9
      __int64 *v73; // x10
      __int64 v74; // x9
      int v75; // w11
      unsigned __int8 *v76; // x9
      __int64 *v77; // x10
      __int64 v78; // x9
      int v79; // w11
      unsigned __int8 *v80; // x9
      unsigned __int8 *v81; // x10
      __int64 *v82; // x11
      __int64 v83; // x12
      int v84; // w13
      unsigned __int64 v85; // x9
      unsigned __int8 *v86; // x10
      __int64 *v87; // x11
      __int64 v88; // x12
      int v89; // w13
      unsigned __int64 v90; // x9
      int v91; // w13
      unsigned int v92; // w0
      unsigned int v93; // w23
      unsigned __int64 v94; // x14
      __int64 v95; // x22
      __int64 v96; // x8
      __int64 *v97; // x10
      __int64 v98; // x9
      int v99; // w11
      unsigned __int8 *v100; // x9
      size_t v101; // x8
      size_t v102; // x2
      __int64 v103; // x8
      char v104; // w9
      __int64 *v105; // x10
      __int64 v106; // x9
      int v107; // w11
      unsigned __int8 *v108; // x9
      __int64 *v109; // x9
      __int64 v110; // x10
      int v111; // w11
      unsigned __int8 *v112; // x10
      unsigned __int8 *v113; // x10
      __int64 *v114; // x11
      __int64 v115; // x12
      int v116; // w13
      unsigned __int64 v117; // x9
      unsigned __int8 *v118; // x10
      __int64 *v119; // x11
      __int64 v120; // x12
      int v121; // w13
      unsigned __int64 v122; // x9
      __int64 *v123; // x10
      __int64 v124; // x9
      int v125; // w11
      unsigned __int8 *v126; // x9
      __int64 *v127; // x10
      __int64 v128; // x9
      int v129; // w11
      unsigned __int8 *v130; // x9
      __int64 *v131; // x9
      __int64 v132; // x10
      int v133; // w11
      unsigned __int8 *v134; // x10
      int v135; // w4
      __int64 v136; // x13
      unsigned int v137; // w8
      __int64 v138; // x17
      unsigned __int64 v139; // x2
      __int64 v140; // x3
      __int64 v141; // x9
      unsigned int v142; // t1
      unsigned __int64 v143; // x10
      _WORD *v144; // x9
      __int64 *v145; // x10
      __int64 v146; // x9
      int v147; // w11
      unsigned __int8 *v148; // x9
      __int64 *v149; // x9
      __int64 v150; // x11
      int v151; // w10
      unsigned __int8 *v152; // x10
      unsigned int v153; // w8
      unsigned int v154; // w16
      __int64 v155; // x9
      unsigned int v156; // t1
      unsigned __int64 v157; // x10
      _WORD *v158; // x9
      int v159; // w1
      __int64 v160; // x5
      __int64 v161; // x8
      int v162; // w15
      unsigned int v163; // w0
      __int64 v164; // x5
      __int64 v165; // x8
      unsigned __int64 v166; // x22
      size_t v167; // x21
      int v168; // w8
      char v169; // w10
      __int64 v170; // x9
      __int64 v171; // x10
      char *v172; // x1
      size_t v173; // x9
      unsigned __int64 v174; // x13
      unsigned int v175; // w22
      __int64 v176; // x10
      int v177; // w11
      __int64 *v178; // x10
      __int64 v179; // x9
      int v180; // w11
      unsigned __int8 *v181; // x9
      __int64 *v182; // x10
      __int64 v183; // x9
      int v184; // w11
      unsigned __int8 *v185; // x9
      unsigned __int8 *v186; // x10
      __int64 *v187; // x11
      __int64 v188; // x12
      int v189; // w13
      unsigned __int64 v190; // x9
      size_t v191; // x8
      size_t v192; // x2
      int v193; // w12
      unsigned int v194; // w13
      __int64 v195; // x8
      unsigned int v196; // t1
      __int64 v197; // x8
      unsigned __int64 v198; // x8
      int j; // w9
      __int64 v200; // x10
      __int64 *v201; // x9
      __int64 v202; // x10
      int v203; // w11
      unsigned __int8 *v204; // x10
      unsigned __int8 *v205; // x10
      __int64 *v206; // x11
      __int64 v207; // x12
      int v208; // w13
      unsigned __int64 v209; // x9
      unsigned int v210; // w8
      int v211; // w13
      int v212; // w9
      unsigned int v213; // w11
      unsigned int v214; // w16
      __int64 v215; // x8
      unsigned int v216; // w8
      unsigned int v217; // w12
      __int64 v218; // x9
      __int64 *v219; // x10
      __int64 v220; // x9
      int v221; // w11
      unsigned __int8 *v222; // x9
      unsigned int v223; // w8
      __int64 v224; // x9
      __int64 *v225; // x9
      __int64 v226; // x11
      int v227; // w10
      unsigned __int8 *v228; // x10
      int v229; // w15
      unsigned int v230; // w23
      __int64 v231; // x0
      __int64 v232; // x8
      __int64 *v233; // x9
      __int64 v234; // x10
      int v235; // w11
      unsigned __int8 *v236; // x10
      char v237; // w10
      __int64 v238; // x9
      __int64 v239; // x10
      char *v240; // x1
      size_t v241; // x9
      __int64 v242; // x12
      __int64 v243; // x28
      __int64 *v244; // x9
      __int64 v245; // x10
      int v246; // w11
      unsigned __int8 *v247; // x10
      unsigned __int8 *v248; // x11
      char v249; // w10
      __int64 v250; // x9
      __int64 v251; // x10
      char *v252; // x1
      size_t v253; // x9
      unsigned __int64 v254; // x22
      size_t v255; // x21
      __int64 *v257; // x10
      __int64 v258; // x9
      int v259; // w11
      unsigned __int8 *v260; // x9
      unsigned __int8 *v261; // x9
      __int64 *v262; // x10
      __int64 v263; // x13
      int v264; // w12
      unsigned __int8 *v265; // x11
      unsigned int v266; // w8
      unsigned int v267; // w13
      unsigned __int64 v268; // x9
      int v269; // w10
      __int64 v270; // x11
      int v271; // w9
      __int64 v272; // x12
      unsigned int v273; // w8
      int v274; // w13
      __int64 v275; // x0
      unsigned int v276; // w15
      unsigned int v277; // w1
      unsigned int v278; // w17
      int v279; // w9
      __int64 *v280; // x10
      __int64 v281; // x9
      int v282; // w11
      unsigned __int8 *v283; // x9
      unsigned __int64 v284; // x9
      int v285; // w10
      __int64 v286; // x11
      unsigned __int64 v287; // x27
      unsigned __int8 *v288; // x23
      unsigned __int64 *v289; // x8
      __int64 v290; // x9
      unsigned __int64 v291; // x10
      __int64 v292; // x9
      unsigned __int64 v293; // x9
      __int64 v294; // x8
      int v295; // w15
      __int64 v296; // x0
      __int64 v297; // x8
      __int64 *v298; // x9
      __int64 v299; // x10
      int v300; // w11
      unsigned __int8 *v301; // x10
      char v302; // w10
      __int64 v303; // x9
      __int64 v304; // x10
      char *v305; // x1
      size_t v306; // x9
      __int64 *v307; // x10
      __int64 v308; // x9
      int v309; // w11
      unsigned __int8 *v310; // x9
      unsigned __int64 v311; // x8
      int i; // w9
      __int64 v313; // x10
      int v314; // w15
      __int64 v315; // x22
      __int64 v316; // x8
      __int64 v317; // x8
      int v318; // w15
      __int64 v319; // x0
      __int64 v320; // x8
      __int64 *v321; // x10
      __int64 v322; // x9
      int v323; // w11
      unsigned __int8 *v324; // x9
      __int64 *v325; // x9
      __int64 v326; // x11
      int v327; // w10
      unsigned __int8 *v328; // x10
      unsigned __int64 v329; // x9
      int v330; // w10
      __int64 v331; // x11
      unsigned int v332; // w8
      unsigned int v333; // w9
      __int64 v334; // x10
      size_t v335; // x8
      size_t v336; // x2
      __int64 *v337; // x10
      __int64 v338; // x9
      int v339; // w11
      unsigned __int8 *v340; // x9
      __int64 *v341; // x10
      __int64 v342; // x9
      int v343; // w11
      unsigned __int8 *v344; // x9
      __int64 v345; // x15
      unsigned __int64 v346; // x16
      unsigned __int8 *v347; // x3
      int v348; // w17
      __int64 v349; // x14
      unsigned __int64 v350; // x14
      unsigned int v351; // t1
      __int64 v352; // x25
      int v353; // w14
      unsigned __int8 *v354; // x28
      int v355; // w26
      int v356; // w0
      __int64 v357; // x8
      unsigned int v358; // w8
      __int64 v359; // x9
      unsigned __int64 v360; // x22
      int v361; // w23
      __int64 v362; // x8
      int v363; // w27
      __int64 v364; // x9
      unsigned __int64 v365; // x22
      size_t v366; // x21
      size_t v367; // x8
      size_t v368; // x2
      unsigned __int64 v369; // x8
      int v370; // w9
      __int64 v371; // x10
      size_t v372; // x8
      size_t v373; // x2
      unsigned __int64 v374; // x8
      int v375; // w9
      __int64 v376; // x10
      size_t v377; // x8
      size_t v378; // x2
      __int64 v379; // x8
      unsigned __int64 v380; // x10
      unsigned __int64 v381; // x8
      int k; // w9
      __int64 v383; // x11
      __int64 v384; // x8
      unsigned __int64 v385; // x22
      size_t v386; // x21
      unsigned __int64 v387; // x22
      size_t v388; // x21
      unsigned __int64 v389; // x22
      size_t v390; // x21
      unsigned int v391; // t1
      unsigned int v392; // w12
      unsigned int v394; // w22
      unsigned int v395; // w23
      int v396; // w26
      unsigned __int64 v397; // x28
      __int64 v398; // x27
      unsigned int v399; // w8
      int v400; // w10
      unsigned __int16 *v401; // x8
      int v402; // w0
      unsigned int v403; // t1
      char v404; // w11
      unsigned __int64 v405; // x9
      int v406; // w8
      unsigned int v407; // t1
      unsigned int v408; // t1
      __int64 v409; // x28
      __int64 v410; // x27
      __int64 v411; // x25
      unsigned int v412; // t1
      int v413; // w9
      unsigned int v414; // t1
      char v415; // w9
      int v416; // w8
      __int64 v417; // x8
      unsigned int v418; // t1
      char v419; // w9
      unsigned int v420; // w8
      int v421; // w20
      unsigned int v422; // t1
      char v423; // w11
      unsigned int v424; // t1
      unsigned __int64 v425; // x11
      unsigned int v426; // t1
      char v427; // w12
      int v428; // w11
      __int64 v429; // x9
      int v430; // w8
      unsigned int v431; // t1
      char v432; // w11
      __int64 v433; // x26
      unsigned int v434; // w24
      int v435; // w25
      unsigned __int64 v436; // x21
      int v437; // w9
      __int64 v438; // x9
      __int64 v439; // x10
      char v440; // w8
      unsigned __int64 v441; // x9
      unsigned int v442; // t1
      _WORD *v443; // x8
      __int64 v444; // x12
      int v445; // w9
      unsigned int v446; // w15
      int v447; // w10
      __int64 v448; // x16
      _WORD *v449; // x9
      unsigned __int64 v450; // x9
      unsigned int v451; // t1
      __int64 v452; // x11
      unsigned int v453; // t1
      unsigned int v454; // w10
      __int64 v455; // x17
      unsigned int v456; // w22
      unsigned int v457; // w8
      __int64 v458; // x24
      int v459; // w21
      int v460; // w27
      unsigned __int64 v461; // x23
      unsigned __int8 *v462; // x28
      unsigned int v463; // w8
      __int64 v464; // x25
      char *v465; // x25
      __int64 v466; // x9
      unsigned int v467; // w26
      __int64 v468; // x20
      __int64 v469; // x26
      __int64 v470; // x23
      __int64 v471; // x27
      int v472; // w8
      int v473; // w9
      int v474; // w21
      int v475; // w9
      __int64 v476; // x11
      __int64 v477; // x10
      __int64 v478; // x11
      unsigned int v479; // t1
      unsigned int v480; // w10
      __int64 v481; // x17
      unsigned int v482; // w8
      __int64 v483; // x24
      int v484; // w21
      int v485; // w27
      unsigned __int64 v486; // x23
      unsigned __int8 *v487; // x28
      unsigned int v488; // w8
      __int64 v489; // x25
      char *v490; // x25
      __int64 v491; // x9
      unsigned int v492; // w26
      __int64 v493; // x20
      __int64 v494; // x26
      __int64 v495; // x23
      __int64 v496; // x27
      int v497; // w8
      int v498; // w9
      __int64 v499; // x11
      __int64 v500; // x10
      int v501; // w10
      unsigned int v502; // w11
      __int64 v503; // x8
      int v504; // w11
      unsigned int v505; // w10
      __int64 v506; // x8
      unsigned __int64 v507; // x10
      unsigned int v508; // t1
      __int64 v509; // x11
      unsigned int v510; // t1
      unsigned int v511; // w10
      unsigned int v512; // w8
      __int64 v513; // x23
      int v514; // w21
      int v515; // w20
      unsigned __int64 v516; // x22
      unsigned int v517; // w27
      unsigned __int64 v518; // x25
      unsigned int v519; // w8
      __int64 v520; // x24
      unsigned __int8 *v521; // x28
      __int64 v522; // x9
      unsigned int v523; // w24
      __int64 v524; // x26
      __int64 v525; // x24
      int v526; // w8
      int v527; // w9
      __int64 v528; // x11
      __int64 v529; // x10
      int v530; // w11
      __int64 v531; // x10
      unsigned int v532; // t1
      int v533; // w11
      unsigned int v534; // t1
      char v535; // w12
      __int64 v536; // x11
      unsigned int v537; // t1
      unsigned int v538; // w10
      __int64 v539; // x16
      unsigned int v540; // w8
      __int64 v541; // x23
      int v542; // w21
      int v543; // w20
      unsigned __int64 v544; // x27
      unsigned __int8 *v545; // x28
      unsigned int v546; // w8
      __int64 v547; // x9
      unsigned int v548; // w26
      int v549; // w8
      __int64 v550; // x12
      int v551; // w9
      __int64 v552; // x11
      __int64 v553; // x10
      int v554; // w11
      __int64 v555; // x10
      unsigned int v556; // t1
      int v557; // w11
      _WORD *v558; // x8
      unsigned int v559; // t1
      char v560; // w12
      int v561; // w10
      _WORD *v562; // x10
      unsigned __int64 v563; // x9
      unsigned int v564; // t1
      int v565; // w12
      unsigned int v566; // w11
      unsigned __int64 v567; // x11
      unsigned int v568; // t1
      __int64 v569; // x11
      unsigned int v570; // t1
      unsigned int v571; // w10
      unsigned int v572; // w8
      __int64 v573; // x23
      int v574; // w21
      int v575; // w22
      unsigned __int64 v576; // x20
      __int64 v577; // x27
      unsigned __int64 v578; // x25
      unsigned int v579; // w8
      __int64 v580; // x24
      unsigned __int8 *v581; // x28
      __int64 v582; // x9
      unsigned int v583; // w24
      __int64 v584; // x26
      __int64 v585; // x24
      int v586; // w8
      int v587; // w9
      int v588; // w9
      __int64 v589; // x11
      __int64 v590; // x10
      __int64 v591; // x8
      __int64 v592; // x11
      unsigned int v593; // t1
      unsigned int v594; // w10
      unsigned int v595; // w8
      __int64 v596; // x24
      int v597; // w21
      int v598; // w20
      unsigned __int64 v599; // x27
      unsigned __int8 *v600; // x28
      unsigned int v601; // w8
      __int64 v602; // x9
      unsigned int v603; // w26
      int v604; // w8
      int v605; // w9
      __int64 v606; // x11
      __int64 v607; // x10
      int v608; // w11
      __int64 v609; // x10
      unsigned int v610; // t1
      int v611; // w11
      unsigned int v612; // t1
      char v613; // w12
      int v614; // w9
      unsigned int v615; // t1
      unsigned int v616; // w10
      int v617; // w9
      unsigned __int64 v618; // x8
      __int64 v619; // x9
      unsigned int v620; // t1
      __int64 v621; // x11
      unsigned int v622; // t1
      unsigned int v623; // w10
      __int64 v624; // x13
      unsigned int v625; // w8
      __int64 v626; // x21
      int v627; // w26
      int v628; // w25
      int v629; // w24
      unsigned __int64 v630; // x28
      int v631; // w22
      unsigned int v632; // w27
      unsigned int v633; // w8
      __int64 v634; // x23
      __int64 v635; // x9
      unsigned int v636; // w23
      __int64 v637; // x20
      __int64 v638; // x23
      int v639; // w8
      char *v640; // x1
      char *v641; // x0
      int v642; // w8
      char v643; // t1
      int v644; // w1
      int v645; // w8
      size_t v646; // x2
      int v647; // w9
      __int64 v648; // x11
      __int64 v649; // x10
      unsigned int v650; // t1
      unsigned __int8 *v651; // x0
      int v652; // w10
      int v653; // w21
      int v654; // w23
      unsigned __int64 v655; // x20
      int v656; // w22
      int v657; // w0
      unsigned int v658; // t1
      char v659; // w11
      unsigned int v660; // [xsp+0h] [xbp-A0h]
      unsigned int v661; // [xsp+0h] [xbp-A0h]
      unsigned int v662; // [xsp+4h] [xbp-9Ch]
      int v663; // [xsp+4h] [xbp-9Ch]
      __int64 v664; // [xsp+8h] [xbp-98h]
      __int64 v665; // [xsp+8h] [xbp-98h]
      unsigned __int64 v666; // [xsp+8h] [xbp-98h]
      unsigned int v667; // [xsp+8h] [xbp-98h]
      unsigned int v668; // [xsp+8h] [xbp-98h]
      __int64 v669; // [xsp+8h] [xbp-98h]
      unsigned __int64 v670; // [xsp+8h] [xbp-98h]
      unsigned __int64 v671; // [xsp+8h] [xbp-98h]
      int v672; // [xsp+10h] [xbp-90h]
      char *v673; // [xsp+10h] [xbp-90h]
      char *v674; // [xsp+10h] [xbp-90h]
      char *v675; // [xsp+10h] [xbp-90h]
      char *v676; // [xsp+10h] [xbp-90h]
      char *v677; // [xsp+10h] [xbp-90h]
      unsigned __int8 *v678; // [xsp+18h] [xbp-88h]
      int v679; // [xsp+18h] [xbp-88h]
      unsigned __int8 *v680; // [xsp+18h] [xbp-88h]
      int v681; // [xsp+18h] [xbp-88h]
      unsigned __int8 *v682; // [xsp+18h] [xbp-88h]
      __int64 v683; // [xsp+20h] [xbp-80h]
      int v684; // [xsp+20h] [xbp-80h]
      __int64 v685; // [xsp+20h] [xbp-80h]
      __int64 v686; // [xsp+20h] [xbp-80h]
      __int64 v687; // [xsp+20h] [xbp-80h]
      int v688; // [xsp+20h] [xbp-80h]
      __int64 v689; // [xsp+20h] [xbp-80h]
      __int64 v690; // [xsp+28h] [xbp-78h]
      __int64 v691; // [xsp+28h] [xbp-78h]
      __int64 v692; // [xsp+28h] [xbp-78h]
      __int64 v693; // [xsp+28h] [xbp-78h]
      __int64 v694; // [xsp+28h] [xbp-78h]
      __int64 v695; // [xsp+28h] [xbp-78h]
      unsigned int v696; // [xsp+34h] [xbp-6Ch]
      int v697; // [xsp+34h] [xbp-6Ch]
      unsigned int v698; // [xsp+38h] [xbp-68h]
      int v699; // [xsp+38h] [xbp-68h]
      unsigned int v700; // [xsp+38h] [xbp-68h]
      unsigned int v701; // [xsp+38h] [xbp-68h]
      int v702; // [xsp+3Ch] [xbp-64h]
      int v703; // [xsp+40h] [xbp-60h]
      unsigned __int64 v704; // [xsp+40h] [xbp-60h]
      unsigned int v705; // [xsp+40h] [xbp-60h]
      unsigned int v706; // [xsp+40h] [xbp-60h]
      unsigned int v707; // [xsp+40h] [xbp-60h]
      int v708; // [xsp+40h] [xbp-60h]
      int v709; // [xsp+40h] [xbp-60h]
      unsigned __int64 v710; // [xsp+48h] [xbp-58h]
      int v711; // [xsp+48h] [xbp-58h]
      int v712; // [xsp+48h] [xbp-58h]
      int v713; // [xsp+48h] [xbp-58h]
      int v714; // [xsp+48h] [xbp-58h]
      int v715; // [xsp+48h] [xbp-58h]
      int v716; // [xsp+48h] [xbp-58h]
    
      v2 = a1 + 16;
      v4 = *(char **)(a1 + 232);
      v3 = *(unsigned __int64 **)(a1 + 240);
      v5 = *v3;
      v6 = *(_DWORD *)a1;
      if ( *(int *)a1 > 1053 )
      {
        if ( v6 > 1109 )
        {
          if ( v6 == 1110 || v6 == 1116 )
          {
            **(_QWORD **)(a1 + 224) = 0;
            *v3 = 0;
            v25 = 1116;
    LABEL_26:
            *(_DWORD *)a1 = v25;
          }
        }
        else
        {
          if ( v6 > 1073 )
          {
            switch ( v6 )
            {
              case 1074:
                v15 = *(unsigned __int8 **)(a1 + 216);
                v30 = *(_BYTE *)(a1 + 248);
                v31 = **(_QWORD **)(a1 + 224);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_BYTE *)(a1 + 48) = v30;
                v32 = *(_QWORD *)(a1 + 1560);
                *(_QWORD *)(a1 + 40) = v31;
                *(_QWORD *)(a1 + 32) = &v15[v31];
                v33 = (char *)(*(_QWORD *)(a1 + 1544) + v32);
                *(_QWORD *)(a1 + 1544) = v33;
                v34 = *(_QWORD *)(a1 + 1552) - v32;
                *(_QWORD *)(a1 + 1552) = v34;
                if ( !v34 )
                {
                  LODWORD(v35) = *(_DWORD *)(a1 + 1512);
                  LODWORD(v36) = *(_DWORD *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  LODWORD(v37) = *(_DWORD *)(a1 + 1528);
                  LODWORD(v710) = *(_DWORD *)(a1 + 1488);
                  LODWORD(v38) = *(_DWORD *)(a1 + 144);
                  v698 = *(_DWORD *)(a1 + 148);
                  v39 = *(_QWORD *)(a1 + 72);
                  LODWORD(v40) = *(_DWORD *)(a1 + 80);
                  v41 = *(_DWORD *)(a1 + 312);
                  goto LABEL_611;
                }
                v191 = *v3;
                if ( v34 >= v191 )
                  v192 = v191;
                else
                  v192 = v34;
                *(_QWORD *)(a1 + 1560) = v192;
                if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
                {
                  if ( v192 )
                  {
                    v254 = 0;
                    while ( 1 )
                    {
                      v255 = v192 - v254 >= 0x2000 ? 0x2000LL : v192 - v254;
                      memcpy(&v4[v254], &v33[v254], v255);
                      *(_DWORD *)(a1 + 208) = lzham::adler32(
                                                (unsigned __int8 *)(*(_QWORD *)(a1 + 1544) + v254),
                                                v255,
                                                *(_DWORD *)(a1 + 208));
                      v254 += v255;
                      v192 = *(_QWORD *)(a1 + 1560);
                      if ( v192 <= v254 )
                        break;
                      v4 = *(char **)(a1 + 232);
                      v33 = *(char **)(a1 + 1544);
                    }
                  }
                }
                else
                {
                  memcpy(v4, v33, v192);
                }
                **(_QWORD **)(a1 + 224) = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
                **(_QWORD **)(a1 + 240) = *(_QWORD *)(a1 + 1560);
                v168 = 1074;
                goto LABEL_261;
              case 1080:
                v15 = *(unsigned __int8 **)(a1 + 216);
                v123 = *(__int64 **)(a1 + 224);
                v124 = *v123;
                v125 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v124;
                *(_QWORD *)(a1 + 32) = &v15[v124];
                *(_BYTE *)(a1 + 48) = v125;
                if ( !v125 && !v124 )
                {
                  v126 = v15;
                  goto LABEL_133;
                }
                LODWORD(v35) = *(_DWORD *)(a1 + 1512);
                LODWORD(v36) = *(_DWORD *)(a1 + 1516);
                v193 = *(_DWORD *)(a1 + 1520);
                v194 = *(_DWORD *)(a1 + 1524);
                LODWORD(v37) = *(_DWORD *)(a1 + 1528);
                LODWORD(v710) = *(_DWORD *)(a1 + 1488);
                LODWORD(v38) = *(_DWORD *)(a1 + 144);
                v698 = *(_DWORD *)(a1 + 148);
                v39 = *(_QWORD *)(a1 + 72);
                LODWORD(v40) = *(_DWORD *)(a1 + 80);
                if ( v124 >= 1 )
                  goto LABEL_200;
                v195 = 0;
                goto LABEL_201;
              case 1082:
                v15 = *(unsigned __int8 **)(a1 + 216);
                v127 = *(__int64 **)(a1 + 224);
                v128 = *v127;
                v129 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v128;
                *(_QWORD *)(a1 + 32) = &v15[v128];
                *(_BYTE *)(a1 + 48) = v129;
                if ( !v129 && !v128 )
                {
                  v130 = v15;
                  goto LABEL_137;
                }
                LODWORD(v35) = *(_DWORD *)(a1 + 1512);
                LODWORD(v36) = *(_DWORD *)(a1 + 1516);
                v193 = *(_DWORD *)(a1 + 1520);
                v194 = *(_DWORD *)(a1 + 1524);
                LODWORD(v37) = *(_DWORD *)(a1 + 1528);
                LODWORD(v710) = *(_DWORD *)(a1 + 1488);
                LODWORD(v38) = *(_DWORD *)(a1 + 144);
                v698 = *(_DWORD *)(a1 + 148);
                v39 = *(_QWORD *)(a1 + 72);
                LODWORD(v40) = *(_DWORD *)(a1 + 80);
                if ( v128 >= 1 )
                  goto LABEL_1039;
                v197 = 0;
                goto LABEL_1040;
              case 1083:
                v15 = *(unsigned __int8 **)(a1 + 216);
                v131 = *(__int64 **)(a1 + 224);
                v132 = *v131;
                v133 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v132;
                *(_QWORD *)(a1 + 32) = &v15[v132];
                *(_BYTE *)(a1 + 48) = v133;
                if ( !v133 && !v132 )
                {
                  v134 = v15;
                  goto LABEL_141;
                }
                LODWORD(v35) = *(_DWORD *)(a1 + 1512);
                LODWORD(v36) = *(_DWORD *)(a1 + 1516);
                v193 = *(_DWORD *)(a1 + 1520);
                v194 = *(_DWORD *)(a1 + 1524);
                LODWORD(v37) = *(_DWORD *)(a1 + 1528);
                LODWORD(v710) = *(_DWORD *)(a1 + 1488);
                LODWORD(v38) = *(_DWORD *)(a1 + 144);
                v698 = *(_DWORD *)(a1 + 148);
                v198 = *(_QWORD *)(a1 + 72);
                j = *(_DWORD *)(a1 + 80);
                if ( v132 >= 1 )
                  goto LABEL_1053;
                v200 = 0;
                break;
              default:
                return *(unsigned int *)(a1 + 312);
            }
            goto LABEL_1054;
          }
          if ( v6 == 1054 )
          {
            v15 = *(unsigned __int8 **)(a1 + 216);
            v14 = *(__int64 **)(a1 + 224);
            v16 = *v14;
            v17 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v15;
            *(_QWORD *)(a1 + 24) = v15;
            *(_QWORD *)(a1 + 40) = v16;
            *(_QWORD *)(a1 + 32) = &v15[v16];
            *(_BYTE *)(a1 + 48) = v17;
            if ( v17 || v16 )
            {
              v35 = *(unsigned int *)(a1 + 1512);
              v36 = *(unsigned int *)(a1 + 1516);
              v702 = *(_DWORD *)(a1 + 1520);
              v696 = *(_DWORD *)(a1 + 1524);
              v37 = *(unsigned int *)(a1 + 1528);
              v710 = *(unsigned int *)(a1 + 1488);
              v38 = *(unsigned int *)(a1 + 144);
              v698 = *(_DWORD *)(a1 + 148);
              v39 = *(_QWORD *)(a1 + 72);
              LODWORD(v40) = *(_DWORD *)(a1 + 80);
              if ( v16 < 1 )
              {
                v70 = 0;
                goto LABEL_72;
              }
              goto LABEL_71;
            }
            v18 = v15;
    LABEL_15:
            *v14 = v15 - v18;
            *v3 = 0;
            v19 = 1054;
            goto LABEL_447;
          }
        }
        return *(unsigned int *)(a1 + 312);
      }
      if ( v6 > 897 )
      {
        if ( v6 <= 975 )
        {
          if ( v6 > 906 )
          {
            if ( v6 > 944 )
            {
              if ( v6 == 945 )
              {
                v81 = *(unsigned __int8 **)(a1 + 216);
                v82 = *(__int64 **)(a1 + 224);
                v83 = *v82;
                v84 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v81;
                *(_QWORD *)(a1 + 24) = v81;
                *(_QWORD *)(a1 + 40) = v83;
                v85 = (unsigned __int64)&v81[v83];
                *(_QWORD *)(a1 + 32) = &v81[v83];
                *(_BYTE *)(a1 + 48) = v84;
                if ( v84 || v83 )
                {
                  v135 = *(_DWORD *)(a1 + 1580);
                  v92 = *(_DWORD *)(a1 + 1584);
                  v159 = *(_DWORD *)(a1 + 1588);
                  v684 = *(_DWORD *)(a1 + 1512);
                  LODWORD(v36) = *(_DWORD *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  v93 = *(_DWORD *)(a1 + 1528);
                  LODWORD(v94) = *(_DWORD *)(a1 + 1488);
                  LODWORD(v38) = *(_DWORD *)(a1 + 144);
                  v698 = *(_DWORD *)(a1 + 148);
                  v39 = *(_QWORD *)(a1 + 72);
                  LODWORD(v40) = *(_DWORD *)(a1 + 80);
                  v160 = *(_QWORD *)(a1 + 160);
                  v161 = *(_QWORD *)(v160 + 64);
                  goto LABEL_989;
                }
                v15 = v81;
    LABEL_1020:
                *v82 = v15 - v81;
                *v3 = 0;
                v19 = 945;
                goto LABEL_447;
              }
            }
            else if ( v6 > 928 )
            {
              if ( v6 == 929 )
              {
                v15 = *(unsigned __int8 **)(a1 + 216);
                v105 = *(__int64 **)(a1 + 224);
                v106 = *v105;
                v107 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v106;
                *(_QWORD *)(a1 + 32) = &v15[v106];
                *(_BYTE *)(a1 + 48) = v107;
                if ( v107 || v106 )
                {
                  v135 = *(_DWORD *)(a1 + 1580);
                  v92 = *(_DWORD *)(a1 + 1584);
                  v223 = *(_DWORD *)(a1 + 1592);
                  v211 = *(_DWORD *)(a1 + 1512);
                  LODWORD(v36) = *(_DWORD *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  v93 = *(_DWORD *)(a1 + 1528);
                  LODWORD(v94) = *(_DWORD *)(a1 + 1488);
                  LODWORD(v38) = *(_DWORD *)(a1 + 144);
                  v698 = *(_DWORD *)(a1 + 148);
                  v39 = *(_QWORD *)(a1 + 72);
                  LODWORD(v40) = *(_DWORD *)(a1 + 80);
                  if ( v106 < 1 )
                  {
                    v224 = 0;
                    goto LABEL_969;
                  }
                  goto LABEL_968;
                }
                v108 = v15;
    LABEL_114:
                *v105 = v15 - v108;
                *v3 = 0;
                v19 = 929;
                goto LABEL_447;
              }
              if ( v6 == 936 )
              {
                v15 = *(unsigned __int8 **)(a1 + 216);
                v178 = *(__int64 **)(a1 + 224);
                v179 = *v178;
                v180 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v179;
                *(_QWORD *)(a1 + 32) = &v15[v179];
                *(_BYTE *)(a1 + 48) = v180;
                if ( v180 || v179 )
                {
                  v135 = *(_DWORD *)(a1 + 1580);
                  v92 = *(_DWORD *)(a1 + 1584);
                  v223 = *(_DWORD *)(a1 + 1592);
                  v211 = *(_DWORD *)(a1 + 1512);
                  LODWORD(v36) = *(_DWORD *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  v93 = *(_DWORD *)(a1 + 1528);
                  LODWORD(v94) = *(_DWORD *)(a1 + 1488);
                  LODWORD(v38) = *(_DWORD *)(a1 + 144);
                  v698 = *(_DWORD *)(a1 + 148);
                  v39 = *(_QWORD *)(a1 + 72);
                  LODWORD(v40) = *(_DWORD *)(a1 + 80);
                  if ( v179 < 1 )
                    goto LABEL_984;
                  goto LABEL_981;
                }
                v181 = v15;
    LABEL_184:
                *v178 = v15 - v181;
                *v3 = 0;
                v19 = 936;
                goto LABEL_447;
              }
            }
            else
            {
              if ( v6 == 907 )
              {
                v15 = *(unsigned __int8 **)(a1 + 216);
                v62 = *(__int64 **)(a1 + 224);
                v63 = *v62;
                v64 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v63;
                *(_QWORD *)(a1 + 32) = &v15[v63];
                *(_BYTE *)(a1 + 48) = v64;
                if ( v64 || v63 )
                {
                  v210 = *(_DWORD *)(a1 + 1580);
                  v92 = *(_DWORD *)(a1 + 1584);
                  v211 = *(_DWORD *)(a1 + 1512);
                  LODWORD(v36) = *(_DWORD *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  v93 = *(_DWORD *)(a1 + 1528);
                  LODWORD(v94) = *(_DWORD *)(a1 + 1488);
                  LODWORD(v38) = *(_DWORD *)(a1 + 144);
                  v698 = *(_DWORD *)(a1 + 148);
                  v39 = *(_QWORD *)(a1 + 72);
                  v212 = *(_DWORD *)(a1 + 80);
                  if ( v63 < 1 )
                    goto LABEL_949;
                  goto LABEL_946;
                }
                v65 = v15;
    LABEL_61:
                *v62 = v15 - v65;
                *v3 = 0;
                v19 = 907;
                goto LABEL_447;
              }
              if ( v6 == 912 )
              {
                v15 = *(unsigned __int8 **)(a1 + 216);
                v149 = *(__int64 **)(a1 + 224);
                v150 = *v149;
                v151 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v150;
                *(_QWORD *)(a1 + 32) = &v15[v150];
                *(_BYTE *)(a1 + 48) = v151;
                if ( v151 || v150 )
                {
                  v210 = *(_DWORD *)(a1 + 1580);
                  v92 = *(_DWORD *)(a1 + 1584);
                  v211 = *(_DWORD *)(a1 + 1512);
                  LODWORD(v36) = *(_DWORD *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  v93 = *(_DWORD *)(a1 + 1528);
                  LODWORD(v94) = *(_DWORD *)(a1 + 1488);
                  LODWORD(v38) = *(_DWORD *)(a1 + 144);
                  v698 = *(_DWORD *)(a1 + 148);
                  v284 = *(_QWORD *)(a1 + 72);
                  v285 = *(_DWORD *)(a1 + 80);
                  if ( v150 < 1 )
                  {
                    v286 = 0;
                    goto LABEL_958;
                  }
                  goto LABEL_957;
                }
                v152 = v15;
    LABEL_158:
                *v149 = v15 - v152;
                *v3 = 0;
                v19 = 912;
                goto LABEL_447;
              }
            }
          }
          else if ( v6 == 898 )
          {
            v20 = *(unsigned __int8 **)(a1 + 216);
            v21 = *(__int64 **)(a1 + 224);
            v22 = *v21;
            v23 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v20;
            *(_QWORD *)(a1 + 24) = v20;
            *(_QWORD *)(a1 + 40) = v22;
            v24 = (unsigned __int64)&v20[v22];
            *(_QWORD *)(a1 + 32) = &v20[v22];
            *(_BYTE *)(a1 + 48) = v23;
            if ( v23 || v22 )
            {
              v91 = *(_DWORD *)(a1 + 1580);
              v92 = *(_DWORD *)(a1 + 1584);
              LODWORD(v683) = *(_DWORD *)(a1 + 1512);
              LODWORD(v36) = *(_DWORD *)(a1 + 1516);
              v702 = *(_DWORD *)(a1 + 1520);
              v696 = *(_DWORD *)(a1 + 1524);
              v93 = *(_DWORD *)(a1 + 1528);
              LODWORD(v94) = *(_DWORD *)(a1 + 1488);
              LODWORD(v38) = *(_DWORD *)(a1 + 144);
              v698 = *(_DWORD *)(a1 + 148);
              v39 = *(_QWORD *)(a1 + 72);
              LODWORD(v40) = *(_DWORD *)(a1 + 80);
              v95 = *(_QWORD *)(a1 + 160);
              v96 = *(_QWORD *)(v95 + 64);
              goto LABEL_917;
            }
            v15 = v20;
    LABEL_22:
            *v21 = v15 - v20;
            *v3 = 0;
            v19 = 898;
            goto LABEL_447;
          }
          return *(unsigned int *)(a1 + 312);
        }
        if ( v6 == 976 )
        {
    LABEL_1016:
          *(_DWORD *)a1 = 976;
          return 7;
        }
        if ( v6 != 1002 )
          return *(unsigned int *)(a1 + 312);
        v42 = *(unsigned __int8 **)(a1 + 216);
        v43 = *(_BYTE *)(a1 + 248);
        v44 = **(_QWORD **)(a1 + 224);
        *(_QWORD *)(a1 + 16) = v42;
        *(_QWORD *)(a1 + 24) = v42;
        *(_BYTE *)(a1 + 48) = v43;
        v45 = *(_QWORD *)(a1 + 1560);
        *(_QWORD *)(a1 + 40) = v44;
        *(_QWORD *)(a1 + 32) = &v42[v44];
        v46 = (char *)(*(_QWORD *)(a1 + 1544) + v45);
        *(_QWORD *)(a1 + 1544) = v46;
        v47 = *(_QWORD *)(a1 + 1552) - v45;
        *(_QWORD *)(a1 + 1552) = v47;
        if ( !v47 )
        {
          v678 = v42;
          v690 = a1 + 16;
          v48 = *(_DWORD *)(a1 + 1580);
          v49 = *(unsigned int *)(a1 + 1512);
          v703 = *(_DWORD *)(a1 + 1516);
          v702 = *(_DWORD *)(a1 + 1520);
          v696 = *(_DWORD *)(a1 + 1524);
          v50 = *(unsigned int *)(a1 + 1528);
          v51 = *(_DWORD *)(a1 + 148);
          v52 = *(_QWORD *)(a1 + 72);
          v53 = *(unsigned int *)(a1 + 80);
          v54 = (unsigned int)(v48 - 1);
          if ( v48 == 1 )
          {
            v662 = *(_DWORD *)(a1 + 144);
            v54 = 0;
          }
          else
          {
            v662 = *(_DWORD *)(a1 + 144);
            v55 = 0;
            v56 = *(char **)(a1 + 1600);
            do
            {
              v57 = *v56++;
              v4[v55] = v57;
              if ( v56 == &v4[v5] )
                v56 = v4;
              ++v55;
            }
            while ( (_DWORD)v54 != (_DWORD)v55 );
          }
          goto LABEL_631;
        }
        v101 = *v3;
        if ( v47 >= v101 )
          v102 = v101;
        else
          v102 = v47;
        *(_QWORD *)(a1 + 1560) = v102;
        if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
        {
          if ( v102 )
          {
            v166 = 0;
            while ( 1 )
            {
              v167 = v102 - v166 >= 0x2000 ? 0x2000LL : v102 - v166;
              memcpy(&v4[v166], &v46[v166], v167);
              *(_DWORD *)(a1 + 208) = lzham::adler32(
                                        (unsigned __int8 *)(*(_QWORD *)(a1 + 1544) + v166),
                                        v167,
                                        *(_DWORD *)(a1 + 208));
              v166 += v167;
              v102 = *(_QWORD *)(a1 + 1560);
              if ( v102 <= v166 )
                break;
              v4 = *(char **)(a1 + 232);
              v46 = *(char **)(a1 + 1544);
            }
          }
        }
        else
        {
          memcpy(v4, v46, v102);
        }
        **(_QWORD **)(a1 + 224) = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
        **(_QWORD **)(a1 + 240) = *(_QWORD *)(a1 + 1560);
        v168 = 1002;
        goto LABEL_261;
      }
      if ( v6 > 773 )
      {
        if ( v6 > 795 )
        {
          if ( v6 > 863 )
          {
            if ( v6 == 864 )
            {
              v86 = *(unsigned __int8 **)(a1 + 216);
              v87 = *(__int64 **)(a1 + 224);
              v88 = *v87;
              v89 = *(unsigned __int8 *)(a1 + 248);
              *(_QWORD *)(a1 + 16) = v86;
              *(_QWORD *)(a1 + 24) = v86;
              *(_QWORD *)(a1 + 40) = v88;
              v90 = (unsigned __int64)&v86[v88];
              *(_QWORD *)(a1 + 32) = &v86[v88];
              *(_BYTE *)(a1 + 48) = v89;
              if ( v89 || v88 )
              {
                v135 = *(_DWORD *)(a1 + 1580);
                v683 = *(unsigned int *)(a1 + 1512);
                v162 = *(_DWORD *)(a1 + 1516);
                v702 = *(_DWORD *)(a1 + 1520);
                v696 = *(_DWORD *)(a1 + 1524);
                v136 = *(unsigned int *)(a1 + 1528);
                v94 = *(unsigned int *)(a1 + 1488);
                v138 = *(unsigned int *)(a1 + 144);
                v163 = *(_DWORD *)(a1 + 148);
                v139 = *(_QWORD *)(a1 + 72);
                LODWORD(v140) = *(_DWORD *)(a1 + 80);
                v164 = *(_QWORD *)(a1 + 160);
                v165 = *(_QWORD *)(v164 + 64);
                goto LABEL_880;
              }
              v15 = v86;
              goto LABEL_899;
            }
          }
          else if ( v6 > 818 )
          {
            if ( v6 > 827 )
            {
              if ( v6 == 828 )
              {
                v15 = *(unsigned __int8 **)(a1 + 216);
                v182 = *(__int64 **)(a1 + 224);
                v183 = *v182;
                v184 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v183;
                *(_QWORD *)(a1 + 32) = &v15[v183];
                *(_BYTE *)(a1 + 48) = v184;
                if ( v184 || v183 )
                {
                  v135 = *(_DWORD *)(a1 + 1580);
                  v274 = *(_DWORD *)(a1 + 1512);
                  v275 = *(unsigned int *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  v276 = *(_DWORD *)(a1 + 1528);
                  LODWORD(v94) = *(_DWORD *)(a1 + 1488);
                  v278 = *(_DWORD *)(a1 + 144);
                  v277 = *(_DWORD *)(a1 + 148);
                  v139 = *(_QWORD *)(a1 + 72);
                  LODWORD(v140) = *(_DWORD *)(a1 + 80);
                  if ( v183 < 1 )
                  {
                    v294 = 0;
                    goto LABEL_850;
                  }
                  goto LABEL_849;
                }
                v185 = v15;
    LABEL_189:
                *v182 = v15 - v185;
                *v3 = 0;
                v19 = 828;
                goto LABEL_447;
              }
              if ( v6 == 837 )
              {
                v15 = *(unsigned __int8 **)(a1 + 216);
                v244 = *(__int64 **)(a1 + 224);
                v245 = *v244;
                v246 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v245;
                *(_QWORD *)(a1 + 32) = &v15[v245];
                *(_BYTE *)(a1 + 48) = v246;
                if ( v246 || v245 )
                {
                  v135 = *(_DWORD *)(a1 + 1580);
                  v274 = *(_DWORD *)(a1 + 1512);
                  v702 = *(_DWORD *)(a1 + 1516);
                  v332 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  v276 = *(_DWORD *)(a1 + 1528);
                  LODWORD(v94) = *(_DWORD *)(a1 + 1488);
                  v278 = *(_DWORD *)(a1 + 144);
                  v333 = *(_DWORD *)(a1 + 148);
                  v139 = *(_QWORD *)(a1 + 72);
                  LODWORD(v140) = *(_DWORD *)(a1 + 80);
                  if ( v245 < 1 )
                  {
                    v334 = 0;
                    goto LABEL_873;
                  }
                  goto LABEL_872;
                }
                v247 = v15;
    LABEL_249:
                *v244 = v15 - v247;
                *v3 = 0;
                v19 = 837;
                goto LABEL_447;
              }
            }
            else
            {
              if ( v6 == 819 )
              {
                v15 = *(unsigned __int8 **)(a1 + 216);
                v109 = *(__int64 **)(a1 + 224);
                v110 = *v109;
                v111 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v110;
                *(_QWORD *)(a1 + 32) = &v15[v110];
                *(_BYTE *)(a1 + 48) = v111;
                if ( v111 || v110 )
                {
                  v272 = a1 + 16;
                  v273 = *(_DWORD *)(a1 + 1580);
                  v274 = *(_DWORD *)(a1 + 1512);
                  v275 = *(unsigned int *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  v276 = *(_DWORD *)(a1 + 1528);
                  LODWORD(v94) = *(_DWORD *)(a1 + 1488);
                  v278 = *(_DWORD *)(a1 + 144);
                  v277 = *(_DWORD *)(a1 + 148);
                  v139 = *(_QWORD *)(a1 + 72);
                  v279 = *(_DWORD *)(a1 + 80);
                  if ( v110 < 1 )
                    goto LABEL_830;
                  goto LABEL_826;
                }
                v112 = v15;
    LABEL_829:
                *v109 = v15 - v112;
                *v3 = 0;
                v19 = 819;
                goto LABEL_447;
              }
              if ( v6 == 824 )
              {
                v15 = *(unsigned __int8 **)(a1 + 216);
                v225 = *(__int64 **)(a1 + 224);
                v226 = *v225;
                v227 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v226;
                *(_QWORD *)(a1 + 32) = &v15[v226];
                *(_BYTE *)(a1 + 48) = v227;
                if ( v227 || v226 )
                {
                  v273 = *(_DWORD *)(a1 + 1580);
                  v274 = *(_DWORD *)(a1 + 1512);
                  v275 = *(unsigned int *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  v276 = *(_DWORD *)(a1 + 1528);
                  LODWORD(v94) = *(_DWORD *)(a1 + 1488);
                  v278 = *(_DWORD *)(a1 + 144);
                  v277 = *(_DWORD *)(a1 + 148);
                  v329 = *(_QWORD *)(a1 + 72);
                  v330 = *(_DWORD *)(a1 + 80);
                  if ( v226 < 1 )
                  {
                    v331 = 0;
                    goto LABEL_837;
                  }
                  goto LABEL_836;
                }
                v228 = v15;
    LABEL_232:
                *v225 = v15 - v228;
                *v3 = 0;
                v19 = 824;
                goto LABEL_447;
              }
            }
          }
          else
          {
            switch ( v6 )
            {
              case 796:
                v15 = *(unsigned __int8 **)(a1 + 216);
                v201 = *(__int64 **)(a1 + 224);
                v202 = *v201;
                v203 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v202;
                *(_QWORD *)(a1 + 32) = &v15[v202];
                *(_BYTE *)(a1 + 48) = v203;
                if ( v203 || v202 )
                {
                  v266 = *(_DWORD *)(a1 + 1580);
                  v49 = *(unsigned int *)(a1 + 1512);
                  v703 = *(_DWORD *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  v267 = *(_DWORD *)(a1 + 1528);
                  LODWORD(v94) = *(_DWORD *)(a1 + 1488);
                  LODWORD(v38) = *(_DWORD *)(a1 + 144);
                  v51 = *(_DWORD *)(a1 + 148);
                  v139 = *(_QWORD *)(a1 + 72);
                  v271 = *(_DWORD *)(a1 + 80);
                  if ( v202 < 1 )
                    goto LABEL_780;
                  goto LABEL_777;
                }
                v204 = v15;
    LABEL_209:
                *v201 = v15 - v204;
                *v3 = 0;
                v19 = 796;
                goto LABEL_447;
              case 801:
                v15 = *(unsigned __int8 **)(a1 + 216);
                v66 = *(__int64 **)(a1 + 224);
                v67 = *v66;
                v68 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v67;
                *(_QWORD *)(a1 + 32) = &v15[v67];
                *(_BYTE *)(a1 + 48) = v68;
                if ( v68 || v67 )
                {
                  v266 = *(_DWORD *)(a1 + 1580);
                  v49 = *(unsigned int *)(a1 + 1512);
                  v703 = *(_DWORD *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  v267 = *(_DWORD *)(a1 + 1528);
                  LODWORD(v94) = *(_DWORD *)(a1 + 1488);
                  LODWORD(v38) = *(_DWORD *)(a1 + 144);
                  v51 = *(_DWORD *)(a1 + 148);
                  v268 = *(_QWORD *)(a1 + 72);
                  v269 = *(_DWORD *)(a1 + 80);
                  if ( v67 < 1 )
                  {
                    v270 = 0;
                    goto LABEL_789;
                  }
                  goto LABEL_788;
                }
                v69 = v15;
    LABEL_69:
                *v66 = v15 - v69;
                *v3 = 0;
                v19 = 801;
                goto LABEL_447;
              case 810:
                v205 = *(unsigned __int8 **)(a1 + 216);
                v206 = *(__int64 **)(a1 + 224);
                v207 = *v206;
                v208 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v205;
                *(_QWORD *)(a1 + 24) = v205;
                *(_QWORD *)(a1 + 40) = v207;
                v209 = (unsigned __int64)&v205[v207];
                *(_QWORD *)(a1 + 32) = &v205[v207];
                *(_BYTE *)(a1 + 48) = v208;
                if ( v208 || v207 )
                {
                  v135 = *(_DWORD *)(a1 + 1580);
                  v688 = *(_DWORD *)(a1 + 1512);
                  v314 = *(_DWORD *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  LODWORD(v136) = *(_DWORD *)(a1 + 1528);
                  LODWORD(v94) = *(_DWORD *)(a1 + 1488);
                  v700 = *(_DWORD *)(a1 + 144);
                  v679 = *(_DWORD *)(a1 + 148);
                  v139 = *(_QWORD *)(a1 + 72);
                  LODWORD(v140) = *(_DWORD *)(a1 + 80);
                  v315 = *(_QWORD *)(a1 + 160);
                  v316 = *(_QWORD *)(v315 + 64);
                  goto LABEL_796;
                }
                v15 = v205;
    LABEL_814:
                *v206 = v15 - v205;
                *v3 = 0;
                v19 = 810;
                goto LABEL_447;
            }
          }
        }
        else if ( v6 > 779 )
        {
          if ( v6 == 780 )
          {
            v15 = *(unsigned __int8 **)(a1 + 216);
            v73 = *(__int64 **)(a1 + 224);
            v74 = *v73;
            v75 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v15;
            *(_QWORD *)(a1 + 24) = v15;
            *(_QWORD *)(a1 + 40) = v74;
            *(_QWORD *)(a1 + 32) = &v15[v74];
            *(_BYTE *)(a1 + 48) = v75;
            if ( v75 || v74 )
            {
              v135 = *(_DWORD *)(a1 + 1580);
              v49 = *(unsigned int *)(a1 + 1512);
              v703 = *(_DWORD *)(a1 + 1516);
              v702 = *(_DWORD *)(a1 + 1520);
              v696 = *(_DWORD *)(a1 + 1524);
              LODWORD(v136) = *(_DWORD *)(a1 + 1528);
              LODWORD(v94) = *(_DWORD *)(a1 + 1488);
              v154 = *(_DWORD *)(a1 + 144);
              v153 = *(_DWORD *)(a1 + 148);
              v139 = *(_QWORD *)(a1 + 72);
              LODWORD(v140) = *(_DWORD *)(a1 + 80);
              if ( v74 < 1 )
              {
                v155 = 0;
                goto LABEL_161;
              }
              goto LABEL_160;
            }
            v76 = v15;
    LABEL_79:
            *v73 = v15 - v76;
            *v3 = 0;
            v19 = 780;
            goto LABEL_447;
          }
          if ( v6 == 787 )
          {
            v113 = *(unsigned __int8 **)(a1 + 216);
            v114 = *(__int64 **)(a1 + 224);
            v115 = *v114;
            v116 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v113;
            *(_QWORD *)(a1 + 24) = v113;
            *(_QWORD *)(a1 + 40) = v115;
            v117 = (unsigned __int64)&v113[v115];
            *(_QWORD *)(a1 + 32) = &v113[v115];
            *(_BYTE *)(a1 + 48) = v116;
            if ( v116 || v115 )
            {
              v135 = *(_DWORD *)(a1 + 1580);
              v686 = *(unsigned int *)(a1 + 1512);
              v229 = *(_DWORD *)(a1 + 1516);
              v702 = *(_DWORD *)(a1 + 1520);
              v696 = *(_DWORD *)(a1 + 1524);
              LODWORD(v136) = *(_DWORD *)(a1 + 1528);
              LODWORD(v94) = *(_DWORD *)(a1 + 1488);
              v154 = *(_DWORD *)(a1 + 144);
              v230 = *(_DWORD *)(a1 + 148);
              v139 = *(_QWORD *)(a1 + 72);
              LODWORD(v140) = *(_DWORD *)(a1 + 80);
              v231 = *(_QWORD *)(a1 + 160);
              v232 = *(_QWORD *)(v231 + 64);
              goto LABEL_747;
            }
            v15 = v113;
    LABEL_765:
            *v114 = v15 - v113;
            *v3 = 0;
            v19 = 787;
            goto LABEL_447;
          }
        }
        else
        {
          if ( v6 == 774 )
          {
            v15 = *(unsigned __int8 **)(a1 + 216);
            v26 = *(__int64 **)(a1 + 224);
            v27 = *v26;
            v28 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v15;
            *(_QWORD *)(a1 + 24) = v15;
            *(_QWORD *)(a1 + 40) = v27;
            *(_QWORD *)(a1 + 32) = &v15[v27];
            *(_BYTE *)(a1 + 48) = v28;
            if ( v28 || v27 )
            {
              v135 = *(_DWORD *)(a1 + 1580);
              v49 = *(unsigned int *)(a1 + 1512);
              v703 = *(_DWORD *)(a1 + 1516);
              v702 = *(_DWORD *)(a1 + 1520);
              v696 = *(_DWORD *)(a1 + 1524);
              v136 = *(unsigned int *)(a1 + 1528);
              v94 = *(unsigned int *)(a1 + 1488);
              LODWORD(v138) = *(_DWORD *)(a1 + 144);
              v137 = *(_DWORD *)(a1 + 148);
              v139 = *(_QWORD *)(a1 + 72);
              LODWORD(v140) = *(_DWORD *)(a1 + 80);
              if ( v27 < 1 )
              {
                v141 = 0;
                goto LABEL_144;
              }
              goto LABEL_143;
            }
            v29 = v15;
    LABEL_33:
            *v26 = v15 - v29;
            *v3 = 0;
            v19 = 774;
            goto LABEL_447;
          }
          if ( v6 == 777 )
          {
            v15 = *(unsigned __int8 **)(a1 + 216);
            v97 = *(__int64 **)(a1 + 224);
            v98 = *v97;
            v99 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v15;
            *(_QWORD *)(a1 + 24) = v15;
            *(_QWORD *)(a1 + 40) = v98;
            *(_QWORD *)(a1 + 32) = &v15[v98];
            *(_BYTE *)(a1 + 48) = v99;
            if ( v99 || v98 )
            {
              v135 = *(_DWORD *)(a1 + 1580);
              v49 = *(unsigned int *)(a1 + 1512);
              v703 = *(_DWORD *)(a1 + 1516);
              v702 = *(_DWORD *)(a1 + 1520);
              v696 = *(_DWORD *)(a1 + 1524);
              LODWORD(v136) = *(_DWORD *)(a1 + 1528);
              LODWORD(v94) = *(_DWORD *)(a1 + 1488);
              v217 = *(_DWORD *)(a1 + 144);
              v216 = *(_DWORD *)(a1 + 148);
              v139 = *(_QWORD *)(a1 + 72);
              LODWORD(v140) = *(_DWORD *)(a1 + 80);
              if ( v98 < 1 )
              {
                v218 = 0;
                goto LABEL_740;
              }
              goto LABEL_739;
            }
            v100 = v15;
    LABEL_99:
            *v97 = v15 - v100;
            *v3 = 0;
            v19 = 777;
            goto LABEL_447;
          }
        }
        return *(unsigned int *)(a1 + 312);
      }
      if ( v6 > 368 )
      {
        if ( v6 <= 681 )
        {
          if ( v6 <= 495 )
          {
            if ( v6 <= 430 )
            {
              switch ( v6 )
              {
                case 369:
                  v13 = *(unsigned __int8 **)(a1 + 216);
                  v257 = *(__int64 **)(a1 + 224);
                  v258 = *v257;
                  v259 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v13;
                  *(_QWORD *)(a1 + 24) = v13;
                  *(_QWORD *)(a1 + 40) = v258;
                  *(_QWORD *)(a1 + 32) = &v13[v258];
                  *(_BYTE *)(a1 + 48) = v259;
                  if ( v259 || v258 )
                  {
                    v9 = *(unsigned int *)(a1 + 1512);
                    v8 = *(_DWORD *)(a1 + 1516);
                    v702 = *(_DWORD *)(a1 + 1520);
                    v696 = *(_DWORD *)(a1 + 1524);
                    v7 = *(unsigned int *)(a1 + 1528);
                    v710 = *(unsigned int *)(a1 + 1488);
                    v10 = *(unsigned int *)(a1 + 144);
                    v698 = *(_DWORD *)(a1 + 148);
                    v11 = *(_QWORD *)(a1 + 72);
                    v12 = *(_DWORD *)(a1 + 80);
                    if ( v258 < 1 )
                    {
                      v317 = 0;
                      goto LABEL_443;
                    }
                    goto LABEL_442;
                  }
                  v260 = v13;
    LABEL_265:
                  *v257 = v13 - v260;
                  *v3 = 0;
                  v19 = 369;
                  goto LABEL_447;
                case 370:
                  v13 = *(unsigned __int8 **)(a1 + 216);
                  v58 = *(__int64 **)(a1 + 224);
                  v59 = *v58;
                  v60 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v13;
                  *(_QWORD *)(a1 + 24) = v13;
                  *(_QWORD *)(a1 + 40) = v59;
                  *(_QWORD *)(a1 + 32) = &v13[v59];
                  *(_BYTE *)(a1 + 48) = v60;
                  if ( v60 || v59 )
                  {
                    v9 = *(unsigned int *)(a1 + 1512);
                    v8 = *(_DWORD *)(a1 + 1516);
                    v702 = *(_DWORD *)(a1 + 1520);
                    v696 = *(_DWORD *)(a1 + 1524);
                    v7 = *(unsigned int *)(a1 + 1528);
                    v710 = *(unsigned int *)(a1 + 1488);
                    v10 = *(unsigned int *)(a1 + 144);
                    v698 = *(_DWORD *)(a1 + 148);
                    v311 = *(_QWORD *)(a1 + 72);
                    i = *(_DWORD *)(a1 + 80);
                    if ( v59 < 1 )
                    {
                      v313 = 0;
                      goto LABEL_475;
                    }
                    goto LABEL_474;
                  }
                  v61 = v13;
    LABEL_54:
                  *v58 = v13 - v61;
                  *v3 = 0;
                  v19 = 370;
                  goto LABEL_447;
                case 381:
                  v261 = *(unsigned __int8 **)(a1 + 216);
                  v262 = *(__int64 **)(a1 + 224);
                  v263 = *v262;
                  v264 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v261;
                  *(_QWORD *)(a1 + 24) = v261;
                  *(_QWORD *)(a1 + 40) = v263;
                  v265 = &v261[v263];
                  *(_QWORD *)(a1 + 32) = &v261[v263];
                  *(_BYTE *)(a1 + 48) = v264;
                  if ( v264 || v263 )
                  {
                    v9 = *(unsigned int *)(a1 + 1512);
                    v8 = *(_DWORD *)(a1 + 1516);
                    v702 = *(_DWORD *)(a1 + 1520);
                    v696 = *(_DWORD *)(a1 + 1524);
                    v7 = *(unsigned int *)(a1 + 1528);
                    v710 = *(unsigned int *)(a1 + 1488);
                    v345 = *(unsigned int *)(a1 + 144);
                    v698 = *(_DWORD *)(a1 + 148);
                    v346 = *(_QWORD *)(a1 + 72);
                    v347 = v261;
                    v348 = *(_DWORD *)(a1 + 80);
                    do
                    {
                      if ( v347 >= v265 )
                      {
                        v349 = 0;
                        goto LABEL_357;
                      }
                      do
                      {
                        v351 = *v347++;
                        v349 = v351;
    LABEL_357:
                        v352 = v345;
                        v346 |= v349 << (56 - (unsigned __int8)v348);
                        v348 += 8;
                        while ( 1 )
                        {
                          v345 = v352;
                          if ( v348 <= 7 )
                            break;
                          v350 = HIBYTE(v346);
                          v346 <<= 8;
                          v348 -= 8;
                          *(_DWORD *)(a1 + 1648) = (unsigned __int8)v350 | (*(_DWORD *)(a1 + 1648) << 8);
                          LODWORD(v350) = *(_DWORD *)(a1 + 1652) + 1;
                          *(_DWORD *)(a1 + 1652) = v350;
                          if ( (unsigned int)v350 >= 4 )
                          {
                            v704 = v346;
                            v354 = v347;
                            v355 = v348;
                            v356 = lzham::adler32(*(unsigned __int8 **)(a1 + 296), *(unsigned int *)(a1 + 288), 1u);
                            v12 = v355;
                            v13 = v354;
                            v11 = v704;
                            v10 = v352;
                            if ( v356 != *(_DWORD *)(a1 + 1648) )
                              return 13;
                            goto LABEL_456;
                          }
                        }
                      }
                      while ( v347 != v265 );
                      v353 = (unsigned __int8)v264;
                      LOBYTE(v264) = 1;
                      v347 = &v261[v263];
                    }
                    while ( v353 == 1 );
                    *(_DWORD *)(a1 + 144) = v352;
                    *(_DWORD *)(a1 + 148) = v698;
                    *(_QWORD *)(a1 + 72) = v346;
                    *(_DWORD *)(a1 + 80) = v348;
                    *(_QWORD *)(a1 + 24) = v265;
                    *(_DWORD *)(a1 + 1512) = v9;
                    *(_DWORD *)(a1 + 1516) = v8;
                    *(_DWORD *)(a1 + 1520) = v702;
                    *(_DWORD *)(a1 + 1524) = v696;
                    *(_DWORD *)(a1 + 1528) = v7;
                    *(_DWORD *)(a1 + 1488) = v710;
                  }
                  else
                  {
                    v265 = v261;
                  }
                  *v262 = v265 - v261;
                  *v3 = 0;
                  v19 = 381;
                  goto LABEL_447;
              }
              return *(unsigned int *)(a1 + 312);
            }
            if ( v6 <= 452 )
            {
              if ( v6 > 444 )
              {
                if ( v6 == 445 )
                {
                  v15 = *(unsigned __int8 **)(a1 + 216);
                  v280 = *(__int64 **)(a1 + 224);
                  v281 = *v280;
                  v282 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v15;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_QWORD *)(a1 + 40) = v281;
                  *(_QWORD *)(a1 + 32) = &v15[v281];
                  *(_BYTE *)(a1 + 48) = v282;
                  if ( v282 || v281 )
                  {
                    v689 = *(unsigned int *)(a1 + 1512);
                    v36 = *(unsigned int *)(a1 + 1516);
                    v702 = *(_DWORD *)(a1 + 1520);
                    v696 = *(_DWORD *)(a1 + 1524);
                    v37 = *(unsigned int *)(a1 + 1528);
                    v710 = *(unsigned int *)(a1 + 1488);
                    v38 = *(unsigned int *)(a1 + 144);
                    v698 = *(_DWORD *)(a1 + 148);
                    v360 = *(_QWORD *)(a1 + 72);
                    v361 = *(_DWORD *)(a1 + 80);
                    if ( v281 < 1 )
                    {
                      v362 = 0;
                      goto LABEL_527;
                    }
                    goto LABEL_526;
                  }
                  v283 = v15;
    LABEL_281:
                  *v280 = v15 - v283;
                  *v3 = 0;
                  v19 = 445;
                  goto LABEL_447;
                }
                if ( v6 == 447 )
                {
                  v15 = *(unsigned __int8 **)(a1 + 216);
                  v337 = *(__int64 **)(a1 + 224);
                  v338 = *v337;
                  v339 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v15;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_QWORD *)(a1 + 40) = v338;
                  *(_QWORD *)(a1 + 32) = &v15[v338];
                  *(_BYTE *)(a1 + 48) = v339;
                  if ( v339 || v338 )
                  {
                    v689 = *(unsigned int *)(a1 + 1512);
                    v36 = *(unsigned int *)(a1 + 1516);
                    v702 = *(_DWORD *)(a1 + 1520);
                    v696 = *(_DWORD *)(a1 + 1524);
                    v37 = *(unsigned int *)(a1 + 1528);
                    v710 = *(unsigned int *)(a1 + 1488);
                    v38 = *(unsigned int *)(a1 + 144);
                    v698 = *(_DWORD *)(a1 + 148);
                    v360 = *(_QWORD *)(a1 + 72);
                    v361 = *(_DWORD *)(a1 + 80);
                    if ( v338 < 1 )
                      goto LABEL_541;
                    goto LABEL_537;
                  }
                  v340 = v15;
    LABEL_540:
                  *v337 = v15 - v340;
                  *v3 = 0;
                  v19 = 447;
                  goto LABEL_447;
                }
              }
              else
              {
                if ( v6 == 431 )
                {
                  v15 = *(unsigned __int8 **)(a1 + 216);
                  v145 = *(__int64 **)(a1 + 224);
                  v146 = *v145;
                  v147 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v15;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_QWORD *)(a1 + 40) = v146;
                  *(_QWORD *)(a1 + 32) = &v15[v146];
                  *(_BYTE *)(a1 + 48) = v147;
                  if ( v147 || v146 )
                  {
                    v35 = *(unsigned int *)(a1 + 1512);
                    v36 = *(unsigned int *)(a1 + 1516);
                    v702 = *(_DWORD *)(a1 + 1520);
                    v696 = *(_DWORD *)(a1 + 1524);
                    v37 = *(unsigned int *)(a1 + 1528);
                    v710 = *(unsigned int *)(a1 + 1488);
                    v38 = *(unsigned int *)(a1 + 144);
                    v698 = *(_DWORD *)(a1 + 148);
                    v39 = *(_QWORD *)(a1 + 72);
                    LODWORD(v40) = *(_DWORD *)(a1 + 80);
                    if ( v146 < 1 )
                    {
                      v357 = 0;
                      goto LABEL_490;
                    }
                    goto LABEL_489;
                  }
                  v148 = v15;
    LABEL_153:
                  *v145 = v15 - v148;
                  *v3 = 0;
                  v19 = 431;
                  goto LABEL_447;
                }
                if ( v6 == 437 )
                {
                  v15 = *(unsigned __int8 **)(a1 + 216);
                  v321 = *(__int64 **)(a1 + 224);
                  v322 = *v321;
                  v323 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v15;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_QWORD *)(a1 + 40) = v322;
                  *(_QWORD *)(a1 + 32) = &v15[v322];
                  *(_BYTE *)(a1 + 48) = v323;
                  if ( v323 || v322 )
                  {
                    v35 = *(unsigned int *)(a1 + 1512);
                    v36 = *(unsigned int *)(a1 + 1516);
                    v702 = *(_DWORD *)(a1 + 1520);
                    v696 = *(_DWORD *)(a1 + 1524);
                    v37 = *(unsigned int *)(a1 + 1528);
                    v710 = *(unsigned int *)(a1 + 1488);
                    v38 = *(unsigned int *)(a1 + 144);
                    v698 = *(_DWORD *)(a1 + 148);
                    v39 = *(_QWORD *)(a1 + 72);
                    LODWORD(v40) = *(_DWORD *)(a1 + 80);
                    if ( v322 < 1 )
                    {
                      v379 = 0;
                      goto LABEL_518;
                    }
                    goto LABEL_517;
                  }
                  v324 = v15;
    LABEL_521:
                  *v321 = v15 - v324;
                  *v3 = 0;
                  v19 = 437;
                  goto LABEL_447;
                }
              }
              return *(unsigned int *)(a1 + 312);
            }
            if ( v6 <= 461 )
            {
              if ( v6 != 453 )
              {
                if ( v6 == 456 )
                {
                  v15 = *(unsigned __int8 **)(a1 + 216);
                  v233 = *(__int64 **)(a1 + 224);
                  v234 = *v233;
                  v235 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v15;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_QWORD *)(a1 + 40) = v234;
                  *(_QWORD *)(a1 + 32) = &v15[v234];
                  *(_BYTE *)(a1 + 48) = v235;
                  if ( v235 || v234 )
                  {
                    v35 = *(unsigned int *)(a1 + 1512);
                    v36 = *(unsigned int *)(a1 + 1516);
                    v702 = *(_DWORD *)(a1 + 1520);
                    v696 = *(_DWORD *)(a1 + 1524);
                    v37 = *(unsigned int *)(a1 + 1528);
                    v710 = *(unsigned int *)(a1 + 1488);
                    v38 = *(unsigned int *)(a1 + 144);
                    v698 = *(_DWORD *)(a1 + 148);
                    v369 = *(_QWORD *)(a1 + 72);
                    v370 = *(_DWORD *)(a1 + 80);
                    if ( v234 < 1 )
                    {
                      v371 = 0;
                      goto LABEL_554;
                    }
                    goto LABEL_553;
                  }
                  v236 = v15;
    LABEL_557:
                  *v233 = v15 - v236;
                  *v3 = 0;
                  v19 = 456;
                  goto LABEL_447;
                }
                return *(unsigned int *)(a1 + 312);
              }
    LABEL_534:
              v416 = 453;
    LABEL_547:
              *(_DWORD *)a1 = v416;
              return 14;
            }
            if ( v6 == 462 )
            {
    LABEL_546:
              v416 = 462;
              goto LABEL_547;
            }
            if ( v6 != 473 )
              return *(unsigned int *)(a1 + 312);
            v15 = *(unsigned __int8 **)(a1 + 216);
            v302 = *(_BYTE *)(a1 + 248);
            v303 = **(_QWORD **)(a1 + 224);
            *(_QWORD *)(a1 + 16) = v15;
            *(_QWORD *)(a1 + 24) = v15;
            *(_BYTE *)(a1 + 48) = v302;
            v304 = *(_QWORD *)(a1 + 1560);
            *(_QWORD *)(a1 + 40) = v303;
            *(_QWORD *)(a1 + 32) = &v15[v303];
            v305 = (char *)(*(_QWORD *)(a1 + 1544) + v304);
            *(_QWORD *)(a1 + 1544) = v305;
            v306 = *(_QWORD *)(a1 + 1552) - v304;
            *(_QWORD *)(a1 + 1552) = v306;
            if ( !v306 )
            {
              v35 = *(unsigned int *)(a1 + 1512);
              v36 = *(unsigned int *)(a1 + 1516);
              v702 = *(_DWORD *)(a1 + 1520);
              v696 = *(_DWORD *)(a1 + 1524);
              v37 = *(unsigned int *)(a1 + 1528);
              v710 = *(unsigned int *)(a1 + 1488);
              goto LABEL_109;
            }
            v377 = *v3;
            if ( v306 >= v377 )
              v378 = v377;
            else
              v378 = v306;
            *(_QWORD *)(a1 + 1560) = v378;
            if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
            {
              if ( v378 )
              {
                v389 = 0;
                while ( 1 )
                {
                  v390 = v378 - v389 >= 0x2000 ? 0x2000LL : v378 - v389;
                  memcpy(&v4[v389], &v305[v389], v390);
                  *(_DWORD *)(a1 + 208) = lzham::adler32(
                                            (unsigned __int8 *)(*(_QWORD *)(a1 + 1544) + v389),
                                            v390,
                                            *(_DWORD *)(a1 + 208));
                  v389 += v390;
                  v378 = *(_QWORD *)(a1 + 1560);
                  if ( v378 <= v389 )
                    break;
                  v4 = *(char **)(a1 + 232);
                  v305 = *(char **)(a1 + 1544);
                }
              }
            }
            else
            {
              memcpy(v4, v305, v378);
            }
            **(_QWORD **)(a1 + 224) = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
            **(_QWORD **)(a1 + 240) = *(_QWORD *)(a1 + 1560);
            v168 = 473;
    LABEL_261:
            *(_DWORD *)a1 = v168;
            return *(_QWORD *)(a1 + 1560) == 0;
          }
          if ( v6 <= 550 )
          {
            if ( v6 > 516 )
            {
              if ( v6 > 529 )
              {
                if ( v6 == 530 )
                {
    LABEL_572:
                  *(_DWORD *)a1 = 530;
                  return 9;
                }
                if ( v6 == 536 )
                {
                  v15 = *(unsigned __int8 **)(a1 + 216);
                  v298 = *(__int64 **)(a1 + 224);
                  v299 = *v298;
                  v300 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v15;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_QWORD *)(a1 + 40) = v299;
                  *(_QWORD *)(a1 + 32) = &v15[v299];
                  *(_BYTE *)(a1 + 48) = v300;
                  if ( v300 || v299 )
                  {
                    v175 = *(_DWORD *)(a1 + 1608);
                    v685 = *(unsigned int *)(a1 + 1512);
                    v36 = *(unsigned int *)(a1 + 1516);
                    v702 = *(_DWORD *)(a1 + 1520);
                    v696 = *(_DWORD *)(a1 + 1524);
                    v37 = *(unsigned int *)(a1 + 1528);
                    v174 = *(unsigned int *)(a1 + 1488);
                    LODWORD(v38) = *(_DWORD *)(a1 + 144);
                    v698 = *(_DWORD *)(a1 + 148);
                    v374 = *(_QWORD *)(a1 + 72);
                    v375 = *(_DWORD *)(a1 + 80);
                    if ( v299 < 1 )
                    {
                      v376 = 0;
                      goto LABEL_591;
                    }
                    goto LABEL_590;
                  }
                  v301 = v15;
    LABEL_594:
                  *v298 = v15 - v301;
                  *v3 = 0;
                  v19 = 536;
                  goto LABEL_447;
                }
              }
              else
              {
                if ( v6 == 517 )
                {
                  v15 = *(unsigned __int8 **)(a1 + 216);
                  v219 = *(__int64 **)(a1 + 224);
                  v220 = *v219;
                  v221 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v15;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_QWORD *)(a1 + 40) = v220;
                  *(_QWORD *)(a1 + 32) = &v15[v220];
                  *(_BYTE *)(a1 + 48) = v221;
                  if ( v221 || v220 )
                  {
                    v358 = *(_DWORD *)(a1 + 1608);
                    v35 = *(unsigned int *)(a1 + 1512);
                    v36 = *(unsigned int *)(a1 + 1516);
                    v702 = *(_DWORD *)(a1 + 1520);
                    v696 = *(_DWORD *)(a1 + 1524);
                    v37 = *(unsigned int *)(a1 + 1528);
                    v710 = *(unsigned int *)(a1 + 1488);
                    LODWORD(v38) = *(_DWORD *)(a1 + 144);
                    v698 = *(_DWORD *)(a1 + 148);
                    v39 = *(_QWORD *)(a1 + 72);
                    LODWORD(v40) = *(_DWORD *)(a1 + 80);
                    if ( v220 < 1 )
                    {
                      v359 = 0;
                      goto LABEL_563;
                    }
                    goto LABEL_562;
                  }
                  v222 = v15;
    LABEL_225:
                  *v219 = v15 - v222;
                  *v3 = 0;
                  v19 = 517;
                  goto LABEL_447;
                }
                if ( v6 == 520 )
                {
                  v15 = *(unsigned __int8 **)(a1 + 216);
                  v325 = *(__int64 **)(a1 + 224);
                  v326 = *v325;
                  v327 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v15;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_QWORD *)(a1 + 40) = v326;
                  *(_QWORD *)(a1 + 32) = &v15[v326];
                  *(_BYTE *)(a1 + 48) = v327;
                  if ( v327 || v326 )
                  {
                    LODWORD(v380) = *(_DWORD *)(a1 + 1608);
                    v35 = *(unsigned int *)(a1 + 1512);
                    v36 = *(unsigned int *)(a1 + 1516);
                    v702 = *(_DWORD *)(a1 + 1520);
                    v696 = *(_DWORD *)(a1 + 1524);
                    v37 = *(unsigned int *)(a1 + 1528);
                    v710 = *(unsigned int *)(a1 + 1488);
                    LODWORD(v38) = *(_DWORD *)(a1 + 144);
                    v698 = *(_DWORD *)(a1 + 148);
                    v381 = *(_QWORD *)(a1 + 72);
                    k = *(_DWORD *)(a1 + 80);
                    if ( v326 < 1 )
                    {
                      v383 = 0;
                      goto LABEL_575;
                    }
                    goto LABEL_574;
                  }
                  v328 = v15;
    LABEL_578:
                  *v325 = v15 - v328;
                  *v3 = 0;
                  v19 = 520;
                  goto LABEL_447;
                }
              }
              return *(unsigned int *)(a1 + 312);
            }
            if ( v6 != 496 )
              return *(unsigned int *)(a1 + 312);
            v35 = *(unsigned int *)(a1 + 1512);
            v36 = *(unsigned int *)(a1 + 1516);
            v702 = *(_DWORD *)(a1 + 1520);
            v696 = *(_DWORD *)(a1 + 1524);
            v37 = *(unsigned int *)(a1 + 1528);
            v710 = *(unsigned int *)(a1 + 1488);
            v15 = *(unsigned __int8 **)(a1 + 216);
            v103 = **(_QWORD **)(a1 + 224);
            v104 = *(_BYTE *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v15;
            *(_QWORD *)(a1 + 24) = v15;
            *(_QWORD *)(a1 + 40) = v103;
            *(_QWORD *)(a1 + 32) = &v15[v103];
            *(_BYTE *)(a1 + 48) = v104;
    LABEL_109:
            v38 = *(unsigned int *)(a1 + 144);
            v698 = *(_DWORD *)(a1 + 148);
            v39 = *(_QWORD *)(a1 + 72);
            LODWORD(v40) = *(_DWORD *)(a1 + 80);
            goto LABEL_610;
          }
          if ( v6 > 607 )
          {
            if ( v6 > 639 )
            {
              if ( v6 == 640 )
              {
                v15 = *(unsigned __int8 **)(a1 + 216);
                v307 = *(__int64 **)(a1 + 224);
                v308 = *v307;
                v309 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v308;
                *(_QWORD *)(a1 + 32) = &v15[v308];
                *(_BYTE *)(a1 + 48) = v309;
                if ( v309 || v308 )
                {
                  v690 = a1 + 16;
                  LODWORD(v35) = *(_DWORD *)(a1 + 1512);
                  LODWORD(v36) = *(_DWORD *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  LODWORD(v37) = *(_DWORD *)(a1 + 1528);
                  v710 = *(unsigned int *)(a1 + 1488);
                  v363 = *(_DWORD *)(a1 + 144);
                  v358 = *(_DWORD *)(a1 + 148);
                  v39 = *(_QWORD *)(a1 + 72);
                  LODWORD(v40) = *(_DWORD *)(a1 + 80);
                  if ( v308 < 1 )
                  {
                    v364 = 0;
                    goto LABEL_627;
                  }
                  goto LABEL_626;
                }
                v310 = v15;
    LABEL_305:
                *v307 = v15 - v310;
                *v3 = 0;
                v19 = 640;
                goto LABEL_447;
              }
              if ( v6 == 651 )
              {
                v15 = *(unsigned __int8 **)(a1 + 216);
                v341 = *(__int64 **)(a1 + 224);
                v342 = *v341;
                v343 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v15;
                *(_QWORD *)(a1 + 24) = v15;
                *(_QWORD *)(a1 + 40) = v342;
                *(_QWORD *)(a1 + 32) = &v15[v342];
                *(_BYTE *)(a1 + 48) = v343;
                if ( v343 || v342 )
                {
                  v690 = a1 + 16;
                  v49 = *(unsigned int *)(a1 + 1512);
                  v703 = *(_DWORD *)(a1 + 1516);
                  v702 = *(_DWORD *)(a1 + 1520);
                  v696 = *(_DWORD *)(a1 + 1524);
                  v50 = *(unsigned int *)(a1 + 1528);
                  v54 = *(unsigned int *)(a1 + 1488);
                  v363 = *(_DWORD *)(a1 + 144);
                  v51 = *(_DWORD *)(a1 + 148);
                  v39 = *(_QWORD *)(a1 + 72);
                  LODWORD(v40) = *(_DWORD *)(a1 + 80);
                  if ( v342 < 1 )
                  {
                    v384 = 0;
                    goto LABEL_503;
                  }
                  goto LABEL_502;
                }
                v344 = v15;
    LABEL_506:
                *v341 = v15 - v344;
                *v3 = 0;
                v19 = 651;
                goto LABEL_447;
              }
              return *(unsigned int *)(a1 + 312);
            }
            if ( v6 == 608 )
            {
    LABEL_608:
              v430 = 608;
              goto LABEL_596;
            }
            if ( v6 == 625 )
            {
              v15 = *(unsigned __int8 **)(a1 + 216);
              v237 = *(_BYTE *)(a1 + 248);
              v238 = **(_QWORD **)(a1 + 224);
              *(_QWORD *)(a1 + 16) = v15;
              *(_QWORD *)(a1 + 24) = v15;
              *(_BYTE *)(a1 + 48) = v237;
              v239 = *(_QWORD *)(a1 + 1560);
              *(_QWORD *)(a1 + 40) = v238;
              *(_QWORD *)(a1 + 32) = &v15[v238];
              v240 = (char *)(*(_QWORD *)(a1 + 1544) + v239);
              *(_QWORD *)(a1 + 1544) = v240;
              v241 = *(_QWORD *)(a1 + 1552) - v239;
              *(_QWORD *)(a1 + 1552) = v241;
              if ( !v241 )
              {
                v242 = a1 + 16;
                v174 = 0;
                v175 = *(_DWORD *)(a1 + 1608);
                v685 = *(unsigned int *)(a1 + 1512);
                v243 = *(unsigned int *)(a1 + 1516);
                v702 = *(_DWORD *)(a1 + 1520);
                v696 = *(_DWORD *)(a1 + 1524);
                v664 = *(unsigned int *)(a1 + 1528);
                goto LABEL_597;
              }
              v372 = *v3;
              if ( v241 >= v372 )
                v373 = v372;
              else
                v373 = v241;
              *(_QWORD *)(a1 + 1560) = v373;
              if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
              {
                if ( v373 )
                {
                  v387 = 0;
                  while ( 1 )
                  {
                    v388 = v373 - v387 >= 0x2000 ? 0x2000LL : v373 - v387;
                    memcpy(&v4[v387], &v240[v387], v388);
                    *(_DWORD *)(a1 + 208) = lzham::adler32(
                                              (unsigned __int8 *)(*(_QWORD *)(a1 + 1544) + v387),
                                              v388,
                                              *(_DWORD *)(a1 + 208));
                    v387 += v388;
                    v373 = *(_QWORD *)(a1 + 1560);
                    if ( v373 <= v387 )
                      break;
                    v4 = *(char **)(a1 + 232);
                    v240 = *(char **)(a1 + 1544);
                  }
                }
              }
              else
              {
                memcpy(v4, v240, v373);
              }
              **(_QWORD **)(a1 + 224) = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
              **(_QWORD **)(a1 + 240) = *(_QWORD *)(a1 + 1560);
              v168 = 625;
              goto LABEL_261;
            }
          }
          else
          {
            if ( v6 > 583 )
            {
              if ( v6 == 584 )
                goto LABEL_616;
              if ( v6 == 588 )
              {
                v242 = a1 + 16;
                v287 = *v3;
                v288 = 0;
                v175 = *(_DWORD *)(a1 + 1608);
                v685 = *(unsigned int *)(a1 + 1512);
                v243 = *(unsigned int *)(a1 + 1516);
                v702 = *(_DWORD *)(a1 + 1520);
                v696 = *(_DWORD *)(a1 + 1524);
                v664 = *(unsigned int *)(a1 + 1528);
                LODWORD(v174) = *(_DWORD *)(a1 + 1488);
                v290 = *(_QWORD *)(a1 + 216);
                v289 = *(unsigned __int64 **)(a1 + 224);
                v291 = *v289;
                *(_QWORD *)(a1 + 16) = v290;
                *(_QWORD *)(a1 + 24) = v290;
                *(_QWORD *)(a1 + 40) = v291;
                v292 = v290 + v291;
                LOBYTE(v291) = *(_BYTE *)(a1 + 248);
                *(_QWORD *)(a1 + 32) = v292;
                *(_BYTE *)(a1 + 48) = v291;
                v293 = *v289;
                goto LABEL_599;
              }
              return *(unsigned int *)(a1 + 312);
            }
            if ( v6 == 551 )
            {
    LABEL_588:
              v430 = 551;
              goto LABEL_596;
            }
            if ( v6 == 559 )
            {
              v15 = *(unsigned __int8 **)(a1 + 216);
              v169 = *(_BYTE *)(a1 + 248);
              v170 = **(_QWORD **)(a1 + 224);
              *(_QWORD *)(a1 + 16) = v15;
              *(_QWORD *)(a1 + 24) = v15;
              *(_BYTE *)(a1 + 48) = v169;
              v171 = *(_QWORD *)(a1 + 1560);
              *(_QWORD *)(a1 + 40) = v170;
              *(_QWORD *)(a1 + 32) = &v15[v170];
              v172 = (char *)(*(_QWORD *)(a1 + 1544) + v171);
              *(_QWORD *)(a1 + 1544) = v172;
              v173 = *(_QWORD *)(a1 + 1552) - v171;
              *(_QWORD *)(a1 + 1552) = v173;
              if ( !v173 )
              {
                v174 = 0;
                v175 = *(_DWORD *)(a1 + 1608);
                v685 = *(unsigned int *)(a1 + 1512);
                v36 = *(unsigned int *)(a1 + 1516);
                v702 = *(_DWORD *)(a1 + 1520);
                v696 = *(_DWORD *)(a1 + 1524);
                v37 = *(unsigned int *)(a1 + 1528);
                LODWORD(v38) = *(_DWORD *)(a1 + 144);
                v698 = *(_DWORD *)(a1 + 148);
                v176 = *(_QWORD *)(a1 + 72);
                v177 = *(_DWORD *)(a1 + 80);
                goto LABEL_436;
              }
              v367 = *v3;
              if ( v173 >= v367 )
                v368 = v367;
              else
                v368 = v173;
              *(_QWORD *)(a1 + 1560) = v368;
              if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
              {
                if ( v368 )
                {
                  v385 = 0;
                  while ( 1 )
                  {
                    v386 = v368 - v385 >= 0x2000 ? 0x2000LL : v368 - v385;
                    memcpy(&v4[v385], &v172[v385], v386);
                    *(_DWORD *)(a1 + 208) = lzham::adler32(
                                              (unsigned __int8 *)(*(_QWORD *)(a1 + 1544) + v385),
                                              v386,
                                              *(_DWORD *)(a1 + 208));
                    v385 += v386;
                    v368 = *(_QWORD *)(a1 + 1560);
                    if ( v368 <= v385 )
                      break;
                    v4 = *(char **)(a1 + 232);
                    v172 = *(char **)(a1 + 1544);
                  }
                }
              }
              else
              {
                memcpy(v4, v172, v368);
              }
              **(_QWORD **)(a1 + 224) = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
              **(_QWORD **)(a1 + 240) = *(_QWORD *)(a1 + 1560);
              v168 = 559;
              goto LABEL_261;
            }
          }
          return *(unsigned int *)(a1 + 312);
        }
        if ( v6 <= 704 )
        {
          if ( v6 == 682 )
          {
            v15 = *(unsigned __int8 **)(a1 + 216);
            v77 = *(__int64 **)(a1 + 224);
            v78 = *v77;
            v79 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v15;
            *(_QWORD *)(a1 + 24) = v15;
            *(_QWORD *)(a1 + 40) = v78;
            *(_QWORD *)(a1 + 32) = &v15[v78];
            *(_BYTE *)(a1 + 48) = v79;
            if ( v79 || v78 )
            {
              v49 = *(unsigned int *)(a1 + 1512);
              v703 = *(_DWORD *)(a1 + 1516);
              v702 = *(_DWORD *)(a1 + 1520);
              v696 = *(_DWORD *)(a1 + 1524);
              v136 = *(unsigned int *)(a1 + 1528);
              v94 = *(unsigned int *)(a1 + 1488);
              v214 = *(_DWORD *)(a1 + 144);
              v213 = *(_DWORD *)(a1 + 148);
              v139 = *(_QWORD *)(a1 + 72);
              LODWORD(v140) = *(_DWORD *)(a1 + 80);
              if ( v78 < 1 )
              {
                v215 = 0;
                goto LABEL_662;
              }
              goto LABEL_661;
            }
            v80 = v15;
    LABEL_85:
            *v77 = v15 - v80;
            *v3 = 0;
            v19 = 682;
            goto LABEL_447;
          }
          return *(unsigned int *)(a1 + 312);
        }
        if ( v6 <= 736 )
        {
          if ( v6 == 705 )
            goto LABEL_650;
          if ( v6 == 711 )
          {
            v118 = *(unsigned __int8 **)(a1 + 216);
            v119 = *(__int64 **)(a1 + 224);
            v120 = *v119;
            v121 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v118;
            *(_QWORD *)(a1 + 24) = v118;
            *(_QWORD *)(a1 + 40) = v120;
            v122 = (unsigned __int64)&v118[v120];
            *(_QWORD *)(a1 + 32) = &v118[v120];
            *(_BYTE *)(a1 + 48) = v121;
            if ( v121 || v120 )
            {
              v687 = *(unsigned int *)(a1 + 1512);
              v318 = *(_DWORD *)(a1 + 1516);
              v702 = *(_DWORD *)(a1 + 1520);
              v696 = *(_DWORD *)(a1 + 1524);
              LODWORD(v136) = *(_DWORD *)(a1 + 1528);
              LODWORD(v94) = *(_DWORD *)(a1 + 1488);
              v214 = *(_DWORD *)(a1 + 144);
              v699 = *(_DWORD *)(a1 + 148);
              v139 = *(_QWORD *)(a1 + 72);
              LODWORD(v140) = *(_DWORD *)(a1 + 80);
              v319 = *(_QWORD *)(a1 + 160);
              v320 = *(_QWORD *)(v319 + 64);
              goto LABEL_669;
            }
            v15 = v118;
    LABEL_685:
            *v119 = v15 - v118;
            *v3 = 0;
            v19 = 711;
            goto LABEL_447;
          }
          return *(unsigned int *)(a1 + 312);
        }
        if ( v6 == 737 )
        {
          v186 = *(unsigned __int8 **)(a1 + 216);
          v187 = *(__int64 **)(a1 + 224);
          v188 = *v187;
          v189 = *(unsigned __int8 *)(a1 + 248);
          *(_QWORD *)(a1 + 16) = v186;
          *(_QWORD *)(a1 + 24) = v186;
          *(_QWORD *)(a1 + 40) = v188;
          v190 = (unsigned __int64)&v186[v188];
          *(_QWORD *)(a1 + 32) = &v186[v188];
          *(_BYTE *)(a1 + 48) = v189;
          if ( v189 || v188 )
          {
            v672 = *(_DWORD *)(a1 + 1576);
            v687 = *(unsigned int *)(a1 + 1512);
            v295 = *(_DWORD *)(a1 + 1516);
            v702 = *(_DWORD *)(a1 + 1520);
            v696 = *(_DWORD *)(a1 + 1524);
            LODWORD(v136) = *(_DWORD *)(a1 + 1528);
            LODWORD(v94) = *(_DWORD *)(a1 + 1488);
            v214 = *(_DWORD *)(a1 + 144);
            v699 = *(_DWORD *)(a1 + 148);
            v139 = *(_QWORD *)(a1 + 72);
            LODWORD(v140) = *(_DWORD *)(a1 + 80);
            v296 = *(_QWORD *)(a1 + 160);
            v297 = *(_QWORD *)(v296 + 64);
            goto LABEL_694;
          }
          v15 = v186;
    LABEL_711:
          *v187 = v15 - v186;
          *v3 = 0;
          v19 = 737;
          goto LABEL_447;
        }
        if ( v6 != 757 )
          return *(unsigned int *)(a1 + 312);
        v248 = *(unsigned __int8 **)(a1 + 216);
        v249 = *(_BYTE *)(a1 + 248);
        v250 = **(_QWORD **)(a1 + 224);
        *(_QWORD *)(a1 + 16) = v248;
        *(_QWORD *)(a1 + 24) = v248;
        *(_BYTE *)(a1 + 48) = v249;
        v251 = *(_QWORD *)(a1 + 1560);
        *(_QWORD *)(a1 + 40) = v250;
        *(_QWORD *)(a1 + 32) = &v248[v250];
        v252 = (char *)(*(_QWORD *)(a1 + 1544) + v251);
        *(_QWORD *)(a1 + 1544) = v252;
        v253 = *(_QWORD *)(a1 + 1552) - v251;
        *(_QWORD *)(a1 + 1552) = v253;
        if ( v253 )
        {
          v335 = *v3;
          if ( v253 >= v335 )
            v336 = v335;
          else
            v336 = v253;
          *(_QWORD *)(a1 + 1560) = v336;
          if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
          {
            if ( v336 )
            {
              v365 = 0;
              while ( 1 )
              {
                v366 = v336 - v365 >= 0x2000 ? 0x2000LL : v336 - v365;
                memcpy(&v4[v365], &v252[v365], v366);
                *(_DWORD *)(a1 + 208) = lzham::adler32(
                                          (unsigned __int8 *)(*(_QWORD *)(a1 + 1544) + v365),
                                          v366,
                                          *(_DWORD *)(a1 + 208));
                v365 += v366;
                v336 = *(_QWORD *)(a1 + 1560);
                if ( v336 <= v365 )
                  break;
                v4 = *(char **)(a1 + 232);
                v252 = *(char **)(a1 + 1544);
              }
            }
          }
          else
          {
            memcpy(v4, v252, v336);
          }
          **(_QWORD **)(a1 + 224) = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
          **(_QWORD **)(a1 + 240) = *(_QWORD *)(a1 + 1560);
          v168 = 757;
          goto LABEL_261;
        }
        v678 = v248;
        v690 = a1 + 16;
        v54 = 0;
        v49 = *(unsigned int *)(a1 + 1512);
        v703 = *(_DWORD *)(a1 + 1516);
        v702 = *(_DWORD *)(a1 + 1520);
        v696 = *(_DWORD *)(a1 + 1524);
        v50 = *(unsigned int *)(a1 + 1528);
        v662 = *(_DWORD *)(a1 + 144);
        v51 = *(_DWORD *)(a1 + 148);
        v52 = *(_QWORD *)(a1 + 72);
        v53 = *(unsigned int *)(a1 + 80);
        while ( 1 )
        {
          while ( 1 )
          {
    LABEL_631:
            if ( (unsigned int)v50 >= 0xC )
              lzham_assert(
                "match_model_index < LZHAM_ARRAY_SIZE(m_is_match_model)",
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                680);
            v443 = (_WORD *)(a1 + 2LL * (unsigned int)v50 + 1344);
            v94 = v54;
            v136 = v50;
            v214 = v662;
            v444 = v690;
            v139 = v52;
            v140 = v53;
            v15 = v678;
            v213 = v51;
    LABEL_634:
            if ( !HIBYTE(v213) )
            {
              *(_QWORD *)(a1 + 168) = v443;
              v2 = v444;
              while ( 1 )
              {
                if ( (int)v140 > 7 )
                {
                  v444 = v2;
                  v450 = HIBYTE(v139);
                  v139 <<= 8;
                  v140 = (unsigned int)(v140 - 8);
                  v443 = *(_WORD **)(a1 + 168);
                  v213 <<= 8;
                  v214 = (unsigned __int8)v450 | (v214 << 8);
                  goto LABEL_634;
                }
                if ( v15 == *(unsigned __int8 **)(a1 + 32) )
                {
                  if ( *(_BYTE *)(a1 + 48) != 1 )
                  {
                    *(_DWORD *)(a1 + 144) = v214;
                    *(_DWORD *)(a1 + 148) = v213;
                    *(_QWORD *)(a1 + 72) = v139;
                    *(_DWORD *)(a1 + 80) = v140;
                    *(_QWORD *)(a1 + 24) = v15;
                    *(_DWORD *)(a1 + 1512) = v49;
                    *(_DWORD *)(a1 + 1516) = v703;
                    *(_DWORD *)(a1 + 1520) = v702;
                    *(_DWORD *)(a1 + 1524) = v696;
                    *(_DWORD *)(a1 + 1528) = v136;
                    *(_DWORD *)(a1 + 1488) = v94;
                    v80 = *(unsigned __int8 **)(a1 + 16);
                    v77 = *(__int64 **)(a1 + 224);
                    v3 = *(unsigned __int64 **)(a1 + 240);
                    goto LABEL_85;
                  }
                  v215 = 0;
                }
                else
                {
    LABEL_661:
                  v451 = *v15++;
                  v215 = v451;
                }
    LABEL_662:
                v139 |= v215 << (56 - (unsigned __int8)v140);
                LODWORD(v140) = v140 + 8;
              }
            }
            v445 = (unsigned __int16)*v443;
            v446 = v445 * (v213 >> 11);
            v2 = v444;
            if ( v214 >= v446 )
              break;
            *v443 = v445 + ((unsigned int)(2048 - v445) >> 5);
            if ( (unsigned int)v94 >= v5 )
            {
              *(_DWORD *)(a1 + 144) = v214;
              *(_DWORD *)(a1 + 148) = v446;
              *(_QWORD *)(a1 + 72) = v139;
              *(_DWORD *)(a1 + 80) = v140;
              *(_QWORD *)(a1 + 24) = v15;
              **(_QWORD **)(a1 + 224) = &v15[-*(_QWORD *)(a1 + 16)];
              **(_QWORD **)(a1 + 240) = 0;
    LABEL_650:
              v430 = 705;
    LABEL_596:
              *(_DWORD *)a1 = v430;
              return 5;
            }
            v699 = v445 * (v213 >> 11);
            v687 = v49;
            if ( (unsigned int)v136 > 6 )
            {
              v672 = (unsigned __int8)v4[(unsigned int)(v94 - v49)];
              v296 = a1 + 448;
              v297 = *(_QWORD *)(a1 + 512);
              v295 = v703;
              if ( (int)v140 <= 23 )
              {
                v190 = *(_QWORD *)(a1 + 32);
                if ( (unsigned __int64)(v15 + 4) >= v190 )
                {
                  while ( (int)v140 <= 23 )
                  {
                    if ( !*(_BYTE *)(a1 + 48) )
                    {
                      *(_QWORD *)(a1 + 160) = v296;
                      *(_DWORD *)(a1 + 144) = v214;
                      *(_DWORD *)(a1 + 148) = v699;
                      *(_QWORD *)(a1 + 72) = v139;
                      *(_DWORD *)(a1 + 80) = v140;
                      *(_QWORD *)(a1 + 24) = v15;
                      *(_DWORD *)(a1 + 1576) = v672;
                      *(_DWORD *)(a1 + 1512) = v687;
                      *(_DWORD *)(a1 + 1516) = v295;
                      *(_DWORD *)(a1 + 1520) = v702;
                      *(_DWORD *)(a1 + 1524) = v696;
                      *(_DWORD *)(a1 + 1528) = v136;
                      *(_DWORD *)(a1 + 1488) = v94;
                      v186 = *(unsigned __int8 **)(a1 + 16);
                      v187 = *(__int64 **)(a1 + 224);
                      v3 = *(unsigned __int64 **)(a1 + 240);
                      goto LABEL_711;
                    }
                    v186 = v15;
    LABEL_694:
                    if ( (unsigned __int64)v186 >= v190 )
                    {
                      v478 = 0;
                    }
                    else
                    {
                      v479 = *v186++;
                      v478 = v479;
                    }
                    v139 |= v478 << (56 - (unsigned __int8)v140);
                    v15 = v186;
                    LODWORD(v140) = v140 + 8;
                  }
                }
                else
                {
                  v139 |= (((unsigned __int64)*v15 << 24)
                         | ((unsigned __int64)v15[1] << 16)
                         | ((unsigned __int64)v15[2] << 8)
                         | v15[3]) << (32 - (unsigned __int8)v140);
                  v15 += 4;
                  LODWORD(v140) = v140 + 32;
                }
              }
              v480 = HIWORD(v139) + 1;
              v481 = v2;
              if ( v480 > *(_DWORD *)(v297 + 16) )
              {
                v712 = v94;
                v666 = v5;
                v498 = *(_DWORD *)(v297 + 20) - 65;
                do
                {
                  v499 = (unsigned int)(v498 + 64);
                  ++v498;
                }
                while ( v480 > *(_DWORD *)(v297 + 4LL * (unsigned int)v499 + 28) );
                v456 = v136;
                v500 = *(int *)(v297 + 4 * v499 + 96) + (__int64)(int)(v139 >> -(char)v498);
                if ( (unsigned int)v500 >= *(_DWORD *)(v296 + 72) )
                  v500 = 0;
                v483 = *(unsigned __int16 *)(*(_QWORD *)(v297 + 184) + 2 * v500);
                v484 = v498 + 64;
              }
              else
              {
                v456 = v136;
                v712 = v94;
                v666 = v5;
                v482 = *(_DWORD *)(*(_QWORD *)(v297 + 168) + 4 * (v139 >> (64 - (unsigned __int8)*(_DWORD *)(v297 + 8))));
                v483 = (unsigned __int16)v482;
                v484 = HIWORD(v482);
              }
              v485 = v140;
              v486 = v139;
              v662 = v214;
              v703 = v295;
              v487 = v15;
              v690 = v481;
              v488 = *(_DWORD *)(v296 + 24);
              if ( v488 <= (unsigned int)v483 )
              {
                v489 = v296;
                lzham_assert(
                  "i < m_size",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                  131);
                v296 = v489;
                v488 = *(_DWORD *)(v489 + 24);
              }
              v490 = v4;
              v491 = *(_QWORD *)(v296 + 16);
              v492 = *(unsigned __int16 *)(v491 + 2LL * (unsigned int)v483) + 1;
              if ( v488 <= (unsigned int)v483 )
              {
                v493 = v296;
                lzham_assert(
                  "i < m_size",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                  131);
                v296 = v493;
                v491 = *(_QWORD *)(v493 + 16);
              }
              *(_WORD *)(v491 + 2 * v483) = v492;
              if ( v492 >= 0x10000 )
              {
                v494 = v296;
                lzham_assert(
                  "freq <= UINT16_MAX",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                  737);
                v296 = v494;
              }
              v495 = v486 << v484;
              v496 = (unsigned int)(v485 - v484);
              v497 = *(_DWORD *)(v296 + 84) - 1;
              *(_DWORD *)(v296 + 84) = v497;
              v678 = v487;
              v473 = v699;
              if ( !v497 )
              {
                lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v296, 0xFFFFFFFF, 0);
                v473 = v699;
              }
              v53 = v496;
              v52 = v495;
              v4 = v490;
              v474 = v712;
              v490[v712] = v483 ^ v672;
            }
            else
            {
              v319 = a1 + 320;
              v320 = *(_QWORD *)(a1 + 384);
              v318 = v703;
              if ( (int)v140 <= 23 )
              {
                v122 = *(_QWORD *)(a1 + 32);
                if ( (unsigned __int64)(v15 + 4) >= v122 )
                {
                  while ( (int)v140 <= 23 )
                  {
                    if ( !*(_BYTE *)(a1 + 48) )
                    {
                      *(_QWORD *)(a1 + 160) = v319;
                      *(_DWORD *)(a1 + 144) = v214;
                      *(_DWORD *)(a1 + 148) = v699;
                      *(_QWORD *)(a1 + 72) = v139;
                      *(_DWORD *)(a1 + 80) = v140;
                      *(_QWORD *)(a1 + 24) = v15;
                      *(_DWORD *)(a1 + 1512) = v687;
                      *(_DWORD *)(a1 + 1516) = v318;
                      *(_DWORD *)(a1 + 1520) = v702;
                      *(_DWORD *)(a1 + 1524) = v696;
                      *(_DWORD *)(a1 + 1528) = v136;
                      *(_DWORD *)(a1 + 1488) = v94;
                      v118 = *(unsigned __int8 **)(a1 + 16);
                      v119 = *(__int64 **)(a1 + 224);
                      v3 = *(unsigned __int64 **)(a1 + 240);
                      goto LABEL_685;
                    }
                    v118 = v15;
    LABEL_669:
                    if ( (unsigned __int64)v118 >= v122 )
                    {
                      v452 = 0;
                    }
                    else
                    {
                      v453 = *v118++;
                      v452 = v453;
                    }
                    v139 |= v452 << (56 - (unsigned __int8)v140);
                    v15 = v118;
                    LODWORD(v140) = v140 + 8;
                  }
                }
                else
                {
                  v139 |= (((unsigned __int64)*v15 << 24)
                         | ((unsigned __int64)v15[1] << 16)
                         | ((unsigned __int64)v15[2] << 8)
                         | v15[3]) << (32 - (unsigned __int8)v140);
                  v15 += 4;
                  LODWORD(v140) = v140 + 32;
                }
              }
              v454 = HIWORD(v139) + 1;
              v455 = v2;
              if ( v454 > *(_DWORD *)(v320 + 16) )
              {
                v711 = v94;
                v666 = v5;
                v475 = *(_DWORD *)(v320 + 20) - 65;
                do
                {
                  v476 = (unsigned int)(v475 + 64);
                  ++v475;
                }
                while ( v454 > *(_DWORD *)(v320 + 4LL * (unsigned int)v476 + 28) );
                v456 = v136;
                v477 = *(int *)(v320 + 4 * v476 + 96) + (__int64)(int)(v139 >> -(char)v475);
                if ( (unsigned int)v477 >= *(_DWORD *)(v319 + 72) )
                  v477 = 0;
                v458 = *(unsigned __int16 *)(*(_QWORD *)(v320 + 184) + 2 * v477);
                v459 = v475 + 64;
              }
              else
              {
                v456 = v136;
                v711 = v94;
                v666 = v5;
                v457 = *(_DWORD *)(*(_QWORD *)(v320 + 168) + 4 * (v139 >> (64 - (unsigned __int8)*(_DWORD *)(v320 + 8))));
                v458 = (unsigned __int16)v457;
                v459 = HIWORD(v457);
              }
              v460 = v140;
              v461 = v139;
              v662 = v214;
              v703 = v318;
              v462 = v15;
              v690 = v455;
              v463 = *(_DWORD *)(v319 + 24);
              if ( v463 <= (unsigned int)v458 )
              {
                v464 = v319;
                lzham_assert(
                  "i < m_size",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                  131);
                v319 = v464;
                v463 = *(_DWORD *)(v464 + 24);
              }
              v465 = v4;
              v466 = *(_QWORD *)(v319 + 16);
              v467 = *(unsigned __int16 *)(v466 + 2LL * (unsigned int)v458) + 1;
              if ( v463 <= (unsigned int)v458 )
              {
                v468 = v319;
                lzham_assert(
                  "i < m_size",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                  131);
                v319 = v468;
                v466 = *(_QWORD *)(v468 + 16);
              }
              *(_WORD *)(v466 + 2 * v458) = v467;
              if ( v467 >= 0x10000 )
              {
                v469 = v319;
                lzham_assert(
                  "freq <= UINT16_MAX",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                  711);
                v319 = v469;
              }
              v470 = v461 << v459;
              v471 = (unsigned int)(v460 - v459);
              v472 = *(_DWORD *)(v319 + 84) - 1;
              *(_DWORD *)(v319 + 84) = v472;
              v678 = v462;
              v473 = v699;
              if ( !v472 )
              {
                lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v319, 0xFFFFFFFF, 0);
                v473 = v699;
              }
              v53 = v471;
              v52 = v470;
              v4 = v465;
              v474 = v711;
              v465[v711] = v458;
            }
            v50 = lzham::s_literal_next_state[v456];
            v54 = (unsigned int)(v474 + 1);
            v51 = v473;
            v5 = v666;
            v49 = v687;
          }
          *v443 -= *v443 >> 5;
          v137 = v213 - v446;
          v144 = (_WORD *)(a1 + 2LL * (unsigned int)v136 + 1368);
          v135 = 1;
          v138 = v214 - v446;
    LABEL_642:
          if ( !HIBYTE(v137) )
          {
            *(_QWORD *)(a1 + 168) = v144;
            while ( 1 )
            {
              if ( (int)v140 > 7 )
              {
                v143 = HIBYTE(v139);
                v139 <<= 8;
                v140 = (unsigned int)(v140 - 8);
                v144 = *(_WORD **)(a1 + 168);
                v137 <<= 8;
                v138 = (unsigned int)(unsigned __int8)v143 | ((_DWORD)v138 << 8);
                goto LABEL_642;
              }
              if ( v15 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v138;
                  *(_DWORD *)(a1 + 148) = v137;
                  *(_QWORD *)(a1 + 72) = v139;
                  *(_DWORD *)(a1 + 80) = v140;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_DWORD *)(a1 + 1580) = v135;
                  *(_DWORD *)(a1 + 1512) = v49;
                  *(_DWORD *)(a1 + 1516) = v703;
                  *(_DWORD *)(a1 + 1520) = v702;
                  *(_DWORD *)(a1 + 1524) = v696;
                  *(_DWORD *)(a1 + 1528) = v136;
                  *(_DWORD *)(a1 + 1488) = v94;
                  v29 = *(unsigned __int8 **)(a1 + 16);
                  v26 = *(__int64 **)(a1 + 224);
                  v3 = *(unsigned __int64 **)(a1 + 240);
                  goto LABEL_33;
                }
                v141 = 0;
              }
              else
              {
    LABEL_143:
                v142 = *v15++;
                v141 = v142;
              }
    LABEL_144:
              v139 |= v141 << (56 - (unsigned __int8)v140);
              LODWORD(v140) = v140 + 8;
            }
          }
          v447 = (unsigned __int16)*v144;
          v163 = v447 * (v137 >> 11);
          v217 = v138 - v163;
          if ( (unsigned int)v138 >= v163 )
            break;
          v448 = v2;
          v683 = v49;
          *v144 = v447 + ((unsigned int)(2048 - v447) >> 5);
          v164 = a1 + 576;
          v165 = *(_QWORD *)(a1 + 640);
          if ( (int)v140 <= 23 )
          {
            v90 = *(_QWORD *)(a1 + 32);
            v162 = v703;
            if ( (unsigned __int64)(v15 + 4) >= v90 )
            {
              while ( 1 )
              {
                if ( (int)v140 > 23 )
                {
                  v448 = v2;
                  goto LABEL_883;
                }
                if ( !*(_BYTE *)(a1 + 48) )
                  break;
                v86 = v15;
    LABEL_880:
                if ( (unsigned __int64)v86 >= v90 )
                {
                  v569 = 0;
                }
                else
                {
                  v570 = *v86++;
                  v569 = v570;
                }
                v139 |= v569 << (56 - (unsigned __int8)v140);
                v15 = v86;
                LODWORD(v140) = v140 + 8;
              }
              *(_QWORD *)(a1 + 160) = v164;
              *(_DWORD *)(a1 + 144) = v138;
              *(_DWORD *)(a1 + 148) = v163;
              *(_QWORD *)(a1 + 72) = v139;
              *(_DWORD *)(a1 + 80) = v140;
              *(_QWORD *)(a1 + 24) = v15;
              *(_DWORD *)(a1 + 1580) = v135;
              *(_DWORD *)(a1 + 1512) = v683;
              *(_DWORD *)(a1 + 1516) = v162;
              *(_DWORD *)(a1 + 1520) = v702;
              *(_DWORD *)(a1 + 1524) = v696;
              *(_DWORD *)(a1 + 1528) = v136;
              *(_DWORD *)(a1 + 1488) = v94;
              v86 = *(unsigned __int8 **)(a1 + 16);
              v87 = *(__int64 **)(a1 + 224);
              v3 = *(unsigned __int64 **)(a1 + 240);
    LABEL_899:
              *v87 = v15 - v86;
              *v3 = 0;
              v19 = 864;
    LABEL_447:
              *(_DWORD *)a1 = v19;
              return 2;
            }
            v139 |= (((unsigned __int64)*v15 << 24)
                   | ((unsigned __int64)v15[1] << 16)
                   | ((unsigned __int64)v15[2] << 8)
                   | v15[3]) << (32 - (unsigned __int8)v140);
            v15 += 4;
            LODWORD(v140) = v140 + 32;
          }
          else
          {
            v162 = v703;
          }
    LABEL_883:
          v571 = HIWORD(v139) + 1;
          if ( v571 > *(_DWORD *)(v165 + 16) )
          {
            v698 = v163;
            v669 = v136;
            v710 = v94;
            v588 = *(_DWORD *)(v165 + 20) - 65;
            do
            {
              v589 = (unsigned int)(v588 + 64);
              ++v588;
            }
            while ( v571 > *(_DWORD *)(v165 + 4LL * (unsigned int)v589 + 28) );
            v675 = v4;
            v707 = v162;
            v690 = v448;
            v590 = *(int *)(v165 + 4 * v589 + 96) + (__int64)(int)(v139 >> -(char)v588);
            if ( (unsigned int)v590 >= *(_DWORD *)(v164 + 72) )
              v590 = 0;
            v573 = *(unsigned __int16 *)(*(_QWORD *)(v165 + 184) + 2 * v590);
            v574 = v588 + 64;
          }
          else
          {
            v698 = v163;
            v675 = v4;
            v707 = v162;
            v669 = v136;
            v710 = v94;
            v690 = v448;
            v572 = *(_DWORD *)(*(_QWORD *)(v165 + 168) + 4 * (v139 >> (64 - (unsigned __int8)*(_DWORD *)(v165 + 8))));
            v573 = (unsigned __int16)v572;
            v574 = HIWORD(v572);
          }
          v575 = v140;
          v576 = v139;
          v577 = v138;
          v578 = v5;
          v579 = *(_DWORD *)(v164 + 24);
          if ( v579 <= (unsigned int)v573 )
          {
            v580 = v164;
            lzham_assert(
              "i < m_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
              131);
            v164 = v580;
            v579 = *(_DWORD *)(v580 + 24);
          }
          v581 = v15;
          v582 = *(_QWORD *)(v164 + 16);
          v583 = *(unsigned __int16 *)(v582 + 2LL * (unsigned int)v573) + 1;
          if ( v579 <= (unsigned int)v573 )
          {
            v584 = v164;
            lzham_assert(
              "i < m_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
              131);
            v164 = v584;
            v582 = *(_QWORD *)(v584 + 16);
          }
          *(_WORD *)(v582 + 2 * v573) = v583;
          if ( v583 >= 0x10000 )
          {
            v585 = v164;
            lzham_assert(
              "freq <= UINT16_MAX",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
              864);
            v164 = v585;
          }
          v39 = v576 << v574;
          v40 = (unsigned int)(v575 - v574);
          v586 = *(_DWORD *)(v164 + 84) - 1;
          *(_DWORD *)(v164 + 84) = v586;
          v5 = v578;
          v38 = v577;
          if ( !v586 )
          {
            lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v164, 0xFFFFFFFF, 0);
            v40 = (unsigned int)(v575 - v574);
            v39 = v576 << v574;
            v38 = v577;
          }
          v15 = v581;
          v36 = v707;
          if ( (unsigned int)v573 <= 1 )
          {
            v35 = v683;
            v4 = v675;
            if ( !(_DWORD)v573 )
            {
              v37 = v669;
              v2 = v690;
              if ( (v40 & 7) != 0 )
              {
                while ( 1 )
                {
                  v72 = v40 & 7;
                  if ( (int)v40 >= v72 )
                  {
                    v39 <<= v72;
                    LODWORD(v40) = v40 - v72;
                    goto LABEL_610;
                  }
                  if ( v15 == *(unsigned __int8 **)(a1 + 32) )
                  {
                    if ( *(_BYTE *)(a1 + 48) != 1 )
                    {
                      *(_DWORD *)(a1 + 144) = v38;
                      *(_DWORD *)(a1 + 148) = v698;
                      *(_QWORD *)(a1 + 72) = v39;
                      *(_DWORD *)(a1 + 80) = v40;
                      *(_QWORD *)(a1 + 24) = v15;
                      *(_DWORD *)(a1 + 1512) = v35;
                      *(_DWORD *)(a1 + 1516) = v36;
                      *(_DWORD *)(a1 + 1520) = v702;
                      *(_DWORD *)(a1 + 1524) = v696;
                      *(_DWORD *)(a1 + 1528) = v37;
                      *(_DWORD *)(a1 + 1488) = v710;
                      v18 = *(unsigned __int8 **)(a1 + 16);
                      v14 = *(__int64 **)(a1 + 224);
                      v3 = *(unsigned __int64 **)(a1 + 240);
                      goto LABEL_15;
                    }
                    v70 = 0;
                  }
                  else
                  {
    LABEL_71:
                    v71 = *v15++;
                    v70 = v71;
                  }
    LABEL_72:
                  v39 |= v70 << (56 - (unsigned __int8)v40);
                  LODWORD(v40) = v40 + 8;
                }
              }
              goto LABEL_610;
            }
            v678 = v581;
            v53 = v40;
            v52 = v39;
            v662 = v38;
            v50 = 0;
            v696 = 1;
            v702 = 1;
            v703 = 1;
            v49 = 1;
            v54 = v710;
            v51 = v698;
          }
          else
          {
            v587 = (v573 - 2) & 7;
            v135 = v587 + 2;
            v92 = ((unsigned int)(v573 - 2) >> 3) + 1;
            v211 = v683;
            LODWORD(v94) = v710;
            v4 = v675;
            if ( v587 == 7 )
            {
              v93 = v669;
              v591 = a1 + ((unsigned __int64)((unsigned int)v669 > 6) << 7);
              v95 = v591 + 960;
              v96 = *(_QWORD *)(v591 + 1024);
              if ( (int)v40 <= 23 )
              {
                v24 = *(_QWORD *)(a1 + 32);
                if ( (unsigned __int64)(v581 + 4) >= v24 )
                {
                  v91 = 9;
                  v2 = v690;
                  while ( (int)v40 <= 23 )
                  {
                    if ( !*(_BYTE *)(a1 + 48) )
                    {
                      *(_QWORD *)(a1 + 160) = v95;
                      *(_DWORD *)(a1 + 144) = v38;
                      *(_DWORD *)(a1 + 148) = v698;
                      *(_QWORD *)(a1 + 72) = v39;
                      *(_DWORD *)(a1 + 80) = v40;
                      *(_QWORD *)(a1 + 24) = v15;
                      *(_DWORD *)(a1 + 1580) = v91;
                      *(_DWORD *)(a1 + 1584) = v92;
                      *(_DWORD *)(a1 + 1512) = v683;
                      *(_DWORD *)(a1 + 1516) = v36;
                      *(_DWORD *)(a1 + 1520) = v702;
                      *(_DWORD *)(a1 + 1524) = v696;
                      *(_DWORD *)(a1 + 1528) = v93;
                      *(_DWORD *)(a1 + 1488) = v94;
                      v20 = *(unsigned __int8 **)(a1 + 16);
                      v21 = *(__int64 **)(a1 + 224);
                      v3 = *(unsigned __int64 **)(a1 + 240);
                      goto LABEL_22;
                    }
                    v20 = v15;
    LABEL_917:
                    if ( (unsigned __int64)v20 >= v24 )
                    {
                      v592 = 0;
                    }
                    else
                    {
                      v593 = *v20++;
                      v592 = v593;
                    }
                    v39 |= v592 << (56 - (unsigned __int8)v40);
                    v15 = v20;
                    LODWORD(v40) = v40 + 8;
                  }
                }
                else
                {
                  v39 |= (((unsigned __int64)*v581 << 24)
                        | ((unsigned __int64)v581[1] << 16)
                        | ((unsigned __int64)v581[2] << 8)
                        | v581[3]) << (32 - (unsigned __int8)v40);
                  v91 = 9;
                  v15 = v581 + 4;
                  LODWORD(v40) = v40 + 32;
                  v2 = v690;
                }
              }
              else
              {
                v91 = 9;
                v2 = v690;
              }
              v594 = HIWORD(v39) + 1;
              if ( v594 > *(_DWORD *)(v96 + 16) )
              {
                v681 = v91;
                v660 = v92;
                v715 = v94;
                v670 = v5;
                v605 = *(_DWORD *)(v96 + 20) - 65;
                do
                {
                  v606 = (unsigned int)(v605 + 64);
                  ++v605;
                }
                while ( v594 > *(_DWORD *)(v96 + 4LL * (unsigned int)v606 + 28) );
                v676 = v4;
                v694 = v2;
                v607 = *(int *)(v96 + 4 * v606 + 96) + (__int64)(int)(v39 >> -(char)v605);
                if ( (unsigned int)v607 >= *(_DWORD *)(v95 + 72) )
                  v607 = 0;
                v596 = *(unsigned __int16 *)(*(_QWORD *)(v96 + 184) + 2 * v607);
                v597 = v605 + 64;
              }
              else
              {
                v681 = v91;
                v660 = v92;
                v676 = v4;
                v694 = v2;
                v715 = v94;
                v670 = v5;
                v595 = *(_DWORD *)(*(_QWORD *)(v96 + 168) + 4 * (v39 >> (64 - (unsigned __int8)*(_DWORD *)(v96 + 8))));
                v596 = (unsigned __int16)v595;
                v597 = HIWORD(v595);
              }
              v598 = v40;
              v599 = v39;
              v663 = v38;
              v708 = v36;
              v600 = v15;
              v601 = *(_DWORD *)(v95 + 24);
              if ( v601 <= (unsigned int)v596 )
              {
                lzham_assert(
                  "i < m_size",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                  131);
                v601 = *(_DWORD *)(v95 + 24);
              }
              v602 = *(_QWORD *)(v95 + 16);
              v603 = *(unsigned __int16 *)(v602 + 2LL * (unsigned int)v596) + 1;
              if ( v601 <= (unsigned int)v596 )
              {
                lzham_assert(
                  "i < m_size",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                  131);
                v602 = *(_QWORD *)(v95 + 16);
              }
              *(_WORD *)(v602 + 2 * v596) = v603;
              if ( v603 >= 0x10000 )
                lzham_assert(
                  "freq <= UINT16_MAX",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                  898);
              v39 = v599 << v597;
              LODWORD(v40) = v598 - v597;
              v604 = *(_DWORD *)(v95 + 84) - 1;
              *(_DWORD *)(v95 + 84) = v604;
              v15 = v600;
              LODWORD(v38) = v663;
              if ( !v604 )
              {
                lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v95, 0xFFFFFFFF, 0);
                LODWORD(v40) = v598 - v597;
                v39 = v599 << v597;
                LODWORD(v38) = v663;
              }
              v135 = v596 + v681;
              LODWORD(v94) = v715;
              if ( (_DWORD)v596 + v681 == 258 )
              {
                v210 = 0;
                v5 = v670;
                v4 = v676;
                v211 = v683;
                v2 = v694;
                LODWORD(v36) = v708;
                v92 = v660;
                while ( 1 )
                {
                  v608 = v40 - 1;
                  while ( 1 )
                  {
                    v285 = v608;
                    v212 = v608 + 1;
                    if ( v608 + 1 <= 0 )
                      break;
                    v284 = 2 * v39;
                    if ( (v39 & 0x8000000000000000LL) != 0 )
                    {
                      ++v210;
                      --v608;
                      v39 *= 2LL;
                      if ( v210 < 3 )
                        continue;
                    }
                    while ( 1 )
                    {
                      v611 = lzham::s_huge_match_code_len[v210];
                      LODWORD(v40) = v285 - v611;
                      if ( v285 >= v611 )
                      {
                        v39 = v284 << v611;
                        v135 = lzham::s_huge_match_base_len[v210] + (v284 >> (64 - (unsigned __int8)v611));
                        goto LABEL_953;
                      }
                      if ( v15 == *(unsigned __int8 **)(a1 + 32) )
                      {
                        if ( *(_BYTE *)(a1 + 48) != 1 )
                        {
                          *(_DWORD *)(a1 + 144) = v38;
                          *(_DWORD *)(a1 + 148) = v698;
                          *(_QWORD *)(a1 + 72) = v284;
                          *(_DWORD *)(a1 + 80) = v285;
                          *(_QWORD *)(a1 + 24) = v15;
                          *(_DWORD *)(a1 + 1580) = v210;
                          *(_DWORD *)(a1 + 1584) = v92;
                          *(_DWORD *)(a1 + 1512) = v211;
                          *(_DWORD *)(a1 + 1516) = v36;
                          *(_DWORD *)(a1 + 1520) = v702;
                          *(_DWORD *)(a1 + 1524) = v696;
                          *(_DWORD *)(a1 + 1528) = v93;
                          *(_DWORD *)(a1 + 1488) = v94;
                          v152 = *(unsigned __int8 **)(a1 + 16);
                          v149 = *(__int64 **)(a1 + 224);
                          v3 = *(unsigned __int64 **)(a1 + 240);
                          goto LABEL_158;
                        }
                        v286 = 0;
                      }
                      else
                      {
    LABEL_957:
                        v612 = *v15++;
                        v286 = v612;
                      }
    LABEL_958:
                      v613 = 56 - v285;
                      v285 += 8;
                      v284 |= v286 << v613;
                    }
                  }
                  if ( v15 == *(unsigned __int8 **)(a1 + 32) )
                  {
                    if ( *(_BYTE *)(a1 + 48) != 1 )
                    {
                      *(_DWORD *)(a1 + 144) = v38;
                      *(_DWORD *)(a1 + 148) = v698;
                      *(_QWORD *)(a1 + 72) = v39;
                      *(_DWORD *)(a1 + 80) = v212;
                      *(_QWORD *)(a1 + 24) = v15;
                      *(_DWORD *)(a1 + 1580) = v210;
                      *(_DWORD *)(a1 + 1584) = v92;
                      *(_DWORD *)(a1 + 1512) = v211;
                      *(_DWORD *)(a1 + 1516) = v36;
                      *(_DWORD *)(a1 + 1520) = v702;
                      *(_DWORD *)(a1 + 1524) = v696;
                      *(_DWORD *)(a1 + 1528) = v93;
                      *(_DWORD *)(a1 + 1488) = v94;
                      v65 = *(unsigned __int8 **)(a1 + 16);
                      v62 = *(__int64 **)(a1 + 224);
                      v3 = *(unsigned __int64 **)(a1 + 240);
                      goto LABEL_61;
                    }
    LABEL_949:
                    v609 = 0;
                  }
                  else
                  {
    LABEL_946:
                    v610 = *v15++;
                    v609 = v610;
                  }
                  LODWORD(v40) = v212 + 8;
                  v39 |= v609 << (56 - (unsigned __int8)v212);
                }
              }
              v5 = v670;
              v4 = v676;
              v211 = v683;
              v2 = v694;
              LODWORD(v36) = v708;
              v92 = v660;
            }
            else
            {
              v93 = v669;
              v2 = v690;
            }
    LABEL_953:
            v223 = lzham::CLZDecompBase::m_lzx_position_extra_bits[v92];
            if ( v223 <= 2 )
            {
              while ( (int)v40 < (int)v223 )
              {
                if ( v15 == *(unsigned __int8 **)(a1 + 32) )
                {
                  if ( *(_BYTE *)(a1 + 48) != 1 )
                  {
                    *(_DWORD *)(a1 + 144) = v38;
                    *(_DWORD *)(a1 + 148) = v698;
                    *(_QWORD *)(a1 + 72) = v39;
                    *(_DWORD *)(a1 + 80) = v40;
                    *(_QWORD *)(a1 + 24) = v15;
                    *(_DWORD *)(a1 + 1580) = v135;
                    *(_DWORD *)(a1 + 1584) = v92;
                    *(_DWORD *)(a1 + 1592) = v223;
                    *(_DWORD *)(a1 + 1512) = v211;
                    *(_DWORD *)(a1 + 1516) = v36;
                    *(_DWORD *)(a1 + 1520) = v702;
                    *(_DWORD *)(a1 + 1524) = v696;
                    *(_DWORD *)(a1 + 1528) = v93;
                    *(_DWORD *)(a1 + 1488) = v94;
                    v108 = *(unsigned __int8 **)(a1 + 16);
                    v105 = *(__int64 **)(a1 + 224);
                    v3 = *(unsigned __int64 **)(a1 + 240);
                    goto LABEL_114;
                  }
                  v224 = 0;
                }
                else
                {
    LABEL_968:
                  v615 = *v15++;
                  v224 = v615;
                }
    LABEL_969:
                v39 |= v224 << (56 - (unsigned __int8)v40);
                LODWORD(v40) = v40 + 8;
              }
              if ( v223 )
                v614 = v39 >> (64 - (unsigned __int8)v223);
              else
                v614 = 0;
              v139 = v39 << v223;
              v140 = (unsigned int)v40 - v223;
            }
            else
            {
              if ( v223 >= 5 )
              {
                while ( 1 )
                {
                  v616 = v223 - 4;
                  v617 = v40 - (v223 - 4);
                  if ( (int)v40 >= (int)(v223 - 4) )
                    break;
                  if ( v15 == *(unsigned __int8 **)(a1 + 32) )
                  {
                    if ( *(_BYTE *)(a1 + 48) != 1 )
                    {
                      *(_DWORD *)(a1 + 144) = v38;
                      *(_DWORD *)(a1 + 148) = v698;
                      *(_QWORD *)(a1 + 72) = v39;
                      *(_DWORD *)(a1 + 80) = v40;
                      *(_QWORD *)(a1 + 24) = v15;
                      *(_DWORD *)(a1 + 1580) = v135;
                      *(_DWORD *)(a1 + 1584) = v92;
                      *(_DWORD *)(a1 + 1592) = v223;
                      *(_DWORD *)(a1 + 1512) = v211;
                      *(_DWORD *)(a1 + 1516) = v36;
                      *(_DWORD *)(a1 + 1520) = v702;
                      *(_DWORD *)(a1 + 1524) = v696;
                      *(_DWORD *)(a1 + 1528) = v93;
                      *(_DWORD *)(a1 + 1488) = v94;
                      v181 = *(unsigned __int8 **)(a1 + 16);
                      v178 = *(__int64 **)(a1 + 224);
                      v3 = *(unsigned __int64 **)(a1 + 240);
                      goto LABEL_184;
                    }
    LABEL_984:
                    v619 = 0;
                  }
                  else
                  {
    LABEL_981:
                    v620 = *v15++;
                    v619 = v620;
                  }
                  v39 |= v619 << (56 - (unsigned __int8)v40);
                  LODWORD(v40) = v40 + 8;
                }
                v684 = v211;
                v618 = v39 >> (68 - (unsigned __int8)v223);
                if ( !v616 )
                  LODWORD(v618) = 0;
                v39 <<= v616;
                v159 = 16 * v618;
                LODWORD(v40) = v617;
              }
              else
              {
                v684 = v211;
                v159 = 0;
              }
              v160 = a1 + 1216;
              v161 = *(_QWORD *)(a1 + 1280);
              if ( (int)v40 <= 23 )
              {
                v85 = *(_QWORD *)(a1 + 32);
                if ( (unsigned __int64)(v15 + 4) >= v85 )
                {
                  while ( (int)v40 <= 23 )
                  {
                    if ( !*(_BYTE *)(a1 + 48) )
                    {
                      *(_QWORD *)(a1 + 160) = v160;
                      *(_DWORD *)(a1 + 144) = v38;
                      *(_DWORD *)(a1 + 148) = v698;
                      *(_QWORD *)(a1 + 72) = v39;
                      *(_DWORD *)(a1 + 80) = v40;
                      *(_QWORD *)(a1 + 24) = v15;
                      *(_DWORD *)(a1 + 1580) = v135;
                      *(_DWORD *)(a1 + 1584) = v92;
                      *(_DWORD *)(a1 + 1588) = v159;
                      *(_DWORD *)(a1 + 1512) = v684;
                      *(_DWORD *)(a1 + 1516) = v36;
                      *(_DWORD *)(a1 + 1520) = v702;
                      *(_DWORD *)(a1 + 1524) = v696;
                      *(_DWORD *)(a1 + 1528) = v93;
                      *(_DWORD *)(a1 + 1488) = v94;
                      v81 = *(unsigned __int8 **)(a1 + 16);
                      v82 = *(__int64 **)(a1 + 224);
                      v3 = *(unsigned __int64 **)(a1 + 240);
                      goto LABEL_1020;
                    }
                    v81 = v15;
    LABEL_989:
                    if ( (unsigned __int64)v81 >= v85 )
                    {
                      v621 = 0;
                    }
                    else
                    {
                      v622 = *v81++;
                      v621 = v622;
                    }
                    v39 |= v621 << (56 - (unsigned __int8)v40);
                    v15 = v81;
                    LODWORD(v40) = v40 + 8;
                  }
                }
                else
                {
                  v39 |= (((unsigned __int64)*v15 << 24)
                        | ((unsigned __int64)v15[1] << 16)
                        | ((unsigned __int64)v15[2] << 8)
                        | v15[3]) << (32 - (unsigned __int8)v40);
                  v15 += 4;
                  LODWORD(v40) = v40 + 32;
                }
              }
              v623 = HIWORD(v39) + 1;
              if ( v623 > *(_DWORD *)(v161 + 16) )
              {
                v661 = v92;
                v624 = v2;
                v716 = v94;
                v682 = v15;
                v647 = *(_DWORD *)(v161 + 20) - 65;
                do
                {
                  v648 = (unsigned int)(v647 + 64);
                  ++v647;
                }
                while ( v623 > *(_DWORD *)(v161 + 4LL * (unsigned int)v648 + 28) );
                v671 = v5;
                v649 = *(int *)(v161 + 4 * v648 + 96) + (__int64)(int)(v39 >> -(char)v647);
                if ( (unsigned int)v649 >= *(_DWORD *)(v160 + 72) )
                  v649 = 0;
                v626 = *(unsigned __int16 *)(*(_QWORD *)(v161 + 184) + 2 * v649);
                v627 = v647 + 64;
              }
              else
              {
                v661 = v92;
                v624 = v2;
                v716 = v94;
                v671 = v5;
                v682 = v15;
                v625 = *(_DWORD *)(*(_QWORD *)(v161 + 168) + 4 * (v39 >> (64 - (unsigned __int8)*(_DWORD *)(v161 + 8))));
                v626 = (unsigned __int16)v625;
                v627 = HIWORD(v625);
              }
              v697 = v159;
              v628 = v135;
              v695 = v624;
              v629 = v40;
              v630 = v39;
              v631 = v38;
              v709 = v36;
              v632 = v93;
              v633 = *(_DWORD *)(v160 + 24);
              if ( v633 <= (unsigned int)v626 )
              {
                v634 = v160;
                lzham_assert(
                  "i < m_size",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                  131);
                v160 = v634;
                v633 = *(_DWORD *)(v634 + 24);
              }
              v677 = v4;
              v635 = *(_QWORD *)(v160 + 16);
              v636 = *(unsigned __int16 *)(v635 + 2LL * (unsigned int)v626) + 1;
              if ( v633 <= (unsigned int)v626 )
              {
                v637 = v160;
                lzham_assert(
                  "i < m_size",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                  131);
                v160 = v637;
                v635 = *(_QWORD *)(v637 + 16);
              }
              *(_WORD *)(v635 + 2 * v626) = v636;
              if ( v636 >= 0x10000 )
              {
                v638 = v160;
                lzham_assert(
                  "freq <= UINT16_MAX",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                  945);
                v160 = v638;
              }
              v139 = v630 << v627;
              v140 = (unsigned int)(v629 - v627);
              v639 = *(_DWORD *)(v160 + 84) - 1;
              *(_DWORD *)(v160 + 84) = v639;
              v93 = v632;
              LODWORD(v38) = v631;
              v135 = v628;
              if ( !v639 )
              {
                lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v160, 0xFFFFFFFF, 0);
                v135 = v628;
                v140 = (unsigned int)(v629 - v627);
                v139 = v630 << v627;
                LODWORD(v38) = v631;
              }
              v614 = v626 + v697;
              v4 = v677;
              v15 = v682;
              v211 = v684;
              v2 = v695;
              v5 = v671;
              LODWORD(v94) = v716;
              LODWORD(v36) = v709;
              v92 = v661;
            }
            v696 = v702;
            v702 = v36;
            v703 = v211;
            if ( v93 >= 7 )
              v50 = 10;
            else
              v50 = 7;
            v49 = (unsigned int)(lzham::CLZDecompBase::m_lzx_position_base[v92] + v614);
            v51 = v698;
    LABEL_1006:
            if ( (int)v49 > (unsigned __int64)(unsigned int)v94 || (v54 = (unsigned int)(v94 + v135), v54 > v5) )
            {
              *(_DWORD *)(a1 + 144) = v38;
              *(_DWORD *)(a1 + 148) = v51;
              *(_QWORD *)(a1 + 72) = v139;
              *(_DWORD *)(a1 + 80) = v140;
              *(_QWORD *)(a1 + 24) = v15;
              **(_QWORD **)(a1 + 224) = &v15[-*(_QWORD *)(a1 + 16)];
              **(_QWORD **)(a1 + 240) = 0;
              goto LABEL_1016;
            }
            v678 = v15;
            v690 = v2;
            v640 = &v4[(unsigned int)(v94 - v49)];
            v641 = &v4[(unsigned int)v94];
            v53 = v140;
            v52 = v139;
            if ( (_DWORD)v49 == 1 )
            {
              v662 = v38;
              v644 = (unsigned __int8)*v640;
              if ( (unsigned int)v135 > 7 )
              {
                v646 = (unsigned int)v135;
              }
              else
              {
                if ( v135 < 1 )
                  goto LABEL_1028;
                if ( ~v135 < -2 || v135 == 1 )
                  v645 = -2;
                else
                  v645 = ~v135;
                v646 = (unsigned int)(v135 + v645 + 1) + 1LL;
              }
              memset(v641, v644, v646);
    LABEL_1028:
              v49 = 1;
            }
            else
            {
              v662 = v38;
              if ( (unsigned int)v135 >= 8 && v135 <= (int)v49 )
              {
                memcpy(v641, v640, (unsigned int)v135);
              }
              else if ( v135 >= 1 )
              {
                v642 = v135 + 1;
                do
                {
                  v643 = *v640++;
                  *v641++ = v643;
                  --v642;
                }
                while ( v642 > 1 );
              }
            }
          }
        }
        *v144 -= *v144 >> 5;
        v216 = v137 - v163;
        v449 = (_WORD *)(a1 + 2LL * (unsigned int)v136 + 1392);
    LABEL_717:
        if ( !HIBYTE(v216) )
        {
          *(_QWORD *)(a1 + 168) = v449;
          while ( 1 )
          {
            if ( (int)v140 > 7 )
            {
              v507 = HIBYTE(v139);
              v139 <<= 8;
              v140 = (unsigned int)(v140 - 8);
              v449 = *(_WORD **)(a1 + 168);
              v216 <<= 8;
              v217 = (unsigned __int8)v507 | (v217 << 8);
              goto LABEL_717;
            }
            if ( v15 == *(unsigned __int8 **)(a1 + 32) )
            {
              if ( *(_BYTE *)(a1 + 48) != 1 )
              {
                *(_DWORD *)(a1 + 144) = v217;
                *(_DWORD *)(a1 + 148) = v216;
                *(_QWORD *)(a1 + 72) = v139;
                *(_DWORD *)(a1 + 80) = v140;
                *(_QWORD *)(a1 + 24) = v15;
                *(_DWORD *)(a1 + 1580) = v135;
                *(_DWORD *)(a1 + 1512) = v49;
                *(_DWORD *)(a1 + 1516) = v703;
                *(_DWORD *)(a1 + 1520) = v702;
                *(_DWORD *)(a1 + 1524) = v696;
                *(_DWORD *)(a1 + 1528) = v136;
                *(_DWORD *)(a1 + 1488) = v94;
                v100 = *(unsigned __int8 **)(a1 + 16);
                v97 = *(__int64 **)(a1 + 224);
                v3 = *(unsigned __int64 **)(a1 + 240);
                goto LABEL_99;
              }
              v218 = 0;
            }
            else
            {
    LABEL_739:
              v508 = *v15++;
              v218 = v508;
            }
    LABEL_740:
            v139 |= v218 << (56 - (unsigned __int8)v140);
            LODWORD(v140) = v140 + 8;
          }
        }
        v501 = (unsigned __int16)*v449;
        v502 = v501 * (v216 >> 11);
        v154 = v217 - v502;
        if ( v217 >= v502 )
        {
          *v449 -= *v449 >> 5;
          v153 = v216 - v502;
          v158 = (_WORD *)(a1 + 2LL * (unsigned int)v136 + 1416);
    LABEL_722:
          if ( !HIBYTE(v153) )
          {
            *(_QWORD *)(a1 + 168) = v158;
            while ( 1 )
            {
              if ( (int)v140 > 7 )
              {
                v157 = HIBYTE(v139);
                v139 <<= 8;
                v140 = (unsigned int)(v140 - 8);
                v158 = *(_WORD **)(a1 + 168);
                v153 <<= 8;
                v154 = (unsigned __int8)v157 | (v154 << 8);
                goto LABEL_722;
              }
              if ( v15 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v154;
                  *(_DWORD *)(a1 + 148) = v153;
                  *(_QWORD *)(a1 + 72) = v139;
                  *(_DWORD *)(a1 + 80) = v140;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_DWORD *)(a1 + 1580) = v135;
                  *(_DWORD *)(a1 + 1512) = v49;
                  *(_DWORD *)(a1 + 1516) = v703;
                  *(_DWORD *)(a1 + 1520) = v702;
                  *(_DWORD *)(a1 + 1524) = v696;
                  *(_DWORD *)(a1 + 1528) = v136;
                  *(_DWORD *)(a1 + 1488) = v94;
                  v76 = *(unsigned __int8 **)(a1 + 16);
                  v73 = *(__int64 **)(a1 + 224);
                  v3 = *(unsigned __int64 **)(a1 + 240);
                  goto LABEL_79;
                }
                v155 = 0;
              }
              else
              {
    LABEL_160:
                v156 = *v15++;
                v155 = v156;
              }
    LABEL_161:
              v139 |= v155 << (56 - (unsigned __int8)v140);
              LODWORD(v140) = v140 + 8;
            }
          }
          v504 = (unsigned __int16)*v158;
          v230 = v504 * (v153 >> 11);
          v505 = v154 - v230;
          if ( v154 >= v230 )
          {
            *v158 -= *v158 >> 5;
            v51 = v153 - v230;
            if ( (unsigned int)v136 >= 7 )
              v50 = 11;
            else
              v50 = 9;
            LODWORD(v38) = v505;
          }
          else
          {
            v686 = v49;
            *v158 = v504 + ((unsigned int)(2048 - v504) >> 5);
            v506 = a1 + ((unsigned __int64)((unsigned int)v136 > 6) << 7);
            v231 = v506 + 704;
            v232 = *(_QWORD *)(v506 + 768);
            if ( (int)v140 <= 23 )
            {
              v117 = *(_QWORD *)(a1 + 32);
              v229 = v703;
              if ( (unsigned __int64)(v15 + 4) >= v117 )
              {
                while ( (int)v140 <= 23 )
                {
                  if ( !*(_BYTE *)(a1 + 48) )
                  {
                    *(_QWORD *)(a1 + 160) = v231;
                    *(_DWORD *)(a1 + 144) = v154;
                    *(_DWORD *)(a1 + 148) = v230;
                    *(_QWORD *)(a1 + 72) = v139;
                    *(_DWORD *)(a1 + 80) = v140;
                    *(_QWORD *)(a1 + 24) = v15;
                    *(_DWORD *)(a1 + 1580) = v135;
                    *(_DWORD *)(a1 + 1512) = v686;
                    *(_DWORD *)(a1 + 1516) = v229;
                    *(_DWORD *)(a1 + 1520) = v702;
                    *(_DWORD *)(a1 + 1524) = v696;
                    *(_DWORD *)(a1 + 1528) = v136;
                    *(_DWORD *)(a1 + 1488) = v94;
                    v113 = *(unsigned __int8 **)(a1 + 16);
                    v114 = *(__int64 **)(a1 + 224);
                    v3 = *(unsigned __int64 **)(a1 + 240);
                    goto LABEL_765;
                  }
                  v113 = v15;
    LABEL_747:
                  if ( (unsigned __int64)v113 >= v117 )
                  {
                    v509 = 0;
                  }
                  else
                  {
                    v510 = *v113++;
                    v509 = v510;
                  }
                  v139 |= v509 << (56 - (unsigned __int8)v140);
                  v15 = v113;
                  LODWORD(v140) = v140 + 8;
                }
              }
              else
              {
                v139 |= (((unsigned __int64)*v15 << 24)
                       | ((unsigned __int64)v15[1] << 16)
                       | ((unsigned __int64)v15[2] << 8)
                       | v15[3]) << (32 - (unsigned __int8)v140);
                v15 += 4;
                LODWORD(v140) = v140 + 32;
              }
            }
            else
            {
              v229 = v703;
            }
            v511 = HIWORD(v139) + 1;
            if ( v511 > *(_DWORD *)(v232 + 16) )
            {
              v701 = v230;
              v667 = v136;
              v713 = v94;
              v527 = *(_DWORD *)(v232 + 20) - 65;
              do
              {
                v528 = (unsigned int)(v527 + 64);
                ++v527;
              }
              while ( v511 > *(_DWORD *)(v232 + 4LL * (unsigned int)v528 + 28) );
              v673 = v4;
              v703 = v229;
              v692 = v2;
              v529 = *(int *)(v232 + 4 * v528 + 96) + (__int64)(int)(v139 >> -(char)v527);
              if ( (unsigned int)v529 >= *(_DWORD *)(v231 + 72) )
                v529 = 0;
              v513 = *(unsigned __int16 *)(*(_QWORD *)(v232 + 184) + 2 * v529);
              v514 = v527 + 64;
            }
            else
            {
              v701 = v230;
              v673 = v4;
              v703 = v229;
              v667 = v136;
              v713 = v94;
              v692 = v2;
              v512 = *(_DWORD *)(*(_QWORD *)(v232 + 168) + 4 * (v139 >> (64 - (unsigned __int8)*(_DWORD *)(v232 + 8))));
              v513 = (unsigned __int16)v512;
              v514 = HIWORD(v512);
            }
            v515 = v140;
            v516 = v139;
            v517 = v154;
            v518 = v5;
            v519 = *(_DWORD *)(v231 + 24);
            if ( v519 <= (unsigned int)v513 )
            {
              v520 = v231;
              lzham_assert(
                "i < m_size",
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                131);
              v231 = v520;
              v519 = *(_DWORD *)(v520 + 24);
            }
            v521 = v15;
            v522 = *(_QWORD *)(v231 + 16);
            v523 = *(unsigned __int16 *)(v522 + 2LL * (unsigned int)v513) + 1;
            if ( v519 <= (unsigned int)v513 )
            {
              v524 = v231;
              lzham_assert(
                "i < m_size",
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                131);
              v231 = v524;
              v522 = *(_QWORD *)(v524 + 16);
            }
            *(_WORD *)(v522 + 2 * v513) = v523;
            if ( v523 >= 0x10000 )
            {
              v525 = v231;
              lzham_assert(
                "freq <= UINT16_MAX",
                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                787);
              v231 = v525;
            }
            v139 = v516 << v514;
            v140 = (unsigned int)(v515 - v514);
            v526 = *(_DWORD *)(v231 + 84) - 1;
            *(_DWORD *)(v231 + 84) = v526;
            v5 = v518;
            LODWORD(v38) = v517;
            if ( !v526 )
            {
              lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v231, 0xFFFFFFFF, 0);
              v140 = (unsigned int)(v515 - v514);
              v139 = v516 << v514;
              LODWORD(v38) = v517;
            }
            v135 = v513 + 2;
            v15 = v521;
            v2 = v692;
            LODWORD(v94) = v713;
            if ( (_DWORD)v513 == 256 )
            {
              v266 = 0;
              v49 = v686;
              v267 = v667;
              v4 = v673;
              v51 = v701;
              while ( 1 )
              {
                v530 = v140 - 1;
                while ( 1 )
                {
                  v269 = v530;
                  v271 = v530 + 1;
                  if ( v530 + 1 <= 0 )
                    break;
                  v268 = 2 * v139;
                  if ( (v139 & 0x8000000000000000LL) != 0 )
                  {
                    ++v266;
                    --v530;
                    v139 *= 2LL;
                    if ( v266 < 3 )
                      continue;
                  }
                  while ( 1 )
                  {
                    v533 = lzham::s_huge_match_code_len[v266];
                    v140 = (unsigned int)(v269 - v533);
                    if ( v269 >= v533 )
                    {
                      v139 = v268 << v533;
                      v135 = lzham::s_huge_match_base_len[v266] + (v268 >> (64 - (unsigned __int8)v533));
                      goto LABEL_784;
                    }
                    if ( v15 == *(unsigned __int8 **)(a1 + 32) )
                    {
                      if ( *(_BYTE *)(a1 + 48) != 1 )
                      {
                        *(_DWORD *)(a1 + 144) = v38;
                        *(_DWORD *)(a1 + 148) = v51;
                        *(_QWORD *)(a1 + 72) = v268;
                        *(_DWORD *)(a1 + 80) = v269;
                        *(_QWORD *)(a1 + 24) = v15;
                        *(_DWORD *)(a1 + 1580) = v266;
                        *(_DWORD *)(a1 + 1512) = v49;
                        *(_DWORD *)(a1 + 1516) = v703;
                        *(_DWORD *)(a1 + 1520) = v702;
                        *(_DWORD *)(a1 + 1524) = v696;
                        *(_DWORD *)(a1 + 1528) = v267;
                        *(_DWORD *)(a1 + 1488) = v94;
                        v69 = *(unsigned __int8 **)(a1 + 16);
                        v66 = *(__int64 **)(a1 + 224);
                        v3 = *(unsigned __int64 **)(a1 + 240);
                        goto LABEL_69;
                      }
                      v270 = 0;
                    }
                    else
                    {
    LABEL_788:
                      v534 = *v15++;
                      v270 = v534;
                    }
    LABEL_789:
                    v535 = 56 - v269;
                    v269 += 8;
                    v268 |= v270 << v535;
                  }
                }
                if ( v15 == *(unsigned __int8 **)(a1 + 32) )
                {
                  if ( *(_BYTE *)(a1 + 48) != 1 )
                  {
                    *(_DWORD *)(a1 + 144) = v38;
                    *(_DWORD *)(a1 + 148) = v51;
                    *(_QWORD *)(a1 + 72) = v139;
                    *(_DWORD *)(a1 + 80) = v271;
                    *(_QWORD *)(a1 + 24) = v15;
                    *(_DWORD *)(a1 + 1580) = v266;
                    *(_DWORD *)(a1 + 1512) = v49;
                    *(_DWORD *)(a1 + 1516) = v703;
                    *(_DWORD *)(a1 + 1520) = v702;
                    *(_DWORD *)(a1 + 1524) = v696;
                    *(_DWORD *)(a1 + 1528) = v267;
                    *(_DWORD *)(a1 + 1488) = v94;
                    v204 = *(unsigned __int8 **)(a1 + 16);
                    v201 = *(__int64 **)(a1 + 224);
                    v3 = *(unsigned __int64 **)(a1 + 240);
                    goto LABEL_209;
                  }
    LABEL_780:
                  v531 = 0;
                }
                else
                {
    LABEL_777:
                  v532 = *v15++;
                  v531 = v532;
                }
                LODWORD(v140) = v271 + 8;
                v139 |= v531 << (56 - (unsigned __int8)v271);
              }
            }
            v49 = v686;
            v267 = v667;
            v4 = v673;
            v51 = v701;
    LABEL_784:
            if ( v267 >= 7 )
              v50 = 11;
            else
              v50 = 8;
          }
        }
        else
        {
          v679 = v501 * (v216 >> 11);
          v700 = v217;
          v688 = v49;
          *v449 = v501 + ((unsigned int)(2048 - v501) >> 5);
          v503 = a1 + ((unsigned __int64)((unsigned int)v136 > 6) << 7);
          v315 = v503 + 704;
          v316 = *(_QWORD *)(v503 + 768);
          if ( (int)v140 <= 23 )
          {
            v209 = *(_QWORD *)(a1 + 32);
            v314 = v703;
            if ( (unsigned __int64)(v15 + 4) >= v209 )
            {
              while ( (int)v140 <= 23 )
              {
                if ( !*(_BYTE *)(a1 + 48) )
                {
                  *(_QWORD *)(a1 + 160) = v315;
                  *(_DWORD *)(a1 + 144) = v700;
                  *(_DWORD *)(a1 + 148) = v679;
                  *(_QWORD *)(a1 + 72) = v139;
                  *(_DWORD *)(a1 + 80) = v140;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_DWORD *)(a1 + 1580) = v135;
                  *(_DWORD *)(a1 + 1512) = v688;
                  *(_DWORD *)(a1 + 1516) = v314;
                  *(_DWORD *)(a1 + 1520) = v702;
                  *(_DWORD *)(a1 + 1524) = v696;
                  *(_DWORD *)(a1 + 1528) = v136;
                  *(_DWORD *)(a1 + 1488) = v94;
                  v205 = *(unsigned __int8 **)(a1 + 16);
                  v206 = *(__int64 **)(a1 + 224);
                  v3 = *(unsigned __int64 **)(a1 + 240);
                  goto LABEL_814;
                }
                v205 = v15;
    LABEL_796:
                if ( (unsigned __int64)v205 >= v209 )
                {
                  v536 = 0;
                }
                else
                {
                  v537 = *v205++;
                  v536 = v537;
                }
                v139 |= v536 << (56 - (unsigned __int8)v140);
                v15 = v205;
                LODWORD(v140) = v140 + 8;
              }
            }
            else
            {
              v139 |= (((unsigned __int64)*v15 << 24)
                     | ((unsigned __int64)v15[1] << 16)
                     | ((unsigned __int64)v15[2] << 8)
                     | v15[3]) << (32 - (unsigned __int8)v140);
              v15 += 4;
              LODWORD(v140) = v140 + 32;
            }
          }
          else
          {
            v314 = v703;
          }
          v538 = HIWORD(v139) + 1;
          if ( v538 > *(_DWORD *)(v316 + 16) )
          {
            v539 = v2;
            v668 = v136;
            v714 = v94;
            v551 = *(_DWORD *)(v316 + 20) - 65;
            do
            {
              v552 = (unsigned int)(v551 + 64);
              ++v551;
            }
            while ( v538 > *(_DWORD *)(v316 + 4LL * (unsigned int)v552 + 28) );
            v674 = v4;
            v553 = *(int *)(v316 + 4 * v552 + 96) + (__int64)(int)(v139 >> -(char)v551);
            if ( (unsigned int)v553 >= *(_DWORD *)(v315 + 72) )
              v553 = 0;
            v541 = *(unsigned __int16 *)(*(_QWORD *)(v316 + 184) + 2 * v553);
            v542 = v551 + 64;
          }
          else
          {
            v668 = v136;
            v674 = v4;
            v539 = v2;
            v714 = v94;
            v540 = *(_DWORD *)(*(_QWORD *)(v316 + 168) + 4 * (v139 >> (64 - (unsigned __int8)*(_DWORD *)(v316 + 8))));
            v541 = (unsigned __int16)v540;
            v542 = HIWORD(v540);
          }
          v543 = v140;
          v544 = v139;
          v706 = v314;
          v693 = v539;
          v545 = v15;
          v546 = *(_DWORD *)(v315 + 24);
          if ( v546 <= (unsigned int)v541 )
          {
            lzham_assert(
              "i < m_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
              131);
            v546 = *(_DWORD *)(v315 + 24);
          }
          v547 = *(_QWORD *)(v315 + 16);
          v548 = *(unsigned __int16 *)(v547 + 2LL * (unsigned int)v541) + 1;
          if ( v546 <= (unsigned int)v541 )
          {
            lzham_assert(
              "i < m_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
              131);
            v547 = *(_QWORD *)(v315 + 16);
          }
          *(_WORD *)(v547 + 2 * v541) = v548;
          if ( v548 >= 0x10000 )
            lzham_assert(
              "freq <= UINT16_MAX",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
              810);
          v139 = v544 << v542;
          v140 = (unsigned int)(v543 - v542);
          v549 = *(_DWORD *)(v315 + 84) - 1;
          *(_DWORD *)(v315 + 84) = v549;
          v15 = v545;
          if ( !v549 )
          {
            lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v315, 0xFFFFFFFF, 0);
            v140 = (unsigned int)(v543 - v542);
            v139 = v544 << v542;
          }
          v135 = v541 + 2;
          LODWORD(v94) = v714;
          if ( (_DWORD)v541 == 256 )
          {
            v273 = 0;
            v274 = v688;
            v272 = v693;
            v276 = v668;
            v4 = v674;
            v275 = v706;
            v278 = v700;
            v277 = v679;
            while ( 1 )
            {
              v554 = v140 - 1;
              v2 = v272;
              while ( 1 )
              {
                v330 = v554;
                v279 = v554 + 1;
                if ( v554 + 1 <= 0 )
                  break;
                v329 = 2 * v139;
                if ( (v139 & 0x8000000000000000LL) != 0 )
                {
                  ++v273;
                  --v554;
                  v139 *= 2LL;
                  if ( v273 < 3 )
                    continue;
                }
                while ( 1 )
                {
                  v557 = lzham::s_huge_match_code_len[v273];
                  v140 = (unsigned int)(v330 - v557);
                  if ( v330 >= v557 )
                  {
                    v550 = v2;
                    v139 = v329 << v557;
                    v135 = lzham::s_huge_match_base_len[v273] + (v329 >> (64 - (unsigned __int8)v557));
                    goto LABEL_834;
                  }
                  if ( v15 == *(unsigned __int8 **)(a1 + 32) )
                  {
                    if ( *(_BYTE *)(a1 + 48) != 1 )
                    {
                      *(_DWORD *)(a1 + 144) = v278;
                      *(_DWORD *)(a1 + 148) = v277;
                      *(_QWORD *)(a1 + 72) = v329;
                      *(_DWORD *)(a1 + 80) = v330;
                      *(_QWORD *)(a1 + 24) = v15;
                      *(_DWORD *)(a1 + 1580) = v273;
                      *(_DWORD *)(a1 + 1512) = v274;
                      *(_DWORD *)(a1 + 1516) = v275;
                      *(_DWORD *)(a1 + 1520) = v702;
                      *(_DWORD *)(a1 + 1524) = v696;
                      *(_DWORD *)(a1 + 1528) = v276;
                      *(_DWORD *)(a1 + 1488) = v94;
                      v228 = *(unsigned __int8 **)(a1 + 16);
                      v225 = *(__int64 **)(a1 + 224);
                      v3 = *(unsigned __int64 **)(a1 + 240);
                      goto LABEL_232;
                    }
                    v331 = 0;
                  }
                  else
                  {
    LABEL_836:
                    v559 = *v15++;
                    v331 = v559;
                  }
    LABEL_837:
                  v560 = 56 - v330;
                  v330 += 8;
                  v329 |= v331 << v560;
                }
              }
              if ( v15 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v278;
                  *(_DWORD *)(a1 + 148) = v277;
                  *(_QWORD *)(a1 + 72) = v139;
                  *(_DWORD *)(a1 + 80) = v279;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_DWORD *)(a1 + 1580) = v273;
                  *(_DWORD *)(a1 + 1512) = v274;
                  *(_DWORD *)(a1 + 1516) = v275;
                  *(_DWORD *)(a1 + 1520) = v702;
                  *(_DWORD *)(a1 + 1524) = v696;
                  *(_DWORD *)(a1 + 1528) = v276;
                  *(_DWORD *)(a1 + 1488) = v94;
                  v112 = *(unsigned __int8 **)(a1 + 16);
                  v109 = *(__int64 **)(a1 + 224);
                  v3 = *(unsigned __int64 **)(a1 + 240);
                  goto LABEL_829;
                }
    LABEL_830:
                v555 = 0;
              }
              else
              {
    LABEL_826:
                v556 = *v15++;
                v555 = v556;
              }
              LODWORD(v140) = v279 + 8;
              v139 |= v555 << (56 - (unsigned __int8)v279);
            }
          }
          v274 = v688;
          v550 = v693;
          v276 = v668;
          v4 = v674;
          v275 = v706;
          v278 = v700;
          v277 = v679;
    LABEL_834:
          v558 = (_WORD *)(a1 + 2LL * v276 + 1440);
    LABEL_841:
          if ( !HIBYTE(v277) )
          {
            *(_QWORD *)(a1 + 168) = v558;
            v2 = v550;
            while ( 1 )
            {
              if ( (int)v140 > 7 )
              {
                v550 = v2;
                v563 = HIBYTE(v139);
                v139 <<= 8;
                v140 = (unsigned int)(v140 - 8);
                v558 = *(_WORD **)(a1 + 168);
                v277 <<= 8;
                v278 = (unsigned __int8)v563 | (v278 << 8);
                goto LABEL_841;
              }
              if ( v15 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v278;
                  *(_DWORD *)(a1 + 148) = v277;
                  *(_QWORD *)(a1 + 72) = v139;
                  *(_DWORD *)(a1 + 80) = v140;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_DWORD *)(a1 + 1580) = v135;
                  *(_DWORD *)(a1 + 1512) = v274;
                  *(_DWORD *)(a1 + 1516) = v275;
                  *(_DWORD *)(a1 + 1520) = v702;
                  *(_DWORD *)(a1 + 1524) = v696;
                  *(_DWORD *)(a1 + 1528) = v276;
                  *(_DWORD *)(a1 + 1488) = v94;
                  v185 = *(unsigned __int8 **)(a1 + 16);
                  v182 = *(__int64 **)(a1 + 224);
                  v3 = *(unsigned __int64 **)(a1 + 240);
                  goto LABEL_189;
                }
                v294 = 0;
              }
              else
              {
    LABEL_849:
                v564 = *v15++;
                v294 = v564;
              }
    LABEL_850:
              v139 |= v294 << (56 - (unsigned __int8)v140);
              LODWORD(v140) = v140 + 8;
            }
          }
          v561 = (unsigned __int16)*v558;
          v333 = v561 * (v277 >> 11);
          LODWORD(v38) = v278 - v333;
          v2 = v550;
          if ( v278 >= v333 )
          {
            *v558 -= *v558 >> 5;
            v51 = v277 - v333;
          }
          else
          {
            *v558 = v561 + ((unsigned int)(2048 - v561) >> 5);
            v562 = (_WORD *)(a1 + 2LL * v276 + 1464);
            v332 = v702;
            v702 = v275;
    LABEL_854:
            if ( !HIBYTE(v333) )
            {
              *(_QWORD *)(a1 + 168) = v562;
              while ( 1 )
              {
                if ( (int)v140 > 7 )
                {
                  v567 = HIBYTE(v139);
                  v139 <<= 8;
                  v140 = (unsigned int)(v140 - 8);
                  v562 = *(_WORD **)(a1 + 168);
                  v333 <<= 8;
                  v278 = (unsigned __int8)v567 | (v278 << 8);
                  goto LABEL_854;
                }
                if ( v15 == *(unsigned __int8 **)(a1 + 32) )
                {
                  if ( *(_BYTE *)(a1 + 48) != 1 )
                  {
                    *(_DWORD *)(a1 + 144) = v278;
                    *(_DWORD *)(a1 + 148) = v333;
                    *(_QWORD *)(a1 + 72) = v139;
                    *(_DWORD *)(a1 + 80) = v140;
                    *(_QWORD *)(a1 + 24) = v15;
                    *(_DWORD *)(a1 + 1580) = v135;
                    *(_DWORD *)(a1 + 1512) = v274;
                    *(_DWORD *)(a1 + 1516) = v702;
                    *(_DWORD *)(a1 + 1520) = v332;
                    *(_DWORD *)(a1 + 1524) = v696;
                    *(_DWORD *)(a1 + 1528) = v276;
                    *(_DWORD *)(a1 + 1488) = v94;
                    v247 = *(unsigned __int8 **)(a1 + 16);
                    v244 = *(__int64 **)(a1 + 224);
                    v3 = *(unsigned __int64 **)(a1 + 240);
                    goto LABEL_249;
                  }
                  v334 = 0;
                }
                else
                {
    LABEL_872:
                  v568 = *v15++;
                  v334 = v568;
                }
    LABEL_873:
                v139 |= v334 << (56 - (unsigned __int8)v140);
                LODWORD(v140) = v140 + 8;
              }
            }
            v565 = (unsigned __int16)*v562;
            v566 = v565 * (v333 >> 11);
            LODWORD(v38) = v278 - v566;
            if ( v278 < v566 )
            {
              *v562 = v565 + ((unsigned int)(2048 - v565) >> 5);
              v51 = v565 * (v333 >> 11);
              LODWORD(v38) = v278;
            }
            else
            {
              *v562 -= *v562 >> 5;
              v51 = v333 - v566;
            }
            if ( v278 < v566 )
              v275 = v696;
            else
              v275 = v332;
            if ( v278 >= v566 )
              v332 = v696;
            v696 = v332;
          }
          if ( v276 >= 7 )
            v50 = 11;
          else
            v50 = 8;
          v703 = v274;
          v49 = v275;
        }
        goto LABEL_1006;
      }
      if ( v6 )
        return *(unsigned int *)(a1 + 312);
      if ( !(unsigned int)lzham::symbol_codec::start_decoding(
                            (InputSystem *)(a1 + 16),
                            *(const unsigned __int8 **)(a1 + 216),
                            **(_QWORD **)(a1 + 224),
                            *(_BYTE *)(a1 + 248),
                            0,
                            0) )
        return 4;
      v710 = 0;
      v7 = 0;
      v696 = 0;
      v702 = 0;
      v8 = 0;
      v9 = 0;
      v10 = *(unsigned int *)(a1 + 144);
      v698 = *(_DWORD *)(a1 + 148);
      v11 = *(_QWORD *)(a1 + 72);
      v12 = *(_DWORD *)(a1 + 80);
      v13 = *(unsigned __int8 **)(a1 + 24);
      if ( (*(_BYTE *)(a1 + 284) & 4) != 0 )
      {
        while ( v12 <= 7 )
        {
          if ( v13 == *(unsigned __int8 **)(a1 + 32) )
          {
            if ( *(_BYTE *)(a1 + 48) != 1 )
            {
              *(_DWORD *)(a1 + 144) = v10;
              *(_DWORD *)(a1 + 148) = v698;
              *(_QWORD *)(a1 + 72) = v11;
              *(_DWORD *)(a1 + 80) = v12;
              *(_QWORD *)(a1 + 24) = v13;
              *(_DWORD *)(a1 + 1512) = v9;
              *(_DWORD *)(a1 + 1516) = v8;
              *(_DWORD *)(a1 + 1520) = v702;
              *(_DWORD *)(a1 + 1524) = v696;
              *(_DWORD *)(a1 + 1528) = v7;
              *(_DWORD *)(a1 + 1488) = v710;
              v260 = *(unsigned __int8 **)(a1 + 16);
              v257 = *(__int64 **)(a1 + 224);
              v3 = *(unsigned __int64 **)(a1 + 240);
              goto LABEL_265;
            }
            v317 = 0;
          }
          else
          {
    LABEL_442:
            v391 = *v13++;
            v317 = v391;
          }
    LABEL_443:
          v11 |= v317 << (56 - (unsigned __int8)v12);
          v12 += 8;
        }
        *(_DWORD *)(a1 + 1640) = HIBYTE(v11);
        v311 = v11 << 8;
        for ( i = v12 - 8; i <= 7; i += 8 )
        {
          if ( v13 == *(unsigned __int8 **)(a1 + 32) )
          {
            if ( *(_BYTE *)(a1 + 48) != 1 )
            {
              *(_DWORD *)(a1 + 144) = v10;
              *(_DWORD *)(a1 + 148) = v698;
              *(_QWORD *)(a1 + 72) = v311;
              *(_DWORD *)(a1 + 80) = i;
              *(_QWORD *)(a1 + 24) = v13;
              *(_DWORD *)(a1 + 1512) = v9;
              *(_DWORD *)(a1 + 1516) = v8;
              *(_DWORD *)(a1 + 1520) = v702;
              *(_DWORD *)(a1 + 1524) = v696;
              *(_DWORD *)(a1 + 1528) = v7;
              *(_DWORD *)(a1 + 1488) = v710;
              v61 = *(unsigned __int8 **)(a1 + 16);
              v58 = *(__int64 **)(a1 + 224);
              v3 = *(unsigned __int64 **)(a1 + 240);
              goto LABEL_54;
            }
            v313 = 0;
          }
          else
          {
    LABEL_474:
            v403 = *v13++;
            v313 = v403;
          }
    LABEL_475:
          v404 = 56 - i;
          v311 |= v313 << v404;
        }
        *(_DWORD *)(a1 + 1644) = HIBYTE(v311);
        v392 = HIBYTE(v311) | (*(_DWORD *)(a1 + 1640) << 8);
        if ( v392 != 31 * (v392 / 0x1F) || (*(_DWORD *)(a1 + 1640) & 0xF) != 14 )
          return 11;
        if ( (v311 & 0x2000000000000000LL) != 0 )
          return 12;
        v12 = i - 8;
        v11 = v311 << 8;
      }
    LABEL_456:
      v680 = v13;
      v665 = v7;
      v691 = v2;
      v705 = v8;
      v394 = *(_DWORD *)(a1 + 304);
      v395 = *(_DWORD *)(a1 + 308);
      v396 = v12;
      v397 = v11;
      v398 = v10;
      if ( !*(_QWORD *)(a1 + 304) )
      {
        v399 = *(_DWORD *)(a1 + 280);
        if ( !v399 )
          v399 = 8;
        if ( v399 <= 0x14 )
          v400 = v399;
        else
          v400 = 20;
        v401 = (unsigned __int16 *)((char *)&lzham::g_table_update_settings + 4 * (unsigned int)(v400 - 1));
        v394 = *v401;
        v395 = v401[1];
      }
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::init2(a1 + 320, 0, 0x100u, v394, v395, 0) )
        return 4;
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::assign(a1 + 448, a1 + 320) )
        return 4;
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::init2(
                            a1 + 576,
                            0,
                            8 * *(_DWORD *)(a1 + 12) - 6,
                            v394,
                            v395,
                            0) )
        return 4;
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::init2(a1 + 704, 0, 0x101u, v394, v395, 0) )
        return 4;
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::assign(a1 + 832, a1 + 704) )
        return 4;
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::init2(a1 + 960, 0, 0xFAu, v394, v395, 0) )
        return 4;
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::assign(a1 + 1088, a1 + 960) )
        return 4;
      v402 = lzham::raw_quasi_adaptive_huffman_data_model::init2(a1 + 1216, 0, 0x10u, v394, v395, 0);
      v35 = v9;
      v37 = v665;
      v36 = v705;
      v38 = v398;
      v2 = v691;
      v39 = v397;
      LODWORD(v40) = v396;
      v15 = v680;
      if ( !v402 )
        return 4;
      while ( 1 )
      {
        while ( (int)v40 <= 1 )
        {
          if ( v15 == *(unsigned __int8 **)(a1 + 32) )
          {
            if ( *(_BYTE *)(a1 + 48) != 1 )
            {
              *(_DWORD *)(a1 + 144) = v38;
              *(_DWORD *)(a1 + 148) = v698;
              *(_QWORD *)(a1 + 72) = v39;
              *(_DWORD *)(a1 + 80) = v40;
              *(_QWORD *)(a1 + 24) = v15;
              *(_DWORD *)(a1 + 1512) = v35;
              *(_DWORD *)(a1 + 1516) = v36;
              *(_DWORD *)(a1 + 1520) = v702;
              *(_DWORD *)(a1 + 1524) = v696;
              *(_DWORD *)(a1 + 1528) = v37;
              *(_DWORD *)(a1 + 1488) = v710;
              v148 = *(unsigned __int8 **)(a1 + 16);
              v145 = *(__int64 **)(a1 + 224);
              v3 = *(unsigned __int64 **)(a1 + 240);
              goto LABEL_153;
            }
            v357 = 0;
          }
          else
          {
    LABEL_489:
            v407 = *v15++;
            v357 = v407;
          }
    LABEL_490:
          v39 |= v357 << (56 - (unsigned __int8)v40);
          LODWORD(v40) = v40 + 8;
        }
        v358 = 0;
        v405 = v39 >> 62;
        *(_DWORD *)(a1 + 1536) = v39 >> 62;
        v39 *= 4LL;
        LODWORD(v40) = v40 - 2;
        if ( (_DWORD)v405 == 2 )
          break;
        switch ( (_DWORD)v405 )
        {
          case 1:
            v690 = v2;
            v363 = 0;
    LABEL_494:
            if ( v358 > 3 )
            {
              v50 = 0;
              v54 = v710;
              *(_DWORD *)(a1 + 1532) = v710;
              v696 = 1;
              v51 = -1;
              v702 = 1;
              v703 = 1;
              v49 = 1;
              while ( 1 )
              {
                if ( (int)v40 > 1 )
                {
                  v678 = v15;
                  v662 = v363;
                  v53 = (unsigned int)(v40 - 2);
                  v52 = 4 * v39;
                  if ( v39 >> 62 == 2 )
                  {
                    lzham::lzham_decompressor::reset_huff_tables((std::string *)a1);
                    lzham::lzham_decompressor::reset_arith_tables((std::string *)a1);
                  }
                  else if ( v39 >> 62 == 1 )
                  {
                    lzham::lzham_decompressor::reset_huffman_table_update_rates((std::string *)a1);
                  }
                  goto LABEL_631;
                }
                if ( v15 == *(unsigned __int8 **)(a1 + 32) )
                {
                  if ( *(_BYTE *)(a1 + 48) != 1 )
                  {
                    *(_DWORD *)(a1 + 144) = v363;
                    *(_DWORD *)(a1 + 148) = v51;
                    *(_QWORD *)(a1 + 72) = v39;
                    *(_DWORD *)(a1 + 80) = v40;
                    *(_QWORD *)(a1 + 24) = v15;
                    *(_DWORD *)(a1 + 1512) = v49;
                    *(_DWORD *)(a1 + 1516) = v703;
                    *(_DWORD *)(a1 + 1520) = v702;
                    *(_DWORD *)(a1 + 1524) = v696;
                    *(_DWORD *)(a1 + 1528) = v50;
                    *(_DWORD *)(a1 + 1488) = v54;
                    v344 = *(unsigned __int8 **)(a1 + 16);
                    v341 = *(__int64 **)(a1 + 224);
                    v3 = *(unsigned __int64 **)(a1 + 240);
                    goto LABEL_506;
                  }
                  v384 = 0;
                }
                else
                {
    LABEL_502:
                  v408 = *v15++;
                  v384 = v408;
                }
    LABEL_503:
                v39 |= v384 << (56 - (unsigned __int8)v40);
                LODWORD(v40) = v40 + 8;
              }
            }
            while ( 1 )
            {
              if ( (int)v40 > 7 )
              {
                v441 = HIBYTE(v39);
                v39 <<= 8;
                LODWORD(v40) = v40 - 8;
                ++v358;
                v363 = (unsigned __int8)v441 | (v363 << 8);
                goto LABEL_494;
              }
              if ( v15 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v363;
                  *(_DWORD *)(a1 + 148) = v358;
                  *(_QWORD *)(a1 + 72) = v39;
                  *(_DWORD *)(a1 + 80) = v40;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_DWORD *)(a1 + 1512) = v35;
                  *(_DWORD *)(a1 + 1516) = v36;
                  *(_DWORD *)(a1 + 1520) = v702;
                  *(_DWORD *)(a1 + 1524) = v696;
                  *(_DWORD *)(a1 + 1528) = v37;
                  *(_DWORD *)(a1 + 1488) = v710;
                  v310 = *(unsigned __int8 **)(a1 + 16);
                  v307 = *(__int64 **)(a1 + 224);
                  v3 = *(unsigned __int64 **)(a1 + 240);
                  goto LABEL_305;
                }
                v364 = 0;
              }
              else
              {
    LABEL_626:
                v442 = *v15++;
                v364 = v442;
              }
    LABEL_627:
              v39 |= v364 << (56 - (unsigned __int8)v40);
              LODWORD(v40) = v40 + 8;
            }
          case 0:
            while ( (int)v40 <= 1 )
            {
              if ( v15 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v38;
                  *(_DWORD *)(a1 + 148) = v698;
                  *(_QWORD *)(a1 + 72) = v39;
                  *(_DWORD *)(a1 + 80) = v40;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_DWORD *)(a1 + 1512) = v35;
                  *(_DWORD *)(a1 + 1516) = v36;
                  *(_DWORD *)(a1 + 1520) = v702;
                  *(_DWORD *)(a1 + 1524) = v696;
                  *(_DWORD *)(a1 + 1528) = v37;
                  *(_DWORD *)(a1 + 1488) = v710;
                  v324 = *(unsigned __int8 **)(a1 + 16);
                  v321 = *(__int64 **)(a1 + 224);
                  v3 = *(unsigned __int64 **)(a1 + 240);
                  goto LABEL_521;
                }
                v379 = 0;
              }
              else
              {
    LABEL_517:
                v412 = *v15++;
                v379 = v412;
              }
    LABEL_518:
              v39 |= v379 << (56 - (unsigned __int8)v40);
              LODWORD(v40) = v40 + 8;
            }
            v409 = v2;
            v410 = v38;
            v689 = v35;
            *(_DWORD *)(a1 + 1652) = v39 >> 62;
            v360 = 4 * v39;
            v361 = v40 - 2;
            if ( v39 >> 62 == 2 )
            {
              v411 = v36;
              lzham::lzham_decompressor::reset_huff_tables((std::string *)a1);
              lzham::lzham_decompressor::reset_arith_tables((std::string *)a1);
              goto LABEL_513;
            }
            if ( v39 >> 62 == 1 )
            {
              v411 = v36;
              lzham::lzham_decompressor::reset_huffman_table_update_rates((std::string *)a1);
    LABEL_513:
              v36 = v411;
            }
            v38 = v410;
            v2 = v409;
            if ( (v361 & 7) != 0 )
            {
              while ( 1 )
              {
                v413 = v361 & 7;
                if ( v361 >= v413 )
                {
                  v360 <<= v413;
                  v361 -= v413;
                  break;
                }
                if ( v15 == *(unsigned __int8 **)(a1 + 32) )
                {
                  if ( *(_BYTE *)(a1 + 48) != 1 )
                  {
                    *(_DWORD *)(a1 + 144) = v38;
                    *(_DWORD *)(a1 + 148) = v698;
                    *(_QWORD *)(a1 + 72) = v360;
                    *(_DWORD *)(a1 + 80) = v361;
                    *(_QWORD *)(a1 + 24) = v15;
                    *(_DWORD *)(a1 + 1512) = v689;
                    *(_DWORD *)(a1 + 1516) = v36;
                    *(_DWORD *)(a1 + 1520) = v702;
                    *(_DWORD *)(a1 + 1524) = v696;
                    *(_DWORD *)(a1 + 1528) = v37;
                    *(_DWORD *)(a1 + 1488) = v710;
                    v283 = *(unsigned __int8 **)(a1 + 16);
                    v280 = *(__int64 **)(a1 + 224);
                    v3 = *(unsigned __int64 **)(a1 + 240);
                    goto LABEL_281;
                  }
                  v362 = 0;
                }
                else
                {
    LABEL_526:
                  v414 = *v15++;
                  v362 = v414;
                }
    LABEL_527:
                v415 = 56 - v361;
                v361 += 8;
                v360 |= v362 << v415;
              }
            }
            while ( v361 <= 15 )
            {
              if ( v15 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v38;
                  *(_DWORD *)(a1 + 148) = v698;
                  *(_QWORD *)(a1 + 72) = v360;
                  *(_DWORD *)(a1 + 80) = v361;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_DWORD *)(a1 + 1512) = v689;
                  *(_DWORD *)(a1 + 1516) = v36;
                  *(_DWORD *)(a1 + 1520) = v702;
                  *(_DWORD *)(a1 + 1524) = v696;
                  *(_DWORD *)(a1 + 1528) = v37;
                  *(_DWORD *)(a1 + 1488) = v710;
                  v340 = *(unsigned __int8 **)(a1 + 16);
                  v337 = *(__int64 **)(a1 + 224);
                  v3 = *(unsigned __int64 **)(a1 + 240);
                  goto LABEL_540;
                }
    LABEL_541:
                v417 = 0;
              }
              else
              {
    LABEL_537:
                v418 = *v15++;
                v417 = v418;
              }
              v419 = 56 - v361;
              v361 += 8;
              v360 |= v417 << v419;
            }
            v369 = v360 << 16;
            v370 = v361 - 16;
            if ( HIWORD(v360) )
            {
              *(_DWORD *)(a1 + 144) = v38;
              *(_DWORD *)(a1 + 148) = v698;
              *(_QWORD *)(a1 + 72) = v369;
              *(_DWORD *)(a1 + 80) = v370;
              *(_QWORD *)(a1 + 24) = v15;
              **(_QWORD **)(a1 + 224) = &v15[-*(_QWORD *)(a1 + 16)];
              **(_QWORD **)(a1 + 240) = 0;
              goto LABEL_534;
            }
            v35 = v689;
            while ( v370 <= 15 )
            {
              if ( v15 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v38;
                  *(_DWORD *)(a1 + 148) = v698;
                  *(_QWORD *)(a1 + 72) = v369;
                  *(_DWORD *)(a1 + 80) = v370;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_DWORD *)(a1 + 1512) = v35;
                  *(_DWORD *)(a1 + 1516) = v36;
                  *(_DWORD *)(a1 + 1520) = v702;
                  *(_DWORD *)(a1 + 1524) = v696;
                  *(_DWORD *)(a1 + 1528) = v37;
                  *(_DWORD *)(a1 + 1488) = v710;
                  v236 = *(unsigned __int8 **)(a1 + 16);
                  v233 = *(__int64 **)(a1 + 224);
                  v3 = *(unsigned __int64 **)(a1 + 240);
                  goto LABEL_557;
                }
                v371 = 0;
              }
              else
              {
    LABEL_553:
                v422 = *v15++;
                v371 = v422;
              }
    LABEL_554:
              v423 = 56 - v370;
              v370 += 8;
              v369 |= v371 << v423;
            }
            v39 = v369 << 16;
            LODWORD(v40) = v370 - 16;
            if ( v369 <= 0xFFFEFFFFFFFFFFFFLL )
            {
              *(_DWORD *)(a1 + 144) = v38;
              *(_DWORD *)(a1 + 148) = v698;
              *(_QWORD *)(a1 + 72) = v39;
              *(_DWORD *)(a1 + 80) = v40;
              *(_QWORD *)(a1 + 24) = v15;
              **(_QWORD **)(a1 + 224) = &v15[-*(_QWORD *)(a1 + 16)];
              **(_QWORD **)(a1 + 240) = 0;
              goto LABEL_546;
            }
            if ( (*(_DWORD *)(a1 + 1652) & 0xFFFFFFFE) == 2 )
            {
              *(_DWORD *)(a1 + 144) = v38;
              *(_DWORD *)(a1 + 148) = v698;
              *(_QWORD *)(a1 + 72) = v39;
              *(_DWORD *)(a1 + 80) = v40;
              *(_QWORD *)(a1 + 24) = v15;
              v420 = *(_DWORD *)(a1 + 1492);
              if ( (unsigned int)v710 < v420 )
              {
                v421 = v36;
                lzham_assert(
                  "dst_ofs >= m_dst_highwater_ofs",
                  "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                  479);
                LODWORD(v36) = v421;
                v15 = *(unsigned __int8 **)(a1 + 24);
                v420 = *(_DWORD *)(a1 + 1492);
              }
              **(_QWORD **)(a1 + 224) = &v15[-*(_QWORD *)(a1 + 16)];
              **(_QWORD **)(a1 + 240) = (unsigned int)v710 - v420;
              *(_DWORD *)(a1 + 1492) = v710;
              *(_DWORD *)(a1 + 1512) = v35;
              *(_DWORD *)(a1 + 1516) = v36;
              *(_DWORD *)(a1 + 1520) = v702;
              *(_DWORD *)(a1 + 1524) = v696;
              *(_DWORD *)(a1 + 1528) = v37;
              *(_DWORD *)(a1 + 1488) = v710;
              *(_DWORD *)a1 = 496;
              return 0;
            }
            goto LABEL_610;
          case 3:
            v406 = 3;
            break;
          default:
            v406 = 7;
            break;
        }
        *(_DWORD *)(a1 + 312) = v406;
    LABEL_610:
        ++*(_DWORD *)(a1 + 1508);
        v41 = *(_DWORD *)(a1 + 312);
        if ( v41 )
        {
    LABEL_611:
          if ( v41 == 3 )
          {
            v193 = v702;
            v194 = v696;
            if ( (v40 & 7) == 0 )
              goto LABEL_1036;
            while ( 1 )
            {
              v437 = v40 & 7;
              if ( (int)v40 >= v437 )
                break;
              if ( v15 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v38;
                  *(_DWORD *)(a1 + 148) = v698;
                  *(_QWORD *)(a1 + 72) = v39;
                  *(_DWORD *)(a1 + 80) = v40;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_DWORD *)(a1 + 1512) = v35;
                  *(_DWORD *)(a1 + 1516) = v36;
                  *(_DWORD *)(a1 + 1520) = v193;
                  *(_DWORD *)(a1 + 1524) = v194;
                  *(_DWORD *)(a1 + 1528) = v37;
                  *(_DWORD *)(a1 + 1488) = v710;
                  v126 = *(unsigned __int8 **)(a1 + 16);
                  v123 = *(__int64 **)(a1 + 224);
                  v3 = *(unsigned __int64 **)(a1 + 240);
    LABEL_133:
                  *v123 = v15 - v126;
                  *v3 = 0;
                  v19 = 1080;
                  goto LABEL_447;
                }
                v195 = 0;
              }
              else
              {
    LABEL_200:
                v196 = *v15++;
                v195 = v196;
              }
    LABEL_201:
              v39 |= v195 << (56 - (unsigned __int8)v40);
              LODWORD(v40) = v40 + 8;
            }
            v39 <<= v437;
            LODWORD(v40) = v40 - v437;
    LABEL_1036:
            while ( (int)v40 <= 15 )
            {
              if ( v15 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v38;
                  *(_DWORD *)(a1 + 148) = v698;
                  *(_QWORD *)(a1 + 72) = v39;
                  *(_DWORD *)(a1 + 80) = v40;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_DWORD *)(a1 + 1512) = v35;
                  *(_DWORD *)(a1 + 1516) = v36;
                  *(_DWORD *)(a1 + 1520) = v193;
                  *(_DWORD *)(a1 + 1524) = v194;
                  *(_DWORD *)(a1 + 1528) = v37;
                  *(_DWORD *)(a1 + 1488) = v710;
                  v130 = *(unsigned __int8 **)(a1 + 16);
                  v127 = *(__int64 **)(a1 + 224);
                  v3 = *(unsigned __int64 **)(a1 + 240);
    LABEL_137:
                  *v127 = v15 - v130;
                  *v3 = 0;
                  v19 = 1082;
                  goto LABEL_447;
                }
                v197 = 0;
              }
              else
              {
    LABEL_1039:
                v650 = *v15++;
                v197 = v650;
              }
    LABEL_1040:
              v39 |= v197 << (56 - (unsigned __int8)v40);
              LODWORD(v40) = v40 + 8;
            }
            *(_DWORD *)(a1 + 1572) = HIWORD(v39);
            v198 = v39 << 16;
            for ( j = v40 - 16; j <= 15; j += 8 )
            {
              if ( v15 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v38;
                  *(_DWORD *)(a1 + 148) = v698;
                  *(_QWORD *)(a1 + 72) = v198;
                  *(_DWORD *)(a1 + 80) = j;
                  *(_QWORD *)(a1 + 24) = v15;
                  *(_DWORD *)(a1 + 1512) = v35;
                  *(_DWORD *)(a1 + 1516) = v36;
                  *(_DWORD *)(a1 + 1520) = v193;
                  *(_DWORD *)(a1 + 1524) = v194;
                  *(_DWORD *)(a1 + 1528) = v37;
                  *(_DWORD *)(a1 + 1488) = v710;
                  v134 = *(unsigned __int8 **)(a1 + 16);
                  v131 = *(__int64 **)(a1 + 224);
                  v3 = *(unsigned __int64 **)(a1 + 240);
    LABEL_141:
                  *v131 = v15 - v134;
                  *v3 = 0;
                  v19 = 1083;
                  goto LABEL_447;
                }
                v200 = 0;
              }
              else
              {
    LABEL_1053:
                v658 = *v15++;
                v200 = v658;
              }
    LABEL_1054:
              v659 = 56 - j;
              v198 |= v200 << v659;
            }
            v651 = (unsigned __int8 *)v4;
            v39 = v198 << 16;
            LODWORD(v40) = j - 16;
            v652 = HIWORD(v198) | ((unsigned __int16)*(_DWORD *)(a1 + 1572) << 16);
            *(_DWORD *)(a1 + 1572) = v652;
            if ( (*(_BYTE *)(a1 + 284) & 2) == 0 )
            {
              *(_DWORD *)(a1 + 208) = v652;
              goto LABEL_1047;
            }
            v654 = j - 16;
            v655 = v198 << 16;
            v656 = v38;
            v653 = v710;
            v657 = lzham::adler32(v651, (unsigned int)v710, 1u);
            *(_DWORD *)(a1 + 208) = v657;
            if ( *(_DWORD *)(a1 + 1572) != v657 )
              *(_DWORD *)(a1 + 312) = 8;
            LODWORD(v38) = v656;
            v39 = v655;
            LODWORD(v40) = v654;
          }
          else
          {
    LABEL_1047:
            v653 = v710;
          }
          *(_DWORD *)(a1 + 144) = v38;
          *(_DWORD *)(a1 + 148) = v698;
          *(_QWORD *)(a1 + 72) = v39;
          *(_DWORD *)(a1 + 80) = v40;
          *(_QWORD *)(a1 + 24) = v15;
          **(_QWORD **)(a1 + 224) = lzham::symbol_codec::stop_decoding(v2);
          **(_QWORD **)(a1 + 240) = (unsigned int)(v653 - *(_DWORD *)(a1 + 1492));
          *(_DWORD *)(a1 + 1492) = v653;
          v25 = 1110;
          goto LABEL_26;
        }
      }
      while ( (int)v40 <= 23 )
      {
        if ( v15 == *(unsigned __int8 **)(a1 + 32) )
        {
          if ( *(_BYTE *)(a1 + 48) != 1 )
          {
            *(_DWORD *)(a1 + 144) = v38;
            *(_DWORD *)(a1 + 148) = v698;
            *(_QWORD *)(a1 + 72) = v39;
            *(_DWORD *)(a1 + 80) = v40;
            *(_QWORD *)(a1 + 24) = v15;
            *(_DWORD *)(a1 + 1608) = v358;
            *(_DWORD *)(a1 + 1512) = v35;
            *(_DWORD *)(a1 + 1516) = v36;
            *(_DWORD *)(a1 + 1520) = v702;
            *(_DWORD *)(a1 + 1524) = v696;
            *(_DWORD *)(a1 + 1528) = v37;
            *(_DWORD *)(a1 + 1488) = v710;
            v222 = *(unsigned __int8 **)(a1 + 16);
            v219 = *(__int64 **)(a1 + 224);
            v3 = *(unsigned __int64 **)(a1 + 240);
            goto LABEL_225;
          }
          v359 = 0;
        }
        else
        {
    LABEL_562:
          v424 = *v15++;
          v359 = v424;
        }
    LABEL_563:
        v39 |= v359 << (56 - (unsigned __int8)v40);
        LODWORD(v40) = v40 + 8;
      }
      v380 = v39 >> 40;
      v381 = v39 << 24;
      for ( k = v40 - 24; k <= 7; k += 8 )
      {
        if ( v15 == *(unsigned __int8 **)(a1 + 32) )
        {
          if ( *(_BYTE *)(a1 + 48) != 1 )
          {
            *(_DWORD *)(a1 + 144) = v38;
            *(_DWORD *)(a1 + 148) = v698;
            *(_QWORD *)(a1 + 72) = v381;
            *(_DWORD *)(a1 + 80) = k;
            *(_QWORD *)(a1 + 24) = v15;
            *(_DWORD *)(a1 + 1608) = v380;
            *(_DWORD *)(a1 + 1512) = v35;
            *(_DWORD *)(a1 + 1516) = v36;
            *(_DWORD *)(a1 + 1520) = v702;
            *(_DWORD *)(a1 + 1524) = v696;
            *(_DWORD *)(a1 + 1528) = v37;
            *(_DWORD *)(a1 + 1488) = v710;
            v328 = *(unsigned __int8 **)(a1 + 16);
            v325 = *(__int64 **)(a1 + 224);
            v3 = *(unsigned __int64 **)(a1 + 240);
            goto LABEL_578;
          }
          v383 = 0;
        }
        else
        {
    LABEL_574:
          v426 = *v15++;
          v383 = v426;
        }
    LABEL_575:
        v427 = 56 - k;
        v381 |= v383 << v427;
      }
      v425 = HIBYTE(v381);
      v374 = v381 << 8;
      v375 = k - 8;
      if ( (_DWORD)v425 != (unsigned __int8)(v380 ^ BYTE1(v380) ^ BYTE2(v380)) )
      {
        *(_DWORD *)(a1 + 144) = v38;
        *(_DWORD *)(a1 + 148) = v698;
        *(_QWORD *)(a1 + 72) = v374;
        *(_DWORD *)(a1 + 80) = v375;
        *(_QWORD *)(a1 + 24) = v15;
        **(_QWORD **)(a1 + 224) = &v15[-*(_QWORD *)(a1 + 16)];
        **(_QWORD **)(a1 + 240) = 0;
        goto LABEL_572;
      }
      v685 = v35;
      v175 = v380 + 1;
      v174 = v710;
      if ( (v375 & 7) != 0 )
      {
        while ( 1 )
        {
          v428 = v375 & 7;
          if ( v375 >= v428 )
          {
            v374 <<= v428;
            v375 -= v428;
            break;
          }
          if ( v15 == *(unsigned __int8 **)(a1 + 32) )
          {
            if ( *(_BYTE *)(a1 + 48) != 1 )
            {
              *(_DWORD *)(a1 + 144) = v38;
              *(_DWORD *)(a1 + 148) = v698;
              *(_QWORD *)(a1 + 72) = v374;
              *(_DWORD *)(a1 + 80) = v375;
              *(_QWORD *)(a1 + 24) = v15;
              *(_DWORD *)(a1 + 1608) = v175;
              *(_DWORD *)(a1 + 1512) = v685;
              *(_DWORD *)(a1 + 1516) = v36;
              *(_DWORD *)(a1 + 1520) = v702;
              *(_DWORD *)(a1 + 1524) = v696;
              *(_DWORD *)(a1 + 1528) = v37;
              *(_DWORD *)(a1 + 1488) = v174;
              v301 = *(unsigned __int8 **)(a1 + 16);
              v298 = *(__int64 **)(a1 + 224);
              v3 = *(unsigned __int64 **)(a1 + 240);
              goto LABEL_594;
            }
            v376 = 0;
          }
          else
          {
    LABEL_590:
            v431 = *v15++;
            v376 = v431;
          }
    LABEL_591:
          v432 = 56 - v375;
          v375 += 8;
          v374 |= v376 << v432;
        }
      }
      while ( 1 )
      {
        v177 = v375 - 8;
        if ( v375 < 8 )
          break;
        v176 = v374 << 8;
        v429 = (unsigned int)v174;
        if ( (unsigned int)v174 >= v5 )
        {
          *(_DWORD *)(a1 + 144) = v38;
          *(_DWORD *)(a1 + 148) = v698;
          *(_QWORD *)(a1 + 72) = v176;
          *(_DWORD *)(a1 + 80) = v177;
          *(_QWORD *)(a1 + 24) = v15;
          **(_QWORD **)(a1 + 224) = &v15[-*(_QWORD *)(a1 + 16)];
          **(_QWORD **)(a1 + 240) = 0;
          goto LABEL_588;
        }
        v174 = (unsigned int)(v174 + 1);
        v4[v429] = HIBYTE(v374);
    LABEL_436:
        if ( !--v175 )
        {
          v243 = v36;
          v242 = v2;
          v664 = v37;
          v175 = 0;
          goto LABEL_586;
        }
        v375 = v177;
        v374 = v176;
      }
      v243 = v36;
      v242 = v2;
      v664 = v37;
      v177 = v375;
      v176 = v374;
    LABEL_586:
      *(_DWORD *)(a1 + 144) = v38;
      *(_DWORD *)(a1 + 148) = v698;
      *(_QWORD *)(a1 + 72) = v176;
      *(_DWORD *)(a1 + 80) = v177;
      *(_QWORD *)(a1 + 24) = v15;
      while ( 1 )
      {
    LABEL_597:
        if ( !v175 )
        {
          v710 = v174;
          v38 = *(unsigned int *)(a1 + 144);
          v698 = *(_DWORD *)(a1 + 148);
          v39 = *(_QWORD *)(a1 + 72);
          LODWORD(v40) = *(_DWORD *)(a1 + 80);
          v35 = v685;
          v37 = v664;
          v2 = v242;
          v36 = v243;
          goto LABEL_610;
        }
        v287 = v5;
        v288 = &v15[-*(_QWORD *)(a1 + 16)];
        v289 = *(unsigned __int64 **)(a1 + 224);
        v293 = *v289 - (_QWORD)v288;
    LABEL_599:
        if ( !v293 )
          break;
        v433 = v242;
        if ( v175 >= v293 )
          v434 = v293;
        else
          v434 = v175;
        if ( v175 >= v293 )
          v435 = v293;
        else
          v435 = v175;
        v436 = (unsigned int)(v435 + v174);
        if ( v436 > v287 )
        {
          *v289 = (unsigned __int64)v288;
          **(_QWORD **)(a1 + 240) = 0;
          goto LABEL_608;
        }
        memcpy(&v4[(unsigned int)v174], &v288[*(_QWORD *)(a1 + 216)], v434);
        v175 -= v435;
        v438 = *(_QWORD *)(a1 + 216);
        v439 = **(_QWORD **)(a1 + 224);
        v440 = *(_BYTE *)(a1 + 248);
        *(_QWORD *)(a1 + 16) = v438;
        *(_QWORD *)(a1 + 24) = &v288[v434 + v438];
        *(_QWORD *)(a1 + 40) = v439;
        *(_QWORD *)(a1 + 32) = v438 + v439;
        *(_BYTE *)(a1 + 48) = v440;
        v174 = v436;
        v242 = v433;
        v15 = &v288[v434 + v438];
        v5 = v287;
      }
      *v289 = (unsigned __int64)v288;
      **(_QWORD **)(a1 + 240) = 0;
      if ( !*(_BYTE *)(a1 + 248) )
      {
        *(_DWORD *)(a1 + 1608) = v175;
        *(_DWORD *)(a1 + 1512) = v685;
        *(_DWORD *)(a1 + 1516) = v243;
        *(_DWORD *)(a1 + 1520) = v702;
        *(_DWORD *)(a1 + 1524) = v696;
        *(_DWORD *)(a1 + 1528) = v664;
        *(_DWORD *)(a1 + 1488) = v174;
        *(_DWORD *)a1 = 588;
        return 2;
      }
    LABEL_616:
      *(_DWORD *)a1 = 584;
      return 6;
    }

    __int64 __fastcall lzham::lzham_decompressor::decompress<false>(__int64 a1)
    {
      InputSystem *v2; // x24
      __int64 v3; // x2
      unsigned int v4; // w21
      int v5; // w8
      __int64 v6; // x22
      size_t v7; // x2
      unsigned int v8; // w25
      __int64 *v9; // x9
      unsigned __int8 *v10; // x28
      __int64 v11; // x8
      int v12; // w10
      unsigned __int8 *v13; // x8
      int v14; // w8
      __int64 *v15; // x8
      unsigned __int8 *v16; // x10
      __int64 v17; // x11
      int v18; // w12
      unsigned __int64 v19; // x9
      int v20; // w8
      __int64 *v21; // x8
      __int64 v22; // x9
      int v23; // w10
      unsigned __int8 *v24; // x9
      char v25; // w9
      __int64 v26; // x8
      __int64 v27; // x9
      char *v28; // x1
      size_t v29; // x8
      __int64 *v31; // x8
      __int64 v32; // x10
      int v33; // w9
      unsigned __int8 *v34; // x9
      __int64 *v35; // x8
      __int64 v36; // x10
      int v37; // w9
      unsigned __int8 *v38; // x9
      __int64 *v39; // x8
      __int64 v40; // x11
      int v41; // w9
      unsigned __int8 *v42; // x9
      char v43; // w9
      __int64 v44; // x8
      __int64 v45; // x9
      char *v46; // x1
      size_t v47; // x8
      size_t v48; // x2
      __int64 v49; // x6
      __int64 v50; // x25
      __int64 v51; // x17
      __int64 v52; // x22
      __int64 v53; // x13
      __int64 v54; // x1
      __int64 v55; // x5
      unsigned __int64 v56; // x3
      __int64 v57; // x4
      __int64 v58; // x8
      unsigned int v59; // t1
      int v60; // w9
      __int64 *v61; // x8
      __int64 v62; // x9
      int v63; // w10
      unsigned __int8 *v64; // x9
      __int64 *v65; // x9
      __int64 v66; // x8
      int v67; // w10
      unsigned __int8 *v68; // x8
      __int64 *v69; // x8
      unsigned __int8 *v70; // x10
      __int64 v71; // x11
      int v72; // w12
      unsigned __int64 v73; // x9
      __int64 *v74; // x8
      unsigned __int8 *v75; // x10
      __int64 v76; // x11
      int v77; // w12
      unsigned __int64 v78; // x9
      __int64 v79; // x1
      __int64 v80; // x15
      unsigned int v81; // w0
      unsigned int v82; // w27
      unsigned int v83; // w3
      unsigned int v84; // w16
      unsigned __int64 v85; // x11
      int v86; // w20
      int v87; // w16
      unsigned int v88; // w7
      unsigned int v89; // w13
      unsigned int v90; // w14
      __int64 v91; // x22
      __int64 v92; // x8
      __int64 *v93; // x8
      __int64 v94; // x9
      int v95; // w10
      unsigned __int8 *v96; // x9
      __int64 v97; // x8
      char v98; // w9
      __int64 *v99; // x8
      __int64 v100; // x9
      int v101; // w10
      unsigned __int8 *v102; // x9
      __int64 *v103; // x8
      __int64 v104; // x10
      int v105; // w9
      unsigned __int8 *v106; // x9
      __int64 *v107; // x8
      unsigned __int8 *v108; // x10
      __int64 v109; // x11
      int v110; // w12
      unsigned __int64 v111; // x9
      int v112; // w8
      __int64 *v113; // x9
      __int64 v114; // x8
      int v115; // w10
      unsigned __int8 *v116; // x8
      __int64 *v117; // x9
      __int64 v118; // x8
      int v119; // w10
      unsigned __int8 *v120; // x8
      __int64 *v121; // x8
      __int64 v122; // x10
      int v123; // w9
      unsigned __int8 *v124; // x9
      int v125; // w14
      __int64 v126; // x6
      int v127; // w20
      __int64 v128; // x7
      __int64 v129; // x17
      __int64 v130; // x15
      unsigned int v131; // w25
      unsigned int v132; // w8
      __int64 v133; // x27
      __int64 v134; // x9
      unsigned int v135; // t1
      unsigned __int64 v136; // x10
      _WORD *v137; // x9
      __int64 *v138; // x9
      __int64 v139; // x8
      int v140; // w10
      unsigned __int8 *v141; // x8
      __int64 *v142; // x8
      __int64 v143; // x11
      int v144; // w9
      unsigned __int8 *v145; // x9
      unsigned int v146; // w8
      unsigned int v147; // w27
      __int64 v148; // x9
      unsigned int v149; // t1
      unsigned __int64 v150; // x10
      _WORD *v151; // x9
      int v152; // w13
      __int64 v153; // x16
      __int64 v154; // x27
      unsigned int v155; // w15
      __int64 v156; // x0
      __int64 v157; // x8
      unsigned int v158; // w13
      __int64 v159; // x0
      __int64 v160; // x8
      __int64 *v161; // x8
      __int64 v162; // x9
      int v163; // w10
      unsigned __int8 *v164; // x9
      __int64 *v165; // x9
      __int64 v166; // x8
      int v167; // w10
      unsigned __int8 *v168; // x8
      __int64 *v169; // x8
      unsigned __int8 *v170; // x10
      __int64 v171; // x11
      int v172; // w12
      unsigned __int64 v173; // x9
      unsigned int v174; // w9
      unsigned int v175; // w8
      char *v176; // x1
      int v177; // w21
      __int64 v178; // x8
      unsigned int v179; // t1
      unsigned __int64 v180; // x8
      int m; // w9
      unsigned __int64 v182; // x21
      size_t v183; // x20
      int v184; // w8
      __int64 *v185; // x8
      __int64 v186; // x10
      int v187; // w9
      unsigned __int8 *v188; // x9
      __int64 *v189; // x8
      unsigned __int8 *v190; // x10
      __int64 v191; // x11
      int v192; // w12
      unsigned __int64 v193; // x9
      unsigned int v194; // w8
      int v195; // w9
      unsigned int v196; // w11
      __int64 i; // x8
      unsigned int v198; // w8
      unsigned int v199; // w16
      __int64 v200; // x9
      __int64 *v201; // x8
      __int64 v202; // x9
      int v203; // w10
      unsigned __int8 *v204; // x9
      unsigned int v205; // w8
      __int64 v206; // x9
      __int64 *v207; // x8
      __int64 v208; // x11
      int v209; // w9
      unsigned __int8 *v210; // x9
      unsigned int v211; // w13
      __int64 v212; // x0
      __int64 v213; // x8
      __int64 *v214; // x8
      unsigned __int8 *v215; // x10
      __int64 v216; // x11
      int v217; // w12
      unsigned __int64 v218; // x9
      __int64 *v219; // x8
      __int64 v220; // x10
      int v221; // w9
      unsigned __int8 *v222; // x9
      __int64 *v223; // x8
      __int64 v224; // x10
      int v225; // w9
      unsigned __int8 *v226; // x9
      char v227; // w9
      __int64 v228; // x8
      __int64 v229; // x9
      char *v230; // x1
      size_t v231; // x8
      __int64 *v232; // x9
      __int64 v233; // x8
      int v234; // w10
      unsigned __int8 *v235; // x8
      __int64 *v236; // x9
      __int64 v237; // x8
      int v238; // w10
      unsigned __int8 *v239; // x8
      unsigned int v240; // w8
      unsigned int v241; // w15
      unsigned int v242; // w1
      unsigned __int64 v243; // x9
      int v244; // w10
      __int64 v245; // x11
      int v246; // w9
      unsigned int v247; // w8
      __int64 v248; // x0
      unsigned int v249; // w15
      unsigned int v250; // w1
      unsigned int v251; // w6
      int v252; // w9
      __int64 *v253; // x9
      __int64 v254; // x8
      int v255; // w10
      unsigned __int8 *v256; // x8
      unsigned __int64 v257; // x9
      int v258; // w10
      __int64 v259; // x11
      __int64 v260; // x21
      unsigned int v261; // w20
      unsigned __int64 *v262; // x8
      __int64 v263; // x9
      unsigned __int64 v264; // x10
      __int64 v265; // x9
      unsigned __int64 v266; // x9
      __int64 v267; // x8
      unsigned int v268; // w14
      __int64 v269; // x0
      __int64 v270; // x8
      __int64 *v271; // x8
      __int64 v272; // x10
      int v273; // w9
      unsigned __int8 *v274; // x9
      char v275; // w9
      __int64 v276; // x8
      __int64 v277; // x9
      char *v278; // x1
      size_t v279; // x8
      __int64 *v280; // x8
      __int64 v281; // x9
      int v282; // w10
      unsigned __int8 *v283; // x9
      unsigned __int64 v284; // x8
      int j; // w9
      __int64 v286; // x10
      unsigned int v287; // w13
      __int64 v288; // x27
      __int64 v289; // x8
      __int64 v290; // x8
      __int64 *v291; // x9
      unsigned __int8 *v292; // x12
      __int64 v293; // x8
      int v294; // w10
      unsigned __int8 *v295; // x8
      char v296; // w9
      __int64 v297; // x8
      __int64 v298; // x9
      char *v299; // x1
      size_t v300; // x8
      __int64 *v301; // x8
      __int64 v302; // x11
      int v303; // w9
      unsigned __int8 *v304; // x9
      unsigned __int64 v305; // x9
      int v306; // w10
      __int64 v307; // x11
      __int64 v308; // x0
      __int64 v309; // x8
      __int64 v310; // x8
      char v311; // w10
      __int64 v312; // x9
      __int64 v313; // x10
      char *v314; // x1
      size_t v315; // x8
      __int64 v316; // x8
      unsigned int v317; // w9
      __int64 v318; // x10
      __int64 *v319; // x9
      __int64 v320; // x8
      int v321; // w10
      unsigned __int8 *v322; // x8
      __int64 *v323; // x9
      unsigned __int8 *v324; // x16
      __int64 v325; // x8
      int v326; // w10
      unsigned __int8 *v327; // x8
      __int64 v328; // x8
      __int64 v329; // x8
      unsigned int v330; // w8
      __int64 v331; // x9
      unsigned __int64 v332; // x20
      int v333; // w22
      __int64 v334; // x8
      int v335; // w11
      __int64 v336; // x9
      unsigned __int64 v337; // x8
      int v338; // w9
      unsigned __int64 v339; // x8
      int v340; // w9
      __int64 v341; // x10
      __int64 v342; // x8
      unsigned __int64 v343; // x10
      unsigned __int64 v344; // x8
      int k; // w9
      __int64 v346; // x11
      int v347; // w17
      int v348; // w0
      __int64 v349; // x10
      __int64 v350; // x12
      int v351; // w15
      __int64 v352; // x8
      unsigned int v353; // t1
      char v354; // w9
      unsigned int v355; // w12
      bool v356; // zf
      unsigned int v357; // w8
      unsigned int v358; // t1
      char v359; // w11
      unsigned int v360; // w23
      unsigned __int8 *v361; // x21
      InputSystem *v362; // x26
      __int64 v363; // x22
      unsigned int v364; // w24
      __int64 v365; // x25
      unsigned __int64 v366; // x28
      int v367; // w0
      unsigned int v368; // w22
      unsigned int v369; // w23
      int v370; // w27
      __int64 v371; // x26
      __int64 v372; // x25
      InputSystem *v373; // x20
      unsigned int v374; // w8
      unsigned int v375; // w10
      unsigned __int16 *v376; // x8
      int v377; // w0
      unsigned __int64 v378; // x8
      unsigned int v379; // t1
      char v380; // w9
      unsigned __int64 v381; // x9
      int v382; // w8
      unsigned int v383; // t1
      unsigned int v384; // w28
      InputSystem *v385; // x21
      __int64 v386; // x24
      int v387; // w23
      unsigned int v388; // w22
      __int64 v389; // x25
      __int64 v390; // x26
      unsigned __int64 v391; // x8
      unsigned __int64 v392; // x20
      __int64 v393; // x27
      __int64 v394; // x23
      __int64 v395; // x26
      __int64 v396; // x21
      __int64 v397; // x28
      __int64 v398; // x27
      InputSystem *v399; // x21
      __int64 v400; // x24
      __int64 v401; // x28
      __int64 v402; // x25
      __int64 v403; // x27
      int v404; // w9
      unsigned int v405; // t1
      char v406; // w9
      int v407; // w8
      __int64 v408; // x8
      unsigned int v409; // t1
      char v410; // w9
      __int64 v411; // x8
      __int64 v412; // x9
      size_t v413; // x2
      unsigned __int64 v414; // x21
      size_t v415; // x20
      int v416; // w20
      int v417; // w21
      int v418; // w8
      __int64 v419; // x10
      unsigned int v420; // t1
      char v421; // w11
      unsigned int v422; // t1
      unsigned __int64 v423; // x11
      unsigned int v424; // t1
      char v425; // w12
      int v426; // w11
      unsigned int v427; // t1
      char v428; // w11
      __int64 v429; // x9
      __int64 v430; // x10
      size_t v431; // x2
      unsigned __int64 v432; // x21
      size_t v433; // x20
      __int64 v434; // x28
      __int64 v435; // x23
      __int64 v436; // x25
      __int64 v437; // x26
      unsigned int v438; // w8
      int v439; // w24
      size_t v440; // x22
      __int64 v441; // x27
      __int64 v442; // x9
      __int64 v443; // x10
      char v444; // w11
      __int64 v445; // x24
      __int64 v446; // x8
      __int64 v447; // x9
      size_t v448; // x2
      int v449; // w8
      __int64 v450; // x8
      __int64 v451; // x9
      size_t v452; // x2
      int v453; // w9
      unsigned __int64 v454; // x21
      size_t v455; // x20
      unsigned __int64 v456; // x21
      size_t v457; // x20
      unsigned __int64 v458; // x9
      unsigned int v459; // t1
      __int64 v460; // x21
      unsigned int v461; // w24
      unsigned __int8 *v462; // x25
      __int64 v463; // x28
      unsigned __int64 v464; // x26
      __int64 v465; // x20
      __int64 v466; // x27
      __int64 v467; // x22
      __int64 v468; // x23
      _WORD *v469; // x8
      int v470; // w9
      __int64 v471; // x10
      int v472; // w10
      _WORD *v473; // x9
      unsigned __int64 v474; // x9
      unsigned int v475; // t1
      __int64 v476; // x11
      unsigned int v477; // t1
      unsigned __int8 *v478; // x23
      unsigned int v479; // w10
      unsigned int v480; // w8
      __int64 v481; // x24
      int v482; // w21
      int v483; // w26
      unsigned __int64 v484; // x22
      __int64 v485; // x27
      unsigned int v486; // w8
      __int64 v487; // x28
      int v488; // w20
      unsigned int v489; // w20
      __int64 v490; // x9
      unsigned int v491; // w28
      __int64 v492; // x25
      __int64 v493; // x28
      int v494; // w8
      unsigned int v495; // w25
      int v496; // w9
      __int64 v497; // x11
      __int64 v498; // x10
      __int64 v499; // x11
      unsigned int v500; // t1
      unsigned int v501; // w10
      unsigned int v502; // w8
      __int64 v503; // x24
      int v504; // w21
      int v505; // w26
      unsigned __int64 v506; // x22
      __int64 v507; // x27
      unsigned __int8 *v508; // x23
      unsigned int v509; // w8
      __int64 v510; // x28
      int v511; // w20
      unsigned int v512; // w20
      __int64 v513; // x9
      unsigned int v514; // w28
      __int64 v515; // x25
      __int64 v516; // x28
      int v517; // w8
      __int64 v518; // x8
      __int64 v519; // x9
      size_t v520; // x2
      unsigned __int64 v521; // x21
      size_t v522; // x20
      int v523; // w9
      __int64 v524; // x11
      __int64 v525; // x10
      int v526; // w10
      __int64 v527; // x8
      int v528; // w11
      __int64 v529; // x8
      unsigned __int64 v530; // x10
      unsigned int v531; // t1
      __int64 v532; // x11
      unsigned int v533; // t1
      unsigned int v534; // w10
      unsigned int v535; // w8
      __int64 v536; // x23
      int v537; // w21
      int v538; // w20
      unsigned __int64 v539; // x28
      unsigned int v540; // w8
      __int64 v541; // x25
      __int64 v542; // x24
      __int64 v543; // x22
      unsigned int v544; // w22
      __int64 v545; // x25
      __int64 v546; // x26
      __int64 v547; // x9
      unsigned int v548; // w24
      __int64 v549; // x27
      __int64 v550; // x24
      int v551; // w8
      int v552; // w9
      __int64 v553; // x11
      __int64 v554; // x10
      int v555; // w11
      __int64 v556; // x10
      unsigned int v557; // t1
      int v558; // w11
      unsigned int v559; // t1
      char v560; // w12
      __int64 v561; // x11
      unsigned int v562; // t1
      unsigned int v563; // w10
      unsigned int v564; // w8
      __int64 v565; // x23
      int v566; // w21
      int v567; // w24
      unsigned __int64 v568; // x22
      unsigned int v569; // w8
      __int64 v570; // x20
      int v571; // w26
      __int64 v572; // x26
      __int64 v573; // x9
      unsigned int v574; // w28
      int v575; // w8
      int v576; // w9
      __int64 v577; // x11
      __int64 v578; // x10
      int v579; // w11
      __int64 v580; // x10
      unsigned int v581; // t1
      int v582; // w11
      unsigned int v583; // t1
      char v584; // w12
      int v585; // w10
      _WORD *v586; // x10
      unsigned __int64 v587; // x9
      unsigned int v588; // t1
      int v589; // w12
      unsigned int v590; // w11
      int v591; // w9
      unsigned __int64 v592; // x11
      unsigned int v593; // t1
      __int64 v594; // x11
      unsigned int v595; // t1
      unsigned int v596; // w10
      unsigned int v597; // w8
      __int64 v598; // x23
      int v599; // w21
      int v600; // w20
      unsigned __int64 v601; // x28
      unsigned int v602; // w8
      __int64 v603; // x25
      __int64 v604; // x24
      __int64 v605; // x22
      __int64 v606; // x22
      __int64 v607; // x25
      __int64 v608; // x26
      __int64 v609; // x9
      unsigned int v610; // w24
      __int64 v611; // x27
      __int64 v612; // x24
      int v613; // w8
      int v614; // w9
      int v615; // w9
      __int64 v616; // x11
      __int64 v617; // x10
      __int64 v618; // x8
      __int64 v619; // x11
      unsigned int v620; // t1
      unsigned int v621; // w10
      unsigned int v622; // w8
      __int64 v623; // x24
      int v624; // w21
      int v625; // w23
      unsigned __int64 v626; // x25
      unsigned int v627; // w8
      __int64 v628; // x20
      int v629; // w26
      int v630; // w27
      int v631; // w20
      __int64 v632; // x26
      __int64 v633; // x9
      unsigned int v634; // w28
      int v635; // w8
      int v636; // w9
      __int64 v637; // x11
      __int64 v638; // x10
      int v639; // w11
      __int64 v640; // x10
      unsigned int v641; // t1
      int v642; // w11
      unsigned int v643; // t1
      char v644; // w12
      int v645; // w9
      unsigned int v646; // t1
      unsigned int v647; // w10
      int v648; // w9
      unsigned __int64 v649; // x8
      __int64 v650; // x9
      unsigned int v651; // t1
      __int64 v652; // x11
      unsigned int v653; // t1
      unsigned int v654; // w10
      InputSystem *v655; // x26
      unsigned int v656; // w8
      __int64 v657; // x21
      int v658; // w28
      int v659; // w22
      unsigned __int64 v660; // x24
      int v661; // w20
      __int64 v662; // x23
      unsigned int v663; // w8
      __int64 v664; // x25
      __int64 v665; // x9
      unsigned int v666; // w27
      __int64 v667; // x25
      __int64 v668; // x27
      int v669; // w8
      int v670; // w8
      __int64 v671; // x8
      int v672; // w9
      unsigned __int8 *v673; // x0
      int v674; // w8
      unsigned __int8 v675; // t1
      int v676; // w1
      int v677; // w8
      size_t v678; // x2
      __int64 v679; // x26
      unsigned __int64 v680; // x20
      __int64 v681; // x27
      int v682; // w23
      unsigned int v683; // w28
      InputSystem *v684; // x21
      __int64 v685; // x24
      __int64 v686; // x25
      __int64 v687; // x22
      int v688; // w9
      __int64 v689; // x11
      __int64 v690; // x10
      unsigned __int8 v691; // t1
      __int64 v692; // x9
      __int64 v693; // x10
      __int64 v694; // x8
      unsigned int v695; // t1
      int v696; // w10
      __int64 v697; // x10
      unsigned int v698; // t1
      char v699; // w11
      int v700; // [xsp+Ch] [xbp-94h]
      unsigned int v701; // [xsp+10h] [xbp-90h]
      unsigned int v702; // [xsp+10h] [xbp-90h]
      unsigned int v703; // [xsp+10h] [xbp-90h]
      unsigned int v704; // [xsp+10h] [xbp-90h]
      unsigned int v705; // [xsp+10h] [xbp-90h]
      int v706; // [xsp+10h] [xbp-90h]
      int v707; // [xsp+10h] [xbp-90h]
      unsigned int v708; // [xsp+10h] [xbp-90h]
      unsigned int v709; // [xsp+14h] [xbp-8Ch]
      unsigned int v710; // [xsp+14h] [xbp-8Ch]
      unsigned int v711; // [xsp+14h] [xbp-8Ch]
      unsigned int v712; // [xsp+14h] [xbp-8Ch]
      unsigned int v713; // [xsp+14h] [xbp-8Ch]
      unsigned int v714; // [xsp+14h] [xbp-8Ch]
      InputSystem *v715; // [xsp+18h] [xbp-88h]
      InputSystem *v716; // [xsp+18h] [xbp-88h]
      InputSystem *v717; // [xsp+18h] [xbp-88h]
      InputSystem *v718; // [xsp+18h] [xbp-88h]
      InputSystem *v719; // [xsp+18h] [xbp-88h]
      InputSystem *v720; // [xsp+18h] [xbp-88h]
      InputSystem *v721; // [xsp+18h] [xbp-88h]
      int v722; // [xsp+18h] [xbp-88h]
      int v723; // [xsp+18h] [xbp-88h]
      unsigned int v724; // [xsp+20h] [xbp-80h]
      unsigned int v725; // [xsp+20h] [xbp-80h]
      int v726; // [xsp+20h] [xbp-80h]
      int v727; // [xsp+20h] [xbp-80h]
      unsigned int v728; // [xsp+20h] [xbp-80h]
      int v729; // [xsp+20h] [xbp-80h]
      int v730; // [xsp+20h] [xbp-80h]
      unsigned int v731; // [xsp+24h] [xbp-7Ch]
      unsigned int v732; // [xsp+24h] [xbp-7Ch]
      unsigned int v733; // [xsp+24h] [xbp-7Ch]
      unsigned int v734; // [xsp+24h] [xbp-7Ch]
      unsigned int v735; // [xsp+24h] [xbp-7Ch]
      unsigned int v736; // [xsp+28h] [xbp-78h]
      int v737; // [xsp+28h] [xbp-78h]
      unsigned int v738; // [xsp+28h] [xbp-78h]
      unsigned int v739; // [xsp+28h] [xbp-78h]
      unsigned int v740; // [xsp+28h] [xbp-78h]
      int v741; // [xsp+28h] [xbp-78h]
      unsigned int v742; // [xsp+2Ch] [xbp-74h]
      unsigned int v743; // [xsp+2Ch] [xbp-74h]
      unsigned int v744; // [xsp+2Ch] [xbp-74h]
      unsigned int v745; // [xsp+2Ch] [xbp-74h]
      unsigned int v746; // [xsp+2Ch] [xbp-74h]
      unsigned int v747; // [xsp+2Ch] [xbp-74h]
      unsigned int v748; // [xsp+2Ch] [xbp-74h]
      unsigned __int8 *v749; // [xsp+30h] [xbp-70h]
      unsigned __int8 *v750; // [xsp+30h] [xbp-70h]
      unsigned __int64 v751; // [xsp+30h] [xbp-70h]
      unsigned int v752; // [xsp+30h] [xbp-70h]
      unsigned __int8 *v753; // [xsp+30h] [xbp-70h]
      unsigned __int8 *v754; // [xsp+30h] [xbp-70h]
      unsigned __int8 *v755; // [xsp+30h] [xbp-70h]
      unsigned __int8 *v756; // [xsp+30h] [xbp-70h]
      unsigned __int8 *v757; // [xsp+30h] [xbp-70h]
      unsigned __int8 *v758; // [xsp+30h] [xbp-70h]
      __int64 v759; // [xsp+38h] [xbp-68h]
      unsigned int v760; // [xsp+38h] [xbp-68h]
      int v761; // [xsp+38h] [xbp-68h]
      unsigned int v762; // [xsp+38h] [xbp-68h]
      __int64 v763; // [xsp+38h] [xbp-68h]
      __int64 v764; // [xsp+38h] [xbp-68h]
      __int64 v765; // [xsp+38h] [xbp-68h]
      __int64 v766; // [xsp+38h] [xbp-68h]
      unsigned int v767; // [xsp+38h] [xbp-68h]
      unsigned int v768; // [xsp+40h] [xbp-60h]
      unsigned int v769; // [xsp+40h] [xbp-60h]
      unsigned int v770; // [xsp+40h] [xbp-60h]
      unsigned int v771; // [xsp+40h] [xbp-60h]
      unsigned int v772; // [xsp+40h] [xbp-60h]
      unsigned int v773; // [xsp+40h] [xbp-60h]
      unsigned int v774; // [xsp+40h] [xbp-60h]
      unsigned int v775; // [xsp+40h] [xbp-60h]
      unsigned int v776; // [xsp+40h] [xbp-60h]
      unsigned int v777; // [xsp+40h] [xbp-60h]
      unsigned int v778; // [xsp+44h] [xbp-5Ch]
      int v779; // [xsp+44h] [xbp-5Ch]
      int v780; // [xsp+44h] [xbp-5Ch]
      unsigned int v781; // [xsp+44h] [xbp-5Ch]
      unsigned int v782; // [xsp+44h] [xbp-5Ch]
      int v783; // [xsp+44h] [xbp-5Ch]
      int v784; // [xsp+44h] [xbp-5Ch]
      unsigned int v785; // [xsp+44h] [xbp-5Ch]
      int v786; // [xsp+44h] [xbp-5Ch]
      unsigned __int8 *__dst; // [xsp+48h] [xbp-58h]
    
      v2 = (InputSystem *)(a1 + 16);
      v3 = (unsigned int)(1 << *(_DWORD *)(a1 + 276));
      v4 = v3 - 1;
      __dst = *(unsigned __int8 **)(a1 + 200);
      v5 = *(_DWORD *)a1;
      if ( *(int *)a1 > 1053 )
      {
        if ( v5 <= 1109 )
        {
          if ( v5 > 1073 )
          {
            switch ( v5 )
            {
              case 1074:
                v10 = *(unsigned __int8 **)(a1 + 216);
                v25 = *(_BYTE *)(a1 + 248);
                v26 = **(_QWORD **)(a1 + 224);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_BYTE *)(a1 + 48) = v25;
                v27 = *(_QWORD *)(a1 + 1560);
                *(_QWORD *)(a1 + 40) = v26;
                *(_QWORD *)(a1 + 32) = &v10[v26];
                v28 = (char *)(*(_QWORD *)(a1 + 1544) + v27);
                *(_QWORD *)(a1 + 1544) = v28;
                v29 = *(_QWORD *)(a1 + 1552) - v27;
                *(_QWORD *)(a1 + 1552) = v29;
                goto LABEL_585;
              case 1080:
                v10 = *(unsigned __int8 **)(a1 + 216);
                v113 = *(__int64 **)(a1 + 224);
                v114 = *v113;
                v115 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_QWORD *)(a1 + 40) = v114;
                *(_QWORD *)(a1 + 32) = &v10[v114];
                *(_BYTE *)(a1 + 48) = v115;
                if ( !v115 && !v114 )
                {
                  v116 = v10;
                  goto LABEL_126;
                }
                LODWORD(v49) = *(_DWORD *)(a1 + 1512);
                v778 = *(_DWORD *)(a1 + 1516);
                LODWORD(v50) = *(_DWORD *)(a1 + 1520);
                LODWORD(v51) = *(_DWORD *)(a1 + 1524);
                LODWORD(v52) = *(_DWORD *)(a1 + 1528);
                v177 = *(_DWORD *)(a1 + 1488);
                LODWORD(v55) = *(_DWORD *)(a1 + 144);
                LODWORD(v54) = *(_DWORD *)(a1 + 148);
                v56 = *(_QWORD *)(a1 + 72);
                LODWORD(v57) = *(_DWORD *)(a1 + 80);
                if ( v114 >= 1 )
                  goto LABEL_179;
                v178 = 0;
                goto LABEL_180;
              case 1082:
                v10 = *(unsigned __int8 **)(a1 + 216);
                v117 = *(__int64 **)(a1 + 224);
                v118 = *v117;
                v119 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_QWORD *)(a1 + 40) = v118;
                *(_QWORD *)(a1 + 32) = &v10[v118];
                *(_BYTE *)(a1 + 48) = v119;
                if ( !v119 && !v118 )
                {
                  v120 = v10;
                  goto LABEL_130;
                }
                LODWORD(v49) = *(_DWORD *)(a1 + 1512);
                v778 = *(_DWORD *)(a1 + 1516);
                LODWORD(v50) = *(_DWORD *)(a1 + 1520);
                LODWORD(v51) = *(_DWORD *)(a1 + 1524);
                LODWORD(v52) = *(_DWORD *)(a1 + 1528);
                v177 = *(_DWORD *)(a1 + 1488);
                LODWORD(v55) = *(_DWORD *)(a1 + 144);
                LODWORD(v54) = *(_DWORD *)(a1 + 148);
                v56 = *(_QWORD *)(a1 + 72);
                LODWORD(v57) = *(_DWORD *)(a1 + 80);
                if ( v118 < 1 )
                  goto LABEL_1059;
                goto LABEL_1056;
              case 1083:
                v10 = *(unsigned __int8 **)(a1 + 216);
                v121 = *(__int64 **)(a1 + 224);
                v122 = *v121;
                v123 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_QWORD *)(a1 + 40) = v122;
                *(_QWORD *)(a1 + 32) = &v10[v122];
                *(_BYTE *)(a1 + 48) = v123;
                if ( !v123 && !v122 )
                {
                  v124 = v10;
                  goto LABEL_134;
                }
                LODWORD(v49) = *(_DWORD *)(a1 + 1512);
                v778 = *(_DWORD *)(a1 + 1516);
                LODWORD(v50) = *(_DWORD *)(a1 + 1520);
                LODWORD(v51) = *(_DWORD *)(a1 + 1524);
                LODWORD(v52) = *(_DWORD *)(a1 + 1528);
                v177 = *(_DWORD *)(a1 + 1488);
                LODWORD(v55) = *(_DWORD *)(a1 + 144);
                LODWORD(v54) = *(_DWORD *)(a1 + 148);
                v180 = *(_QWORD *)(a1 + 72);
                m = *(_DWORD *)(a1 + 80);
                if ( v122 < 1 )
                  goto LABEL_1073;
                goto LABEL_1070;
              default:
                return *(unsigned int *)(a1 + 312);
            }
          }
          if ( v5 == 1054 )
          {
            v10 = *(unsigned __int8 **)(a1 + 216);
            v9 = *(__int64 **)(a1 + 224);
            v11 = *v9;
            v12 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v10;
            *(_QWORD *)(a1 + 24) = v10;
            *(_QWORD *)(a1 + 40) = v11;
            *(_QWORD *)(a1 + 32) = &v10[v11];
            *(_BYTE *)(a1 + 48) = v12;
            if ( v12 || v11 )
            {
              v49 = *(unsigned int *)(a1 + 1512);
              v778 = *(_DWORD *)(a1 + 1516);
              v50 = *(unsigned int *)(a1 + 1520);
              v51 = *(unsigned int *)(a1 + 1524);
              v52 = *(unsigned int *)(a1 + 1528);
              v53 = *(unsigned int *)(a1 + 1488);
              v55 = *(unsigned int *)(a1 + 144);
              v54 = *(unsigned int *)(a1 + 148);
              v56 = *(_QWORD *)(a1 + 72);
              LODWORD(v57) = *(_DWORD *)(a1 + 80);
              if ( v11 < 1 )
              {
                v58 = 0;
                goto LABEL_70;
              }
              goto LABEL_69;
            }
            v13 = v10;
    LABEL_15:
            *v9 = v10 - v13;
            **(_QWORD **)(a1 + 240) = 0;
            v14 = 1054;
            goto LABEL_363;
          }
          return *(unsigned int *)(a1 + 312);
        }
        if ( v5 == 1110 || v5 == 1116 )
        {
          **(_QWORD **)(a1 + 224) = 0;
          **(_QWORD **)(a1 + 240) = 0;
          v20 = 1116;
    LABEL_1067:
          *(_DWORD *)a1 = v20;
          return *(unsigned int *)(a1 + 312);
        }
        return *(unsigned int *)(a1 + 312);
      }
      if ( v5 > 897 )
      {
        if ( v5 > 975 )
        {
          if ( v5 == 976 )
          {
            *(_DWORD *)a1 = 976;
            return 7;
          }
          if ( v5 == 1002 )
          {
            v10 = *(unsigned __int8 **)(a1 + 216);
            v43 = *(_BYTE *)(a1 + 248);
            v44 = **(_QWORD **)(a1 + 224);
            *(_QWORD *)(a1 + 16) = v10;
            *(_QWORD *)(a1 + 24) = v10;
            *(_BYTE *)(a1 + 48) = v43;
            v45 = *(_QWORD *)(a1 + 1560);
            *(_QWORD *)(a1 + 40) = v44;
            *(_QWORD *)(a1 + 32) = &v10[v44];
            v46 = (char *)(*(_QWORD *)(a1 + 1544) + v45);
            *(_QWORD *)(a1 + 1544) = v46;
            v47 = *(_QWORD *)(a1 + 1552) - v45;
            *(_QWORD *)(a1 + 1552) = v47;
            goto LABEL_62;
          }
          return *(unsigned int *)(a1 + 312);
        }
        if ( v5 > 906 )
        {
          if ( v5 > 944 )
          {
            if ( v5 != 945 )
              return *(unsigned int *)(a1 + 312);
            v70 = *(unsigned __int8 **)(a1 + 216);
            v69 = *(__int64 **)(a1 + 224);
            v71 = *v69;
            v72 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v70;
            *(_QWORD *)(a1 + 24) = v70;
            *(_QWORD *)(a1 + 40) = v71;
            v73 = (unsigned __int64)&v70[v71];
            *(_QWORD *)(a1 + 32) = &v70[v71];
            *(_BYTE *)(a1 + 48) = v72;
            if ( v72 || v71 )
            {
              v125 = *(_DWORD *)(a1 + 1580);
              v88 = *(_DWORD *)(a1 + 1584);
              v152 = *(_DWORD *)(a1 + 1588);
              LODWORD(v49) = *(_DWORD *)(a1 + 1512);
              LODWORD(v153) = *(_DWORD *)(a1 + 1516);
              LODWORD(v154) = *(_DWORD *)(a1 + 1520);
              LODWORD(v51) = *(_DWORD *)(a1 + 1524);
              v155 = *(_DWORD *)(a1 + 1528);
              v731 = *(_DWORD *)(a1 + 1488);
              LODWORD(v55) = *(_DWORD *)(a1 + 144);
              LODWORD(v54) = *(_DWORD *)(a1 + 148);
              v56 = *(_QWORD *)(a1 + 72);
              LODWORD(v57) = *(_DWORD *)(a1 + 80);
              v156 = *(_QWORD *)(a1 + 160);
              v157 = *(_QWORD *)(v156 + 64);
              goto LABEL_999;
            }
            v10 = v70;
    LABEL_1040:
            *v69 = v10 - v70;
            **(_QWORD **)(a1 + 240) = 0;
            v14 = 945;
          }
          else if ( v5 > 928 )
          {
            if ( v5 == 929 )
            {
              v10 = *(unsigned __int8 **)(a1 + 216);
              v99 = *(__int64 **)(a1 + 224);
              v100 = *v99;
              v101 = *(unsigned __int8 *)(a1 + 248);
              *(_QWORD *)(a1 + 16) = v10;
              *(_QWORD *)(a1 + 24) = v10;
              *(_QWORD *)(a1 + 40) = v100;
              *(_QWORD *)(a1 + 32) = &v10[v100];
              *(_BYTE *)(a1 + 48) = v101;
              if ( v101 || v100 )
              {
                v125 = *(_DWORD *)(a1 + 1580);
                v88 = *(_DWORD *)(a1 + 1584);
                v205 = *(_DWORD *)(a1 + 1592);
                LODWORD(v49) = *(_DWORD *)(a1 + 1512);
                v153 = *(unsigned int *)(a1 + 1516);
                v154 = *(unsigned int *)(a1 + 1520);
                LODWORD(v51) = *(_DWORD *)(a1 + 1524);
                v155 = *(_DWORD *)(a1 + 1528);
                v731 = *(_DWORD *)(a1 + 1488);
                LODWORD(v55) = *(_DWORD *)(a1 + 144);
                LODWORD(v54) = *(_DWORD *)(a1 + 148);
                v56 = *(_QWORD *)(a1 + 72);
                LODWORD(v57) = *(_DWORD *)(a1 + 80);
                if ( v100 < 1 )
                {
                  v206 = 0;
                  goto LABEL_979;
                }
                goto LABEL_978;
              }
              v102 = v10;
    LABEL_110:
              *v99 = v10 - v102;
              **(_QWORD **)(a1 + 240) = 0;
              v14 = 929;
            }
            else
            {
              if ( v5 != 936 )
                return *(unsigned int *)(a1 + 312);
              v10 = *(unsigned __int8 **)(a1 + 216);
              v161 = *(__int64 **)(a1 + 224);
              v162 = *v161;
              v163 = *(unsigned __int8 *)(a1 + 248);
              *(_QWORD *)(a1 + 16) = v10;
              *(_QWORD *)(a1 + 24) = v10;
              *(_QWORD *)(a1 + 40) = v162;
              *(_QWORD *)(a1 + 32) = &v10[v162];
              *(_BYTE *)(a1 + 48) = v163;
              if ( v163 || v162 )
              {
                v125 = *(_DWORD *)(a1 + 1580);
                v88 = *(_DWORD *)(a1 + 1584);
                v205 = *(_DWORD *)(a1 + 1592);
                LODWORD(v49) = *(_DWORD *)(a1 + 1512);
                LODWORD(v153) = *(_DWORD *)(a1 + 1516);
                LODWORD(v154) = *(_DWORD *)(a1 + 1520);
                LODWORD(v51) = *(_DWORD *)(a1 + 1524);
                v155 = *(_DWORD *)(a1 + 1528);
                v731 = *(_DWORD *)(a1 + 1488);
                LODWORD(v55) = *(_DWORD *)(a1 + 144);
                LODWORD(v54) = *(_DWORD *)(a1 + 148);
                v56 = *(_QWORD *)(a1 + 72);
                LODWORD(v57) = *(_DWORD *)(a1 + 80);
                if ( v162 < 1 )
                  goto LABEL_994;
                goto LABEL_991;
              }
              v164 = v10;
    LABEL_167:
              *v161 = v10 - v164;
              **(_QWORD **)(a1 + 240) = 0;
              v14 = 936;
            }
          }
          else if ( v5 == 907 )
          {
            v10 = *(unsigned __int8 **)(a1 + 216);
            v35 = *(__int64 **)(a1 + 224);
            v36 = *v35;
            v37 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v10;
            *(_QWORD *)(a1 + 24) = v10;
            *(_QWORD *)(a1 + 40) = v36;
            *(_QWORD *)(a1 + 32) = &v10[v36];
            *(_BYTE *)(a1 + 48) = v37;
            if ( v37 || v36 )
            {
              v194 = *(_DWORD *)(a1 + 1580);
              v88 = *(_DWORD *)(a1 + 1584);
              LODWORD(v49) = *(_DWORD *)(a1 + 1512);
              v153 = *(unsigned int *)(a1 + 1516);
              v154 = *(unsigned int *)(a1 + 1520);
              LODWORD(v51) = *(_DWORD *)(a1 + 1524);
              v155 = *(_DWORD *)(a1 + 1528);
              v731 = *(_DWORD *)(a1 + 1488);
              LODWORD(v55) = *(_DWORD *)(a1 + 144);
              LODWORD(v54) = *(_DWORD *)(a1 + 148);
              v56 = *(_QWORD *)(a1 + 72);
              v195 = *(_DWORD *)(a1 + 80);
              if ( v36 < 1 )
                goto LABEL_959;
              goto LABEL_956;
            }
            v38 = v10;
    LABEL_51:
            *v35 = v10 - v38;
            **(_QWORD **)(a1 + 240) = 0;
            v14 = 907;
          }
          else
          {
            if ( v5 != 912 )
              return *(unsigned int *)(a1 + 312);
            v10 = *(unsigned __int8 **)(a1 + 216);
            v142 = *(__int64 **)(a1 + 224);
            v143 = *v142;
            v144 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v10;
            *(_QWORD *)(a1 + 24) = v10;
            *(_QWORD *)(a1 + 40) = v143;
            *(_QWORD *)(a1 + 32) = &v10[v143];
            *(_BYTE *)(a1 + 48) = v144;
            if ( v144 || v143 )
            {
              v194 = *(_DWORD *)(a1 + 1580);
              v88 = *(_DWORD *)(a1 + 1584);
              LODWORD(v49) = *(_DWORD *)(a1 + 1512);
              v153 = *(unsigned int *)(a1 + 1516);
              v154 = *(unsigned int *)(a1 + 1520);
              LODWORD(v51) = *(_DWORD *)(a1 + 1524);
              v155 = *(_DWORD *)(a1 + 1528);
              v731 = *(_DWORD *)(a1 + 1488);
              LODWORD(v55) = *(_DWORD *)(a1 + 144);
              LODWORD(v54) = *(_DWORD *)(a1 + 148);
              v257 = *(_QWORD *)(a1 + 72);
              v258 = *(_DWORD *)(a1 + 80);
              if ( v143 < 1 )
              {
                v259 = 0;
                goto LABEL_968;
              }
              goto LABEL_967;
            }
            v145 = v10;
    LABEL_151:
            *v142 = v10 - v145;
            **(_QWORD **)(a1 + 240) = 0;
            v14 = 912;
          }
        }
        else
        {
          if ( v5 != 898 )
            return *(unsigned int *)(a1 + 312);
          v16 = *(unsigned __int8 **)(a1 + 216);
          v15 = *(__int64 **)(a1 + 224);
          v17 = *v15;
          v18 = *(unsigned __int8 *)(a1 + 248);
          *(_QWORD *)(a1 + 16) = v16;
          *(_QWORD *)(a1 + 24) = v16;
          *(_QWORD *)(a1 + 40) = v17;
          v19 = (unsigned __int64)&v16[v17];
          *(_QWORD *)(a1 + 32) = &v16[v17];
          *(_BYTE *)(a1 + 48) = v18;
          if ( v18 || v17 )
          {
            v87 = *(_DWORD *)(a1 + 1580);
            v88 = *(_DWORD *)(a1 + 1584);
            LODWORD(v49) = *(_DWORD *)(a1 + 1512);
            v778 = *(_DWORD *)(a1 + 1516);
            v89 = *(_DWORD *)(a1 + 1520);
            LODWORD(v51) = *(_DWORD *)(a1 + 1524);
            LODWORD(v759) = *(_DWORD *)(a1 + 1528);
            v90 = *(_DWORD *)(a1 + 1488);
            LODWORD(v55) = *(_DWORD *)(a1 + 144);
            LODWORD(v54) = *(_DWORD *)(a1 + 148);
            v56 = *(_QWORD *)(a1 + 72);
            LODWORD(v57) = *(_DWORD *)(a1 + 80);
            v91 = *(_QWORD *)(a1 + 160);
            v92 = *(_QWORD *)(v91 + 64);
            goto LABEL_926;
          }
          v10 = v16;
    LABEL_944:
          *v15 = v10 - v16;
          **(_QWORD **)(a1 + 240) = 0;
          v14 = 898;
        }
        goto LABEL_363;
      }
      if ( v5 > 773 )
      {
        if ( v5 > 795 )
        {
          if ( v5 > 863 )
          {
            if ( v5 == 864 )
            {
              v75 = *(unsigned __int8 **)(a1 + 216);
              v74 = *(__int64 **)(a1 + 224);
              v76 = *v74;
              v77 = *(unsigned __int8 *)(a1 + 248);
              *(_QWORD *)(a1 + 16) = v75;
              *(_QWORD *)(a1 + 24) = v75;
              *(_QWORD *)(a1 + 40) = v76;
              v78 = (unsigned __int64)&v75[v76];
              *(_QWORD *)(a1 + 32) = &v75[v76];
              *(_BYTE *)(a1 + 48) = v77;
              if ( v77 || v76 )
              {
                v125 = *(_DWORD *)(a1 + 1580);
                v126 = *(unsigned int *)(a1 + 1512);
                v778 = *(_DWORD *)(a1 + 1516);
                LODWORD(v128) = *(_DWORD *)(a1 + 1520);
                LODWORD(v129) = *(_DWORD *)(a1 + 1524);
                v759 = *(unsigned int *)(a1 + 1528);
                v131 = *(_DWORD *)(a1 + 1488);
                v133 = *(unsigned int *)(a1 + 144);
                v158 = *(_DWORD *)(a1 + 148);
                v56 = *(_QWORD *)(a1 + 72);
                LODWORD(v57) = *(_DWORD *)(a1 + 80);
                v159 = *(_QWORD *)(a1 + 160);
                v160 = *(_QWORD *)(v159 + 64);
                goto LABEL_890;
              }
              v10 = v75;
              goto LABEL_908;
            }
          }
          else if ( v5 > 818 )
          {
            if ( v5 > 827 )
            {
              if ( v5 == 828 )
              {
                v10 = *(unsigned __int8 **)(a1 + 216);
                v165 = *(__int64 **)(a1 + 224);
                v166 = *v165;
                v167 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_QWORD *)(a1 + 40) = v166;
                *(_QWORD *)(a1 + 32) = &v10[v166];
                *(_BYTE *)(a1 + 48) = v167;
                if ( v167 || v166 )
                {
                  v125 = *(_DWORD *)(a1 + 1580);
                  v127 = *(_DWORD *)(a1 + 1512);
                  v248 = *(unsigned int *)(a1 + 1516);
                  v128 = *(unsigned int *)(a1 + 1520);
                  v129 = *(unsigned int *)(a1 + 1524);
                  v249 = *(_DWORD *)(a1 + 1528);
                  v131 = *(_DWORD *)(a1 + 1488);
                  v250 = *(_DWORD *)(a1 + 144);
                  v251 = *(_DWORD *)(a1 + 148);
                  v56 = *(_QWORD *)(a1 + 72);
                  LODWORD(v57) = *(_DWORD *)(a1 + 80);
                  if ( v166 < 1 )
                  {
                    v267 = 0;
                    goto LABEL_859;
                  }
                  goto LABEL_858;
                }
                v168 = v10;
    LABEL_172:
                *v165 = v10 - v168;
                **(_QWORD **)(a1 + 240) = 0;
                v14 = 828;
                goto LABEL_363;
              }
              if ( v5 == 837 )
              {
                v10 = *(unsigned __int8 **)(a1 + 216);
                v223 = *(__int64 **)(a1 + 224);
                v224 = *v223;
                v225 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_QWORD *)(a1 + 40) = v224;
                *(_QWORD *)(a1 + 32) = &v10[v224];
                *(_BYTE *)(a1 + 48) = v225;
                if ( v225 || v224 )
                {
                  v125 = *(_DWORD *)(a1 + 1580);
                  v127 = *(_DWORD *)(a1 + 1512);
                  v128 = *(unsigned int *)(a1 + 1516);
                  LODWORD(v316) = *(_DWORD *)(a1 + 1520);
                  LODWORD(v129) = *(_DWORD *)(a1 + 1524);
                  v249 = *(_DWORD *)(a1 + 1528);
                  v131 = *(_DWORD *)(a1 + 1488);
                  v250 = *(_DWORD *)(a1 + 144);
                  v317 = *(_DWORD *)(a1 + 148);
                  v56 = *(_QWORD *)(a1 + 72);
                  LODWORD(v57) = *(_DWORD *)(a1 + 80);
                  if ( v224 < 1 )
                  {
                    v318 = 0;
                    goto LABEL_883;
                  }
                  goto LABEL_882;
                }
                v226 = v10;
    LABEL_239:
                *v223 = v10 - v226;
                **(_QWORD **)(a1 + 240) = 0;
                v14 = 837;
                goto LABEL_363;
              }
            }
            else
            {
              if ( v5 == 819 )
              {
                v10 = *(unsigned __int8 **)(a1 + 216);
                v103 = *(__int64 **)(a1 + 224);
                v104 = *v103;
                v105 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_QWORD *)(a1 + 40) = v104;
                *(_QWORD *)(a1 + 32) = &v10[v104];
                *(_BYTE *)(a1 + 48) = v105;
                if ( v105 || v104 )
                {
                  v247 = *(_DWORD *)(a1 + 1580);
                  v127 = *(_DWORD *)(a1 + 1512);
                  v248 = *(unsigned int *)(a1 + 1516);
                  v128 = *(unsigned int *)(a1 + 1520);
                  v129 = *(unsigned int *)(a1 + 1524);
                  v249 = *(_DWORD *)(a1 + 1528);
                  v131 = *(_DWORD *)(a1 + 1488);
                  v250 = *(_DWORD *)(a1 + 144);
                  v251 = *(_DWORD *)(a1 + 148);
                  v56 = *(_QWORD *)(a1 + 72);
                  v252 = *(_DWORD *)(a1 + 80);
                  if ( v104 < 1 )
                    goto LABEL_839;
                  goto LABEL_835;
                }
                v106 = v10;
    LABEL_838:
                *v103 = v10 - v106;
                **(_QWORD **)(a1 + 240) = 0;
                v14 = 819;
                goto LABEL_363;
              }
              if ( v5 == 824 )
              {
                v10 = *(unsigned __int8 **)(a1 + 216);
                v207 = *(__int64 **)(a1 + 224);
                v208 = *v207;
                v209 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_QWORD *)(a1 + 40) = v208;
                *(_QWORD *)(a1 + 32) = &v10[v208];
                *(_BYTE *)(a1 + 48) = v209;
                if ( v209 || v208 )
                {
                  v247 = *(_DWORD *)(a1 + 1580);
                  v127 = *(_DWORD *)(a1 + 1512);
                  v248 = *(unsigned int *)(a1 + 1516);
                  v128 = *(unsigned int *)(a1 + 1520);
                  v129 = *(unsigned int *)(a1 + 1524);
                  v249 = *(_DWORD *)(a1 + 1528);
                  v131 = *(_DWORD *)(a1 + 1488);
                  v250 = *(_DWORD *)(a1 + 144);
                  v251 = *(_DWORD *)(a1 + 148);
                  v305 = *(_QWORD *)(a1 + 72);
                  v306 = *(_DWORD *)(a1 + 80);
                  if ( v208 < 1 )
                  {
                    v307 = 0;
                    goto LABEL_846;
                  }
                  goto LABEL_845;
                }
                v210 = v10;
    LABEL_219:
                *v207 = v10 - v210;
                **(_QWORD **)(a1 + 240) = 0;
                v14 = 824;
                goto LABEL_363;
              }
            }
          }
          else
          {
            switch ( v5 )
            {
              case 796:
                v10 = *(unsigned __int8 **)(a1 + 216);
                v185 = *(__int64 **)(a1 + 224);
                v186 = *v185;
                v187 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_QWORD *)(a1 + 40) = v186;
                *(_QWORD *)(a1 + 32) = &v10[v186];
                *(_BYTE *)(a1 + 48) = v187;
                if ( v187 || v186 )
                {
                  v240 = *(_DWORD *)(a1 + 1580);
                  v126 = *(unsigned int *)(a1 + 1512);
                  v127 = *(_DWORD *)(a1 + 1516);
                  v128 = *(unsigned int *)(a1 + 1520);
                  v129 = *(unsigned int *)(a1 + 1524);
                  v241 = *(_DWORD *)(a1 + 1528);
                  v131 = *(_DWORD *)(a1 + 1488);
                  LODWORD(v55) = *(_DWORD *)(a1 + 144);
                  v242 = *(_DWORD *)(a1 + 148);
                  v56 = *(_QWORD *)(a1 + 72);
                  v246 = *(_DWORD *)(a1 + 80);
                  if ( v186 < 1 )
                    goto LABEL_789;
                  goto LABEL_786;
                }
                v188 = v10;
    LABEL_196:
                *v185 = v10 - v188;
                **(_QWORD **)(a1 + 240) = 0;
                v14 = 796;
                goto LABEL_363;
              case 801:
                v10 = *(unsigned __int8 **)(a1 + 216);
                v39 = *(__int64 **)(a1 + 224);
                v40 = *v39;
                v41 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_QWORD *)(a1 + 40) = v40;
                *(_QWORD *)(a1 + 32) = &v10[v40];
                *(_BYTE *)(a1 + 48) = v41;
                if ( v41 || v40 )
                {
                  v240 = *(_DWORD *)(a1 + 1580);
                  v126 = *(unsigned int *)(a1 + 1512);
                  v127 = *(_DWORD *)(a1 + 1516);
                  v128 = *(unsigned int *)(a1 + 1520);
                  v129 = *(unsigned int *)(a1 + 1524);
                  v241 = *(_DWORD *)(a1 + 1528);
                  v131 = *(_DWORD *)(a1 + 1488);
                  LODWORD(v55) = *(_DWORD *)(a1 + 144);
                  v242 = *(_DWORD *)(a1 + 148);
                  v243 = *(_QWORD *)(a1 + 72);
                  v244 = *(_DWORD *)(a1 + 80);
                  if ( v40 < 1 )
                  {
                    v245 = 0;
                    goto LABEL_798;
                  }
                  goto LABEL_797;
                }
                v42 = v10;
    LABEL_59:
                *v39 = v10 - v42;
                **(_QWORD **)(a1 + 240) = 0;
                v14 = 801;
                goto LABEL_363;
              case 810:
                v190 = *(unsigned __int8 **)(a1 + 216);
                v189 = *(__int64 **)(a1 + 224);
                v191 = *v189;
                v192 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v190;
                *(_QWORD *)(a1 + 24) = v190;
                *(_QWORD *)(a1 + 40) = v191;
                v193 = (unsigned __int64)&v190[v191];
                *(_QWORD *)(a1 + 32) = &v190[v191];
                *(_BYTE *)(a1 + 48) = v192;
                if ( v192 || v191 )
                {
                  v125 = *(_DWORD *)(a1 + 1580);
                  LODWORD(v126) = *(_DWORD *)(a1 + 1512);
                  v781 = *(_DWORD *)(a1 + 1516);
                  LODWORD(v128) = *(_DWORD *)(a1 + 1520);
                  LODWORD(v129) = *(_DWORD *)(a1 + 1524);
                  v762 = *(_DWORD *)(a1 + 1528);
                  v131 = *(_DWORD *)(a1 + 1488);
                  v199 = *(_DWORD *)(a1 + 144);
                  v287 = *(_DWORD *)(a1 + 148);
                  v56 = *(_QWORD *)(a1 + 72);
                  LODWORD(v57) = *(_DWORD *)(a1 + 80);
                  v288 = *(_QWORD *)(a1 + 160);
                  v289 = *(_QWORD *)(v288 + 64);
                  goto LABEL_805;
                }
                v10 = v190;
                goto LABEL_823;
            }
          }
        }
        else if ( v5 > 779 )
        {
          if ( v5 == 780 )
          {
            v10 = *(unsigned __int8 **)(a1 + 216);
            v61 = *(__int64 **)(a1 + 224);
            v62 = *v61;
            v63 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v10;
            *(_QWORD *)(a1 + 24) = v10;
            *(_QWORD *)(a1 + 40) = v62;
            *(_QWORD *)(a1 + 32) = &v10[v62];
            *(_BYTE *)(a1 + 48) = v63;
            if ( v63 || v62 )
            {
              v125 = *(_DWORD *)(a1 + 1580);
              v126 = *(unsigned int *)(a1 + 1512);
              v127 = *(_DWORD *)(a1 + 1516);
              v128 = *(unsigned int *)(a1 + 1520);
              v129 = *(unsigned int *)(a1 + 1524);
              LODWORD(v130) = *(_DWORD *)(a1 + 1528);
              v131 = *(_DWORD *)(a1 + 1488);
              v147 = *(_DWORD *)(a1 + 144);
              v146 = *(_DWORD *)(a1 + 148);
              v56 = *(_QWORD *)(a1 + 72);
              LODWORD(v57) = *(_DWORD *)(a1 + 80);
              if ( v62 < 1 )
              {
                v148 = 0;
                goto LABEL_154;
              }
              goto LABEL_153;
            }
            v64 = v10;
    LABEL_77:
            *v61 = v10 - v64;
            **(_QWORD **)(a1 + 240) = 0;
            v14 = 780;
            goto LABEL_363;
          }
          if ( v5 == 787 )
          {
            v108 = *(unsigned __int8 **)(a1 + 216);
            v107 = *(__int64 **)(a1 + 224);
            v109 = *v107;
            v110 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v108;
            *(_QWORD *)(a1 + 24) = v108;
            *(_QWORD *)(a1 + 40) = v109;
            v111 = (unsigned __int64)&v108[v109];
            *(_QWORD *)(a1 + 32) = &v108[v109];
            *(_BYTE *)(a1 + 48) = v110;
            if ( v110 || v109 )
            {
              v125 = *(_DWORD *)(a1 + 1580);
              v126 = *(unsigned int *)(a1 + 1512);
              v779 = *(_DWORD *)(a1 + 1516);
              LODWORD(v128) = *(_DWORD *)(a1 + 1520);
              LODWORD(v129) = *(_DWORD *)(a1 + 1524);
              v760 = *(_DWORD *)(a1 + 1528);
              v131 = *(_DWORD *)(a1 + 1488);
              v147 = *(_DWORD *)(a1 + 144);
              v211 = *(_DWORD *)(a1 + 148);
              v56 = *(_QWORD *)(a1 + 72);
              LODWORD(v57) = *(_DWORD *)(a1 + 80);
              v212 = *(_QWORD *)(a1 + 160);
              v213 = *(_QWORD *)(v212 + 64);
              goto LABEL_756;
            }
            v10 = v108;
            goto LABEL_774;
          }
        }
        else
        {
          if ( v5 == 774 )
          {
            v10 = *(unsigned __int8 **)(a1 + 216);
            v21 = *(__int64 **)(a1 + 224);
            v22 = *v21;
            v23 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v10;
            *(_QWORD *)(a1 + 24) = v10;
            *(_QWORD *)(a1 + 40) = v22;
            *(_QWORD *)(a1 + 32) = &v10[v22];
            *(_BYTE *)(a1 + 48) = v23;
            if ( v23 || v22 )
            {
              v125 = *(_DWORD *)(a1 + 1580);
              v126 = *(unsigned int *)(a1 + 1512);
              v127 = *(_DWORD *)(a1 + 1516);
              v128 = *(unsigned int *)(a1 + 1520);
              v129 = *(unsigned int *)(a1 + 1524);
              v130 = *(unsigned int *)(a1 + 1528);
              v131 = *(_DWORD *)(a1 + 1488);
              LODWORD(v133) = *(_DWORD *)(a1 + 144);
              v132 = *(_DWORD *)(a1 + 148);
              v56 = *(_QWORD *)(a1 + 72);
              LODWORD(v57) = *(_DWORD *)(a1 + 80);
              if ( v22 < 1 )
              {
                v134 = 0;
                goto LABEL_137;
              }
              goto LABEL_136;
            }
            v24 = v10;
    LABEL_31:
            *v21 = v10 - v24;
            **(_QWORD **)(a1 + 240) = 0;
            v14 = 774;
            goto LABEL_363;
          }
          if ( v5 == 777 )
          {
            v10 = *(unsigned __int8 **)(a1 + 216);
            v93 = *(__int64 **)(a1 + 224);
            v94 = *v93;
            v95 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v10;
            *(_QWORD *)(a1 + 24) = v10;
            *(_QWORD *)(a1 + 40) = v94;
            *(_QWORD *)(a1 + 32) = &v10[v94];
            *(_BYTE *)(a1 + 48) = v95;
            if ( v95 || v94 )
            {
              v125 = *(_DWORD *)(a1 + 1580);
              v126 = *(unsigned int *)(a1 + 1512);
              v127 = *(_DWORD *)(a1 + 1516);
              v128 = *(unsigned int *)(a1 + 1520);
              v129 = *(unsigned int *)(a1 + 1524);
              LODWORD(v130) = *(_DWORD *)(a1 + 1528);
              v131 = *(_DWORD *)(a1 + 1488);
              v199 = *(_DWORD *)(a1 + 144);
              v198 = *(_DWORD *)(a1 + 148);
              v56 = *(_QWORD *)(a1 + 72);
              LODWORD(v57) = *(_DWORD *)(a1 + 80);
              if ( v94 < 1 )
              {
                v200 = 0;
                goto LABEL_749;
              }
              goto LABEL_748;
            }
            v96 = v10;
    LABEL_101:
            *v93 = v10 - v96;
            **(_QWORD **)(a1 + 240) = 0;
            v14 = 777;
            goto LABEL_363;
          }
        }
        return *(unsigned int *)(a1 + 312);
      }
      if ( v5 > 368 )
      {
        if ( v5 <= 681 )
        {
          if ( v5 <= 495 )
          {
            if ( v5 > 430 )
            {
              if ( v5 <= 452 )
              {
                if ( v5 > 444 )
                {
                  if ( v5 == 445 )
                  {
                    v10 = *(unsigned __int8 **)(a1 + 216);
                    v253 = *(__int64 **)(a1 + 224);
                    v254 = *v253;
                    v255 = *(unsigned __int8 *)(a1 + 248);
                    *(_QWORD *)(a1 + 16) = v10;
                    *(_QWORD *)(a1 + 24) = v10;
                    *(_QWORD *)(a1 + 40) = v254;
                    *(_QWORD *)(a1 + 32) = &v10[v254];
                    *(_BYTE *)(a1 + 48) = v255;
                    if ( v255 || v254 )
                    {
                      v770 = v3 - 1;
                      v49 = *(unsigned int *)(a1 + 1512);
                      v778 = *(_DWORD *)(a1 + 1516);
                      v50 = *(unsigned int *)(a1 + 1520);
                      v51 = *(unsigned int *)(a1 + 1524);
                      v763 = *(unsigned int *)(a1 + 1528);
                      v53 = *(unsigned int *)(a1 + 1488);
                      v55 = *(unsigned int *)(a1 + 144);
                      v54 = *(unsigned int *)(a1 + 148);
                      v332 = *(_QWORD *)(a1 + 72);
                      v333 = *(_DWORD *)(a1 + 80);
                      if ( v254 < 1 )
                      {
                        v334 = 0;
                        goto LABEL_458;
                      }
                      goto LABEL_457;
                    }
                    v256 = v10;
    LABEL_461:
                    *v253 = v10 - v256;
                    **(_QWORD **)(a1 + 240) = 0;
                    v14 = 445;
                    goto LABEL_363;
                  }
                  if ( v5 == 447 )
                  {
                    v10 = *(unsigned __int8 **)(a1 + 216);
                    v319 = *(__int64 **)(a1 + 224);
                    v320 = *v319;
                    v321 = *(unsigned __int8 *)(a1 + 248);
                    *(_QWORD *)(a1 + 16) = v10;
                    *(_QWORD *)(a1 + 24) = v10;
                    *(_QWORD *)(a1 + 40) = v320;
                    *(_QWORD *)(a1 + 32) = &v10[v320];
                    *(_BYTE *)(a1 + 48) = v321;
                    if ( v321 || v320 )
                    {
                      v770 = v3 - 1;
                      v49 = *(unsigned int *)(a1 + 1512);
                      v778 = *(_DWORD *)(a1 + 1516);
                      v50 = *(unsigned int *)(a1 + 1520);
                      v51 = *(unsigned int *)(a1 + 1524);
                      v763 = *(unsigned int *)(a1 + 1528);
                      v53 = *(unsigned int *)(a1 + 1488);
                      v55 = *(unsigned int *)(a1 + 144);
                      v54 = *(unsigned int *)(a1 + 148);
                      v332 = *(_QWORD *)(a1 + 72);
                      v333 = *(_DWORD *)(a1 + 80);
                      if ( v320 < 1 )
                        goto LABEL_473;
                      goto LABEL_469;
                    }
                    v322 = v10;
    LABEL_472:
                    *v319 = v10 - v322;
                    **(_QWORD **)(a1 + 240) = 0;
                    v14 = 447;
                    goto LABEL_363;
                  }
                  return *(unsigned int *)(a1 + 312);
                }
                if ( v5 != 431 )
                {
                  if ( v5 == 437 )
                  {
                    v292 = *(unsigned __int8 **)(a1 + 216);
                    v291 = *(__int64 **)(a1 + 224);
                    v293 = *v291;
                    v294 = *(unsigned __int8 *)(a1 + 248);
                    *(_QWORD *)(a1 + 16) = v292;
                    *(_QWORD *)(a1 + 24) = v292;
                    *(_QWORD *)(a1 + 40) = v293;
                    *(_QWORD *)(a1 + 32) = &v292[v293];
                    *(_BYTE *)(a1 + 48) = v294;
                    if ( v294 || v293 )
                    {
                      LODWORD(v49) = *(_DWORD *)(a1 + 1512);
                      v778 = *(_DWORD *)(a1 + 1516);
                      v50 = *(unsigned int *)(a1 + 1520);
                      v51 = *(unsigned int *)(a1 + 1524);
                      v52 = *(unsigned int *)(a1 + 1528);
                      v53 = *(unsigned int *)(a1 + 1488);
                      v55 = *(unsigned int *)(a1 + 144);
                      v54 = *(unsigned int *)(a1 + 148);
                      v56 = *(_QWORD *)(a1 + 72);
                      LODWORD(v57) = *(_DWORD *)(a1 + 80);
                      if ( v293 < 1 )
                      {
                        v749 = v292;
                        v342 = 0;
                      }
                      else
                      {
                        v342 = *v292;
                        v749 = v292 + 1;
                      }
                      goto LABEL_449;
                    }
                    v295 = v292;
    LABEL_452:
                    *v291 = v292 - v295;
                    **(_QWORD **)(a1 + 240) = 0;
                    v14 = 437;
                    goto LABEL_363;
                  }
                  return *(unsigned int *)(a1 + 312);
                }
                v10 = *(unsigned __int8 **)(a1 + 216);
                v138 = *(__int64 **)(a1 + 224);
                v139 = *v138;
                v140 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_QWORD *)(a1 + 40) = v139;
                *(_QWORD *)(a1 + 32) = &v10[v139];
                *(_BYTE *)(a1 + 48) = v140;
                if ( v140 || v139 )
                {
                  v49 = *(unsigned int *)(a1 + 1512);
                  v778 = *(_DWORD *)(a1 + 1516);
                  v50 = *(unsigned int *)(a1 + 1520);
                  v51 = *(unsigned int *)(a1 + 1524);
                  v52 = *(unsigned int *)(a1 + 1528);
                  v53 = *(unsigned int *)(a1 + 1488);
                  v55 = *(unsigned int *)(a1 + 144);
                  v54 = *(unsigned int *)(a1 + 148);
                  v56 = *(_QWORD *)(a1 + 72);
                  LODWORD(v57) = *(_DWORD *)(a1 + 80);
                  if ( v139 < 1 )
                  {
                    v329 = 0;
                    goto LABEL_420;
                  }
                  goto LABEL_419;
                }
                v141 = v10;
    LABEL_146:
                *v138 = v10 - v141;
                **(_QWORD **)(a1 + 240) = 0;
                v14 = 431;
                goto LABEL_363;
              }
              if ( v5 > 461 )
              {
                if ( v5 == 462 )
                {
    LABEL_478:
                  v407 = 462;
                  goto LABEL_479;
                }
                if ( v5 == 473 )
                {
                  v10 = *(unsigned __int8 **)(a1 + 216);
                  v275 = *(_BYTE *)(a1 + 248);
                  v276 = **(_QWORD **)(a1 + 224);
                  *(_QWORD *)(a1 + 16) = v10;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_BYTE *)(a1 + 48) = v275;
                  v277 = *(_QWORD *)(a1 + 1560);
                  *(_QWORD *)(a1 + 40) = v276;
                  *(_QWORD *)(a1 + 32) = &v10[v276];
                  v278 = (char *)(*(_QWORD *)(a1 + 1544) + v277);
                  *(_QWORD *)(a1 + 1544) = v278;
                  v279 = *(_QWORD *)(a1 + 1552) - v277;
                  *(_QWORD *)(a1 + 1552) = v279;
                  goto LABEL_483;
                }
              }
              else
              {
                if ( v5 == 453 )
                {
    LABEL_466:
                  v407 = 453;
    LABEL_479:
                  *(_DWORD *)a1 = v407;
                  return 14;
                }
                if ( v5 == 456 )
                {
                  v10 = *(unsigned __int8 **)(a1 + 216);
                  v219 = *(__int64 **)(a1 + 224);
                  v220 = *v219;
                  v221 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v10;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_QWORD *)(a1 + 40) = v220;
                  *(_QWORD *)(a1 + 32) = &v10[v220];
                  *(_BYTE *)(a1 + 48) = v221;
                  if ( v221 || v220 )
                  {
                    v49 = *(unsigned int *)(a1 + 1512);
                    v778 = *(_DWORD *)(a1 + 1516);
                    v50 = *(unsigned int *)(a1 + 1520);
                    v51 = *(unsigned int *)(a1 + 1524);
                    v52 = *(unsigned int *)(a1 + 1528);
                    v53 = *(unsigned int *)(a1 + 1488);
                    v55 = *(unsigned int *)(a1 + 144);
                    v54 = *(unsigned int *)(a1 + 148);
                    v337 = *(_QWORD *)(a1 + 72);
                    v338 = *(_DWORD *)(a1 + 80);
                    if ( v220 < 1 )
                      goto LABEL_507;
                    goto LABEL_501;
                  }
                  v222 = v10;
    LABEL_506:
                  *v219 = v10 - v222;
                  **(_QWORD **)(a1 + 240) = 0;
                  v14 = 456;
                  goto LABEL_363;
                }
              }
            }
            else
            {
              switch ( v5 )
              {
                case 369:
                  v10 = *(unsigned __int8 **)(a1 + 216);
                  v232 = *(__int64 **)(a1 + 224);
                  v233 = *v232;
                  v234 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v10;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_QWORD *)(a1 + 40) = v233;
                  *(_QWORD *)(a1 + 32) = &v10[v233];
                  *(_BYTE *)(a1 + 48) = v234;
                  if ( v234 || v233 )
                  {
                    v768 = v3 - 1;
                    v82 = *(_DWORD *)(a1 + 1512);
                    v81 = *(_DWORD *)(a1 + 1516);
                    v742 = *(_DWORD *)(a1 + 1520);
                    v80 = *(unsigned int *)(a1 + 1524);
                    v79 = *(unsigned int *)(a1 + 1528);
                    v8 = *(_DWORD *)(a1 + 1488);
                    v83 = *(_DWORD *)(a1 + 144);
                    v84 = *(_DWORD *)(a1 + 148);
                    v85 = *(_QWORD *)(a1 + 72);
                    v86 = *(_DWORD *)(a1 + 80);
                    if ( v233 < 1 )
                    {
                      v290 = 0;
                      goto LABEL_359;
                    }
                    goto LABEL_358;
                  }
                  v235 = v10;
    LABEL_245:
                  *v232 = v10 - v235;
                  **(_QWORD **)(a1 + 240) = 0;
                  v14 = 369;
                  goto LABEL_363;
                case 370:
                  v10 = *(unsigned __int8 **)(a1 + 216);
                  v31 = *(__int64 **)(a1 + 224);
                  v32 = *v31;
                  v33 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v10;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_QWORD *)(a1 + 40) = v32;
                  *(_QWORD *)(a1 + 32) = &v10[v32];
                  *(_BYTE *)(a1 + 48) = v33;
                  if ( v33 || v32 )
                  {
                    v768 = v3 - 1;
                    v82 = *(_DWORD *)(a1 + 1512);
                    v81 = *(_DWORD *)(a1 + 1516);
                    v742 = *(_DWORD *)(a1 + 1520);
                    v80 = *(unsigned int *)(a1 + 1524);
                    v79 = *(unsigned int *)(a1 + 1528);
                    v8 = *(_DWORD *)(a1 + 1488);
                    v83 = *(_DWORD *)(a1 + 144);
                    v84 = *(_DWORD *)(a1 + 148);
                    v284 = *(_QWORD *)(a1 + 72);
                    j = *(_DWORD *)(a1 + 80);
                    if ( v32 < 1 )
                    {
                      v286 = 0;
                      goto LABEL_376;
                    }
                    goto LABEL_375;
                  }
                  v34 = v10;
    LABEL_44:
                  *v31 = v10 - v34;
                  **(_QWORD **)(a1 + 240) = 0;
                  v14 = 370;
                  goto LABEL_363;
                case 381:
                  v10 = *(unsigned __int8 **)(a1 + 216);
                  v236 = *(__int64 **)(a1 + 224);
                  v237 = *v236;
                  v238 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v10;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_QWORD *)(a1 + 40) = v237;
                  *(_QWORD *)(a1 + 32) = &v10[v237];
                  *(_BYTE *)(a1 + 48) = v238;
                  if ( v238 || v237 )
                  {
                    v768 = v3 - 1;
                    v82 = *(_DWORD *)(a1 + 1512);
                    v81 = *(_DWORD *)(a1 + 1516);
                    v742 = *(_DWORD *)(a1 + 1520);
                    v80 = *(unsigned int *)(a1 + 1524);
                    v79 = *(unsigned int *)(a1 + 1528);
                    v8 = *(_DWORD *)(a1 + 1488);
                    v83 = *(_DWORD *)(a1 + 144);
                    v84 = *(_DWORD *)(a1 + 148);
                    v85 = *(_QWORD *)(a1 + 72);
                    v86 = *(_DWORD *)(a1 + 80);
                    if ( v237 < 1 )
                    {
                      v328 = 0;
                      goto LABEL_404;
                    }
                    goto LABEL_403;
                  }
                  v239 = v10;
    LABEL_250:
                  *v236 = v10 - v239;
                  **(_QWORD **)(a1 + 240) = 0;
                  v14 = 381;
                  goto LABEL_363;
              }
            }
            return *(unsigned int *)(a1 + 312);
          }
          if ( v5 <= 550 )
          {
            if ( v5 > 516 )
            {
              if ( v5 > 529 )
              {
                if ( v5 == 530 )
                {
    LABEL_523:
                  *(_DWORD *)a1 = 530;
                  return 9;
                }
                if ( v5 == 536 )
                {
                  v10 = *(unsigned __int8 **)(a1 + 216);
                  v271 = *(__int64 **)(a1 + 224);
                  v272 = *v271;
                  v273 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v10;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_QWORD *)(a1 + 40) = v272;
                  *(_QWORD *)(a1 + 32) = &v10[v272];
                  *(_BYTE *)(a1 + 48) = v273;
                  if ( v273 || v272 )
                  {
                    v261 = *(_DWORD *)(a1 + 1608);
                    v49 = *(unsigned int *)(a1 + 1512);
                    v778 = *(_DWORD *)(a1 + 1516);
                    v50 = *(unsigned int *)(a1 + 1520);
                    v51 = *(unsigned int *)(a1 + 1524);
                    v52 = *(unsigned int *)(a1 + 1528);
                    v53 = *(unsigned int *)(a1 + 1488);
                    LODWORD(v55) = *(_DWORD *)(a1 + 144);
                    LODWORD(v54) = *(_DWORD *)(a1 + 148);
                    v339 = *(_QWORD *)(a1 + 72);
                    v340 = *(_DWORD *)(a1 + 80);
                    if ( v272 < 1 )
                    {
                      v341 = 0;
                      goto LABEL_535;
                    }
                    goto LABEL_534;
                  }
                  v274 = v10;
    LABEL_538:
                  *v271 = v10 - v274;
                  **(_QWORD **)(a1 + 240) = 0;
                  v14 = 536;
                  goto LABEL_363;
                }
              }
              else
              {
                if ( v5 == 517 )
                {
                  v10 = *(unsigned __int8 **)(a1 + 216);
                  v201 = *(__int64 **)(a1 + 224);
                  v202 = *v201;
                  v203 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v10;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_QWORD *)(a1 + 40) = v202;
                  *(_QWORD *)(a1 + 32) = &v10[v202];
                  *(_BYTE *)(a1 + 48) = v203;
                  if ( v203 || v202 )
                  {
                    v330 = *(_DWORD *)(a1 + 1608);
                    v49 = *(unsigned int *)(a1 + 1512);
                    v778 = *(_DWORD *)(a1 + 1516);
                    v50 = *(unsigned int *)(a1 + 1520);
                    v51 = *(unsigned int *)(a1 + 1524);
                    v52 = *(unsigned int *)(a1 + 1528);
                    v53 = *(unsigned int *)(a1 + 1488);
                    LODWORD(v55) = *(_DWORD *)(a1 + 144);
                    LODWORD(v54) = *(_DWORD *)(a1 + 148);
                    v56 = *(_QWORD *)(a1 + 72);
                    LODWORD(v57) = *(_DWORD *)(a1 + 80);
                    if ( v202 < 1 )
                    {
                      v331 = 0;
                      goto LABEL_514;
                    }
                    goto LABEL_513;
                  }
                  v204 = v10;
    LABEL_212:
                  *v201 = v10 - v204;
                  **(_QWORD **)(a1 + 240) = 0;
                  v14 = 517;
                  goto LABEL_363;
                }
                if ( v5 == 520 )
                {
                  v10 = *(unsigned __int8 **)(a1 + 216);
                  v301 = *(__int64 **)(a1 + 224);
                  v302 = *v301;
                  v303 = *(unsigned __int8 *)(a1 + 248);
                  *(_QWORD *)(a1 + 16) = v10;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_QWORD *)(a1 + 40) = v302;
                  *(_QWORD *)(a1 + 32) = &v10[v302];
                  *(_BYTE *)(a1 + 48) = v303;
                  if ( v303 || v302 )
                  {
                    LODWORD(v343) = *(_DWORD *)(a1 + 1608);
                    v49 = *(unsigned int *)(a1 + 1512);
                    v778 = *(_DWORD *)(a1 + 1516);
                    v50 = *(unsigned int *)(a1 + 1520);
                    v51 = *(unsigned int *)(a1 + 1524);
                    v52 = *(unsigned int *)(a1 + 1528);
                    v53 = *(unsigned int *)(a1 + 1488);
                    LODWORD(v55) = *(_DWORD *)(a1 + 144);
                    LODWORD(v54) = *(_DWORD *)(a1 + 148);
                    v344 = *(_QWORD *)(a1 + 72);
                    k = *(_DWORD *)(a1 + 80);
                    if ( v302 < 1 )
                    {
                      v346 = 0;
                      goto LABEL_526;
                    }
                    goto LABEL_525;
                  }
                  v304 = v10;
    LABEL_529:
                  *v301 = v10 - v304;
                  **(_QWORD **)(a1 + 240) = 0;
                  v14 = 520;
                  goto LABEL_363;
                }
              }
            }
            else if ( v5 == 496 )
            {
              v49 = *(unsigned int *)(a1 + 1512);
              v778 = *(_DWORD *)(a1 + 1516);
              v50 = *(unsigned int *)(a1 + 1520);
              v51 = *(unsigned int *)(a1 + 1524);
              v52 = *(unsigned int *)(a1 + 1528);
              v53 = *(unsigned int *)(a1 + 1488);
              v10 = *(unsigned __int8 **)(a1 + 216);
              v97 = **(_QWORD **)(a1 + 224);
              v98 = *(_BYTE *)(a1 + 248);
              *(_QWORD *)(a1 + 16) = v10;
              *(_QWORD *)(a1 + 24) = v10;
              *(_QWORD *)(a1 + 40) = v97;
              *(_QWORD *)(a1 + 32) = &v10[v97];
              *(_BYTE *)(a1 + 48) = v98;
              goto LABEL_353;
            }
            return *(unsigned int *)(a1 + 312);
          }
          if ( v5 > 607 )
          {
            if ( v5 > 639 )
            {
              if ( v5 == 640 )
              {
                v10 = *(unsigned __int8 **)(a1 + 216);
                v280 = *(__int64 **)(a1 + 224);
                v281 = *v280;
                v282 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_QWORD *)(a1 + 40) = v281;
                *(_QWORD *)(a1 + 32) = &v10[v281];
                *(_BYTE *)(a1 + 48) = v282;
                if ( v282 || v281 )
                {
                  LODWORD(v49) = *(_DWORD *)(a1 + 1512);
                  v778 = *(_DWORD *)(a1 + 1516);
                  LODWORD(v50) = *(_DWORD *)(a1 + 1520);
                  LODWORD(v51) = *(_DWORD *)(a1 + 1524);
                  LODWORD(v52) = *(_DWORD *)(a1 + 1528);
                  LODWORD(v53) = *(_DWORD *)(a1 + 1488);
                  v335 = *(_DWORD *)(a1 + 144);
                  v330 = *(_DWORD *)(a1 + 148);
                  v56 = *(_QWORD *)(a1 + 72);
                  LODWORD(v57) = *(_DWORD *)(a1 + 80);
                  if ( v281 < 1 )
                  {
                    v336 = 0;
                    goto LABEL_626;
                  }
                  goto LABEL_625;
                }
                v283 = v10;
    LABEL_283:
                *v280 = v10 - v283;
                **(_QWORD **)(a1 + 240) = 0;
                v14 = 640;
                goto LABEL_363;
              }
              if ( v5 == 651 )
              {
                v324 = *(unsigned __int8 **)(a1 + 216);
                v323 = *(__int64 **)(a1 + 224);
                v325 = *v323;
                v326 = *(unsigned __int8 *)(a1 + 248);
                *(_QWORD *)(a1 + 16) = v324;
                *(_QWORD *)(a1 + 24) = v324;
                *(_QWORD *)(a1 + 40) = v325;
                *(_QWORD *)(a1 + 32) = &v324[v325];
                *(_BYTE *)(a1 + 48) = v326;
                if ( v326 || v325 )
                {
                  v347 = *(_DWORD *)(a1 + 1512);
                  v348 = *(_DWORD *)(a1 + 1516);
                  v349 = *(unsigned int *)(a1 + 1520);
                  v350 = *(unsigned int *)(a1 + 1524);
                  v764 = *(unsigned int *)(a1 + 1528);
                  LODWORD(v53) = *(_DWORD *)(a1 + 1488);
                  v335 = *(_DWORD *)(a1 + 144);
                  v351 = *(_DWORD *)(a1 + 148);
                  v56 = *(_QWORD *)(a1 + 72);
                  LODWORD(v57) = *(_DWORD *)(a1 + 80);
                  if ( v325 < 1 )
                  {
                    v750 = v324;
                    v352 = 0;
                    goto LABEL_435;
                  }
                  goto LABEL_434;
                }
                v327 = v324;
    LABEL_438:
                *v323 = v324 - v327;
                **(_QWORD **)(a1 + 240) = 0;
                v14 = 651;
                goto LABEL_363;
              }
              return *(unsigned int *)(a1 + 312);
            }
            if ( v5 != 608 )
            {
              if ( v5 == 625 )
              {
                v715 = (InputSystem *)(a1 + 16);
                v310 = *(_QWORD *)(a1 + 216);
                v311 = *(_BYTE *)(a1 + 248);
                v312 = **(_QWORD **)(a1 + 224);
                *(_QWORD *)(a1 + 16) = v310;
                *(_QWORD *)(a1 + 24) = v310;
                *(_BYTE *)(a1 + 48) = v311;
                v313 = *(_QWORD *)(a1 + 1560);
                *(_QWORD *)(a1 + 40) = v312;
                *(_QWORD *)(a1 + 32) = v310 + v312;
                v314 = (char *)(*(_QWORD *)(a1 + 1544) + v313);
                *(_QWORD *)(a1 + 1544) = v314;
                v315 = *(_QWORD *)(a1 + 1552) - v313;
                *(_QWORD *)(a1 + 1552) = v315;
                goto LABEL_575;
              }
              return *(unsigned int *)(a1 + 312);
            }
            v112 = 608;
          }
          else
          {
            if ( v5 > 583 )
            {
              if ( v5 == 584 )
                goto LABEL_606;
              if ( v5 == 588 )
              {
                v769 = v3 - 1;
                v260 = 0;
                v261 = *(_DWORD *)(a1 + 1608);
                v49 = *(unsigned int *)(a1 + 1512);
                v778 = *(_DWORD *)(a1 + 1516);
                v50 = *(unsigned int *)(a1 + 1520);
                v51 = *(unsigned int *)(a1 + 1524);
                v52 = *(unsigned int *)(a1 + 1528);
                LODWORD(v53) = *(_DWORD *)(a1 + 1488);
                v263 = *(_QWORD *)(a1 + 216);
                v262 = *(unsigned __int64 **)(a1 + 224);
                v264 = *v262;
                *(_QWORD *)(a1 + 16) = v263;
                *(_QWORD *)(a1 + 24) = v263;
                *(_QWORD *)(a1 + 40) = v264;
                v265 = v263 + v264;
                LOBYTE(v264) = *(_BYTE *)(a1 + 248);
                *(_QWORD *)(a1 + 32) = v265;
                *(_BYTE *)(a1 + 48) = v264;
                v266 = *v262;
                goto LABEL_564;
              }
              return *(unsigned int *)(a1 + 312);
            }
            if ( v5 != 551 )
            {
              if ( v5 == 559 )
              {
                v10 = *(unsigned __int8 **)(a1 + 216);
                v296 = *(_BYTE *)(a1 + 248);
                v297 = **(_QWORD **)(a1 + 224);
                *(_QWORD *)(a1 + 16) = v10;
                *(_QWORD *)(a1 + 24) = v10;
                *(_BYTE *)(a1 + 48) = v296;
                v298 = *(_QWORD *)(a1 + 1560);
                *(_QWORD *)(a1 + 40) = v297;
                *(_QWORD *)(a1 + 32) = &v10[v297];
                v299 = (char *)(*(_QWORD *)(a1 + 1544) + v298);
                *(_QWORD *)(a1 + 1544) = v299;
                v300 = *(_QWORD *)(a1 + 1552) - v298;
                *(_QWORD *)(a1 + 1552) = v300;
                goto LABEL_543;
              }
              return *(unsigned int *)(a1 + 312);
            }
            v112 = 551;
          }
    LABEL_234:
          *(_DWORD *)a1 = v112;
          return 5;
        }
        if ( v5 <= 704 )
        {
          if ( v5 == 682 )
          {
            v10 = *(unsigned __int8 **)(a1 + 216);
            v65 = *(__int64 **)(a1 + 224);
            v66 = *v65;
            v67 = *(unsigned __int8 *)(a1 + 248);
            *(_QWORD *)(a1 + 16) = v10;
            *(_QWORD *)(a1 + 24) = v10;
            *(_QWORD *)(a1 + 40) = v66;
            *(_QWORD *)(a1 + 32) = &v10[v66];
            *(_BYTE *)(a1 + 48) = v67;
            if ( v67 || v66 )
            {
              v126 = *(unsigned int *)(a1 + 1512);
              v127 = *(_DWORD *)(a1 + 1516);
              v128 = *(unsigned int *)(a1 + 1520);
              v129 = *(unsigned int *)(a1 + 1524);
              v130 = *(unsigned int *)(a1 + 1528);
              v131 = *(_DWORD *)(a1 + 1488);
              LODWORD(v55) = *(_DWORD *)(a1 + 144);
              v196 = *(_DWORD *)(a1 + 148);
              v56 = *(_QWORD *)(a1 + 72);
              LODWORD(v57) = *(_DWORD *)(a1 + 80);
              if ( v66 >= 1 )
                goto LABEL_655;
              for ( i = 0; ; i = 0 )
              {
                while ( 1 )
                {
                  v56 |= i << (56 - (unsigned __int8)v57);
                  LODWORD(v57) = v57 + 8;
                  while ( (int)v57 > 7 )
                  {
                    v474 = HIBYTE(v56);
                    v56 <<= 8;
                    v57 = (unsigned int)(v57 - 8);
                    v469 = *(_WORD **)(a1 + 168);
                    v196 <<= 8;
                    LODWORD(v55) = (unsigned __int8)v474 | ((_DWORD)v55 << 8);
                    while ( HIBYTE(v196) )
                    {
                      v470 = (unsigned __int16)*v469;
                      v268 = v470 * (v196 >> 11);
                      v471 = (unsigned int)v55 - v268;
                      if ( (unsigned int)v55 < v268 )
                      {
                        v780 = v127;
                        *v469 = v470 + ((unsigned int)(2048 - v470) >> 5);
                        v761 = v130;
                        if ( (unsigned int)v130 > 6 )
                        {
                          v737 = __dst[(v131 - (_DWORD)v126) & v4];
                          v269 = a1 + 448;
                          v270 = *(_QWORD *)(a1 + 512);
                          if ( (int)v57 <= 23 )
                          {
                            v173 = *(_QWORD *)(a1 + 32);
                            if ( (unsigned __int64)(v10 + 4) >= v173 )
                            {
                              v269 = a1 + 448;
                              while ( (int)v57 <= 23 )
                              {
                                if ( !*(_BYTE *)(a1 + 48) )
                                {
                                  *(_QWORD *)(a1 + 160) = v269;
                                  *(_DWORD *)(a1 + 144) = v55;
                                  *(_DWORD *)(a1 + 148) = v268;
                                  *(_QWORD *)(a1 + 72) = v56;
                                  *(_DWORD *)(a1 + 80) = v57;
                                  *(_QWORD *)(a1 + 24) = v10;
                                  *(_DWORD *)(a1 + 1576) = v737;
                                  *(_DWORD *)(a1 + 1512) = v126;
                                  *(_DWORD *)(a1 + 1516) = v780;
                                  *(_DWORD *)(a1 + 1520) = v128;
                                  *(_DWORD *)(a1 + 1524) = v129;
                                  *(_DWORD *)(a1 + 1528) = v761;
                                  *(_DWORD *)(a1 + 1488) = v131;
                                  v170 = *(unsigned __int8 **)(a1 + 16);
                                  v169 = *(__int64 **)(a1 + 224);
                                  goto LABEL_706;
                                }
                                v170 = v10;
    LABEL_688:
                                if ( (unsigned __int64)v170 >= v173 )
                                {
                                  v499 = 0;
                                }
                                else
                                {
                                  v500 = *v170++;
                                  v499 = v500;
                                }
                                v56 |= v499 << (56 - (unsigned __int8)v57);
                                v10 = v170;
                                LODWORD(v57) = v57 + 8;
                              }
                            }
                            else
                            {
                              v56 |= (((unsigned __int64)*v10 << 24)
                                    | ((unsigned __int64)v10[1] << 16)
                                    | ((unsigned __int64)v10[2] << 8)
                                    | v10[3]) << (32 - (unsigned __int8)v57);
                              v10 += 4;
                              LODWORD(v57) = v57 + 32;
                              v269 = a1 + 448;
                            }
                          }
                          v727 = v55;
                          v712 = v126;
                          v501 = HIWORD(v56) + 1;
                          if ( v501 > *(_DWORD *)(v270 + 16) )
                          {
                            v772 = v4;
                            v717 = v2;
                            v523 = *(_DWORD *)(v270 + 20) - 65;
                            do
                            {
                              v524 = (unsigned int)(v523 + 64);
                              ++v523;
                            }
                            while ( v501 > *(_DWORD *)(v270 + 4LL * (unsigned int)v524 + 28) );
                            v752 = v268;
                            v525 = *(int *)(v270 + 4 * v524 + 96) + (__int64)(int)(v56 >> -(char)v523);
                            if ( (unsigned int)v525 >= *(_DWORD *)(v269 + 72) )
                              v525 = 0;
                            v503 = *(unsigned __int16 *)(*(_QWORD *)(v270 + 184) + 2 * v525);
                            v504 = v523 + 64;
                          }
                          else
                          {
                            v752 = v268;
                            v772 = v4;
                            v717 = v2;
                            v502 = *(_DWORD *)(*(_QWORD *)(v270 + 168)
                                             + 4 * (v56 >> (64 - (unsigned __int8)*(_DWORD *)(v270 + 8))));
                            v503 = (unsigned __int16)v502;
                            v504 = HIWORD(v502);
                          }
                          v505 = v57;
                          v506 = v56;
                          v507 = v129;
                          v702 = v3;
                          v508 = v10;
                          v509 = *(_DWORD *)(v269 + 24);
                          if ( v509 <= (unsigned int)v503 )
                          {
                            v510 = v269;
                            v511 = v128;
                            lzham_assert(
                              "i < m_size",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                              131);
                            v269 = v510;
                            LODWORD(v128) = v511;
                            v509 = *(_DWORD *)(v510 + 24);
                          }
                          v512 = v131;
                          v743 = v128;
                          v513 = *(_QWORD *)(v269 + 16);
                          v514 = *(unsigned __int16 *)(v513 + 2LL * (unsigned int)v503) + 1;
                          if ( v509 <= (unsigned int)v503 )
                          {
                            v515 = v269;
                            lzham_assert(
                              "i < m_size",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                              131);
                            v269 = v515;
                            v513 = *(_QWORD *)(v515 + 16);
                          }
                          *(_WORD *)(v513 + 2 * v503) = v514;
                          if ( v514 >= 0x10000 )
                          {
                            v516 = v269;
                            lzham_assert(
                              "freq <= UINT16_MAX",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                              737);
                            v269 = v516;
                          }
                          v56 = v506 << v504;
                          v57 = (unsigned int)(v505 - v504);
                          v517 = *(_DWORD *)(v269 + 84) - 1;
                          *(_DWORD *)(v269 + 84) = v517;
                          v10 = v508;
                          v129 = v507;
                          if ( !v517 )
                          {
                            lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v269, 0xFFFFFFFF, 0);
                            v57 = (unsigned int)(v505 - v504);
                            v56 = v506 << v504;
                            v129 = v507;
                          }
                          v495 = v512;
                          __dst[v512] = v503 ^ v737;
                        }
                        else
                        {
                          v308 = a1 + 320;
                          v309 = *(_QWORD *)(a1 + 384);
                          if ( (int)v57 <= 23 )
                          {
                            v218 = *(_QWORD *)(a1 + 32);
                            if ( (unsigned __int64)(v10 + 4) >= v218 )
                            {
                              while ( (int)v57 <= 23 )
                              {
                                if ( !*(_BYTE *)(a1 + 48) )
                                {
                                  *(_QWORD *)(a1 + 160) = v308;
                                  *(_DWORD *)(a1 + 144) = v55;
                                  *(_DWORD *)(a1 + 148) = v268;
                                  *(_QWORD *)(a1 + 72) = v56;
                                  *(_DWORD *)(a1 + 80) = v57;
                                  *(_QWORD *)(a1 + 24) = v10;
                                  *(_DWORD *)(a1 + 1512) = v126;
                                  *(_DWORD *)(a1 + 1516) = v780;
                                  *(_DWORD *)(a1 + 1520) = v128;
                                  *(_DWORD *)(a1 + 1524) = v129;
                                  *(_DWORD *)(a1 + 1528) = v761;
                                  *(_DWORD *)(a1 + 1488) = v131;
                                  v215 = *(unsigned __int8 **)(a1 + 16);
                                  v214 = *(__int64 **)(a1 + 224);
                                  goto LABEL_679;
                                }
                                v215 = v10;
    LABEL_663:
                                if ( (unsigned __int64)v215 >= v218 )
                                {
                                  v476 = 0;
                                }
                                else
                                {
                                  v477 = *v215++;
                                  v476 = v477;
                                }
                                v56 |= v476 << (56 - (unsigned __int8)v57);
                                v10 = v215;
                                LODWORD(v57) = v57 + 8;
                              }
                            }
                            else
                            {
                              v56 |= (((unsigned __int64)*v10 << 24)
                                    | ((unsigned __int64)v10[1] << 16)
                                    | ((unsigned __int64)v10[2] << 8)
                                    | v10[3]) << (32 - (unsigned __int8)v57);
                              v10 += 4;
                              LODWORD(v57) = v57 + 32;
                            }
                          }
                          v478 = v10;
                          v727 = v55;
                          v712 = v126;
                          v479 = HIWORD(v56) + 1;
                          if ( v479 > *(_DWORD *)(v309 + 16) )
                          {
                            v772 = v4;
                            v717 = v2;
                            v496 = *(_DWORD *)(v309 + 20) - 65;
                            do
                            {
                              v497 = (unsigned int)(v496 + 64);
                              ++v496;
                            }
                            while ( v479 > *(_DWORD *)(v309 + 4LL * (unsigned int)v497 + 28) );
                            v752 = v268;
                            v498 = *(int *)(v309 + 4 * v497 + 96) + (__int64)(int)(v56 >> -(char)v496);
                            if ( (unsigned int)v498 >= *(_DWORD *)(v308 + 72) )
                              v498 = 0;
                            v481 = *(unsigned __int16 *)(*(_QWORD *)(v309 + 184) + 2 * v498);
                            v482 = v496 + 64;
                          }
                          else
                          {
                            v752 = v268;
                            v772 = v4;
                            v717 = v2;
                            v480 = *(_DWORD *)(*(_QWORD *)(v309 + 168)
                                             + 4 * (v56 >> (64 - (unsigned __int8)*(_DWORD *)(v309 + 8))));
                            v481 = (unsigned __int16)v480;
                            v482 = HIWORD(v480);
                          }
                          v483 = v57;
                          v484 = v56;
                          v485 = v129;
                          v702 = v3;
                          v486 = *(_DWORD *)(v308 + 24);
                          if ( v486 <= (unsigned int)v481 )
                          {
                            v487 = v308;
                            v488 = v128;
                            lzham_assert(
                              "i < m_size",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                              131);
                            v308 = v487;
                            LODWORD(v128) = v488;
                            v486 = *(_DWORD *)(v487 + 24);
                          }
                          v489 = v131;
                          v743 = v128;
                          v490 = *(_QWORD *)(v308 + 16);
                          v491 = *(unsigned __int16 *)(v490 + 2LL * (unsigned int)v481) + 1;
                          if ( v486 <= (unsigned int)v481 )
                          {
                            v492 = v308;
                            lzham_assert(
                              "i < m_size",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                              131);
                            v308 = v492;
                            v490 = *(_QWORD *)(v492 + 16);
                          }
                          *(_WORD *)(v490 + 2 * v481) = v491;
                          if ( v491 >= 0x10000 )
                          {
                            v493 = v308;
                            lzham_assert(
                              "freq <= UINT16_MAX",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                              711);
                            v308 = v493;
                          }
                          v56 = v484 << v482;
                          v57 = (unsigned int)(v483 - v482);
                          v494 = *(_DWORD *)(v308 + 84) - 1;
                          *(_DWORD *)(v308 + 84) = v494;
                          v10 = v478;
                          v129 = v485;
                          if ( !v494 )
                          {
                            lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v308, 0xFFFFFFFF, 0);
                            v57 = (unsigned int)(v483 - v482);
                            v56 = v484 << v482;
                            v129 = v485;
                          }
                          v495 = v489;
                          __dst[v489] = v481;
                        }
                        v2 = v717;
                        v4 = v772;
                        v127 = v780;
                        v130 = lzham::s_literal_next_state[v761];
                        v131 = v495 + 1;
                        v3 = v702;
                        v126 = v712;
                        LODWORD(v55) = v727;
                        v128 = v743;
                        if ( v131 <= v772 )
                        {
                          v736 = v752;
                          goto LABEL_630;
                        }
                        *(_DWORD *)(a1 + 144) = v727;
                        *(_DWORD *)(a1 + 148) = v752;
                        *(_QWORD *)(a1 + 72) = v56;
                        *(_DWORD *)(a1 + 80) = v57;
                        *(_QWORD *)(a1 + 24) = v10;
                        *(_DWORD *)(a1 + 1512) = v712;
                        *(_DWORD *)(a1 + 1516) = v780;
                        *(_DWORD *)(a1 + 1520) = v743;
                        *(_DWORD *)(a1 + 1524) = v129;
                        *(_DWORD *)(a1 + 1528) = v130;
                        *(_DWORD *)(a1 + 1488) = v131;
                        v518 = *(unsigned int *)(a1 + 1568);
                        v519 = *(unsigned int *)(a1 + 1492);
                        v230 = (char *)(*(_QWORD *)(a1 + 200) + v519 + v518);
                        *(_QWORD *)(a1 + 1544) = v230;
                        v231 = v702 - (unsigned int)v518 - (unsigned int)v519;
                        *(_QWORD *)(a1 + 1552) = v231;
                        *(_DWORD *)(a1 + 1568) = 0;
                        *(_DWORD *)(a1 + 1492) = v772 & v702;
                        goto LABEL_708;
                      }
                      *v469 -= *v469 >> 5;
                      v132 = v196 - v268;
                      v137 = (_WORD *)(a1 + 2LL * (unsigned int)v130 + 1368);
                      v125 = 1;
                      v133 = v471;
                      while ( !HIBYTE(v132) )
                      {
                        *(_QWORD *)(a1 + 168) = v137;
                        while ( (int)v57 <= 7 )
                        {
                          if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                          {
                            if ( *(_BYTE *)(a1 + 48) != 1 )
                            {
                              *(_DWORD *)(a1 + 144) = v133;
                              *(_DWORD *)(a1 + 148) = v132;
                              *(_QWORD *)(a1 + 72) = v56;
                              *(_DWORD *)(a1 + 80) = v57;
                              *(_QWORD *)(a1 + 24) = v10;
                              *(_DWORD *)(a1 + 1580) = v125;
                              *(_DWORD *)(a1 + 1512) = v126;
                              *(_DWORD *)(a1 + 1516) = v127;
                              *(_DWORD *)(a1 + 1520) = v128;
                              *(_DWORD *)(a1 + 1524) = v129;
                              *(_DWORD *)(a1 + 1528) = v130;
                              *(_DWORD *)(a1 + 1488) = v131;
                              v24 = *(unsigned __int8 **)(a1 + 16);
                              v21 = *(__int64 **)(a1 + 224);
                              goto LABEL_31;
                            }
                            v134 = 0;
                          }
                          else
                          {
    LABEL_136:
                            v135 = *v10++;
                            v134 = v135;
                          }
    LABEL_137:
                          v56 |= v134 << (56 - (unsigned __int8)v57);
                          LODWORD(v57) = v57 + 8;
                        }
                        v136 = HIBYTE(v56);
                        v56 <<= 8;
                        v57 = (unsigned int)(v57 - 8);
                        v137 = *(_WORD **)(a1 + 168);
                        v132 <<= 8;
                        v133 = (unsigned int)(unsigned __int8)v136 | ((_DWORD)v133 << 8);
                      }
                      v472 = (unsigned __int16)*v137;
                      v158 = v472 * (v132 >> 11);
                      v199 = v133 - v158;
                      if ( (unsigned int)v133 >= v158 )
                      {
                        *v137 -= *v137 >> 5;
                        v198 = v132 - v158;
                        v473 = (_WORD *)(a1 + 2LL * (unsigned int)v130 + 1392);
                        while ( !HIBYTE(v198) )
                        {
                          *(_QWORD *)(a1 + 168) = v473;
                          while ( (int)v57 <= 7 )
                          {
                            if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                            {
                              if ( *(_BYTE *)(a1 + 48) != 1 )
                              {
                                *(_DWORD *)(a1 + 144) = v199;
                                *(_DWORD *)(a1 + 148) = v198;
                                *(_QWORD *)(a1 + 72) = v56;
                                *(_DWORD *)(a1 + 80) = v57;
                                *(_QWORD *)(a1 + 24) = v10;
                                *(_DWORD *)(a1 + 1580) = v125;
                                *(_DWORD *)(a1 + 1512) = v126;
                                *(_DWORD *)(a1 + 1516) = v127;
                                *(_DWORD *)(a1 + 1520) = v128;
                                *(_DWORD *)(a1 + 1524) = v129;
                                *(_DWORD *)(a1 + 1528) = v130;
                                *(_DWORD *)(a1 + 1488) = v131;
                                v96 = *(unsigned __int8 **)(a1 + 16);
                                v93 = *(__int64 **)(a1 + 224);
                                goto LABEL_101;
                              }
                              v200 = 0;
                            }
                            else
                            {
    LABEL_748:
                              v531 = *v10++;
                              v200 = v531;
                            }
    LABEL_749:
                            v56 |= v200 << (56 - (unsigned __int8)v57);
                            LODWORD(v57) = v57 + 8;
                          }
                          v530 = HIBYTE(v56);
                          v56 <<= 8;
                          v57 = (unsigned int)(v57 - 8);
                          v473 = *(_WORD **)(a1 + 168);
                          v198 <<= 8;
                          v199 = (unsigned __int8)v530 | (v199 << 8);
                        }
                        v526 = (unsigned __int16)*v473;
                        v287 = v526 * (v198 >> 11);
                        v147 = v199 - v287;
                        if ( v199 < v287 )
                        {
                          v781 = v127;
                          *v473 = v526 + ((unsigned int)(2048 - v526) >> 5);
                          v762 = v130;
                          v527 = a1 + ((unsigned __int64)((unsigned int)v130 > 6) << 7);
                          v288 = v527 + 704;
                          v289 = *(_QWORD *)(v527 + 768);
                          if ( (int)v57 > 23 )
                          {
    LABEL_807:
                            v563 = HIWORD(v56) + 1;
                            if ( v563 > *(_DWORD *)(v289 + 16) )
                            {
                              v719 = v2;
                              v576 = *(_DWORD *)(v289 + 20) - 65;
                              do
                              {
                                v577 = (unsigned int)(v576 + 64);
                                ++v576;
                              }
                              while ( v563 > *(_DWORD *)(v289 + 4LL * (unsigned int)v577 + 28) );
                              v728 = v287;
                              v734 = v131;
                              v739 = v199;
                              v745 = v128;
                              v774 = v4;
                              v578 = *(int *)(v289 + 4 * v577 + 96) + (__int64)(int)(v56 >> -(char)v576);
                              if ( (unsigned int)v578 >= *(_DWORD *)(v288 + 72) )
                                v578 = 0;
                              v565 = *(unsigned __int16 *)(*(_QWORD *)(v289 + 184) + 2 * v578);
                              v566 = v576 + 64;
                            }
                            else
                            {
                              v728 = v287;
                              v734 = v131;
                              v739 = v199;
                              v745 = v128;
                              v719 = v2;
                              v774 = v4;
                              v564 = *(_DWORD *)(*(_QWORD *)(v289 + 168)
                                               + 4 * (v56 >> (64 - (unsigned __int8)*(_DWORD *)(v289 + 8))));
                              v565 = (unsigned __int16)v564;
                              v566 = HIWORD(v564);
                            }
                            v567 = v57;
                            v568 = v56;
                            v704 = v129;
                            v754 = v10;
                            v569 = *(_DWORD *)(v288 + 24);
                            if ( v569 <= (unsigned int)v565 )
                            {
                              v570 = v3;
                              v571 = v126;
                              lzham_assert(
                                "i < m_size",
                                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                                131);
                              LODWORD(v126) = v571;
                              v3 = v570;
                              v569 = *(_DWORD *)(v288 + 24);
                            }
                            v127 = v126;
                            v572 = v3;
                            v573 = *(_QWORD *)(v288 + 16);
                            v574 = *(unsigned __int16 *)(v573 + 2LL * (unsigned int)v565) + 1;
                            if ( v569 <= (unsigned int)v565 )
                            {
                              lzham_assert(
                                "i < m_size",
                                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                                131);
                              v573 = *(_QWORD *)(v288 + 16);
                            }
                            *(_WORD *)(v573 + 2 * v565) = v574;
                            if ( v574 >= 0x10000 )
                              lzham_assert(
                                "freq <= UINT16_MAX",
                                "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/l"
                                "zham_lzdecomp.cpp",
                                810);
                            v56 = v568 << v566;
                            v57 = (unsigned int)(v567 - v566);
                            v575 = *(_DWORD *)(v288 + 84) - 1;
                            *(_DWORD *)(v288 + 84) = v575;
                            v10 = v754;
                            v129 = v704;
                            if ( !v575 )
                            {
                              lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v288, 0xFFFFFFFF, 0);
                              v57 = (unsigned int)(v567 - v566);
                              v56 = v568 << v566;
                              v129 = v704;
                            }
                            v125 = v565 + 2;
                            v4 = v774;
                            v3 = v572;
                            v128 = v745;
                            v131 = v734;
                            if ( (_DWORD)v565 != 256 )
                            {
                              v2 = v719;
                              v249 = v762;
                              v248 = v781;
                              v250 = v739;
                              v251 = v728;
                              goto LABEL_843;
                            }
                            v247 = 0;
                            v2 = v719;
                            v249 = v762;
                            v248 = v781;
                            v250 = v739;
                            v251 = v728;
                            while ( 1 )
                            {
                              v579 = v57 - 1;
                              while ( 1 )
                              {
                                v306 = v579;
                                v252 = v579 + 1;
                                if ( v579 + 1 <= 0 )
                                  break;
                                v305 = 2 * v56;
                                if ( (v56 & 0x8000000000000000LL) != 0 )
                                {
                                  ++v247;
                                  --v579;
                                  v56 *= 2LL;
                                  if ( v247 < 3 )
                                    continue;
                                }
                                while ( 1 )
                                {
                                  v582 = lzham::s_huge_match_code_len[v247];
                                  v57 = (unsigned int)(v306 - v582);
                                  if ( v306 >= v582 )
                                    break;
                                  if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                                  {
                                    if ( *(_BYTE *)(a1 + 48) != 1 )
                                    {
                                      *(_DWORD *)(a1 + 144) = v250;
                                      *(_DWORD *)(a1 + 148) = v251;
                                      *(_QWORD *)(a1 + 72) = v305;
                                      *(_DWORD *)(a1 + 80) = v306;
                                      *(_QWORD *)(a1 + 24) = v10;
                                      *(_DWORD *)(a1 + 1580) = v247;
                                      *(_DWORD *)(a1 + 1512) = v127;
                                      *(_DWORD *)(a1 + 1516) = v248;
                                      *(_DWORD *)(a1 + 1520) = v128;
                                      *(_DWORD *)(a1 + 1524) = v129;
                                      *(_DWORD *)(a1 + 1528) = v249;
                                      *(_DWORD *)(a1 + 1488) = v131;
                                      v210 = *(unsigned __int8 **)(a1 + 16);
                                      v207 = *(__int64 **)(a1 + 224);
                                      goto LABEL_219;
                                    }
                                    v307 = 0;
                                  }
                                  else
                                  {
    LABEL_845:
                                    v583 = *v10++;
                                    v307 = v583;
                                  }
    LABEL_846:
                                  v584 = 56 - v306;
                                  v306 += 8;
                                  v305 |= v307 << v584;
                                }
                                v56 = v305 << v582;
                                v125 = lzham::s_huge_match_base_len[v247] + (v305 >> (64 - (unsigned __int8)v582));
    LABEL_843:
                                v316 = a1 + 2LL * v249 + 1440;
                                while ( !HIBYTE(v251) )
                                {
                                  *(_QWORD *)(a1 + 168) = v316;
                                  while ( (int)v57 <= 7 )
                                  {
                                    if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                                    {
                                      if ( *(_BYTE *)(a1 + 48) != 1 )
                                      {
                                        *(_DWORD *)(a1 + 144) = v250;
                                        *(_DWORD *)(a1 + 148) = v251;
                                        *(_QWORD *)(a1 + 72) = v56;
                                        *(_DWORD *)(a1 + 80) = v57;
                                        *(_QWORD *)(a1 + 24) = v10;
                                        *(_DWORD *)(a1 + 1580) = v125;
                                        *(_DWORD *)(a1 + 1512) = v127;
                                        *(_DWORD *)(a1 + 1516) = v248;
                                        *(_DWORD *)(a1 + 1520) = v128;
                                        *(_DWORD *)(a1 + 1524) = v129;
                                        *(_DWORD *)(a1 + 1528) = v249;
                                        *(_DWORD *)(a1 + 1488) = v131;
                                        v168 = *(unsigned __int8 **)(a1 + 16);
                                        v165 = *(__int64 **)(a1 + 224);
                                        goto LABEL_172;
                                      }
                                      v267 = 0;
                                    }
                                    else
                                    {
    LABEL_858:
                                      v588 = *v10++;
                                      v267 = v588;
                                    }
    LABEL_859:
                                    v56 |= v267 << (56 - (unsigned __int8)v57);
                                    LODWORD(v57) = v57 + 8;
                                  }
                                  v587 = HIBYTE(v56);
                                  v56 <<= 8;
                                  v57 = (unsigned int)(v57 - 8);
                                  v316 = *(_QWORD *)(a1 + 168);
                                  v251 <<= 8;
                                  v250 = (unsigned __int8)v587 | (v250 << 8);
                                }
                                v585 = *(unsigned __int16 *)v316;
                                v317 = v585 * (v251 >> 11);
                                LODWORD(v55) = v250 - v317;
                                if ( v250 >= v317 )
                                {
                                  *(_WORD *)v316 -= *(_WORD *)v316 >> 5;
                                  v736 = v251 - v317;
                                }
                                else
                                {
                                  *(_WORD *)v316 = v585 + ((unsigned int)(2048 - v585) >> 5);
                                  v586 = (_WORD *)(a1 + 2LL * v249 + 1464);
                                  LODWORD(v316) = v128;
                                  v128 = v248;
                                  while ( !HIBYTE(v317) )
                                  {
                                    *(_QWORD *)(a1 + 168) = v586;
                                    while ( (int)v57 <= 7 )
                                    {
                                      if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                                      {
                                        if ( *(_BYTE *)(a1 + 48) != 1 )
                                        {
                                          *(_DWORD *)(a1 + 144) = v250;
                                          *(_DWORD *)(a1 + 148) = v317;
                                          *(_QWORD *)(a1 + 72) = v56;
                                          *(_DWORD *)(a1 + 80) = v57;
                                          *(_QWORD *)(a1 + 24) = v10;
                                          *(_DWORD *)(a1 + 1580) = v125;
                                          *(_DWORD *)(a1 + 1512) = v127;
                                          *(_DWORD *)(a1 + 1516) = v128;
                                          *(_DWORD *)(a1 + 1520) = v316;
                                          *(_DWORD *)(a1 + 1524) = v129;
                                          *(_DWORD *)(a1 + 1528) = v249;
                                          *(_DWORD *)(a1 + 1488) = v131;
                                          v226 = *(unsigned __int8 **)(a1 + 16);
                                          v223 = *(__int64 **)(a1 + 224);
                                          goto LABEL_239;
                                        }
                                        v318 = 0;
                                      }
                                      else
                                      {
    LABEL_882:
                                        v593 = *v10++;
                                        v318 = v593;
                                      }
    LABEL_883:
                                      v56 |= v318 << (56 - (unsigned __int8)v57);
                                      LODWORD(v57) = v57 + 8;
                                    }
                                    v592 = HIBYTE(v56);
                                    v56 <<= 8;
                                    v57 = (unsigned int)(v57 - 8);
                                    v586 = *(_WORD **)(a1 + 168);
                                    v317 <<= 8;
                                    v250 = (unsigned __int8)v592 | (v250 << 8);
                                  }
                                  v589 = (unsigned __int16)*v586;
                                  v590 = v589 * (v317 >> 11);
                                  LODWORD(v55) = v250 - v590;
                                  if ( v250 < v590 )
                                  {
                                    *v586 = v589 + ((unsigned int)(2048 - v589) >> 5);
                                    v591 = v589 * (v317 >> 11);
                                    LODWORD(v55) = v250;
                                  }
                                  else
                                  {
                                    *v586 -= *v586 >> 5;
                                    v591 = v317 - v590;
                                  }
                                  v736 = v591;
                                  if ( v250 < v590 )
                                    v248 = (unsigned int)v129;
                                  else
                                    v248 = (unsigned int)v316;
                                  if ( v250 < v590 )
                                    v316 = (unsigned int)v316;
                                  else
                                    v316 = (unsigned int)v129;
                                  v129 = v316;
                                }
                                if ( v249 >= 7 )
                                  v130 = 11;
                                else
                                  v130 = 8;
                                v126 = v248;
    LABEL_1016:
                                v175 = (v131 - v126) & v4;
                                v176 = (char *)&__dst[v175];
                                if ( v175 >= v131 )
                                  v672 = (v131 - v126) & v4;
                                else
                                  v672 = v131;
                                if ( v672 + v125 > v4 )
                                {
                                  while ( 1 )
                                  {
                                    v691 = *v176++;
                                    v174 = v131 + 1;
                                    __dst[v131] = v691;
                                    if ( v176 == (char *)&__dst[(unsigned int)v3] )
                                      v176 = (char *)__dst;
                                    if ( v174 > v4 )
                                    {
                                      *(_DWORD *)(a1 + 144) = v55;
                                      *(_DWORD *)(a1 + 148) = v736;
                                      *(_QWORD *)(a1 + 72) = v56;
                                      *(_DWORD *)(a1 + 80) = v57;
                                      *(_QWORD *)(a1 + 24) = v10;
                                      *(_DWORD *)(a1 + 1580) = v125;
                                      *(_DWORD *)(a1 + 1596) = v175;
                                      *(_QWORD *)(a1 + 1600) = v176;
                                      *(_DWORD *)(a1 + 1512) = v126;
                                      *(_DWORD *)(a1 + 1516) = v127;
                                      *(_DWORD *)(a1 + 1520) = v128;
                                      *(_DWORD *)(a1 + 1524) = v129;
                                      *(_DWORD *)(a1 + 1528) = v130;
                                      *(_DWORD *)(a1 + 1488) = v174;
                                      v692 = *(unsigned int *)(a1 + 1568);
                                      v693 = *(unsigned int *)(a1 + 1492);
                                      v46 = (char *)(*(_QWORD *)(a1 + 200) + v693 + v692);
                                      *(_QWORD *)(a1 + 1544) = v46;
                                      v47 = (unsigned int)(v3 - v692 - v693);
                                      *(_QWORD *)(a1 + 1552) = v47;
                                      *(_DWORD *)(a1 + 1568) = 0;
                                      *(_DWORD *)(a1 + 1492) = v4 & v3;
    LABEL_62:
                                      if ( v47 )
                                      {
                                        if ( v47 >= **(_QWORD **)(a1 + 240) )
                                          v48 = **(_QWORD **)(a1 + 240);
                                        else
                                          v48 = v47;
                                        *(_QWORD *)(a1 + 1560) = v48;
                                        if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
                                        {
                                          if ( v48 )
                                          {
                                            v182 = 0;
                                            while ( 1 )
                                            {
                                              v183 = v48 - v182 >= 0x2000 ? 0x2000LL : v48 - v182;
                                              memcpy((void *)(*(_QWORD *)(a1 + 232) + v182), &v46[v182], v183);
                                              *(_DWORD *)(a1 + 208) = lzham::adler32(
                                                                        (unsigned __int8 *)(*(_QWORD *)(a1 + 1544) + v182),
                                                                        v183,
                                                                        *(_DWORD *)(a1 + 208));
                                              v182 += v183;
                                              v48 = *(_QWORD *)(a1 + 1560);
                                              if ( v48 <= v182 )
                                                break;
                                              v46 = *(char **)(a1 + 1544);
                                            }
                                          }
                                        }
                                        else
                                        {
                                          memcpy(*(void **)(a1 + 232), v46, v48);
                                        }
                                        **(_QWORD **)(a1 + 224) = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
                                        **(_QWORD **)(a1 + 240) = *(_QWORD *)(a1 + 1560);
                                        v184 = 1002;
                                        goto LABEL_509;
                                      }
                                      v174 = 0;
                                      v125 = *(_DWORD *)(a1 + 1580);
                                      v175 = *(_DWORD *)(a1 + 1596);
                                      v176 = *(char **)(a1 + 1600);
                                      v126 = *(unsigned int *)(a1 + 1512);
                                      v127 = *(_DWORD *)(a1 + 1516);
                                      v128 = *(unsigned int *)(a1 + 1520);
                                      v129 = *(unsigned int *)(a1 + 1524);
                                      v130 = *(unsigned int *)(a1 + 1528);
                                      LODWORD(v55) = *(_DWORD *)(a1 + 144);
                                      v736 = *(_DWORD *)(a1 + 148);
                                      v56 = *(_QWORD *)(a1 + 72);
                                      v57 = *(unsigned int *)(a1 + 80);
                                    }
                                    --v125;
                                    v131 = v174;
                                    if ( !v125 )
                                      goto LABEL_630;
                                  }
                                }
                                v673 = &__dst[v131];
                                if ( (_DWORD)v126 == 1 )
                                {
                                  v676 = (unsigned __int8)*v176;
                                  if ( (unsigned int)v125 > 7 )
                                  {
                                    v735 = v131;
                                    v708 = v3;
                                    v678 = (unsigned int)v125;
                                  }
                                  else
                                  {
                                    if ( v125 < 1 )
                                      goto LABEL_1038;
                                    if ( ~v125 < -2 || v125 == 1 )
                                      v677 = -2;
                                    else
                                      v677 = ~v125;
                                    v735 = v131;
                                    v708 = v3;
                                    v678 = (unsigned int)(v125 + v677 + 1) + 1LL;
                                  }
                                  v679 = v129;
                                  v786 = v127;
                                  v680 = v56;
                                  v681 = v57;
                                  v723 = v125;
                                  v682 = v55;
                                  v758 = v10;
                                  v683 = v4;
                                  v684 = v2;
                                  v685 = v128;
                                  v686 = v126;
                                  v687 = v130;
                                  memset(v673, v676, v678);
                                }
                                else
                                {
                                  if ( (unsigned int)v125 < 8 || v125 > (int)v126 )
                                  {
                                    if ( v125 >= 1 )
                                    {
                                      v674 = v125 + 1;
                                      do
                                      {
                                        v675 = *v176++;
                                        *v673++ = v675;
                                        --v674;
                                      }
                                      while ( v674 > 1 );
                                    }
    LABEL_1038:
                                    v131 += v125;
                                    goto LABEL_630;
                                  }
                                  v735 = v131;
                                  v708 = v3;
                                  v679 = v129;
                                  v786 = v127;
                                  v680 = v56;
                                  v681 = v57;
                                  v723 = v125;
                                  v682 = v55;
                                  v758 = v10;
                                  v683 = v4;
                                  v684 = v2;
                                  v685 = v128;
                                  v686 = v126;
                                  v687 = v130;
                                  memcpy(v673, v176, (unsigned int)v125);
                                }
                                v130 = v687;
                                v126 = v686;
                                v128 = v685;
                                v2 = v684;
                                v4 = v683;
                                v10 = v758;
                                LODWORD(v55) = v682;
                                v125 = v723;
                                v57 = v681;
                                v56 = v680;
                                v127 = v786;
                                v3 = v708;
                                v131 = v735;
                                v129 = v679;
                                goto LABEL_1038;
                              }
                              if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                              {
                                if ( *(_BYTE *)(a1 + 48) != 1 )
                                {
                                  *(_DWORD *)(a1 + 144) = v250;
                                  *(_DWORD *)(a1 + 148) = v251;
                                  *(_QWORD *)(a1 + 72) = v56;
                                  *(_DWORD *)(a1 + 80) = v252;
                                  *(_QWORD *)(a1 + 24) = v10;
                                  *(_DWORD *)(a1 + 1580) = v247;
                                  *(_DWORD *)(a1 + 1512) = v127;
                                  *(_DWORD *)(a1 + 1516) = v248;
                                  *(_DWORD *)(a1 + 1520) = v128;
                                  *(_DWORD *)(a1 + 1524) = v129;
                                  *(_DWORD *)(a1 + 1528) = v249;
                                  *(_DWORD *)(a1 + 1488) = v131;
                                  v106 = *(unsigned __int8 **)(a1 + 16);
                                  v103 = *(__int64 **)(a1 + 224);
                                  goto LABEL_838;
                                }
    LABEL_839:
                                v580 = 0;
                              }
                              else
                              {
    LABEL_835:
                                v581 = *v10++;
                                v580 = v581;
                              }
                              LODWORD(v57) = v252 + 8;
                              v56 |= v580 << (56 - (unsigned __int8)v252);
                            }
                          }
                          v193 = *(_QWORD *)(a1 + 32);
                          if ( (unsigned __int64)(v10 + 4) < v193 )
                          {
                            v56 |= (((unsigned __int64)*v10 << 24)
                                  | ((unsigned __int64)v10[1] << 16)
                                  | ((unsigned __int64)v10[2] << 8)
                                  | v10[3]) << (32 - (unsigned __int8)v57);
                            v10 += 4;
                            LODWORD(v57) = v57 + 32;
                            goto LABEL_807;
                          }
                          while ( 1 )
                          {
                            if ( (int)v57 > 23 )
                              goto LABEL_807;
                            if ( !*(_BYTE *)(a1 + 48) )
                              break;
                            v190 = v10;
    LABEL_805:
                            if ( (unsigned __int64)v190 >= v193 )
                            {
                              v561 = 0;
                            }
                            else
                            {
                              v562 = *v190++;
                              v561 = v562;
                            }
                            v56 |= v561 << (56 - (unsigned __int8)v57);
                            v10 = v190;
                            LODWORD(v57) = v57 + 8;
                          }
                          *(_QWORD *)(a1 + 160) = v288;
                          *(_DWORD *)(a1 + 144) = v199;
                          *(_DWORD *)(a1 + 148) = v287;
                          *(_QWORD *)(a1 + 72) = v56;
                          *(_DWORD *)(a1 + 80) = v57;
                          *(_QWORD *)(a1 + 24) = v10;
                          *(_DWORD *)(a1 + 1580) = v125;
                          *(_DWORD *)(a1 + 1512) = v126;
                          *(_DWORD *)(a1 + 1516) = v781;
                          *(_DWORD *)(a1 + 1520) = v128;
                          *(_DWORD *)(a1 + 1524) = v129;
                          *(_DWORD *)(a1 + 1528) = v762;
                          *(_DWORD *)(a1 + 1488) = v131;
                          v190 = *(unsigned __int8 **)(a1 + 16);
                          v189 = *(__int64 **)(a1 + 224);
    LABEL_823:
                          *v189 = v10 - v190;
                          **(_QWORD **)(a1 + 240) = 0;
                          v14 = 810;
                          goto LABEL_363;
                        }
                        *v473 -= *v473 >> 5;
                        v146 = v198 - v287;
                        v151 = (_WORD *)(a1 + 2LL * (unsigned int)v130 + 1416);
                        while ( !HIBYTE(v146) )
                        {
                          *(_QWORD *)(a1 + 168) = v151;
                          while ( (int)v57 <= 7 )
                          {
                            if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                            {
                              if ( *(_BYTE *)(a1 + 48) != 1 )
                              {
                                *(_DWORD *)(a1 + 144) = v147;
                                *(_DWORD *)(a1 + 148) = v146;
                                *(_QWORD *)(a1 + 72) = v56;
                                *(_DWORD *)(a1 + 80) = v57;
                                *(_QWORD *)(a1 + 24) = v10;
                                *(_DWORD *)(a1 + 1580) = v125;
                                *(_DWORD *)(a1 + 1512) = v126;
                                *(_DWORD *)(a1 + 1516) = v127;
                                *(_DWORD *)(a1 + 1520) = v128;
                                *(_DWORD *)(a1 + 1524) = v129;
                                *(_DWORD *)(a1 + 1528) = v130;
                                *(_DWORD *)(a1 + 1488) = v131;
                                v64 = *(unsigned __int8 **)(a1 + 16);
                                v61 = *(__int64 **)(a1 + 224);
                                goto LABEL_77;
                              }
                              v148 = 0;
                            }
                            else
                            {
    LABEL_153:
                              v149 = *v10++;
                              v148 = v149;
                            }
    LABEL_154:
                            v56 |= v148 << (56 - (unsigned __int8)v57);
                            LODWORD(v57) = v57 + 8;
                          }
                          v150 = HIBYTE(v56);
                          v56 <<= 8;
                          v57 = (unsigned int)(v57 - 8);
                          v151 = *(_WORD **)(a1 + 168);
                          v146 <<= 8;
                          v147 = (unsigned __int8)v150 | (v147 << 8);
                        }
                        v528 = (unsigned __int16)*v151;
                        v211 = v528 * (v146 >> 11);
                        if ( v147 >= v211 )
                        {
                          *v151 -= *v151 >> 5;
                          v736 = v146 - v211;
                          if ( (unsigned int)v130 >= 7 )
                            v130 = 11;
                          else
                            v130 = 9;
                          LODWORD(v55) = v147 - v211;
                          goto LABEL_1016;
                        }
                        v779 = v127;
                        *v151 = v528 + ((unsigned int)(2048 - v528) >> 5);
                        v760 = v130;
                        v529 = a1 + ((unsigned __int64)((unsigned int)v130 > 6) << 7);
                        v212 = v529 + 704;
                        v213 = *(_QWORD *)(v529 + 768);
                        if ( (int)v57 > 23 )
                        {
    LABEL_758:
                          v534 = HIWORD(v56) + 1;
                          if ( v534 > *(_DWORD *)(v213 + 16) )
                          {
                            v773 = v4;
                            v552 = *(_DWORD *)(v213 + 20) - 65;
                            do
                            {
                              v553 = (unsigned int)(v552 + 64);
                              ++v552;
                            }
                            while ( v534 > *(_DWORD *)(v213 + 4LL * (unsigned int)v553 + 28) );
                            v753 = v10;
                            v554 = *(int *)(v213 + 4 * v553 + 96) + (__int64)(int)(v56 >> -(char)v552);
                            if ( (unsigned int)v554 >= *(_DWORD *)(v212 + 72) )
                              v554 = 0;
                            v536 = *(unsigned __int16 *)(*(_QWORD *)(v213 + 184) + 2 * v554);
                            v537 = v552 + 64;
                          }
                          else
                          {
                            v753 = v10;
                            v773 = v4;
                            v535 = *(_DWORD *)(*(_QWORD *)(v213 + 168)
                                             + 4 * (v56 >> (64 - (unsigned __int8)*(_DWORD *)(v213 + 8))));
                            v536 = (unsigned __int16)v535;
                            v537 = HIWORD(v535);
                          }
                          v733 = v131;
                          v736 = v211;
                          v538 = v57;
                          v539 = v56;
                          v703 = v129;
                          v744 = v128;
                          v718 = v2;
                          v540 = *(_DWORD *)(v212 + 24);
                          if ( v540 <= (unsigned int)v536 )
                          {
                            v541 = v212;
                            v542 = v3;
                            v543 = v126;
                            lzham_assert(
                              "i < m_size",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                              131);
                            v212 = v541;
                            v126 = v543;
                            v3 = v542;
                            v540 = *(_DWORD *)(v541 + 24);
                          }
                          v544 = v147;
                          v545 = v126;
                          v546 = v3;
                          v547 = *(_QWORD *)(v212 + 16);
                          v548 = *(unsigned __int16 *)(v547 + 2LL * (unsigned int)v536) + 1;
                          if ( v540 <= (unsigned int)v536 )
                          {
                            v549 = v212;
                            lzham_assert(
                              "i < m_size",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                              131);
                            v212 = v549;
                            v547 = *(_QWORD *)(v549 + 16);
                          }
                          *(_WORD *)(v547 + 2 * v536) = v548;
                          if ( v548 >= 0x10000 )
                          {
                            v550 = v212;
                            lzham_assert(
                              "freq <= UINT16_MAX",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                              787);
                            v212 = v550;
                          }
                          v56 = v539 << v537;
                          v57 = (unsigned int)(v538 - v537);
                          v551 = *(_DWORD *)(v212 + 84) - 1;
                          *(_DWORD *)(v212 + 84) = v551;
                          v2 = v718;
                          v129 = v703;
                          if ( !v551 )
                          {
                            lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v212, 0xFFFFFFFF, 0);
                            v57 = (unsigned int)(v538 - v537);
                            v56 = v539 << v537;
                            v129 = v703;
                          }
                          v125 = v536 + 2;
                          v3 = v546;
                          v126 = v545;
                          v4 = v773;
                          v10 = v753;
                          LODWORD(v55) = v544;
                          if ( (_DWORD)v536 != 256 )
                          {
                            v128 = v744;
                            v241 = v760;
                            v127 = v779;
                            v131 = v733;
                            goto LABEL_793;
                          }
                          v240 = 0;
                          v242 = v736;
                          v128 = v744;
                          v241 = v760;
                          v127 = v779;
                          v131 = v733;
                          while ( 1 )
                          {
                            v555 = v57 - 1;
                            while ( 1 )
                            {
                              v244 = v555;
                              v246 = v555 + 1;
                              if ( v555 + 1 <= 0 )
                                break;
                              v243 = 2 * v56;
                              if ( (v56 & 0x8000000000000000LL) != 0 )
                              {
                                ++v240;
                                --v555;
                                v56 *= 2LL;
                                if ( v240 < 3 )
                                  continue;
                              }
                              while ( 1 )
                              {
                                v558 = lzham::s_huge_match_code_len[v240];
                                v57 = (unsigned int)(v244 - v558);
                                if ( v244 >= v558 )
                                  break;
                                if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                                {
                                  if ( *(_BYTE *)(a1 + 48) != 1 )
                                  {
                                    *(_DWORD *)(a1 + 144) = v55;
                                    *(_DWORD *)(a1 + 148) = v242;
                                    *(_QWORD *)(a1 + 72) = v243;
                                    *(_DWORD *)(a1 + 80) = v244;
                                    *(_QWORD *)(a1 + 24) = v10;
                                    *(_DWORD *)(a1 + 1580) = v240;
                                    *(_DWORD *)(a1 + 1512) = v126;
                                    *(_DWORD *)(a1 + 1516) = v127;
                                    *(_DWORD *)(a1 + 1520) = v128;
                                    *(_DWORD *)(a1 + 1524) = v129;
                                    *(_DWORD *)(a1 + 1528) = v241;
                                    *(_DWORD *)(a1 + 1488) = v131;
                                    v42 = *(unsigned __int8 **)(a1 + 16);
                                    v39 = *(__int64 **)(a1 + 224);
                                    goto LABEL_59;
                                  }
                                  v245 = 0;
                                }
                                else
                                {
    LABEL_797:
                                  v559 = *v10++;
                                  v245 = v559;
                                }
    LABEL_798:
                                v560 = 56 - v244;
                                v244 += 8;
                                v243 |= v245 << v560;
                              }
                              v736 = v242;
                              v56 = v243 << v558;
                              v125 = lzham::s_huge_match_base_len[v240] + (v243 >> (64 - (unsigned __int8)v558));
    LABEL_793:
                              if ( v241 >= 7 )
                                v130 = 11;
                              else
                                v130 = 8;
                              goto LABEL_1016;
                            }
                            if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                            {
                              if ( *(_BYTE *)(a1 + 48) != 1 )
                              {
                                *(_DWORD *)(a1 + 144) = v55;
                                *(_DWORD *)(a1 + 148) = v242;
                                *(_QWORD *)(a1 + 72) = v56;
                                *(_DWORD *)(a1 + 80) = v246;
                                *(_QWORD *)(a1 + 24) = v10;
                                *(_DWORD *)(a1 + 1580) = v240;
                                *(_DWORD *)(a1 + 1512) = v126;
                                *(_DWORD *)(a1 + 1516) = v127;
                                *(_DWORD *)(a1 + 1520) = v128;
                                *(_DWORD *)(a1 + 1524) = v129;
                                *(_DWORD *)(a1 + 1528) = v241;
                                *(_DWORD *)(a1 + 1488) = v131;
                                v188 = *(unsigned __int8 **)(a1 + 16);
                                v185 = *(__int64 **)(a1 + 224);
                                goto LABEL_196;
                              }
    LABEL_789:
                              v556 = 0;
                            }
                            else
                            {
    LABEL_786:
                              v557 = *v10++;
                              v556 = v557;
                            }
                            LODWORD(v57) = v246 + 8;
                            v56 |= v556 << (56 - (unsigned __int8)v246);
                          }
                        }
                        v111 = *(_QWORD *)(a1 + 32);
                        if ( (unsigned __int64)(v10 + 4) < v111 )
                        {
                          v56 |= (((unsigned __int64)*v10 << 24)
                                | ((unsigned __int64)v10[1] << 16)
                                | ((unsigned __int64)v10[2] << 8)
                                | v10[3]) << (32 - (unsigned __int8)v57);
                          v10 += 4;
                          LODWORD(v57) = v57 + 32;
                          goto LABEL_758;
                        }
                        while ( 1 )
                        {
                          if ( (int)v57 > 23 )
                            goto LABEL_758;
                          if ( !*(_BYTE *)(a1 + 48) )
                            break;
                          v108 = v10;
    LABEL_756:
                          if ( (unsigned __int64)v108 >= v111 )
                          {
                            v532 = 0;
                          }
                          else
                          {
                            v533 = *v108++;
                            v532 = v533;
                          }
                          v56 |= v532 << (56 - (unsigned __int8)v57);
                          v10 = v108;
                          LODWORD(v57) = v57 + 8;
                        }
                        *(_QWORD *)(a1 + 160) = v212;
                        *(_DWORD *)(a1 + 144) = v147;
                        *(_DWORD *)(a1 + 148) = v211;
                        *(_QWORD *)(a1 + 72) = v56;
                        *(_DWORD *)(a1 + 80) = v57;
                        *(_QWORD *)(a1 + 24) = v10;
                        *(_DWORD *)(a1 + 1580) = v125;
                        *(_DWORD *)(a1 + 1512) = v126;
                        *(_DWORD *)(a1 + 1516) = v779;
                        *(_DWORD *)(a1 + 1520) = v128;
                        *(_DWORD *)(a1 + 1524) = v129;
                        *(_DWORD *)(a1 + 1528) = v760;
                        *(_DWORD *)(a1 + 1488) = v131;
                        v108 = *(unsigned __int8 **)(a1 + 16);
                        v107 = *(__int64 **)(a1 + 224);
    LABEL_774:
                        *v107 = v10 - v108;
                        **(_QWORD **)(a1 + 240) = 0;
                        v14 = 787;
                        goto LABEL_363;
                      }
                      v778 = v127;
                      v759 = v130;
                      *v137 = v472 + ((unsigned int)(2048 - v472) >> 5);
                      v159 = a1 + 576;
                      v160 = *(_QWORD *)(a1 + 640);
                      if ( (int)v57 <= 23 )
                      {
                        v78 = *(_QWORD *)(a1 + 32);
                        if ( (unsigned __int64)(v10 + 4) >= v78 )
                        {
                          while ( 1 )
                          {
                            if ( (int)v57 > 23 )
                              goto LABEL_892;
                            if ( !*(_BYTE *)(a1 + 48) )
                              break;
                            v75 = v10;
    LABEL_890:
                            if ( (unsigned __int64)v75 >= v78 )
                            {
                              v594 = 0;
                            }
                            else
                            {
                              v595 = *v75++;
                              v594 = v595;
                            }
                            v56 |= v594 << (56 - (unsigned __int8)v57);
                            v10 = v75;
                            LODWORD(v57) = v57 + 8;
                          }
                          *(_QWORD *)(a1 + 160) = v159;
                          *(_DWORD *)(a1 + 144) = v133;
                          *(_DWORD *)(a1 + 148) = v158;
                          *(_QWORD *)(a1 + 72) = v56;
                          *(_DWORD *)(a1 + 80) = v57;
                          *(_QWORD *)(a1 + 24) = v10;
                          *(_DWORD *)(a1 + 1580) = v125;
                          *(_DWORD *)(a1 + 1512) = v126;
                          *(_DWORD *)(a1 + 1516) = v778;
                          *(_DWORD *)(a1 + 1520) = v128;
                          *(_DWORD *)(a1 + 1524) = v129;
                          *(_DWORD *)(a1 + 1528) = v759;
                          *(_DWORD *)(a1 + 1488) = v131;
                          v75 = *(unsigned __int8 **)(a1 + 16);
                          v74 = *(__int64 **)(a1 + 224);
    LABEL_908:
                          *v74 = v10 - v75;
                          **(_QWORD **)(a1 + 240) = 0;
                          v14 = 864;
                          goto LABEL_363;
                        }
                        v56 |= (((unsigned __int64)*v10 << 24)
                              | ((unsigned __int64)v10[1] << 16)
                              | ((unsigned __int64)v10[2] << 8)
                              | v10[3]) << (32 - (unsigned __int8)v57);
                        v10 += 4;
                        LODWORD(v57) = v57 + 32;
                      }
    LABEL_892:
                      v596 = HIWORD(v56) + 1;
                      if ( v596 > *(_DWORD *)(v160 + 16) )
                      {
                        v775 = v4;
                        v615 = *(_DWORD *)(v160 + 20) - 65;
                        do
                        {
                          v616 = (unsigned int)(v615 + 64);
                          ++v615;
                        }
                        while ( v596 > *(_DWORD *)(v160 + 4LL * (unsigned int)v616 + 28) );
                        v755 = v10;
                        v617 = *(int *)(v160 + 4 * v616 + 96) + (__int64)(int)(v56 >> -(char)v615);
                        if ( (unsigned int)v617 >= *(_DWORD *)(v159 + 72) )
                          v617 = 0;
                        v598 = *(unsigned __int16 *)(*(_QWORD *)(v160 + 184) + 2 * v617);
                        v599 = v615 + 64;
                      }
                      else
                      {
                        v755 = v10;
                        v775 = v4;
                        v597 = *(_DWORD *)(*(_QWORD *)(v160 + 168)
                                         + 4 * (v56 >> (64 - (unsigned __int8)*(_DWORD *)(v160 + 8))));
                        v598 = (unsigned __int16)v597;
                        v599 = HIWORD(v597);
                      }
                      v731 = v131;
                      v740 = v158;
                      v600 = v57;
                      v601 = v56;
                      v705 = v129;
                      v746 = v128;
                      v720 = v2;
                      v602 = *(_DWORD *)(v159 + 24);
                      if ( v602 <= (unsigned int)v598 )
                      {
                        v603 = v159;
                        v604 = v3;
                        v605 = v126;
                        lzham_assert(
                          "i < m_size",
                          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                          131);
                        v159 = v603;
                        v126 = v605;
                        v3 = v604;
                        v602 = *(_DWORD *)(v603 + 24);
                      }
                      v606 = v133;
                      v607 = v126;
                      v608 = v3;
                      v609 = *(_QWORD *)(v159 + 16);
                      v610 = *(unsigned __int16 *)(v609 + 2LL * (unsigned int)v598) + 1;
                      if ( v602 <= (unsigned int)v598 )
                      {
                        v611 = v159;
                        lzham_assert(
                          "i < m_size",
                          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                          131);
                        v159 = v611;
                        v609 = *(_QWORD *)(v611 + 16);
                      }
                      *(_WORD *)(v609 + 2 * v598) = v610;
                      if ( v610 >= 0x10000 )
                      {
                        v612 = v159;
                        lzham_assert(
                          "freq <= UINT16_MAX",
                          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                          864);
                        v159 = v612;
                      }
                      v56 = v601 << v599;
                      v57 = (unsigned int)(v600 - v599);
                      v613 = *(_DWORD *)(v159 + 84) - 1;
                      *(_DWORD *)(v159 + 84) = v613;
                      v2 = v720;
                      v51 = v705;
                      v54 = v740;
                      if ( !v613 )
                      {
                        lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v159, 0xFFFFFFFF, 0);
                        v54 = v740;
                        v57 = (unsigned int)(v600 - v599);
                        v56 = v601 << v599;
                        v51 = v705;
                      }
                      v3 = v608;
                      v49 = v607;
                      v4 = v775;
                      v10 = v755;
                      v55 = v606;
                      if ( (unsigned int)v598 > 1 )
                      {
                        v614 = (v598 - 2) & 7;
                        v125 = v614 + 2;
                        v88 = ((unsigned int)(v598 - 2) >> 3) + 1;
                        v155 = v759;
                        if ( v614 == 7 )
                        {
                          v618 = a1 + ((unsigned __int64)((unsigned int)v759 > 6) << 7);
                          v91 = v618 + 960;
                          v92 = *(_QWORD *)(v618 + 1024);
                          if ( (int)v57 <= 23 )
                          {
                            v19 = *(_QWORD *)(a1 + 32);
                            if ( (unsigned __int64)(v755 + 4) >= v19 )
                            {
                              v87 = 9;
                              v89 = v746;
                              v90 = v731;
                              while ( (int)v57 <= 23 )
                              {
                                if ( !*(_BYTE *)(a1 + 48) )
                                {
                                  *(_QWORD *)(a1 + 160) = v91;
                                  *(_DWORD *)(a1 + 144) = v55;
                                  *(_DWORD *)(a1 + 148) = v54;
                                  *(_QWORD *)(a1 + 72) = v56;
                                  *(_DWORD *)(a1 + 80) = v57;
                                  *(_QWORD *)(a1 + 24) = v10;
                                  *(_DWORD *)(a1 + 1580) = v87;
                                  *(_DWORD *)(a1 + 1584) = v88;
                                  *(_DWORD *)(a1 + 1512) = v49;
                                  *(_DWORD *)(a1 + 1516) = v778;
                                  *(_DWORD *)(a1 + 1520) = v89;
                                  *(_DWORD *)(a1 + 1524) = v51;
                                  *(_DWORD *)(a1 + 1528) = v759;
                                  *(_DWORD *)(a1 + 1488) = v90;
                                  v16 = *(unsigned __int8 **)(a1 + 16);
                                  v15 = *(__int64 **)(a1 + 224);
                                  goto LABEL_944;
                                }
                                v16 = v10;
    LABEL_926:
                                if ( (unsigned __int64)v16 >= v19 )
                                {
                                  v619 = 0;
                                }
                                else
                                {
                                  v620 = *v16++;
                                  v619 = v620;
                                }
                                v56 |= v619 << (56 - (unsigned __int8)v57);
                                v10 = v16;
                                LODWORD(v57) = v57 + 8;
                              }
                            }
                            else
                            {
                              v56 |= (((unsigned __int64)*v755 << 24)
                                    | ((unsigned __int64)v755[1] << 16)
                                    | ((unsigned __int64)v755[2] << 8)
                                    | v755[3]) << (32 - (unsigned __int8)v57);
                              v87 = 9;
                              v10 = v755 + 4;
                              LODWORD(v57) = v57 + 32;
                              v89 = v746;
                              v90 = v731;
                            }
                          }
                          else
                          {
                            v87 = 9;
                            v89 = v746;
                            v90 = v731;
                          }
                          v621 = HIWORD(v56) + 1;
                          if ( v621 > *(_DWORD *)(v92 + 16) )
                          {
                            v721 = v2;
                            v636 = *(_DWORD *)(v92 + 20) - 65;
                            do
                            {
                              v637 = (unsigned int)(v636 + 64);
                              ++v636;
                            }
                            while ( v621 > *(_DWORD *)(v92 + 4LL * (unsigned int)v637 + 28) );
                            v700 = v87;
                            v713 = v88;
                            v731 = v90;
                            v747 = v89;
                            v776 = v4;
                            v638 = *(int *)(v92 + 4 * v637 + 96) + (__int64)(int)(v56 >> -(char)v636);
                            if ( (unsigned int)v638 >= *(_DWORD *)(v91 + 72) )
                              v638 = 0;
                            v623 = *(unsigned __int16 *)(*(_QWORD *)(v92 + 184) + 2 * v638);
                            v624 = v636 + 64;
                          }
                          else
                          {
                            v700 = v87;
                            v713 = v88;
                            v731 = v90;
                            v747 = v89;
                            v721 = v2;
                            v776 = v4;
                            v622 = *(_DWORD *)(*(_QWORD *)(v92 + 168)
                                             + 4 * (v56 >> (64 - (unsigned __int8)*(_DWORD *)(v92 + 8))));
                            v623 = (unsigned __int16)v622;
                            v624 = HIWORD(v622);
                          }
                          v741 = v54;
                          v625 = v57;
                          v626 = v56;
                          v706 = v51;
                          v756 = v10;
                          v627 = *(_DWORD *)(v91 + 24);
                          if ( v627 <= (unsigned int)v623 )
                          {
                            v628 = v3;
                            v629 = v55;
                            v630 = v49;
                            lzham_assert(
                              "i < m_size",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                              131);
                            LODWORD(v49) = v630;
                            LODWORD(v55) = v629;
                            v3 = v628;
                            v627 = *(_DWORD *)(v91 + 24);
                          }
                          v729 = v55;
                          v631 = v49;
                          v632 = v3;
                          v633 = *(_QWORD *)(v91 + 16);
                          v634 = *(unsigned __int16 *)(v633 + 2LL * (unsigned int)v623) + 1;
                          if ( v627 <= (unsigned int)v623 )
                          {
                            lzham_assert(
                              "i < m_size",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                              131);
                            v633 = *(_QWORD *)(v91 + 16);
                          }
                          *(_WORD *)(v633 + 2 * v623) = v634;
                          if ( v634 >= 0x10000 )
                            lzham_assert(
                              "freq <= UINT16_MAX",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                              898);
                          v56 = v626 << v624;
                          LODWORD(v57) = v625 - v624;
                          v635 = *(_DWORD *)(v91 + 84) - 1;
                          *(_DWORD *)(v91 + 84) = v635;
                          v10 = v756;
                          LODWORD(v51) = v706;
                          LODWORD(v54) = v741;
                          if ( !v635 )
                          {
                            lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v91, 0xFFFFFFFF, 0);
                            LODWORD(v54) = v741;
                            LODWORD(v57) = v625 - v624;
                            v56 = v626 << v624;
                            LODWORD(v51) = v706;
                          }
                          v125 = v623 + v700;
                          v4 = v776;
                          v3 = v632;
                          LODWORD(v49) = v631;
                          v154 = v747;
                          LODWORD(v55) = v729;
                          if ( (_DWORD)v623 + v700 == 258 )
                          {
                            v194 = 0;
                            v2 = v721;
                            v155 = v759;
                            v153 = v778;
                            v88 = v713;
                            while ( 1 )
                            {
                              v639 = v57 - 1;
                              while ( 1 )
                              {
                                v258 = v639;
                                v195 = v639 + 1;
                                if ( v639 + 1 <= 0 )
                                  break;
                                v257 = 2 * v56;
                                if ( (v56 & 0x8000000000000000LL) != 0 )
                                {
                                  ++v194;
                                  --v639;
                                  v56 *= 2LL;
                                  if ( v194 < 3 )
                                    continue;
                                }
                                while ( 1 )
                                {
                                  v642 = lzham::s_huge_match_code_len[v194];
                                  LODWORD(v57) = v258 - v642;
                                  if ( v258 >= v642 )
                                  {
                                    v56 = v257 << v642;
                                    v125 = lzham::s_huge_match_base_len[v194] + (v257 >> (64 - (unsigned __int8)v642));
                                    goto LABEL_963;
                                  }
                                  if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                                  {
                                    if ( *(_BYTE *)(a1 + 48) != 1 )
                                    {
                                      *(_DWORD *)(a1 + 144) = v55;
                                      *(_DWORD *)(a1 + 148) = v54;
                                      *(_QWORD *)(a1 + 72) = v257;
                                      *(_DWORD *)(a1 + 80) = v258;
                                      *(_QWORD *)(a1 + 24) = v10;
                                      *(_DWORD *)(a1 + 1580) = v194;
                                      *(_DWORD *)(a1 + 1584) = v88;
                                      *(_DWORD *)(a1 + 1512) = v49;
                                      *(_DWORD *)(a1 + 1516) = v153;
                                      *(_DWORD *)(a1 + 1520) = v154;
                                      *(_DWORD *)(a1 + 1524) = v51;
                                      *(_DWORD *)(a1 + 1528) = v155;
                                      *(_DWORD *)(a1 + 1488) = v731;
                                      v145 = *(unsigned __int8 **)(a1 + 16);
                                      v142 = *(__int64 **)(a1 + 224);
                                      goto LABEL_151;
                                    }
                                    v259 = 0;
                                  }
                                  else
                                  {
    LABEL_967:
                                    v643 = *v10++;
                                    v259 = v643;
                                  }
    LABEL_968:
                                  v644 = 56 - v258;
                                  v258 += 8;
                                  v257 |= v259 << v644;
                                }
                              }
                              if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                              {
                                if ( *(_BYTE *)(a1 + 48) != 1 )
                                {
                                  *(_DWORD *)(a1 + 144) = v55;
                                  *(_DWORD *)(a1 + 148) = v54;
                                  *(_QWORD *)(a1 + 72) = v56;
                                  *(_DWORD *)(a1 + 80) = v195;
                                  *(_QWORD *)(a1 + 24) = v10;
                                  *(_DWORD *)(a1 + 1580) = v194;
                                  *(_DWORD *)(a1 + 1584) = v88;
                                  *(_DWORD *)(a1 + 1512) = v49;
                                  *(_DWORD *)(a1 + 1516) = v153;
                                  *(_DWORD *)(a1 + 1520) = v154;
                                  *(_DWORD *)(a1 + 1524) = v51;
                                  *(_DWORD *)(a1 + 1528) = v155;
                                  *(_DWORD *)(a1 + 1488) = v731;
                                  v38 = *(unsigned __int8 **)(a1 + 16);
                                  v35 = *(__int64 **)(a1 + 224);
                                  goto LABEL_51;
                                }
    LABEL_959:
                                v640 = 0;
                              }
                              else
                              {
    LABEL_956:
                                v641 = *v10++;
                                v640 = v641;
                              }
                              LODWORD(v57) = v195 + 8;
                              v56 |= v640 << (56 - (unsigned __int8)v195);
                            }
                          }
                          v2 = v721;
                          v155 = v759;
                          v153 = v778;
                          v88 = v713;
                        }
                        else
                        {
                          v154 = v746;
                          v153 = v778;
                        }
    LABEL_963:
                        v205 = lzham::CLZDecompBase::m_lzx_position_extra_bits[v88];
                        if ( v205 <= 2 )
                        {
                          while ( (int)v57 < (int)v205 )
                          {
                            if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                            {
                              if ( *(_BYTE *)(a1 + 48) != 1 )
                              {
                                *(_DWORD *)(a1 + 144) = v55;
                                *(_DWORD *)(a1 + 148) = v54;
                                *(_QWORD *)(a1 + 72) = v56;
                                *(_DWORD *)(a1 + 80) = v57;
                                *(_QWORD *)(a1 + 24) = v10;
                                *(_DWORD *)(a1 + 1580) = v125;
                                *(_DWORD *)(a1 + 1584) = v88;
                                *(_DWORD *)(a1 + 1592) = v205;
                                *(_DWORD *)(a1 + 1512) = v49;
                                *(_DWORD *)(a1 + 1516) = v153;
                                *(_DWORD *)(a1 + 1520) = v154;
                                *(_DWORD *)(a1 + 1524) = v51;
                                *(_DWORD *)(a1 + 1528) = v155;
                                *(_DWORD *)(a1 + 1488) = v731;
                                v102 = *(unsigned __int8 **)(a1 + 16);
                                v99 = *(__int64 **)(a1 + 224);
                                goto LABEL_110;
                              }
                              v206 = 0;
                            }
                            else
                            {
    LABEL_978:
                              v646 = *v10++;
                              v206 = v646;
                            }
    LABEL_979:
                            v56 |= v206 << (56 - (unsigned __int8)v57);
                            LODWORD(v57) = v57 + 8;
                          }
                          v736 = v54;
                          if ( v205 )
                            v645 = v56 >> (64 - (unsigned __int8)v205);
                          else
                            v645 = 0;
                          v56 <<= v205;
                          v57 = (unsigned int)v57 - v205;
                        }
                        else
                        {
                          if ( v205 >= 5 )
                          {
                            while ( 1 )
                            {
                              v647 = v205 - 4;
                              v648 = v57 - (v205 - 4);
                              if ( (int)v57 >= (int)(v205 - 4) )
                                break;
                              if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                              {
                                if ( *(_BYTE *)(a1 + 48) != 1 )
                                {
                                  *(_DWORD *)(a1 + 144) = v55;
                                  *(_DWORD *)(a1 + 148) = v54;
                                  *(_QWORD *)(a1 + 72) = v56;
                                  *(_DWORD *)(a1 + 80) = v57;
                                  *(_QWORD *)(a1 + 24) = v10;
                                  *(_DWORD *)(a1 + 1580) = v125;
                                  *(_DWORD *)(a1 + 1584) = v88;
                                  *(_DWORD *)(a1 + 1592) = v205;
                                  *(_DWORD *)(a1 + 1512) = v49;
                                  *(_DWORD *)(a1 + 1516) = v153;
                                  *(_DWORD *)(a1 + 1520) = v154;
                                  *(_DWORD *)(a1 + 1524) = v51;
                                  *(_DWORD *)(a1 + 1528) = v155;
                                  *(_DWORD *)(a1 + 1488) = v731;
                                  v164 = *(unsigned __int8 **)(a1 + 16);
                                  v161 = *(__int64 **)(a1 + 224);
                                  goto LABEL_167;
                                }
    LABEL_994:
                                v650 = 0;
                              }
                              else
                              {
    LABEL_991:
                                v651 = *v10++;
                                v650 = v651;
                              }
                              v56 |= v650 << (56 - (unsigned __int8)v57);
                              LODWORD(v57) = v57 + 8;
                            }
                            v649 = v56 >> (68 - (unsigned __int8)v205);
                            if ( !v647 )
                              LODWORD(v649) = 0;
                            v56 <<= v647;
                            v152 = 16 * v649;
                            LODWORD(v57) = v648;
                          }
                          else
                          {
                            v152 = 0;
                          }
                          v156 = a1 + 1216;
                          v157 = *(_QWORD *)(a1 + 1280);
                          if ( (int)v57 <= 23 )
                          {
                            v73 = *(_QWORD *)(a1 + 32);
                            if ( (unsigned __int64)(v10 + 4) >= v73 )
                            {
                              while ( (int)v57 <= 23 )
                              {
                                if ( !*(_BYTE *)(a1 + 48) )
                                {
                                  *(_QWORD *)(a1 + 160) = v156;
                                  *(_DWORD *)(a1 + 144) = v55;
                                  *(_DWORD *)(a1 + 148) = v54;
                                  *(_QWORD *)(a1 + 72) = v56;
                                  *(_DWORD *)(a1 + 80) = v57;
                                  *(_QWORD *)(a1 + 24) = v10;
                                  *(_DWORD *)(a1 + 1580) = v125;
                                  *(_DWORD *)(a1 + 1584) = v88;
                                  *(_DWORD *)(a1 + 1588) = v152;
                                  *(_DWORD *)(a1 + 1512) = v49;
                                  *(_DWORD *)(a1 + 1516) = v153;
                                  *(_DWORD *)(a1 + 1520) = v154;
                                  *(_DWORD *)(a1 + 1524) = v51;
                                  *(_DWORD *)(a1 + 1528) = v155;
                                  *(_DWORD *)(a1 + 1488) = v731;
                                  v70 = *(unsigned __int8 **)(a1 + 16);
                                  v69 = *(__int64 **)(a1 + 224);
                                  goto LABEL_1040;
                                }
                                v70 = v10;
    LABEL_999:
                                if ( (unsigned __int64)v70 >= v73 )
                                {
                                  v652 = 0;
                                }
                                else
                                {
                                  v653 = *v70++;
                                  v652 = v653;
                                }
                                v56 |= v652 << (56 - (unsigned __int8)v57);
                                v10 = v70;
                                LODWORD(v57) = v57 + 8;
                              }
                            }
                            else
                            {
                              v56 |= (((unsigned __int64)*v10 << 24)
                                    | ((unsigned __int64)v10[1] << 16)
                                    | ((unsigned __int64)v10[2] << 8)
                                    | v10[3]) << (32 - (unsigned __int8)v57);
                              v10 += 4;
                              LODWORD(v57) = v57 + 32;
                            }
                          }
                          v654 = HIWORD(v56) + 1;
                          if ( v654 > *(_DWORD *)(v157 + 16) )
                          {
                            v777 = v4;
                            v757 = v10;
                            v688 = *(_DWORD *)(v157 + 20) - 65;
                            do
                            {
                              v689 = (unsigned int)(v688 + 64);
                              ++v688;
                            }
                            while ( v654 > *(_DWORD *)(v157 + 4LL * (unsigned int)v689 + 28) );
                            v707 = v152;
                            v714 = v88;
                            v722 = v125;
                            v655 = v2;
                            v690 = *(int *)(v157 + 4 * v689 + 96) + (__int64)(int)(v56 >> -(char)v688);
                            if ( (unsigned int)v690 >= *(_DWORD *)(v156 + 72) )
                              v690 = 0;
                            v657 = *(unsigned __int16 *)(*(_QWORD *)(v157 + 184) + 2 * v690);
                            v658 = v688 + 64;
                          }
                          else
                          {
                            v707 = v152;
                            v714 = v88;
                            v722 = v125;
                            v655 = v2;
                            v777 = v4;
                            v757 = v10;
                            v656 = *(_DWORD *)(*(_QWORD *)(v157 + 168)
                                             + 4 * (v56 >> (64 - (unsigned __int8)*(_DWORD *)(v157 + 8))));
                            v657 = (unsigned __int16)v656;
                            v658 = HIWORD(v656);
                          }
                          v736 = v54;
                          v659 = v57;
                          v660 = v56;
                          v730 = v55;
                          v785 = v153;
                          v767 = v155;
                          v661 = v49;
                          v662 = v3;
                          v663 = *(_DWORD *)(v156 + 24);
                          if ( v663 <= (unsigned int)v657 )
                          {
                            v664 = v156;
                            lzham_assert(
                              "i < m_size",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                              131);
                            v156 = v664;
                            v663 = *(_DWORD *)(v664 + 24);
                          }
                          v748 = v154;
                          v665 = *(_QWORD *)(v156 + 16);
                          v666 = *(unsigned __int16 *)(v665 + 2LL * (unsigned int)v657) + 1;
                          if ( v663 <= (unsigned int)v657 )
                          {
                            v667 = v156;
                            lzham_assert(
                              "i < m_size",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_vector.h",
                              131);
                            v156 = v667;
                            v665 = *(_QWORD *)(v667 + 16);
                          }
                          *(_WORD *)(v665 + 2 * v657) = v666;
                          if ( v666 >= 0x10000 )
                          {
                            v668 = v156;
                            lzham_assert(
                              "freq <= UINT16_MAX",
                              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                              945);
                            v156 = v668;
                          }
                          v56 = v660 << v658;
                          v57 = (unsigned int)(v659 - v658);
                          v669 = *(_DWORD *)(v156 + 84) - 1;
                          *(_DWORD *)(v156 + 84) = v669;
                          v3 = v662;
                          LODWORD(v49) = v661;
                          LODWORD(v55) = v730;
                          if ( !v669 )
                          {
                            lzham::raw_quasi_adaptive_huffman_data_model::update_tables((LogicEgg *)v156, 0xFFFFFFFF, 0);
                            LODWORD(v49) = v661;
                            LODWORD(v55) = v730;
                            v57 = (unsigned int)(v659 - v658);
                            v56 = v660 << v658;
                            v3 = v662;
                          }
                          v88 = v714;
                          v645 = v657 + v707;
                          v2 = v655;
                          v10 = v757;
                          v155 = v767;
                          v4 = v777;
                          v153 = v785;
                          v154 = v748;
                          v125 = v722;
                        }
                        v670 = lzham::CLZDecompBase::m_lzx_position_base[v88];
                        v129 = v154;
                        v128 = v153;
                        v127 = v49;
                        v671 = (unsigned int)(v670 + v645);
                        if ( v155 >= 7 )
                          v130 = 10;
                        else
                          v130 = 7;
                        v126 = v671;
                        v131 = v731;
                        goto LABEL_1016;
                      }
                      v52 = v759;
                      if ( !(_DWORD)v598 )
                      {
                        v50 = v746;
                        v53 = v731;
                        if ( (v57 & 7) != 0 )
                        {
                          while ( 1 )
                          {
                            v60 = v57 & 7;
                            if ( (int)v57 >= v60 )
                              break;
                            if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                            {
                              if ( *(_BYTE *)(a1 + 48) != 1 )
                              {
                                *(_DWORD *)(a1 + 144) = v55;
                                *(_DWORD *)(a1 + 148) = v54;
                                *(_QWORD *)(a1 + 72) = v56;
                                *(_DWORD *)(a1 + 80) = v57;
                                *(_QWORD *)(a1 + 24) = v10;
                                *(_DWORD *)(a1 + 1512) = v49;
                                *(_DWORD *)(a1 + 1516) = v778;
                                *(_DWORD *)(a1 + 1520) = v50;
                                *(_DWORD *)(a1 + 1524) = v51;
                                *(_DWORD *)(a1 + 1528) = v52;
                                *(_DWORD *)(a1 + 1488) = v53;
                                v13 = *(unsigned __int8 **)(a1 + 16);
                                v9 = *(__int64 **)(a1 + 224);
                                goto LABEL_15;
                              }
                              v58 = 0;
                            }
                            else
                            {
    LABEL_69:
                              v59 = *v10++;
                              v58 = v59;
                            }
    LABEL_70:
                            v56 |= v58 << (56 - (unsigned __int8)v57);
                            LODWORD(v57) = v57 + 8;
                          }
                          v56 <<= v60;
                          LODWORD(v57) = v57 - v60;
                        }
                        goto LABEL_582;
                      }
                      v736 = v54;
                      v130 = 0;
                      v129 = 1;
                      v128 = 1;
                      v127 = 1;
                      v126 = 1;
                      v131 = v731;
    LABEL_630:
                      v771 = v4;
                      v460 = (unsigned int)v130;
                      if ( (unsigned int)v130 >= 0xC )
                      {
                        v701 = v3;
                        v726 = v55;
                        v716 = v2;
                        v461 = v131;
                        v462 = v10;
                        v463 = v129;
                        v464 = v56;
                        v784 = v127;
                        v465 = v57;
                        v466 = v128;
                        v467 = v126;
                        v468 = v130;
                        lzham_assert(
                          "match_model_index < LZHAM_ARRAY_SIZE(m_is_match_model)",
                          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                          680);
                        v130 = v468;
                        v126 = v467;
                        v128 = v466;
                        v57 = v465;
                        v127 = v784;
                        v56 = v464;
                        v3 = v701;
                        v129 = v463;
                        v10 = v462;
                        v131 = v461;
                        v2 = v716;
                        LODWORD(v55) = v726;
                      }
                      v469 = (_WORD *)(a1 + 2 * v460 + 1344);
                      v4 = v771;
                      v196 = v736;
                    }
                    *(_QWORD *)(a1 + 168) = v469;
                  }
                  if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                    break;
    LABEL_655:
                  v475 = *v10++;
                  i = v475;
                }
                if ( *(_BYTE *)(a1 + 48) != 1 )
                  break;
              }
              *(_DWORD *)(a1 + 144) = v55;
              *(_DWORD *)(a1 + 148) = v196;
              *(_QWORD *)(a1 + 72) = v56;
              *(_DWORD *)(a1 + 80) = v57;
              *(_QWORD *)(a1 + 24) = v10;
              *(_DWORD *)(a1 + 1512) = v126;
              *(_DWORD *)(a1 + 1516) = v127;
              *(_DWORD *)(a1 + 1520) = v128;
              *(_DWORD *)(a1 + 1524) = v129;
              *(_DWORD *)(a1 + 1528) = v130;
              *(_DWORD *)(a1 + 1488) = v131;
              v68 = *(unsigned __int8 **)(a1 + 16);
              v65 = *(__int64 **)(a1 + 224);
            }
            else
            {
              v68 = v10;
            }
            *v65 = v10 - v68;
            **(_QWORD **)(a1 + 240) = 0;
            v14 = 682;
            goto LABEL_363;
          }
          return *(unsigned int *)(a1 + 312);
        }
        if ( v5 > 736 )
        {
          if ( v5 != 737 )
          {
            if ( v5 == 757 )
            {
              v10 = *(unsigned __int8 **)(a1 + 216);
              v227 = *(_BYTE *)(a1 + 248);
              v228 = **(_QWORD **)(a1 + 224);
              *(_QWORD *)(a1 + 16) = v10;
              *(_QWORD *)(a1 + 24) = v10;
              *(_BYTE *)(a1 + 48) = v227;
              v229 = *(_QWORD *)(a1 + 1560);
              *(_QWORD *)(a1 + 40) = v228;
              *(_QWORD *)(a1 + 32) = &v10[v228];
              v230 = (char *)(*(_QWORD *)(a1 + 1544) + v229);
              *(_QWORD *)(a1 + 1544) = v230;
              v231 = *(_QWORD *)(a1 + 1552) - v229;
              *(_QWORD *)(a1 + 1552) = v231;
    LABEL_708:
              if ( v231 )
              {
                if ( v231 >= **(_QWORD **)(a1 + 240) )
                  v520 = **(_QWORD **)(a1 + 240);
                else
                  v520 = v231;
                *(_QWORD *)(a1 + 1560) = v520;
                if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
                {
                  if ( v520 )
                  {
                    v521 = 0;
                    while ( 1 )
                    {
                      v522 = v520 - v521 >= 0x2000 ? 0x2000LL : v520 - v521;
                      memcpy((void *)(*(_QWORD *)(a1 + 232) + v521), &v230[v521], v522);
                      *(_DWORD *)(a1 + 208) = lzham::adler32(
                                                (unsigned __int8 *)(*(_QWORD *)(a1 + 1544) + v521),
                                                v522,
                                                *(_DWORD *)(a1 + 208));
                      v521 += v522;
                      v520 = *(_QWORD *)(a1 + 1560);
                      if ( v520 <= v521 )
                        break;
                      v230 = *(char **)(a1 + 1544);
                    }
                  }
                }
                else
                {
                  memcpy(*(void **)(a1 + 232), v230, v520);
                }
                **(_QWORD **)(a1 + 224) = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
                **(_QWORD **)(a1 + 240) = *(_QWORD *)(a1 + 1560);
                v184 = 757;
                goto LABEL_509;
              }
              v131 = 0;
              v126 = *(unsigned int *)(a1 + 1512);
              v127 = *(_DWORD *)(a1 + 1516);
              v128 = *(unsigned int *)(a1 + 1520);
              v129 = *(unsigned int *)(a1 + 1524);
              v130 = *(unsigned int *)(a1 + 1528);
              LODWORD(v55) = *(_DWORD *)(a1 + 144);
              v736 = *(_DWORD *)(a1 + 148);
              v56 = *(_QWORD *)(a1 + 72);
              v57 = *(unsigned int *)(a1 + 80);
              goto LABEL_630;
            }
            return *(unsigned int *)(a1 + 312);
          }
          v170 = *(unsigned __int8 **)(a1 + 216);
          v169 = *(__int64 **)(a1 + 224);
          v171 = *v169;
          v172 = *(unsigned __int8 *)(a1 + 248);
          *(_QWORD *)(a1 + 16) = v170;
          *(_QWORD *)(a1 + 24) = v170;
          *(_QWORD *)(a1 + 40) = v171;
          v173 = (unsigned __int64)&v170[v171];
          *(_QWORD *)(a1 + 32) = &v170[v171];
          *(_BYTE *)(a1 + 48) = v172;
          if ( v172 || v171 )
          {
            v737 = *(_DWORD *)(a1 + 1576);
            LODWORD(v126) = *(_DWORD *)(a1 + 1512);
            v780 = *(_DWORD *)(a1 + 1516);
            LODWORD(v128) = *(_DWORD *)(a1 + 1520);
            v129 = *(unsigned int *)(a1 + 1524);
            v761 = *(_DWORD *)(a1 + 1528);
            v131 = *(_DWORD *)(a1 + 1488);
            LODWORD(v55) = *(_DWORD *)(a1 + 144);
            v268 = *(_DWORD *)(a1 + 148);
            v56 = *(_QWORD *)(a1 + 72);
            LODWORD(v57) = *(_DWORD *)(a1 + 80);
            v269 = *(_QWORD *)(a1 + 160);
            v270 = *(_QWORD *)(v269 + 64);
            goto LABEL_688;
          }
          v10 = v170;
    LABEL_706:
          *v169 = v10 - v170;
          **(_QWORD **)(a1 + 240) = 0;
          v14 = 737;
        }
        else
        {
          if ( v5 == 705 )
          {
            v112 = 705;
            goto LABEL_234;
          }
          if ( v5 != 711 )
            return *(unsigned int *)(a1 + 312);
          v215 = *(unsigned __int8 **)(a1 + 216);
          v214 = *(__int64 **)(a1 + 224);
          v216 = *v214;
          v217 = *(unsigned __int8 *)(a1 + 248);
          *(_QWORD *)(a1 + 16) = v215;
          *(_QWORD *)(a1 + 24) = v215;
          *(_QWORD *)(a1 + 40) = v216;
          v218 = (unsigned __int64)&v215[v216];
          *(_QWORD *)(a1 + 32) = &v215[v216];
          *(_BYTE *)(a1 + 48) = v217;
          if ( v217 || v216 )
          {
            LODWORD(v126) = *(_DWORD *)(a1 + 1512);
            v780 = *(_DWORD *)(a1 + 1516);
            LODWORD(v128) = *(_DWORD *)(a1 + 1520);
            v129 = *(unsigned int *)(a1 + 1524);
            v761 = *(_DWORD *)(a1 + 1528);
            v131 = *(_DWORD *)(a1 + 1488);
            LODWORD(v55) = *(_DWORD *)(a1 + 144);
            v268 = *(_DWORD *)(a1 + 148);
            v56 = *(_QWORD *)(a1 + 72);
            LODWORD(v57) = *(_DWORD *)(a1 + 80);
            v308 = *(_QWORD *)(a1 + 160);
            v309 = *(_QWORD *)(v308 + 64);
            goto LABEL_663;
          }
          v10 = v215;
    LABEL_679:
          *v214 = v10 - v215;
          **(_QWORD **)(a1 + 240) = 0;
          v14 = 711;
        }
    LABEL_363:
        *(_DWORD *)a1 = v14;
        return 2;
      }
      if ( v5 )
        return *(unsigned int *)(a1 + 312);
      v6 = (unsigned int)(1 << *(_DWORD *)(a1 + 276));
      v7 = *(unsigned int *)(a1 + 288);
      if ( (_DWORD)v7 && (memcpy(__dst, *(const void **)(a1 + 296), v7), v8 = *(_DWORD *)(a1 + 288), v8 < (unsigned int)v6) )
        *(_DWORD *)(a1 + 1568) = v8;
      else
        v8 = 0;
      if ( !(unsigned int)lzham::symbol_codec::start_decoding(
                            v2,
                            *(const unsigned __int8 **)(a1 + 216),
                            **(_QWORD **)(a1 + 224),
                            *(_BYTE *)(a1 + 248),
                            0,
                            0) )
        return 4;
      v768 = v4;
      v79 = 0;
      v80 = 0;
      v742 = 0;
      v81 = 0;
      v82 = 0;
      v83 = *(_DWORD *)(a1 + 144);
      v84 = *(_DWORD *)(a1 + 148);
      v85 = *(_QWORD *)(a1 + 72);
      v86 = *(_DWORD *)(a1 + 80);
      v10 = *(unsigned __int8 **)(a1 + 24);
      v3 = v6;
      if ( (*(_BYTE *)(a1 + 284) & 4) != 0 )
      {
        while ( v86 <= 7 )
        {
          if ( v10 == *(unsigned __int8 **)(a1 + 32) )
          {
            if ( *(_BYTE *)(a1 + 48) != 1 )
            {
              *(_DWORD *)(a1 + 144) = v83;
              *(_DWORD *)(a1 + 148) = v84;
              *(_QWORD *)(a1 + 72) = v85;
              *(_DWORD *)(a1 + 80) = v86;
              *(_QWORD *)(a1 + 24) = v10;
              *(_DWORD *)(a1 + 1512) = v82;
              *(_DWORD *)(a1 + 1516) = v81;
              *(_DWORD *)(a1 + 1520) = v742;
              *(_DWORD *)(a1 + 1524) = v80;
              *(_DWORD *)(a1 + 1528) = v79;
              *(_DWORD *)(a1 + 1488) = v8;
              v235 = *(unsigned __int8 **)(a1 + 16);
              v232 = *(__int64 **)(a1 + 224);
              goto LABEL_245;
            }
            v290 = 0;
          }
          else
          {
    LABEL_358:
            v353 = *v10++;
            v290 = v353;
          }
    LABEL_359:
          v354 = 56 - v86;
          v86 += 8;
          v85 |= v290 << v354;
        }
        *(_DWORD *)(a1 + 1640) = HIBYTE(v85);
        v284 = v85 << 8;
        for ( j = v86 - 8; j <= 7; j += 8 )
        {
          if ( v10 == *(unsigned __int8 **)(a1 + 32) )
          {
            if ( *(_BYTE *)(a1 + 48) != 1 )
            {
              *(_DWORD *)(a1 + 144) = v83;
              *(_DWORD *)(a1 + 148) = v84;
              *(_QWORD *)(a1 + 72) = v284;
              *(_DWORD *)(a1 + 80) = j;
              *(_QWORD *)(a1 + 24) = v10;
              *(_DWORD *)(a1 + 1512) = v82;
              *(_DWORD *)(a1 + 1516) = v81;
              *(_DWORD *)(a1 + 1520) = v742;
              *(_DWORD *)(a1 + 1524) = v80;
              *(_DWORD *)(a1 + 1528) = v79;
              *(_DWORD *)(a1 + 1488) = v8;
              v34 = *(unsigned __int8 **)(a1 + 16);
              v31 = *(__int64 **)(a1 + 224);
              goto LABEL_44;
            }
            v286 = 0;
          }
          else
          {
    LABEL_375:
            v358 = *v10++;
            v286 = v358;
          }
    LABEL_376:
          v359 = 56 - j;
          v284 |= v286 << v359;
        }
        *(_DWORD *)(a1 + 1644) = HIBYTE(v284);
        v355 = HIBYTE(v284) | (*(_DWORD *)(a1 + 1640) << 8);
        v356 = v355 == 31 * (v355 / 0x1F) && (*(_DWORD *)(a1 + 1640) & 0xF) == 14;
        if ( !v356 )
          return 11;
        v85 = v284 << 8;
        v86 = j - 8;
        if ( (v284 & 0x2000000000000000LL) != 0 )
        {
          if ( !*(_QWORD *)(a1 + 296) )
            return 12;
          v357 = 0;
          *(_QWORD *)(a1 + 1648) = 0;
          while ( 1 )
          {
            v724 = v83;
            v765 = v79;
            v782 = v81;
            v360 = v84;
            v361 = v10;
            v362 = v2;
            v363 = v80;
            if ( v357 > 3 )
              break;
            while ( v86 <= 7 )
            {
              if ( v10 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v83;
                  *(_DWORD *)(a1 + 148) = v84;
                  *(_QWORD *)(a1 + 72) = v85;
                  *(_DWORD *)(a1 + 80) = v86;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_DWORD *)(a1 + 1512) = v82;
                  *(_DWORD *)(a1 + 1516) = v81;
                  *(_DWORD *)(a1 + 1520) = v742;
                  *(_DWORD *)(a1 + 1524) = v80;
                  *(_DWORD *)(a1 + 1528) = v79;
                  *(_DWORD *)(a1 + 1488) = v8;
                  v239 = *(unsigned __int8 **)(a1 + 16);
                  v236 = *(__int64 **)(a1 + 224);
                  goto LABEL_250;
                }
                v328 = 0;
              }
              else
              {
    LABEL_403:
                v379 = *v10++;
                v328 = v379;
              }
    LABEL_404:
              v380 = 56 - v86;
              v86 += 8;
              v85 |= v328 << v380;
            }
            v378 = HIBYTE(v85);
            v85 <<= 8;
            v86 -= 8;
            *(_DWORD *)(a1 + 1648) = (unsigned __int8)v378 | (*(_DWORD *)(a1 + 1648) << 8);
            v357 = *(_DWORD *)(a1 + 1652) + 1;
            *(_DWORD *)(a1 + 1652) = v357;
          }
          v364 = v8;
          v365 = v3;
          v366 = v85;
          v367 = lzham::adler32(*(unsigned __int8 **)(a1 + 296), *(unsigned int *)(a1 + 288), 1u);
          v85 = v366;
          v3 = v365;
          v8 = v364;
          v356 = v367 == *(_DWORD *)(a1 + 1648);
          v80 = v363;
          v2 = v362;
          v10 = v361;
          v84 = v360;
          v81 = v782;
          v79 = v765;
          v83 = v724;
          if ( !v356 )
            return 13;
        }
      }
      v725 = v83;
      v732 = v8;
      v766 = v79;
      v778 = v81;
      v368 = *(_DWORD *)(a1 + 304);
      v369 = *(_DWORD *)(a1 + 308);
      if ( *(_QWORD *)(a1 + 304) )
      {
        v709 = v82;
        v738 = v84;
        v370 = v86;
        v751 = v85;
        v371 = v3;
        v372 = v80;
        v373 = v2;
      }
      else
      {
        v709 = v82;
        v738 = v84;
        v370 = v86;
        v751 = v85;
        v371 = v3;
        v372 = v80;
        v373 = v2;
        v374 = *(_DWORD *)(a1 + 280);
        if ( !v374 )
          v374 = 8;
        v375 = v374 <= 0x14 ? v374 : 20;
        v376 = (unsigned __int16 *)((char *)&lzham::g_table_update_settings + 4 * v375 - 4);
        v368 = *v376;
        v369 = v376[1];
      }
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::init2(a1 + 320, 0, 0x100u, v368, v369, 0) )
        return 4;
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::assign(a1 + 448, a1 + 320) )
        return 4;
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::init2(
                            a1 + 576,
                            0,
                            8 * *(_DWORD *)(a1 + 12) - 6,
                            v368,
                            v369,
                            0) )
        return 4;
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::init2(a1 + 704, 0, 0x101u, v368, v369, 0) )
        return 4;
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::assign(a1 + 832, a1 + 704) )
        return 4;
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::init2(a1 + 960, 0, 0xFAu, v368, v369, 0) )
        return 4;
      if ( !(unsigned int)lzham::raw_quasi_adaptive_huffman_data_model::assign(a1 + 1088, a1 + 960) )
        return 4;
      v377 = lzham::raw_quasi_adaptive_huffman_data_model::init2(a1 + 1216, 0, 0x10u, v368, v369, 0);
      v2 = v373;
      v56 = v751;
      v52 = v766;
      v4 = v768;
      v51 = v372;
      v3 = v371;
      v55 = v725;
      v53 = v732;
      LODWORD(v57) = v370;
      v54 = v738;
      v50 = v742;
      v49 = v709;
      if ( !v377 )
        return 4;
      while ( 1 )
      {
        while ( (int)v57 <= 1 )
        {
          if ( v10 != *(unsigned __int8 **)(a1 + 32) )
          {
    LABEL_419:
            v383 = *v10++;
            v329 = v383;
            goto LABEL_420;
          }
          if ( *(_BYTE *)(a1 + 48) != 1 )
          {
            *(_DWORD *)(a1 + 144) = v55;
            *(_DWORD *)(a1 + 148) = v54;
            *(_QWORD *)(a1 + 72) = v56;
            *(_DWORD *)(a1 + 80) = v57;
            *(_QWORD *)(a1 + 24) = v10;
            *(_DWORD *)(a1 + 1512) = v49;
            *(_DWORD *)(a1 + 1516) = v778;
            *(_DWORD *)(a1 + 1520) = v50;
            *(_DWORD *)(a1 + 1524) = v51;
            *(_DWORD *)(a1 + 1528) = v52;
            *(_DWORD *)(a1 + 1488) = v53;
            v141 = *(unsigned __int8 **)(a1 + 16);
            v138 = *(__int64 **)(a1 + 224);
            goto LABEL_146;
          }
          v329 = 0;
    LABEL_420:
          v56 |= v329 << (56 - (unsigned __int8)v57);
          LODWORD(v57) = v57 + 8;
        }
        v330 = 0;
        v381 = v56 >> 62;
        *(_DWORD *)(a1 + 1536) = v56 >> 62;
        v56 *= 4LL;
        LODWORD(v57) = v57 - 2;
        if ( (_DWORD)v381 != 2 )
        {
          if ( (_DWORD)v381 == 1 )
          {
            v335 = 0;
            while ( v330 <= 3 )
            {
              while ( (int)v57 <= 7 )
              {
                if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                {
                  if ( *(_BYTE *)(a1 + 48) != 1 )
                  {
                    *(_DWORD *)(a1 + 144) = v335;
                    *(_DWORD *)(a1 + 148) = v330;
                    *(_QWORD *)(a1 + 72) = v56;
                    *(_DWORD *)(a1 + 80) = v57;
                    *(_QWORD *)(a1 + 24) = v10;
                    *(_DWORD *)(a1 + 1512) = v49;
                    *(_DWORD *)(a1 + 1516) = v778;
                    *(_DWORD *)(a1 + 1520) = v50;
                    *(_DWORD *)(a1 + 1524) = v51;
                    *(_DWORD *)(a1 + 1528) = v52;
                    *(_DWORD *)(a1 + 1488) = v53;
                    v283 = *(unsigned __int8 **)(a1 + 16);
                    v280 = *(__int64 **)(a1 + 224);
                    goto LABEL_283;
                  }
                  v336 = 0;
                }
                else
                {
    LABEL_625:
                  v459 = *v10++;
                  v336 = v459;
                }
    LABEL_626:
                v56 |= v336 << (56 - (unsigned __int8)v57);
                LODWORD(v57) = v57 + 8;
              }
              v458 = HIBYTE(v56);
              v56 <<= 8;
              LODWORD(v57) = v57 - 8;
              ++v330;
              v335 = (unsigned __int8)v458 | (v335 << 8);
            }
            v750 = v10;
            v764 = 0;
            *(_DWORD *)(a1 + 1532) = v53;
            v350 = 1;
            v351 = -1;
            v349 = 1;
            v348 = 1;
            v347 = 1;
            while ( (int)v57 <= 1 )
            {
              v324 = v750;
              if ( v750 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v335;
                  *(_DWORD *)(a1 + 148) = v351;
                  *(_QWORD *)(a1 + 72) = v56;
                  *(_DWORD *)(a1 + 80) = v57;
                  *(_QWORD *)(a1 + 24) = v750;
                  *(_DWORD *)(a1 + 1512) = v347;
                  *(_DWORD *)(a1 + 1516) = v348;
                  *(_DWORD *)(a1 + 1520) = v349;
                  *(_DWORD *)(a1 + 1524) = v350;
                  *(_DWORD *)(a1 + 1528) = v764;
                  *(_DWORD *)(a1 + 1488) = v53;
                  v327 = *(unsigned __int8 **)(a1 + 16);
                  v323 = *(__int64 **)(a1 + 224);
                  goto LABEL_438;
                }
                v352 = 0;
              }
              else
              {
    LABEL_434:
                v352 = *v324;
                v750 = v324 + 1;
              }
    LABEL_435:
              v56 |= v352 << (56 - (unsigned __int8)v57);
              LODWORD(v57) = v57 + 8;
            }
            v783 = v348;
            v710 = v347;
            v384 = v4;
            v385 = v2;
            v386 = v349;
            v387 = v335;
            v736 = v351;
            v388 = v53;
            v389 = v3;
            v390 = v350;
            v391 = v56 >> 62;
            v56 *= 4LL;
            v57 = (unsigned int)(v57 - 2);
            if ( (_DWORD)v391 == 2 )
            {
              v392 = v56;
              v393 = v57;
              lzham::lzham_decompressor::reset_huff_tables((std::string *)a1);
              lzham::lzham_decompressor::reset_arith_tables((std::string *)a1);
            }
            else
            {
              if ( (_DWORD)v391 != 1 )
              {
    LABEL_432:
                v129 = v390;
                v3 = v389;
                v131 = v388;
                LODWORD(v55) = v387;
                v128 = v386;
                v2 = v385;
                v4 = v384;
                v10 = v750;
                v130 = v764;
                v126 = v710;
                v127 = v783;
                goto LABEL_630;
              }
              v392 = v56;
              v393 = v57;
              lzham::lzham_decompressor::reset_huffman_table_update_rates((std::string *)a1);
            }
            v57 = v393;
            v56 = v392;
            goto LABEL_432;
          }
          if ( (_DWORD)v381 )
          {
            if ( (_DWORD)v381 == 3 )
              v382 = 3;
            else
              v382 = 7;
            *(_DWORD *)(a1 + 312) = v382;
          }
          else
          {
            v749 = v10;
            while ( (int)v57 <= 1 )
            {
              if ( v749 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v55;
                  *(_DWORD *)(a1 + 148) = v54;
                  *(_QWORD *)(a1 + 72) = v56;
                  *(_DWORD *)(a1 + 80) = v57;
                  v292 = v749;
                  *(_QWORD *)(a1 + 24) = v749;
                  *(_DWORD *)(a1 + 1512) = v49;
                  *(_DWORD *)(a1 + 1516) = v778;
                  *(_DWORD *)(a1 + 1520) = v50;
                  *(_DWORD *)(a1 + 1524) = v51;
                  *(_DWORD *)(a1 + 1528) = v52;
                  *(_DWORD *)(a1 + 1488) = v53;
                  v295 = *(unsigned __int8 **)(a1 + 16);
                  v291 = *(__int64 **)(a1 + 224);
                  goto LABEL_452;
                }
                v342 = 0;
              }
              else
              {
                v342 = *v749++;
              }
    LABEL_449:
              v56 |= v342 << (56 - (unsigned __int8)v57);
              LODWORD(v57) = v57 + 8;
            }
            v711 = v49;
            v394 = v54;
            v395 = v55;
            v770 = v4;
            v763 = v52;
            *(_DWORD *)(a1 + 1652) = v56 >> 62;
            v332 = 4 * v56;
            v333 = v57 - 2;
            if ( v56 >> 62 == 2 )
            {
              v396 = v53;
              v397 = v51;
              v398 = v3;
              lzham::lzham_decompressor::reset_huff_tables((std::string *)a1);
              lzham::lzham_decompressor::reset_arith_tables((std::string *)a1);
              v3 = v398;
              v51 = v397;
              v53 = v396;
            }
            else if ( v56 >> 62 == 1 )
            {
              v399 = v2;
              v400 = v53;
              v401 = v50;
              v402 = v51;
              v403 = v3;
              lzham::lzham_decompressor::reset_huffman_table_update_rates((std::string *)a1);
              v3 = v403;
              v51 = v402;
              v50 = v401;
              v53 = v400;
              v2 = v399;
            }
            v55 = v395;
            v54 = v394;
            v49 = v711;
            v10 = v749;
            if ( (v333 & 7) != 0 )
            {
              while ( 1 )
              {
                v404 = v333 & 7;
                if ( v333 >= v404 )
                {
                  v332 <<= v404;
                  v333 -= v404;
                  break;
                }
                if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                {
                  if ( *(_BYTE *)(a1 + 48) != 1 )
                  {
                    *(_DWORD *)(a1 + 144) = v55;
                    *(_DWORD *)(a1 + 148) = v54;
                    *(_QWORD *)(a1 + 72) = v332;
                    *(_DWORD *)(a1 + 80) = v333;
                    *(_QWORD *)(a1 + 24) = v10;
                    *(_DWORD *)(a1 + 1512) = v49;
                    *(_DWORD *)(a1 + 1516) = v778;
                    *(_DWORD *)(a1 + 1520) = v50;
                    *(_DWORD *)(a1 + 1524) = v51;
                    *(_DWORD *)(a1 + 1528) = v763;
                    *(_DWORD *)(a1 + 1488) = v53;
                    v256 = *(unsigned __int8 **)(a1 + 16);
                    v253 = *(__int64 **)(a1 + 224);
                    goto LABEL_461;
                  }
                  v334 = 0;
                }
                else
                {
    LABEL_457:
                  v405 = *v10++;
                  v334 = v405;
                }
    LABEL_458:
                v406 = 56 - v333;
                v333 += 8;
                v332 |= v334 << v406;
              }
            }
            while ( v333 <= 15 )
            {
              if ( v10 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v55;
                  *(_DWORD *)(a1 + 148) = v54;
                  *(_QWORD *)(a1 + 72) = v332;
                  *(_DWORD *)(a1 + 80) = v333;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_DWORD *)(a1 + 1512) = v49;
                  *(_DWORD *)(a1 + 1516) = v778;
                  *(_DWORD *)(a1 + 1520) = v50;
                  *(_DWORD *)(a1 + 1524) = v51;
                  *(_DWORD *)(a1 + 1528) = v763;
                  *(_DWORD *)(a1 + 1488) = v53;
                  v322 = *(unsigned __int8 **)(a1 + 16);
                  v319 = *(__int64 **)(a1 + 224);
                  goto LABEL_472;
                }
    LABEL_473:
                v408 = 0;
              }
              else
              {
    LABEL_469:
                v409 = *v10++;
                v408 = v409;
              }
              v410 = 56 - v333;
              v333 += 8;
              v332 |= v408 << v410;
            }
            v337 = v332 << 16;
            v338 = v333 - 16;
            if ( HIWORD(v332) )
            {
              *(_DWORD *)(a1 + 144) = v55;
              *(_DWORD *)(a1 + 148) = v54;
              *(_QWORD *)(a1 + 72) = v337;
              *(_DWORD *)(a1 + 80) = v338;
              *(_QWORD *)(a1 + 24) = v10;
              **(_QWORD **)(a1 + 224) = &v10[-*(_QWORD *)(a1 + 16)];
              **(_QWORD **)(a1 + 240) = 0;
              goto LABEL_466;
            }
            v52 = v763;
            v4 = v770;
            while ( v338 <= 15 )
            {
              if ( v10 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v55;
                  *(_DWORD *)(a1 + 148) = v54;
                  *(_QWORD *)(a1 + 72) = v337;
                  *(_DWORD *)(a1 + 80) = v338;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_DWORD *)(a1 + 1512) = v49;
                  *(_DWORD *)(a1 + 1516) = v778;
                  *(_DWORD *)(a1 + 1520) = v50;
                  *(_DWORD *)(a1 + 1524) = v51;
                  *(_DWORD *)(a1 + 1528) = v52;
                  *(_DWORD *)(a1 + 1488) = v53;
                  v222 = *(unsigned __int8 **)(a1 + 16);
                  v219 = *(__int64 **)(a1 + 224);
                  goto LABEL_506;
                }
    LABEL_507:
                v419 = 0;
              }
              else
              {
    LABEL_501:
                v420 = *v10++;
                v419 = v420;
              }
              v421 = 56 - v338;
              v338 += 8;
              v337 |= v419 << v421;
            }
            v56 = v337 << 16;
            LODWORD(v57) = v338 - 16;
            if ( v337 <= 0xFFFEFFFFFFFFFFFFLL )
            {
              *(_DWORD *)(a1 + 144) = v55;
              *(_DWORD *)(a1 + 148) = v54;
              *(_QWORD *)(a1 + 72) = v56;
              *(_DWORD *)(a1 + 80) = v57;
              *(_QWORD *)(a1 + 24) = v10;
              **(_QWORD **)(a1 + 224) = &v10[-*(_QWORD *)(a1 + 16)];
              **(_QWORD **)(a1 + 240) = 0;
              goto LABEL_478;
            }
            if ( (*(_DWORD *)(a1 + 1652) & 0xFFFFFFFE) == 2 )
            {
              *(_DWORD *)(a1 + 144) = v55;
              *(_DWORD *)(a1 + 148) = v54;
              *(_QWORD *)(a1 + 72) = v56;
              *(_DWORD *)(a1 + 80) = v57;
              *(_QWORD *)(a1 + 24) = v10;
              if ( !(_DWORD)v53 )
              {
                if ( *(_DWORD *)(a1 + 1492) )
                {
                  v416 = v51;
                  v417 = v49;
                  lzham_assert(
                    "!m_dst_highwater_ofs",
                    "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
                    483);
                  LODWORD(v49) = v417;
                  LODWORD(v51) = v416;
                  v10 = *(unsigned __int8 **)(a1 + 24);
                  v418 = *(_DWORD *)(a1 + 1492);
                }
                else
                {
                  v418 = 0;
                }
                **(_QWORD **)(a1 + 224) = &v10[-*(_QWORD *)(a1 + 16)];
                **(_QWORD **)(a1 + 240) = (unsigned int)-v418;
                *(_DWORD *)(a1 + 1492) = 0;
                *(_DWORD *)(a1 + 1512) = v49;
                *(_DWORD *)(a1 + 1516) = v778;
                *(_DWORD *)(a1 + 1520) = v50;
                *(_DWORD *)(a1 + 1524) = v51;
                *(_DWORD *)(a1 + 1528) = v52;
                *(_DWORD *)(a1 + 1488) = 0;
                *(_DWORD *)a1 = 496;
                return 0;
              }
              *(_DWORD *)(a1 + 1512) = v49;
              *(_DWORD *)(a1 + 1516) = v778;
              *(_DWORD *)(a1 + 1520) = v50;
              *(_DWORD *)(a1 + 1524) = v51;
              *(_DWORD *)(a1 + 1528) = v52;
              *(_DWORD *)(a1 + 1488) = v53;
              v411 = *(unsigned int *)(a1 + 1568);
              v412 = *(unsigned int *)(a1 + 1492);
              v278 = (char *)(*(_QWORD *)(a1 + 200) + v412 + v411);
              *(_QWORD *)(a1 + 1544) = v278;
              v279 = (unsigned int)(v53 - v411 - v412);
              *(_QWORD *)(a1 + 1552) = v279;
              *(_DWORD *)(a1 + 1568) = 0;
              *(_DWORD *)(a1 + 1492) = v53 & v4;
    LABEL_483:
              if ( v279 )
              {
                if ( v279 >= **(_QWORD **)(a1 + 240) )
                  v413 = **(_QWORD **)(a1 + 240);
                else
                  v413 = v279;
                *(_QWORD *)(a1 + 1560) = v413;
                if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
                {
                  if ( v413 )
                  {
                    v414 = 0;
                    while ( 1 )
                    {
                      v415 = v413 - v414 >= 0x2000 ? 0x2000LL : v413 - v414;
                      memcpy((void *)(*(_QWORD *)(a1 + 232) + v414), &v278[v414], v415);
                      *(_DWORD *)(a1 + 208) = lzham::adler32(
                                                (unsigned __int8 *)(*(_QWORD *)(a1 + 1544) + v414),
                                                v415,
                                                *(_DWORD *)(a1 + 208));
                      v414 += v415;
                      v413 = *(_QWORD *)(a1 + 1560);
                      if ( v413 <= v414 )
                        break;
                      v278 = *(char **)(a1 + 1544);
                    }
                  }
                }
                else
                {
                  memcpy(*(void **)(a1 + 232), v278, v413);
                }
                **(_QWORD **)(a1 + 224) = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
                **(_QWORD **)(a1 + 240) = *(_QWORD *)(a1 + 1560);
                v184 = 473;
                goto LABEL_509;
              }
              v49 = *(unsigned int *)(a1 + 1512);
              v778 = *(_DWORD *)(a1 + 1516);
              v50 = *(unsigned int *)(a1 + 1520);
              v51 = *(unsigned int *)(a1 + 1524);
              v52 = *(unsigned int *)(a1 + 1528);
              v53 = *(unsigned int *)(a1 + 1488);
    LABEL_353:
              v55 = *(unsigned int *)(a1 + 144);
              v54 = *(unsigned int *)(a1 + 148);
              v56 = *(_QWORD *)(a1 + 72);
              LODWORD(v57) = *(_DWORD *)(a1 + 80);
            }
          }
          goto LABEL_582;
        }
        while ( (int)v57 <= 23 )
        {
          if ( v10 == *(unsigned __int8 **)(a1 + 32) )
          {
            if ( *(_BYTE *)(a1 + 48) != 1 )
            {
              *(_DWORD *)(a1 + 144) = v55;
              *(_DWORD *)(a1 + 148) = v54;
              *(_QWORD *)(a1 + 72) = v56;
              *(_DWORD *)(a1 + 80) = v57;
              *(_QWORD *)(a1 + 24) = v10;
              *(_DWORD *)(a1 + 1608) = v330;
              *(_DWORD *)(a1 + 1512) = v49;
              *(_DWORD *)(a1 + 1516) = v778;
              *(_DWORD *)(a1 + 1520) = v50;
              *(_DWORD *)(a1 + 1524) = v51;
              *(_DWORD *)(a1 + 1528) = v52;
              *(_DWORD *)(a1 + 1488) = v53;
              v204 = *(unsigned __int8 **)(a1 + 16);
              v201 = *(__int64 **)(a1 + 224);
              goto LABEL_212;
            }
            v331 = 0;
          }
          else
          {
    LABEL_513:
            v422 = *v10++;
            v331 = v422;
          }
    LABEL_514:
          v56 |= v331 << (56 - (unsigned __int8)v57);
          LODWORD(v57) = v57 + 8;
        }
        v343 = v56 >> 40;
        v344 = v56 << 24;
        for ( k = v57 - 24; k <= 7; k += 8 )
        {
          if ( v10 == *(unsigned __int8 **)(a1 + 32) )
          {
            if ( *(_BYTE *)(a1 + 48) != 1 )
            {
              *(_DWORD *)(a1 + 144) = v55;
              *(_DWORD *)(a1 + 148) = v54;
              *(_QWORD *)(a1 + 72) = v344;
              *(_DWORD *)(a1 + 80) = k;
              *(_QWORD *)(a1 + 24) = v10;
              *(_DWORD *)(a1 + 1608) = v343;
              *(_DWORD *)(a1 + 1512) = v49;
              *(_DWORD *)(a1 + 1516) = v778;
              *(_DWORD *)(a1 + 1520) = v50;
              *(_DWORD *)(a1 + 1524) = v51;
              *(_DWORD *)(a1 + 1528) = v52;
              *(_DWORD *)(a1 + 1488) = v53;
              v304 = *(unsigned __int8 **)(a1 + 16);
              v301 = *(__int64 **)(a1 + 224);
              goto LABEL_529;
            }
            v346 = 0;
          }
          else
          {
    LABEL_525:
            v424 = *v10++;
            v346 = v424;
          }
    LABEL_526:
          v425 = 56 - k;
          v344 |= v346 << v425;
        }
        v423 = HIBYTE(v344);
        v339 = v344 << 8;
        v340 = k - 8;
        if ( (_DWORD)v423 != (unsigned __int8)(v343 ^ BYTE1(v343) ^ BYTE2(v343)) )
        {
          *(_DWORD *)(a1 + 144) = v55;
          *(_DWORD *)(a1 + 148) = v54;
          *(_QWORD *)(a1 + 72) = v339;
          *(_DWORD *)(a1 + 80) = v340;
          *(_QWORD *)(a1 + 24) = v10;
          **(_QWORD **)(a1 + 224) = &v10[-*(_QWORD *)(a1 + 16)];
          **(_QWORD **)(a1 + 240) = 0;
          goto LABEL_523;
        }
        v261 = v343 + 1;
        if ( (v340 & 7) != 0 )
        {
          while ( 1 )
          {
            v426 = v340 & 7;
            if ( v340 >= v426 )
            {
              v339 <<= v426;
              v340 -= v426;
              goto LABEL_540;
            }
            if ( v10 == *(unsigned __int8 **)(a1 + 32) )
            {
              if ( *(_BYTE *)(a1 + 48) != 1 )
              {
                *(_DWORD *)(a1 + 144) = v55;
                *(_DWORD *)(a1 + 148) = v54;
                *(_QWORD *)(a1 + 72) = v339;
                *(_DWORD *)(a1 + 80) = v340;
                *(_QWORD *)(a1 + 24) = v10;
                *(_DWORD *)(a1 + 1608) = v261;
                *(_DWORD *)(a1 + 1512) = v49;
                *(_DWORD *)(a1 + 1516) = v778;
                *(_DWORD *)(a1 + 1520) = v50;
                *(_DWORD *)(a1 + 1524) = v51;
                *(_DWORD *)(a1 + 1528) = v52;
                *(_DWORD *)(a1 + 1488) = v53;
                v274 = *(unsigned __int8 **)(a1 + 16);
                v271 = *(__int64 **)(a1 + 224);
                goto LABEL_538;
              }
              v341 = 0;
            }
            else
            {
    LABEL_534:
              v427 = *v10++;
              v341 = v427;
            }
    LABEL_535:
            v428 = 56 - v340;
            v340 += 8;
            v339 |= v341 << v428;
          }
        }
        do
        {
    LABEL_540:
          if ( v340 < 8 )
            goto LABEL_561;
          __dst[(unsigned int)v53] = HIBYTE(v339);
          if ( (int)v53 + 1 <= v4 )
          {
            v340 -= 8;
            v339 <<= 8;
            v53 = (unsigned int)(v53 + 1);
          }
          else
          {
            *(_DWORD *)(a1 + 144) = v55;
            *(_DWORD *)(a1 + 148) = v54;
            *(_QWORD *)(a1 + 72) = v339 << 8;
            *(_DWORD *)(a1 + 80) = v340 - 8;
            *(_QWORD *)(a1 + 24) = v10;
            *(_DWORD *)(a1 + 1608) = v261;
            *(_DWORD *)(a1 + 1512) = v49;
            *(_DWORD *)(a1 + 1516) = v778;
            *(_DWORD *)(a1 + 1520) = v50;
            *(_DWORD *)(a1 + 1524) = v51;
            *(_DWORD *)(a1 + 1528) = v52;
            *(_DWORD *)(a1 + 1488) = v53 + 1;
            v429 = *(unsigned int *)(a1 + 1568);
            v430 = *(unsigned int *)(a1 + 1492);
            v299 = (char *)(*(_QWORD *)(a1 + 200) + v430 + v429);
            *(_QWORD *)(a1 + 1544) = v299;
            v300 = (unsigned int)(v3 - v429 - v430);
            *(_QWORD *)(a1 + 1552) = v300;
            *(_DWORD *)(a1 + 1568) = 0;
            *(_DWORD *)(a1 + 1492) = v4 & v3;
    LABEL_543:
            if ( v300 )
            {
              if ( v300 >= **(_QWORD **)(a1 + 240) )
                v431 = **(_QWORD **)(a1 + 240);
              else
                v431 = v300;
              *(_QWORD *)(a1 + 1560) = v431;
              if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
              {
                if ( v431 )
                {
                  v432 = 0;
                  while ( 1 )
                  {
                    v433 = v431 - v432 >= 0x2000 ? 0x2000LL : v431 - v432;
                    memcpy((void *)(*(_QWORD *)(a1 + 232) + v432), &v299[v432], v433);
                    *(_DWORD *)(a1 + 208) = lzham::adler32(
                                              (unsigned __int8 *)(*(_QWORD *)(a1 + 1544) + v432),
                                              v433,
                                              *(_DWORD *)(a1 + 208));
                    v432 += v433;
                    v431 = *(_QWORD *)(a1 + 1560);
                    if ( v431 <= v432 )
                      break;
                    v299 = *(char **)(a1 + 1544);
                  }
                }
              }
              else
              {
                memcpy(*(void **)(a1 + 232), v299, v431);
              }
              **(_QWORD **)(a1 + 224) = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
              **(_QWORD **)(a1 + 240) = *(_QWORD *)(a1 + 1560);
              v184 = 559;
              goto LABEL_509;
            }
            v53 = 0;
            v261 = *(_DWORD *)(a1 + 1608);
            v49 = *(unsigned int *)(a1 + 1512);
            v778 = *(_DWORD *)(a1 + 1516);
            v50 = *(unsigned int *)(a1 + 1520);
            v51 = *(unsigned int *)(a1 + 1524);
            v52 = *(unsigned int *)(a1 + 1528);
            LODWORD(v55) = *(_DWORD *)(a1 + 144);
            LODWORD(v54) = *(_DWORD *)(a1 + 148);
            v339 = *(_QWORD *)(a1 + 72);
            v340 = *(_DWORD *)(a1 + 80);
          }
          --v261;
        }
        while ( v261 );
        v261 = 0;
    LABEL_561:
        *(_DWORD *)(a1 + 144) = v55;
        *(_DWORD *)(a1 + 148) = v54;
        *(_QWORD *)(a1 + 72) = v339;
        *(_DWORD *)(a1 + 80) = v340;
        *(_QWORD *)(a1 + 24) = v10;
    LABEL_562:
        if ( v261 )
          break;
        v55 = *(unsigned int *)(a1 + 144);
        v54 = *(unsigned int *)(a1 + 148);
        v56 = *(_QWORD *)(a1 + 72);
        LODWORD(v57) = *(_DWORD *)(a1 + 80);
        v10 = *(unsigned __int8 **)(a1 + 24);
    LABEL_582:
        ++*(_DWORD *)(a1 + 1508);
        v449 = *(_DWORD *)(a1 + 312);
        if ( v449 )
        {
          if ( (_DWORD)v53 )
          {
            *(_DWORD *)(a1 + 144) = v55;
            *(_DWORD *)(a1 + 148) = v54;
            *(_QWORD *)(a1 + 72) = v56;
            *(_DWORD *)(a1 + 80) = v57;
            *(_QWORD *)(a1 + 24) = v10;
            *(_DWORD *)(a1 + 1512) = v49;
            *(_DWORD *)(a1 + 1516) = v778;
            *(_DWORD *)(a1 + 1520) = v50;
            *(_DWORD *)(a1 + 1524) = v51;
            *(_DWORD *)(a1 + 1528) = v52;
            *(_DWORD *)(a1 + 1488) = v53;
            v450 = *(unsigned int *)(a1 + 1568);
            v451 = *(unsigned int *)(a1 + 1492);
            v28 = (char *)(*(_QWORD *)(a1 + 200) + v451 + v450);
            *(_QWORD *)(a1 + 1544) = v28;
            v29 = (unsigned int)(v53 - v450 - v451);
            *(_QWORD *)(a1 + 1552) = v29;
            *(_DWORD *)(a1 + 1568) = 0;
            *(_DWORD *)(a1 + 1492) = v53 & v4;
    LABEL_585:
            if ( v29 )
            {
              if ( v29 >= **(_QWORD **)(a1 + 240) )
                v452 = **(_QWORD **)(a1 + 240);
              else
                v452 = v29;
              *(_QWORD *)(a1 + 1560) = v452;
              if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
              {
                if ( v452 )
                {
                  v454 = 0;
                  while ( 1 )
                  {
                    v455 = v452 - v454 >= 0x2000 ? 0x2000LL : v452 - v454;
                    memcpy((void *)(*(_QWORD *)(a1 + 232) + v454), &v28[v454], v455);
                    *(_DWORD *)(a1 + 208) = lzham::adler32(
                                              (unsigned __int8 *)(*(_QWORD *)(a1 + 1544) + v454),
                                              v455,
                                              *(_DWORD *)(a1 + 208));
                    v454 += v455;
                    v452 = *(_QWORD *)(a1 + 1560);
                    if ( v452 <= v454 )
                      break;
                    v28 = *(char **)(a1 + 1544);
                  }
                }
              }
              else
              {
                memcpy(*(void **)(a1 + 232), v28, v452);
              }
              **(_QWORD **)(a1 + 224) = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
              **(_QWORD **)(a1 + 240) = *(_QWORD *)(a1 + 1560);
              v184 = 1074;
    LABEL_509:
              *(_DWORD *)a1 = v184;
              return *(_QWORD *)(a1 + 1560) == 0;
            }
            LODWORD(v49) = *(_DWORD *)(a1 + 1512);
            v778 = *(_DWORD *)(a1 + 1516);
            LODWORD(v50) = *(_DWORD *)(a1 + 1520);
            LODWORD(v51) = *(_DWORD *)(a1 + 1524);
            LODWORD(v52) = *(_DWORD *)(a1 + 1528);
            v177 = *(_DWORD *)(a1 + 1488);
            LODWORD(v55) = *(_DWORD *)(a1 + 144);
            LODWORD(v54) = *(_DWORD *)(a1 + 148);
            v56 = *(_QWORD *)(a1 + 72);
            LODWORD(v57) = *(_DWORD *)(a1 + 80);
            v449 = *(_DWORD *)(a1 + 312);
          }
          else
          {
            v177 = 0;
          }
          if ( v449 == 3 )
          {
            if ( (v57 & 7) != 0 )
            {
              while ( 1 )
              {
                v453 = v57 & 7;
                if ( (int)v57 >= v453 )
                  break;
                if ( v10 == *(unsigned __int8 **)(a1 + 32) )
                {
                  if ( *(_BYTE *)(a1 + 48) != 1 )
                  {
                    *(_DWORD *)(a1 + 144) = v55;
                    *(_DWORD *)(a1 + 148) = v54;
                    *(_QWORD *)(a1 + 72) = v56;
                    *(_DWORD *)(a1 + 80) = v57;
                    *(_QWORD *)(a1 + 24) = v10;
                    *(_DWORD *)(a1 + 1512) = v49;
                    *(_DWORD *)(a1 + 1516) = v778;
                    *(_DWORD *)(a1 + 1520) = v50;
                    *(_DWORD *)(a1 + 1524) = v51;
                    *(_DWORD *)(a1 + 1528) = v52;
                    *(_DWORD *)(a1 + 1488) = v177;
                    v116 = *(unsigned __int8 **)(a1 + 16);
                    v113 = *(__int64 **)(a1 + 224);
    LABEL_126:
                    *v113 = v10 - v116;
                    **(_QWORD **)(a1 + 240) = 0;
                    v14 = 1080;
                    goto LABEL_363;
                  }
                  v178 = 0;
                }
                else
                {
    LABEL_179:
                  v179 = *v10++;
                  v178 = v179;
                }
    LABEL_180:
                v56 |= v178 << (56 - (unsigned __int8)v57);
                LODWORD(v57) = v57 + 8;
              }
              v56 <<= v453;
              LODWORD(v57) = v57 - v453;
            }
            while ( (int)v57 <= 15 )
            {
              if ( v10 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v55;
                  *(_DWORD *)(a1 + 148) = v54;
                  *(_QWORD *)(a1 + 72) = v56;
                  *(_DWORD *)(a1 + 80) = v57;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_DWORD *)(a1 + 1512) = v49;
                  *(_DWORD *)(a1 + 1516) = v778;
                  *(_DWORD *)(a1 + 1520) = v50;
                  *(_DWORD *)(a1 + 1524) = v51;
                  *(_DWORD *)(a1 + 1528) = v52;
                  *(_DWORD *)(a1 + 1488) = v177;
                  v120 = *(unsigned __int8 **)(a1 + 16);
                  v117 = *(__int64 **)(a1 + 224);
    LABEL_130:
                  *v117 = v10 - v120;
                  **(_QWORD **)(a1 + 240) = 0;
                  v14 = 1082;
                  goto LABEL_363;
                }
    LABEL_1059:
                v694 = 0;
              }
              else
              {
    LABEL_1056:
                v695 = *v10++;
                v694 = v695;
              }
              v56 |= v694 << (56 - (unsigned __int8)v57);
              LODWORD(v57) = v57 + 8;
            }
            *(_DWORD *)(a1 + 1572) = HIWORD(v56);
            v180 = v56 << 16;
            for ( m = v57 - 16; ; m += 8 )
            {
              if ( m > 15 )
              {
                v56 = v180 << 16;
                LODWORD(v57) = m - 16;
                v696 = HIWORD(v180) | ((unsigned __int16)*(_DWORD *)(a1 + 1572) << 16);
                *(_DWORD *)(a1 + 1572) = v696;
                if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
                {
                  if ( v696 != *(_DWORD *)(a1 + 208) )
                    *(_DWORD *)(a1 + 312) = 8;
                }
                else
                {
                  *(_DWORD *)(a1 + 208) = v696;
                }
                break;
              }
              if ( v10 == *(unsigned __int8 **)(a1 + 32) )
              {
                if ( *(_BYTE *)(a1 + 48) != 1 )
                {
                  *(_DWORD *)(a1 + 144) = v55;
                  *(_DWORD *)(a1 + 148) = v54;
                  *(_QWORD *)(a1 + 72) = v180;
                  *(_DWORD *)(a1 + 80) = m;
                  *(_QWORD *)(a1 + 24) = v10;
                  *(_DWORD *)(a1 + 1512) = v49;
                  *(_DWORD *)(a1 + 1516) = v778;
                  *(_DWORD *)(a1 + 1520) = v50;
                  *(_DWORD *)(a1 + 1524) = v51;
                  *(_DWORD *)(a1 + 1528) = v52;
                  *(_DWORD *)(a1 + 1488) = v177;
                  v124 = *(unsigned __int8 **)(a1 + 16);
                  v121 = *(__int64 **)(a1 + 224);
    LABEL_134:
                  *v121 = v10 - v124;
                  **(_QWORD **)(a1 + 240) = 0;
                  v14 = 1083;
                  goto LABEL_363;
                }
    LABEL_1073:
                v697 = 0;
              }
              else
              {
    LABEL_1070:
                v698 = *v10++;
                v697 = v698;
              }
              v699 = 56 - m;
              v180 |= v697 << v699;
            }
          }
          *(_DWORD *)(a1 + 144) = v55;
          *(_DWORD *)(a1 + 148) = v54;
          *(_QWORD *)(a1 + 72) = v56;
          *(_DWORD *)(a1 + 80) = v57;
          *(_QWORD *)(a1 + 24) = v10;
          **(_QWORD **)(a1 + 224) = lzham::symbol_codec::stop_decoding((__int64)v2);
          **(_QWORD **)(a1 + 240) = 0;
          *(_DWORD *)(a1 + 1492) = v177;
          v20 = 1110;
          goto LABEL_1067;
        }
      }
      v769 = v4;
      v260 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
      v262 = *(unsigned __int64 **)(a1 + 224);
      v266 = *v262 - v260;
    LABEL_564:
      if ( v266 )
      {
        v434 = v50;
        v435 = v49;
        v715 = v2;
        v436 = v51;
        v437 = v52;
        if ( v261 >= v266 )
          v438 = v266;
        else
          v438 = v261;
        v439 = v53;
        if ( v438 >= (int)v3 - (int)v53 )
          v440 = (unsigned int)(v3 - v53);
        else
          v440 = v438;
        v441 = v3;
        memcpy(&__dst[(unsigned int)v53], (const void *)(*(_QWORD *)(a1 + 216) + v260), v440);
        v261 -= v440;
        v442 = *(_QWORD *)(a1 + 216);
        v443 = **(_QWORD **)(a1 + 224);
        v444 = *(_BYTE *)(a1 + 248);
        *(_QWORD *)(a1 + 16) = v442;
        *(_QWORD *)(a1 + 24) = v442 + v260 + (unsigned int)v440;
        *(_QWORD *)(a1 + 40) = v443;
        *(_QWORD *)(a1 + 32) = v442 + v443;
        *(_BYTE *)(a1 + 48) = v444;
        v445 = (unsigned int)(v440 + v439);
        v4 = v769;
        if ( (unsigned int)v445 <= v769 )
        {
          v52 = v437;
          v51 = v436;
          v3 = v441;
          v53 = v445;
          v2 = v715;
          v49 = v435;
          v50 = v434;
        }
        else
        {
          v3 = v441;
          if ( (_DWORD)v445 != (_DWORD)v441 )
          {
            lzham_assert(
              "dst_ofs == dict_size",
              "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/libs/lzham/lzhamdecomp/lzham_lzdecomp.cpp",
              623);
            v3 = v441;
          }
          *(_DWORD *)(a1 + 1608) = v261;
          *(_DWORD *)(a1 + 1512) = v435;
          *(_DWORD *)(a1 + 1516) = v778;
          *(_DWORD *)(a1 + 1520) = v434;
          *(_DWORD *)(a1 + 1524) = v436;
          *(_DWORD *)(a1 + 1528) = v437;
          *(_DWORD *)(a1 + 1488) = v445;
          v446 = *(unsigned int *)(a1 + 1568);
          v447 = *(unsigned int *)(a1 + 1492);
          v314 = (char *)(*(_QWORD *)(a1 + 200) + v447 + v446);
          *(_QWORD *)(a1 + 1544) = v314;
          v315 = (unsigned int)(v3 - v446 - v447);
          *(_QWORD *)(a1 + 1552) = v315;
          *(_DWORD *)(a1 + 1568) = 0;
          *(_DWORD *)(a1 + 1492) = v769 & v3;
    LABEL_575:
          if ( v315 )
          {
            if ( v315 >= **(_QWORD **)(a1 + 240) )
              v448 = **(_QWORD **)(a1 + 240);
            else
              v448 = v315;
            *(_QWORD *)(a1 + 1560) = v448;
            if ( (*(_BYTE *)(a1 + 284) & 2) != 0 )
            {
              if ( v448 )
              {
                v456 = 0;
                while ( 1 )
                {
                  v457 = v448 - v456 >= 0x2000 ? 0x2000LL : v448 - v456;
                  memcpy((void *)(*(_QWORD *)(a1 + 232) + v456), &v314[v456], v457);
                  *(_DWORD *)(a1 + 208) = lzham::adler32(
                                            (unsigned __int8 *)(*(_QWORD *)(a1 + 1544) + v456),
                                            v457,
                                            *(_DWORD *)(a1 + 208));
                  v456 += v457;
                  v448 = *(_QWORD *)(a1 + 1560);
                  if ( v448 <= v456 )
                    break;
                  v314 = *(char **)(a1 + 1544);
                }
              }
            }
            else
            {
              memcpy(*(void **)(a1 + 232), v314, v448);
            }
            **(_QWORD **)(a1 + 224) = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
            **(_QWORD **)(a1 + 240) = *(_QWORD *)(a1 + 1560);
            v184 = 625;
            goto LABEL_509;
          }
          v53 = 0;
          v261 = *(_DWORD *)(a1 + 1608);
          v49 = *(unsigned int *)(a1 + 1512);
          v778 = *(_DWORD *)(a1 + 1516);
          v50 = *(unsigned int *)(a1 + 1520);
          v51 = *(unsigned int *)(a1 + 1524);
          v52 = *(unsigned int *)(a1 + 1528);
          v2 = v715;
        }
        goto LABEL_562;
      }
      *v262 = v260;
      **(_QWORD **)(a1 + 240) = 0;
      if ( *(_BYTE *)(a1 + 248) )
      {
    LABEL_606:
        *(_DWORD *)a1 = 584;
        return 6;
      }
      else
      {
        *(_DWORD *)(a1 + 1608) = v261;
        *(_DWORD *)(a1 + 1512) = v49;
        *(_DWORD *)(a1 + 1516) = v778;
        *(_DWORD *)(a1 + 1520) = v50;
        *(_DWORD *)(a1 + 1524) = v51;
        *(_DWORD *)(a1 + 1528) = v52;
        *(_DWORD *)(a1 + 1488) = v53;
        *(_DWORD *)a1 = 588;
        return 2;
      }
    }

    std::string *__fastcall lzham::lzham_decompressor::lzham_decompressor(std::string *this)
    {
      __int64 v2; // x25
      __int64 v3; // x24
    
      lzham::symbol_codec::symbol_codec((std::string *)((char *)this + 16));
      lzham::raw_quasi_adaptive_huffman_data_model::raw_quasi_adaptive_huffman_data_model((__int64)this + 320, 0, 0, 0, 0);
      lzham::raw_quasi_adaptive_huffman_data_model::raw_quasi_adaptive_huffman_data_model((__int64)this + 448, 0, 0, 0, 0);
      v2 = 576;
      lzham::raw_quasi_adaptive_huffman_data_model::raw_quasi_adaptive_huffman_data_model((__int64)this + 576, 0, 0, 0, 0);
      v3 = 832;
      do
      {
        lzham::raw_quasi_adaptive_huffman_data_model::raw_quasi_adaptive_huffman_data_model(
          (__int64)this + v2 + 128,
          0,
          0,
          0,
          0);
        v2 += 128;
      }
      while ( v2 != 832 );
      do
      {
        lzham::raw_quasi_adaptive_huffman_data_model::raw_quasi_adaptive_huffman_data_model(
          (__int64)this + v3 + 128,
          0,
          0,
          0,
          0);
        v3 += 128;
      }
      while ( v3 != 1088 );
      lzham::raw_quasi_adaptive_huffman_data_model::raw_quasi_adaptive_huffman_data_model((__int64)this + 1216, 0, 0, 0, 0);
      memset_pattern16((char *)this + 1344, &memset_pattern25, 0x18u);
      memset_pattern16((char *)this + 1368, &memset_pattern25, 0x18u);
      memset_pattern16((char *)this + 1392, &memset_pattern25, 0x18u);
      memset_pattern16((char *)this + 1416, &memset_pattern25, 0x18u);
      memset_pattern16((char *)this + 1440, &memset_pattern25, 0x18u);
      memset_pattern16((char *)this + 1464, &memset_pattern25, 0x18u);
      return this;
    }

    void __fastcall lzham::lzham_decompressor::~lzham_decompressor(std::string *this)
    {
      __int64 i; // x22
      __int64 j; // x22
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x0
    
      lzham::raw_quasi_adaptive_huffman_data_model::~raw_quasi_adaptive_huffman_data_model((__int64 *)this + 152);
      for ( i = 0; i != -256; i -= 128 )
        lzham::raw_quasi_adaptive_huffman_data_model::~raw_quasi_adaptive_huffman_data_model((__int64 *)((char *)this + i + 1088));
      for ( j = 0; j != -256; j -= 128 )
        lzham::raw_quasi_adaptive_huffman_data_model::~raw_quasi_adaptive_huffman_data_model((__int64 *)((char *)this + j + 832));
      lzham::raw_quasi_adaptive_huffman_data_model::~raw_quasi_adaptive_huffman_data_model((__int64 *)this + 72);
      lzham::raw_quasi_adaptive_huffman_data_model::~raw_quasi_adaptive_huffman_data_model((__int64 *)this + 56);
      lzham::raw_quasi_adaptive_huffman_data_model::~raw_quasi_adaptive_huffman_data_model((__int64 *)this + 40);
      v4 = *((_QWORD *)this + 15);
      if ( v4 )
        lzham::lzham_free(v4);
      v5 = *((_QWORD *)this + 13);
      if ( v5 )
        lzham::lzham_free(v5);
      v6 = *((_QWORD *)this + 11);
      if ( v6 )
        lzham::lzham_free(v6);
    }

}; // end class lzham::lzham_decompressor
