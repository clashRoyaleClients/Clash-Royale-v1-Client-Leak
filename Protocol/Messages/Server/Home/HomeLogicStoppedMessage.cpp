class HomeLogicStoppedMessage
{
public:

    _QWORD *__fastcall HomeLogicStoppedMessage::HomeLogicStoppedMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_100471808;
      result[9] = 0;
      result[10] = 0;
      return result;
    }

    __int64 __fastcall HomeLogicStoppedMessage::setCommands(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    __int64 __fastcall HomeLogicStoppedMessage::setTick(__int64 this, int a2)
    {
      *(_DWORD *)(this + 80) = a2;
      return this;
    }

    __int64 __fastcall HomeLogicStoppedMessage::setChecksum(__int64 this, int a2)
    {
      *(_DWORD *)(this + 84) = a2;
      return this;
    }

    __int64 __fastcall HomeLogicStoppedMessage::encode(__int64 a1)
    {
      __int64 v2; // x8
      __int64 result; // x0
      __int64 v4; // x8
      __int64 v5; // x21
    
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeVInt((ChallengePopup *)(a1 + 16), *(_DWORD *)(a1 + 80));
      ByteStream::writeVInt((ChallengePopup *)(a1 + 16), *(_DWORD *)(a1 + 84));
      v2 = *(_QWORD *)(a1 + 72);
      if ( !v2 )
        return ByteStream::writeVInt((ChallengePopup *)(a1 + 16), 0);
      result = ByteStream::writeVInt((ChallengePopup *)(a1 + 16), *(_DWORD *)(v2 + 12));
      v4 = *(_QWORD *)(a1 + 72);
      if ( *(int *)(v4 + 12) >= 1 )
      {
        v5 = 0;
        do
        {
          result = LogicCommandManager::encodeCommand(a1 + 16, *(_QWORD *)(*(_QWORD *)v4 + 8 * v5++));
          v4 = *(_QWORD *)(a1 + 72);
        }
        while ( v5 < *(int *)(v4 + 12) );
      }
      return result;
    }

    void __fastcall HomeLogicStoppedMessage::decode(__int64 a1)
    {
      __int64 VInt; // x20
      _QWORD *v3; // x0
      _QWORD *v4; // x22
      const char *v5; // x1
      const String *v6; // x1
      __int64 v7; // x0
      int v8; // w22
      const char *v9; // x1
      _BYTE *v10; // [xsp+10h] [xbp-40h] BYREF
      _BYTE v11[24]; // [xsp+18h] [xbp-38h] BYREF
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_DWORD *)(a1 + 80) = ByteStream::readVInt((ChallengePopup *)(a1 + 16));
      *(_DWORD *)(a1 + 84) = ByteStream::readVInt((ChallengePopup *)(a1 + 16));
      VInt = ByteStream::readVInt((ChallengePopup *)(a1 + 16));
      v3 = (_QWORD *)operator new(16);
      v4 = v3;
      *v3 = 0;
      v3[1] = 0;
      if ( (unsigned int)VInt >= 0x201 )
      {
        *((_DWORD *)v3 + 2) = 0;
        *v3 = operator new[](0);
        *(_QWORD *)(a1 + 72) = v4;
        String::format((String *)"HomeLogicStoppedMessage::decode() command count is invalid (%d)", v5, VInt);
        Debugger::error((Debugger *)v11, v6);
      }
      *((_DWORD *)v3 + 2) = VInt;
      if ( is_mul_ok((int)VInt, 8u) )
        v7 = 8LL * (int)VInt;
      else
        v7 = -1;
      *v4 = operator new[](v7);
      *(_QWORD *)(a1 + 72) = v4;
      if ( (int)VInt >= 1 )
      {
        v8 = 0;
        do
        {
          v10 = LogicCommandManager::decodeCommand((Application *)(a1 + 16), (ChallengePopup *)1, 1);
          if ( !v10 )
            Debugger::error((__siginfo *)"HomeLogicStoppedMessage::decode() error decoding a command", v9);
          LogicArrayList<LogicCommand *>::add(*(_QWORD *)(a1 + 72), (__int64 *)&v10);
          ++v8;
        }
        while ( v8 < (int)VInt );
      }
    }

    __int64 __fastcall HomeLogicStoppedMessage::getMessageType(EnterNamePopup *this)
    {
      return 14105;
    }

    __int64 __fastcall HomeLogicStoppedMessage::getServiceNodeType(EnterNamePopup *this)
    {
      return 9;
    }

    void __fastcall HomeLogicStoppedMessage::destruct(__int64 a1)
    {
      __int64 v2; // x19
      int *v3; // x20
      int *v4; // t1
      __int64 v5; // x22
      __int64 v6; // x21
    
      PiranhaMessage::destruct((#1242 *)a1);
      v4 = *(int **)(a1 + 72);
      v2 = a1 + 72;
      v3 = v4;
      if ( v4 )
      {
        if ( v3[3] < 1 )
          goto LABEL_15;
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v5);
          if ( v6 )
          {
            (**(void (__fastcall ***)(_QWORD))v6)(*(_QWORD *)(*(_QWORD *)v3 + 8 * v5));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
            v3 = *(int **)v2;
          }
          ++v5;
        }
        while ( v5 < v3[3] );
        if ( v3 )
        {
    LABEL_15:
          if ( *(_QWORD *)v3 )
            operator delete[](*(_QWORD *)v3);
          operator delete(v3);
        }
        *(_QWORD *)v2 = 0;
      }
      *(_QWORD *)v2 = 0;
      *(_QWORD *)(v2 + 8) = 0;
    }

    void __fastcall HomeLogicStoppedMessage::~HomeLogicStoppedMessage(EnterNamePopup *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall HomeLogicStoppedMessage::~HomeLogicStoppedMessage(EnterNamePopup *this)
    {
      operator delete(this);
    }

}; // end class HomeLogicStoppedMessage
