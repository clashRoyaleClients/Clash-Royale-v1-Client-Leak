class OutOfSyncMessage
{
public:

    __int64 __fastcall OutOfSyncMessage::OutOfSyncMessage(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::PiranhaMessage(a1, 0);
      *(_QWORD *)result = off_100469120;
      *(_QWORD *)(result + 68) = 0;
      *(_DWORD *)(result + 76) = 0;
      return result;
    }

    __int64 __fastcall OutOfSyncMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 68));
      ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 72));
      return ByteStream::writeVInt((#1225 *)(a1 + 16), *(_DWORD *)(a1 + 76));
    }

    __int64 __fastcall OutOfSyncMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_DWORD *)(a1 + 68) = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 72) = ByteStream::readVInt((#1225 *)(a1 + 16));
      result = ByteStream::readVInt((#1225 *)(a1 + 16));
      *(_DWORD *)(a1 + 76) = result;
      return result;
    }

    __int64 __fastcall OutOfSyncMessage::getMessageType(PlayerContextMenuBase *this)
    {
      return 24104;
    }

    __int64 __fastcall OutOfSyncMessage::getServiceNodeType(PlayerContextMenuBase *this)
    {
      return 10;
    }

    __int64 __fastcall OutOfSyncMessage::getServerChecksum(PlayerContextMenuBase *this)
    {
      return *((unsigned int *)this + 17);
    }

    __int64 __fastcall OutOfSyncMessage::getClientChecksum(PlayerContextMenuBase *this)
    {
      return *((unsigned int *)this + 18);
    }

    __int64 __fastcall OutOfSyncMessage::destruct(__int64 a1)
    {
      __int64 result; // x0
    
      result = PiranhaMessage::destruct((#1242 *)a1);
      *(_QWORD *)(a1 + 68) = 0;
      *(_DWORD *)(a1 + 76) = 0;
      return result;
    }

    void __fastcall OutOfSyncMessage::~OutOfSyncMessage(PlayerContextMenuBase *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall OutOfSyncMessage::~OutOfSyncMessage(void *a1)
    {
      operator delete(a1);
    }

}; // end class OutOfSyncMessage
