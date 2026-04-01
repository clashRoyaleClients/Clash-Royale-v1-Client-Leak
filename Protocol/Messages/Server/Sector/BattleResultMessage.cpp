class BattleResultMessage
{
public:

    __int64 __fastcall BattleResultMessage::BattleResultMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)(result + 120) = 0;
      *(_BYTE *)(result + 128) = 0;
      *(_QWORD *)(result + 108) = 0;
      *(_QWORD *)(result + 100) = 0;
      *(_QWORD *)(result + 92) = 0;
      *(_QWORD *)result = off_1004708A8;
      *(_QWORD *)(result + 84) = 0;
      *(_QWORD *)(result + 76) = 0;
      *(_QWORD *)(result + 68) = 0;
      *(_QWORD *)(result + 140) = 0;
      *(_QWORD *)(result + 132) = 0;
      return result;
    }

    __int64 __fastcall BattleResultMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 72));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 76));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 80));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 84));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 88));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 92));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 96));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 100));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 104));
      ByteStreamHelper::writeGlobalID(a1 + 16, (SectorCommandMessage *)*(unsigned int *)(a1 + 108));
      ByteStream::writeBytes((ByteStream *)(a1 + 16), *(char **)(a1 + 120), *(_DWORD *)(a1 + 112));
      ByteStream::writeBoolean((ByteStream *)(a1 + 16), *(_BYTE *)(a1 + 128));
      ByteStreamHelper::writeGlobalID(a1 + 16, (SectorCommandMessage *)*(unsigned int *)(a1 + 132));
      ByteStreamHelper::writeGlobalID(a1 + 16, (SectorCommandMessage *)*(unsigned int *)(a1 + 136));
      ByteStreamHelper::writeGlobalID(a1 + 16, (SectorCommandMessage *)*(unsigned int *)(a1 + 140));
      return ByteStreamHelper::writeGlobalID(a1 + 16, (SectorCommandMessage *)*(unsigned int *)(a1 + 144));
    }

    __int64 __fastcall BattleResultMessage::decode(__int64 a1)
    {
      int BytesLength; // w0
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 72) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 76) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 80) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 84) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 88) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 92) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 96) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 100) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 104) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 108) = ByteStreamHelper::readGlobalID(a1 + 16);
      BytesLength = ByteStream::readBytesLength((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 112) = BytesLength;
      *(_QWORD *)(a1 + 120) = ByteStream::readBytes((ByteStream *)(a1 + 16), BytesLength, 900000);
      *(_BYTE *)(a1 + 128) = ByteStream::readBoolean((ByteStream *)(a1 + 16));
      *(_DWORD *)(a1 + 132) = ByteStreamHelper::readGlobalID(a1 + 16);
      *(_DWORD *)(a1 + 136) = ByteStreamHelper::readGlobalID(a1 + 16);
      *(_DWORD *)(a1 + 140) = ByteStreamHelper::readGlobalID(a1 + 16);
      result = ByteStreamHelper::readGlobalID(a1 + 16);
      *(_DWORD *)(a1 + 144) = result;
      return result;
    }

    __int64 BattleResultMessage::getMessageType()
    {
      return 20225;
    }

    __int64 BattleResultMessage::getServiceNodeType()
    {
      return 9;
    }

    void __fastcall BattleResultMessage::destruct(__int64 a1)
    {
      __int64 v2; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(_QWORD *)(a1 + 120);
      if ( v2 )
        operator delete[](v2);
      *(_QWORD *)(a1 + 120) = 0;
      *(_BYTE *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 108) = 0;
      *(_QWORD *)(a1 + 100) = 0;
      *(_QWORD *)(a1 + 92) = 0;
      *(_QWORD *)(a1 + 84) = 0;
      *(_QWORD *)(a1 + 76) = 0;
      *(_QWORD *)(a1 + 68) = 0;
      *(_QWORD *)(a1 + 140) = 0;
      *(_QWORD *)(a1 + 132) = 0;
    }

    __int64 __fastcall BattleResultMessage::getGoldReward(__int64 a1)
    {
      return *(unsigned int *)(a1 + 92);
    }

    __int64 __fastcall BattleResultMessage::getTreasureChest(__int64 a1)
    {
      return LogicDataTables::getDataById((SectorCommandMessage *)*(unsigned int *)(a1 + 108), 19);
    }

    __int64 __fastcall BattleResultMessage::getExpReward(__int64 a1)
    {
      return *(unsigned int *)(a1 + 96);
    }

    __int64 __fastcall BattleResultMessage::getOwnStars(__int64 a1)
    {
      return *(unsigned int *)(a1 + 100);
    }

    __int64 __fastcall BattleResultMessage::getOpponentStars(__int64 a1)
    {
      return *(unsigned int *)(a1 + 104);
    }

    __int64 __fastcall BattleResultMessage::removeFullUpdateBytes(__int64 a1)
    {
      __int64 v1; // x8
    
      v1 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 120) = 0;
      return v1;
    }

    __int64 __fastcall BattleResultMessage::getFullUpdateSize(__int64 a1)
    {
      return *(unsigned int *)(a1 + 112);
    }

    void BattleResultMessage::~BattleResultMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall BattleResultMessage::~BattleResultMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class BattleResultMessage
