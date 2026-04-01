class IGameCenterListener
{
public:

    void __fastcall IGameCenterListener::gameCenterProfilePicture(__int64 a1, __int64 a2, void *a3)
    {
      if ( a3 )
      {
        GLImage::~GLImage((__int64)a3);
        operator delete(a3);
      }
    }

}; // end class IGameCenterListener
