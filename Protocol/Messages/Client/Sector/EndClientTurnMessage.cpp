class EndClientTurnMessage
{
public:

    __int64 __fastcall EndClientTurnMessage::EndClientTurnMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_100465AC8;
      *(_QWORD *)(result + 96) = 0;
      *(_DWORD *)(result + 88) = 0;
      *(_QWORD *)(result + 72) = 0;
      *(_QWORD *)(result + 80) = 0;
      return result;
    }

    __int64 __fastcall EndClientTurnMessage::setCommands(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    __int64 __fastcall EndClientTurnMessage::setTick(__int64 this, int a2)
    {
      *(_DWORD *)(this + 80) = a2;
      return this;
    }

    __int64 __fastcall EndClientTurnMessage::setChecksum(__int64 this, int a2)
    {
      *(_DWORD *)(this + 84) = a2;
      return this;
    }

    __int64 __fastcall EndClientTurnMessage::encode(__int64 a1)
    {
      __int64 v2; // x8
      #1122 *v3; // x0
      __int64 v4; // x8
      __int64 v5; // x21
      int v6; // w2
      char *v7; // x1
      ByteStream *v8; // x0
    
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 80));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 84));
      v2 = *(_QWORD *)(a1 + 72);
      if ( v2 )
      {
        v3 = (#1122 *)ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(v2 + 12));
        v4 = *(_QWORD *)(a1 + 72);
        if ( *(int *)(v4 + 12) >= 1 )
        {
          v5 = 0;
          do
          {
            v3 = (#1122 *)LogicCommandManager::encodeCommand(a1 + 16, *(_QWORD *)(*(_QWORD *)v4 + 8 * v5++));
            v4 = *(_QWORD *)(a1 + 72);
          }
          while ( v5 < *(int *)(v4 + 12) );
        }
      }
      else
      {
        v3 = (#1122 *)ByteStream::writeVInt((#1225 *)(a1 + 16), 0);
      }
      if ( (unsigned int)LogicVersion::isDev(v3) && (v6 = *(_DWORD *)(a1 + 88), v6 >= 1) )
      {
        v7 = *(char **)(a1 + 96);
        v8 = (ByteStream *)(a1 + 16);
      }
      else
      {
        v6 = -1;
        v8 = (ByteStream *)(a1 + 16);
        v7 = 0;
      }
      return ByteStream::writeBytes(v8, v7, v6);
    }

    __int64 __fastcall EndClientTurnMessage::decode(__int64 a1)
    {
      __int64 VInt; // x21
      _QWORD *v3; // x0
      _QWORD *v4; // x22
      const char *v5; // x1
      const String *v6; // x1
      __int64 v7; // x0
      int v8; // w22
      const char *v9; // x1
      int BytesLength; // w21
      int Length; // w22
      int Offset; // w0
      __int64 result; // x0
      _BYTE *v14; // [xsp+10h] [xbp-40h] BYREF
      _BYTE v15[24]; // [xsp+18h] [xbp-38h] BYREF
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_DWORD *)(a1 + 80) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 84) = ByteStream::readVInt((#1225 *)(a1 + 16));
      VInt = ByteStream::readVInt((#1225 *)(a1 + 16));
      v3 = (_QWORD *)operator new(16);
      v4 = v3;
      *v3 = 0;
      v3[1] = 0;
      if ( (unsigned int)VInt >= 0x201 )
      {
        *((_DWORD *)v3 + 2) = 0;
        *v3 = operator new[](0);
        *(_QWORD *)(a1 + 72) = v4;
        String::format((String *)"EndClientTurnMessage::decode() command count is invalid (%d)", v5, VInt);
        Debugger::error((Debugger *)v15, v6);
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
          v14 = LogicCommandManager::decodeCommand((Application *)(a1 + 16), (#1225 *)1, 1);
          if ( !v14 )
            Debugger::error((__siginfo *)"EndClientTurnMessage::decode() error decoding a command", v9);
          LogicArrayList<LogicCommand *>::add(*(_QWORD *)(a1 + 72), (__int64 *)&v14);
          ++v8;
        }
        while ( v8 < (int)VInt );
      }
      BytesLength = ByteStream::readBytesLength((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 88) = BytesLength;
      Length = ByteStream::getLength(a1 + 16);
      Offset = ByteStream::getOffset(a1 + 16);
      result = ByteStream::readBytes((ByteStream *)(a1 + 16), BytesLength, Length - Offset);
      *(_QWORD *)(a1 + 96) = result;
      return result;
    }

    __int64 __fastcall EndClientTurnMessage::getMessageType(RenderSystem *this)
    {
      return 14102;
    }

    __int64 __fastcall EndClientTurnMessage::getServiceNodeType(RenderSystem *this)
    {
      return 9;
    }

    void __fastcall EndClientTurnMessage::destruct(__int64 a1)
    {
      int *v2; // x20
      void **v3; // x22
      __int64 v4; // x23
      __int64 v5; // x21
      __int64 v6; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v3 = (void **)(a1 + 72);
      v2 = *(int **)(a1 + 72);
      if ( v2 )
      {
        if ( v2[3] < 1 )
          goto LABEL_17;
        v4 = 0;
        do
        {
          v5 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v4);
          if ( v5 )
          {
            (**(void (__fastcall ***)(_QWORD))v5)(*(_QWORD *)(*(_QWORD *)v2 + 8 * v4));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
            v2 = (int *)*v3;
          }
          ++v4;
        }
        while ( v4 < v2[3] );
        if ( v2 )
        {
    LABEL_17:
          if ( *(_QWORD *)v2 )
            operator delete[](*(_QWORD *)v2);
          operator delete(v2);
        }
        *v3 = 0;
      }
      v6 = *(_QWORD *)(a1 + 96);
      if ( v6 )
        operator delete[](v6);
      *(_QWORD *)(a1 + 96) = 0;
      *(_DWORD *)(a1 + 88) = 0;
      *v3 = 0;
      *(_QWORD *)(a1 + 80) = 0;
    }

    __int64 __fastcall EndClientTurnMessage::setDebugByteArray(__int64 this, char *a2, int a3)
    {
      *(_QWORD *)(this + 96) = a2;
      *(_DWORD *)(this + 88) = a3;
      return this;
    }

    void __fastcall EndClientTurnMessage::~EndClientTurnMessage(RenderSystem *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall EndClientTurnMessage::~EndClientTurnMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class EndClientTurnMessage
