class LogicCommandManager
{
public:

    _QWORD *__fastcall LogicCommandManager::LogicCommandManager(_QWORD *a1, __int64 a2)
    {
      #1158 *v3; // x20
    
      a1[1] = 0;
      a1[2] = 0;
      *a1 = 0;
      a1[3] = a2;
      LogicArrayList<LogicCommand *>::ensureCapacity();
      v3 = (#1158 *)operator new(8);
      LogicCommandManagerListener::LogicCommandManagerListener(v3);
      a1[2] = v3;
      return a1;
    }

    // attributes: thunk
    _QWORD *__fastcall LogicCommandManager::LogicCommandManager(_QWORD *a1, __int64 a2)
    {
      return __ZN19LogicCommandManagerC2EP13LogicGameMode(a1, a2);
    }

    __int64 __fastcall LogicCommandManager::destruct(__int64 a1)
    {
      int v2; // w8
      __int64 v3; // x21
      __int64 i; // x22
      __int64 v5; // x20
      __int64 result; // x0
    
      v3 = a1 + 12;
      v2 = *(_DWORD *)(a1 + 12);
      if ( v2 >= 1 )
      {
        for ( i = 0; i < v2; ++i )
        {
          v5 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
          if ( v5 )
          {
            (**(void (__fastcall ***)(_QWORD))v5)(*(_QWORD *)(*(_QWORD *)a1 + 8 * i));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
            v2 = *(_DWORD *)v3;
          }
        }
      }
      result = *(_QWORD *)(a1 + 16);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *(_QWORD *)(a1 + 16);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *(_QWORD *)(a1 + 16) = 0;
      }
      *(_DWORD *)(v3 + 16) = 0;
      *(_QWORD *)v3 = 0;
      *(_QWORD *)(v3 + 8) = 0;
      return result;
    }

    __int64 __fastcall LogicCommandManager::addCommand(__int64 result, __int64 a2)
    {
      __int64 v3; // x20
      __int64 v4; // x0
      const char *v5; // x1
      const String *v6; // x1
      String v7; // [xsp+10h] [xbp-30h] BYREF
      __int64 v8; // [xsp+28h] [xbp-18h] BYREF
    
      v3 = result;
      v8 = a2;
      if ( a2 )
      {
        if ( (unsigned int)LogicGameMode::getState(*(_QWORD *)(result + 24)) == 2 )
        {
          v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
          String::format((String *)"Command added in visit mode %d", v5, v4);
          Debugger::warning((__siginfo *)&v7, v6);
          String::~String(&v7);
          (**(void (__fastcall ***)(__int64))a2)(a2);
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
          v8 = 0;
        }
        else
        {
          return LogicArrayList<LogicCommand *>::add(v3, &v8);
        }
      }
      return result;
    }

