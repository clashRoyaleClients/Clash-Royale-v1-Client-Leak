class AskForPlayingFacebookFriendsMessage
{
public:

    void __fastcall AskForPlayingFacebookFriendsMessage::AskForPlayingFacebookFriendsMessage(
            AskForPlayingFacebookFriendsMessage *this)
    {
      _QWORD *v1; // x0
    
      v1 = (_QWORD *)PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *v1 = off_1004725E8;
      v1[9] = 0;
    }

    void __fastcall AskForPlayingFacebookFriendsMessage::destruct(HomeBattleReplayViewedMessage *this)
    {
      int *v2; // x20
      __int64 v3; // x22
      void *v4; // x21
    
      PiranhaMessage::destruct(this);
      v2 = (int *)*((_QWORD *)this + 9);
      if ( v2 )
      {
        if ( v2[3] < 1 )
          goto LABEL_15;
        v3 = 0;
        do
        {
          v4 = *(void **)(*(_QWORD *)v2 + 8 * v3);
          if ( v4 )
          {
            String::~String();
            operator delete(v4);
            v2 = (int *)*((_QWORD *)this + 9);
          }
          ++v3;
        }
        while ( v3 < v2[3] );
        if ( v2 )
        {
    LABEL_15:
          if ( *(_QWORD *)v2 )
            operator delete[](*(_QWORD *)v2);
          operator delete(v2);
        }
        *((_QWORD *)this + 9) = 0;
      }
      *((_QWORD *)this + 9) = 0;
    }

    __int64 __fastcall AskForPlayingFacebookFriendsMessage::encode(HomeBattleReplayViewedMessage *this)
    {
      __int64 v2; // x8
      int v3; // w20
      __int64 result; // x0
      __int64 v5; // x22
    
      PiranhaMessage::encode(this);
      v2 = *((_QWORD *)this + 9);
      if ( !v2 )
        return ByteStream::writeVInt((HomeBattleReplayViewedMessage *)((char *)this + 16), -1);
      v3 = *(_DWORD *)(v2 + 12);
      result = ByteStream::writeVInt((HomeBattleReplayViewedMessage *)((char *)this + 16), v3);
      if ( v3 >= 1 )
      {
        v5 = 0;
        do
          result = ByteStream::writeString(
                     (HomeBattleReplayViewedMessage *)((char *)this + 16),
                     *(String **)(**((_QWORD **)this + 9) + 8 * v5++));
        while ( v3 != (_DWORD)v5 );
      }
      return result;
    }

    __int64 __fastcall AskForPlayingFacebookFriendsMessage::decode(HomeBattleReplayViewedMessage *this)
    {
      __int64 result; // x0
      int v3; // w21
      _QWORD *v5; // x22
      __int64 v6; // x0
      __int64 String; // [xsp+8h] [xbp-28h] BYREF
    
      PiranhaMessage::decode(this);
      result = ByteStream::readVInt((HomeBattleReplayViewedMessage *)((char *)this + 16));
      v3 = result;
      if ( (_DWORD)result != -1 && (int)result < 10001 )
      {
        if ( !*((_QWORD *)this + 9) )
        {
          v5 = (_QWORD *)operator new(16);
          *v5 = 0;
          v5[1] = 0;
          *((_DWORD *)v5 + 2) = v3;
          if ( is_mul_ok(v3, 8u) )
            v6 = 8LL * v3;
          else
            v6 = -1;
          result = operator new[](v6);
          *v5 = result;
          *((_QWORD *)this + 9) = v5;
        }
        if ( v3 > 0 )
        {
          do
          {
            String = ByteStream::readString((HomeBattleReplayViewedMessage *)((char *)this + 16), 900000);
            result = LogicArrayList<String *>::add(*((_QWORD *)this + 9), &String);
            --v3;
          }
          while ( v3 );
        }
      }
      else
      {
        *((_QWORD *)this + 9) = 0;
      }
      return result;
    }

    __int64 __fastcall AskForPlayingFacebookFriendsMessage::getMessageType(HomeBattleReplayViewedMessage *this)
    {
      return 10513;
    }

    __int64 __fastcall AskForPlayingFacebookFriendsMessage::getServiceNodeType(HomeBattleReplayViewedMessage *this)
    {
      return 26;
    }

    __int64 __fastcall AskForPlayingFacebookFriendsMessage::setFacebookIds(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    void __fastcall AskForPlayingFacebookFriendsMessage::~AskForPlayingFacebookFriendsMessage(
            HomeBattleReplayViewedMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AskForPlayingFacebookFriendsMessage::~AskForPlayingFacebookFriendsMessage(
            HomeBattleReplayViewedMessage *this)
    {
      operator delete(this);
    }

}; // end class AskForPlayingFacebookFriendsMessage
