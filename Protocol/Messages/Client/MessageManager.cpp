class MessageManager
{
public:

    __int64 __fastcall MessageManager::MessageManager(__int64 a1, __int64 a2)
    {
      *(_QWORD *)a1 = off_1004708F0;
      LogicLong::LogicLong((LogicLong *)(a1 + 32));
      String::String((String *)(a1 + 40));
      *(_QWORD *)(a1 + 88) = 0;
      *(_QWORD *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 96) = 0;
      String::String((String *)(a1 + 160));
      MessageManager::initializeMembers((MessageManager *)a1);
      *(_QWORD *)(a1 + 8) = a2;
      return a1;
    }

    __int64 __fastcall MessageManager::~MessageManager(__int64 a1)
    {
      __int64 v2; // x0
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
      _QWORD *v6; // x20
      int v7; // w8
      int v8; // w21
      __int64 v9; // x0
      __int64 v10; // x22
      int v11; // w8
      __int64 v12; // x0
      __int64 v13; // x0
      __int64 v14; // x0
    
      *(_QWORD *)a1 = off_1004708F0;
      MessageManager::clearUdpInfo((MessageManager *)a1);
      v2 = *(_QWORD *)(a1 + 120);
      if ( v2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
        v3 = *(_QWORD *)(a1 + 120);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        *(_QWORD *)(a1 + 120) = 0;
      }
      v4 = *(_QWORD *)(a1 + 24);
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        v5 = *(_QWORD *)(a1 + 24);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        *(_QWORD *)(a1 + 24) = 0;
      }
      v6 = (_QWORD *)(a1 + 104);
      v7 = *(_DWORD *)(a1 + 116);
      v8 = v7 - 1;
      if ( v7 >= 1 )
      {
        do
        {
          v9 = LogicArrayList<PiranhaMessage *>::remove((__int64 *)(a1 + 104), v8);
          v10 = v9;
          if ( v9 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
          }
          v11 = v8-- + 1;
        }
        while ( v11 > 1 );
      }
      MessageManager::clearBufferedServerCommands((MessageManager *)a1);
      v12 = *(_QWORD *)(a1 + 128);
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
        v13 = *(_QWORD *)(a1 + 128);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        *(_QWORD *)(a1 + 128) = 0;
      }
      MessageManager::initializeMembers((MessageManager *)a1);
      String::~String();
      if ( *v6 )
        operator delete[](*v6);
      *v6 = 0;
      *(_QWORD *)(a1 + 112) = 0;
      v14 = *(_QWORD *)(a1 + 88);
      if ( v14 )
        operator delete[](v14);
      *(_QWORD *)(a1 + 88) = 0;
      *(_QWORD *)(a1 + 96) = 0;
      String::~String();
      *(_QWORD *)(a1 + 32) = 0;
      return a1;
    }

    void __fastcall MessageManager::clearUdpInfo(__int64 a1)
    {
      void *v2; // x20
    
      v2 = *(void **)(a1 + 144);
      if ( v2 )
      {
        UdpSocket::~UdpSocket(*(natural_t **)(a1 + 144));
        operator delete(v2);
      }
      *(_QWORD *)(a1 + 144) = 0;
    }

    __int64 __fastcall MessageManager::clearBufferedServerCommands(__int64 result)
    {
      __int64 v1; // x19
      int v2; // w8
      __int64 v3; // x20
      __int64 v4; // x22
      int v5; // w8
    
      v1 = result;
      v2 = *(_DWORD *)(result + 100);
      v3 = (unsigned int)(v2 - 1);
      if ( v2 >= 1 )
      {
        do
        {
          result = LogicArrayList<LogicServerCommand *>::remove(v1 + 88, v3);
          v4 = result;
          if ( result )
          {
            (**(void (__fastcall ***)(__int64))result)(result);
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
          }
          v5 = v3 + 1;
          v3 = (unsigned int)(v3 - 1);
        }
        while ( v5 > 1 );
      }
      *(_DWORD *)(v1 + 100) = 0;
      return result;
    }

    // attributes: thunk
    __int64 __fastcall MessageManager::~MessageManager(__int64 a1)
    {
      return __ZN14MessageManagerD2Ev(a1);
    }

    void __fastcall MessageManager::~MessageManager(void *a1)
    {
      MessageManager::~MessageManager((__int64)a1);
      operator delete(a1);
    }

    __int64 __fastcall MessageManager::constructInstance(__int64 a1)
    {
      __int64 v2; // x19
      __int64 result; // x0
    
      v2 = operator new(184);
      result = MessageManager::MessageManager(v2, a1);
      MessageManager::sm_pInstance = v2;
      return result;
    }

    __int64 MessageManager::destructInstance()
    {
      __int64 result; // x0
    
      result = MessageManager::sm_pInstance;
      if ( MessageManager::sm_pInstance )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)MessageManager::sm_pInstance + 8LL))(MessageManager::sm_pInstance);
      MessageManager::sm_pInstance = 0;
      return result;
    }

    __int64 __fastcall MessageManager::clearPendingBattleResultMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 128);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 48LL))(result);
        result = *(_QWORD *)(a1 + 128);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *(_QWORD *)(a1 + 128) = 0;
      }
      return result;
    }

    __int64 __fastcall MessageManager::removePendingBattleResultMessage(__int64 a1)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 128) = 0;
      return v1;
    }

    __int64 __fastcall MessageManager::sendUdpMessage(MessageManager *a1, PiranhaMessage *a2)
    {
      AllianceStreamMessage *isValidConnection; // x0
      __int64 v5; // x20
      AllianceStreamMessage *Instance; // x0
      const char *v7; // x1
    
      if ( !*((_QWORD *)a1 + 18) )
        return MessageManager::sendMessage(a1, a2);
      isValidConnection = (AllianceStreamMessage *)UdpSocket::isValidConnection();
      if ( !(_DWORD)isValidConnection )
        return MessageManager::sendMessage(a1, a2);
      v5 = *((_QWORD *)a1 + 18);
      Instance = GameMain::getInstance(isValidConnection);
      (*(void (__fastcall **)(AllianceStreamMessage *))(*(_QWORD *)Instance + 184LL))(Instance);
      if ( (UdpSocket::sendMessage(v5, a2) & 1) != 0 )
        return 1;
      Debugger::warning((__siginfo *)"Failed to send message with UDP", v7);
      return 0;
    }

    __int64 __fastcall MessageManager::sendMessage(Messaging **a1, PiranhaMessage *a2)
    {
      PiranhaMessage *v5; // [xsp+8h] [xbp-18h] BYREF
    
      v5 = a2;
      if ( !(unsigned int)LogicVersion::isDev((OutlineRenderer *)a1) )
        return Messaging::send(a1[1], a2);
      LogicArrayList<PiranhaMessage *>::add((__int64)(a1 + 13), (__int64 *)&v5);
      return 1;
    }

    __int64 __fastcall MessageManager::receiveMessage(__int64 a1, __int64 a2)
    {
      #825 *v4; // x0
      const char *v5; // x1
      int v6; // w2
      __int64 v8; // x20
      __int64 v9; // x0
      const char *v10; // x1
      const String *v11; // x1
      String *v12; // x0
      const char *v13; // x3
      thread_state_t *v14; // x0
      thread_state_t *v15; // x20
      __darwin_gid_t *v16; // x20
      String *v17; // x0
      const char *v18; // x3
      __int64 Instance; // x0
      #1008 *DeviceLinkWindow; // x0
      #1008 *v21; // x20
      __int64 CurrentSubScreen; // x0
      __int64 ErrorCode; // x0
      const char *v24; // x1
      __darwin_pid_t *v25; // x21
      #825 *PlayerAvatar; // x0
      __int64 v27; // x0
      #984 *v28; // x0
      const String *v29; // x1
      String *p_si_addr; // x0
      String *v31; // x20
      __int64 v32; // x0
      void *v33; // x19
      __int64 v34; // x21
      __int64 v35; // x22
      __int64 v36; // x23
      __int64 v37; // x0
      __uint16_t *v38; // x0
      #825 *v39; // x0
      pid_t *v40; // x19
      int v41; // s0
      int v42; // s1
      const char *v43; // x1
      __int64 String; // x2
      _DWORD *v45; // x1
      __int64 v46; // x0
      __int64 v47; // x20
      __int64 v48; // x21
      #1008 *v49; // x21
      #828 *v50; // x20
      const String *DeviceName; // x0
      #1008 *v52; // x0
      __int64 v53; // x0
      __int64 v54; // x19
      UnlockAccountOkMessage *v55; // x1
      __int64 v56; // x0
      #825 *v57; // x21
      __int64 TopPopup; // x0
      __int64 v59; // x0
      __int64 v60; // x0
      const String *v61; // x21
      __int64 v62; // x0
      int v63; // w22
      #1027 *v64; // x0
      __int64 v65; // x0
      __int64 v66; // x20
      __int64 isZero; // x0
      _DWORD *v68; // x19
      __int64 v69; // x21
      __int64 v70; // x22
      __int64 v71; // x23
      __int64 v72; // x0
      __int64 v73; // x0
      __int64 v74; // x19
      #946 *v75; // x20
      __int64 v76; // x0
      int v77; // w21
      char v78; // w19
      vm_address_t *v79; // x0
      __int64 ExpReward; // x0
      int OwnStars; // w0
      int v82; // w20
      #769 *GoldReward; // x0
      #769 *v84; // x0
      const char *v85; // x1
      #769 *v86; // x0
      #769 *v87; // x0
      mode_t *v88; // x20
      const String *TID; // x21
      const String *ProdId; // x0
      __int64 v91; // x21
      thread_state_t *v92; // x22
      __int64 v93; // x0
      __int64 v94; // x23
      __int64 RandomSeed; // x0
      #1080 *v96; // x0
      #772 *v97; // x0
      #858 *v98; // x20
      #1080 *v99; // x0
      __int64 v100; // x19
      __int64 v101; // x0
      #825 *v102; // x0
      __int64 v103; // x0
      #825 *v104; // x0
      __int64 v105; // x0
      void (__fastcall ***v106)(_QWORD, String *); // x20
      const char *v107; // x1
      void (__fastcall *v108)(_QWORD, __int64); // x19
      char *v109; // x0
      __int64 v110; // x0
      #772 *v111; // x0
      #825 *IsShuttingDown; // x0
      #825 *v113; // x0
      int v114; // s0
      int v115; // s1
      const char *v116; // x1
      char *v117; // x0
      __int64 v118; // x20
      __int64 v119; // x0
      #812 *v120; // x19
      #825 *v121; // x0
      int v122; // s0
      int v123; // s1
      const char *v124; // x1
      #769 *v125; // x0
      #769 *v126; // x20
      __int64 v127; // x19
      __int64 v128; // x0
      #1047 *v129; // x0
      __int64 v130; // x20
      __int64 v131; // x0
      __int64 v132; // x20
      #1080 *ContentVersion; // x0
      __int64 v134; // x20
      __int64 v135; // x22
      #772 *v136; // x20
      const char *v137; // x1
      String *v138; // x21
      String *v139; // x19
      #858 *CurrentState; // x0
      __int64 Account; // x24
      String *v142; // x20
      __int64 v143; // x0
      void *v144; // x23
      __int64 v145; // x20
      stat *BattleScreen; // x0
      stat *v147; // x21
      __darwin_pthread_mutex_t *isMatchmaking; // x0
      __int64 v149; // x0
      __int64 v150; // x0
      #1047 *v151; // x0
      __int64 v152; // x0
      #1047 *HomeScreen; // x0
      #1056 *BattlePage; // x0
      int v155; // w21
      vm_address_t *LevelIndex; // x19
      #825 *v157; // x0
      vm_address_t *v158; // x0
      __int64 v159; // x0
      __int64 v160; // x0
      vm_address_t *PopupByType; // x21
      __int64 v162; // x0
      vm_address_t *v163; // x0
      const char *v164; // x1
      __int64 v165; // x0
      #1047 *v166; // x0
      vm_address_t *v167; // x0
      __int64 v168; // x0
      #1047 *v169; // x0
      #1056 *v170; // x0
      char v171; // w0
      char v172; // w8
      __int64 v173; // x0
      __int64 v174; // x19
      int v175; // w0
      const String *LinkCode; // x22
      int CodeValidSeconds; // w0
      __darwin_pthread_attr_t *v178; // x19
      __darwin_pthread_mutex_t *v179; // x0
      __darwin_pthread_mutex_t *v180; // x20
      const uid_t *StreamEntryId; // x0
      #1080 *v182; // x0
      const char *v183; // x1
      __int64 v184; // x19
      __int64 v185; // x25
      __int64 v186; // x26
      __int64 v187; // x0
      int v188; // w22
      int v189; // w0
      __int64 ServerMajorVersion; // x25
      __int64 ServerBuild; // x26
      String *v192; // x22
      String *v193; // x0
      const char *v194; // x3
      String *v195; // x0
      const char *v196; // x3
      const char *v197; // x1
      int v198; // w2
      const char *v199; // x1
      int v200; // w2
      __int64 FacebookId; // x0
      _DWORD *v202; // x26
      __darwin_ino64_t *v203; // x25
      const String *v204; // x0
      String *v205; // x21
      __darwin_pthread_attr_t *v206; // x25
      __int64 isChallenging; // x0
      #1077 *v208; // x0
      int v209; // w22
      __int64 v210; // x19
      const String *v211; // x1
      String *v212; // x26
      String *v213; // x25
      const char *v214; // x1
      const String *DaysSinceStartedPlaying; // x24
      int PlayTimeSeconds; // w27
      __uint64_t *SessionCount; // x0
      int v218; // w19
      __int64 EnteredLinkCode; // x0
      __int64 v220; // x0
      const char *v221; // x1
      int VillageLevel; // w22
      const String *VillageName; // x23
      __int64 AccountID; // x26
      const String *PassToken; // x24
      int ExpLevel; // w19
      #1027 *v227; // x25
      int HigherInt; // w27
      int LowerInt; // w0
      __int64 result; // x0
      __int64 v231; // x0
      __int64 v232; // x0
      uid_t *v233; // x0
      #825 *v234; // x0
      pthread_t *v235; // x21
      const char *v236; // x1
      const String *v237; // x19
      const char *v238; // x1
      const String *v239; // x0
      #825 *v240; // x0
      __int64 v241; // x0
      String *v242; // x8
      #962 *v243; // x20
      pthread_attr_t *v244; // x0
      int v245; // w2
      #1047 *v246; // x0
      #872 *ClanPage; // x0
      __int64 AllianceSettings; // x20
      #825 *v249; // x0
      Dl_info *v250; // x0
      String *v251; // x0
      __int64 v252; // x0
      #1047 *v253; // x0
      float v254; // s0
      const String *v255; // x1
      thread_state_t *v256; // x19
      __int64 v257; // x0
      __int64 v258; // x0
      __int64 ClientChecksum; // x20
      __int64 ServerChecksum; // x0
      const char *v261; // x1
      const String *v262; // x1
      #1080 *v263; // x0
      __int64 v264; // x19
      #772 *v265; // x0
      #1156 *v266; // x19
      vm_address_t *canForwardServerCommand; // x0
      #945 *v268; // x0
      int ServerPort; // w23
      String *v270; // x20
      const char *v271; // x22
      natural_t *v272; // x24
      __darwin_natural_t *v273; // x25
      const String *Nonce; // x0
      const char *v275; // x1
      __int64 v276; // x19
      HomeBattleReplayMessage *v277; // x23
      #1080 *v278; // x0
      __int64 v279; // x0
      pthread_attr_t *v280; // x0
      const char *v281; // x1
      __int64 ClientGlobals; // x19
      const char *v283; // x1
      const char *CompressedReplayDataJSONLength; // x20
      __darwin_pthread_handler_rec *v285; // x0
      unsigned __int8 **v286; // x3
      __darwin_pthread_handler_rec *v287; // x19
      const char *v288; // x1
      int v289; // w21
      const char *v290; // x22
      String *v292; // x20
      thread_state_t *v293; // x0
      thread_state_t *v294; // x0
      __int64 v295; // x20
      __int64 v296; // x19
      const char *v297; // x1
      void *v298; // x0
      #825 *v299; // x0
      pid_t *v300; // x19
      const char *v301; // x1
      const String *v302; // x1
      float v303; // s0
      int v304; // w2
      __darwin_pthread_mutex_t *v305; // x0
      __darwin_pthread_mutex_t *v306; // x0
      __darwin_pthread_mutex_t *v307; // x0
      int v308; // w2
      #1047 *v309; // x0
      #1047 *v310; // x0
      #1056 *v311; // x0
      String *v312; // x0
      const char *v313; // x3
      #1080 *v314; // x0
      __int64 v315; // x0
      #1080 *v316; // x0
      __int64 v317; // x0
      __int64 v318; // x0
      __int64 v319; // x0
      #772 *v320; // x19
      const char *v321; // x1
      #858 *v322; // x0
      const String *v323; // x1
      #825 *v324; // x0
      Dl_info *v325; // x0
      #825 *v326; // x0
      __int64 v327; // x0
      #1031 *v328; // x0
      vm_address_t *v329; // x0
      __int64 v330; // x0
      const char *v331; // x2
      #825 *v332; // x0
      Dl_info *v333; // x0
      char *v334; // x0
      void *v335; // x23
      const String *v336; // x0
      #825 *v337; // x0
      pid_t *v338; // x20
      int v339; // s0
      int v340; // s1
      int v341; // w1
      char *v342; // x0
      int v343; // w20
      #825 *v344; // x0
      __int64 v345; // x0
      #1047 *v346; // x20
      __int64 v347; // x19
      __int64 v348; // x0
      __int64 v349; // x0
      #1047 *v350; // x21
      __int64 v351; // x22
      __int64 v352; // x0
      __int64 v353; // x0
      _QWORD *v354; // x19
      __int64 v355; // x20
      __int64 v356; // x0
      __darwin_pthread_mutex_t *v357; // x0
      __int64 v358; // x20
      __int64 v359; // x0
      #825 *v360; // x0
      Dl_info *v361; // x0
      #825 *Reason; // x0
      const char *v363; // x1
      char *v364; // x0
      #825 *v365; // x0
      #825 *v366; // x0
      const char *v367; // x1
      const String *v368; // x0
      const char *v369; // x1
      __int64 v370; // x21
      __int64 v371; // x0
      const char *v372; // x1
      __int64 Name; // x0
      __int64 v374; // x20
      #825 *v375; // x0
      __int64 v376; // x0
      pthread_attr_t *v377; // x0
      __int64 v378; // x0
      const char *v379; // x1
      void (__fastcall *v380)(_QWORD, String *); // x21
      const char *v381; // x1
      __int64 v382; // x19
      #825 *v383; // x0
      #825 *v384; // x0
      pid_t *v385; // x20
      unsigned int v386; // s0
      unsigned int v387; // s1
      const String *v388; // x1
      __int64 v389; // x0
      #1047 *v390; // x0
      #1056 *v391; // x20
      int EstimatedDuration; // w0
      #825 *v393; // x0
      int v394; // w20
      String v395; // [xsp+58h] [xbp-4D8h] BYREF
      String v396; // [xsp+70h] [xbp-4C0h] BYREF
      String v397; // [xsp+88h] [xbp-4A8h] BYREF
      _DWORD v398[2]; // [xsp+A0h] [xbp-490h] BYREF
      _DWORD v399[2]; // [xsp+A8h] [xbp-488h] BYREF
      String v400; // [xsp+B0h] [xbp-480h] BYREF
      String v401; // [xsp+C8h] [xbp-468h] BYREF
      String v402; // [xsp+E0h] [xbp-450h] BYREF
      _DWORD v403[2]; // [xsp+F8h] [xbp-438h] BYREF
      String v404; // [xsp+100h] [xbp-430h] BYREF
      #1156 *v405; // [xsp+118h] [xbp-418h] BYREF
      String v406; // [xsp+120h] [xbp-410h] BYREF
      String v407; // [xsp+138h] [xbp-3F8h] BYREF
      String v408; // [xsp+150h] [xbp-3E0h] BYREF
      String v409; // [xsp+168h] [xbp-3C8h] BYREF
      String v410; // [xsp+180h] [xbp-3B0h] BYREF
      String v411; // [xsp+198h] [xbp-398h] BYREF
      _DWORD v412[2]; // [xsp+1B0h] [xbp-380h] BYREF
      String v413; // [xsp+1B8h] [xbp-378h] BYREF
      String v414; // [xsp+1D0h] [xbp-360h] BYREF
      String v415; // [xsp+1E8h] [xbp-348h] BYREF
      __siginfo v416; // [xsp+200h] [xbp-330h] BYREF
      String v417; // [xsp+278h] [xbp-2B8h] BYREF
      String v418; // [xsp+290h] [xbp-2A0h] BYREF
      String v419; // [xsp+2A8h] [xbp-288h] BYREF
      __siginfo v420; // [xsp+2C0h] [xbp-270h] BYREF
      String v421; // [xsp+338h] [xbp-1F8h] BYREF
      String v422; // [xsp+350h] [xbp-1E0h] BYREF
      String v423; // [xsp+368h] [xbp-1C8h] BYREF
      String v424; // [xsp+380h] [xbp-1B0h] BYREF
      void *v425; // [xsp+398h] [xbp-198h] BYREF
      __siginfo v426; // [xsp+3A0h] [xbp-190h] BYREF
      String v427; // [xsp+408h] [xbp-128h] BYREF
      String v428; // [xsp+420h] [xbp-110h] BYREF
      String v429; // [xsp+438h] [xbp-F8h] BYREF
      __int64 v430[3]; // [xsp+450h] [xbp-E0h] BYREF
      String v431; // [xsp+468h] [xbp-C8h] BYREF
      String v432; // [xsp+480h] [xbp-B0h] BYREF
      String v433; // [xsp+498h] [xbp-98h] BYREF
      String v434; // [xsp+4B0h] [xbp-80h] BYREF
      __siginfo v435; // [xsp+4C8h] [xbp-68h] BYREF
    
      v4 = (#825 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
      if ( *(_DWORD *)ServerConnection::sm_pInstance != 6
        && ((unsigned int)((_DWORD)v4 - 20103) > 0x1E || ((1 << ((_BYTE)v4 + 121)) & 0x60000023) == 0) )
      {
        String::format((String *)"MessageManager - Message was ignored because not logged in! (%d)", v5, v4);
        Debugger::warning(&v435, v29);
        p_si_addr = (String *)&v435;
        goto LABEL_190;
      }
      v8 = 1;
      if ( (int)v4 > 26001 )
      {
        switch ( (int)v4 )
        {
          case 26002:
            Instance = GUI::getInstance(v4);
            if ( !Instance )
              return 1;
            DeviceLinkWindow = (#1008 *)GUI::getDeviceLinkWindow(Instance);
            v21 = DeviceLinkWindow;
            if ( !DeviceLinkWindow )
              return 1;
            CurrentSubScreen = DeviceLinkWindow::getCurrentSubScreen(DeviceLinkWindow);
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)CurrentSubScreen + 328LL))(CurrentSubScreen) != 5 )
              return 1;
            ErrorCode = LogicDeviceLinkCodeResponseMessage::getErrorCode(a2);
            switch ( (_DWORD)ErrorCode )
            {
              case 2:
    LABEL_197:
                v25 = (__darwin_pid_t *)operator new(272);
                DeviceLinkErrorScreen::DeviceLinkErrorScreen(v25, 1, 0);
                goto LABEL_251;
              case 1:
    LABEL_17:
                v25 = (__darwin_pid_t *)operator new(272);
                DeviceLinkErrorScreen::DeviceLinkErrorScreen(v25, 2, 0);
                goto LABEL_251;
              case 0:
                v25 = (__darwin_pid_t *)operator new(296);
                LinkCode = (const String *)LogicDeviceLinkCodeResponseMessage::getLinkCode((#989 *)a2);
                CodeValidSeconds = LogicDeviceLinkCodeResponseMessage::getCodeValidSeconds(a2);
                DeviceLinkCodeReceivedScreen::DeviceLinkCodeReceivedScreen((#850 *)v25, LinkCode, CodeValidSeconds, 0);
                goto LABEL_251;
            }
            String::format((String *)"LogicDeviceLinkCodeResponseMessage unknown error code %d", v24, ErrorCode);
            Debugger::warning((__siginfo *)&v426.si_addr, v211);
            p_si_addr = (String *)&v426.si_addr;
            goto LABEL_190;
          case 26003:
            v46 = GUI::getInstance(v4);
            v47 = v46;
            if ( !v46 )
              return 1;
            v48 = GUI::getDeviceLinkWindow(v46);
            if ( !v48 )
            {
              v49 = (#1008 *)operator new(296);
              DeviceLinkWindow::DeviceLinkWindow(v49, 0);
              GUI::showPopup(v47, v49, 1, 0, 0);
              v48 = GUI::getDeviceLinkWindow(v47);
              if ( !v48 )
              {
                v117 = "LogicDeviceLinkNewDeviceLinkedMessage received, but settings can't be created!";
                goto LABEL_221;
              }
            }
            v50 = (#828 *)operator new(256);
            DeviceName = (const String *)LogicDeviceLinkNewDeviceLinkedMessage::getDeviceName(a2);
            DeviceLinkSuccesfullOldScreen::DeviceLinkSuccesfullOldScreen(v50, DeviceName);
            v52 = (#1008 *)v48;
    LABEL_54:
            v55 = v50;
            goto LABEL_252;
          case 26004:
            v53 = GUI::getInstance(v4);
            if ( !v53 )
              return 1;
            v54 = GUI::getDeviceLinkWindow(v53);
            if ( !v54 )
              return 1;
            v50 = (#828 *)operator new(272);
            DeviceLinkErrorScreen::DeviceLinkErrorScreen((__darwin_pid_t *)v50, 5, 0);
            v52 = (#1008 *)v54;
            goto LABEL_54;
          case 26005:
            v56 = GUI::getInstance(v4);
            v57 = (#825 *)v56;
            if ( !v56 )
              return 1;
            v21 = (#1008 *)GUI::getDeviceLinkWindow(v56);
            if ( !v21 )
              return 1;
            TopPopup = GUI::getTopPopup(v57);
            if ( !TopPopup
              || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)TopPopup + 328LL))(TopPopup) != 50
              || !DeviceLinkWindow::getCurrentSubScreen(v21) )
            {
              return 1;
            }
            v59 = DeviceLinkWindow::getCurrentSubScreen(v21);
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v59 + 328LL))(v59) != 1 )
            {
              v60 = DeviceLinkWindow::getCurrentSubScreen(v21);
              if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v60 + 328LL))(v60) != 2 )
                return 1;
            }
            v61 = (const String *)LogicDeviceLinkResponseMessage::getLinkCode((#857 *)a2);
            v62 = DeviceLinkWindow::getCurrentSubScreen(v21);
            v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 328LL))(v62);
            v64 = (#1027 *)DeviceLinkWindow::getCurrentSubScreen(v21);
            if ( v63 == 2 )
            {
              v65 = DeviceLinkConfirmationScreen::getLinkCode(v64);
              if ( (String::equalsIgnoreCase(v65, v61) & 1) == 0 )
                goto LABEL_250;
            }
            else
            {
              EnteredLinkCode = DeviceLinkEnterCodeScreen::getEnteredLinkCode(v64);
              if ( !(unsigned int)String::equalsIgnoreCase(EnteredLinkCode, v61) )
              {
    LABEL_250:
                v25 = (__darwin_pid_t *)operator new(272);
                DeviceLinkErrorScreen::DeviceLinkErrorScreen(v25, 4, 1);
                goto LABEL_251;
              }
            }
            v220 = LogicDeviceLinkResponseMessage::getErrorCode((#857 *)a2);
            switch ( (int)v220 )
            {
              case 0:
                VillageLevel = LogicDeviceLinkResponseMessage::getVillageLevel((#857 *)a2);
                VillageName = (const String *)LogicDeviceLinkResponseMessage::getVillageName((#857 *)a2);
                AccountID = LogicDeviceLinkResponseMessage::getAccountID((#857 *)a2);
                PassToken = (const String *)LogicDeviceLinkResponseMessage::getPassToken((#857 *)a2);
                ExpLevel = LogicDeviceLinkResponseMessage::getExpLevel((#857 *)a2);
                if ( (LogicLong::isZero(AccountID) & 1) != 0 || !PassToken->m_length )
                  return 1;
                v227 = (#1027 *)operator new(352);
                HigherInt = LogicLong::getHigherInt(AccountID);
                LowerInt = LogicLong::getLowerInt(AccountID);
                DeviceLinkConfirmationScreen::DeviceLinkConfirmationScreen(
                  v227,
                  v61,
                  VillageLevel,
                  ExpLevel,
                  VillageName,
                  PassToken,
                  HigherInt,
                  LowerInt);
                v52 = v21;
                v55 = v227;
                break;
              case 1:
                goto LABEL_17;
              case 2:
                goto LABEL_197;
              case 4:
                goto LABEL_250;
              case 5:
                v25 = (__darwin_pid_t *)operator new(272);
                DeviceLinkErrorScreen::DeviceLinkErrorScreen(v25, 5, 1);
                goto LABEL_251;
              case 6:
                v25 = (__darwin_pid_t *)operator new(272);
                DeviceLinkErrorScreen::DeviceLinkErrorScreen(v25, 9, 0);
                goto LABEL_251;
              case 7:
                v25 = (__darwin_pid_t *)operator new(272);
                DeviceLinkErrorScreen::DeviceLinkErrorScreen(v25, 8, 0);
                goto LABEL_251;
              default:
                String::format((String *)"LogicDeviceLinkResponseMessage unknown error code %d", v221, v220);
                Debugger::warning(&v426, v255);
                p_si_addr = (String *)&v426;
                goto LABEL_190;
            }
    LABEL_252:
            DeviceLinkWindow::pushScreen(v52, v55);
            return 1;
          case 26007:
            v66 = LogicDeviceLinkDoneMessage::getAccountID((#839 *)a2);
            isZero = LogicDeviceLinkDoneMessage::getPassToken((#839 *)a2);
            v68 = (_DWORD *)isZero;
            v69 = ServerConnection::sm_pInstance;
            if ( ServerConnection::sm_pInstance )
            {
              isZero = LogicLong::isZero(v66);
              if ( (isZero & 1) == 0 )
              {
                if ( *v68 )
                {
                  v70 = *(unsigned int *)(v69 + 20);
                  v71 = LogicLong::getHigherInt(v66);
                  v72 = LogicLong::getLowerInt(v66);
                  isZero = ServerConnection::saveAccount(v69, v70, v68, v71, v72);
                }
              }
            }
            v73 = GUI::getInstance((#825 *)isZero);
            v74 = v73;
            if ( !v73 )
              return 1;
            v21 = (#1008 *)GUI::getDeviceLinkWindow(v73);
            if ( v21
              || (v75 = (#946 *)operator new(328),
                  SettingsPopup::SettingsPopup(v75),
                  GUI::showPopup(v74, v75, 1, 0, 0),
                  (v21 = (#1008 *)GUI::getDeviceLinkWindow(v74)) != 0) )
            {
              v25 = (__darwin_pid_t *)operator new(264);
              DeviceLinkSuccesfullNewScreen::DeviceLinkSuccesfullNewScreen((__darwin_uid_t *)v25);
              goto LABEL_251;
            }
            v117 = "LogicDeviceLinkDoneMessage received, but settings screen can't be created";
            goto LABEL_221;
          case 26008:
            v76 = GUI::getInstance(v4);
            if ( !v76 )
              return 1;
            v21 = (#1008 *)GUI::getDeviceLinkWindow(v76);
            v77 = LogicDeviceLinkErrorMessage::getErrorCode((#1082 *)a2);
            v78 = LogicDeviceLinkErrorMessage::allowBack((#1082 *)a2);
            if ( v77 == 2 )
            {
              v25 = (__darwin_pid_t *)operator new(272);
              DeviceLinkErrorScreen::DeviceLinkErrorScreen(v25, 102, v78);
            }
            else if ( v77 == 1 )
            {
              v25 = (__darwin_pid_t *)operator new(272);
              DeviceLinkErrorScreen::DeviceLinkErrorScreen(v25, 101, v78);
            }
            else
            {
              if ( v77 )
                return 1;
              v25 = (__darwin_pid_t *)operator new(272);
              DeviceLinkErrorScreen::DeviceLinkErrorScreen(v25, 100, v78);
            }
    LABEL_251:
            v52 = v21;
            v55 = (UnlockAccountOkMessage *)v25;
            goto LABEL_252;
          default:
            return v8;
        }
      }
      if ( (int)v4 <= 20120 )
      {
        switch ( (int)v4 )
        {
          case 20103:
            v9 = LoginFailedMessage::getErrorCode((#804 *)a2);
            String::format((String *)"Login failed (error code = %d)", v10, v9);
            Debugger::warning((__siginfo *)&v424, v11);
            String::~String(&v424);
            String::String(&v423);
            v12 = (String *)LoginFailedMessage::removeReason((#804 *)a2);
            LogicStringUtil::safeString((nlink_t *)&v423, v12, (String *)"", v13);
            v14 = (thread_state_t *)LoginFailedMessage::getErrorCode((#804 *)a2);
            v15 = v14;
            if ( (_DWORD)v14 == 9 )
            {
              v16 = (__darwin_gid_t *)ServerConnection::sm_pInstance;
              ServerConnection::disconnect((__darwin_gid_t *)ServerConnection::sm_pInstance);
              String::String(&v422);
              v17 = (String *)LoginFailedMessage::removeRedirectDomain((#804 *)a2);
              LogicStringUtil::safeString((nlink_t *)&v422, v17, (String *)"", v18);
              String::String(&v421, "9339");
              ServerConnection::connectTo(v16, &v422, &v421);
              String::~String(&v421);
              String::~String(&v422);
            }
            else if ( (unsigned int)((_DWORD)v14 - 1) > 1 )
            {
              switch ( (int)v14 )
              {
                case 7:
                  v136 = (#772 *)GameStateManager::getInstance(v14);
                  if ( !(unsigned int)GameStateManager::isState(v136, 2) )
                    Debugger::error((__siginfo *)"LoginFailed due to data version but not in InitState!", v137);
                  v138 = (String *)LoginFailedMessage::removeResourceFingerprintData((#804 *)a2);
                  v139 = (String *)LoginFailedMessage::removeContentURL((#804 *)a2);
                  CurrentState = (#858 *)GameStateManager::getCurrentState(v136);
                  InitState::startContentUpdate(CurrentState, v138, v139);
                  goto LABEL_188;
                case 8:
                  String::String((String *)&v420.__pad[6]);
                  v312 = (String *)LoginFailedMessage::removeUpdateURL((#804 *)a2);
                  v314 = (#1080 *)LogicStringUtil::safeString((nlink_t *)&v420.__pad[6], v312, (String *)"", v313);
                  v315 = GameMain::getInstance(v314);
                  v316 = (#1080 *)String::operator=((String *)(v315 + 176));
                  v317 = GameMain::getInstance(v316);
                  GameMain::showNativeDialog(v317, 5, 8, &v423);
                  *(_DWORD *)ServerConnection::sm_pInstance = 3;
                  String::~String((String *)&v420.__pad[6]);
                  break;
                case 10:
                  v318 = GameMain::getInstance((#1080 *)v14);
                  GameMain::showNativeDialog(v318, 6, 10, &v423);
                  goto LABEL_188;
                case 11:
                  v319 = GameMain::getInstance((#1080 *)v14);
                  GameMain::showNativeDialog(v319, 9, 11, &v423);
                  goto LABEL_188;
                case 13:
                  v320 = (#772 *)GameStateManager::getInstance(v14);
                  if ( !(unsigned int)GameStateManager::isState(v320, 2) )
                    Debugger::error((__siginfo *)"LoginFailed ERROR_CODE_ACCOUNT_LOCKED but not in InitState!", v321);
                  v322 = (#858 *)GameStateManager::getCurrentState(v320);
                  InitState::setAccountLocked(v322);
                  goto LABEL_188;
                default:
                  v173 = GameMain::getInstance((#1080 *)v14);
                  GameMain::showNativeDialog(v173, 7, v15, &v423);
    LABEL_188:
                  *(_DWORD *)ServerConnection::sm_pInstance = 3;
                  break;
              }
            }
            else
            {
              v120 = (#812 *)ServerConnection::sm_pInstance;
              ServerConnection::resetAccount(
                ServerConnection::sm_pInstance,
                *(unsigned int *)(ServerConnection::sm_pInstance + 20));
              ServerConnection::reconnect(v120);
            }
            p_si_addr = &v423;
            goto LABEL_190;
          case 20104:
            if ( *(_DWORD *)ServerConnection::sm_pInstance != 2 )
            {
              v117 = "LoginOkMessage received even already logged in!";
              goto LABEL_221;
            }
            *(_DWORD *)ServerConnection::sm_pInstance = 6;
            if ( (BillingManager::isInitialized((#1155 *)BillingManager::sm_pInstance) & 1) != 0 )
              v96 = (#1080 *)BillingManager::enableBilling((mode_t *)BillingManager::sm_pInstance);
            else
              v96 = (#1080 *)BillingManager::initialize((mode_t *)BillingManager::sm_pInstance);
            v132 = GameMain::getInstance(v96);
            ContentVersion = (#1080 *)LoginOkMessage::getContentVersion((#887 *)a2);
            *(_DWORD *)(v132 + 152) = (_DWORD)ContentVersion;
            v134 = GameMain::getInstance(ContentVersion);
            *(_DWORD *)(v134 + 148) = LoginOkMessage::getServerBuild((#887 *)a2);
            v135 = ServerConnection::sm_pInstance;
            if ( Assert::g_false )
            {
              while ( 1 )
                ;
            }
            Account = ServerConnection::getAccount(
                        ServerConnection::sm_pInstance,
                        *(unsigned int *)(ServerConnection::sm_pInstance + 20));
            v142 = (String *)LoginOkMessage::removePassToken((#887 *)a2);
            v143 = LoginOkMessage::removeAccountId((#887 *)a2);
            v144 = (void *)v143;
            if ( *(_BYTE *)Account )
            {
              *(_BYTE *)(a1 + 157) = 0;
            }
            else
            {
              *(_BYTE *)(a1 + 157) = 1;
              v185 = *(unsigned int *)(v135 + 20);
              v186 = LogicLong::getHigherInt(v143);
              v187 = LogicLong::getLowerInt(v144);
              ServerConnection::saveAccount(v135, v185, v142, v186, v187);
            }
            v188 = LogicLong::getHigherInt(v144);
            v189 = LogicLong::getLowerInt(v144);
            MessageManager::setPlayerAccountID((Dl_info *)a1, v188, v189);
            ServerMajorVersion = LoginOkMessage::getServerMajorVersion((#887 *)a2);
            ServerBuild = LoginOkMessage::getServerBuild((#887 *)a2);
            v192 = (String *)LoginOkMessage::removeServerEnvironment((#887 *)a2);
            String::String((String *)&v420.__pad[3]);
            v193 = (String *)LoginOkMessage::removeFacebookId((#887 *)a2);
            LogicStringUtil::safeString((nlink_t *)&v420.__pad[3], v193, (String *)"", v194);
            String::String((String *)v420.__pad);
            v195 = (String *)LoginOkMessage::removeFacebookAppId((#887 *)a2);
            LogicStringUtil::safeString((nlink_t *)v420.__pad, v195, (String *)"", v196);
            String::format(
              (String *)"Logged in! (server version: %d.%d client version: %d.%d env: %s fb: %s)",
              v197,
              ServerMajorVersion,
              ServerBuild);
            Debugger::hudPrint((__siginfo *)&v420.si_addr, (const String *)0xFFFFFFFFLL, v198);
            String::~String((String *)&v420.si_addr);
            String::format(
              (String *)"accountId (%d, %d)",
              v199,
              *(unsigned int *)(Account + 4),
              *(unsigned int *)(Account + 8));
            Debugger::hudPrint(&v420, (const String *)0xFFFFFFFFLL, v200);
            String::~String((String *)&v420);
            if ( (unsigned int)FacebookManager::getState((#1010 *)FacebookManager::sm_pInstance) == 3
              && (FacebookId = FacebookManager::getFacebookId((#1010 *)FacebookManager::sm_pInstance),
                  v202 = (_DWORD *)(a1 + 160),
                  (String::equals(FacebookId, a1 + 160) & 1) != 0) )
            {
              v203 = (__darwin_ino64_t *)FacebookManager::sm_pInstance;
              if ( *v202 )
              {
                FacebookManager::sendBindMessage((#1010 *)FacebookManager::sm_pInstance, 1);
                goto LABEL_217;
              }
            }
            else
            {
              v203 = (__darwin_ino64_t *)FacebookManager::sm_pInstance;
            }
            String::String(&v419, (const String *)&v420.__pad[3]);
            String::String(&v418, (const String *)v420.__pad);
            FacebookManager::init(v203, &v419, &v418);
            String::~String(&v418);
            String::~String(&v419);
            v202 = (_DWORD *)(a1 + 160);
    LABEL_217:
            String::operator=(v202, "");
            v204 = (const String *)LoginOkMessage::removeGamecenterId((#887 *)a2);
            v205 = (String *)v204;
            v206 = (__darwin_pthread_attr_t *)GameCenterManager::sm_pInstance;
            if ( GameCenterManager::sm_pInstance )
            {
              if ( v204 )
                String::String(&v417, v204);
              else
                String::String(&v417, "");
              GameCenterManager::init(v206, &v417);
              String::~String(&v417);
            }
            v212 = (String *)LoginOkMessage::removeAccountCreatedDate((#887 *)a2);
            v213 = (String *)LoginOkMessage::removeServerTime((#887 *)a2);
            String::format((String *)"%d:%d", v214, *(unsigned int *)(Account + 4), *(unsigned int *)(Account + 8));
            if ( v205 )
              String::String((String *)&v416.__pad[3], v205);
            else
              String::String((String *)&v416.__pad[3], "");
            DaysSinceStartedPlaying = (const String *)LoginOkMessage::getDaysSinceStartedPlaying((#887 *)a2);
            PlayTimeSeconds = LoginOkMessage::getPlayTimeSeconds((#887 *)a2);
            SessionCount = (__uint64_t *)LoginOkMessage::getSessionCount((#887 *)a2);
            v218 = (int)SessionCount;
            Application::getDeviceType(SessionCount);
            GameSettings::getSelectedLanguage((__int64 *)&v416.si_addr, (#873 *)GameSettings::sm_pInstance);
            EventTracker::loggedIn(
              (gid_t *)&v416.__pad[6],
              (const String *)&v420.__pad[3],
              (const String *)&v416.__pad[3],
              DaysSinceStartedPlaying,
              PlayTimeSeconds,
              v218,
              (int)v213,
              v212,
              (String *)v416.__pad,
              (const String *)&v416.si_addr,
              (const String *)2);
            String::~String((String *)&v416.si_addr);
            String::~String((String *)v416.__pad);
            String::~String((String *)&v416.__pad[3]);
            String::~String((String *)&v416.__pad[6]);
            if ( v205 )
            {
              String::~String(v205);
              operator delete(v205);
            }
            if ( v144 )
              operator delete(v144);
            if ( v142 )
            {
              String::~String(v142);
              operator delete(v142);
            }
            if ( v212 )
            {
              String::~String(v212);
              operator delete(v212);
            }
            if ( v213 )
            {
              String::~String(v213);
              operator delete(v213);
            }
            if ( v192 )
            {
              String::~String(v192);
              operator delete(v192);
            }
            String::~String((String *)v420.__pad);
            p_si_addr = (String *)&v420.__pad[3];
            goto LABEL_190;
          case 20105:
            if ( (unsigned int)FriendListMessage::getListType((#891 *)a2) == 1 )
            {
              FriendManager::receiveFriendList((#823 *)FriendManager::sm_pInstance, (#891 *)a2);
              return 1;
            }
            if ( (unsigned int)FriendListMessage::getListType((#891 *)a2) != 2 )
            {
              v117 = "FriendListMessage - Unknown list type!";
              goto LABEL_221;
            }
            v118 = GameCenterManager::sm_pInstance;
            if ( !GameCenterManager::sm_pInstance )
              return 1;
            v119 = FriendListMessage::removeFriendEntries((#891 *)a2);
            GameCenterManager::friendListReceived(v118, v119);
            break;
          case 20108:
            MessageManager::keepAliveServerMessageReceived((Dl_info *)a1);
            return 1;
          default:
            return v8;
        }
        return 1;
      }
      if ( (int)v4 <= 20204 )
      {
        if ( (int)v4 <= 20131 )
        {
          if ( (_DWORD)v4 == 20121 )
          {
            BillingManager::billingValidationFailed(
              (mode_t *)BillingManager::sm_pInstance,
              (const String *)(a2 + 80),
              *(_DWORD *)(a2 + 68),
              *(_DWORD *)(a2 + 72) & 1);
            return 1;
          }
          return v8;
        }
        if ( (int)v4 <= 20150 )
        {
          if ( (_DWORD)v4 == 20132 )
          {
            v31 = (String *)UnlockAccountOkMessage::removePassToken((#1136 *)a2);
            v32 = UnlockAccountOkMessage::removeAccountId((#1136 *)a2);
            v33 = (void *)v32;
            v34 = ServerConnection::sm_pInstance;
            if ( ServerConnection::sm_pInstance )
            {
              v32 = LogicLong::isZero(v32);
              if ( (v32 & 1) == 0 )
              {
                if ( v31->m_length )
                {
                  v35 = *(unsigned int *)(v34 + 20);
                  v36 = LogicLong::getHigherInt(v33);
                  v37 = LogicLong::getLowerInt(v33);
                  v32 = ServerConnection::saveAccount(v34, v35, v31, v36, v37);
                }
              }
            }
            if ( v33 )
              operator delete(v33);
            if ( v31 )
            {
              String::~String(v31);
              operator delete(v31);
            }
            v38 = (__uint16_t *)GameMain::getInstance((#1080 *)v32);
            GameMain::reloadGame(v38);
            return 1;
          }
          if ( (_DWORD)v4 != 20133 )
            return v8;
          v97 = (#772 *)GameStateManager::getInstance((thread_state_t *)v4);
          v98 = (#858 *)GameStateManager::getCurrentState(v97);
          v99 = (#1080 *)UnlockAccountFailedMessage::getErrorCode((__darwin_mode_t *)a2);
          if ( (_DWORD)v99 == 10 )
          {
            v174 = GameMain::getInstance(v99);
            String::String(&v396);
            GameMain::showNativeDialog(v174, 6, 0, &v396);
            p_si_addr = &v396;
            goto LABEL_190;
          }
          if ( (_DWORD)v99 == 5 )
          {
            v100 = GameMain::getInstance(v99);
            String::String(&v397);
            GameMain::showNativeDialog(v100, 13, 0, &v397);
            p_si_addr = &v397;
            goto LABEL_190;
          }
          if ( (_DWORD)v99 != 4 )
          {
            v210 = GameMain::getInstance(v99);
            String::String(&v395);
            GameMain::showNativeDialog(v210, 7, 0, &v395);
            p_si_addr = &v395;
            goto LABEL_190;
          }
          if ( v98 )
          {
            v175 = UnlockAccountFailedMessage::getErrorCode((__darwin_mode_t *)a2);
            InitState::setAccountUnlockFailed(v98, v175);
            return 1;
          }
          return 1;
        }
        if ( (_DWORD)v4 == 20151 )
        {
          v88 = (mode_t *)BillingManager::sm_pInstance;
          TID = (const String *)AppleBillingProcessedByServerMessage::getTID((#789 *)a2);
          ProdId = (const String *)AppleBillingProcessedByServerMessage::getProdId((#789 *)a2);
          BillingManager::finishTransaction(v88, TID, ProdId);
          return 1;
        }
        if ( (_DWORD)v4 != 20161 )
          return v8;
        v111 = (#772 *)GameStateManager::getInstance((thread_state_t *)v4);
        IsShuttingDown = (#825 *)GameStateManager::setServerIsShuttingDown(v111);
        v113 = (#825 *)GUI::getInstance(IsShuttingDown);
        if ( !v113 )
          return 1;
        v40 = (pid_t *)GUI::getInstance(v113);
        GUI::getDefaultFloaterPos(v40);
        v412[0] = v114;
        v412[1] = v115;
        String = StringTable::getString((#1308 *)"TID_SHUTDOWN_STARTED", v116);
        v45 = v412;
    LABEL_136:
        GUI::showFloaterTextAt(v40, v45, String, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
        return 1;
      }
      if ( (int)v4 > 20800 )
      {
        if ( (int)v4 <= 24100 )
        {
          if ( (int)v4 <= 21901 )
          {
            if ( (_DWORD)v4 == 20801 )
            {
              v39 = (#825 *)GUI::getInstance(v4);
              if ( !v39 )
                return 1;
              v40 = (pid_t *)GUI::getInstance(v39);
              GUI::getDefaultFloaterPos(v40);
              v399[0] = v41;
              v399[1] = v42;
              String = StringTable::getString((#1308 *)"TID_OPPONENT_LEFT_MATCH", v43);
              v45 = v399;
            }
            else
            {
              if ( (_DWORD)v4 != 20802 )
                return v8;
              v121 = (#825 *)GUI::getInstance(v4);
              if ( !v121 )
                return 1;
              v40 = (pid_t *)GUI::getInstance(v121);
              GUI::getDefaultFloaterPos(v40);
              v398[0] = v122;
              v398[1] = v123;
              String = StringTable::getString((#1308 *)"TID_OPPONENT_REJOINED_MATCH", v124);
              v45 = v398;
            }
            goto LABEL_136;
          }
          if ( (int)v4 <= 22951 )
          {
            if ( (_DWORD)v4 != 21902 )
            {
              if ( (_DWORD)v4 == 21903 )
              {
                v145 = GameStateManager::getInstance((thread_state_t *)v4);
                BattleScreen = (stat *)GameMode::getInstance((vm_address_t *)v145);
                v147 = BattleScreen;
                if ( BattleScreen
                  && (BattleScreen = (stat *)(*(__int64 (__fastcall **)(stat *))(*(_QWORD *)&BattleScreen->st_dev + 64LL))(BattleScreen),
                      (_DWORD)BattleScreen)
                  && (BattleScreen = (stat *)GameMode::getBattleScreen(v147)) != 0
                  && (BattleScreen = *(stat **)(*(_QWORD *)&v147->st_blksize + 168LL), BattleScreen->st_uid != 2) )
                {
                  v329 = (vm_address_t *)LogicBattle::setSimulationMode(BattleScreen);
                }
                else
                {
                  isMatchmaking = (__darwin_pthread_mutex_t *)GameMode::getInstance((vm_address_t *)BattleScreen);
                  if ( isMatchmaking
                    && (v149 = GameMode::getInstance((vm_address_t *)isMatchmaking),
                        (isMatchmaking = (__darwin_pthread_mutex_t *)GameMode::getHomeScreen(v149)) != 0)
                    && (v150 = GameMode::getInstance((vm_address_t *)isMatchmaking),
                        v151 = (#1047 *)GameMode::getHomeScreen(v150),
                        (isMatchmaking = (__darwin_pthread_mutex_t *)HomeScreen::getBattlePage(v151)) != 0) )
                  {
                    v152 = GameMode::getInstance((vm_address_t *)isMatchmaking);
                    HomeScreen = (#1047 *)GameMode::getHomeScreen(v152);
                    BattlePage = (#1056 *)HomeScreen::getBattlePage(HomeScreen);
                    isMatchmaking = (__darwin_pthread_mutex_t *)BattlePage::isMatchmaking(BattlePage);
                    v155 = (int)isMatchmaking;
                  }
                  else
                  {
                    v155 = 0;
                  }
                  isChallenging = AllianceStream::getInstance(isMatchmaking);
                  if ( isChallenging )
                  {
                    v208 = (#1077 *)AllianceStream::getInstance((__darwin_pthread_mutex_t *)isChallenging);
                    isChallenging = AllianceStream::isChallenging(v208);
                    v209 = isChallenging;
                  }
                  else
                  {
                    v209 = 0;
                  }
                  if ( v155 )
                  {
                    v252 = GameMode::getInstance((vm_address_t *)isChallenging);
                    v253 = (#1047 *)GameMode::getHomeScreen(v252);
                    isChallenging = HomeScreen::getBattlePage(v253);
                    v254 = *(float *)(isChallenging + 576);
                  }
                  else if ( v209 )
                  {
                    isChallenging = AllianceStream::getInstance((__darwin_pthread_mutex_t *)isChallenging);
                    v254 = *(float *)(isChallenging + 260);
                  }
                  else
                  {
                    v254 = 0.0;
                  }
                  if ( v254 >= (float)*(int *)(LogicDataTables::getClientGlobals((pthread_attr_t *)isChallenging) + 120LL)
                    && (((v155 | v209) ^ 1) & 1) == 0 )
                  {
                    vibrateDevice();
                  }
                  *(_DWORD *)(v145 + 8) = 5;
                  GameStateManager::changeState(v145, 5);
                  GameStateManager::changeToState((thread_state_t *)v145);
                  v329 = (vm_address_t *)GameStateManager::setWaitingForSectorState((#772 *)v145, 0);
                }
                v330 = GameMode::getInstance(v329);
                GameMode::receiveSectorState(v330, (#949 *)a2, v331);
                return 1;
              }
              return v8;
            }
            v101 = GameMode::getInstance((vm_address_t *)v4);
            if ( v101 )
              return GameMode::receiveSectorHeartbeat(v101, a2);
            v117 = "Received SectorHeartbeatMessage when GameMode = null";
    LABEL_221:
            Debugger::warning((__siginfo *)v117, v5);
            return 1;
          }
          if ( (_DWORD)v4 == 22952 )
          {
            v125 = (#769 *)BattleScreen::getInstance(v4);
            v126 = v125;
            if ( v125 )
            {
              if ( (BattleScreen::isReplay(v125) & 1) == 0 )
              {
                v127 = BattleEventMessage::removeBattleEvent((#950 *)a2);
                (*(void (__fastcall **)(#769 *, __int64))(*(_QWORD *)v126 + 280LL))(v126, v127);
                if ( v127 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v127 + 16LL))(v127);
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v127 + 8LL))(v127);
                  return 1;
                }
              }
            }
            return 1;
          }
          if ( (_DWORD)v4 != 22957 )
            return v8;
          LevelIndex = (vm_address_t *)PvpMatchmakeNotificationMessage::getLevelIndex((AppleBillingRequestMessage *)a2);
          v157 = (#825 *)GameMode::getInstance(LevelIndex);
          if ( !v157 )
            return 1;
          v158 = (vm_address_t *)GUI::getInstance(v157);
          if ( !v158 )
            return 1;
          v159 = GameMode::getInstance(v158);
          if ( GameMode::getBattleScreen(v159) )
            return 1;
          v160 = GUI::getInstance(0);
          PopupByType = (vm_address_t *)GUI::getPopupByType(v160, 2);
          v162 = GameMode::getInstance(PopupByType);
          v163 = (vm_address_t *)GameMode::getHomeScreen(v162);
          if ( v163
            && (v165 = GameMode::getInstance(v163),
                v166 = (#1047 *)GameMode::getHomeScreen(v165),
                (v167 = (vm_address_t *)HomeScreen::getBattlePage(v166)) != 0) )
          {
            v168 = GameMode::getInstance(v167);
            v169 = (#1047 *)GameMode::getHomeScreen(v168);
            v170 = (#1056 *)HomeScreen::getBattlePage(v169);
            v171 = BattlePage::isMatchmaking(v170);
          }
          else
          {
            v171 = 0;
          }
          v8 = 1;
          if ( PopupByType || (v171 & 1) != 0 )
            return v8;
          v336 = (const String *)StringTable::getString((#1308 *)"TID_PUSH_MATCHMAKING_TOP", v164);
          v337 = (#825 *)String::String(&v404, v336);
          v338 = (pid_t *)GUI::getInstance(v337);
          GUI::getDefaultFloaterPos(v338);
          v403[0] = v339;
          v403[1] = v340;
          String::String(&v401, "<slot>");
          String::valueOf(&v400, (String *)LevelIndex, v341);
          String::replace(&v402, &v404, &v401, &v400);
          GUI::showFloaterTextAt(v338, v403, &v402, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
          String::~String(&v402);
          String::~String(&v400);
          String::~String(&v401);
          p_si_addr = &v404;
    LABEL_190:
          String::~String(p_si_addr);
          return 1;
        }
        if ( (int)v4 <= 24200 )
        {
          switch ( (int)v4 )
          {
            case 24101:
              Debugger::hudPrint((__siginfo *)"Loaded own home from server", (const char *)0xFFFFFFFFLL, v6);
              v91 = OwnHomeDataMessage::removeLogicClientHome((AccountSwitchedMessage *)a2);
              v92 = (thread_state_t *)OwnHomeDataMessage::removeLogicClientAvatar((AccountSwitchedMessage *)a2);
              v93 = GameStateManager::getInstance(v92);
              *(_DWORD *)(v93 + 8) = 4;
              v94 = GameStateManager::getInstance((thread_state_t *)v93);
              RandomSeed = OwnHomeDataMessage::getRandomSeed((AccountSwitchedMessage *)a2);
              v8 = 1;
              GameStateManager::setGameData(v94, v91, v92, 0, 1, RandomSeed);
              return v8;
            case 24102:
              v256 = (thread_state_t *)OwnAvatarDataMessage::removeLogicClientAvatar((mach_msg_type_number_t *)a2);
              v257 = GameStateManager::getInstance(v256);
              *(_DWORD *)(v257 + 8) = 4;
              v258 = GameStateManager::getInstance((thread_state_t *)v257);
              v8 = 1;
              GameStateManager::setGameData(v258, 0, v256, 0, 1, 0);
              return v8;
            case 24104:
              ClientChecksum = OutOfSyncMessage::getClientChecksum((#968 *)a2);
              ServerChecksum = OutOfSyncMessage::getServerChecksum((#968 *)a2);
              String::format(
                (String *)"OutOfSyncMessage received, clientChecksum:%d serverChecksum:%d",
                v261,
                ClientChecksum,
                ServerChecksum);
              Debugger::warning(&v416, v262);
              String::~String((String *)&v416);
              v264 = GameMain::getInstance(v263);
              String::String(&v415);
              GameMain::showNativeDialog(v264, 1, 0, &v415);
              p_si_addr = &v415;
              goto LABEL_190;
            case 24106:
              v265 = (#772 *)GameStateManager::getInstance((thread_state_t *)v4);
              v8 = 1;
              GameStateManager::setWaitingForSectorState(v265, 1);
              return v8;
            case 24107:
              goto LABEL_415;
            case 24111:
              v266 = (#1156 *)AvailableServerCommandMessage::removeServerCommand((#956 *)a2);
              v405 = v266;
              canForwardServerCommand = (vm_address_t *)MessageManager::canForwardServerCommand();
              if ( (_DWORD)canForwardServerCommand )
              {
                v268 = (#945 *)GameMode::getInstance(canForwardServerCommand);
                GameMode::serverCommandReceived(v268, v266);
              }
              else
              {
                LogicArrayList<LogicServerCommand *>::add(a1 + 88, &v405);
              }
              return 1;
            case 24112:
              MessageManager::clearUdpInfo((MessageManager *)a1);
              ServerPort = UdpConnectionInfoMessage::getServerPort((#1126 *)a2);
              v270 = (String *)UdpConnectionInfoMessage::removeServerHost((#1126 *)a2);
              if ( !v270 )
                return 1;
              v271 = (const char *)UdpConnectionInfoMessage::removeSessionId((#1126 *)a2);
              v272 = (natural_t *)operator new(1464);
              UdpSocket::UdpSocket(v272);
              *(_QWORD *)(a1 + 144) = v272;
              v273 = (__darwin_natural_t *)operator new(16);
              LogicScrollMessageFactory::LogicScrollMessageFactory(v273, 1);
              UdpSocket::setMessageFactory(v272, v273);
              Nonce = (const String *)UdpConnectionInfoMessage::getNonce((#1126 *)a2);
              if ( (UdpSocket::connect(
                      *(natural_t **)(a1 + 144),
                      v270,
                      ServerPort,
                      v271,
                      &LogicScrollMessageFactory::RC4_KEY,
                      Nonce)
                  & 1) != 0 )
              {
                v276 = *(_QWORD *)(a1 + 144);
                v277 = (HomeBattleReplayMessage *)operator new(72);
                v278 = UdpCheckConnectionMessage::UdpCheckConnectionMessage(v277);
                v279 = GameMain::getInstance(v278);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v279 + 184LL))(v279);
                v280 = (pthread_attr_t *)UdpSocket::sendMessage(v276, v277);
                if ( (_DWORD)v280 )
                {
                  ClientGlobals = LogicDataTables::getClientGlobals(v280);
                  if ( ClientGlobals )
                  {
                    UdpSocket::setDisconnectedTimeSetting(*(natural_t **)(a1 + 144), (float)*(int *)(ClientGlobals + 92));
                    UdpSocket::setHeartbeatTimeSetting(
                      *(natural_t **)(a1 + 144),
                      (float)*(int *)(ClientGlobals + 88) / 1000.0);
                  }
    LABEL_389:
                  String::~String(v270);
                  operator delete(v270);
                  if ( v271 )
                  {
                    operator delete[](v271);
                    return 1;
                  }
                  return 1;
                }
                Debugger::warning((__siginfo *)"Failed to send first UDP message", v281);
                v335 = *(void **)(a1 + 144);
                if ( v335 )
                  goto LABEL_387;
              }
              else
              {
                Debugger::warning((__siginfo *)"Failed to open UDP socket", v275);
                v335 = *(void **)(a1 + 144);
                if ( v335 )
                {
    LABEL_387:
                  UdpSocket::~UdpSocket(*(natural_t **)(a1 + 144));
                  operator delete(v335);
                }
              }
              *(_QWORD *)(a1 + 144) = 0;
              goto LABEL_389;
            case 24113:
              goto LABEL_255;
            case 24114:
              CompressedReplayDataJSONLength = (const char *)HomeBattleReplayDataMessage::getCompressedReplayDataJSONLength((_opaque_pthread_t *)a2);
              if ( (int)CompressedReplayDataJSONLength < 1 )
              {
                v334 = "HomeBattleReplayDataMessage: data length == 0";
              }
              else
              {
                v285 = (__darwin_pthread_handler_rec *)HomeBattleReplayDataMessage::removeCompressedReplayDataJSON((_opaque_pthread_t *)a2);
                v287 = v285;
                if ( v285 )
                {
                  v425 = 0;
                  v289 = ZlibHelper::decompressInMySQLFormat(v285, CompressedReplayDataJSONLength, (int)&v425, v286);
                  v290 = (const char *)v425;
                  if ( v289 < 1 || v425 == 0 )
                    Debugger::error((__siginfo *)"HomeBattleReplayDataMessage: failed to decompress data", v288);
                  v292 = (String *)operator new(24);
                  v293 = (thread_state_t *)String::String(v292, v290, v289);
                  v294 = (thread_state_t *)GameStateManager::getInstance(v293);
                  GameStateManager::setReplayData(v294, v292);
                  if ( v425 )
                    operator delete[](v425);
                  v425 = 0;
                  operator delete[](v287);
                  v342 = "replay data message received!!!";
                  goto LABEL_396;
                }
                v334 = "HomeBattleReplayDataMessage: compressed data == NULL";
              }
              Debugger::error((__siginfo *)v334, v283);
              return result;
            case 24115:
              Debugger::warning((__siginfo *)"ServerErrorMessage received", v5);
              v295 = ServerErrorMessage::removeErrorMessage((#1067 *)a2);
              v296 = GameMain::getInstance((#1080 *)v295);
              if ( !v295 )
              {
                String::String(&v413, "ServerError");
                GameMain::showNativeDialog(v296, 11, 0, &v413);
                p_si_addr = &v413;
                goto LABEL_190;
              }
              v297 = (const char *)(v295 + 8);
              if ( *(_DWORD *)(v295 + 4) + 1 > 8 )
                v297 = *(const char **)v297;
              String::String(&v414, v297);
              GameMain::showNativeDialog(v296, 11, 0, &v414);
              String::~String(&v414);
              String::~String((String *)v295);
              goto LABEL_299;
            case 24121:
              v299 = (#825 *)GUI::getInstance(v4);
              if ( !v299 )
                return 1;
              v300 = (pid_t *)GUI::getInstance(v299);
              v302 = (const String *)StringTable::getString((#1308 *)"TID_CHALLENGE_FAIL_SERVER", v301);
              v303 = 1.0;
              goto LABEL_425;
            case 24124:
              if ( !GUI::getInstance(v4) )
                return 1;
              v305 = (__darwin_pthread_mutex_t *)Debugger::hudPrint(
                                                   (__siginfo *)"CancelMatchmakeDoneMessage RECEIVED!",
                                                   (const char *)0xFFFFFFFFLL,
                                                   v304);
              v306 = (__darwin_pthread_mutex_t *)AllianceStream::getInstance(v305);
              if ( !v306 )
                return 1;
              v307 = (__darwin_pthread_mutex_t *)AllianceStream::getInstance(v306);
              AllianceStream::setChallengeActive(v307, 0);
              return 1;
            case 24125:
              if ( !GUI::getInstance(v4) )
                return 1;
              v309 = (#1047 *)Debugger::hudPrint(
                                (__siginfo *)"CancelMatchmakeDoneMessage RECEIVED!",
                                (const char *)0xFFFFFFFFLL,
                                v308);
              v310 = (#1047 *)HomeScreen::getInstance(v309);
              if ( !v310 )
                return 1;
              v311 = (#1056 *)HomeScreen::getBattlePage(v310);
              if ( !v311 )
                return 1;
              BattlePage::setMatchmaking(v311, 0);
              return 1;
            default:
              return v8;
          }
        }
        if ( (int)v4 > 24300 )
        {
          if ( (int)v4 <= 24400 )
          {
            if ( (int)v4 > 24317 )
            {
              if ( (int)v4 <= 24331 )
              {
                switch ( (int)v4 )
                {
                  case 24318:
                    v179 = (__darwin_pthread_mutex_t *)AllianceStream::getInstance((__darwin_pthread_mutex_t *)v4);
                    if ( v179 )
                    {
                      v180 = (__darwin_pthread_mutex_t *)AllianceStream::getInstance(v179);
                      StreamEntryId = (const uid_t *)AllianceStreamEntryRemovedMessage::getStreamEntryId((#748 *)a2);
                      AllianceStream::removeEntry(v180, StreamEntryId);
                      return 1;
                    }
                    v342 = "AllianceStreamEntryRemovedMessage received, but AllianceStream is NULL";
                    goto LABEL_396;
                  case 24320:
                    if ( !GUI::getInstance(v4) )
                      return 1;
                    Reason = (#825 *)AllianceJoinRequestFailedMessage::getReason((#832 *)a2);
                    if ( (_DWORD)Reason == 1 )
                    {
                      v300 = (pid_t *)GUI::getInstance(Reason);
                      v364 = "TID_CLAN_JOIN_FAIL_CLOSED";
                    }
                    else
                    {
                      v383 = (#825 *)AllianceJoinRequestFailedMessage::getReason((#832 *)a2);
                      if ( (_DWORD)v383 == 2 )
                      {
                        v300 = (pid_t *)GUI::getInstance(v383);
                        v364 = "TID_CLAN_JOIN_FAIL_ALREADY_SENT";
                      }
                      else
                      {
                        v384 = (#825 *)AllianceJoinRequestFailedMessage::getReason((#832 *)a2);
                        if ( (_DWORD)v384 == 3 )
                        {
                          v300 = (pid_t *)GUI::getInstance(v384);
                          v364 = "TID_CLAN_JOIN_FAIL_NO_SCORE";
                        }
                        else
                        {
                          v393 = (#825 *)AllianceJoinRequestFailedMessage::getReason((#832 *)a2);
                          v394 = (int)v393;
                          v300 = (pid_t *)GUI::getInstance(v393);
                          if ( v394 == 4 )
                            v364 = "TID_CLAN_JOIN_FAIL_BANNED";
                          else
                            v364 = "TID_CLAN_JOIN_FAIL_GENERIC";
                        }
                      }
                    }
                    goto LABEL_424;
                  case 24321:
                    if ( !GUI::getInstance(v4) )
                      return 1;
                    v365 = (#825 *)AllianceInvitationSendFailedMessage::getReason((pthread_mutex_t *)a2);
                    v8 = 1;
                    switch ( (int)v365 )
                    {
                      case 2:
                        v300 = (pid_t *)GUI::getInstance(v365);
                        v364 = "TID_ALLIANCE_INVITATION_FAILED_NO_RIGHTS";
                        goto LABEL_424;
                      case 4:
                        v300 = (pid_t *)GUI::getInstance(v365);
                        v364 = "TID_ALLIANCE_INVITATION_FAILED_ALREADY_IN_ALLIANCE";
                        goto LABEL_424;
                      case 5:
                        v300 = (pid_t *)GUI::getInstance(v365);
                        v364 = "TID_ALLIANCE_INVITATION_FAILED_AVATAR_ALREADY_HAS_AN_INVITE";
                        goto LABEL_424;
                      case 6:
                        v300 = (pid_t *)GUI::getInstance(v365);
                        v364 = "TID_ALLIANCE_INVITATION_FAILED_AVATAR_HAS_TOO_MANY_INVITES";
                        goto LABEL_424;
                      default:
                        return v8;
                    }
                    return v8;
                  case 24322:
                    v366 = (#825 *)GUI::getInstance(v4);
                    if ( !v366 )
                      return 1;
                    v300 = (pid_t *)GUI::getInstance(v366);
                    v364 = "TID_ALLIANCE_INVITATION_OK";
    LABEL_424:
                    v302 = (const String *)StringTable::getString((#1308 *)v364, v363);
                    v303 = 0.0;
    LABEL_425:
                    GUI::showCenteredFloaterText(v300, v302, v303, -1);
                    return 1;
                  default:
                    return v8;
                }
              }
              if ( (_DWORD)v4 == 24332 )
              {
                v246 = (#1047 *)HomeScreen::getInstance(v4);
                ClanPage = (#872 *)HomeScreen::getClanPage(v246);
                AllianceSettings = ClanPage::getAllianceSettings(ClanPage);
                v249 = (#825 *)AllianceCreateFailedMessage::getReason((dl_info *)a2);
                if ( (_DWORD)v249 == 1 )
                {
                  if ( !GUI::getInstance(v249) )
                    return 1;
                  v250 = (Dl_info *)String::String(&v434, "TID_INVALID_NAME");
                  MessageManager::showFloaterTID(v250, &v434);
                  v251 = &v434;
                }
                else
                {
                  v332 = (#825 *)AllianceCreateFailedMessage::getReason((dl_info *)a2);
                  if ( (_DWORD)v332 == 2 )
                  {
                    if ( !GUI::getInstance(v332) )
                      return 1;
                    v333 = (Dl_info *)String::String(&v433, "TID_INVALID_DESCRIPTION");
                    MessageManager::showFloaterTID(v333, &v433);
                    v251 = &v433;
                  }
                  else
                  {
                    v360 = (#825 *)AllianceCreateFailedMessage::getReason((dl_info *)a2);
                    if ( (_DWORD)v360 != 3 || !GUI::getInstance(v360) )
                      return 1;
                    v361 = (Dl_info *)String::String(&v432, "TID_NAME_TOO_SHORT");
                    MessageManager::showFloaterTID(v361, &v432);
                    v251 = &v432;
                  }
                }
                String::~String(v251);
                v328 = (#1031 *)AllianceSettings;
              }
              else
              {
                if ( (_DWORD)v4 != 24333 )
                  return v8;
                v324 = (#825 *)AllianceChangeFailedMessage::getReason((#1038 *)a2);
                if ( (_DWORD)v324 != 2 || !GUI::getInstance(v324) )
                  return 1;
                v325 = (Dl_info *)String::String(&v431, "TID_INVALID_DESCRIPTION");
                MessageManager::showFloaterTID(v325, &v431);
                String::~String(&v431);
                v327 = GUI::getInstance(v326);
                v328 = *(#1031 **)(GUI::getEditClanPopup(v327) + 232);
              }
              AllianceSettings::setOkButtonGrayOut(v328, 0);
              return 1;
            }
            switch ( (int)v4 )
            {
              case 24301:
                v128 = GameMode::getInstance((vm_address_t *)v4);
                if ( !v128 )
                  return 1;
                v129 = (#1047 *)GameMode::getHomeScreen(v128);
                if ( !v129 )
                  return 1;
                v130 = HomeScreen::getClanPage(v129);
                v131 = AllianceDataMessage::removeAllianceFullEntry((#999 *)a2);
                ClanPage::setAllianceFullEntry(v130, v131);
                return 1;
              case 24302:
                v4 = (#825 *)GUI::getInstance(v4);
                if ( v4 )
                {
                  v343 = AllianceJoinFailedMessage::getReason((#888 *)a2);
                  v344 = (#825 *)String::String((String *)&v426.__pad[1], "TID_ALLIANCE_JOIN_FAILED");
                  switch ( v343 )
                  {
                    case 1:
                      v344 = (#825 *)String::operator=(&v426.__pad[1], "TID_ALLIANCE_JOIN_FAILED_FULL");
                      break;
                    case 2:
                      v344 = (#825 *)String::operator=(&v426.__pad[1], "TID_ALLIANCE_JOIN_FAILED_NOT_OPEN");
                      break;
                    case 3:
                      v344 = (#825 *)String::operator=(
                                       &v426.__pad[1],
                                       "TID_ALLIANCE_JOIN_FAILED_TARGET_ALREADY_IN_ALLIANCE");
                      break;
                    case 4:
                      v344 = (#825 *)String::operator=(&v426.__pad[1], "TID_ALLIANCE_JOIN_FAILED_SCORE_TOO_LOW");
                      break;
                    case 5:
                      v344 = (#825 *)String::operator=(&v426.__pad[1], "TID_ALLIANCE_JOIN_FAILED_BANNED");
                      break;
                    default:
                      break;
                  }
                  v385 = (pid_t *)GUI::getInstance(v344);
                  GUI::getDefaultFloaterPos(v385);
                  v426.__pad[0] = __PAIR64__(v387, v386);
                  v389 = StringTable::getString((#1308 *)&v426.__pad[1], v388);
                  GUI::showFloaterTextAt(v385, v426.__pad, v389, 0xFFFFFFFFLL, COERCE_LONG_DOUBLE((unsigned __int128)0));
                  String::~String((String *)&v426.__pad[1]);
                }
    LABEL_415:
                v390 = (#1047 *)HomeScreen::getInstance(v4);
                if ( v390 )
                {
                  v391 = (#1056 *)HomeScreen::getBattlePage(v390);
                  if ( v391 )
                  {
                    EstimatedDuration = MatchmakeInfoMessage::getEstimatedDuration((CancelMatchmakeMessage *)a2);
                    BattlePage::setMatchmakingEstimatedDuration(v391, EstimatedDuration);
                  }
                }
                return 1;
              case 24304:
                v345 = GameMode::getInstance((vm_address_t *)v4);
                if ( !v345 )
                  return 1;
                v346 = (#1047 *)GameMode::getHomeScreen(v345);
                if ( !v346 )
                  return 1;
                v347 = JoinableAllianceListMessage::removeJoinableAlliances((#966 *)a2);
                v348 = HomeScreen::getClanPage(v346);
                ClanPage::setJoinableAlliances(v348, v347);
                return 1;
              case 24310:
                v349 = GameMode::getInstance((vm_address_t *)v4);
                if ( !v349 )
                  return 1;
                v350 = (#1047 *)GameMode::getHomeScreen(v349);
                if ( !v350 )
                  return 1;
                v351 = AllianceListMessage::removeAlliances((vm_offset_t *)a2);
                v295 = AllianceListMessage::removeSearchString((vm_offset_t *)a2);
                v352 = HomeScreen::getClanPage(v350);
                ClanPage::setAllianceSearchList(v352, v351, v295);
                if ( !v295 )
                  return 1;
                String::~String((String *)v295);
    LABEL_299:
                v298 = (void *)v295;
                goto LABEL_362;
              case 24311:
                if ( !AllianceStream::getInstance((__darwin_pthread_mutex_t *)v4) )
                  goto LABEL_377;
                v353 = AllianceStreamMessage::removeStreamEntries((#912 *)a2);
                v354 = (_QWORD *)v353;
                if ( *(int *)(v353 + 12) >= 1 )
                {
                  v355 = 0;
                  do
                  {
                    v356 = AllianceStream::getInstance((__darwin_pthread_mutex_t *)v353);
                    v353 = AllianceStream::addEntry(v356, *(_QWORD *)(*v354 + 8 * v355++));
                  }
                  while ( v355 < *((int *)v354 + 3) );
                }
                if ( *v354 )
                  operator delete[](*v354);
                v298 = v354;
    LABEL_362:
                operator delete(v298);
                return 1;
              case 24312:
                v357 = (__darwin_pthread_mutex_t *)AllianceStream::getInstance((__darwin_pthread_mutex_t *)v4);
                if ( v357 )
                {
                  v358 = AllianceStream::getInstance(v357);
                  v359 = AllianceStreamEntryMessage::removeStreamEntry((memory_object_size_t *)a2);
                  AllianceStream::addEntry(v358, v359);
                  return 1;
                }
    LABEL_377:
                v117 = "receiveMessage: AllianceStream::getInstance() is null";
                break;
              default:
                return v8;
            }
            goto LABEL_221;
          }
          if ( (int)v4 > 25891 )
          {
            if ( (_DWORD)v4 != 25892 )
              return v8;
            v182 = (#1080 *)DisconnectedMessage::getReason(a2);
            if ( (_DWORD)v182 == 1 )
            {
              v184 = GameMain::getInstance(v182);
              String::String(&v427);
              GameMain::showNativeDialog(v184, 14, 0, &v427);
              p_si_addr = &v427;
            }
            else
            {
              String::format((String *)"DisconnectedMessage unknown reason %d", v183, v182);
              Debugger::warning((__siginfo *)&v426.__pad[4], v323);
              p_si_addr = (String *)&v426.__pad[4];
            }
            goto LABEL_190;
          }
          v172 = (_BYTE)v4 - 81;
          if ( (unsigned int)((_DWORD)v4 - 24401) > 0x11 )
            return v8;
          if ( ((1 << v172) & 0xF) != 0 )
          {
    LABEL_255:
            v231 = GUI::getInstance(v4);
            if ( v231 )
            {
              v232 = GUI::getPopupByType(v231, 22);
              if ( v232 )
              {
                AlliancePopup::setData(v232, a2);
                return 1;
              }
            }
            return 1;
          }
          if ( ((1 << v172) & 0x21C00) != 0 )
          {
            if ( AvatarStreamManager::sm_pInstance )
            {
              AvatarStreamManager::receiveMessage(AvatarStreamManager::sm_pInstance, a2);
              return 1;
            }
            v342 = "AllianceStreamMessage received, but AvatarStreamManager is NULL";
          }
          else
          {
            if ( (_DWORD)v4 != 24405 )
              return v8;
            if ( RoyalTvManager::sm_pInstance )
            {
              RoyalTvManager::receiveMessage(RoyalTvManager::sm_pInstance, a2);
              return 1;
            }
            v342 = "RoyalTVContentMessage received, but RoyalTvManager is NULL";
          }
        }
        else
        {
          if ( (int)v4 > 24213 )
          {
            if ( (_DWORD)v4 != 24214 )
              return v8;
            if ( FacebookManager::sm_pInstance )
            {
              FacebookManager::unbindFacebookID((#1010 *)FacebookManager::sm_pInstance);
              return 1;
            }
            return 1;
          }
          if ( (int)v4 <= 24210 )
          {
            if ( (_DWORD)v4 == 24201 )
            {
              if ( (unsigned int)FacebookAccountBoundMessage::getResultCode((__darwin_pthread_t *)a2) )
              {
                if ( FacebookManager::sm_pInstance )
                {
                  FacebookManager::logout((#1010 *)FacebookManager::sm_pInstance);
                  return 1;
                }
              }
              else if ( FacebookManager::sm_pInstance )
              {
                FacebookManager::bindFacebookID((#1010 *)FacebookManager::sm_pInstance);
                return 1;
              }
            }
            else
            {
              if ( (_DWORD)v4 != 24202 )
                return v8;
              v233 = (uid_t *)FacebookAccountAlreadyBoundMessage::removeAccountId((#1134 *)a2);
              v234 = (#825 *)FacebookAccountAlreadyBoundMessage::setAccountId((_opaque_pthread_attr_t *)a2, v233);
              if ( GUI::getInstance(v234) )
              {
                v235 = (pthread_t *)operator new(384);
                v237 = (const String *)StringTable::getString((#1308 *)"TID_FACEBOOK_BOUND_TO_OTHER_ACCOUNT_TITLE", v236);
                v239 = (const String *)StringTable::getString((#1308 *)"TID_FACEBOOK_BOUND_TO_OTHER_ACCOUNT", v238);
                v240 = ConfirmPopup::ConfirmPopup(v235, 15, v237, v239);
                v241 = GUI::getInstance(v240);
                v8 = 1;
                GUI::showPopup(v241, v235, 1, 0, 0);
                return v8;
              }
            }
            return 1;
          }
          if ( (_DWORD)v4 == 24211 )
          {
            v178 = (__darwin_pthread_attr_t *)GameCenterManager::sm_pInstance;
            if ( GameCenterManager::sm_pInstance )
            {
              GameCenterManager::boundAccount((__darwin_pthread_attr_t *)GameCenterManager::sm_pInstance);
              GameCenterManager::requestFriendsFromGC(v178);
              return 1;
            }
            return 1;
          }
          if ( (_DWORD)v4 != 24212 )
            return v8;
          if ( !GameCenterManager::sm_pInstance || !GUI::getInstance(v4) )
            return 1;
          v242 = (String *)GamecenterAccountAlreadyBoundMessage::removePassToken((vm_size_t *)a2);
          if ( v242 )
          {
            GamecenterAccountAlreadyBoundMessage::setPassToken((vm_size_t *)a2, v242);
            v243 = (#962 *)GamecenterAccountAlreadyBoundMessage::removeLogicClientAvatar((vm_size_t *)a2);
            v244 = (pthread_attr_t *)LogicClientAvatar::getExpLevel(v243);
            if ( (int)v244 < *(_DWORD *)(LogicDataTables::getClientGlobals(v244) + 388LL) )
            {
              Debugger::hudPrint(
                (__siginfo *)"Don't bind GC account, as the XP level is too low.",
                (const char *)0xFFFFFFFFLL,
                v245);
              GamecenterAccountAlreadyBoundMessage::setAvatar(a2, v243);
              return 1;
            }
            GamecenterAccountAlreadyBoundMessage::setAvatar(a2, v243);
            v368 = (const String *)StringTable::getString((#1308 *)"TID_GAMECENTER_BOUND_TO_OTHER_ACCOUNT_TITLE", v367);
            String::String(&v411, v368);
            v370 = StringTable::getString((#1308 *)"TID_GAMECENTER_BOUND_TO_OTHER_ACCOUNT", v369);
            String::String(&v409, "<number>");
            v371 = LogicClientAvatar::getExpLevel(v243);
            String::format((String *)"%d", v372, v371);
            String::replace(&v410, v370, &v409, &v408);
            String::~String(&v408);
            String::~String(&v409);
            String::String(&v406, "<name>");
            Name = LogicClientAvatar::getName(v243);
            String::replace(&v407, &v410, &v406, Name);
            String::operator=(&v410);
            String::~String(&v407);
            String::~String(&v406);
            v374 = operator new(384);
            v375 = (#825 *)ConfirmPopup::ConfirmPopup(v374, 17, a2, &v411, &v410);
            v376 = GUI::getInstance(v375);
            GUI::showPopup(v376, v374, 1, 0, 0);
            String::~String(&v410);
            p_si_addr = &v411;
            goto LABEL_190;
          }
          v342 = "Invalid GameCenterAccountAlreadyBound token";
        }
    LABEL_396:
        Debugger::hudPrint((__siginfo *)v342, (const char *)0xFFFFFFFFLL, v6);
        return 1;
      }
      if ( (int)v4 <= 20224 )
      {
        if ( (_DWORD)v4 == 20205 )
        {
          if ( GameMode::getInstance((vm_address_t *)v4) )
          {
            PlayerAvatar = (#825 *)GameMode::getPlayerAvatar();
            if ( PlayerAvatar )
            {
              v27 = GUI::getInstance(PlayerAvatar);
              if ( v27 )
              {
                v28 = (#984 *)GUI::getPopupByType(v27, 5);
                if ( v28 )
                  EnterNamePopup::pendingNameFailed(v28);
              }
            }
          }
          return 1;
        }
        if ( (_DWORD)v4 == 20207 )
        {
          *(_DWORD *)(a1 + 152) = AllianceOnlineStatusUpdatedMessage::getMembersOnline((__darwin_dev_t *)a2);
          return 1;
        }
        return v8;
      }
      if ( (_DWORD)v4 != 20225 )
      {
        if ( (_DWORD)v4 != 20300 )
          return v8;
        v102 = (#825 *)GUI::getInstance(v4);
        if ( !v102 )
          return 1;
        v103 = GUI::getInstance(v102);
        v104 = (#825 *)GUI::getNameChangeHandler(v103);
        if ( !v104 )
          return 1;
        v105 = GUI::getInstance(v104);
        v106 = (void (__fastcall ***)(_QWORD, String *))GUI::getNameChangeHandler(v105);
        if ( !v106 )
          return 1;
        if ( !(unsigned int)AvatarNameCheckResponseMessage::isInvalid((#972 *)a2) )
        {
          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, String *)))(*v106)[2])(v106);
          return 1;
        }
        if ( (unsigned int)AvatarNameCheckResponseMessage::getErrorCode((#972 *)a2) == 1
          || (unsigned int)AvatarNameCheckResponseMessage::getErrorCode((#972 *)a2) == 4 )
        {
          v108 = (void (__fastcall *)(_QWORD, __int64))**v106;
          v109 = "TID_INVALID_NAME";
        }
        else if ( (unsigned int)AvatarNameCheckResponseMessage::getErrorCode((#972 *)a2) == 2 )
        {
          v108 = (void (__fastcall *)(_QWORD, __int64))**v106;
          v109 = "TID_NAME_TOO_SHORT";
        }
        else
        {
          if ( (unsigned int)AvatarNameCheckResponseMessage::getErrorCode((#972 *)a2) != 3 )
          {
            v377 = (pthread_attr_t *)AvatarNameCheckResponseMessage::getErrorCode((#972 *)a2);
            if ( (_DWORD)v377 != 5 )
              return 1;
            v378 = LogicDataTables::getClientGlobals(v377);
            String::getFormatted(v430, (String *)"%i", v379, *(unsigned int *)(v378 + 124));
            v380 = **v106;
            v382 = StringTable::getString((#1308 *)"TID_NAME_CHANGE_TH_LEVEL_TOO_LOW", v381);
            String::String(&v428, "<level>");
            String::replace(&v429, v382, &v428, v430);
            v380(v106, &v429);
            String::~String(&v429);
            String::~String(&v428);
            p_si_addr = (String *)v430;
            goto LABEL_190;
          }
          v108 = (void (__fastcall *)(_QWORD, __int64))**v106;
          v109 = "TID_NAME_ALREADY_CHANGED";
        }
        v110 = StringTable::getString((#1308 *)v109, v107);
        v108(v106, v110);
        return 1;
      }
      v79 = (vm_address_t *)MessageManager::clearUdpInfo((MessageManager *)a1);
      if ( !GameMode::getInstance(v79) )
      {
        v117 = "Received BattleResultMessage while GameMode = NULL";
        goto LABEL_221;
      }
      if ( (int)BattleResultMessage::getExpReward(a2) >= 1 )
      {
        ExpReward = BattleResultMessage::getExpReward(a2);
        HomeScreen::addPendingDataGainedFromBattle(0, ExpReward);
      }
      if ( (int)BattleResultMessage::getOwnStars(a2) >= 1 )
      {
        OwnStars = BattleResultMessage::getOwnStars(a2);
        if ( OwnStars >= 1 )
        {
          v82 = OwnStars + 1;
          do
          {
            HomeScreen::addPendingDataGainedFromBattle(3, 1);
            --v82;
          }
          while ( v82 > 1 );
        }
      }
      GoldReward = (#769 *)BattleResultMessage::getGoldReward(a2);
      v84 = (#769 *)BattleScreen::getInstance(GoldReward);
      if ( v84 )
      {
        v86 = (#769 *)BattleScreen::destructSavedBattleResult(v84);
        v87 = (#769 *)BattleScreen::getInstance(v86);
        BattleScreen::createBattleEndHUD(v87, (#1106 *)a2);
        return 1;
      }
      Debugger::warning((__siginfo *)"Received BattleResultMessage while not in battle", v85);
      v8 = 0;
      *(_QWORD *)(a1 + 128) = a2;
      return v8;
    }

    void __fastcall MessageManager::showFloaterTID(BadgePopup *a1, #1308 *a2)
    {
      BadgePopup *Instance; // x0
      Stage *v4; // x20
      float v5; // s1
      const String *v6; // x1
      #1308 *String; // x0
      float v8[2]; // [xsp+8h] [xbp-18h] BYREF
    
      Instance = (BadgePopup *)GUI::getInstance(a1);
      if ( Instance )
      {
        v4 = (Stage *)GUI::getInstance(Instance);
        v8[0] = GUI::getDefaultFloaterPos(v4);
        v8[1] = v5;
        String = StringTable::getString(a2, v6);
        GUI::showFloaterTextAt((__int64)v4, v8, (const String *)String, -1, 0.0);
      }
    }

    void __fastcall MessageManager::keepAliveServerMessageReceived(__int64 a1)
    {
      AllianceStreamMessage *Instance; // x0
      AllianceStreamMessage *v3; // x0
      AllianceStreamMessage *v4; // x0
      VisitHomeMessage *v5; // x0
    
      ++*(_DWORD *)(a1 + 80);
      Instance = GameMain::getInstance((AllianceStreamMessage *)a1);
      *(float *)(a1 + 68) = (*(float (__fastcall **)(AllianceStreamMessage *))(*(_QWORD *)Instance + 184LL))(Instance);
      if ( *(_DWORD *)(a1 + 80) >= *(_DWORD *)(a1 + 76) )
      {
        v4 = GameMain::getInstance(v3);
        *(float *)(a1 + 72) = (*(float (__fastcall **)(AllianceStreamMessage *))(*(_QWORD *)v4 + 184LL))(v4)
                            - *(float *)(a1 + 64);
        v5 = (VisitHomeMessage *)GameMode::getInstance();
        if ( v5 )
          GameMode::pingUpdated(v5, *(float *)(a1 + 72));
      }
    }

    void __fastcall MessageManager::setPlayerAccountID(__int64 a1, const char *a2, __int64 a3)
    {
      String *v3; // x19
    
      *(_DWORD *)(a1 + 32) = (_DWORD)a2;
      *(_DWORD *)(a1 + 36) = a3;
      v3 = (String *)(a1 + 40);
      String::format((String *)"%d-%d", a2, a2, a3);
      String::operator=(v3);
      String::~String();
    }

    bool MessageManager::canForwardServerCommand()
    {
      __int64 Instance; // x0
      VisitHomeMessage *v1; // x0
    
      if ( !GameMode::getInstance() )
        return 0;
      Instance = GameMode::getInstance();
      if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)Instance + 64LL))(Instance) )
        return 0;
      v1 = (VisitHomeMessage *)GameMode::getInstance();
      return GameMode::isHomeMode(v1);
    }

    __int64 __fastcall MessageManager::update(__int64 a1, long double a2)
    {
      int v4; // w8
      float v5; // s0
      PiranhaMessage **v6; // x9
      PiranhaMessage *v7; // x1
      _QWORD *v8; // x9
      float v9; // s0
      __int64 result; // x0
      int v11; // w21
      __int64 v12; // x22
      LogicAllianceRoleData *v13; // x20
      VisitHomeMessage *Instance; // x0
      __int64 v15; // x20
      AllianceStreamMessage *v16; // x0
      long double v17; // q1
    
      if ( (unsigned int)LogicVersion::isDev((OutlineRenderer *)a1) )
      {
        v4 = *(_DWORD *)(a1 + 116);
        if ( v4 )
        {
          v5 = *(float *)(a1 + 136) - *(float *)&a2;
          *(float *)(a1 + 136) = v5;
          if ( v5 <= 0.0 )
          {
            v6 = *(PiranhaMessage ***)(a1 + 104);
            v7 = *v6;
            *(_DWORD *)(a1 + 116) = v4 - 1;
            if ( v4 >= 2 )
            {
              v8 = v6 + 1;
              do
              {
                *(v8 - 1) = *v8;
                --v4;
                ++v8;
              }
              while ( v4 > 1 );
            }
            Messaging::send(*(Messaging **)(a1 + 8), v7);
            *(float *)(a1 + 136) = (float)(int)ParticleEmitter::getRand(0) / 1000.0;
          }
        }
      }
      v9 = *(float *)(a1 + 16) + *(float *)&a2;
      *(float *)(a1 + 16) = v9;
      if ( v9 > 5.0 )
        MessageManager::sendKeepAliveMessage((MessageManager *)a1);
      result = MessageManager::canForwardServerCommand();
      if ( (_DWORD)result )
      {
        v11 = *(_DWORD *)(a1 + 100);
        if ( v11 >= 1 )
        {
          v12 = 0;
          do
          {
            v13 = *(LogicAllianceRoleData **)(*(_QWORD *)(a1 + 88) + 8 * v12);
            Instance = (VisitHomeMessage *)GameMode::getInstance();
            result = GameMode::serverCommandReceived(Instance, v13);
            ++v12;
          }
          while ( v11 != (_DWORD)v12 );
        }
        *(_DWORD *)(a1 + 100) = 0;
      }
      v15 = *(_QWORD *)(a1 + 144);
      if ( v15 )
      {
        v16 = GameMain::getInstance((AllianceStreamMessage *)result);
        v17 = ((long double (__fastcall *)(AllianceStreamMessage *))*(_QWORD *)(*(_QWORD *)v16 + 184LL))(v16);
        return UdpSocket::update(v15, a1, a2, v17);
      }
      return result;
    }

    void __fastcall MessageManager::sendKeepAliveMessage(__int64 a1)
    {
      PiranhaMessage *v2; // x20
      AllianceStreamMessage *v3; // x0
      AllianceStreamMessage *Instance; // x0
    
      v2 = (PiranhaMessage *)operator new(72);
      KeepAliveMessage::KeepAliveMessage((__int64)v2);
      v3 = (AllianceStreamMessage *)MessageManager::sendMessage((Messaging **)a1, v2);
      if ( (_DWORD)v3 )
      {
        ++*(_DWORD *)(a1 + 76);
        Instance = GameMain::getInstance(v3);
        *(float *)(a1 + 64) = (*(float (__fastcall **)(AllianceStreamMessage *))(*(_QWORD *)Instance + 184LL))(Instance);
        *(_DWORD *)(a1 + 16) = 0;
      }
    }

    void __fastcall MessageManager::resetKeepAliveServerMessageReceivedTimer(float *a1)
    {
      AllianceStreamMessage *Instance; // x0
    
      Instance = GameMain::getInstance((AllianceStreamMessage *)a1);
      a1[17] = (*(float (__fastcall **)(AllianceStreamMessage *))(*(_QWORD *)Instance + 184LL))(Instance);
    }

    float __fastcall MessageManager::getPing(RectangleTimer *this)
    {
      return *((float *)this + 18);
    }

    String *__usercall MessageManager::getAccountIdString@<X0>(__int64 a1@<X0>, String *a2@<X8>)
    {
      return String::String(a2, (const String *)(a1 + 40));
    }

    __int64 __fastcall MessageManager::getAccountID(__int64 a1)
    {
      return a1 + 32;
    }

    __int64 __fastcall MessageManager::isFirstSession(__int64 a1)
    {
      return *(unsigned __int8 *)(a1 + 157);
    }

    __int64 __fastcall MessageManager::getTimeSinceLastServerKeepAliveInMs(float *a1)
    {
      AllianceStreamMessage *Instance; // x0
    
      Instance = GameMain::getInstance((AllianceStreamMessage *)a1);
      return (unsigned int)(int)(float)((float)((*(float (__fastcall **)(AllianceStreamMessage *))(*(_QWORD *)Instance
                                                                                                 + 184LL))(Instance)
                                              - a1[17])
                                      * 1000.0);
    }

    __int64 __fastcall MessageManager::disconnected(__int64 result)
    {
      *(_QWORD *)(result + 76) = 0;
      return result;
    }

    __int64 __fastcall MessageManager::udpMessageReceived(__int64 a1, __int64 a2)
    {
      __int64 result; // x0
    
      result = MessageManager::receiveMessage(a1, a2);
      if ( a2 )
      {
        if ( (((unsigned int)result ^ 1) & 1) == 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
        }
      }
      return result;
    }

    __int64 __fastcall MessageManager::getConnectionInterface(__int64 a1)
    {
      return Connection::getInterfaceName((Connection *)(*(_QWORD *)(a1 + 8) + 320LL));
    }

    __int64 __fastcall MessageManager::initializeMembers(__int64 a1)
    {
      *(_DWORD *)(a1 + 152) = 0;
      *(_DWORD *)(a1 + 116) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 32) = -1;
      String::operator=(a1 + 40, "");
      *(_BYTE *)(a1 + 156) = 0;
      *(_BYTE *)(a1 + 157) = 0;
      *(_DWORD *)(a1 + 100) = 0;
      *(_QWORD *)(a1 + 144) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_DWORD *)(a1 + 136) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      return String::operator=(a1 + 160, "");
    }

}; // end class MessageManager