    __int64 __fastcall LogicCommandManager::encode(__int64 a1, #1226 *a2)
    {
      int v4; // w21
      __int64 v5; // x23
      __int64 v6; // x22
      void (__fastcall *v7)(#1226 *, __int64); // x24
      __int64 v8; // x0
    
      ChecksumEncoder::enableCheckSum(a2, 0);
      v4 = *(_DWORD *)(a1 + 12);
      (*(void (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, (unsigned int)v4);
      if ( v4 >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
          v7 = *(void (__fastcall **)(#1226 *, __int64))(*(_QWORD *)a2 + 88LL);
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
          v7(a2, v8);
          (*(void (__fastcall **)(__int64, #1226 *))(*(_QWORD *)v6 + 40LL))(v6, a2);
          ++v5;
        }
        while ( v4 != (_DWORD)v5 );
      }
      return ChecksumEncoder::enableCheckSum(a2, 1);
    }

    __int64 __fastcall LogicCommandManager::encodeCommand(__int64 a1, __int64 a2)
    {
      void (__fastcall *v4)(__int64, __int64); // x21
      __int64 v5; // x0
    
      v4 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 88LL);
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
      v4(a1, v5);
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, a1);
    }

    __int64 __fastcall LogicCommandManager::decode(__int64 a1, #1226 *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x8
      __int64 v6; // x23
      __int64 v7; // x22
      __int64 v8; // x8
      bool v9; // w3
      __int64 v11; // [xsp+8h] [xbp-38h] BYREF
    
      ChecksumEncoder::enableCheckSum(a2, 0);
      v4 = (*(__int64 (__fastcall **)(#1226 *))(*(_QWORD *)a2 + 152LL))(a2);
      v5 = *(int *)(a1 + 12);
      if ( (int)v5 >= 1 )
      {
        v6 = v5 - 1;
        do
        {
          v7 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6);
          if ( v7 )
          {
            (**(void (__fastcall ***)(_QWORD))v7)(*(_QWORD *)(*(_QWORD *)a1 + 8 * v6));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          }
          v8 = v6-- + 1;
        }
        while ( v8 > 1 );
      }
      *(_DWORD *)(a1 + 12) = 0;
      LogicArrayList<LogicCommand *>::ensureCapacity(a1, v4);
      if ( (int)v4 >= 1 )
      {
        do
        {
          v11 = LogicCommandManager::decodeCommand(a2, (#1225 *)1, 1, v9);
          LogicArrayList<LogicCommand *>::add(a1, &v11);
          LODWORD(v4) = v4 - 1;
        }
        while ( (_DWORD)v4 );
      }
      return ChecksumEncoder::enableCheckSum(a2, 1);
    }

    _BYTE *__fastcall LogicCommandManager::decodeCommand(Application *this, #1225 *a2, char a3)
    {
      char v4; // w22
      Application *v6; // x23
      int v7; // w1
      __int64 Command; // x0
      const char *v9; // x1
      _BYTE *v10; // x19
      _BOOL8 v11; // x0
      const char *v12; // x2
      long double v13; // q0
      const String *v14; // x1
      String v16; // [xsp+8h] [xbp-48h] BYREF
    
      v4 = (char)a2;
      v6 = (Application *)(*(__int64 (__fastcall **)(Application *))(*(_QWORD *)this + 152LL))(this);
      Command = LogicCommandManager::createCommand(v6, v7);
      v10 = (_BYTE *)Command;
      if ( !Command )
      {
        if ( LogicCommandManager::sm_errorsEnabled )
        {
          String::format((String *)"LogicCommandManager::decodeCommand() - command is null, type:%d", v9, v6);
          Debugger::error((Debugger *)&v16, v14);
        }
        return 0;
      }
      v11 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)Command + 32LL))(Command) == (_DWORD)v6;
      *(__n128 *)&v13 = Debugger::doAssert((Debugger *)v11, (bool)"", v12);
      if ( (*(int (__fastcall **)(_BYTE *, long double))(*(_QWORD *)v10 + 32LL))(v10, v13) >= 1000 && (v4 & 1) == 0
        || (*(int (__fastcall **)(_BYTE *))(*(_QWORD *)v10 + 32LL))(v10) >= 200
        && (*(int (__fastcall **)(_BYTE *))(*(_QWORD *)v10 + 32LL))(v10) <= 499
        && (a3 & 1) == 0
        || ((*(void (__fastcall **)(_BYTE *, Application *))(*(_QWORD *)v10 + 48LL))(v10, this), v10[8]) )
      {
        (**(void (__fastcall ***)(_BYTE *))v10)(v10);
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v10 + 16LL))(v10);
        return 0;
      }
      return v10;
    }

    __int64 __fastcall LogicCommandManager::setListener(__int64 a1, __int64 a2)
    {
      __int64 result; // x0
    
      result = *(_QWORD *)(a1 + 16);
      if ( result )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        result = *(_QWORD *)(a1 + 16);
        if ( result )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        *(_QWORD *)(a1 + 16) = 0;
      }
      *(_QWORD *)(a1 + 16) = a2;
      return result;
    }

    void __fastcall LogicCommandManager::tick(UnlockAccountPopup **this)
    {
      int isImmediateMessageExecution; // w21
      __int64 Tick; // x0
      String *v4; // x20
      __int64 v5; // x8
      __int64 v6; // x21
      int v7; // w27
      __int64 v8; // x21
      int v9; // w23
      PvpMatchmakeNotificationMessage *v10; // x24
      int AgeInTicks; // w25
      int TickWhenGiven; // w26
      const char *v13; // x1
      const String *v14; // x1
      __int64 v15; // x25
      __int64 v16; // x0
      const char *v17; // x1
      const String *v18; // x1
      String *v19; // x0
      int v20; // w1
      int v21; // w1
      String *v22; // x0
      int v23; // w1
      const String *v24; // x1
      DataGained *v25; // x0
      __int64 v26; // x21
      DataGained *v27; // x0
      PvpMatchmakeNotificationMessage *v28; // x26
      String *v29; // x0
      int v30; // w1
      int v31; // w1
      String *ExecuteTick; // x0
      int v33; // w1
      const String *v34; // x1
      __int64 v35; // x27
      __int64 v36; // x0
      const char *v37; // x1
      const String *v38; // x1
      String *v39; // x0
      int v40; // w1
      String *State; // x0
      int v42; // w1
      const String *v43; // x1
      PvpMatchmakeNotificationMessage *v44; // x23
      __int64 v45; // x24
      __int64 v46; // x0
      const char *v47; // x1
      const String *v48; // x1
      String v49; // [xsp+20h] [xbp-2F0h] BYREF
      String v50; // [xsp+38h] [xbp-2D8h] BYREF
      String v51; // [xsp+50h] [xbp-2C0h] BYREF
      String v52; // [xsp+68h] [xbp-2A8h] BYREF
      String v53; // [xsp+80h] [xbp-290h] BYREF
      String v54; // [xsp+98h] [xbp-278h] BYREF
      String v55; // [xsp+B0h] [xbp-260h] BYREF
      String v56; // [xsp+C8h] [xbp-248h] BYREF
      String v57; // [xsp+E0h] [xbp-230h] BYREF
      String v58; // [xsp+F8h] [xbp-218h] BYREF
      String v59; // [xsp+110h] [xbp-200h] BYREF
      String v60; // [xsp+128h] [xbp-1E8h] BYREF
      String v61; // [xsp+140h] [xbp-1D0h] BYREF
      String v62; // [xsp+158h] [xbp-1B8h] BYREF
      String v63; // [xsp+170h] [xbp-1A0h] BYREF
      String v64; // [xsp+188h] [xbp-188h] BYREF
      String v65; // [xsp+1A0h] [xbp-170h] BYREF
      String v66; // [xsp+1B8h] [xbp-158h] BYREF
      String v67; // [xsp+1D0h] [xbp-140h] BYREF
      String v68; // [xsp+1E8h] [xbp-128h] BYREF
      String v69; // [xsp+200h] [xbp-110h] BYREF
      String v70; // [xsp+218h] [xbp-F8h] BYREF
      String v71; // [xsp+230h] [xbp-E0h] BYREF
      String v72; // [xsp+248h] [xbp-C8h] BYREF
      String v73; // [xsp+260h] [xbp-B0h] BYREF
      String v74; // [xsp+278h] [xbp-98h] BYREF
      String v75; // [xsp+290h] [xbp-80h] BYREF
      String v76; // [xsp+2A8h] [xbp-68h] BYREF
    
      isImmediateMessageExecution = LogicGameMode::isImmediateMessageExecution(*(this + 3));
      Tick = LogicGameMode::getTick(*(this + 3));
      v4 = (String *)Tick;
      if ( isImmediateMessageExecution )
      {
        LogicGameMode::pushLogicChangesAllowed(*(this + 3));
        LogicGameMode::setLogicChangesAllowed(*(this + 3), 1);
        v5 = *((_QWORD *)*(this + 3) + 21);
        if ( v5 && *(_DWORD *)(v5 + 16) == 3 )
        {
          if ( *((int *)this + 3) >= 1 )
          {
            v6 = 0;
            do
            {
              v28 = (PvpMatchmakeNotificationMessage *)*((_QWORD *)*this + (int)v6);
              if ( (int)LogicCommand::getExecuteTick((__int64)v28) < (int)v4 )
              {
                LogicArrayList<LogicCommand *>::remove(this, v6);
                String::String(&v76, "Execute command failed! Command should have been executed already. (type=");
                v29 = (String *)(*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)v28 + 32LL))(v28);
                String::valueOf(&v74, v29, v30);
                operator+((__int64 *)&v75.m_length, &v76, &v74);
                String::operator=(&v76);
                String::~String(&v75);
                String::~String(&v74);
                operator+(&v76, " server_tick=");
                String::valueOf(&v68, v4, v31);
                operator+((__int64 *)&v70.m_length, &v69, &v68);
                operator+(&v70, " command_tick=");
                ExecuteTick = (String *)LogicCommand::getExecuteTick((__int64)v28);
                String::valueOf(&v67, ExecuteTick, v33);
                operator+((__int64 *)&v72.m_length, &v71, &v67);
                operator+(&v72, ")");
                String::operator=(&v76);
                String::~String(&v73);
                String::~String(&v72);
                String::~String(&v67);
                String::~String(&v71);
                String::~String(&v70);
                String::~String(&v68);
                String::~String(&v69);
                Debugger::error((Debugger *)&v76, v34);
              }
              if ( (unsigned int)LogicCommand::getExecuteTick((__int64)v28) == (_DWORD)v4 )
              {
                LogicArrayList<LogicCommand *>::remove(this, v6);
                if ( (LogicCommandManager::isCommandAllowedInCurrentState((Application *)this, v28) & 1) == 0 )
                {
                  String::String(&v66, "Execute command failed! Command not allowed in current state. (type=");
                  v39 = (String *)(*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)v28 + 32LL))(v28);
                  String::valueOf(&v64, v39, v40);
                  operator+((__int64 *)&v65.m_length, &v66, &v64);
                  String::operator=(&v66);
                  String::~String(&v65);
                  String::~String(&v64);
                  operator+(&v66, " current_state=");
                  State = (String *)LogicGameMode::getState(*(this + 3));
                  String::valueOf(&v60, State, v42);
                  operator+((__int64 *)&v62.m_length, &v61, &v60);
                  operator+(&v62, ")");
                  String::operator=(&v66);
                  String::~String(&v63);
                  String::~String(&v62);
                  String::~String(&v60);
                  String::~String(&v61);
                  Debugger::error((Debugger *)&v66, v43);
                }
                v35 = (*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *, _QWORD, __int64, _QWORD))(*(_QWORD *)v28 + 24LL))(
                        v28,
                        *(this + 3),
                        3,
                        0);
                if ( (_DWORD)v35 )
                {
                  v36 = (*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)v28 + 32LL))(v28);
                  String::format((String *)"Failed to execute command: %d failCode: %d", v37, v36, v35);
                  Debugger::error((Debugger *)&v59, v38);
                }
                if ( (*(unsigned int (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)v28 + 88LL))(v28) )
                {
                  v27 = (DataGained *)*((_QWORD *)*(this + 3) + 2);
                  if ( v27 )
                    LogicReplay::recordCommand(v27, v28);
                }
              }
              else
              {
                v6 = (unsigned int)(v6 + 1);
              }
            }
            while ( (int)v6 < *((_DWORD *)this + 3) );
          }
        }
        else if ( *((int *)this + 3) >= 1 )
        {
          v26 = 0;
          do
          {
            v44 = (PvpMatchmakeNotificationMessage *)*((_QWORD *)*this + v26);
            if ( (unsigned int)LogicCommandManager::isCommandAllowedInCurrentState((Application *)this, v44) )
            {
              if ( (int)v4 < (int)LogicCommand::getExecuteTick((__int64)v44) )
              {
                ++v26;
              }
              else
              {
                LogicArrayList<LogicCommand *>::remove(this, v26);
                v45 = (*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *, _QWORD, __int64, _QWORD))(*(_QWORD *)v44 + 24LL))(
                        v44,
                        *(this + 3),
                        3,
                        0);
                if ( (_DWORD)v45 )
                {
                  v46 = (*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)v44 + 32LL))(v44);
                  String::format((String *)"Failed to execute command: %d failCode: %d", v47, v46, v45);
                  Debugger::warning((__siginfo *)&v58, v48);
                  String::~String(&v58);
                  (**(void (__fastcall ***)(PvpMatchmakeNotificationMessage *))v44)(v44);
                  (*(void (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)v44 + 16LL))(v44);
                }
                else
                {
                  LogicCommand::setExecuteTick((__int64)v44, (int)v4);
                  (*(void (__fastcall **)(_QWORD, PvpMatchmakeNotificationMessage *))(*(_QWORD *)*(this + 2) + 24LL))(
                    *(this + 2),
                    v44);
                }
              }
            }
          }
          while ( v26 < *((int *)this + 3) );
        }
        LogicGameMode::popLogicChangesAllowed(*(this + 3));
      }
      else
      {
        v7 = *((_DWORD *)this + 3);
        if ( v7 >= 1 )
        {
          LODWORD(v8) = 0;
          v9 = Tick - 20;
          do
          {
            v8 = (int)v8;
            while ( 1 )
            {
              v10 = (PvpMatchmakeNotificationMessage *)*((_QWORD *)*this + v8);
              if ( !v10 )
              {
                LogicArrayList<LogicCommand *>::remove(this, v8);
                goto LABEL_24;
              }
              AgeInTicks = LogicCommand::getAgeInTicks(*((PvpMatchmakeNotificationMessage **)*this + v8), (int)v4);
              if ( AgeInTicks >= 21 )
              {
                TickWhenGiven = LogicCommand::getTickWhenGiven(v10);
                LogicCommand::setTickWhenGiven((__int64)v10, (_DWORD)v4 - 20);
                AgeInTicks = LogicCommand::getAgeInTicks(v10, (int)v4);
                String::format(
                  (String *)"Command was late. Tick when given modified by ",
                  v13,
                  (unsigned int)(v9 - TickWhenGiven));
                Debugger::warning((__siginfo *)&v57, v14);
                String::~String(&v57);
              }
              if ( AgeInTicks == 20 )
                break;
              if ( AgeInTicks > 19 )
              {
                String::String(&v55, "Execute command failed! Command should have been executed already. (type=");
                v19 = (String *)(*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)v10 + 32LL))(v10);
                String::valueOf(&v54, v19, v20);
                String::operator+=(&v55, &v54);
                String::~String(&v54);
                String::valueOf(&v52, v4, v21);
                operator+(&v53, " current tick=", &v52);
                String::operator+=(&v55, &v53);
                String::~String(&v53);
                String::~String(&v52);
                v22 = (String *)LogicCommand::getTickWhenGiven(v10);
                String::valueOf(&v49, v22, v23);
                operator+(&v50, " given=", &v49);
                operator+(&v50, ")");
                String::operator+=(&v55, &v51);
                String::~String(&v51);
                String::~String(&v50);
                String::~String(&v49);
                Debugger::warning((__siginfo *)&v55, v24);
                LogicArrayList<LogicCommand *>::remove(this, v8);
                (**(void (__fastcall ***)(PvpMatchmakeNotificationMessage *))v10)(v10);
                (*(void (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)v10 + 16LL))(v10);
                String::~String(&v55);
                goto LABEL_24;
              }
              if ( (int)++v8 >= v7 )
                return;
            }
            LogicArrayList<LogicCommand *>::remove(this, v8);
            *((_BYTE *)v10 + 8) = 0;
            v15 = (*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *, _QWORD, __int64, _QWORD))(*(_QWORD *)v10 + 24LL))(
                    v10,
                    *(this + 3),
                    2,
                    0);
            if ( (_DWORD)v15 )
            {
              *((_BYTE *)v10 + 8) = 1;
              v16 = (*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)v10 + 32LL))(v10);
              String::format((String *)"Command %d fail code %d", v17, v16, v15);
              Debugger::warning((__siginfo *)&v56, v18);
              String::~String(&v56);
            }
            else
            {
              LogicCommand::setExecuteTick((__int64)v10, (int)v4);
              if ( (*(unsigned int (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)v10 + 88LL))(v10) )
              {
                v25 = (DataGained *)*((_QWORD *)*(this + 3) + 2);
                if ( v25 )
                  LogicReplay::recordCommand(v25, v10);
              }
            }
            (**(void (__fastcall ***)(PvpMatchmakeNotificationMessage *))v10)(v10);
            (*(void (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)v10 + 16LL))(v10);
    LABEL_24:
            --v7;
          }
          while ( (int)v8 < v7 );
        }
      }
    }

    __int64 __fastcall LogicCommandManager::isCommandAllowedInCurrentState(
            Application *this,
            PvpMatchmakeNotificationMessage *a2)
    {
      const char *v4; // x1
      __int64 v5; // x0
      const char *v6; // x1
      const String *v7; // x1
      String v9; // [xsp+8h] [xbp-28h] BYREF
    
      (*(void (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 32LL))(a2);
      if ( (*(int (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 32LL))(a2) >= 500
        && (*(int (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 32LL))(a2) <= 599
        && (unsigned int)LogicGameMode::getState(*((_QWORD *)this + 3)) != 1 )
      {
        v5 = (*(__int64 (__fastcall **)(PvpMatchmakeNotificationMessage *))(*(_QWORD *)a2 + 32LL))(a2);
        String::format((String *)"Execute command failed! Command is only allowed in home state. Command: %d", v6, v5);
        Debugger::error((Debugger *)&v9, v7);
      }
      if ( (unsigned int)LogicGameMode::getState(*((_QWORD *)this + 3)) != 2 )
        return 1;
      Debugger::warning((__siginfo *)"Execute command failed! Commands are not allowed in visit state.", v4);
      return 0;
    }

    __int64 __fastcall LogicCommandManager::loadCommandFromJSON(Application *this, const #1234 *a2)
    {
      #1232 *JSONNumber; // x20
      const char *v4; // x1
      Application *IntValue; // x0
      int v6; // w1
      __int64 Command; // x20
      void (__fastcall *v8)(__int64, __int64); // x21
      __int64 JSONObject; // x0
      String v11; // [xsp+0h] [xbp-50h] BYREF
      String v12; // [xsp+18h] [xbp-38h] BYREF
    
      String::String(&v12, "ct");
      JSONNumber = (#1232 *)LogicJSONObject::getJSONNumber(this, &v12);
      String::~String(&v12);
      if ( !JSONNumber )
        Debugger::error((__siginfo *)"loadCommandFromJSON - Unknown command type", v4);
      IntValue = (Application *)LogicJSONNumber::getIntValue(JSONNumber);
      Command = LogicCommandManager::createCommand(IntValue, v6);
      v8 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)Command + 80LL);
      String::String(&v11, "c");
      JSONObject = LogicJSONObject::getJSONObject(this, &v11);
      v8(Command, JSONObject);
      String::~String(&v11);
      return Command;
    }

    __int64 __fastcall LogicCommandManager::createCommand(Application *this, const char *a2)
    {
      __int64 v2; // x19
      const String *v3; // x1
      char *v5; // x8
      char *v6; // x8
      String v7; // [xsp+8h] [xbp-28h] BYREF
    
      if ( (int)this > 499 )
      {
        if ( (int)this > 999 )
        {
          if ( (_DWORD)this == 1000 )
          {
            v2 = operator new(64);
            LogicDebugCommand::LogicDebugCommand((LogicDebugCommand *)v2);
            return v2;
          }
    LABEL_14:
          if ( LogicCommandManager::sm_errorsEnabled )
          {
            String::format((String *)"LogicCommandManager::createCommand() - Unknown command type: %d", a2, this);
            Debugger::error((Debugger *)&v7, v3);
          }
          return 0;
        }
        switch ( (int)this )
        {
          case 500:
            v2 = operator new(40);
            LogicSwapSpellsCommand::LogicSwapSpellsCommand((LogicSwapSpellsCommand *)v2);
            return v2;
          case 502:
            v2 = operator new(32);
            LogicStartExploringCommand::LogicStartExploringCommand((LogicStartExploringCommand *)v2);
            return v2;
          case 503:
            v2 = operator new(32);
            LogicStartRewardClaimCommand::LogicStartRewardClaimCommand((LogicParticleEmitterData *)v2);
            return v2;
          case 504:
            v2 = operator new(40);
            LogicFuseSpellsCommand::LogicFuseSpellsCommand((LogicFuseSpellsCommand *)v2);
            return v2;
          case 506:
            v2 = operator new(40);
            LogicSpeedUpExploringCommand::LogicSpeedUpExploringCommand((LogicSpeedUpExploringCommand *)v2);
            return v2;
          case 507:
            v2 = operator new(32);
            LogicSellChestCommand::LogicSellChestCommand((LogicSellChestCommand *)v2);
            return v2;
          case 508:
            v2 = operator new(32);
            LogicGambleCommand::LogicGambleCommand((InputField *)v2);
            return v2;
          case 509:
            v2 = operator new(32);
            LogicCompleteTutorialHomeCommand::LogicCompleteTutorialHomeCommand((#1162 *)v2);
            return v2;
          case 513:
            v2 = operator new(40);
            LogicFreeWorkerCommand::LogicFreeWorkerCommand((LogicTvReplaySeenCommand *)v2);
            return v2;
          case 514:
            v2 = operator new(40);
            LogicBuyResourcesCommand::LogicBuyResourcesCommand((DeviceLinkEnterCodeScreen *)v2);
            return v2;
          case 515:
            v2 = operator new(40);
            LogicOfferChestForCoOpenCommand::LogicOfferChestForCoOpenCommand((LogicOfferChestForCoOpenCommand *)v2);
            return v2;
          case 516:
            v2 = operator new(32);
            LogicUpdateLastShownLevelUpCommand::LogicUpdateLastShownLevelUpCommand((#1102 *)v2);
            return v2;
          case 517:
            v2 = operator new(32);
            LogicCancelChestOpenCommand::LogicCancelChestOpenCommand((#1164 *)v2);
            return v2;
          case 518:
            v2 = operator new(32);
            LogicCollectFreeChestCommand::LogicCollectFreeChestCommand((tween::Cubic *)v2);
            return v2;
          case 519:
            v2 = operator new(32);
            LogicUpgradeTowerCommand::LogicUpgradeTowerCommand((LogicUpgradeTowerCommand *)v2);
            return v2;
          case 520:
            v2 = operator new(32);
            LogicSortCollectionCommand::LogicSortCollectionCommand((LogicSortCollectionCommand *)v2);
            return v2;
          case 521:
            v2 = operator new(40);
            LogicMoveSpellCommand::LogicMoveSpellCommand((ReportUserMessage *)v2);
            return v2;
          case 522:
            v2 = operator new(32);
            LogicClearChestSourceCommand::LogicClearChestSourceCommand((LogicCombatComponent *)v2);
            return v2;
          case 523:
            v2 = operator new(32);
            LogicCollectMultiWinChestCommand::LogicCollectMultiWinChestCommand((LogicCollectMultiWinChestCommand *)v2);
            return v2;
          case 524:
            v2 = operator new(56);
            LogicRequestSpellsCommand::LogicRequestSpellsCommand((LogicRequestSpellsCommand *)v2);
            return v2;
          case 525:
            v2 = operator new(48);
            LogicSpellPageOpenedCommand::LogicSpellPageOpenedCommand((LogicSpellPageOpenedCommand *)v2);
            return v2;
          case 526:
            v2 = operator new(48);
            LogicKickAllianceMemberCommand::LogicKickAllianceMemberCommand((LogicKickAllianceMemberCommand *)v2);
            return v2;
          case 527:
            v2 = operator new(48);
            LogicShareReplayCommand::LogicShareReplayCommand((LogicShareReplayCommand *)v2);
            return v2;
          case 528:
            v2 = operator new(40);
            LogicCommand::LogicCommand(v2);
            v5 = (char *)&`vtable for'LogicBuyChestCommand;
            goto LABEL_61;
          case 529:
            v2 = operator new(40);
            LogicCommand::LogicCommand(v2);
            v5 = (char *)&`vtable for'LogicBuyResourcePackCommand;
            goto LABEL_61;
          case 530:
            v2 = operator new(40);
            LogicCommand::LogicCommand(v2);
            v5 = (char *)&`vtable for'LogicBuyCardCommand;
            goto LABEL_61;
          case 531:
            v2 = operator new(32);
            LogicCommand::LogicCommand(v2);
            v6 = (char *)&`vtable for'LogicHelpOpenedCommand;
            goto LABEL_57;
          case 532:
            v2 = operator new(32);
            LogicCommand::LogicCommand(v2);
            v6 = (char *)&`vtable for'LogicShopOpenedCommand;
    LABEL_57:
            *(_QWORD *)v2 = v6 + 16;
            break;
          case 533:
            v2 = operator new(48);
            LogicSendAllianceMailCommand::LogicSendAllianceMailCommand((LogicSendAllianceMailCommand *)v2);
            break;
          case 534:
            v2 = operator new(40);
            LogicChallengeCommand::LogicChallengeCommand((LogicChallengeCommand *)v2);
            break;
          case 535:
            v2 = operator new(40);
            LogicCommand::LogicCommand(v2);
            v5 = (char *)&`vtable for'LogicClaimAchievementRewardCommand;
    LABEL_61:
            *(_QWORD *)v2 = v5 + 16;
            *(_QWORD *)(v2 + 32) = 0;
            break;
          case 536:
            v2 = operator new(40);
            LogicTvReplaySeenCommand::LogicTvReplaySeenCommand(v2);
            break;
          case 537:
            v2 = operator new(40);
            LogicCommand::LogicCommand(v2);
            *(_QWORD *)v2 = &off_10046B560;
            *(_DWORD *)(v2 + 32) = -1;
            *(_BYTE *)(v2 + 28) = 0;
            break;
          case 538:
            v2 = operator new(32);
            LogicRefreshAchievementsCommand::LogicRefreshAchievementsCommand((LogicRefreshAchievementsCommand *)v2);
            break;
          case 539:
            v2 = operator new(32);
            LogicPageOpenedCommand::LogicPageOpenedCommand((LogicPageOpenedCommand *)v2);
            break;
          default:
            goto LABEL_14;
        }
      }
      else
      {
        if ( (int)this <= 200 )
        {
          if ( (_DWORD)this == 1 )
          {
            v2 = operator new(48);
            LogicDoSpellCommand::LogicDoSpellCommand((LogicDoSpellCommand *)v2);
            return v2;
          }
          if ( (_DWORD)this == 2 )
          {
            v2 = operator new(32);
            LogicCompleteTutorialBattleCommand::LogicCompleteTutorialBattleCommand((#1132 *)v2);
            return v2;
          }
          goto LABEL_14;
        }
        switch ( (int)this )
        {
          case 201:
            v2 = operator new(64);
            LogicChangeAvatarNameCommand::LogicChangeAvatarNameCommand((#1141 *)v2);
            break;
          case 202:
            v2 = operator new(56);
            LogicDiamondsAddedCommand::LogicDiamondsAddedCommand((LogicDiamondsAddedCommand *)v2);
            break;
          case 203:
            v2 = operator new(48);
            LogicDonateAllianceUnitCommand::LogicDonateAllianceUnitCommand((LogicDonateAllianceUnitCommand *)v2);
            break;
          case 208:
            v2 = operator new(48);
            LogicLeaveAllianceCommand::LogicLeaveAllianceCommand((LogicLeaveAllianceCommand *)v2);
            break;
          case 209:
            v2 = operator new(64);
            LogicJoinAllianceCommand::LogicJoinAllianceCommand((RoyalTVEntry *)v2);
            break;
          case 210:
            v2 = operator new(48);
            LogicChangeAllianceRoleCommand::LogicChangeAllianceRoleCommand((LogicChangeAllianceRoleCommand *)v2);
            break;
          case 211:
            v2 = operator new(48);
            LogicAllianceUnitReceivedCommand::LogicAllianceUnitReceivedCommand((LogicAllianceUnitReceivedCommand *)v2);
            break;
          case 212:
            v2 = operator new(48);
            LogicAllianceSettingsChangedCommand::LogicAllianceSettingsChangedCommand((LogicAllianceSettingsChangedCommand *)v2);
            break;
          case 213:
            v2 = operator new(56);
            LogicClaimRewardCommand::LogicClaimRewardCommand((LogicClaimRewardCommand *)v2);
            break;
          case 214:
            v2 = operator new(48);
            LogicAddChestCommand::LogicAddChestCommand((LogicAddChestCommand *)v2);
            break;
          case 215:
            v2 = operator new(48);
            LogicDonateChestCommand::LogicDonateChestCommand((LogicDonateChestCommand *)v2);
            break;
          case 216:
            v2 = operator new(40);
            LogicAddSpellsCommand::LogicAddSpellsCommand((LogicAddSpellsCommand *)v2);
            break;
          case 217:
            v2 = operator new(48);
            LogicShopSeedChangedCommand::LogicShopSeedChangedCommand((LogicShopSeedChangedCommand *)v2);
            break;
          default:
            goto LABEL_14;
        }
      }
      return v2;
    }

    void __fastcall LogicCommandManager::saveCommandToJSON(
            Application *this,
            #1234 *a2,
            const PvpMatchmakeNotificationMessage *a3)
    {
      #1232 *v5; // x21
      int v6; // w0
      __int64 v7; // x0
      String v8; // [xsp+0h] [xbp-50h] BYREF
      String v9; // [xsp+18h] [xbp-38h] BYREF
    
      String::String(&v9, "ct");
      v5 = (#1232 *)operator new(16);
      v6 = (*(__int64 (__fastcall **)(#1234 *))(*(_QWORD *)a2 + 32LL))(a2);
      LogicJSONNumber::LogicJSONNumber(v5, v6);
      LogicJSONObject::put(this, &v9, v5);
      String::~String(&v9);
      String::String(&v8, "c");
      v7 = (*(__int64 (__fastcall **)(#1234 *))(*(_QWORD *)a2 + 72LL))(a2);
      LogicJSONObject::put(this, &v8, v7);
      String::~String(&v8);
    }

}; // end class LogicCommandManager
