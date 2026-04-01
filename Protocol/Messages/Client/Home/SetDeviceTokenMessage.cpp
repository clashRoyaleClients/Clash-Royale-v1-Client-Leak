class SetDeviceTokenMessage
{
public:

    void __fastcall SetDeviceTokenMessage::SetDeviceTokenMessage(SetDeviceTokenMessage *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_100461800;
      *(_QWORD *)(v1 + 72) = 0;
      *(_DWORD *)(v1 + 80) = 0;
    }

    __int64 __fastcall SetDeviceTokenMessage::encode(AchievementItem *this)
    {
      PiranhaMessage::encode(this);
      return ByteStream::writeBytes((AchievementItem *)((char *)this + 16), *((char **)this + 9), *((_DWORD *)this + 20));
    }

    __int64 __fastcall SetDeviceTokenMessage::decode(AchievementItem *this)
    {
      const char *v2; // x1
      unsigned int BytesLength; // w8
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      BytesLength = ByteStream::readBytesLength((AchievementItem *)((char *)this + 16));
      *((_DWORD *)this + 20) = BytesLength;
      if ( BytesLength >= 0x3E9 )
        Debugger::error((__siginfo *)"Illegal byte array length encountered.", v2);
      result = ByteStream::readBytes((AchievementItem *)((char *)this + 16), BytesLength, 900000);
      *((_QWORD *)this + 9) = result;
      return result;
    }

    void __fastcall SetDeviceTokenMessage::setDeviceToken(AchievementItem *this, char *a2, int a3)
    {
      __int64 v6; // x0
      __int64 v7; // x0
      _BYTE *v8; // x0
      __int64 v9; // x9
    
      v6 = *((_QWORD *)this + 9);
      if ( v6 )
        operator delete[](v6);
      *((_QWORD *)this + 9) = 0;
      *((_DWORD *)this + 20) = a3;
      if ( a2 )
      {
        if ( a3 < 0LL )
          v7 = -1;
        else
          v7 = a3;
        v8 = (_BYTE *)operator new[](v7);
        *((_QWORD *)this + 9) = v8;
        if ( a3 >= 1 )
        {
          *v8 = *a2;
          if ( a3 != 1 )
          {
            v9 = 1;
            do
            {
              *(_BYTE *)(*((_QWORD *)this + 9) + v9) = a2[v9];
              ++v9;
            }
            while ( a3 != (_DWORD)v9 );
          }
        }
      }
    }

    __int64 __fastcall SetDeviceTokenMessage::getMessageType(AchievementItem *this)
    {
      return 10113;
    }

    void __fastcall SetDeviceTokenMessage::destruct(AchievementItem *this)
    {
      __int64 v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = *((_QWORD *)this + 9);
      if ( v2 )
        operator delete[](v2);
      *((_QWORD *)this + 9) = 0;
      *((_DWORD *)this + 20) = 0;
    }

    void __fastcall SetDeviceTokenMessage::~SetDeviceTokenMessage(AchievementItem *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall SetDeviceTokenMessage::~SetDeviceTokenMessage(AchievementItem *this)
    {
      operator delete(this);
    }

    __int64 __fastcall SetDeviceTokenMessage::getServiceNodeType(AchievementItem *this)
    {
      return 1;
    }

}; // end class SetDeviceTokenMessage
