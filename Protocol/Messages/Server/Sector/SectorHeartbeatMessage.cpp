class SectorHeartbeatMessage
{
public:

    void __fastcall SectorHeartbeatMessage::SectorHeartbeatMessage(SectorHeartbeatMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_1004692D0;
      *(_QWORD *)(v1 + 68) = 0;
      *(_DWORD *)(v1 + 104) = 0;
      *(_QWORD *)(v1 + 88) = 0;
      *(_QWORD *)(v1 + 96) = 0;
      *(_QWORD *)(v1 + 80) = 0;
    }

    void __fastcall SectorHeartbeatMessage::destruct(LogicEffectData *this)
    {
      int v2; // w22
      __int64 v3; // x23
      __int64 v4; // x20
      __int64 v5; // x0
    
      PiranhaMessage::destruct(this);
      v2 = *((_DWORD *)this + 23);
      if ( v2 >= 1 )
      {
        v3 = 0;
        do
        {
          v4 = *(_QWORD *)(*((_QWORD *)this + 10) + 8 * v3);
          if ( v4 )
          {
            (**(void (__fastcall ***)(__int64))v4)(v4);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
          }
          ++v3;
        }
        while ( v2 != (_DWORD)v3 );
      }
      v5 = *((_QWORD *)this + 12);
      if ( v5 )
        operator delete[](v5);
      *(_QWORD *)((char *)this + 68) = 0;
      *(_QWORD *)((char *)this + 92) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
    }

    __int64 __fastcall SectorHeartbeatMessage::encode(LogicEffectData *this)
    {
      #1225 *v2; // x19
      __int64 result; // x0
      int v4; // w21
      __int64 v5; // x22
      char *v6; // x1
      int v7; // w2
    
      v2 = (LogicEffectData *)((char *)this + 16);
      ByteStream::writeVInt((LogicEffectData *)((char *)this + 16), *((_DWORD *)this + 18));
      result = ByteStream::writeVInt(v2, *((_DWORD *)this + 17));
      v4 = *((_DWORD *)this + 23);
      if ( v4 >= 1 )
      {
        ByteStream::writeVInt(v2, *((_DWORD *)this + 23));
        v5 = 0;
        do
          result = LogicCommandManager::encodeCommand((__int64)v2, *(_QWORD *)(*((_QWORD *)this + 10) + 8 * v5++));
        while ( v4 != (_DWORD)v5 );
      }
      v6 = (char *)*((_QWORD *)this + 12);
      if ( v6 )
      {
        v7 = *((_DWORD *)this + 26);
        if ( v7 >= 1 )
        {
          if ( !v4 )
          {
            ByteStream::writeVInt(v2, 0);
            v6 = (char *)*((_QWORD *)this + 12);
            v7 = *((_DWORD *)this + 26);
          }
          return ByteStream::writeBytes(v2, v6, v7);
        }
      }
      return result;
    }

    __int64 __fastcall SectorHeartbeatMessage::decode(__int64 a1)
    {
      #1225 *v2; // x20
      __int64 result; // x0
      int VInt; // w21
      int v5; // w23
      int Offset; // w21
      int Length; // w0
      __int64 v8; // [xsp+8h] [xbp-38h] BYREF
    
      v2 = (#1225 *)(a1 + 16);
      *(_DWORD *)(a1 + 72) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 68) = ByteStream::readVInt(v2);
      result = ByteStream::isAtEnd(v2);
      if ( (result & 1) == 0 )
      {
        VInt = ByteStream::readVInt(v2);
        LogicArrayList<LogicCommand *>::ensureCapacity(a1 + 80, VInt);
        if ( VInt < 1 )
        {
    LABEL_6:
          result = ByteStream::isAtEnd(v2);
          if ( (result & 1) == 0 )
          {
            *(_DWORD *)(a1 + 104) = ByteStream::readBytesLength(v2);
            Offset = ByteStream::getOffset(v2);
            Length = ByteStream::getLength(v2);
            result = ByteStream::readBytes(v2, *(_DWORD *)(a1 + 104), Length - Offset);
            *(_QWORD *)(a1 + 96) = result;
            if ( !result )
              *(_DWORD *)(a1 + 104) = 0;
          }
        }
        else
        {
          v5 = 0;
          while ( 1 )
          {
            result = (__int64)LogicCommandManager::decodeCommand(v2, (#1225 *)1, 1);
            v8 = result;
            if ( !result )
              break;
            LogicArrayList<LogicCommand *>::add(a1 + 80, &v8);
            if ( ++v5 >= VInt )
              goto LABEL_6;
          }
        }
      }
      return result;
    }

    __int64 __fastcall SectorHeartbeatMessage::getMessageType(LogicEffectData *this)
    {
      return 21902;
    }

    __int64 __fastcall SectorHeartbeatMessage::getServiceNodeType(LogicEffectData *this)
    {
      return 16;
    }

    __int64 __fastcall SectorHeartbeatMessage::getChecksum(LogicEffectData *this)
    {
      return *((unsigned int *)this + 17);
    }

    __int64 __fastcall SectorHeartbeatMessage::getCommands(LogicEffectData *this)
    {
      return (__int64)this + 80;
    }

    __int64 __fastcall SectorHeartbeatMessage::removeServerTickData(LogicEffectData *this)
    {
      __int64 v1; // x8
    
      v1 = *((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = 0;
      return v1;
    }

    __int64 __fastcall SectorHeartbeatMessage::getServerTickDataLength(LogicEffectData *this)
    {
      return *((unsigned int *)this + 26);
    }

    __int64 __fastcall SectorHeartbeatMessage::getServerTurn(LogicEffectData *this)
    {
      return *((unsigned int *)this + 18);
    }

    void __fastcall SectorHeartbeatMessage::~SectorHeartbeatMessage(LogicEffectData *this)
    {
      __int64 v1; // x0
      _QWORD *v2; // x20
    
      *(_QWORD *)this = off_1004692D0;
      v2 = (_QWORD *)((char *)this + 80);
      v1 = *((_QWORD *)this + 10);
      if ( v1 )
        operator delete[](v1);
      *v2 = 0;
      v2[1] = 0;
    }

    void __fastcall SectorHeartbeatMessage::~SectorHeartbeatMessage(LogicEffectData *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_1004692D0;
      v2 = *((_QWORD *)this + 10);
      if ( v2 )
        operator delete[](v2);
      operator delete(this);
    }

}; // end class SectorHeartbeatMessage
