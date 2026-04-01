class AvatarOnlineStatusUpdated
{
public:

    void __fastcall AvatarOnlineStatusUpdated::AvatarOnlineStatusUpdated(AvatarOnlineStatusUpdated *this)
    {
      __int64 v1; // x0
    
      v1 = PiranhaMessage::PiranhaMessage((__int64)this, 0);
      *(_QWORD *)v1 = off_1004618D8;
      *(_DWORD *)(v1 + 68) = 0;
      *(_QWORD *)(v1 + 72) = 0;
    }

    __int64 __fastcall AvatarOnlineStatusUpdated::encode(IEffectRenderable *this)
    {
      PiranhaMessage::encode(this);
      ChecksumEncoder::writeLong((char *)this + 16, *((_QWORD *)this + 9));
      return ByteStream::writeVInt((IEffectRenderable *)((char *)this + 16), *((_DWORD *)this + 17));
    }

    __int64 __fastcall AvatarOnlineStatusUpdated::decode(IEffectRenderable *this)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode(this);
      *((_QWORD *)this + 9) = ByteStream::readLong((IEffectRenderable *)((char *)this + 16));
      result = ByteStream::readVInt((IEffectRenderable *)((char *)this + 16));
      *((_DWORD *)this + 17) = result;
      return result;
    }

    __int64 __fastcall AvatarOnlineStatusUpdated::getMessageType(IEffectRenderable *this)
    {
      return 20206;
    }

    __int64 __fastcall AvatarOnlineStatusUpdated::getServiceNodeType(IEffectRenderable *this)
    {
      return 9;
    }

    void __fastcall AvatarOnlineStatusUpdated::destruct(IEffectRenderable *this)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct(this);
      v2 = (void *)*((_QWORD *)this + 9);
      if ( v2 )
        operator delete(v2);
      *((_DWORD *)this + 17) = 0;
      *((_QWORD *)this + 9) = 0;
    }

    void __fastcall AvatarOnlineStatusUpdated::~AvatarOnlineStatusUpdated(IEffectRenderable *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall AvatarOnlineStatusUpdated::~AvatarOnlineStatusUpdated(IEffectRenderable *this)
    {
      operator delete(this);
    }

}; // end class AvatarOnlineStatusUpdated
